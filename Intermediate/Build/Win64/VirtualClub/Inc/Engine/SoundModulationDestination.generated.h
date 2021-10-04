// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundModulationDestination_generated_h
#error "SoundModulationDestination.generated.h already included, missing '#pragma once' in SoundModulationDestination.h"
#endif
#define ENGINE_SoundModulationDestination_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundModulationDefaultRoutingSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FSoundModulationDefaultSettings Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundModulationDefaultRoutingSettings>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundModulationDefaultSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundModulationDefaultSettings>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundModulationDestinationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundModulationDestinationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundModulationDestination_h


#define FOREACH_ENUM_EMODULATIONROUTING(op) \
	op(EModulationRouting::Disable) \
	op(EModulationRouting::Inherit) \
	op(EModulationRouting::Override) 

enum class EModulationRouting : uint8;
template<> ENGINE_API UEnum* StaticEnum<EModulationRouting>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
