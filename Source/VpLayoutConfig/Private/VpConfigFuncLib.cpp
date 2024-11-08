// Fill out your copyright notice in the Description page of Project Settings.


#include "VpConfigFuncLib.h"
#include "HAL/PlatformFileManager.h"
#include "HAL/FileManager.h"
#include "Serialization/JsonSerializer.h"
#include "JsonObjectConverter.h"
#include "LevelEditor.h"
#include "SLevelViewport.h"
#include "Misc/Paths.h"
#include "Interfaces/IPluginManager.h"
#include "LevelViewportLayout.h"
#include "LevelViewportActions.h"
#include "Modules/ModuleManager.h"
#include "Framework/Commands/UICommandList.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "EditorUtilitySubsystem.h"
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Styling/SlateColor.h"

DEFINE_LOG_CATEGORY(ViewportConfigPlugin);

#pragma region Viewport Funcs
TArray<FLevelEditorViewportClient*> UVpConfigFuncLib::GetActiveViewportClients()
{
	// Get the active viewport config key
	FName ActiveVpConfigKey = GetLevelEditorSubSystem()->GetActiveViewportConfigKey();
	FString ActiveVpParentID = GetParentVpID(ActiveVpConfigKey.ToString());
	
	// Get all level viewport clients
	TArray<FLevelEditorViewportClient*> AllViewportClients = GEditor->GetLevelViewportClients();

	// List to hold the active clients
	TArray<FLevelEditorViewportClient*> ActiveViewportClients;

	// Iterate through the clients and check to see if their viewport config key is the same as the one for the active viewport
		// True: Add to list, False: ignore
	for (FLevelEditorViewportClient* VpClient : AllViewportClients) {
		// Try get SLevelViewport because it has a function to get config keys
		TSharedPtr<SEditorViewport> ViewportWidget = VpClient->GetEditorViewportWidget();
		TSharedPtr<SLevelViewport> LevelViewport = StaticCastSharedPtr<SLevelViewport>(ViewportWidget);
		
		if (LevelViewport.IsValid()){
			FString ParentID = GetParentVpID(LevelViewport->GetConfigKey().ToString());

			if (ParentID == ActiveVpParentID) {
				ActiveViewportClients.Add(VpClient);
			}
		}
		else{
			// The cast failed, meaning this is not a level viewport
			UE_LOG(ViewportConfigPlugin, Warning, TEXT("Cast failed, this is not an SLevelViewport"));
			continue;
		}
	}
	return ActiveViewportClients;
}

FVpClientConfigData UVpConfigFuncLib::GetVpClientConfigData(FLevelEditorViewportClient* _viewportClient)
{
	FVpClientConfigData ClientData;
	// Assign Properties
	ClientData.VpType = _viewportClient->GetViewportType();
	ClientData.ViewMode = _viewportClient->GetViewMode();
	ClientData.bIsRealtime = _viewportClient->IsRealtime();
	ClientData.bShowStats = _viewportClient->ShouldShowStats();
	ClientData.bGameViewActive = _viewportClient->IsInGameView();
	ClientData.bAllowCinematicControl = _viewportClient->AllowsCinematicControl();
	ClientData.ShowFlags = _viewportClient->EngineShowFlags.ToString();

	// Assign enabled stats
	const TArray<FString>* enabledStatsPtr = _viewportClient->GetEnabledStats();
	if (enabledStatsPtr) {
		const TArray<FString>& enabledStats = *enabledStatsPtr; // Dereference the pointer
		for (const FString& stat : enabledStats) {
			ClientData.EnabledStats.Add(stat);
		}
	}

	return ClientData;
}

