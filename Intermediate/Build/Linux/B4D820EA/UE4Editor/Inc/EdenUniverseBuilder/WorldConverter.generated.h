// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDENUNIVERSEBUILDER_WorldConverter_generated_h
#error "WorldConverter.generated.h already included, missing '#pragma once' in WorldConverter.h"
#endif
#define EDENUNIVERSEBUILDER_WorldConverter_generated_h

#define Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGrabChunkInfo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_chunk); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GrabChunkInfo(Z_Param_chunk); \
		P_NATIVE_END; \
	}


#define Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGrabChunkInfo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_chunk); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=P_THIS->GrabChunkInfo(Z_Param_chunk); \
		P_NATIVE_END; \
	}


#define Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldConverter(); \
	friend EDENUNIVERSEBUILDER_API class UClass* Z_Construct_UClass_AWorldConverter(); \
public: \
	DECLARE_CLASS(AWorldConverter, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AWorldConverter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAWorldConverter(); \
	friend EDENUNIVERSEBUILDER_API class UClass* Z_Construct_UClass_AWorldConverter(); \
public: \
	DECLARE_CLASS(AWorldConverter, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AWorldConverter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldConverter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldConverter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldConverter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldConverter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldConverter(AWorldConverter&&); \
	NO_API AWorldConverter(const AWorldConverter&); \
public:


#define Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldConverter(AWorldConverter&&); \
	NO_API AWorldConverter(const AWorldConverter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldConverter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldConverter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldConverter)


#define Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_EdenUniverseBuilder_WorldConverter_h_15_PROLOG
#define Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_RPC_WRAPPERS \
	Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_INCLASS \
	Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Source_EdenUniverseBuilder_WorldConverter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_EdenUniverseBuilder_WorldConverter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
