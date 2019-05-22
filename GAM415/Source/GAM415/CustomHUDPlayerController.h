// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CustomHUDPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAM415_API ACustomHUDPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;
	
	
};