FString UVpConfigFuncLib::GetActiveViewportLayoutConfig()
{
	FString LayoutConfig;
	// Count clients asssociated with the active viewport
	TArray<FLevelEditorViewportClient*> ViewportClients = GetActiveViewportClients();
	int32 NumClients = ViewportClients.Num();

	if (NumClients != 2) {
		FString ConfigKey = GetLevelEditorSubSystem()->GetActiveViewportConfigKey().ToString();
		LayoutConfig = GetLayoutConfigFromConfigKey(ConfigKey, NumClients);
	}
	else if (NumClients == 2) {
		//THIS IS WHERE WE TRY TO DISTINGUISH 2PANEVERT AND 2PANEHORIZ

		// Get the geo info for both viewport clients/panes
		FGeometry VpGeo1 = ViewportClients[0]->GetEditorViewportWidget()->GetCachedGeometry();
		FGeometry VpGeo2 = ViewportClients[1]->GetEditorViewportWidget()->GetCachedGeometry();

		// if the Pos is the same for both viewports on both axis: we have a problem, so I need to make sure that can't happen
		
		// if the initPosX is the same for both viewports: they are stacked vertically
		if (VpGeo1.GetAbsolutePosition().X == VpGeo2.GetAbsolutePosition().X) {
			LayoutConfig = LevelViewportConfigurationNames::TwoPanesVert.ToString();
		}
		// if the initPosY is the same for both viewports: they are aligned horizontally
		else if (VpGeo1.GetAbsolutePosition().Y == VpGeo2.GetAbsolutePosition().Y) {
			LayoutConfig = LevelViewportConfigurationNames::TwoPanesHoriz.ToString();
		}
	}

	//UE_LOG(ViewportConfigPlugin, Log, TEXT("Active Vp Layout Config: %s"), *LayoutConfig);
	return LayoutConfig;
}

void UVpConfigFuncLib::UpdateViewport(int _viewportIndex)
{
	// Get all viewport clients and try messing with some settings
	TArray<FLevelEditorViewportClient*> Viewports = GetActiveViewportClients();
	FLevelEditorViewportClient* currentVP = Viewports[_viewportIndex];

	GetActiveViewportLayoutConfig();
	ApplyVpLayout(LevelViewportConfigurationNames::TwoPanesHoriz.ToString());
	Viewports[_viewportIndex]->Invalidate();
}

FVpFullLayoutData UVpConfigFuncLib::GetAllVpConfigData(const TArray<FLevelEditorViewportClient*> _viewports)
{
	FVpFullLayoutData FullViewportLayoutData;

	// Gets the layout config (1 pane, 2 pane horiz, etc)
	FullViewportLayoutData.LayoutConfig = GetActiveViewportLayoutConfig();

	// Get the viewport client data
	TArray<FVpClientConfigData> viewportConfigDataSet;

	// Iterate through each viewport client, read and store its properties
	for (int32 i = 0; i < _viewports.Num(); i++) {
		// Get the current viewport and make a new struct
		FLevelEditorViewportClient* currentViewport = _viewports[i];
		FVpClientConfigData configData = GetVpClientConfigData(currentViewport);

		// Add client config data to the list
		viewportConfigDataSet.Add(configData);
	}

	FullViewportLayoutData.PanelData = viewportConfigDataSet;

	return FullViewportLayoutData;
}

void UVpConfigFuncLib::ApplyAllVpConfigData(const FVpFullLayoutData _vpData)
{
	// Apply the overall layout configuration to the active viewport
	ApplyVpLayout(_vpData.LayoutConfig);

	// Get the viewports
	TArray<FLevelEditorViewportClient*> viewportClients = GetActiveViewportClients();
	
	// Iterate through viewport clients and apply their settings
	for (int i = 0; i < viewportClients.Num(); i++) {
		ApplyVpClientConfigData(viewportClients[i], _vpData.PanelData[i]);
	}
}

void UVpConfigFuncLib::ApplyVpLayout(FString ConfigName)
{
	// Ensure that Level Editor Commands are registered
	if (!FLevelViewportCommands::IsRegistered())
	{
		FLevelViewportCommands::Register();
	}

	// Get the command list associated with the level editor viewport commands
	TSharedPtr<FUICommandList> CommandList = FModuleManager::GetModuleChecked<FLevelEditorModule>("LevelEditor").GetGlobalLevelEditorActions();

	// Execute the layout command based on the input
	if (CommandList.IsValid())
	{
		const TSharedPtr<FUICommandInfo> LayoutCommand = *UVpLayoutConfigDataStructures::GetViewportLayoutMap().Find(ConfigName);
		if (LayoutCommand.IsValid())
		{
			CommandList->ExecuteAction(LayoutCommand.ToSharedRef());
		}
		else
		{
			UE_LOG(ViewportConfigPlugin, Error, TEXT("The '%s' command is not valid."), *LayoutCommand->GetCommandName().ToString());
		}
	}
	else
	{
		UE_LOG(ViewportConfigPlugin, Error, TEXT("Level Editor Command List is not valid."));
	}
}

