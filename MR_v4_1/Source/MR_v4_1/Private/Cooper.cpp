#include "Cooper.h"
#include "Components/SkeletalMeshComponent.h"

ACooper::ACooper()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ACooper::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACooper::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACooper::ChangeWingSpan(float wingspan, USkeletalMeshComponent* skeletalMesh) {
	
	if (skeletalMesh) {
		FTransform BoneTransform;
		skeletalMesh->SetRelativeScale3D(NewScaleVecotr);
	}

}