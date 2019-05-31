// Fill out your copyright notice in the Description page of Project Settings.

#include "CustomGM.h"
#include "CustomHUD.h"


ACustomGM::ACustomGM()
{
	HUDClass = ACustomHUD::StaticClass();
}

void ACustomGM::BeginPlay()
{
	Super::BeginPlay();

	GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Spawning"));

	FTransform SpawnLocation;

	// Spawn actor in the world
	SpawnedActor = GetWorld()->SpawnActor<ASlidingDoor>(ASlidingDoor::StaticClass(), SpawnLocation);

	FTimerHandle Timer;
	GetWorldTimerManager().SetTimer(Timer, this, &ACustomGM::DestroyActorFunction, 10);
}

void ACustomGM::DestroyActorFunction()
{
	if (SpawnedActor != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, TEXT("Actor Destroyed"));
		SpawnedActor->Destroy();
	}
}
