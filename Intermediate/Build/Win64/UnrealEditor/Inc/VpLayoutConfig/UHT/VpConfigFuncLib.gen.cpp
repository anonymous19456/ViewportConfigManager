// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VpLayoutConfig/Private/VpConfigFuncLib.h"
#include "VpLayoutConfig/Private/VpLayoutConfigDataStructures.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVpConfigFuncLib() {}
// Cross Module References
	BLUEPRINTEDITORLIBRARY_API UClass* Z_Construct_UClass_UBlueprintEditorLibrary();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VpLayoutConfig();
	VPLAYOUTCONFIG_API UClass* Z_Construct_UClass_UVpConfigFuncLib();
	VPLAYOUTCONFIG_API UClass* Z_Construct_UClass_UVpConfigFuncLib_NoRegister();
	VPLAYOUTCONFIG_API UScriptStruct* Z_Construct_UScriptStruct_FViewportConfigFileData();
// End Cross Module References
	DEFINE_FUNCTION(UVpConfigFuncLib::execCloseWidget)
	{
		P_GET_OBJECT(UEditorUtilityWidget,Z_Param_WidgetToDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVpConfigFuncLib::CloseWidget(Z_Param_WidgetToDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVpConfigFuncLib::execShowNotificationMessage)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_NotificationText);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVpConfigFuncLib::ShowNotificationMessage(Z_Param_NotificationText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVpConfigFuncLib::execDeleteVpLayout)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVpConfigFuncLib::DeleteVpLayout(Z_Param__filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVpConfigFuncLib::execLoadVpLayout)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__saveFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVpConfigFuncLib::LoadVpLayout(Z_Param__saveFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVpConfigFuncLib::execSaveVpLayout)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__vpLayoutName);
		P_GET_PROPERTY(FStrProperty,Z_Param__saveFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVpConfigFuncLib::SaveVpLayout(Z_Param__vpLayoutName,Z_Param__saveFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVpConfigFuncLib::execGetConfigDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVpConfigFuncLib::GetConfigDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVpConfigFuncLib::execCanConvertJsonToLayout)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__filePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVpConfigFuncLib::CanConvertJsonToLayout(Z_Param__filePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVpConfigFuncLib::execGetJsonFilesFromDir)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param__directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FViewportConfigFileData>*)Z_Param__Result=UVpConfigFuncLib::GetJsonFilesFromDir(Z_Param__directory);
		P_NATIVE_END;
	}
	void UVpConfigFuncLib::StaticRegisterNativesUVpConfigFuncLib()
	{
		UClass* Class = UVpConfigFuncLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanConvertJsonToLayout", &UVpConfigFuncLib::execCanConvertJsonToLayout },
			{ "CloseWidget", &UVpConfigFuncLib::execCloseWidget },
			{ "DeleteVpLayout", &UVpConfigFuncLib::execDeleteVpLayout },
			{ "GetConfigDir", &UVpConfigFuncLib::execGetConfigDir },
			{ "GetJsonFilesFromDir", &UVpConfigFuncLib::execGetJsonFilesFromDir },
			{ "LoadVpLayout", &UVpConfigFuncLib::execLoadVpLayout },
			{ "SaveVpLayout", &UVpConfigFuncLib::execSaveVpLayout },
			{ "ShowNotificationMessage", &UVpConfigFuncLib::execShowNotificationMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics
	{
		struct VpConfigFuncLib_eventCanConvertJsonToLayout_Parms
		{
			FString _filePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::NewProp__filePath = { "_filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VpConfigFuncLib_eventCanConvertJsonToLayout_Parms, _filePath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VpConfigFuncLib_eventCanConvertJsonToLayout_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VpConfigFuncLib_eventCanConvertJsonToLayout_Parms), &Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::NewProp__filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ViewportConfig" },
		{ "ModuleRelativePath", "Private/VpConfigFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVpConfigFuncLib, nullptr, "CanConvertJsonToLayout", nullptr, nullptr, Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::VpConfigFuncLib_eventCanConvertJsonToLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::VpConfigFuncLib_eventCanConvertJsonToLayout_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics
	{
		struct VpConfigFuncLib_eventCloseWidget_Parms
		{
			UEditorUtilityWidget* WidgetToDestroy;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetToDestroy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetToDestroy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::NewProp_WidgetToDestroy_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::NewProp_WidgetToDestroy = { "WidgetToDestroy", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VpConfigFuncLib_eventCloseWidget_Parms, WidgetToDestroy), Z_Construct_UClass_UEditorUtilityWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::NewProp_WidgetToDestroy_MetaData), Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::NewProp_WidgetToDestroy_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::NewProp_WidgetToDestroy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ViewportConfig" },
		{ "ModuleRelativePath", "Private/VpConfigFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVpConfigFuncLib, nullptr, "CloseWidget", nullptr, nullptr, Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::VpConfigFuncLib_eventCloseWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::VpConfigFuncLib_eventCloseWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics
	{
		struct VpConfigFuncLib_eventDeleteVpLayout_Parms
		{
			FString _filePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__filePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::NewProp__filePath = { "_filePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VpConfigFuncLib_eventDeleteVpLayout_Parms, _filePath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VpConfigFuncLib_eventDeleteVpLayout_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VpConfigFuncLib_eventDeleteVpLayout_Parms), &Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::NewProp__filePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ViewportConfig" },
		{ "ModuleRelativePath", "Private/VpConfigFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVpConfigFuncLib, nullptr, "DeleteVpLayout", nullptr, nullptr, Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::VpConfigFuncLib_eventDeleteVpLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::VpConfigFuncLib_eventDeleteVpLayout_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics
	{
		struct VpConfigFuncLib_eventGetConfigDir_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VpConfigFuncLib_eventGetConfigDir_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ViewportConfig" },
		{ "ModuleRelativePath", "Private/VpConfigFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVpConfigFuncLib, nullptr, "GetConfigDir", nullptr, nullptr, Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::VpConfigFuncLib_eventGetConfigDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::VpConfigFuncLib_eventGetConfigDir_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics
	{
		struct VpConfigFuncLib_eventGetJsonFilesFromDir_Parms
		{
			FString _directory;
			TArray<FViewportConfigFileData> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__directory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__directory;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::NewProp__directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::NewProp__directory = { "_directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VpConfigFuncLib_eventGetJsonFilesFromDir_Parms, _directory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::NewProp__directory_MetaData), Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::NewProp__directory_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FViewportConfigFileData, METADATA_PARAMS(0, nullptr) }; // 2324424509
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VpConfigFuncLib_eventGetJsonFilesFromDir_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2324424509
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::NewProp__directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ViewportConfig" },
		{ "Comment", "// Other\n" },
		{ "ModuleRelativePath", "Private/VpConfigFuncLib.h" },
		{ "ToolTip", "Other" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVpConfigFuncLib, nullptr, "GetJsonFilesFromDir", nullptr, nullptr, Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::VpConfigFuncLib_eventGetJsonFilesFromDir_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::VpConfigFuncLib_eventGetJsonFilesFromDir_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics
	{
		struct VpConfigFuncLib_eventLoadVpLayout_Parms
		{
			FString _saveFilePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__saveFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::NewProp__saveFilePath = { "_saveFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VpConfigFuncLib_eventLoadVpLayout_Parms, _saveFilePath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VpConfigFuncLib_eventLoadVpLayout_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VpConfigFuncLib_eventLoadVpLayout_Parms), &Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::NewProp__saveFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ViewportConfig" },
		{ "ModuleRelativePath", "Private/VpConfigFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVpConfigFuncLib, nullptr, "LoadVpLayout", nullptr, nullptr, Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::VpConfigFuncLib_eventLoadVpLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::VpConfigFuncLib_eventLoadVpLayout_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics
	{
		struct VpConfigFuncLib_eventSaveVpLayout_Parms
		{
			FString _vpLayoutName;
			FString _saveFilePath;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp__vpLayoutName;
		static const UECodeGen_Private::FStrPropertyParams NewProp__saveFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::NewProp__vpLayoutName = { "_vpLayoutName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VpConfigFuncLib_eventSaveVpLayout_Parms, _vpLayoutName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::NewProp__saveFilePath = { "_saveFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VpConfigFuncLib_eventSaveVpLayout_Parms, _saveFilePath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VpConfigFuncLib_eventSaveVpLayout_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VpConfigFuncLib_eventSaveVpLayout_Parms), &Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::NewProp__vpLayoutName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::NewProp__saveFilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ViewportConfig" },
		{ "ModuleRelativePath", "Private/VpConfigFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVpConfigFuncLib, nullptr, "SaveVpLayout", nullptr, nullptr, Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::VpConfigFuncLib_eventSaveVpLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::VpConfigFuncLib_eventSaveVpLayout_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics
	{
		struct VpConfigFuncLib_eventShowNotificationMessage_Parms
		{
			FText NotificationText;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VpConfigFuncLib_eventShowNotificationMessage_Parms, NotificationText), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::NewProp_NotificationText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "ViewportConfig" },
		{ "ModuleRelativePath", "Private/VpConfigFuncLib.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVpConfigFuncLib, nullptr, "ShowNotificationMessage", nullptr, nullptr, Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::VpConfigFuncLib_eventShowNotificationMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::VpConfigFuncLib_eventShowNotificationMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVpConfigFuncLib);
	UClass* Z_Construct_UClass_UVpConfigFuncLib_NoRegister()
	{
		return UVpConfigFuncLib::StaticClass();
	}
	struct Z_Construct_UClass_UVpConfigFuncLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVpConfigFuncLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintEditorLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VpLayoutConfig,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVpConfigFuncLib_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UVpConfigFuncLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVpConfigFuncLib_CanConvertJsonToLayout, "CanConvertJsonToLayout" }, // 1647847151
		{ &Z_Construct_UFunction_UVpConfigFuncLib_CloseWidget, "CloseWidget" }, // 810136706
		{ &Z_Construct_UFunction_UVpConfigFuncLib_DeleteVpLayout, "DeleteVpLayout" }, // 1318812798
		{ &Z_Construct_UFunction_UVpConfigFuncLib_GetConfigDir, "GetConfigDir" }, // 1449864458
		{ &Z_Construct_UFunction_UVpConfigFuncLib_GetJsonFilesFromDir, "GetJsonFilesFromDir" }, // 1766917273
		{ &Z_Construct_UFunction_UVpConfigFuncLib_LoadVpLayout, "LoadVpLayout" }, // 144281966
		{ &Z_Construct_UFunction_UVpConfigFuncLib_SaveVpLayout, "SaveVpLayout" }, // 1824566010
		{ &Z_Construct_UFunction_UVpConfigFuncLib_ShowNotificationMessage, "ShowNotificationMessage" }, // 2955465310
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVpConfigFuncLib_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVpConfigFuncLib_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VpConfigFuncLib.h" },
		{ "ModuleRelativePath", "Private/VpConfigFuncLib.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVpConfigFuncLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVpConfigFuncLib>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVpConfigFuncLib_Statics::ClassParams = {
		&UVpConfigFuncLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVpConfigFuncLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UVpConfigFuncLib_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UVpConfigFuncLib()
	{
		if (!Z_Registration_Info_UClass_UVpConfigFuncLib.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVpConfigFuncLib.OuterSingleton, Z_Construct_UClass_UVpConfigFuncLib_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVpConfigFuncLib.OuterSingleton;
	}
	template<> VPLAYOUTCONFIG_API UClass* StaticClass<UVpConfigFuncLib>()
	{
		return UVpConfigFuncLib::StaticClass();
	}
	UVpConfigFuncLib::UVpConfigFuncLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVpConfigFuncLib);
	UVpConfigFuncLib::~UVpConfigFuncLib() {}
	struct Z_CompiledInDeferFile_FID_Users_ovfxc_Documents_GithubProjects_PackagedPlugins_ViewportConfigManager_UEPlugin5_3_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ovfxc_Documents_GithubProjects_PackagedPlugins_ViewportConfigManager_UEPlugin5_3_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVpConfigFuncLib, UVpConfigFuncLib::StaticClass, TEXT("UVpConfigFuncLib"), &Z_Registration_Info_UClass_UVpConfigFuncLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVpConfigFuncLib), 575057859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ovfxc_Documents_GithubProjects_PackagedPlugins_ViewportConfigManager_UEPlugin5_3_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_1952456627(TEXT("/Script/VpLayoutConfig"),
		Z_CompiledInDeferFile_FID_Users_ovfxc_Documents_GithubProjects_PackagedPlugins_ViewportConfigManager_UEPlugin5_3_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ovfxc_Documents_GithubProjects_PackagedPlugins_ViewportConfigManager_UEPlugin5_3_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
