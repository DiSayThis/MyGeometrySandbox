// Copyright Epic Games, Inc. All Rights Reserved.


#include "MyGeometrySandboxGameModeBase.h"
#include "SandBoxPawn.h"
#include "SandboxPlayerController.h"

AMyGeometrySandboxGameModeBase::AMyGeometrySandboxGameModeBase()
{
	DefaultPawnClass = ASandBoxPawn::StaticClass();
	PlayerControllerClass = ASandboxPlayerController::StaticClass();

}