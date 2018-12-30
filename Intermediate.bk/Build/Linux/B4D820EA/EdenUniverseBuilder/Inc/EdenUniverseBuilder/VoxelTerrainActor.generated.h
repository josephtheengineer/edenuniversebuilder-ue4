// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDENUNIVERSEBUILDER_VoxelTerrainActor_generated_h
#error "VoxelTerrainActor.generated.h already included, missing '#pragma once' in VoxelTerrainActor.h"
#endif
#define EDENUNIVERSEBUILDER_VoxelTerrainActor_generated_h

#define EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlockData_Statics; \
	EDENUNIVERSEBUILDER_API static class UScriptStruct* StaticStruct();


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadWorld) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadWorld(Z_Param_path); \
		P_NATIVE_END; \
	}


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadWorld) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadWorld(Z_Param_path); \
		P_NATIVE_END; \
	}


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxelTerrainActor(); \
	friend struct Z_Construct_UClass_AVoxelTerrainActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelTerrainActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AVoxelTerrainActor)


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_INCLASS \
private: \
	static void StaticRegisterNativesAVoxelTerrainActor(); \
	friend struct Z_Construct_UClass_AVoxelTerrainActor_Statics; \
public: \
	DECLARE_CLASS(AVoxelTerrainActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AVoxelTerrainActor)


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxelTerrainActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxelTerrainActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelTerrainActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelTerrainActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelTerrainActor(AVoxelTerrainActor&&); \
	NO_API AVoxelTerrainActor(const AVoxelTerrainActor&); \
public:


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxelTerrainActor(AVoxelTerrainActor&&); \
	NO_API AVoxelTerrainActor(const AVoxelTerrainActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxelTerrainActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxelTerrainActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVoxelTerrainActor)


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_PRIVATE_PROPERTY_OFFSET
#define EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_48_PROLOG
#define EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_PRIVATE_PROPERTY_OFFSET \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_RPC_WRAPPERS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_INCLASS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_PRIVATE_PROPERTY_OFFSET \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_INCLASS_NO_PURE_DECLS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EdenUniverseBuilder_Source_EdenUniverseBuilder_VoxelTerrainActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
