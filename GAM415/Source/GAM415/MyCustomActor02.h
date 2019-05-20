// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "MyCustomActor02.generated.h"

UCLASS()
class GAM415_API AMyCustomActor02 : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyCustomActor02();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called when the actor is done spawned in the world
	virtual void PostActorCreated() override;

	// Called when the actor is already in level and map is opened
	virtual void PostLoad() override;

	void GenerateMesh(TArray <FVector> &Vertices, TArray <int32> &Triangles,
		TArray <FVector> &Normals, TArray <FVector2D> &UV0, TArray <FProcMeshTangent> &Tangents,
		TArray <FLinearColor> &Colors);
	void CreateMesh();

	UPROPERTY(EditAnywhere)
		UProceduralMeshComponent* Mesh;

private:

};
