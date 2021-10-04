// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef VIRTUALCLUB_VirtualClubProjectile_generated_h
#error "VirtualClubProjectile.generated.h already included, missing '#pragma once' in VirtualClubProjectile.h"
#endif
#define VIRTUALCLUB_VirtualClubProjectile_generated_h

#define VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_SPARSE_DATA
#define VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVirtualClubProjectile(); \
	friend struct Z_Construct_UClass_AVirtualClubProjectile_Statics; \
public: \
	DECLARE_CLASS(AVirtualClubProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualClub"), NO_API) \
	DECLARE_SERIALIZER(AVirtualClubProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVirtualClubProjectile(); \
	friend struct Z_Construct_UClass_AVirtualClubProjectile_Statics; \
public: \
	DECLARE_CLASS(AVirtualClubProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtualClub"), NO_API) \
	DECLARE_SERIALIZER(AVirtualClubProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVirtualClubProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVirtualClubProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVirtualClubProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVirtualClubProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVirtualClubProjectile(AVirtualClubProjectile&&); \
	NO_API AVirtualClubProjectile(const AVirtualClubProjectile&); \
public:


#define VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVirtualClubProjectile(AVirtualClubProjectile&&); \
	NO_API AVirtualClubProjectile(const AVirtualClubProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVirtualClubProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVirtualClubProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVirtualClubProjectile)


#define VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AVirtualClubProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AVirtualClubProjectile, ProjectileMovement); }


#define VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_12_PROLOG
#define VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_SPARSE_DATA \
	VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_RPC_WRAPPERS \
	VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_INCLASS \
	VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_SPARSE_DATA \
	VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_INCLASS_NO_PURE_DECLS \
	VirtualClub_Source_VirtualClub_VirtualClubProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALCLUB_API UClass* StaticClass<class AVirtualClubProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VirtualClub_Source_VirtualClub_VirtualClubProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
