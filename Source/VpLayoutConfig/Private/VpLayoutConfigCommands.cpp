// Copyright Epic Games, Inc. All Rights Reserved.

#include "VpLayoutConfigCommands.h"

#define LOCTEXT_NAMESPACE "FVpLayoutConfigModule"

void FVpLayoutConfigCommands::RegisterCommands()
{
	UI_COMMAND(TestPluginAction, "VpLayoutConfig", "Execute VpLayoutConfig action", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(OpenSaveWindow, "Save Config", "Saves the current viewport configuration", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(OpenLoadWindow, "Load Config", "Loads a saved viewport configuration", EUserInterfaceActionType::Button, FInputChord());
	UI_COMMAND(OpenDeleteWindow, "Delete Config", "Deletes a saved viewport configuration", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
