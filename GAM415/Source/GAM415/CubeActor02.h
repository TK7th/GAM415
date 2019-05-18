// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RuntimeMeshComponent.h"
#include "CubeActor02.generated.h"

UCLASS()
class GAM415_API ACubeActor02 : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ACubeActor02();

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void PostActorCreated() override;
	virtual void PostLoad() override;
	virtual void GenerateBoxMesh();
	virtual void CreateBoxMesh(FVector BoxRadius, TArray <FVector> & Vertices, TArray <int32> & Triangles,
		TArray <FVector> & Normals, TArray <FVector2D> & UVs, TArray <FRuntimeMeshTangent> & Tangents,
		TArray <FColor> & Colors);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	URuntimeMeshComponent* Mesh;
	
};
