// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SlateBasics.h"
#include "ToggleHUDGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GAM415_API AToggleHUDGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY()
	FTimerHandle HUDToggleTimer;

	TSharedPtr<SVerticalBox> widget;

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
