// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SlidingDoor.h"
#include "CustomGM.generated.h"

/**
 * 
 */
UCLASS()
class GAM415_API ACustomGM : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACustomGM();

	void BeginPlay() override;

	UPROPERTY()
	ASlidingDoor* SpawnedActor;

	UFUNCTION()
	void DestroyActorFunction();


};
