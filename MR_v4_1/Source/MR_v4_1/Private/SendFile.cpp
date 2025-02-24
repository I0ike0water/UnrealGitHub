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
    // 1) ���� �ε�
    TArray<uint8> FileData;
    if (!FFileHelper::LoadFileToArray(FileData, *FilePath))
    {
        UE_LOG(LogTemp, Error, TEXT("[ERROR] Failed to load file: %s"), *FilePath);
        return;
    }

    // 2) ���� ����
    ISocketSubsystem* SocketSubsystem = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM);
    if (!SocketSubsystem)
    {
        UE_LOG(LogTemp, Error, TEXT("[ERROR] SocketSubsystem is null."));
        return;
    }

    // TCP ��Ʈ�� ���� ����
    FSocket* Socket = SocketSubsystem->CreateSocket(NAME_Stream, TEXT("Default"), false);
    if (!Socket)
    {
        UE_LOG(LogTemp, Error, TEXT("[ERROR] Socket creation failed."));
        return;
    }

    // Receive Timeout, Send Timeout �� �ʿ� �� ����
    // ���� (1�� Ÿ�Ӿƿ�)
    Socket->SetReuseAddr(true);
    Socket->SetNonBlocking(false);
    Socket->SetRecvErr();
    int32 Timeout = 1000; // milliseconds
    Socket->SetSendBufferSize(BUFFER_SIZE, Timeout);
    Socket->SetReceiveBufferSize(BUFFER_SIZE, Timeout);

    // 3) ���� �ּ� ����
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

    // 4) ������ ����
    if (!Socket->Connect(*ServerAddress))
    {
        UE_LOG(LogTemp, Error, TEXT("[ERROR] Connection failed to %s:%d"), *ServerIP, ServerPort);
        Socket->Close();
        return;
    }

    UE_LOG(LogTemp, Log, TEXT("[SENT] Connected to %s:%d"), *ServerIP, ServerPort);

    // --- ������ �ۼ��ſ� ���� ���� �Լ��� ���� ---
    auto SendString = [&](const FString& Msg)
        {
            // ���ڿ��� UTF-8(�Ǵ� ANSI)�� ��ȯ �� ����
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
                // ���� �����Ͱ� ���ڿ��̶�� �����ϰ� ó��
                ReceiveBuffer.Add(0); // null terminator
                FString Received = UTF8_TO_TCHAR(reinterpret_cast<const char*>(ReceiveBuffer.GetData()));
                Received = Received.TrimStartAndEnd();
                return Received;
            }
            return TEXT("");
        };

    // 5) "SEND_FILE" ��û ������
    if (!SendString(TEXT("SEND_FILE")))
    {
        Socket->Close();
        return;
    }
    UE_LOG(LogTemp, Log, TEXT("[SENT] request: SEND_FILE"));

    // 6) �����κ��� "READY" ���� �ޱ�
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

    // 7) ���� ���� ���� (ex: "VOICE,filename.wav,1024")
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

    // 8) ���� "READY" ��Ȯ��
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

    // 9) ���� ������ ����
    {
        int64 BytesSent = 0;
        int64 TotalBytes = FileData.Num();

        while (BytesSent < TotalBytes)
        {
            int64 ChunkSize = FMath::Min<int64>(BUFFER_SIZE, TotalBytes - BytesSent);

            // ���� ����
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

            // ���� ���� ���
            FString Response = ReceiveString();
            if (Response.Contains(TEXT("CONTINUE")))
            {
                // ��� ����
                continue;
            }
            else if (Response.Contains(TEXT("SUCCESS")))
            {
                UE_LOG(LogTemp, Log, TEXT("File transfer successful!"));
                break;
            }
            else if (Response.Contains(TEXT("RETRANSMIT")))
            {
                // ������ ûũ ������
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
                // ����ġ ���� ������ ���
                UE_LOG(LogTemp, Warning, TEXT("[SERVER] Unexpected response during transfer: %s"), *Response);
            }
        }
    }

    // 10) ���� �Ϸ� ��, �߰� ���(�����ν� ��� ��) ����
    {
        sendCheck = true;
        FinalResult = ReceiveString();
        UE_LOG(LogTemp, Log, TEXT("Server response: %s"), *FinalResult);
    }

    // 11) ���� �ݱ�
    if (Socket)
    {
        Socket->Close();
        ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(Socket);
    }
}