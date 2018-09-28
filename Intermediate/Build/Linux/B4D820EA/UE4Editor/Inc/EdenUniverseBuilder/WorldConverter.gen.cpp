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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
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
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SMAsset_Cube_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SMAsset_Cube = { UE4CodeGen_Private::EPropertyClass::Object, "SMAsset_Cube", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, SMAsset_Cube), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(NewProp_SMAsset_Cube_MetaData, ARRAY_COUNT(NewProp_SMAsset_Cube_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChunkBoundary_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChunkBoundary = { UE4CodeGen_Private::EPropertyClass::Object, "ChunkBoundary", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, ChunkBoundary), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(NewProp_ChunkBoundary_MetaData, ARRAY_COUNT(NewProp_ChunkBoundary_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Wood_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Wood = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Wood", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Wood), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Wood_MetaData, ARRAY_COUNT(NewProp_MAT_Wood_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_WeedsTop_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_WeedsTop = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_WeedsTop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_WeedsTop), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_WeedsTop_MetaData, ARRAY_COUNT(NewProp_MAT_WeedsTop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_WeedsSide_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_WeedsSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_WeedsSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_WeedsSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_WeedsSide_MetaData, ARRAY_COUNT(NewProp_MAT_WeedsSide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Water_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Water = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Water", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Water), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Water_MetaData, ARRAY_COUNT(NewProp_MAT_Water_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Wallpaper_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Wallpaper = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Wallpaper", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Wallpaper), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Wallpaper_MetaData, ARRAY_COUNT(NewProp_MAT_Wallpaper_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Vines_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Vines = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Vines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Vines), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Vines_MetaData, ARRAY_COUNT(NewProp_MAT_Vines_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_TrunkTop_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_TrunkTop = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_TrunkTop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_TrunkTop), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_TrunkTop_MetaData, ARRAY_COUNT(NewProp_MAT_TrunkTop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_TrunkSide_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_TrunkSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_TrunkSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_TrunkSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_TrunkSide_MetaData, ARRAY_COUNT(NewProp_MAT_TrunkSide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Trampoline_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Trampoline = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Trampoline", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Trampoline), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Trampoline_MetaData, ARRAY_COUNT(NewProp_MAT_Trampoline_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_TNTTop_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_TNTTop = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_TNTTop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_TNTTop), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_TNTTop_MetaData, ARRAY_COUNT(NewProp_MAT_TNTTop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_TNTSide_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_TNTSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_TNTSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_TNTSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_TNTSide_MetaData, ARRAY_COUNT(NewProp_MAT_TNTSide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Tiles_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Tiles = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Tiles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Tiles), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Tiles_MetaData, ARRAY_COUNT(NewProp_MAT_Tiles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Stone_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Stone = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Stone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Stone), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Stone_MetaData, ARRAY_COUNT(NewProp_MAT_Stone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Steel_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Steel = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Steel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Steel), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Steel_MetaData, ARRAY_COUNT(NewProp_MAT_Steel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Sand_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Sand = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Sand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Sand), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Sand_MetaData, ARRAY_COUNT(NewProp_MAT_Sand_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Roof_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Roof = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Roof", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Roof), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Roof_MetaData, ARRAY_COUNT(NewProp_MAT_Roof_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Rock_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Rock = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Rock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Rock), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Rock_MetaData, ARRAY_COUNT(NewProp_MAT_Rock_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Neon_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Neon = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Neon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Neon), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Neon_MetaData, ARRAY_COUNT(NewProp_MAT_Neon_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Light_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Light = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Light", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Light), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Light_MetaData, ARRAY_COUNT(NewProp_MAT_Light_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Leaves_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Leaves = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Leaves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Leaves), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Leaves_MetaData, ARRAY_COUNT(NewProp_MAT_Leaves_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Lava_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Lava = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Lava", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Lava), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Lava_MetaData, ARRAY_COUNT(NewProp_MAT_Lava_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_LadderSide_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_LadderSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_LadderSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_LadderSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_LadderSide_MetaData, ARRAY_COUNT(NewProp_MAT_LadderSide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Ice_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Ice = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Ice", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Ice), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Ice_MetaData, ARRAY_COUNT(NewProp_MAT_Ice_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_GrassTop_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_GrassTop = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_GrassTop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_GrassTop), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_GrassTop_MetaData, ARRAY_COUNT(NewProp_MAT_GrassTop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_GrassSide_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_GrassSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_GrassSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_GrassSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_GrassSide_MetaData, ARRAY_COUNT(NewProp_MAT_GrassSide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Glass_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Glass = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Glass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Glass), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Glass_MetaData, ARRAY_COUNT(NewProp_MAT_Glass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_FlowersTop_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_FlowersTop = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_FlowersTop", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_FlowersTop), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_FlowersTop_MetaData, ARRAY_COUNT(NewProp_MAT_FlowersTop_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_FireworksSide_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_FireworksSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_FireworksSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_FireworksSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_FireworksSide_MetaData, ARRAY_COUNT(NewProp_MAT_FireworksSide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Fence_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Fence = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Fence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Fence), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Fence_MetaData, ARRAY_COUNT(NewProp_MAT_Fence_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Dirt_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Dirt = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Dirt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Dirt), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Dirt_MetaData, ARRAY_COUNT(NewProp_MAT_Dirt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Cloud_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Cloud = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Cloud", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Cloud), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Cloud_MetaData, ARRAY_COUNT(NewProp_MAT_Cloud_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Brick_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Brick = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Brick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Brick), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Brick_MetaData, ARRAY_COUNT(NewProp_MAT_Brick_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_BlockTNTSide_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_BlockTNTSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_BlockTNTSide", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_BlockTNTSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_BlockTNTSide_MetaData, ARRAY_COUNT(NewProp_MAT_BlockTNTSide_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Bedrock_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
				{ "ToolTip", "Materials" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Bedrock = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Bedrock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, MAT_Bedrock), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_MAT_Bedrock_MetaData, ARRAY_COUNT(NewProp_MAT_Bedrock_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a0009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, Mesh), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_Mesh_MetaData, ARRAY_COUNT(NewProp_Mesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_render_distance_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_render_distance = { UE4CodeGen_Private::EPropertyClass::Int, "render_distance", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, render_distance), METADATA_PARAMS(NewProp_render_distance_MetaData, ARRAY_COUNT(NewProp_render_distance_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root = { UE4CodeGen_Private::EPropertyClass::Object, "Root", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080008, 1, nullptr, STRUCT_OFFSET(AWorldConverter, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Root_MetaData, ARRAY_COUNT(NewProp_Root_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalRenderDistanceG_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "ModuleRelativePath", "WorldConverter.h" },
				{ "ToolTip", "Variables" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_totalRenderDistanceG = { UE4CodeGen_Private::EPropertyClass::Int, "totalRenderDistanceG", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldConverter, totalRenderDistanceG), METADATA_PARAMS(NewProp_totalRenderDistanceG_MetaData, ARRAY_COUNT(NewProp_totalRenderDistanceG_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SMAsset_Cube,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChunkBoundary,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Wood,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_WeedsTop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_WeedsSide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Water,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Wallpaper,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Vines,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_TrunkTop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_TrunkSide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Trampoline,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_TNTTop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_TNTSide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Tiles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Stone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Steel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Sand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Roof,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Rock,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Neon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Light,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Leaves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Lava,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_LadderSide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Ice,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_GrassTop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_GrassSide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Glass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_FlowersTop,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_FireworksSide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Fence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Dirt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Cloud,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Brick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_BlockTNTSide,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MAT_Bedrock,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Mesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_render_distance,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Root,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_totalRenderDistanceG,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AWorldConverter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AWorldConverter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(AWorldConverter, 1532761807);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldConverter(Z_Construct_UClass_AWorldConverter, &AWorldConverter::StaticClass, TEXT("/Script/EdenUniverseBuilder"), TEXT("AWorldConverter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldConverter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
