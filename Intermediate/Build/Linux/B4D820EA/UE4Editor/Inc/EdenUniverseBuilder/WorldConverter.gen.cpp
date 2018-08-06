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
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
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
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_steel_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_steel = { UE4CodeGen_Private::EPropertyClass::Object, "steel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, steel), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_steel_MetaData, ARRAY_COUNT(NewProp_steel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newflower_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_newflower = { UE4CodeGen_Private::EPropertyClass::Object, "newflower", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, newflower), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_newflower_MetaData, ARRAY_COUNT(NewProp_newflower_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_light_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_light = { UE4CodeGen_Private::EPropertyClass::Object, "light", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, light), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_light_MetaData, ARRAY_COUNT(NewProp_light_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transcube_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_transcube = { UE4CodeGen_Private::EPropertyClass::Object, "transcube", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, transcube), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_transcube_MetaData, ARRAY_COUNT(NewProp_transcube_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireworks_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fireworks = { UE4CodeGen_Private::EPropertyClass::Object, "fireworks", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, fireworks), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_fireworks_MetaData, ARRAY_COUNT(NewProp_fireworks_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_glass_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_glass = { UE4CodeGen_Private::EPropertyClass::Object, "glass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, glass), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_glass_MetaData, ARRAY_COUNT(NewProp_glass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tile_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_tile = { UE4CodeGen_Private::EPropertyClass::Object, "tile", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, tile), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_tile_MetaData, ARRAY_COUNT(NewProp_tile_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shingles_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_shingles = { UE4CodeGen_Private::EPropertyClass::Object, "shingles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, shingles), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_shingles_MetaData, ARRAY_COUNT(NewProp_shingles_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lava_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_lava = { UE4CodeGen_Private::EPropertyClass::Object, "lava", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, lava), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_lava_MetaData, ARRAY_COUNT(NewProp_lava_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ivy_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ivy = { UE4CodeGen_Private::EPropertyClass::Object, "ivy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, ivy), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ivy_MetaData, ARRAY_COUNT(NewProp_ivy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fence_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fence = { UE4CodeGen_Private::EPropertyClass::Object, "fence", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, fence), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_fence_MetaData, ARRAY_COUNT(NewProp_fence_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_water_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_water = { UE4CodeGen_Private::EPropertyClass::Object, "water", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, water), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_water_MetaData, ARRAY_COUNT(NewProp_water_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cloud_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cloud = { UE4CodeGen_Private::EPropertyClass::Object, "cloud", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, cloud), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_cloud_MetaData, ARRAY_COUNT(NewProp_cloud_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ladder_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ladder = { UE4CodeGen_Private::EPropertyClass::Object, "ladder", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, ladder), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ladder_MetaData, ARRAY_COUNT(NewProp_ladder_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bouncy_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bouncy = { UE4CodeGen_Private::EPropertyClass::Object, "bouncy", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, bouncy), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bouncy_MetaData, ARRAY_COUNT(NewProp_bouncy_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wallpaper_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_wallpaper = { UE4CodeGen_Private::EPropertyClass::Object, "wallpaper", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, wallpaper), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_wallpaper_MetaData, ARRAY_COUNT(NewProp_wallpaper_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ice_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ice = { UE4CodeGen_Private::EPropertyClass::Object, "ice", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, ice), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_ice_MetaData, ARRAY_COUNT(NewProp_ice_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slate_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slate = { UE4CodeGen_Private::EPropertyClass::Object, "slate", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, slate), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_slate_MetaData, ARRAY_COUNT(NewProp_slate_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_brick_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_brick = { UE4CodeGen_Private::EPropertyClass::Object, "brick", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, brick), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_brick_MetaData, ARRAY_COUNT(NewProp_brick_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_flowers_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_flowers = { UE4CodeGen_Private::EPropertyClass::Object, "flowers", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, flowers), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_flowers_MetaData, ARRAY_COUNT(NewProp_flowers_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weeds_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_weeds = { UE4CodeGen_Private::EPropertyClass::Object, "weeds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, weeds), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_weeds_MetaData, ARRAY_COUNT(NewProp_weeds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rock_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rock = { UE4CodeGen_Private::EPropertyClass::Object, "rock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, rock), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_rock_MetaData, ARRAY_COUNT(NewProp_rock_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TNT_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TNT = { UE4CodeGen_Private::EPropertyClass::Object, "TNT", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, TNT), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_TNT_MetaData, ARRAY_COUNT(NewProp_TNT_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_grass_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_grass = { UE4CodeGen_Private::EPropertyClass::Object, "grass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, grass), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_grass_MetaData, ARRAY_COUNT(NewProp_grass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wood_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_wood = { UE4CodeGen_Private::EPropertyClass::Object, "wood", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, wood), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_wood_MetaData, ARRAY_COUNT(NewProp_wood_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_trunk_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_trunk = { UE4CodeGen_Private::EPropertyClass::Object, "trunk", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, trunk), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_trunk_MetaData, ARRAY_COUNT(NewProp_trunk_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaves_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_leaves = { UE4CodeGen_Private::EPropertyClass::Object, "leaves", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, leaves), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_leaves_MetaData, ARRAY_COUNT(NewProp_leaves_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sand_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sand = { UE4CodeGen_Private::EPropertyClass::Object, "sand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, sand), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_sand_MetaData, ARRAY_COUNT(NewProp_sand_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dirt_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dirt = { UE4CodeGen_Private::EPropertyClass::Object, "dirt", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, dirt), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_dirt_MetaData, ARRAY_COUNT(NewProp_dirt_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stone_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_stone = { UE4CodeGen_Private::EPropertyClass::Object, "stone", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, stone), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_stone_MetaData, ARRAY_COUNT(NewProp_stone_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bedrock_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bedrock = { UE4CodeGen_Private::EPropertyClass::Object, "bedrock", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, bedrock), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_bedrock_MetaData, ARRAY_COUNT(NewProp_bedrock_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_air_MetaData[] = {
				{ "Category", "WorldConverter" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "WorldConverter.h" },
				{ "ToolTip", "Add StaticMeshComponent" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_air = { UE4CodeGen_Private::EPropertyClass::Object, "air", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080009, 1, nullptr, STRUCT_OFFSET(AWorldConverter, air), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_air_MetaData, ARRAY_COUNT(NewProp_air_MetaData)) };
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
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_steel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_newflower,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_light,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_transcube,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fireworks,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_glass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_tile,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_shingles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_lava,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ivy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_fence,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_water,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_cloud,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ladder,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bouncy,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_wallpaper,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ice,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_slate,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_brick,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_flowers,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_weeds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_rock,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TNT,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_grass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_wood,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_trunk,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_leaves,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_sand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dirt,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_stone,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bedrock,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_air,
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
	IMPLEMENT_CLASS(AWorldConverter, 984441208);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldConverter(Z_Construct_UClass_AWorldConverter, &AWorldConverter::StaticClass, TEXT("/Script/EdenUniverseBuilder"), TEXT("AWorldConverter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldConverter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
