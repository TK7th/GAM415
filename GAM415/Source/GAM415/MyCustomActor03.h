// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCustomActor03.generated.h"

UCLASS()
class GAM415_API AMyCustomActor03 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCustomActor03();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Root Component
	UPROPERTY()
	USceneComponent* RootComp;

	// Actor's Mesh Component
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Mesh;

private:

	float CustomRoughness;
	float CustomMetallic;
	float AlphaAmount;
	float NextMove = 0.f;
	int32 MaterialChange = 1;
	
};
