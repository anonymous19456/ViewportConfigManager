// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VpConfigFuncLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUtilityWidget;
struct FViewportConfigFileData;
#ifdef VPLAYOUTCONFIG_VpConfigFuncLib_generated_h
#error "VpConfigFuncLib.generated.h already included, missing '#pragma once' in VpConfigFuncLib.h"
#endif
#define VPLAYOUTCONFIG_VpConfigFuncLib_generated_h

#define FID_Users_ovfxc_Documents_PackagedPlugins_ViewportConfigManager_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCloseWidget); \
	DECLARE_FUNCTION(execShowNotificationMessage); \
	DECLARE_FUNCTION(execDeleteVpLayout); \
	DECLARE_FUNCTION(execLoadVpLayout); \
	DECLARE_FUNCTION(execSaveVpLayout); \
	DECLARE_FUNCTION(execGetConfigDir); \
	DECLARE_FUNCTION(execCanConvertJsonToLayout); \
	DECLARE_FUNCTION(execGetJsonFilesFromDir);


#define FID_Users_ovfxc_Documents_PackagedPlugins_ViewportConfigManager_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVpConfigFuncLib(); \
	friend struct Z_Construct_UClass_UVpConfigFuncLib_Statics; \
public: \
	DECLARE_CLASS(UVpConfigFuncLib, UBlueprintEditorLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VpLayoutConfig"), NO_API) \
	DECLARE_SERIALIZER(UVpConfigFuncLib)


#define FID_Users_ovfxc_Documents_PackagedPlugins_ViewportConfigManager_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVpConfigFuncLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVpConfigFuncLib(UVpConfigFuncLib&&); \
	UVpConfigFuncLib(const UVpConfigFuncLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVpConfigFuncLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVpConfigFuncLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVpConfigFuncLib) \
	NO_API virtual ~UVpConfigFuncLib();


#define FID_Users_ovfxc_Documents_PackagedPlugins_ViewportConfigManager_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_22_PROLOG
#define FID_Users_ovfxc_Documents_PackagedPlugins_ViewportConfigManager_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_ovfxc_Documents_PackagedPlugins_ViewportConfigManager_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_ovfxc_Documents_PackagedPlugins_ViewportConfigManager_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_ovfxc_Documents_PackagedPlugins_ViewportConfigManager_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VPLAYOUTCONFIG_API UClass* StaticClass<class UVpConfigFuncLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_ovfxc_Documents_PackagedPlugins_ViewportConfigManager_VpLayoutConfig_HostProject_Plugins_VpLayoutConfig_Source_VpLayoutConfig_Private_VpConfigFuncLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
