// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "ProcCubeActor.generated.h"

UCLASS()
class PAINTGAME_JOHNSON_API AProcCubeActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProcCubeActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:

	virtual void PostActorCreated() override; // On Actor load
	virtual void PostLoad() override; // On level load
	virtual void GenerateBoxMesh(); // Generates Cube
	// Creates Cube Mesh
	virtual void CreateBoxMesh(FVector BoxRadius, TArray<FVector> & Vertices, TArray<int32> & Triangles, TArray<FVector> & Normals, TArray<FVector2D> & UVs, TArray<FProcMeshTangent> & Tangents, TArray<FColor> & Colors);

private:
	UPROPERTY(VisibleAnywhere) UProceduralMeshComponent * mesh; // Procedural Mesh Property Variable

	
};
