// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "WorldConverter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldConverter() {}
// Cross Module References
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_AWorldConverter_NoRegister();
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_AWorldConverter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EdenUniverseBuilder();
// End Cross Module References
	void AWorldConverter::StaticRegisterNativesAWorldConverter()
	{
	}
	UClass* Z_Construct_UClass_AWorldConverter_NoRegister()
	{
		return AWorldConverter::StaticClass();
	}
	UClass* Z_Construct_UClass_AWorldConverter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_EdenUniverseBuilder,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "WorldConverter.h" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWorldConverter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWorldConverter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldConverter, 381267121);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldConverter(Z_Construct_UClass_AWorldConverter, &AWorldConverter::StaticClass, TEXT("/Script/EdenUniverseBuilder"), TEXT("AWorldConverter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldConverter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
