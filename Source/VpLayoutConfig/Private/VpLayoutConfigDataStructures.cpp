// Fill out your copyright notice in the Description page of Project Settings.


#include "VpLayoutConfigDataStructures.h"
#include "LevelViewportActions.h"
// Define the static TMap
TMap<FString, TSharedPtr<FUICommandInfo>> UVpLayoutConfigDataStructures::ViewportLayoutConfigCommandsMap;

void UVpLayoutConfigDataStructures::InitializeViewportLayoutCommandsMap()
{
	ViewportLayoutConfigCommandsMap.Add(LevelViewportConfigurationNames::TwoPanesHoriz.ToString(), FLevelViewportCommands::Get().ViewportConfig_TwoPanesH);
	ViewportLayoutConfigCommandsMap.Add(LevelViewportConfigurationNames::TwoPanesVert.ToString(), FLevelViewportCommands::Get().ViewportConfig_TwoPanesV);
	ViewportLayoutConfigCommandsMap.Add(LevelViewportConfigurationNames::ThreePanesLeft.ToString(), FLevelViewportCommands::Get().ViewportConfig_ThreePanesLeft);
	ViewportLayoutConfigCommandsMap.Add(LevelViewportConfigurationNames::ThreePanesRight.ToString(), FLevelViewportCommands::Get().ViewportConfig_ThreePanesRight);
	ViewportLayoutConfigCommandsMap.Add(LevelViewportConfigurationNames::ThreePanesTop.ToString(), FLevelViewportCommands::Get().ViewportConfig_ThreePanesTop);
	ViewportLayoutConfigCommandsMap.Add(LevelViewportConfigurationNames::ThreePanesBottom.ToString(), FLevelViewportCommands::Get().ViewportConfig_ThreePanesBottom);
	ViewportLayoutConfigCommandsMap.Add(LevelViewportConfigurationNames::FourPanesLeft.ToString(), FLevelViewportCommands::Get().ViewportConfig_FourPanesLeft);
	ViewportLayoutConfigCommandsMap.Add(LevelViewportConfigurationNames::FourPanesRight.ToString(), FLevelViewportCommands::Get().ViewportConfig_FourPanesRight);
	ViewportLayoutConfigCommandsMap.Add(LevelViewportConfigurationNames::FourPanesTop.ToString(), FLevelViewportCommands::Get().ViewportConfig_FourPanesTop);
	ViewportLayoutConfigCommandsMap.Add(LevelViewportConfigurationNames::FourPanesBottom.ToString(), FLevelViewportCommands::Get().ViewportConfig_FourPanesBottom);
	ViewportLayoutConfigCommandsMap.Add(LevelViewportConfigurationNames::FourPanes2x2.ToString(), FLevelViewportCommands::Get().ViewportConfig_FourPanes2x2);
	ViewportLayoutConfigCommandsMap.Add(LevelViewportConfigurationNames::OnePane.ToString(), FLevelViewportCommands::Get().ViewportConfig_OnePane);
}
