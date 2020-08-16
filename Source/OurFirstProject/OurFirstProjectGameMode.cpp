// Copyright Epic Games, Inc. All Rights Reserved.

#include "OurFirstProjectGameMode.h"
#include "OurFirstProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AOurFirstProjectGameMode::AOurFirstProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
