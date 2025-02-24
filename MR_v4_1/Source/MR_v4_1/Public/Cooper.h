// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cooper.generated.h"

UCLASS()
class MR_V4_1_API ACooper : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACooper();
<<<<<<< HEAD
=======

	float currentHeight;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
>>>>>>> 825966496a4f1f85d1065950171fe3b07c3d8a29
};
