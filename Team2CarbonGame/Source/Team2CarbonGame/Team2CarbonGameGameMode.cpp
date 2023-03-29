// Copyright Epic Games, Inc. All Rights Reserved.

#include "Team2CarbonGameGameMode.h"
#include "Team2CarbonGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeam2CarbonGameGameMode::ATeam2CarbonGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
