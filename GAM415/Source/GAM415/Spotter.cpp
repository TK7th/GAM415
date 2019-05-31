// Fill out your copyright notice in the Description page of Project Settings.

#include "Spotter.h"

ASpotter::ASpotter()
{
	PrimaryActorTick.bCanEverTick = true;

	/*In the constructor for our Spotter object, we load one of the basic primitives,
		a cone, into our Static Mesh Component as a visual representation.*/

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cone.Cone'"));
	if (MeshAsset.Object != nullptr)
	{
		GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
		GetStaticMeshComponent()->bGenerateOverlapEvents = true;
	}

	/*We then rotate the cone so that it resembles a spotlight pointing to the X axis of the
		actor.*/

	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetRelativeRotation(FRotator(90, 0, 0));
}

void ASpotter::BeginPlay()
{
	Super::BeginPlay();
}

void ASpotter::Tick(float DeltaTime)
{
	/*During the Tick function, we get the actor's location, and then find a point 200 units
	away from the actor along its local X axis. We call the parent class implementation of
	Tick using Super::to ensure that any other tick functionality is preserved despite
	our override.*/

	Super::Tick(DeltaTime);

	/*We convert a local position into a world space position by first acquiring the Actor - to -
		World transform for the Actor, then using that to transform a vector specifying the
		position.*/
	FVector EndLocation = GetActorLocation() + ActorToWorld().TransformVector(FVector(0.f, 0.f, -200.f));

	FHitResult HitResults;

	/*Having calculated our end location for our trace, we actually perform the trace with
		the SweepSingleByChannel function.*/

	FCollisionQueryParams QueryParams("Spot", false, this);

	GetWorld()->SweepSingleByChannel
	(
		HitResults, GetActorLocation(), EndLocation, FQuat::Identity, ECC_Camera, 
		FCollisionShape::MakeSphere(25), QueryParams 
	);
	
	/*Once the sweep is performed, we try to cast the resulting hit Actor into a pawn.*/
	APawn* SpottedPlayer = Cast<APawn>(HitResults.Actor.Get());


	/*If the cast was successful, we invoke our Implementable Event of
		OnPlayerSpotted, and the user - defined Blueprint code executes.*/
	if (SpottedPlayer != nullptr)
	{
		OnPlayerSpotted(SpottedPlayer);
	}
	DrawDebugLine(GetWorld(), GetActorLocation(), EndLocation, FColor::Blue);
}

FString ASpotter::ToString()
{
	return FString::Printf(TEXT("An instance of ASpotter: %s"), *Name);
}
