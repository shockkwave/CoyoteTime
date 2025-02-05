// Copyright Epic Games, Inc. All Rights Reserved.

#include "CoyoteTimeGameMode.h"
#include "CoyoteTimeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACoyoteTimeGameMode::ACoyoteTimeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
