// Fill out your copyright notice in the Description page of Project Settings.

#include "MyActor1.h"


// Sets default values
AMyActor1::AMyActor1()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Sets Root Component to Procedural Mesh Component
	mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
	RootComponent = mesh;

}

// Called when the game starts or when spawned
void AMyActor1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// This is called when actor is created
void AMyActor1::PostActorCreated()
{
	Super::PostActorCreated();
	CreateSquare();
}

// This is called when actor is already in level and map is opened.  
void AMyActor1::PostLoad()
{
	Super::PostLoad();
	CreateSquare();
}

// This method Creates a Square
void AMyActor1::CreateSquare() {

	// Initialize Arrays
	TArray<FVector> Vertices;
	TArray<int32> Triangles;
	TArray<FVector> Normals;
	TArray<FLinearColor> Colors;

	// Initialize Vertices
	Vertices.Add(FVector(0.f, 0.f, 0.f));
	Vertices.Add(FVector(0.f, 100.f, 0.f));
	Vertices.Add(FVector(0.f, 0.f, 100.f));
	Vertices.Add(FVector(0.f, 100.f, 100.f));

	// Initialize Triangles
	Triangles.Add(0);
	Triangles.Add(1);
	Triangles.Add(2);
	Triangles.Add(3);
	Triangles.Add(2);
	Triangles.Add(1);

	// Initialize Normals and Colors
	for (int32 i = 0; i < Vertices.Num(); i++) {
		Normals.Add(FVector(0.f, 0.f, 1.f));
		Colors.Add(FLinearColor::Red);
	}

	// Optional arrays.
	TArray<FVector2D> UV0;
	TArray<FProcMeshTangent> Tangents;

	// Create Square Mesh
	mesh->CreateMeshSection_LinearColor(0, Vertices, Triangles, Normals, UV0, Colors, Tangents, true);

}

