// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EDownloadResult : uint8;
#ifdef EDENUNIVERSEBUILDER_WorldFileManager_generated_h
#error "WorldFileManager.generated.h already included, missing '#pragma once' in WorldFileManager.h"
#endif
#define EDENUNIVERSEBUILDER_WorldFileManager_generated_h

#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_22_DELEGATE \
struct _Script_EdenUniverseBuilder_eventOnProgress_Parms \
{ \
	int32 BytesSent; \
	int32 BytesReceived; \
	int32 ContentLength; \
}; \
static inline void FOnProgress_DelegateWrapper(const FMulticastScriptDelegate& OnProgress, const int32 BytesSent, const int32 BytesReceived, const int32 ContentLength) \
{ \
	_Script_EdenUniverseBuilder_eventOnProgress_Parms Parms; \
	Parms.BytesSent=BytesSent; \
	Parms.BytesReceived=BytesReceived; \
	Parms.ContentLength=ContentLength; \
	OnProgress.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_21_DELEGATE \
struct _Script_EdenUniverseBuilder_eventOnResult_Parms \
{ \
	EDownloadResult Result; \
}; \
static inline void FOnResult_DelegateWrapper(const FMulticastScriptDelegate& OnResult, const EDownloadResult Result) \
{ \
	_Script_EdenUniverseBuilder_eventOnResult_Parms Parms; \
	Parms.Result=Result; \
	OnResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_RPC_WRAPPERS
#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS
#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldFileManager(); \
	friend struct Z_Construct_UClass_AWorldFileManager_Statics; \
public: \
	DECLARE_CLASS(AWorldFileManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AWorldFileManager)


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAWorldFileManager(); \
	friend struct Z_Construct_UClass_AWorldFileManager_Statics; \
public: \
	DECLARE_CLASS(AWorldFileManager, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AWorldFileManager)


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldFileManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldFileManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldFileManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldFileManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldFileManager(AWorldFileManager&&); \
	NO_API AWorldFileManager(const AWorldFileManager&); \
public:


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldFileManager(AWorldFileManager&&); \
	NO_API AWorldFileManager(const AWorldFileManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldFileManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldFileManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldFileManager)


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_PRIVATE_PROPERTY_OFFSET
#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_24_PROLOG
#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_PRIVATE_PROPERTY_OFFSET \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_RPC_WRAPPERS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_INCLASS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_PRIVATE_PROPERTY_OFFSET \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_INCLASS_NO_PURE_DECLS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EdenUniverseBuilder_Source_EdenUniverseBuilder_WorldFileManager_h


#define FOREACH_ENUM_EDOWNLOADRESULT(op) \
	op(EDownloadResult::Success) \
	op(EDownloadResult::DownloadFailed) \
	op(EDownloadResult::SaveFailed) \
	op(EDownloadResult::DirectoryCreationFailed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
