// Copyright Epic Games, Inc. All Rights Reserved.

#include "Homework_W01GameMode.h"
#include "Homework_W01Character.h"
#include "UObject/ConstructorHelpers.h"

AHomework_W01GameMode::AHomework_W01GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
