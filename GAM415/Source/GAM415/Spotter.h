// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "Engine/StaticMeshActor.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Public/WorldCollision.h"
#include "Spotter.generated.h"

/**
 * 
 */
UCLASS()
class GAM415_API ASpotter : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this static mesh actor's properties
	ASpotter();

	// called when the game starts or when spawned
	virtual void BeginPlay() override;

	// called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnPlayerSpotted(APawn* Player);

	// Name of the Actor
	UPROPERTY(EditAnywhere, BlueprintReadWrite,
	Category = "ActorName")
	FString Name;

	// Returns message containing the Name property
	UFUNCTION(BlueprintCallable, Category = Properties)
	FString ToString();

protected:

private:
	
};