void UVpConfigFuncLib::ApplyVpClientConfigData(FLevelEditorViewportClient* _viewport, const FVpClientConfigData viewportConfigDataSet)
{
	// Set properties
	_viewport->SetViewportType(viewportConfigDataSet.VpType);
	_viewport->SetViewMode(viewportConfigDataSet.ViewMode);
	_viewport->EngineShowFlags.SetFromString(*viewportConfigDataSet.ShowFlags);
	_viewport->SetEnabledStats(viewportConfigDataSet.EnabledStats);
	_viewport->SetRealtime(viewportConfigDataSet.bIsRealtime);
	_viewport->SetShowStats(viewportConfigDataSet.bShowStats);
	_viewport->SetGameView(viewportConfigDataSet.bGameViewActive);
	_viewport->SetAllowCinematicControl(viewportConfigDataSet.bAllowCinematicControl);

	// Redraw the viewport
	_viewport->Invalidate();
}
#pragma endregion

#pragma region FileManagement
FString UVpConfigFuncLib::ReadStringFromFile(FString _filePath, bool& _bOutSuccess, FString& _outInfoMessage)
{
	// Make sure the file exists
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*_filePath)) {
		_bOutSuccess = false;
		_outInfoMessage = FString::Printf(TEXT("Read String From File Failed - File does not exist - '%s'"), *_filePath);
		UE_LOG(ViewportConfigPlugin, Error, TEXT("%s"), *_outInfoMessage);
		return "";
	}

	FString fileString = "";

	// Try to read the file since we've confirmed that it exists
	if (!FFileHelper::LoadFileToString(fileString, *_filePath)) {
		_bOutSuccess = false;
		_outInfoMessage = FString::Printf(TEXT("Read String From File Failed - Was not able to read file.  It must be a text file - '%s'"), *_filePath);
		UE_LOG(ViewportConfigPlugin, Error, TEXT("%s"), *_outInfoMessage);
		return "";
	}

	_bOutSuccess = true;
	_outInfoMessage = FString::Printf(TEXT("Read String From File Successful - '%s'"), *_filePath);
	UE_LOG(ViewportConfigPlugin, Log, TEXT("%s"), *_outInfoMessage);
	return fileString;
}

void UVpConfigFuncLib::WriteStringToFile(FString _filePath, FString _string, bool& _bOutSuccess, FString& _outInfoMessage)
{
	if (!FFileHelper::SaveStringToFile(_string, *_filePath)) {
		_bOutSuccess = false;
		_outInfoMessage = FString::Printf(TEXT("Write String To File Failed - Was not able to write to file.  Is your file readonly?  Is the file path valid - '%s'"), *_filePath);
		UE_LOG(ViewportConfigPlugin, Error, TEXT("%s"), *_outInfoMessage);
		return;
	}

	_bOutSuccess = true;
	_outInfoMessage = FString::Printf(TEXT("Write String To File Successful - '%s'"), *_filePath);
	UE_LOG(ViewportConfigPlugin, Log, TEXT("%s"), *_outInfoMessage);
}

