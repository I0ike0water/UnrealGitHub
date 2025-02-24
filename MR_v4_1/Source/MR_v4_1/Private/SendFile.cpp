#include "SendFile.h"

#include "Sockets.h"
#include "SocketSubsystem.h"
#include "Networking.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

#define BUFFER_SIZE 1024


ASendFile::ASendFile()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ASendFile::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASendFile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ASendFile::SendFileToServer(const FString& ServerIP, int32 ServerPort, const FString& FilePath)
{
    // 1) 파일 로드
    TArray<uint8> FileData;
    if (!FFileHelper::LoadFileToArray(FileData, *FilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("[ERROR] Failed to load file: %s"), *FilePath);
        return;
    }

    // 2) 소켓 생성
    ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
    if (!SocketSubsystem)
    {
        UE_LOG(LogTemp, Error, TEXT("[ERROR] SocketSubsystem is null."));
        return;
    }

    // TCP 스트림 소켓 생성
    FSocket* Socket = SocketSubsystem->CreateSocket(NAME_Stream, TEXT("Default"), false);
    if (!Socket)
    {
        UE_LOG(LogTemp, Error, TEXT("[ERROR] Socket creation failed."));
        return;
    }

    // Receive Timeout, Send Timeout 등 필요 시 설정
    // 예시 (1초 타임아웃)
    Socket->SetReuseAddr(true);
    Socket->SetNonBlocking(false);
    Socket->SetRecvErr();
    int32 Timeout = 1000; // milliseconds
    Socket->SetSendBufferSize(BUFFER_SIZE, Timeout);
    Socket->SetReceiveBufferSize(BUFFER_SIZE, Timeout);

    // 3) 서버 주소 설정
    TSharedRef<FInternetAddr> ServerAddress = SocketSubsystem->CreateInternetAddr();
    bool bIsValidIP = false;
    ServerAddress->SetIp(*ServerIP, bIsValidIP);
    ServerAddress->SetPort(ServerPort);

    if (!bIsValidIP)
    {
        UE_LOG(LogTemp, Error, TEXT("[ERROR] Invalid IP address: %s"), *ServerIP);
        Socket->Close();
        return;
    }

    // 4) 서버에 연결
    if (!Socket->Connect(*ServerAddress))
    {
        UE_LOG(LogTemp, Error, TEXT("[ERROR] Connection failed to %s:%d"), *ServerIP, ServerPort);
        Socket->Close();
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("[SENT] Connected to %s:%d"), *ServerIP, ServerPort);

    // --- 데이터 송수신에 사용될 람다 함수들 정의 ---
    auto SendString = [&](const FString& Msg)
        {
            // 문자열을 UTF-8(또는 ANSI)로 변환 후 전송
            FTCHARToUTF8 Convert(*Msg);
            int32 BytesToSend = Convert.Length();
            int32 TotalSent = 0;

            while (TotalSent < BytesToSend)
            {
                int32 Sent = 0;
                bool bSuccess = Socket->Send(
                    reinterpret_cast<const uint8*>(Convert.Get() + TotalSent),
                    BytesToSend - TotalSent,
                    Sent
                );

                if (!bSuccess || Sent <= 0)
                {
                    UE_LOG(LogTemp, Error, TEXT("[ERROR] Failed to send string: %s"), *Msg);
                    return false;
                }
                TotalSent += Sent;
            }
            return true;
        };

    auto ReceiveString = [&]() -> FString
        {
            TArray<uint8> ReceiveBuffer;
            ReceiveBuffer.SetNum(BUFFER_SIZE);

            int32 BytesRead = 0;
            if (Socket->Recv(ReceiveBuffer.GetData(), ReceiveBuffer.Num(), BytesRead))
            {
                // 받은 데이터가 문자열이라고 가정하고 처리
                ReceiveBuffer.Add(0); // null terminator
                FString Received = UTF8_TO_TCHAR(reinterpret_cast<const char*>(ReceiveBuffer.GetData()));
                Received = Received.TrimStartAndEnd();
                return Received;
            }
            return TEXT("");
        };

    // 5) "SEND_FILE" 요청 보내기
    if (!SendString(TEXT("SEND_FILE")))
    {
        Socket->Close();
        return;
    }
    UE_LOG(LogTemp, Log, TEXT("[SENT] request: SEND_FILE"));

    // 6) 서버로부터 "READY" 응답 받기
    {
        FString Response = ReceiveString();
        UE_LOG(LogTemp, Log, TEXT("[RECEIVED] response: %s"), *Response);

        if (!Response.Equals(TEXT("READY"), ESearchCase::IgnoreCase))
        {
            UE_LOG(LogTemp, Error, TEXT("[ERROR] Unexpected server response. Expected 'READY', got: %s"), *Response);
            Socket->Close();
            return;
        }
    }

    // 7) 파일 정보 전송 (ex: "VOICE,filename.wav,1024")
    {
        FString FileName = FPaths::GetCleanFilename(FilePath);
        FString FileInfo = FString::Printf(TEXT("VOICE,%s,%d"), *FileName, FileData.Num());
        UE_LOG(LogTemp, Log, TEXT("[SENT] file info: %s"), *FileInfo);

        if (!SendString(FileInfo))
        {
            Socket->Close();
            return;
        }
    }

    // 8) 서버 "READY" 재확인
    {
        FString Response = ReceiveString();
        UE_LOG(LogTemp, Log, TEXT("[RECEIVED] response: %s"), *Response);

        if (!Response.Equals(TEXT("READY"), ESearchCase::IgnoreCase))
        {
            UE_LOG(LogTemp, Error, TEXT("[ERROR] Unexpected server response. Expected 'READY', got: %s"), *Response);
            Socket->Close();
            return;
        }
    }

    // 9) 파일 데이터 전송
    {
        int64 BytesSent = 0;
        int64 TotalBytes = FileData.Num();

        while (BytesSent < TotalBytes)
        {
            int64 ChunkSize = FMath::Min<int64>(BUFFER_SIZE, TotalBytes - BytesSent);

            // 실제 전송
            int32 ActuallySent = 0;
            bool bSendSuccess = Socket->Send(
                FileData.GetData() + BytesSent,
                ChunkSize,
                ActuallySent
            );

            if (!bSendSuccess || ActuallySent <= 0)
            {
                UE_LOG(LogTemp, Error, TEXT("[ERROR] File data send failed."));
                break;
            }

            BytesSent += ActuallySent;
            UE_LOG(LogTemp, Log, TEXT("File Sending... %lld/%lld bytes"), BytesSent, TotalBytes);

            // 서버 응답 대기
            FString Response = ReceiveString();
            if (Response.Contains(TEXT("CONTINUE")))
            {
                // 계속 전송
                continue;
            }
            else if (Response.Contains(TEXT("SUCCESS")))
            {
                UE_LOG(LogTemp, Log, TEXT("File transfer successful!"));
                break;
            }
            else if (Response.Contains(TEXT("RETRANSMIT")))
            {
                // 마지막 청크 재전송
                UE_LOG(LogTemp, Warning, TEXT("[SERVER] RETRANSMIT requested. Resending last chunk."));
                int32 RetransSent = 0;
                Socket->Send(FileData.GetData() + (BytesSent - ActuallySent), ActuallySent, RetransSent);
            }
            else if (Response.Contains(TEXT("FAILURE")))
            {
                UE_LOG(LogTemp, Error, TEXT("[ERROR] File transfer failed according to server."));
                break;
            }
            else
            {
                // 예상치 못한 응답인 경우
                UE_LOG(LogTemp, Warning, TEXT("[SERVER] Unexpected response during transfer: %s"), *Response);
            }
        }
    }

    // 10) 전송 완료 후, 추가 결과(음성인식 결과 등) 수신
    {
        sendCheck = true;
        FinalResult = ReceiveString();
        UE_LOG(LogTemp, Log, TEXT("Server response: %s"), *FinalResult);
    }

    // 11) 소켓 닫기
    if (Socket)
    {
        Socket->Close();
        ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(Socket);
    }
}