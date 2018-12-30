// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MovieSceneTracks/Public/Tracks/MovieSceneMaterialTrack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneMaterialTrack() {}
// Cross Module References
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneMaterialTrack();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneNameableTrack();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTracks();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister();
	MOVIESCENETRACKS_API UClass* Z_Construct_UClass_UMovieSceneComponentMaterialTrack();
// End Cross Module References
	void UMovieSceneMaterialTrack::StaticRegisterNativesUMovieSceneMaterialTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneMaterialTrack_NoRegister()
	{
		return UMovieSceneMaterialTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneMaterialTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sections;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sections_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneNameableTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieSceneMaterialTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
		{ "ToolTip", "Handles manipulation of material parameters in a movie scene." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_Sections_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
		{ "ToolTip", "The sections owned by this track ." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_Sections = { UE4CodeGen_Private::EPropertyClass::Array, "Sections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040008000000008, 1, nullptr, STRUCT_OFFSET(UMovieSceneMaterialTrack, Sections), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_Sections_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_Sections_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_Sections_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Sections", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMovieSceneSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_Sections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::NewProp_Sections_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneMaterialTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::ClassParams = {
		&UMovieSceneMaterialTrack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A0u,
		nullptr, 0,
		Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneMaterialTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneMaterialTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneMaterialTrack, 4002971501);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneMaterialTrack(Z_Construct_UClass_UMovieSceneMaterialTrack, &UMovieSceneMaterialTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneMaterialTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneMaterialTrack);
	void UMovieSceneComponentMaterialTrack::StaticRegisterNativesUMovieSceneComponentMaterialTrack()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneComponentMaterialTrack_NoRegister()
	{
		return UMovieSceneComponentMaterialTrack::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneMaterialTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTracks,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tracks/MovieSceneMaterialTrack.h" },
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
		{ "ToolTip", "A material track which is specialized for animation materials which are owned by actor components." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tracks/MovieSceneMaterialTrack.h" },
		{ "ToolTip", "The index of this material this track is animating." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::NewProp_MaterialIndex = { UE4CodeGen_Private::EPropertyClass::Int, "MaterialIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000000000, 1, nullptr, STRUCT_OFFSET(UMovieSceneComponentMaterialTrack, MaterialIndex), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::NewProp_MaterialIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::NewProp_MaterialIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::NewProp_MaterialIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneComponentMaterialTrack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::ClassParams = {
		&UMovieSceneComponentMaterialTrack::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x002800A0u,
		nullptr, 0,
		Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneComponentMaterialTrack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneComponentMaterialTrack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneComponentMaterialTrack, 3723551226);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneComponentMaterialTrack(Z_Construct_UClass_UMovieSceneComponentMaterialTrack, &UMovieSceneComponentMaterialTrack::StaticClass, TEXT("/Script/MovieSceneTracks"), TEXT("UMovieSceneComponentMaterialTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneComponentMaterialTrack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif