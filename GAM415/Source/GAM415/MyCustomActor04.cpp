// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCustomActor04.h"


// Sets default values
AMyCustomActor04::AMyCustomActor04()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create base object we can place in the world
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");

	// Pass in the type of asset to be loaded
	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh '/Game/MyAssets/Broom_01.Broom_01' "));

	// Check if the MeshAsset is valid before setting it
	if (MeshAsset.Object != nullptr)
	{
		Mesh->SetStaticMesh(MeshAsset.Object);
	}



}

// Called when the game starts or when spawned
void AMyCustomActor04::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCustomActor04::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

