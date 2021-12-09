// Fill out your copyright notice in the Description page of Project Settings.

#include "ProcCubeActor.h"


// Sets default values
AProcCubeActor::AProcCubeActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Sets Root Component to Procedural Mesh Component
	mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("GeneratedMesh"));
	RootComponent = mesh;

}

// Called when the game starts or when spawned
void AProcCubeActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProcCubeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// This is called when actor is created
void AProcCubeActor::PostActorCreated()
{
	Super::PostActorCreated();
	GenerateBoxMesh();
}

// This is called when actor is already in level and map is opened.  
void AProcCubeActor::PostLoad()
{
	Super::PostLoad();
	GenerateBoxMesh();
}

// This method Generates a Procedural Cube
void AProcCubeActor::GenerateBoxMesh() {

	// Initialize Lists of Cube component values
	TArray < FVector > Vertices;
	TArray < FVector > Normals;
	TArray < FProcMeshTangent > Tangents;
	TArray < FVector2D > TextureCoordinates;
	TArray < int32 > Triangles;
	TArray < FColor > Colors;

	// Call Method to Create Cube Mesh
	CreateBoxMesh(FVector(50, 50, 50), Vertices, Triangles, Normals, TextureCoordinates, Tangents, Colors); // Create the mesh section, specifying collision.  
	// Assign Cube Mesh to Mesh
	mesh->CreateMeshSection(0, Vertices, Triangles, Normals, TextureCoordinates, Colors, Tangents, true);
}

