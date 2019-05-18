// Fill out your copyright notice in the Description page of Project Settings.

#include "SlidingDoor.h"



// Sets default values
ASlidingDoor::ASlidingDoor() : Super()
{
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->bGenerateOverlapEvents = true;
	}
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetWorldScale3D(FVector(0.3f, 2.f, 3.f));
	SetActorEnableCollision(true);
	IsOpen = false;
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASlidingDoor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASlidingDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsOpen)
	{
		SetActorLocation(FMath::Lerp(GetActorLocation(), TargetLocation, 0.05f));
	}
}

void ASlidingDoor::Open()
{
	TargetLocation = ActorToWorld().TransformPositionNoScale(FVector(0.f, 0.f, 400.f));
	IsOpen = true;
}

