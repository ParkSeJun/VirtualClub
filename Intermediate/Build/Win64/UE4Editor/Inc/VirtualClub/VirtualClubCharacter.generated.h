// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIRTUALCLUB_VirtualClubCharacter_generated_h
#error "VirtualClubCharacter.generated.h already included, missing '#pragma once' in VirtualClubCharacter.h"
#endif
#define VIRTUALCLUB_VirtualClubCharacter_generated_h

#define VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_SPARSE_DATA
#define VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_RPC_WRAPPERS
#define VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVirtualClubCharacter(); \
	friend struct Z_Construct_UClass_AVirtualClubCharacter_Statics; \
public: \
	DECLARE_CLASS(AVirtualClubCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualClub"), NO_API) \
	DECLARE_SERIALIZER(AVirtualClubCharacter)


#define VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAVirtualClubCharacter(); \
	friend struct Z_Construct_UClass_AVirtualClubCharacter_Statics; \
public: \
	DECLARE_CLASS(AVirtualClubCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualClub"), NO_API) \
	DECLARE_SERIALIZER(AVirtualClubCharacter)


#define VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVirtualClubCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVirtualClubCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVirtualClubCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVirtualClubCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVirtualClubCharacter(AVirtualClubCharacter&&); \
	NO_API AVirtualClubCharacter(const AVirtualClubCharacter&); \
public:


#define VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVirtualClubCharacter(AVirtualClubCharacter&&); \
	NO_API AVirtualClubCharacter(const AVirtualClubCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVirtualClubCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVirtualClubCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVirtualClubCharacter)


#define VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AVirtualClubCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AVirtualClubCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AVirtualClubCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AVirtualClubCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AVirtualClubCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AVirtualClubCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AVirtualClubCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AVirtualClubCharacter, L_MotionController); }


#define VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_17_PROLOG
#define VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_SPARSE_DATA \
	VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_RPC_WRAPPERS \
	VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_INCLASS \
	VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_PRIVATE_PROPERTY_OFFSET \
	VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_SPARSE_DATA \
	VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_INCLASS_NO_PURE_DECLS \
	VirtualClub_Source_VirtualClub_VirtualClubCharacter_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCLUB_API UClass* StaticClass<class AVirtualClubCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VirtualClub_Source_VirtualClub_VirtualClubCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
