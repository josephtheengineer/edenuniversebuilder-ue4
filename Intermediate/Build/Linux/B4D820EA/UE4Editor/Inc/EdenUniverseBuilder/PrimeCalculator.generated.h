// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EDENUNIVERSEBUILDER_PrimeCalculator_generated_h
#error "PrimeCalculator.generated.h already included, missing '#pragma once' in PrimeCalculator.h"
#endif
#define EDENUNIVERSEBUILDER_PrimeCalculator_generated_h

#define Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunPrimeTaskOnMain) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunPrimeTaskOnMain(Z_Param_Layer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunPrimeTask) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunPrimeTask(Z_Param_Layer); \
		P_NATIVE_END; \
	}


#define Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunPrimeTaskOnMain) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunPrimeTaskOnMain(Z_Param_Layer); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunPrimeTask) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Layer); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunPrimeTask(Z_Param_Layer); \
		P_NATIVE_END; \
	}


#define Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrimeCalculator(); \
	friend EDENUNIVERSEBUILDER_API class UClass* Z_Construct_UClass_APrimeCalculator(); \
public: \
	DECLARE_CLASS(APrimeCalculator, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(APrimeCalculator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPrimeCalculator(); \
	friend EDENUNIVERSEBUILDER_API class UClass* Z_Construct_UClass_APrimeCalculator(); \
public: \
	DECLARE_CLASS(APrimeCalculator, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(APrimeCalculator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APrimeCalculator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APrimeCalculator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrimeCalculator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrimeCalculator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrimeCalculator(APrimeCalculator&&); \
	NO_API APrimeCalculator(const APrimeCalculator&); \
public:


#define Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrimeCalculator(APrimeCalculator&&); \
	NO_API APrimeCalculator(const APrimeCalculator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrimeCalculator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrimeCalculator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrimeCalculator)


#define Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_9_PROLOG
#define Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_RPC_WRAPPERS \
	Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_INCLASS \
	Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_INCLASS_NO_PURE_DECLS \
	Engine_Source_EdenUniverseBuilder_PrimeCalculator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_EdenUniverseBuilder_PrimeCalculator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
