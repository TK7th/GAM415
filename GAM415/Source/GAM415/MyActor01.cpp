// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor01.h"


// Sets default values
AMyActor01::AMyActor01()
{
	Mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GenerateMesh"));
	RootComponent = Mesh;

}

// Called when the game starts or when spawned
void AMyActor01::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor01::PostActorCreated()
{
	Super::PostActorCreated();

	CreateSquare();
}

// Called when actor is already in level and map is opened
void AMyActor01::PostLoad()
{
	Super::PostLoad();

	CreateSquare();
}

void AMyActor01::CreateSquare()
{
	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector> Normals;
	TArray<FLinearColor> Colors;
	Vertices.Add(FVector(0.f, 0.f, 0.f));
	Vertices.Add(FVector(0.f, 100.f, 0.f));
	Vertices.Add(FVector(0.f, 0.f, 100.f));
	Vertices.Add(FVector(0.f, 100.f, 100.f));
	Triangles.Add(0);
	Triangles.Add(1);
	Triangles.Add(2);
	Triangles.Add(3);
	Triangles.Add(2);
	Triangles.Add(1);
	for (int32 i = 0; i < Vertices.Num(); i++)
	{
		Normals.Add(FVector(0.f, 0.f, 1.f));
		Colors.Add(FLinearColor::Red);
	}
	TArray<FVector2D> UV0;
	TArray<FProcMeshTangent> Tangents;
	Mesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UV0, Colors, Tangents, true);
}

