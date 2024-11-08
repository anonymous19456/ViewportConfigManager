// Copyright Epic Games, Inc. All Rights Reserved.

#include "VpLayoutConfig.h"
#include "VpLayoutConfigStyle.h"
#include "VpLayoutConfigCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "VpLayoutConfigDataStructures.h"


static const FName VpLayoutConfigTabName("VpLayoutConfig");

#define LOCTEXT_NAMESPACE "FVpLayoutConfigModule"


void FVpLayoutConfigModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	// Initialization
	FVpLayoutConfigStyle::Initialize();
	FVpLayoutConfigStyle::ReloadTextures();

	FVpLayoutConfigCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	// Plugins Commands mapping
	PluginCommands->MapAction(
		FVpLayoutConfigCommands::Get().TestPluginAction,
		FExecuteAction::CreateRaw(this, &FVpLayoutConfigModule::TestPluginButtonClicked),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FVpLayoutConfigCommands::Get().OpenSaveWindow,
		FExecuteAction::CreateRaw(this, &FVpLayoutConfigModule::OpenSaveWidget),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FVpLayoutConfigCommands::Get().OpenLoadWindow,
		FExecuteAction::CreateRaw(this, &FVpLayoutConfigModule::OpenLoadWidget),
		FCanExecuteAction());

	PluginCommands->MapAction(
		FVpLayoutConfigCommands::Get().OpenDeleteWindow,
		FExecuteAction::CreateRaw(this, &FVpLayoutConfigModule::OpenDeleteWidget),
		FCanExecuteAction());

	// Initialization
	UVpLayoutConfigDataStructures::InitializeViewportLayoutCommandsMap();
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FVpLayoutConfigModule::RegisterMenus));
	

}

void FVpLayoutConfigModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FVpLayoutConfigStyle::Shutdown();

	FVpLayoutConfigCommands::Unregister();
}

void FVpLayoutConfigModule::TestPluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	FText DialogText = FText::Format(
							LOCTEXT("PluginButtonDialogText", "Add code to {0} in {1} to override this button's actions"),
							FText::FromString(TEXT("FVpLayoutConfigModule::PluginButtonClicked()")),
							FText::FromString(TEXT("VpLayoutConfig.cpp"))
					   );

	FMessageDialog::Open(EAppMsgType::Ok, DialogText);

	UE_LOG(LogTemp, Warning, TEXT("Plugin Button Pressed!"));
	UVpConfigFuncLib::UpdateViewport(0);
	RegisterMenus();	
}

void FVpLayoutConfigModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
	if (Menu)
	{
		// Find or add the "ViewportLayout" section in the menu
		FToolMenuSection& Section = Menu->FindOrAddSection("ViewportConfigManager");	
		Section.Label = FText::FromString(TEXT("Viewport Config"));

		// Add a new submenu under the "ViewportLayout" section
		Section.AddSubMenu(
			"VpLayoutSubMenu",           // Identifier for the submenu
			LOCTEXT("VpConfigMenu", "Viewport Config Manager"), // Display name
			LOCTEXT("VpLConfigSubMenu_Tooltip", "Viewport configuration actions like saving and loading configs"), // Tooltip text
			FNewToolMenuDelegate::CreateLambda([this](UToolMenu* SubMenu)
				{
					// Add an entry to the submenu, referencing the existing command list
					FToolMenuSection& SubMenuSection = SubMenu->AddSection("VpSubMenuSection");
					//SubMenuSection.AddMenuEntryWithCommandList(FVpLayoutConfigCommands::Get().TestPluginAction, PluginCommands);
					SubMenuSection.AddMenuEntryWithCommandList(FVpLayoutConfigCommands::Get().OpenSaveWindow, PluginCommands);
					SubMenuSection.AddMenuEntryWithCommandList(FVpLayoutConfigCommands::Get().OpenLoadWindow, PluginCommands);
					SubMenuSection.AddMenuEntryWithCommandList(FVpLayoutConfigCommands::Get().OpenDeleteWindow, PluginCommands);
				})
		);
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FVpLayoutConfigModule, VpLayoutConfig)