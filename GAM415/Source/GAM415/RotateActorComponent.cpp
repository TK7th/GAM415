// Fill out your copyright notice in the Description page of Project Settings.

#include "RotateActorComponent.h"


// Sets default values for this component's properties
URotateActorComponent::URotateActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	turn = 0.05f;
}


// Called when the game starts
void URotateActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void URotateActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Rotate using FRotator 
	//FRotator rotator = FRotator(0.f, turn, 0.f);
	//GetOwner()->SetActorRotation(rotator);

	// Rotate using FQuat
	FQuat quat = FQuat(FVector(0.f, 1.f, 0.f), turn * PI / 4.f) *
	FQuat(FVector(1.f, 0.f, 0.f), turn * PI / 4.f);

	GetOwner()->SetActorRotation(quat);

	turn = turn + 0.05f;
}

