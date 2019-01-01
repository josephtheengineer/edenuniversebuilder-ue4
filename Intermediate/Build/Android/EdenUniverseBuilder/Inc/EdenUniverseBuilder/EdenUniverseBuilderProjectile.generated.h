// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
#ifdef EDENUNIVERSEBUILDER_EdenUniverseBuilderProjectile_generated_h
#error "EdenUniverseBuilderProjectile.generated.h already included, missing '#pragma once' in EdenUniverseBuilderProjectile.h"
#endif
#define EDENUNIVERSEBUILDER_EdenUniverseBuilderProjectile_generated_h

#define EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEdenUniverseBuilderProjectile(); \
	friend struct Z_Construct_UClass_AEdenUniverseBuilderProjectile_Statics; \
public: \
	DECLARE_CLASS(AEdenUniverseBuilderProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AEdenUniverseBuilderProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEdenUniverseBuilderProjectile(); \
	friend struct Z_Construct_UClass_AEdenUniverseBuilderProjectile_Statics; \
public: \
	DECLARE_CLASS(AEdenUniverseBuilderProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/EdenUniverseBuilder"), NO_API) \
	DECLARE_SERIALIZER(AEdenUniverseBuilderProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEdenUniverseBuilderProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEdenUniverseBuilderProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEdenUniverseBuilderProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEdenUniverseBuilderProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEdenUniverseBuilderProjectile(AEdenUniverseBuilderProjectile&&); \
	NO_API AEdenUniverseBuilderProjectile(const AEdenUniverseBuilderProjectile&); \
public:


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEdenUniverseBuilderProjectile(AEdenUniverseBuilderProjectile&&); \
	NO_API AEdenUniverseBuilderProjectile(const AEdenUniverseBuilderProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEdenUniverseBuilderProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEdenUniverseBuilderProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEdenUniverseBuilderProjectile)


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AEdenUniverseBuilderProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AEdenUniverseBuilderProjectile, ProjectileMovement); }


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_9_PROLOG
#define EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_RPC_WRAPPERS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_INCLASS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_INCLASS_NO_PURE_DECLS \
	EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID EdenUniverseBuilder_Source_EdenUniverseBuilder_EdenUniverseBuilderProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
