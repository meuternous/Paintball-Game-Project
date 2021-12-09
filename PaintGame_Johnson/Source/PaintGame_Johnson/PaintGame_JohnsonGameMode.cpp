// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PaintGame_JohnsonGameMode.h"
#include "PaintGame_JohnsonHUD.h"
#include "PaintGame_JohnsonCharacter.h"
#include "UObject/ConstructorHelpers.h"

APaintGame_JohnsonGameMode::APaintGame_JohnsonGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APaintGame_JohnsonHUD::StaticClass();
}