TSharedPtr<FJsonObject> UVpConfigFuncLib::ReadJson(FString _jsonFilePath, bool& _bOutSuccess, FString& _outInfoMessage)
{
	// Try to read the file
	FString jsonString = ReadStringFromFile(_jsonFilePath, _bOutSuccess, _outInfoMessage);
	if (!_bOutSuccess) {
		return nullptr;
	}

	TSharedPtr<FJsonObject> jsonObject;

	// Try convert string to json object, output goes into json object
	if (!FJsonSerializer::Deserialize(TJsonReaderFactory<>::Create(jsonString), jsonObject)) {
		_bOutSuccess = false;
		_outInfoMessage = FString::Printf(TEXT("Read Json Failed - Was not able to deserialize the json string.  Is it in the right format? - '%s'"), *jsonString);
		UE_LOG(ViewportConfigPlugin, Error, TEXT("%s"), *_outInfoMessage);
		return nullptr;
	}

	_bOutSuccess = true;
	_outInfoMessage = FString::Printf(TEXT("Read Json Object Successful."));
	UE_LOG(ViewportConfigPlugin, Log, TEXT("%s"), *_outInfoMessage);
	return jsonObject;
}

void UVpConfigFuncLib::WriteJson(FString _jsonFilePath, TSharedPtr<FJsonObject> _jsonObject, bool& _bOutSuccess, FString& _outInfoMessage)
{
	FString jsonString;

	// Try conver json object to string, output into json string
	if (!FJsonSerializer::Serialize(_jsonObject.ToSharedRef(), TJsonWriterFactory<>::Create(&jsonString, 0))) {
		_bOutSuccess = false;
		_outInfoMessage = FString::Printf(TEXT("Write To Json File Failed - Was not able to serialize json to string.  Is the JsonObject valid?"));
		UE_LOG(ViewportConfigPlugin, Error, TEXT("%s"), *_outInfoMessage);
		return;
	}

	// Try write json string to file
	WriteStringToFile(_jsonFilePath, jsonString, _bOutSuccess, _outInfoMessage);
	if (!_bOutSuccess) {
		return;
	}

	_bOutSuccess = true;
	_outInfoMessage = FString::Printf(TEXT("Write String To File Successful - '%s'"), *_jsonFilePath);
	UE_LOG(ViewportConfigPlugin, Log, TEXT("%s"), *_outInfoMessage);

}

FVpFullLayoutData UVpConfigFuncLib::ReadStructFromJsonFile(FString _jsonFilePath, bool& _bOutSuccess, FString& _outInfoMessage)
{
	// Try to read json object from file
	TSharedPtr<FJsonObject> jsonObject = ReadJson(_jsonFilePath, _bOutSuccess, _outInfoMessage);
	if (!_bOutSuccess) {
		return FVpFullLayoutData(); // return a default struct if this fails
	}

	FVpFullLayoutData configData;

	// Try tp convert the object to the struct
	if (!FJsonObjectConverter::JsonObjectToUStruct<FVpFullLayoutData>(jsonObject.ToSharedRef(), &configData)) {
		_bOutSuccess = false;
		_outInfoMessage = FString::Printf(TEXT("Read Struct json failed - Was not able to convert the json object to your desired structure.  Is it the right format/struct? - '%s'"), *_jsonFilePath);
		UE_LOG(ViewportConfigPlugin, Error, TEXT("%s"), *_outInfoMessage);
		return FVpFullLayoutData(); // return a default struct if this fails
	}

	_bOutSuccess = true;
	_outInfoMessage = FString::Printf(TEXT("Read Struct Json Successful - '%s'"), *_jsonFilePath);
	UE_LOG(ViewportConfigPlugin, Log, TEXT("%s"), *_outInfoMessage);
	return configData;

}

void UVpConfigFuncLib::WriteStructToJsonFile(FString _jsonFilePath, FVpFullLayoutData data, bool& _bOutSuccess, FString& _outInfoMessage)
{
	// Try convert struct to json object
	TSharedPtr<FJsonObject> jsonObject = FJsonObjectConverter::UStructToJsonObject(data);
	if (jsonObject == nullptr) {
		_bOutSuccess = false;
		_outInfoMessage = FString::Printf(TEXT("Write Struct To Json Failed - Was not able to convert the struct to a json object."));
		UE_LOG(ViewportConfigPlugin, Error, TEXT("%s"), *_outInfoMessage);
		return;
	}

	//Try to write to json file
	WriteJson(_jsonFilePath, jsonObject, _bOutSuccess, _outInfoMessage);
}

