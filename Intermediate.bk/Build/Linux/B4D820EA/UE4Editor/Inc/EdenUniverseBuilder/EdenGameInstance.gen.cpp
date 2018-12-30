// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdenUniverseBuilder/EdenGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdenGameInstance() {}
// Cross Module References
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_UEdenGameInstance_NoRegister();
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_UEdenGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_EdenUniverseBuilder();
// End Cross Module References
	void UEdenGameInstance::StaticRegisterNativesUEdenGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UEdenGameInstance_NoRegister()
	{
		return UEdenGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEdenGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockToPlace_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BlockToPlace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tool_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Tool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Options_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Options;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Options_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Options_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_WorldPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdenGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_EdenUniverseBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdenGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EdenGameInstance.h" },
		{ "ModuleRelativePath", "EdenGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_BlockToPlace_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "EdenGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_BlockToPlace = { UE4CodeGen_Private::EPropertyClass::Int, "BlockToPlace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEdenGameInstance, BlockToPlace), METADATA_PARAMS(Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_BlockToPlace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_BlockToPlace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Tool_MetaData[] = {
		{ "Category", "UserInterface" },
		{ "ModuleRelativePath", "EdenGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Tool = { UE4CodeGen_Private::EPropertyClass::Int, "Tool", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEdenGameInstance, Tool), METADATA_PARAMS(Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Tool_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Tool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Options_MetaData[] = {
		{ "Category", "MainMenu" },
		{ "ModuleRelativePath", "EdenGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Options = { UE4CodeGen_Private::EPropertyClass::Map, "Options", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEdenGameInstance, Options), METADATA_PARAMS(Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Options_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Options_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Options_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Options_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Options_ValueProp = { UE4CodeGen_Private::EPropertyClass::Bool, "Options", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_WorldPath_MetaData[] = {
		{ "Category", "MainMenu" },
		{ "ModuleRelativePath", "EdenGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_WorldPath = { UE4CodeGen_Private::EPropertyClass::Str, "WorldPath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UEdenGameInstance, WorldPath), METADATA_PARAMS(Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_WorldPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_WorldPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdenGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_BlockToPlace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Tool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Options,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Options_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_Options_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdenGameInstance_Statics::NewProp_WorldPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdenGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdenGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEdenGameInstance_Statics::ClassParams = {
		&UEdenGameInstance::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A8u,
		nullptr, 0,
		Z_Construct_UClass_UEdenGameInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEdenGameInstance_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEdenGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEdenGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdenGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEdenGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEdenGameInstance, 1821855664);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEdenGameInstance(Z_Construct_UClass_UEdenGameInstance, &UEdenGameInstance::StaticClass, TEXT("/Script/EdenUniverseBuilder"), TEXT("UEdenGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdenGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
