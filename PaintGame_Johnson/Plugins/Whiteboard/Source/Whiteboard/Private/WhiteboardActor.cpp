// Fill out your copyright notice in the Description page of Project Settings.

#include "WhiteboardActor.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Engine.h"

// Sets default values
AWhiteboardActor::AWhiteboardActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set RootComponent to Static Mesh Component
	whiteboard_mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WHITEBOARD MESH"));
	RootComponent = whiteboard_mesh;

	// Set Whiteboard Mesh to Glass Window Mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh>asset(TEXT("StaticMesh'/Whiteboard/WhiteboardFiles/SM_GlassWindow.SM_GlassWindow'"));
	whiteboard_mesh->SetStaticMesh(asset.Object);

	// Set Whiteboard Material
	static ConstructorHelpers::FObjectFinder<UMaterial>asset1(TEXT("Material'/Whiteboard/WhiteboardFiles/M_Whiteboard.M_Whiteboard'"));
	whiteboard_mesh->SetMaterial(0, asset1.Object);

	// Set Whiteboard Marker Material
	static ConstructorHelpers::FObjectFinder<UMaterial>asset2(TEXT("Material'/Whiteboard/WhiteboardFiles/M_Whiteboard_Marker.M_Whiteboard_Marker'"));
	markerMat = asset2.Object;

	// Set Whiteboard Render Target
	static ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D>asset3(TEXT("CanvasRenderTarget2D'/Whiteboard/WhiteboardFiles/RT_Whiteboard.RT_Whiteboard'"));
	renderTarget = asset3.Object;


}

// Called when the game starts or when spawned
void AWhiteboardActor::BeginPlay()
{
	Super::BeginPlay();
	
	if (markerMat)
	{
		// Set Whiteboard Marker Material Instance
		whiteboardMarker_MI = UMaterialInstanceDynamic::Create(markerMat, this);
	}

	// Clear Render Target of all drawings
	UKismetRenderingLibrary::ClearRenderTarget2D(this, renderTarget, FLinearColor::Black);
	// Set Draw Size as a Public Scalar Parameter
	whiteboardMarker_MI->SetScalarParameterValue("DrawSize", drawSize);
}

// Called every frame
void AWhiteboardActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called when drawing
void AWhiteboardActor::DrawOnWhiteboard(FVector2D LocationToDraw)
{
	// Set Draw Location
	whiteboardMarker_MI->SetVectorParameterValue("DrawLocation", FLinearColor(LocationToDraw.X, LocationToDraw.Y, 0));
	// Draw on Render Target at Draw Location
	UKismetRenderingLibrary::DrawMaterialToRenderTarget(this, renderTarget, whiteboardMarker_MI);

}

