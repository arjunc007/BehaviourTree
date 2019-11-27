// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "BehaviourTreeGameMode.h"
#include "BehaviourTreeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABehaviourTreeGameMode::ABehaviourTreeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/PlayerShooter_Character"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
