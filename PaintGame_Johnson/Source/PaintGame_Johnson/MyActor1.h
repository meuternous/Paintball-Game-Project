// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "MyActor1.generated.h"

UCLASS()
class PAINTGAME_JOHNSON_API AMyActor1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor1();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void PostActorCreated() override; // On Actor load
	virtual void PostLoad() override; // On level load
	virtual void CreateSquare(); // Create a Square

private:
	UPROPERTY(VisibleAnywhere)
		UProceduralMeshComponent* mesh; // Procedural Mesh Property Variable
	
};
