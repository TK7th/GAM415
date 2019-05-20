// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "MyCustomActor01.generated.h"

UCLASS()
class GAM415_API AMyCustomActor01 : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Sets default values for this actor's properties
	AMyCustomActor01();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called when the actor is done spawned in the world
	virtual void PostActorCreated() override;

	// Called when the actor is already in level and map is opened
	virtual void PostLoad() override;

	void GenerateMesh();

	void CreateMesh(FVector BoxRadius, TArray <FVector> & Vertices, TArray <int32> & Triangles,
		TArray <FVector> & Normals, TArray <FVector2D> & UVs, TArray <FProcMeshTangent> & Tangents,
		TArray <FColor> & Colors);

	UPROPERTY(EditAnywhere)
		UProceduralMeshComponent* Mesh;

private:

};
