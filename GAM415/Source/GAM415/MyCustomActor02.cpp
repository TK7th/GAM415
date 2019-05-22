// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCustomActor02.h"


// Sets default values
AMyCustomActor02::AMyCustomActor02()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

}

// Called when the game starts or when spawned
void AMyCustomActor02::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyCustomActor02::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator Rotate = FRotator(0.f, NextMove, 0.f);

	SetActorRotation(Rotate);

	if (NextMove > 359.f)
	{
		NextMove = 0.f;
	}

	NextMove++;

}

// Called when the actor is done spawned in the world
void AMyCustomActor02::PostActorCreated()
{
	Super::PostActorCreated();

	CreateMesh();
}

// Called when the actor is already in level and map is opened
void AMyCustomActor02::PostLoad()
{
	Super::PostLoad();

	CreateMesh();
}

void AMyCustomActor02::CreateMesh()
{
	// Declare variable types to build mesh
	TArray < int32 > Triangles;
	TArray < FVector > Vertices;
	TArray < FVector > Normals;
	TArray < FVector2D > UV0;
	TArray < FLinearColor > Colors;
	TArray < FProcMeshTangent > Tangents;

	GenerateMesh(Vertices, Triangles, Normals, UV0, Tangents, Colors);

	Mesh->CreateMeshSection_LinearColor(1, Vertices, Triangles, Normals, UV0, Colors, Tangents, true);
}

void AMyCustomActor02::GenerateMesh(
	TArray<FVector> &Vertices, TArray<int32> &Triangles, TArray<FVector> &Normals,
	TArray<FVector2D> &UV0, TArray<FProcMeshTangent> &Tangents, TArray<FLinearColor> &Colors)
{
	// Generate 9 vertices
	Vertices.Add(FVector(0, 0, 0));             // 0th vert
	Vertices.Add(FVector(0, -20, 20));			// 1th vert
	Vertices.Add(FVector(0, -20, 80));			// 2nd vert
	Vertices.Add(FVector(0, 0, 100));           // 3rd vert
	Vertices.Add(FVector(0, 80, 100));          // 4th vert
	Vertices.Add(FVector(0, 100, 80));			// 5th vert
	Vertices.Add(FVector(0, 100, 20));			// 6th vert
	Vertices.Add(FVector(0, 80, 0));			// 7th vert
	Vertices.Add(FVector(0, 50, 50));			// 8th vert


	// Front face direction
	Triangles.Add(0);
	Triangles.Add(1);
	Triangles.Add(8);

	Triangles.Add(1);
	Triangles.Add(2);
	Triangles.Add(8);

	Triangles.Add(2);
	Triangles.Add(3);
	Triangles.Add(8);

	Triangles.Add(3);
	Triangles.Add(4);
	Triangles.Add(8);

	Triangles.Add(4);
	Triangles.Add(5);
	Triangles.Add(8);

	Triangles.Add(5);
	Triangles.Add(6);
	Triangles.Add(8);

	Triangles.Add(6);
	Triangles.Add(7);
	Triangles.Add(8);

	Triangles.Add(0);
	Triangles.Add(8);
	Triangles.Add(7);

	// Back face direction
	Triangles.Add(8);
	Triangles.Add(1);
	Triangles.Add(0);

	Triangles.Add(8);
	Triangles.Add(2);
	Triangles.Add(1);

	Triangles.Add(8);
	Triangles.Add(3);
	Triangles.Add(2);

	Triangles.Add(8);
	Triangles.Add(4);
	Triangles.Add(3);

	Triangles.Add(8);
	Triangles.Add(5);
	Triangles.Add(4);

	Triangles.Add(8);
	Triangles.Add(6);
	Triangles.Add(5);

	Triangles.Add(8);
	Triangles.Add(7);
	Triangles.Add(6);

	Triangles.Add(7);
	Triangles.Add(8);
	Triangles.Add(0);


	// Generate Normals
	Normals.Add(FVector(1, 0, 0));
	Normals.Add(FVector(1, 0, 0));
	Normals.Add(FVector(1, 0, 0));
	Normals.Add(FVector(1, 0, 0));

	UV0.Add(FVector2D(1, 1));
	UV0.Add(FVector2D(0, 1));
	UV0.Add(FVector2D(1, 0));
	UV0.Add(FVector2D(0, 0));

	Colors.Add(FLinearColor(0.75, 0.00, 0.00, 1.0));
	Colors.Add(FLinearColor(0.75, 0.00, 0.00, 1.0));
	Colors.Add(FLinearColor(0.75, 0.00, 0.75, 1.0));          // the 4th argument determines alpha value (0,1)
	Colors.Add(FLinearColor(0.75, 0.00, 0.75, 1.0));

	Tangents.Add(FProcMeshTangent(0, 1, 0));
	Tangents.Add(FProcMeshTangent(0, 1, 0));
	Tangents.Add(FProcMeshTangent(0, 1, 0));
}

