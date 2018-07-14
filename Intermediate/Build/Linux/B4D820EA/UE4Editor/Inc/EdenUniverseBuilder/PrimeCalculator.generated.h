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

#define EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRunPrimeTaskOnMain) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumPrimes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunPrimeTaskOnMain(Z_Param_NumPrimes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunPrimeTask) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumPrimes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunPrimeTask(Z_Param_NumPrimes); \
		P_NATIVE_END; \
	}


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRunPrimeTaskOnMain) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumPrimes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunPrimeTaskOnMain(Z_Param_NumPrimes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRunPrimeTask) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumPrimes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RunPrimeTask(Z_Param_NumPrimes); \
		P_NATIVE_END; \
	}


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPrimeCalculator(); \
	friend EDENUNIVERSEBUILDER_API class UClass* Z_Construct_UClass_APrimeCalculator(); \
public: \
	DECLARE_CLASS(APrimeCalculator, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(APrimeCalculator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPrimeCalculator(); \
	friend EDENUNIVERSEBUILDER_API class UClass* Z_Construct_UClass_APrimeCalculator(); \
public: \
	DECLARE_CLASS(APrimeCalculator, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(APrimeCalculator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_STANDARD_CONSTRUCTORS \
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


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APrimeCalculator(APrimeCalculator&&); \
	NO_API APrimeCalculator(const APrimeCalculator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APrimeCalculator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APrimeCalculator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APrimeCalculator)


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_PRIVATE_PROPERTY_OFFSET
#define EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_9_PROLOG
#define EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_PRIVATE_PROPERTY_OFFSET \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_RPC_WRAPPERS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_INCLASS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_PRIVATE_PROPERTY_OFFSET \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_INCLASS_NO_PURE_DECLS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EdenUniverseBuilder_Source_EdenUniverseBuilder_PrimeCalculator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
