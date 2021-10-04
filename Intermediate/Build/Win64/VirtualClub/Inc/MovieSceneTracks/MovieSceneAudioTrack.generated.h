// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOVIESCENETRACKS_MovieSceneAudioTrack_generated_h
#error "MovieSceneAudioTrack.generated.h already included, missing '#pragma once' in MovieSceneAudioTrack.h"
#endif
#define MOVIESCENETRACKS_MovieSceneAudioTrack_generated_h

#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_SPARSE_DATA
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_RPC_WRAPPERS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneAudioTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAudioTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAudioTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneAudioTrack*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUMovieSceneAudioTrack(); \
	friend struct Z_Construct_UClass_UMovieSceneAudioTrack_Statics; \
public: \
	DECLARE_CLASS(UMovieSceneAudioTrack, UMovieSceneNameableTrack, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MovieSceneTracks"), NO_API) \
	DECLARE_SERIALIZER(UMovieSceneAudioTrack) \
	virtual UObject* _getUObject() const override { return const_cast<UMovieSceneAudioTrack*>(this); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneAudioTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioTrack) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAudioTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioTrack); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAudioTrack(UMovieSceneAudioTrack&&); \
	NO_API UMovieSceneAudioTrack(const UMovieSceneAudioTrack&); \
public:


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMovieSceneAudioTrack(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMovieSceneAudioTrack(UMovieSceneAudioTrack&&); \
	NO_API UMovieSceneAudioTrack(const UMovieSceneAudioTrack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMovieSceneAudioTrack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMovieSceneAudioTrack); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMovieSceneAudioTrack)


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AudioSections() { return STRUCT_OFFSET(UMovieSceneAudioTrack, AudioSections); }


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_22_PROLOG
#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_INCLASS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_SPARSE_DATA \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class MovieSceneAudioTrack."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOVIESCENETRACKS_API UClass* StaticClass<class UMovieSceneAudioTrack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_MovieSceneTracks_Public_Tracks_MovieSceneAudioTrack_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
