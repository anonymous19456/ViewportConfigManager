// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "VpLayoutConfigStyle.h"

class FVpLayoutConfigCommands : public TCommands<FVpLayoutConfigCommands>
{
public:

	FVpLayoutConfigCommands()
		: TCommands<FVpLayoutConfigCommands>(TEXT("VpLayoutConfig"), NSLOCTEXT("Contexts", "VpLayoutConfig", "VpLayoutConfig Plugin"), NAME_None, FVpLayoutConfigStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > TestPluginAction;
	TSharedPtr< FUICommandInfo > OpenSaveWindow;
	TSharedPtr< FUICommandInfo > OpenLoadWindow;
	TSharedPtr< FUICommandInfo > OpenDeleteWindow;
};
