// Copyright Epic Games, Inc. All Rights Reserved.

#include "SoulCageGameMode.h"
#include "SoulCageCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASoulCageGameMode::ASoulCageGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
