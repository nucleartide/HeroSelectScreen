// Copyright Epic Games, Inc. All Rights Reserved.

#include "HeroSelectScreenGameMode.h"
#include "HeroSelectScreenCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHeroSelectScreenGameMode::AHeroSelectScreenGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