TArray<FViewportConfigFileData> UVpConfigFuncLib::GetJsonFilesFromDir(const FString& _directory)
{
	TArray<FString> filePaths;
	TArray<FViewportConfigFileData> fileInfo;

	IPlatformFile& platformFile = FPlatformFileManager::Get().GetPlatformFile();
	if (platformFile.DirectoryExists(*_directory)) {
		platformFile.FindFiles(filePaths, *_directory, TEXT(".json"));
	}

	for (FString file : filePaths) {
		FViewportConfigFileData fileData;
		FString fileName = FPaths::GetBaseFilename(file);
		fileData.FileName = fileName;
		fileData.FilePath = file;
		fileInfo.Add(fileData);
	}

	return fileInfo;
}

bool UVpConfigFuncLib::CanConvertJsonToLayout(FString _filePath)
{
	bool bSuccess;
	FString message;

	ReadStructFromJsonFile(_filePath, bSuccess, message);

	return bSuccess;
}

FString UVpConfigFuncLib::GetConfigDir()
{
	TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("VpLayoutConfig"));
	if (Plugin.IsValid()) {
		return FPaths::Combine(Plugin->GetBaseDir(), TEXT("Resources/ViewportConfigs"));
	}
	
	return FString();
}
#pragma endregion

#pragma region Other
bool UVpConfigFuncLib::SaveVpLayout(FString _vpLayoutName, FString _saveFilePath)
{
	// Variables
	TArray<FLevelEditorViewportClient*> ActiveViewportClients = GetActiveViewportClients();
	bool bIsSuccess;
	FString message;

	// Assign layout data
	FVpFullLayoutData vpData = GetAllVpConfigData(ActiveViewportClients);

	// Save the struct to a json file in a location chosen by the user, with a name chosen by the user
	FString fullPath = _saveFilePath + "/" + _vpLayoutName + ".json";
	WriteStructToJsonFile(fullPath, vpData, bIsSuccess, message);

	return bIsSuccess;
}

bool UVpConfigFuncLib::LoadVpLayout(FString _saveFilePath)
{
	// Variables
	bool bIsSuccess;
	FString message;

	// Load the saved Json file
	FVpFullLayoutData vpData = ReadStructFromJsonFile(_saveFilePath, bIsSuccess, message);

	// Apply that data to the current layout
	ApplyAllVpConfigData(vpData);

	return bIsSuccess;
}

bool UVpConfigFuncLib::DeleteVpLayout(FString _filePath)
{
	if (IFileManager::Get().FileExists(*_filePath) && CanConvertJsonToLayout(_filePath)) {
		return IFileManager::Get().Delete(*_filePath) != 0;
	}
	return false;
}

void UVpConfigFuncLib::ShowNotificationMessage(FText NotificationText)
{
	FNotificationInfo Info(NotificationText);
	Info.ExpireDuration = 5.0f;
	Info.bUseLargeFont = false;
	FSlateNotificationManager::Get().AddNotification(Info);
}

void UVpConfigFuncLib::CloseWidget(UEditorUtilityWidget* WidgetToDestroy)
{
	if (WidgetToDestroy)
	{
	}
}

void UVpConfigFuncLib::OpenEditorUtilWidget(const FString WidgetRefPath)
{
	if (!GEditor) {
		UE_LOG(ViewportConfigPlugin, Error, TEXT("GEditor not available, cannot open Editor Utility Widget."));
		return;
	} 

	// Load the widget
	UEditorUtilityWidgetBlueprint* WidgetBP = LoadObject<UEditorUtilityWidgetBlueprint>(nullptr, *WidgetRefPath);

	if (!WidgetBP) {
		UE_LOG(ViewportConfigPlugin, Error, TEXT("Could not find widget at path: %s"), *WidgetRefPath);
		return;
	}

	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	if (!EditorUtilitySubsystem)
	{
		UE_LOG(ViewportConfigPlugin, Error, TEXT("Editor Utility Subsystem is not available, cannot open Editor Utility  Widget."));
		return;
	}

	// Spawn the widget in the editor as a standalone window
	EditorUtilitySubsystem->SpawnAndRegisterTab(WidgetBP);
}
#pragma endregion