// Copyright Epic Games, Inc. All Rights Reserved.

#include "SonicProjectGameMode.h"
#include "SonicProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASonicProjectGameMode::ASonicProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
