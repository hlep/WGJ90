// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "WGJ90GameMode.h"
#include "WGJ90Character.h"

AWGJ90GameMode::AWGJ90GameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AWGJ90Character::StaticClass();	
}
