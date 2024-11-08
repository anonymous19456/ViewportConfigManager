// Copyright Epic Games, Inc. All Rights Reserved.

#include "VpLayoutConfigStyle.h"
#include "VpLayoutConfig.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FVpLayoutConfigStyle::StyleInstance = nullptr;

void FVpLayoutConfigStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FVpLayoutConfigStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FVpLayoutConfigStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("VpLayoutConfigStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FVpLayoutConfigStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("VpLayoutConfigStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("VpLayoutConfig")->GetBaseDir() / TEXT("Resources"));

	Style->Set("VpLayoutConfig.PluginAction", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));
	Style->Set("VpLayoutConfig.OpenSaveWindow", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));
	Style->Set("VpLayoutConfig.OpenLoadWindow", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));
	Style->Set("VpLayoutConfig.OpenDeleteWindow", new IMAGE_BRUSH_SVG(TEXT("PlaceholderButtonIcon"), Icon20x20));
	return Style;
}

void FVpLayoutConfigStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FVpLayoutConfigStyle::Get()
{
	return *StyleInstance;
}
