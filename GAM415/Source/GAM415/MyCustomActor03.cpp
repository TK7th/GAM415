// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCustomActor03.h"


// Sets default values
AMyCustomActor03::AMyCustomActor03()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = RootComp;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	Mesh->AttachToComponent(RootComp, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	CustomRoughness = 1.0f;
	CustomMetallic = 1.0f;
	AlphaAmount = 1.0f;

}

// Called when the game starts or when spawned
void AMyCustomActor03::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCustomActor03::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Output Log the value for MaterialChange variable to confirm change

	UE_LOG(LogTemp, Warning, TEXT("MaterChange Number is %d"), MaterialChange);

	// Rotate the actor 

	FRotator Rotate = FRotator(0.f, NextMove, 0.f);
	
	SetActorRotation(Rotate);

	if (NextMove > 359.f)
	{
		NextMove = 0.f;
	}

	NextMove++;

	// Change value for each parameter name within the material

	if (MaterialChange == 0)
	{
		CustomRoughness += DeltaTime;
		CustomMetallic += DeltaTime;
		AlphaAmount += DeltaTime;

		if ((AlphaAmount > 1.0f) && (MaterialChange == 0))
		{
			MaterialChange = 1;
			CustomRoughness = 1.0f;
			CustomMetallic = 1.0f;
			AlphaAmount = 1.0f;
		}
	}

	if (MaterialChange == 1)
	{
		CustomRoughness -= DeltaTime;
		CustomMetallic -= DeltaTime;
		AlphaAmount -= DeltaTime;

		if ((AlphaAmount < 0.0f) && (MaterialChange == 1))
		{
			MaterialChange = 0;
			CustomRoughness = 0.f;
			CustomMetallic = 0.f;
			AlphaAmount = 0.f;
		}
	}

	// Create a Dynamic Material Instance

	UMaterialInstanceDynamic* CustomMaterialInstance1 = Mesh->CreateDynamicMaterialInstance(0);
	UMaterialInstanceDynamic* CustomMaterialInstance2 = Mesh->CreateDynamicMaterialInstance(0);
	UMaterialInstanceDynamic* CustomMaterialInstance3 = Mesh->CreateDynamicMaterialInstance(0);

	if ((CustomMaterialInstance1 != nullptr) && (CustomMaterialInstance2 != nullptr) && (CustomMaterialInstance3 != nullptr))
	{
		CustomMaterialInstance1->SetScalarParameterValue(FName("CustomRoughness"), CustomRoughness);
		CustomMaterialInstance2->SetScalarParameterValue(FName("CustomMetallic"), CustomMetallic);
		CustomMaterialInstance3->SetScalarParameterValue(FName("AlphaAmount"), AlphaAmount);
	}

}

