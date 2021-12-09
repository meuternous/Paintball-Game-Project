// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PaintGame_JohnsonProjectile.h"
#include "PaintGame_JohnsonCharacter.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Math/Vector2D.h"
#include "Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine.h"
#include "Engine/DecalActor.h"
#include "Components/SphereComponent.h"
#include "ProcCubeActor.h"
#include "RuntimeCubeActor.h"
#include "Components/DecalComponent.h"


APaintGame_JohnsonProjectile::APaintGame_JohnsonProjectile() // Default Projectile Constructor
{
	// Use a sphere as a simple collision representation
	CollisionComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	CollisionComp->InitSphereRadius(5.0f);
	CollisionComp->BodyInstance.SetCollisionProfileName("Projectile");
	CollisionComp->OnComponentHit.AddDynamic(this, &APaintGame_JohnsonProjectile::OnHit);		// set up a notification for when this component hits something blocking
	
	// Set Collision Component as Root Component
	RootComponent = CollisionComp;

	// Initialize SphereMesh Static Mesh Component as Default Subobject of Projectile
	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sphere Mesh"));

	// Setup Attachment of SphereMesh to Root Component
	SphereMesh->SetupAttachment(RootComponent);

	// Find Projectile Static Mesh
	static ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMeshA(TEXT("StaticMesh'/Game/FirstPerson/Meshes/FirstPersonProjectileMesh.FirstPersonProjectileMesh'"));

	// Set SphereMesh to Projectile Static Mesh
	SphereMesh->SetStaticMesh(StaticMeshA.Object);
	// Set Mesh Scale
	SphereMesh->SetRelativeScale3D(FVector(0.1, 0.1, 0.1));
	// Find Projectile Material
	static ConstructorHelpers::FObjectFinder<UMaterial> proj_Material(TEXT("Material'/Game/FirstPerson/Splat/Projectile_MAT.Projectile_MAT'"));

	// Set Dynamic Material Instance to SphereMesh with Projectile Material
	UMaterial* meshMAT = proj_Material.Object;
	UMaterialInstanceDynamic* projDMI = UMaterialInstanceDynamic::Create(meshMAT, SphereMesh);

	// Set SphereMesh Material to Dynamic Material Instance of Projectile Material
	SphereMesh->SetMaterial(0, projDMI);


	// Players can't walk on it
	CollisionComp->SetWalkableSlopeOverride(FWalkableSlopeOverride(WalkableSlope_Unwalkable, 0.f));
	CollisionComp->CanCharacterStepUpOn = ECB_No;

	// Set as root component
	RootComponent = CollisionComp;

	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->UpdatedComponent = CollisionComp;
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Set Random Color Vectors
	RColor = UKismetMathLibrary::RandomFloatInRange(0.f, 1.f);
	GColor = UKismetMathLibrary::RandomFloatInRange(0.f, 1.f);
	BColor = UKismetMathLibrary::RandomFloatInRange(0.f, 1.f);
	// Set Material to Set Random Color
	projDMI->SetVectorParameterValue("ProjColor", FLinearColor(RColor, GColor, BColor));

	// Set Replicates and their Movement
	SetReplicates(true);
	SetReplicateMovement(true);

	// Set Projectile Material to Decal
	static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'Material'/Game/FirstPerson/Splat/SplatMAT.SplatMAT''"));
	if (Material.Object != NULL)
	{
		DecalMat = (UMaterial*)Material.Object;
	}

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;
}

void APaintGame_JohnsonProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	// Only add impulse and destroy projectile if we hit a physics
	/*if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL) && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulseAtLocation(GetVelocity() * 100.0f, GetActorLocation());

		Destroy();
	}*/

	// Decal Projectile Physics (Changes to Decal Mesh and is Set with its back to Hit Surface)
	if ((OtherActor != NULL) && (OtherActor != this))
	{
		if (DecalMat != nullptr)
		{
			// Create Decal with Material Instance
			auto Decal = UGameplayStatics::SpawnDecalAtLocation(GetWorld(), DecalMat, FVector(UKismetMathLibrary::RandomFloatInRange(20.f, 40.f)), Hit.Location, Hit.Normal.Rotation(), 0.f);
			auto MatInstance = Decal->CreateDynamicMaterialInstance();

			// Set Shape and Color of Decal
			MatInstance->SetScalarParameterValue("Frame", UKismetMathLibrary::RandomIntegerInRange(0, 3));
			MatInstance->SetVectorParameterValue("Color", FLinearColor(RColor, GColor, BColor));

			// Set Decal to Fade after 3 seconds until 5 seconds has passed total since Decal attachment
			Decal->SetFadeOut(3, 5);

			Destroy();
		}
		
	}

	// Initializes Cubes for Non-Existent Mesh Slicing (lol)
	AProcCubeActor* ProcCube = Cast<AProcCubeActor>(OtherActor);
	ARuntimeCubeActor* NewCube = Cast<ARuntimeCubeActor>(OtherActor);

}