// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ELevelVisibility : uint8;
#ifdef MOVIESCENETRACKS_MovieSceneLevelVisibilitySection_generated_h
#error "MovieSceneLevelVisibilitySection.generated.h already included, missing '#pragma once' in MovieSceneLevelVisibilitySection.h"
#endif
#define MOVIESCENETRACKS_MovieSceneLevelVisibilitySection_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_SPARSE_DATA
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLevelNames); \
	DECLARE_FUNCTION(execGetLevelNames); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility);


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLevelNames); \
	DECLARE_FUNCTION(execGetLevelNames); \
	DECLARE_FUNCTION(execSetVisibility); \
	DECLARE_FUNCTION(execGetVisibility);


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneLevelVisibilitySection(); \
	friend struct Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneLevelVisibilitySection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneLevelVisibilitySection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneLevelVisibilitySection*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneLevelVisibilitySection(); \
	friend struct Z_Construct_UClass_UMovieSceneLevelVisibilitySection_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneLevelVisibilitySection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneLevelVisibilitySection) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneLevelVisibilitySection*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneLevelVisibilitySection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLevelVisibilitySection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneLevelVisibilitySection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLevelVisibilitySection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneLevelVisibilitySection(UMovieSceneLevelVisibilitySection&&); \
	NO_API UMovieSceneLevelVisibilitySection(const UMovieSceneLevelVisibilitySection&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneLevelVisibilitySection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneLevelVisibilitySection(UMovieSceneLevelVisibilitySection&&); \
	NO_API UMovieSceneLevelVisibilitySection(const UMovieSceneLevelVisibilitySection&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneLevelVisibilitySection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneLevelVisibilitySection); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneLevelVisibilitySection)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Visibility() { return STRUCT_OFFSET(UMovieSceneLevelVisibilitySection, Visibility); } \
	FORCEINLINE static uint32 __PPO__LevelNames() { return STRUCT_OFFSET(UMovieSceneLevelVisibilitySection, LevelNames); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_30_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneLevelVisibilitySection."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneLevelVisibilitySection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Sections_MovieSceneLevelVisibilitySection_h


#define FOREACH_ENUM_ELEVELVISIBILITY(op) \
	op(ELevelVisibility::Visible) \
	op(ELevelVisibility::Hidden) 

enum class ELevelVisibility : uint8;
template<> MOVIESCENETRACKS_API UEnum* StaticEnum<ELevelVisibility>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
