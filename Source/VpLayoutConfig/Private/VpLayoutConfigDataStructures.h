// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityBlueprint.h"
#include "Framework/Commands/UICommandInfo.h"
#include "VpLayoutConfigDataStructures.generated.h"

/**
 * 
 */

USTRUCT()
struct FVpClientConfigData
{
	GENERATED_BODY()
public:
	FVpClientConfigData()
		:VpType(ELevelViewportType::LVT_None)
		, ViewMode(EViewModeIndex::VMI_Unknown)
		, bIsRealtime(false)
		, bShowStats(false)
		, bGameViewActive(false)
		, bAllowCinematicControl(false)
	{
	}

	UPROPERTY()
	TEnumAsByte<ELevelViewportType> VpType;
	UPROPERTY()
	TEnumAsByte<EViewModeIndex> ViewMode;
	UPROPERTY()
	FString ShowFlags;
	UPROPERTY()
	TArray<FString> EnabledStats;
	UPROPERTY()
	bool bIsRealtime;
	UPROPERTY()
	bool bShowStats;
	UPROPERTY()
	bool bGameViewActive;
	UPROPERTY()
	bool bAllowCinematicControl;



};

USTRUCT()
struct FVpFullLayoutData
{
	GENERATED_BODY()
public:
	UPROPERTY()
	FString LayoutConfig; // The layout arrangement, ie OnePane, FourPane2x2, etc.
	UPROPERTY()
	TArray<FVpClientConfigData> PanelData; // The individual panels in the viewport
};

USTRUCT(BlueprintType)
struct FViewportConfigFileData {
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Category = "ViewportConfig")
	FString FilePath;

	UPROPERTY(BlueprintReadOnly, Category = "ViewportConfig")
	FString FileName;
};

UCLASS()
class UVpLayoutConfigDataStructures : public UEditorUtilityBlueprint
{
	GENERATED_BODY()

public:
	static void InitializeViewportLayoutCommandsMap();
	static TMap<FString, TSharedPtr<FUICommandInfo>> GetViewportLayoutMap() {
		return ViewportLayoutConfigCommandsMap;
	}

private:
	static TMap<FString, TSharedPtr<FUICommandInfo>> ViewportLayoutConfigCommandsMap;
	
};
