// Copyright Epic Games, Inc. All Rights Reserved.

#include "HelpersLandGameMode.h"
#include "HelpersLandCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHelpersLandGameMode::AHelpersLandGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
