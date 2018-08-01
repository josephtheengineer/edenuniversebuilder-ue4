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
	EDENUNIVERSEBUILDER_API UFunction* Z_Construct_UFunction_AWorldConverter_LoadMaterialReference();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AWorldConverter::StaticRegisterNativesAWorldConverter()
	{
		UClass* Class = AWorldConverter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadMaterialReference", &AWorldConverter::execLoadMaterialReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AWorldConverter_LoadMaterialReference()
	{
		struct WorldConverter_eventLoadMaterialReference_Parms
		{
			FString materialPath;
			UMaterialInterface* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(WorldConverter_eventLoadMaterialReference_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_materialPath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_materialPath = { UE4CodeGen_Private::EPropertyClass::Str, "materialPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WorldConverter_eventLoadMaterialReference_Parms, materialPath), METADATA_PARAMS(NewProp_materialPath_MetaData, ARRAY_COUNT(NewProp_materialPath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_materialPath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Asset Loading" },
				{ "ModuleRelativePath", "WorldConverter.h" },
				{ "ToolTip", "Load a material from the corresponding path" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorldConverter, "LoadMaterialReference", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(WorldConverter_eventLoadMaterialReference_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AWorldConverter_LoadMaterialReference, "LoadMaterialReference" }, // 1027559819
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "WorldConverter.h" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SMAsset_Cube_MetaData[] = {
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SMAsset_Cube = { UE4CodeGen_Private::EPropertyClass::Object, "SMAsset_Cube", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AWorldConverter, SMAsset_Cube), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_SMAsset_Cube_MetaData, ARRAY_COUNT(NewProp_SMAsset_Cube_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ISMComp_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
				{ "ToolTip", "Add StaticMeshComponent" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ISMComp = { UE4CodeGen_Private::EPropertyClass::Object, "ISMComp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AWorldConverter, ISMComp), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ISMComp_MetaData, ARRAY_COUNT(NewProp_ISMComp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dirt_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dirt = { UE4CodeGen_Private::EPropertyClass::Object, "dirt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, dirt), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_dirt_MetaData, ARRAY_COUNT(NewProp_dirt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grass_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grass = { UE4CodeGen_Private::EPropertyClass::Object, "grass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, grass), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_grass_MetaData, ARRAY_COUNT(NewProp_grass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, Mesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root = { UE4CodeGen_Private::EPropertyClass::Object, "Root", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AWorldConverter, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Root_MetaData, ARRAY_COUNT(NewProp_Root_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SMAsset_Cube,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ISMComp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dirt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_grass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Root,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWorldConverter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWorldConverter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldConverter, 2392372198);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldConverter(Z_Construct_UClass_AWorldConverter, &AWorldConverter::StaticClass, TEXT("/Script/EdenUniverseBuilder"), TEXT("AWorldConverter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldConverter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
