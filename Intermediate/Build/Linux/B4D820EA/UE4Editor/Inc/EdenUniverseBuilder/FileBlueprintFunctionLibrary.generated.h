// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDENUNIVERSEBUILDER_FileBlueprintFunctionLibrary_generated_h
#error "FileBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in FileBlueprintFunctionLibrary.h"
#endif
#define EDENUNIVERSEBUILDER_FileBlueprintFunctionLibrary_generated_h

#define Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileBlueprintFunctionLibrary::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileBlueprintFunctionLibrary::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFileLoadString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameA); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_SaveTextA); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileBlueprintFunctionLibrary::FileLoadString(Z_Param_FileNameA,Z_Param_Out_SaveTextA); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFileSaveString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SaveTextB); \
		P_GET_PROPERTY(UStrProperty,Z_Param_FileNameB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFileBlueprintFunctionLibrary::FileSaveString(Z_Param_SaveTextB,Z_Param_FileNameB); \
		P_NATIVE_END; \
	}


#define Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFileBlueprintFunctionLibrary(); \
	friend EDENUNIVERSEBUILDER_API class UClass* Z_Construct_UClass_UFileBlueprintFunctionLibrary(); \
public: \
	DECLARE_CLASS(UFileBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(UFileBlueprintFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFileBlueprintFunctionLibrary(); \
	friend EDENUNIVERSEBUILDER_API class UClass* Z_Construct_UClass_UFileBlueprintFunctionLibrary(); \
public: \
	DECLARE_CLASS(UFileBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(UFileBlueprintFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileBlueprintFunctionLibrary(UFileBlueprintFunctionLibrary&&); \
	NO_API UFileBlueprintFunctionLibrary(const UFileBlueprintFunctionLibrary&); \
public:


#define Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFileBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFileBlueprintFunctionLibrary(UFileBlueprintFunctionLibrary&&); \
	NO_API UFileBlueprintFunctionLibrary(const UFileBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFileBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFileBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFileBlueprintFunctionLibrary)


#define Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_12_PROLOG
#define Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_RPC_WRAPPERS \
	Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_INCLASS \
	Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_EdenUniverseBuilder_FileBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
