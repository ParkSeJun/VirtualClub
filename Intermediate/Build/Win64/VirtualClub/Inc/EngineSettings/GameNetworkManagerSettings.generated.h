// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINESETTINGS_GameNetworkManagerSettings_generated_h
#error "GameNetworkManagerSettings.generated.h already included, missing '#pragma once' in GameNetworkManagerSettings.h"
#endif
#define ENGINESETTINGS_GameNetworkManagerSettings_generated_h

#define Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_SPARSE_DATA
#define Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_RPC_WRAPPERS
#define Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameNetworkManagerSettings(); \
	friend struct Z_Construct_UClass_UGameNetworkManagerSettings_Statics; \
public: \
	DECLARE_CLASS(UGameNetworkManagerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameNetworkManagerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGameNetworkManagerSettings(); \
	friend struct Z_Construct_UClass_UGameNetworkManagerSettings_Statics; \
public: \
	DECLARE_CLASS(UGameNetworkManagerSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EngineSettings"), NO_API) \
	DECLARE_SERIALIZER(UGameNetworkManagerSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameNetworkManagerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameNetworkManagerSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameNetworkManagerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameNetworkManagerSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameNetworkManagerSettings(UGameNetworkManagerSettings&&); \
	NO_API UGameNetworkManagerSettings(const UGameNetworkManagerSettings&); \
public:


#define Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameNetworkManagerSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameNetworkManagerSettings(UGameNetworkManagerSettings&&); \
	NO_API UGameNetworkManagerSettings(const UGameNetworkManagerSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameNetworkManagerSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameNetworkManagerSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameNetworkManagerSettings)


#define Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_14_PROLOG
#define Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_SPARSE_DATA \
	Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_RPC_WRAPPERS \
	Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_INCLASS \
	Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_SPARSE_DATA \
	Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameNetworkManagerSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINESETTINGS_API UClass* StaticClass<class UGameNetworkManagerSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_EngineSettings_Classes_GameNetworkManagerSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
