// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_LandscapeSettings_generated_h
#error "LandscapeSettings.generated.h already included, missing '#pragma once' in LandscapeSettings.h"
#endif
#define LANDSCAPE_LandscapeSettings_generated_h

#define Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_SPARSE_DATA
#define Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULandscapeSettings(); \
	friend struct Z_Construct_UClass_ULandscapeSettings_Statics; \
public: \
	DECLARE_CLASS(ULandscapeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_INCLASS \
private: \
	static void StaticRegisterNativesULandscapeSettings(); \
	friend struct Z_Construct_UClass_ULandscapeSettings_Statics; \
public: \
	DECLARE_CLASS(ULandscapeSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), NO_API) \
	DECLARE_SERIALIZER(ULandscapeSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeSettings(ULandscapeSettings&&); \
	NO_API ULandscapeSettings(const ULandscapeSettings&); \
public:


#define Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULandscapeSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULandscapeSettings(ULandscapeSettings&&); \
	NO_API ULandscapeSettings(const ULandscapeSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULandscapeSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULandscapeSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULandscapeSettings)


#define Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_9_PROLOG
#define Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_INCLASS \
	Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ULandscapeSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Public_LandscapeSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
