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
	DoorIsOpen = false;
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASlidingDoor::BeginPlay()
{
	Super::BeginPlay();
	Open();

	SetLifeSpan(10);
}

// Called every frame
void ASlidingDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Lift the actor

	if ( (DoorIsOpen == true) && (DoorTimer < 10.f) )
	{
		SetActorLocation(FMath::Lerp(GetActorLocation(), TargetLocation, 0.015f));

		DoorTimer = DoorTimer + 0.1f;

		if (DoorTimer >= 10.f)
		{
			DoorIsOpen = false;
		}
	}
	// Lower the actor
	else if (DoorIsOpen == false)
	{
		SetActorLocation(FMath::Lerp(GetActorLocation(), FVector(-600.f, GetActorLocation().Y, 0.f), 0.015f));

		DoorTimer = DoorTimer - 0.1f;

		if ( (DoorIsOpen == false) && (DoorTimer <= 0.f) )
		{
			DoorIsOpen = true;
		}
	}
}

void ASlidingDoor::Open()
{
	TargetLocation = ActorToWorld().TransformPositionNoScale(FVector(xAxis, yAxis, zAxis));
}

