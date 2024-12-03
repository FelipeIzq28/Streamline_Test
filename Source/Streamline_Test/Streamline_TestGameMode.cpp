// Copyright Epic Games, Inc. All Rights Reserved.

#include "Streamline_TestGameMode.h"
#include "Streamline_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStreamline_TestGameMode::AStreamline_TestGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
