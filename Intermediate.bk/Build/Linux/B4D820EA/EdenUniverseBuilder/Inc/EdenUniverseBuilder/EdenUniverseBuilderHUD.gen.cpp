// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdenUniverseBuilder/EdenUniverseBuilderHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdenUniverseBuilderHUD() {}
// Cross Module References
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_AEdenUniverseBuilderHUD_NoRegister();
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_AEdenUniverseBuilderHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_EdenUniverseBuilder();
// End Cross Module References
	void AEdenUniverseBuilderHUD::StaticRegisterNativesAEdenUniverseBuilderHUD()
	{
	}
	UClass* Z_Construct_UClass_AEdenUniverseBuilderHUD_NoRegister()
	{
		return AEdenUniverseBuilderHUD::StaticClass();
	}
	struct Z_Construct_UClass_AEdenUniverseBuilderHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEdenUniverseBuilderHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_EdenUniverseBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEdenUniverseBuilderHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "EdenUniverseBuilderHUD.h" },
		{ "ModuleRelativePath", "EdenUniverseBuilderHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEdenUniverseBuilderHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEdenUniverseBuilderHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEdenUniverseBuilderHUD_Statics::ClassParams = {
		&AEdenUniverseBuilderHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AEdenUniverseBuilderHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEdenUniverseBuilderHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEdenUniverseBuilderHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEdenUniverseBuilderHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEdenUniverseBuilderHUD, 814138156);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEdenUniverseBuilderHUD(Z_Construct_UClass_AEdenUniverseBuilderHUD, &AEdenUniverseBuilderHUD::StaticClass, TEXT("/Script/EdenUniverseBuilder"), TEXT("AEdenUniverseBuilderHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEdenUniverseBuilderHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