// This method Creates the Values of the Procedural Cube
void AProcCubeActor::CreateBoxMesh(FVector BoxRadius, TArray < FVector > & Vertices, TArray < int32 > & Triangles, TArray < FVector > & Normals, TArray < FVector2D > & UVs, TArray < FProcMeshTangent > & Tangents, TArray < FColor > & Colors) {

	FVector BoxVerts[8]; // Initialize Vertex Array

	// Initialize Values of Vertices in Array
	BoxVerts[0] = FVector(-BoxRadius.X, BoxRadius.Y, BoxRadius.Z);
	BoxVerts[1] = FVector(BoxRadius.X, BoxRadius.Y, BoxRadius.Z);
	BoxVerts[2] = FVector(BoxRadius.X, -BoxRadius.Y, BoxRadius.Z);
	BoxVerts[3] = FVector(-BoxRadius.X, -BoxRadius.Y, BoxRadius.Z);
	BoxVerts[4] = FVector(-BoxRadius.X, BoxRadius.Y, -BoxRadius.Z);
	BoxVerts[5] = FVector(BoxRadius.X, BoxRadius.Y, -BoxRadius.Z);
	BoxVerts[6] = FVector(BoxRadius.X, -BoxRadius.Y, -BoxRadius.Z);
	BoxVerts[7] = FVector(-BoxRadius.X, -BoxRadius.Y, -BoxRadius.Z);
	
	// Generate triangles (from quads). 
	Triangles.Reset();
	const int32 NumVerts = 24; // 6 faces x 4 verts per face

	// Assign Colors
	Colors.Reset();
	Colors.AddUninitialized(NumVerts);
	for (int i = 0; i < NumVerts / 3; i++) {
		Colors[i * 3] = FColor(255, 0, 0);
		Colors[i * 3 + 1] = FColor(0, 255, 0);
		Colors[i * 3 + 2] = FColor(0, 0, 255);
	}

	// Reset & Uninitialize Vertices
	Vertices.Reset();
	Vertices.AddUninitialized(NumVerts);

	// Reset & Uninitialize Normals
	Normals.Reset();
	Normals.AddUninitialized(NumVerts);

	// Reset & Uninitialize Tangents
	Tangents.Reset();
	Tangents.AddUninitialized(NumVerts);

	// Side 1 of 6
	// Assign Vertices
	Vertices[0] = BoxVerts[0];
	Vertices[1] = BoxVerts[1];
	Vertices[2] = BoxVerts[2];
	Vertices[3] = BoxVerts[3];
	// Assign Triangles
	Triangles.Add(0);
	Triangles.Add(1);
	Triangles.Add(3);
	Triangles.Add(1);
	Triangles.Add(2);
	Triangles.Add(3);
	// Assign Normals
	Normals[0] = Normals[1] = Normals[2] = Normals[3] = FVector(0, 0, 1);
	// Assign Tangents to Procedural Mesh Tangent
	Tangents[0] = Tangents[1] = Tangents[2] = Tangents[3] = FProcMeshTangent(0.f, -1.f, 0.f);

	// Side 2 of 6
	// Assign Vertices
	Vertices[4] = BoxVerts[4];
	Vertices[5] = BoxVerts[0];
	Vertices[6] = BoxVerts[3];
	Vertices[7] = BoxVerts[7];
	// Assign Triangles
	Triangles.Add(4);
	Triangles.Add(5);
	Triangles.Add(7);
	Triangles.Add(5);
	Triangles.Add(6);
	Triangles.Add(7); //bottom 
	// Assign Normals
	Normals[4] = Normals[5] = Normals[6] = Normals[7] = FVector(-1, 0, 0);
	// Assign Tangents to Procedural Mesh Tangent
	Tangents[4] = Tangents[5] = Tangents[6] = Tangents[7] = FProcMeshTangent(0.f, -1.f, 0.f);

	// Side 3 of 6
	// Assign Vertices
	Vertices[8] = BoxVerts[5];
	Vertices[9] = BoxVerts[1];
	Vertices[10] = BoxVerts[0];
	Vertices[11] = BoxVerts[4];
	// Assign Triangles
	Triangles.Add(8);
	Triangles.Add(9);
	Triangles.Add(11);
	Triangles.Add(9);
	Triangles.Add(10);
	Triangles.Add(11);
	// Assign Normals
	Normals[8] = Normals[9] = Normals[10] = Normals[11] = FVector(0, 1, 0);
	// Assign Tangents to Procedural Mesh Tangent
	Tangents[8] = Tangents[9] = Tangents[10] = Tangents[11] = FProcMeshTangent(-1.f, 0.f, 0.f);

	// Side 4 of 6
	// Assign Vertices
	Vertices[12] = BoxVerts[6];
	Vertices[13] = BoxVerts[2];
	Vertices[14] = BoxVerts[1];
	Vertices[15] = BoxVerts[5];
	// Assign Triangles
	Triangles.Add(12);
	Triangles.Add(13);
	Triangles.Add(15);
	Triangles.Add(13);
	Triangles.Add(14);
	Triangles.Add(15);
	// Assign Normals
	Normals[12] = Normals[13] = Normals[14] = Normals[15] = FVector(1, 0, 0);
	// Assign Tangents to Procedural Mesh Tangent
	Tangents[12] = Tangents[13] = Tangents[14] = Tangents[15] = FProcMeshTangent(0.f, 1.f, 0.f);

	// Side 5 of 6
	// Assign Vertices
	Vertices[16] = BoxVerts[7];
	Vertices[17] = BoxVerts[3];
	Vertices[18] = BoxVerts[2];
	Vertices[19] = BoxVerts[6];
	// Assign Triangles
	Triangles.Add(16);
	Triangles.Add(17);
	Triangles.Add(19);
	Triangles.Add(17);
	Triangles.Add(18);
	Triangles.Add(19);
	// Assign Normals
	Normals[16] = Normals[17] = Normals[18] = Normals[19] = FVector(0, -1, 0);
	// Assign Tangents to Procedural Mesh Tangent
	Tangents[16] = Tangents[17] = Tangents[18] = Tangents[19] = FProcMeshTangent(1.f, 0.f, 0.f);

	// Side 6 of 6
	// Assign Vertices
	Vertices[20] = BoxVerts[7];
	Vertices[21] = BoxVerts[6];
	Vertices[22] = BoxVerts[5];
	Vertices[23] = BoxVerts[4];
	// Assign Triangles
	Triangles.Add(20);
	Triangles.Add(21);
	Triangles.Add(23);
	Triangles.Add(21);
	Triangles.Add(22);
	Triangles.Add(23);
	// Assign Normals
	Normals[20] = Normals[21] = Normals[22] = Normals[23] = FVector(0, 0, -1);
	// Assign Tangents to Procedural Mesh Tangent
	Tangents[20] = Tangents[21] = Tangents[22] = Tangents[23] = FProcMeshTangent(0.f, 1.f, 0.f); // UVs 


	// Reset & Uninitialize UVs
	UVs.Reset();
	UVs.AddUninitialized(NumVerts);

	// Assign UVs
	UVs[0] = UVs[4] = UVs[8] = UVs[12] = UVs[16] = UVs[20] = FVector2D(0.f, 0.f);
	UVs[1] = UVs[5] = UVs[9] = UVs[13] = UVs[17] = UVs[21] = FVector2D(0.f, 1.f);
	UVs[2] = UVs[6] = UVs[10] = UVs[14] = UVs[18] = UVs[22] = FVector2D(1.f, 1.f);
	UVs[3] = UVs[7] = UVs[11] = UVs[15] = UVs[19] = UVs[23] = FVector2D(1.f, 0.f);
}