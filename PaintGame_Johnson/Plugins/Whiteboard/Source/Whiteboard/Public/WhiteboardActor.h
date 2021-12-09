// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WhiteboardActor.generated.h"

UCLASS()
class WHITEBOARD_API AWhiteboardActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWhiteboardActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Stores Whiteboard Mesh
	UPROPERTY()
		UStaticMeshComponent* whiteboard_mesh;
	
	// Stores Marker Material
	UPROPERTY()
		UMaterialInterface* markerMat;

	// Stores Whiteboard Marker Material Instance
	UPROPERTY()
		UMaterialInstanceDynamic* whiteboardMarker_MI;

	// Stores Render Target
	UPROPERTY()
		UTextureRenderTarget2D* renderTarget;

	// Method to Draw On Whiteboard using Location To Draw (Vector2D from RenderTarget)
	UFUNCTION(BlueprintCallable)
		void DrawOnWhiteboard(FVector2D LocationToDraw);

	// Stores Draw Size
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float drawSize;
};
