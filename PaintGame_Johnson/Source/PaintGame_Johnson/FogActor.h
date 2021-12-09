// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "FogActor.generated.h"

UCLASS()
class PAINTGAME_JOHNSON_API AFogActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFogActor();
	// Post Initializes Components
	virtual void PostInitializeComponents() override;
	// Set the fog size  
	void setSize(float s);
	// Reveal a portion of the fog  
	void revealSmoothCircle(const FVector2D & pos, float radius);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	// Method to Update Fog Texture Areas
	void UpdateTextureRegions(UTexture2D * Texture, int32 MipIndex, uint32 NumRegions, FUpdateTextureRegion2D * Regions, uint32 SrcPitch, uint32 SrcBpp, uint8 * SrcData, bool bFreeData);
	
	// Fog texture size  
	static const int m_textureSize = 512;
	// Fog Square Plane
	UPROPERTY() UStaticMeshComponent * m_squarePlane;
	// Fog Texture
	UPROPERTY() UTexture2D * m_dynamicTexture;
	// Fog Material
	UPROPERTY() UMaterialInterface * m_dynamicMaterial;
	// Fog Material Instance
	UPROPERTY() UMaterialInstanceDynamic * m_dynamicMaterialInstance;
	// Array of Pixels in Fog
	uint8 m_pixelArray[m_textureSize * m_textureSize];
	// Texture Region Update
	FUpdateTextureRegion2D m_wholeTextureRegion;
	// Size Covered by Fog
	float m_coverSize;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
