// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PaintGame_JohnsonHUD.generated.h"

UCLASS()
class APaintGame_JohnsonHUD : public AHUD
{
	GENERATED_BODY()

public:
	APaintGame_JohnsonHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

