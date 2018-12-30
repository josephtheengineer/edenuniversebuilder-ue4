// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef ENGINE_BillboardComponent_generated_h
#error "BillboardComponent.generated.h already included, missing '#pragma once' in BillboardComponent.h"
#endif
#define ENGINE_BillboardComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSpriteAndUV) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_NewSprite); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewU); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewUL); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewV); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewVL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpriteAndUV(Z_Param_NewSprite,Z_Param_NewU,Z_Param_NewUL,Z_Param_NewV,Z_Param_NewVL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUV) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewU); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewUL); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewV); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewVL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUV(Z_Param_NewU,Z_Param_NewUL,Z_Param_NewV,Z_Param_NewVL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSprite) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_NewSprite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSprite(Z_Param_NewSprite); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSpriteAndUV) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_NewSprite); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewU); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewUL); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewV); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewVL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSpriteAndUV(Z_Param_NewSprite,Z_Param_NewU,Z_Param_NewUL,Z_Param_NewV,Z_Param_NewVL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetUV) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewU); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewUL); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewV); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewVL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetUV(Z_Param_NewU,Z_Param_NewUL,Z_Param_NewV,Z_Param_NewVL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSprite) \
	{ \
		P_GET_OBJECT(UTexture2D,Z_Param_NewSprite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSprite(Z_Param_NewSprite); \
		P_NATIVE_END; \
	}


#define Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBillboardComponent(); \
	friend struct Z_Construct_UClass_UBillboardComponent_Statics; \
public: \
	DECLARE_CLASS(UBillboardComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBillboardComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUBillboardComponent(); \
	friend struct Z_Construct_UClass_UBillboardComponent_Statics; \
public: \
	DECLARE_CLASS(UBillboardComponent, UPrimitiveComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UBillboardComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBillboardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBillboardComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBillboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBillboardComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBillboardComponent(UBillboardComponent&&); \
	NO_API UBillboardComponent(const UBillboardComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBillboardComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBillboardComponent(UBillboardComponent&&); \
	NO_API UBillboardComponent(const UBillboardComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBillboardComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBillboardComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBillboardComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BillboardComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_BillboardComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS