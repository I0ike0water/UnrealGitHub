// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SendFile.generated.h"

UCLASS()
class MR_V4_1_API ASendFile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASendFile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "File Transfer")
	FString FinalResult;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Check")
	bool sendCheck;

	UFUNCTION(BlueprintCallable, Category = "FileTransfer")
	void SendFileToServer(const FString& ServerIP, int32 ServerPort, const FString& FilePath);
};
