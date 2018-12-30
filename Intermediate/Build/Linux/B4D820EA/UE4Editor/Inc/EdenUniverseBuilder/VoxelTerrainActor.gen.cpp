// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdenUniverseBuilder/VoxelTerrainActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVoxelTerrainActor() {}
// Cross Module References
	EDENUNIVERSEBUILDER_API UScriptStruct* Z_Construct_UScriptStruct_FBlockData();
	UPackage* Z_Construct_UPackage__Script_EdenUniverseBuilder();
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_AVoxelTerrainActor_NoRegister();
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_AVoxelTerrainActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	EDENUNIVERSEBUILDER_API UFunction* Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FBlockData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EDENUNIVERSEBUILDER_API uint32 Get_Z_Construct_UScriptStruct_FBlockData_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlockData, Z_Construct_UPackage__Script_EdenUniverseBuilder(), TEXT("BlockData"), sizeof(FBlockData), Get_Z_Construct_UScriptStruct_FBlockData_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlockData(FBlockData::StaticStruct, TEXT("/Script/EdenUniverseBuilder"), TEXT("BlockData"), false, nullptr, nullptr);
static struct FScriptStruct_EdenUniverseBuilder_StaticRegisterNativesFBlockData
{
	FScriptStruct_EdenUniverseBuilder_StaticRegisterNativesFBlockData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlockData")),new UScriptStruct::TCppStructOps<FBlockData>);
	}
} ScriptStruct_EdenUniverseBuilder_StaticRegisterNativesFBlockData;
	struct Z_Construct_UScriptStruct_FBlockData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlockData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlockData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlockData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EdenUniverseBuilder,
		nullptr,
		&NewStructOps,
		"BlockData",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FBlockData),
		alignof(FBlockData),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlockData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlockData_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EdenUniverseBuilder();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlockData"), sizeof(FBlockData), Get_Z_Construct_UScriptStruct_FBlockData_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlockData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlockData_CRC() { return 3495934782U; }
	void AVoxelTerrainActor::StaticRegisterNativesAVoxelTerrainActor()
	{
		UClass* Class = AVoxelTerrainActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadWorld", &AVoxelTerrainActor::execLoadWorld },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld_Statics
	{
		struct VoxelTerrainActor_eventLoadWorld_Parms
		{
			FString Path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld_Statics::NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VoxelTerrainActor_eventLoadWorld_Parms, Path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld_Statics::NewProp_Path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVoxelTerrainActor, "LoadWorld", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VoxelTerrainActor_eventLoadWorld_Parms), Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVoxelTerrainActor_NoRegister()
	{
		return AVoxelTerrainActor::StaticClass();
	}
	struct Z_Construct_UClass_AVoxelTerrainActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Wood_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Wood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_WeedsTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_WeedsTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_WeedsSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_WeedsSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Water_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Water;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Wallpaper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Wallpaper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Vines_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Vines;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_TrunkTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_TrunkTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_TrunkSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_TrunkSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Trampoline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Trampoline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_TNTTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_TNTTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_TNTSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_TNTSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Tiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Tiles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Stone_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Stone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Steel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Steel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Sand_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Sand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Roof_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Roof;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Rock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Rock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Neon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Neon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Light_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Light;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Leaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Leaves;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Lava_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Lava;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_LadderSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_LadderSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Ice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Ice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_GrassTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_GrassTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_GrassSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_GrassSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Glass_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Glass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_FlowersTop_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_FlowersTop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_FireworksSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_FireworksSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Fence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Fence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Dirt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Dirt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Cloud_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Cloud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Brick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Brick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_BlockTNTSide_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_BlockTNTSide;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAT_Bedrock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MAT_Bedrock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_heightLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_heightLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cube_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cube;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerrainMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TerrainMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TerrainMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RenderDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVoxelTerrainActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EdenUniverseBuilder,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVoxelTerrainActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVoxelTerrainActor_LoadWorld, "LoadWorld" }, // 1351877490
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VoxelTerrainActor.h" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Wood_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Wood = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Wood", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Wood), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Wood_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Wood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_WeedsTop_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_WeedsTop = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_WeedsTop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_WeedsTop), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_WeedsTop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_WeedsTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_WeedsSide_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_WeedsSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_WeedsSide", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_WeedsSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_WeedsSide_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_WeedsSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Water_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Water = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Water", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Water), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Water_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Water_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Wallpaper_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Wallpaper = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Wallpaper", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Wallpaper), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Wallpaper_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Wallpaper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Vines_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Vines = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Vines", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Vines), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Vines_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Vines_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TrunkTop_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TrunkTop = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_TrunkTop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_TrunkTop), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TrunkTop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TrunkTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TrunkSide_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TrunkSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_TrunkSide", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_TrunkSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TrunkSide_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TrunkSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Trampoline_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Trampoline = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Trampoline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Trampoline), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Trampoline_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Trampoline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TNTTop_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TNTTop = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_TNTTop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_TNTTop), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TNTTop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TNTTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TNTSide_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TNTSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_TNTSide", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_TNTSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TNTSide_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TNTSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Tiles_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Tiles = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Tiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Tiles), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Tiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Tiles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Stone_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Stone = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Stone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Stone), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Stone_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Stone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Steel_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Steel = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Steel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Steel), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Steel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Steel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Sand_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Sand = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Sand", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Sand), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Sand_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Sand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Roof_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Roof = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Roof", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Roof), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Roof_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Roof_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Rock_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Rock = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Rock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Rock), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Rock_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Rock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Neon_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Neon = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Neon", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Neon), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Neon_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Neon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Light_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Light = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Light", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Light), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Light_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Light_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Leaves_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Leaves = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Leaves", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Leaves), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Leaves_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Leaves_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Lava_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Lava = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Lava", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Lava), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Lava_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Lava_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_LadderSide_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_LadderSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_LadderSide", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_LadderSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_LadderSide_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_LadderSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Ice_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Ice = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Ice", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Ice), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Ice_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Ice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_GrassTop_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_GrassTop = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_GrassTop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_GrassTop), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_GrassTop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_GrassTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_GrassSide_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_GrassSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_GrassSide", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_GrassSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_GrassSide_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_GrassSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Glass_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Glass = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Glass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Glass), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Glass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Glass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_FlowersTop_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_FlowersTop = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_FlowersTop", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_FlowersTop), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_FlowersTop_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_FlowersTop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_FireworksSide_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_FireworksSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_FireworksSide", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_FireworksSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_FireworksSide_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_FireworksSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Fence_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Fence = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Fence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Fence), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Fence_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Fence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Dirt_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Dirt = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Dirt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Dirt), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Dirt_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Dirt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Cloud_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Cloud = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Cloud", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Cloud), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Cloud_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Cloud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Brick_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Brick = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Brick", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Brick), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Brick_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Brick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_BlockTNTSide_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_BlockTNTSide = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_BlockTNTSide", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_BlockTNTSide), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_BlockTNTSide_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_BlockTNTSide_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Bedrock_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
		{ "ToolTip", "Materials" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Bedrock = { UE4CodeGen_Private::EPropertyClass::Object, "MAT_Bedrock", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, MAT_Bedrock), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Bedrock_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Bedrock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_heightLimit_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_heightLimit = { UE4CodeGen_Private::EPropertyClass::Int, "heightLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, heightLimit), METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_heightLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_heightLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_Cube_MetaData[] = {
		{ "Category", "VoxelTerrainActor" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_Cube = { UE4CodeGen_Private::EPropertyClass::Object, "Cube", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, Cube), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_Cube_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_Cube_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_TerrainMaterials_MetaData[] = {
		{ "Category", "Voxel Terrain" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
		{ "ToolTip", "The material to apply to our voxel terrain" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_TerrainMaterials = { UE4CodeGen_Private::EPropertyClass::Array, "TerrainMaterials", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, TerrainMaterials), METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_TerrainMaterials_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_TerrainMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_TerrainMaterials_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "TerrainMaterials", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_RenderDistance_MetaData[] = {
		{ "Category", "Voxel Terrain" },
		{ "ModuleRelativePath", "VoxelTerrainActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_RenderDistance = { UE4CodeGen_Private::EPropertyClass::Float, "RenderDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AVoxelTerrainActor, RenderDistance), METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_RenderDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_RenderDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVoxelTerrainActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Wood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_WeedsTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_WeedsSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Water,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Wallpaper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Vines,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TrunkTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TrunkSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Trampoline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TNTTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_TNTSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Tiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Stone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Steel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Sand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Roof,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Rock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Neon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Light,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Leaves,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Lava,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_LadderSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Ice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_GrassTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_GrassSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Glass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_FlowersTop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_FireworksSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Fence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Dirt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Cloud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Brick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_BlockTNTSide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_MAT_Bedrock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_heightLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_Cube,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_TerrainMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_TerrainMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVoxelTerrainActor_Statics::NewProp_RenderDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVoxelTerrainActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVoxelTerrainActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVoxelTerrainActor_Statics::ClassParams = {
		&AVoxelTerrainActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AVoxelTerrainActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AVoxelTerrainActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AVoxelTerrainActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVoxelTerrainActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVoxelTerrainActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVoxelTerrainActor, 2951465735);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVoxelTerrainActor(Z_Construct_UClass_AVoxelTerrainActor, &AVoxelTerrainActor::StaticClass, TEXT("/Script/EdenUniverseBuilder"), TEXT("AVoxelTerrainActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVoxelTerrainActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
