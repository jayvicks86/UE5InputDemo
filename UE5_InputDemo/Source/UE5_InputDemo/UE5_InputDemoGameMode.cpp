// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_InputDemoGameMode.h"
#include "UE5_InputDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_InputDemoGameMode::AUE5_InputDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
