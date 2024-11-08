// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "VpConfigFuncLib.h"
#include "Modules/ModuleManager.h"


class FToolBarBuilder;
class FMenuBuilder;

class FVpLayoutConfigModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** These functions will be bound to Commands called from the UI. */
	void TestPluginButtonClicked();
	
	void OpenSaveWidget()
	{
		FString SaveWidgetRef = "/Script/Blutility.EditorUtilityWidgetBlueprint'/VpLayoutConfig/SaveViewportConfig.SaveViewportConfig'";
		UVpConfigFuncLib::OpenEditorUtilWidget(SaveWidgetRef);
		RegisterMenus();
	}
	void OpenLoadWidget()
	{
		FString LoadWidgetRef = "/Script/Blutility.EditorUtilityWidgetBlueprint'/VpLayoutConfig/LoadViewportConfig.LoadViewportConfig'";
		UVpConfigFuncLib::OpenEditorUtilWidget(LoadWidgetRef);
		RegisterMenus();
	}
	void OpenDeleteWidget()
	{
		FString DeleteWidgetRef = "/Script/Blutility.EditorUtilityWidgetBlueprint'/VpLayoutConfig/DeleteViewportConfig.DeleteViewportConfig'";
		UVpConfigFuncLib::OpenEditorUtilWidget(DeleteWidgetRef);
		RegisterMenus();
	}

	
private:

	void RegisterMenus();

private:
	TSharedPtr<class FUICommandList> PluginCommands;
};
