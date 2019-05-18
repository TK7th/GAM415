// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseEnemy.generated.h"

UCLASS(Blueprintable)
class GAM415_API ABaseEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseEnemy();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	FString WeaponName;

	UPROPERTY()
	int32 MaximumHealth;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	
	
};
