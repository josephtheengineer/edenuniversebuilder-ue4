// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDENUNIVERSEBUILDER_WorldFileManager_generated_h
#error "WorldFileManager.generated.h already included, missing '#pragma once' in WorldFileManager.h"
#endif
#define EDENUNIVERSEBUILDER_WorldFileManager_generated_h

#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileLoadArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWorldFileManager::FileLoadArray(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWorldFileManager::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWorldFileManager::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWorldFileManager::Search(Z_Param_Query); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDownloadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_GET_PROPERTY(UStrProperty,Z_Param_outfilename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWorldFileManager::DownloadFile(Z_Param_url,Z_Param_outfilename); \
		P_NATIVE_END; \
	}


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileLoadArray) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWorldFileManager::FileLoadArray(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWorldFileManager::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UWorldFileManager::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSearch) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Query); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWorldFileManager::Search(Z_Param_Query); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDownloadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_GET_PROPERTY(UStrProperty,Z_Param_outfilename); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWorldFileManager::DownloadFile(Z_Param_url,Z_Param_outfilename); \
		P_NATIVE_END; \
	}


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldFileManager(); \
	friend struct Z_Construct_UClass_UWorldFileManager_Statics; \
public: \
	DECLARE_CLASS(UWorldFileManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(UWorldFileManager)


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWorldFileManager(); \
	friend struct Z_Construct_UClass_UWorldFileManager_Statics; \
public: \
	DECLARE_CLASS(UWorldFileManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(UWorldFileManager)


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldFileManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldFileManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldFileManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldFileManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldFileManager(UWorldFileManager&&); \
	NO_API UWorldFileManager(const UWorldFileManager&); \
public:


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldFileManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldFileManager(UWorldFileManager&&); \
	NO_API UWorldFileManager(const UWorldFileManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldFileManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldFileManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldFileManager)


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_PRIVATE_PROPERTY_OFFSET
#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_12_PROLOG
#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_PRIVATE_PROPERTY_OFFSET \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_RPC_WRAPPERS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_INCLASS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_PRIVATE_PROPERTY_OFFSET \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_INCLASS_NO_PURE_DECLS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
