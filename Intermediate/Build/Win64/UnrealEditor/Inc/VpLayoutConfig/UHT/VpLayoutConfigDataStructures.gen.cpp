// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VpLayoutConfig/Private/VpLayoutConfigDataStructures.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVpLayoutConfigDataStructures() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityBlueprint();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELevelViewportType();
UPackage* Z_Construct_UPackage__Script_VpLayoutConfig();
VPLAYOUTCONFIG_API UClass* Z_Construct_UClass_UVpLayoutConfigDataStructures();
VPLAYOUTCONFIG_API UClass* Z_Construct_UClass_UVpLayoutConfigDataStructures_NoRegister();
VPLAYOUTCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FViewportConfigFileData();
VPLAYOUTCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FVpClientConfigData();
VPLAYOUTCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FVpFullLayoutData();
// End Cross Module References

// Begin ScriptStruct FVpClientConfigData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VpClientConfigData;
class UScriptStruct* FVpClientConfigData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VpClientConfigData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VpClientConfigData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVpClientConfigData, (UObject*)Z_Construct_UPackage__Script_VpLayoutConfig(), TEXT("VpClientConfigData"));
	}
	return Z_Registration_Info_UScriptStruct_VpClientConfigData.OuterSingleton;
}
template<> VPLAYOUTCONFIG_API UScriptStruct* StaticStruct<FVpClientConfigData>()
{
	return FVpClientConfigData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVpClientConfigData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VpType_MetaData[] = {
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowFlags_MetaData[] = {
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnabledStats_MetaData[] = {
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRealtime_MetaData[] = {
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowStats_MetaData[] = {
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGameViewActive_MetaData[] = {
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCinematicControl_MetaData[] = {
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_VpType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ViewMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ShowFlags;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EnabledStats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EnabledStats;
	static void NewProp_bIsRealtime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRealtime;
	static void NewProp_bShowStats_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowStats;
	static void NewProp_bGameViewActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameViewActive;
	static void NewProp_bAllowCinematicControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCinematicControl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVpClientConfigData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_VpType = { "VpType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVpClientConfigData, VpType), Z_Construct_UEnum_UnrealEd_ELevelViewportType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VpType_MetaData), NewProp_VpType_MetaData) }; // 2817302343
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVpClientConfigData, ViewMode), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewMode_MetaData), NewProp_ViewMode_MetaData) }; // 2782198090
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_ShowFlags = { "ShowFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVpClientConfigData, ShowFlags), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowFlags_MetaData), NewProp_ShowFlags_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_EnabledStats_Inner = { "EnabledStats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_EnabledStats = { "EnabledStats", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVpClientConfigData, EnabledStats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnabledStats_MetaData), NewProp_EnabledStats_MetaData) };
void Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bIsRealtime_SetBit(void* Obj)
{
	((FVpClientConfigData*)Obj)->bIsRealtime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bIsRealtime = { "bIsRealtime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVpClientConfigData), &Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bIsRealtime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRealtime_MetaData), NewProp_bIsRealtime_MetaData) };
void Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bShowStats_SetBit(void* Obj)
{
	((FVpClientConfigData*)Obj)->bShowStats = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bShowStats = { "bShowStats", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVpClientConfigData), &Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bShowStats_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowStats_MetaData), NewProp_bShowStats_MetaData) };
void Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bGameViewActive_SetBit(void* Obj)
{
	((FVpClientConfigData*)Obj)->bGameViewActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bGameViewActive = { "bGameViewActive", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVpClientConfigData), &Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bGameViewActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGameViewActive_MetaData), NewProp_bGameViewActive_MetaData) };
void Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bAllowCinematicControl_SetBit(void* Obj)
{
	((FVpClientConfigData*)Obj)->bAllowCinematicControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bAllowCinematicControl = { "bAllowCinematicControl", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVpClientConfigData), &Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bAllowCinematicControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCinematicControl_MetaData), NewProp_bAllowCinematicControl_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVpClientConfigData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_VpType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_ViewMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_ShowFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_EnabledStats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_EnabledStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bIsRealtime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bShowStats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bGameViewActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewProp_bAllowCinematicControl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVpClientConfigData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVpClientConfigData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VpLayoutConfig,
	nullptr,
	&NewStructOps,
	"VpClientConfigData",
	Z_Construct_UScriptStruct_FVpClientConfigData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVpClientConfigData_Statics::PropPointers),
	sizeof(FVpClientConfigData),
	alignof(FVpClientConfigData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVpClientConfigData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVpClientConfigData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVpClientConfigData()
{
	if (!Z_Registration_Info_UScriptStruct_VpClientConfigData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VpClientConfigData.InnerSingleton, Z_Construct_UScriptStruct_FVpClientConfigData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VpClientConfigData.InnerSingleton;
}
// End ScriptStruct FVpClientConfigData

// Begin ScriptStruct FVpFullLayoutData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VpFullLayoutData;
class UScriptStruct* FVpFullLayoutData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VpFullLayoutData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VpFullLayoutData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVpFullLayoutData, (UObject*)Z_Construct_UPackage__Script_VpLayoutConfig(), TEXT("VpFullLayoutData"));
	}
	return Z_Registration_Info_UScriptStruct_VpFullLayoutData.OuterSingleton;
}
template<> VPLAYOUTCONFIG_API UScriptStruct* StaticStruct<FVpFullLayoutData>()
{
	return FVpFullLayoutData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVpFullLayoutData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutConfig_MetaData[] = {
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PanelData_MetaData[] = {
		{ "Comment", "// The layout arrangement, ie OnePane, FourPane2x2, etc.\n" },
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
		{ "ToolTip", "The layout arrangement, ie OnePane, FourPane2x2, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LayoutConfig;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PanelData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PanelData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVpFullLayoutData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::NewProp_LayoutConfig = { "LayoutConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVpFullLayoutData, LayoutConfig), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutConfig_MetaData), NewProp_LayoutConfig_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::NewProp_PanelData_Inner = { "PanelData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVpClientConfigData, METADATA_PARAMS(0, nullptr) }; // 2644465935
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::NewProp_PanelData = { "PanelData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVpFullLayoutData, PanelData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PanelData_MetaData), NewProp_PanelData_MetaData) }; // 2644465935
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::NewProp_LayoutConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::NewProp_PanelData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::NewProp_PanelData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VpLayoutConfig,
	nullptr,
	&NewStructOps,
	"VpFullLayoutData",
	Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::PropPointers),
	sizeof(FVpFullLayoutData),
	alignof(FVpFullLayoutData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVpFullLayoutData()
{
	if (!Z_Registration_Info_UScriptStruct_VpFullLayoutData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VpFullLayoutData.InnerSingleton, Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VpFullLayoutData.InnerSingleton;
}
// End ScriptStruct FVpFullLayoutData

// Begin ScriptStruct FViewportConfigFileData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ViewportConfigFileData;
class UScriptStruct* FViewportConfigFileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ViewportConfigFileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ViewportConfigFileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FViewportConfigFileData, (UObject*)Z_Construct_UPackage__Script_VpLayoutConfig(), TEXT("ViewportConfigFileData"));
	}
	return Z_Registration_Info_UScriptStruct_ViewportConfigFileData.OuterSingleton;
}
template<> VPLAYOUTCONFIG_API UScriptStruct* StaticStruct<FViewportConfigFileData>()
{
	return FViewportConfigFileData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FViewportConfigFileData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "Category", "ViewportConfig" },
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "Category", "ViewportConfig" },
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FViewportConfigFileData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FViewportConfigFileData, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FViewportConfigFileData, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::NewProp_FileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VpLayoutConfig,
	nullptr,
	&NewStructOps,
	"ViewportConfigFileData",
	Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::PropPointers),
	sizeof(FViewportConfigFileData),
	alignof(FViewportConfigFileData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FViewportConfigFileData()
{
	if (!Z_Registration_Info_UScriptStruct_ViewportConfigFileData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ViewportConfigFileData.InnerSingleton, Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ViewportConfigFileData.InnerSingleton;
}
// End ScriptStruct FViewportConfigFileData

// Begin Class UVpLayoutConfigDataStructures
void UVpLayoutConfigDataStructures::StaticRegisterNativesUVpLayoutConfigDataStructures()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVpLayoutConfigDataStructures);
UClass* Z_Construct_UClass_UVpLayoutConfigDataStructures_NoRegister()
{
	return UVpLayoutConfigDataStructures::StaticClass();
}
struct Z_Construct_UClass_UVpLayoutConfigDataStructures_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VpLayoutConfigDataStructures.h" },
		{ "ModuleRelativePath", "Private/VpLayoutConfigDataStructures.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVpLayoutConfigDataStructures>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVpLayoutConfigDataStructures_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_VpLayoutConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVpLayoutConfigDataStructures_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVpLayoutConfigDataStructures_Statics::ClassParams = {
	&UVpLayoutConfigDataStructures::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVpLayoutConfigDataStructures_Statics::Class_MetaDataParams), Z_Construct_UClass_UVpLayoutConfigDataStructures_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVpLayoutConfigDataStructures()
{
	if (!Z_Registration_Info_UClass_UVpLayoutConfigDataStructures.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVpLayoutConfigDataStructures.OuterSingleton, Z_Construct_UClass_UVpLayoutConfigDataStructures_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVpLayoutConfigDataStructures.OuterSingleton;
}
template<> VPLAYOUTCONFIG_API UClass* StaticClass<UVpLayoutConfigDataStructures>()
{
	return UVpLayoutConfigDataStructures::StaticClass();
}
UVpLayoutConfigDataStructures::UVpLayoutConfigDataStructures(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVpLayoutConfigDataStructures);
UVpLayoutConfigDataStructures::~UVpLayoutConfigDataStructures() {}
// End Class UVpLayoutConfigDataStructures

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ovfxc_Documents_GithubProjects_PackagedPlugins_ViewportConfigManagerDir_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpLayoutConfigDataStructures_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FVpClientConfigData::StaticStruct, Z_Construct_UScriptStruct_FVpClientConfigData_Statics::NewStructOps, TEXT("VpClientConfigData"), &Z_Registration_Info_UScriptStruct_VpClientConfigData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVpClientConfigData), 2644465935U) },
		{ FVpFullLayoutData::StaticStruct, Z_Construct_UScriptStruct_FVpFullLayoutData_Statics::NewStructOps, TEXT("VpFullLayoutData"), &Z_Registration_Info_UScriptStruct_VpFullLayoutData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVpFullLayoutData), 45462888U) },
		{ FViewportConfigFileData::StaticStruct, Z_Construct_UScriptStruct_FViewportConfigFileData_Statics::NewStructOps, TEXT("ViewportConfigFileData"), &Z_Registration_Info_UScriptStruct_ViewportConfigFileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FViewportConfigFileData), 1631972221U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVpLayoutConfigDataStructures, UVpLayoutConfigDataStructures::StaticClass, TEXT("UVpLayoutConfigDataStructures"), &Z_Registration_Info_UClass_UVpLayoutConfigDataStructures, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVpLayoutConfigDataStructures), 2206054058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ovfxc_Documents_GithubProjects_PackagedPlugins_ViewportConfigManagerDir_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpLayoutConfigDataStructures_h_2244306496(TEXT("/Script/VpLayoutConfig"),
	Z_CompiledInDeferFile_FID_Users_ovfxc_Documents_GithubProjects_PackagedPlugins_ViewportConfigManagerDir_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpLayoutConfigDataStructures_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ovfxc_Documents_GithubProjects_PackagedPlugins_ViewportConfigManagerDir_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpLayoutConfigDataStructures_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Users_ovfxc_Documents_GithubProjects_PackagedPlugins_ViewportConfigManagerDir_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpLayoutConfigDataStructures_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ovfxc_Documents_GithubProjects_PackagedPlugins_ViewportConfigManagerDir_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpLayoutConfigDataStructures_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
