// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Opt_Project1GameMode.h"
#include "Opt_Project1Character.h"
#include "UObject/ConstructorHelpers.h"

AOpt_Project1GameMode::AOpt_Project1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		//DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
