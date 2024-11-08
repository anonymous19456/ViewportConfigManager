// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BlueprintEditorLibrary.h"
#include "LevelEditorViewport.h"
#include "FVpConfigData.h"
#include "LevelViewportLayout.h"
#include "LevelEditorSubsystem.h"
#include "VpLayoutConfigDataStructures.h"
#include "VpConfigFuncLib.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(ViewportConfigPlugin, Log, All);

class FJsonObject;

/**
 * 
 */

UCLASS()
class UVpConfigFuncLib : public UBlueprintEditorLibrary
{
	GENERATED_BODY()

public:

	static ULevelEditorSubsystem* GetLevelEditorSubSystem() 
	{
		// Get the Level Editor Subsystem
		ULevelEditorSubsystem* LevelEditorSubsystem = GEditor->GetEditorSubsystem<ULevelEditorSubsystem>();

		if (LevelEditorSubsystem)
		{
			return LevelEditorSubsystem;
		}
		return nullptr;
	}

	static FString GetParentVpID(const FString& ConfigKey) {
		// Find the first occurrence of "Viewport"
		int32 ViewportIndex = ConfigKey.Find(TEXT("Viewport "), ESearchCase::IgnoreCase, ESearchDir::FromStart);

		if (ViewportIndex != INDEX_NONE)
		{
			// Extract the substring starting from "Viewport"
			FString ParentViewport = ConfigKey.RightChop(ViewportIndex);

			// Find the first period after "Viewport"
			int32 PeriodIndex = ParentViewport.Find(TEXT("."), ESearchCase::IgnoreCase, ESearchDir::FromStart);

			if (PeriodIndex != INDEX_NONE)
			{
				// Return the substring from the start to the first period
				//UE_LOG(LogTemp, Warning, TEXT("Parent ID Left: '%s'"), *ParentViewport.Left(PeriodIndex));
				return ParentViewport.Left(PeriodIndex);
			}
			else {
				// if no "." is found return the whole string
				//UE_LOG(LogTemp, Warning, TEXT("Parent ID: '%s'"), *ParentViewport);
				return ParentViewport;
			}

		}
		// return an empty string if viewport is not found
		UE_LOG(ViewportConfigPlugin, Warning, TEXT("Returning empty parent ID"));
		return FString();
	}

	/// <summary>
	/// Gets the viewport layout configuration from the active viewport config, only works for none - 2 pane configs
	/// </summary>
	/// <returns></returns>
	static FString GetLayoutConfigFromConfigKey(FString& ConfigKey, int32 viewportPaneCount) {
		// This doesn't work with 2-pane viewports, so return the whole string if we get a 2 pane vp
		if (viewportPaneCount == 2) {
			UE_LOG(ViewportConfigPlugin, Warning, TEXT("Unable to get config key."));
			return ConfigKey;
		}

		// Find the first occurrence of "."
		int32 PeriodIndex = ConfigKey.Find(TEXT("."), ESearchCase::IgnoreCase, ESearchDir::FromStart);

		if (PeriodIndex != INDEX_NONE)
		{
			// Return the substring from the start to the first period
			return ConfigKey.Left(PeriodIndex); // This will include everything before the first "."
		}

		// If no period is found, return the whole string
		UE_LOG(ViewportConfigPlugin, Warning, TEXT("Unable to get config key."));
		return ConfigKey; // Return the whole string if no period is found
	}

#pragma region ViewportDataManagement
	/// <summary>
	/// Returns all the open viewport clients
	/// </summary>
	/// <returns></returns>
	static TArray<FLevelEditorViewportClient*> GetActiveViewportClients();

	static FVpClientConfigData GetVpClientConfigData(FLevelEditorViewportClient* _viewportClient);

	static FString GetActiveViewportLayoutConfig();	

	/// <summary>
	/// Function for testing out what I can modify in the viewport
	/// </summary>
	/// <param name="_viewportIndex"></param>
	static void UpdateViewport(int _viewportIndex);

	/// <summary>
	/// Gets configuration data from a list of viewport clients
	/// </summary>
	/// <param name="_viewports"></param>
	/// <returns></returns>
	static FVpFullLayoutData GetAllVpConfigData(const TArray<FLevelEditorViewportClient*> _viewports);

	/// <summary>
	/// Applies a list of configuration data to a list of viewport clients
	/// </summary>
	/// <param name="_viewports"></param>
	/// <param name="_vpData"></param>
	static void ApplyAllVpConfigData(const FVpFullLayoutData _vpData);

	static void ApplyVpLayout(FString ConfigName);

	static void ApplyVpClientConfigData(FLevelEditorViewportClient* _viewport, const FVpClientConfigData viewportConfigDataSet);
#pragma endregion

#pragma region FileManagement
	// Read Write Text Files
	static FString ReadStringFromFile(FString _filePath, bool& _bOutSuccess, FString& _outInfoMessage);
	static void WriteStringToFile(FString _filePath, FString _string, bool& _bOutSuccess, FString& _outInfoMessage);

	// Read Write Json
	static TSharedPtr<FJsonObject> ReadJson(FString _jsonFilePath, bool& _bOutSuccess, FString& _outInfoMessage);
	static void WriteJson(FString _jsonFilePath, TSharedPtr<FJsonObject> _jsonObject, bool& _bOutSuccess, FString& _outInfoMessage);

	// Read Write Structs
	static FVpFullLayoutData ReadStructFromJsonFile(FString _jsonFilePath, bool& _bOutSuccess, FString& _outInfoMessage);
	static void WriteStructToJsonFile(FString _jsonFilePath, FVpFullLayoutData data, bool& _bOutSuccess, FString& _outInfoMessage);

	// Other
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "ViewportConfig")
	static TArray<FViewportConfigFileData> GetJsonFilesFromDir(const FString& _directory);
	
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "ViewportConfig")
	static bool CanConvertJsonToLayout(FString _filePath);

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "ViewportConfig")
	static FString GetConfigDir();
#pragma endregion

#pragma region Other
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "ViewportConfig")
	static bool SaveVpLayout(FString _vpLayoutName, FString _saveFilePath);

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "ViewportConfig")
	static bool LoadVpLayout(FString _saveFilePath);

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "ViewportConfig")
	static bool DeleteVpLayout(FString _filePath);

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "ViewportConfig")
	static void ShowNotificationMessage(FText NotificationText);

	UFUNCTION(BlueprintCallable, CallInEditor, Category = "ViewportConfig")
	static void CloseWidget(UEditorUtilityWidget* WidgetToDestroy);

	static void OpenEditorUtilWidget(const FString FilePath);
#pragma endregion
};

