// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EdenUniverseBuilder/WorldFileManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldFileManager() {}
// Cross Module References
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_UWorldFileManager_NoRegister();
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_UWorldFileManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_EdenUniverseBuilder();
	EDENUNIVERSEBUILDER_API UFunction* Z_Construct_UFunction_UWorldFileManager_DownloadFile();
	EDENUNIVERSEBUILDER_API UFunction* Z_Construct_UFunction_UWorldFileManager_FileLoadArray();
	EDENUNIVERSEBUILDER_API UFunction* Z_Construct_UFunction_UWorldFileManager_FileLoadString();
	EDENUNIVERSEBUILDER_API UFunction* Z_Construct_UFunction_UWorldFileManager_FileSaveString();
	EDENUNIVERSEBUILDER_API UFunction* Z_Construct_UFunction_UWorldFileManager_Search();
// End Cross Module References
	void UWorldFileManager::StaticRegisterNativesUWorldFileManager()
	{
		UClass* Class = UWorldFileManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownloadFile", &UWorldFileManager::execDownloadFile },
			{ "FileLoadArray", &UWorldFileManager::execFileLoadArray },
			{ "FileLoadString", &UWorldFileManager::execFileLoadString },
			{ "FileSaveString", &UWorldFileManager::execFileSaveString },
			{ "Search", &UWorldFileManager::execSearch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics
	{
		struct WorldFileManager_eventDownloadFile_Parms
		{
			FString url;
			FString outfilename;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outfilename;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics::NewProp_outfilename = { UE4CodeGen_Private::EPropertyClass::Str, "outfilename", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WorldFileManager_eventDownloadFile_Parms, outfilename), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics::NewProp_url = { UE4CodeGen_Private::EPropertyClass::Str, "url", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WorldFileManager_eventDownloadFile_Parms, url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics::NewProp_outfilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManager" },
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldFileManager, "DownloadFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04042401, sizeof(WorldFileManager_eventDownloadFile_Parms), Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldFileManager_DownloadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldFileManager_DownloadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics
	{
		struct WorldFileManager_eventFileLoadArray_Parms
		{
			FString FileNameA;
			TArray<FString> SaveTextA;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SaveTextA;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextA_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldFileManager_eventFileLoadArray_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WorldFileManager_eventFileLoadArray_Parms), &Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::NewProp_SaveTextA = { UE4CodeGen_Private::EPropertyClass::Array, "SaveTextA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(WorldFileManager_eventFileLoadArray_Parms, SaveTextA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::NewProp_SaveTextA_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "SaveTextA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::NewProp_FileNameA = { UE4CodeGen_Private::EPropertyClass::Str, "FileNameA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WorldFileManager_eventFileLoadArray_Parms, FileNameA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::NewProp_SaveTextA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::NewProp_SaveTextA_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::NewProp_FileNameA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManager" },
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldFileManager, "FileLoadArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14442401, sizeof(WorldFileManager_eventFileLoadArray_Parms), Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldFileManager_FileLoadArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldFileManager_FileLoadArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics
	{
		struct WorldFileManager_eventFileLoadString_Parms
		{
			FString FileNameA;
			FString SaveTextA;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextA;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldFileManager_eventFileLoadString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WorldFileManager_eventFileLoadString_Parms), &Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::NewProp_SaveTextA = { UE4CodeGen_Private::EPropertyClass::Str, "SaveTextA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(WorldFileManager_eventFileLoadString_Parms, SaveTextA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::NewProp_FileNameA = { UE4CodeGen_Private::EPropertyClass::Str, "FileNameA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WorldFileManager_eventFileLoadString_Parms, FileNameA), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::NewProp_SaveTextA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::NewProp_FileNameA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManager" },
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldFileManager, "FileLoadString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14442401, sizeof(WorldFileManager_eventFileLoadString_Parms), Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldFileManager_FileLoadString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldFileManager_FileLoadString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics
	{
		struct WorldFileManager_eventFileSaveString_Parms
		{
			FString SaveTextB;
			FString FileNameB;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileNameB;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SaveTextB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WorldFileManager_eventFileSaveString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(WorldFileManager_eventFileSaveString_Parms), &Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::NewProp_FileNameB = { UE4CodeGen_Private::EPropertyClass::Str, "FileNameB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WorldFileManager_eventFileSaveString_Parms, FileNameB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::NewProp_SaveTextB = { UE4CodeGen_Private::EPropertyClass::Str, "SaveTextB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WorldFileManager_eventFileSaveString_Parms, SaveTextB), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::NewProp_FileNameB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::NewProp_SaveTextB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManager" },
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldFileManager, "FileSaveString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04042401, sizeof(WorldFileManager_eventFileSaveString_Parms), Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldFileManager_FileSaveString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldFileManager_FileSaveString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWorldFileManager_Search_Statics
	{
		struct WorldFileManager_eventSearch_Parms
		{
			FString Query;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWorldFileManager_Search_Statics::NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(WorldFileManager_eventSearch_Parms, Query), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWorldFileManager_Search_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWorldFileManager_Search_Statics::NewProp_Query,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWorldFileManager_Search_Statics::Function_MetaDataParams[] = {
		{ "Category", "FileManager" },
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWorldFileManager_Search_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWorldFileManager, "Search", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04042401, sizeof(WorldFileManager_eventSearch_Parms), Z_Construct_UFunction_UWorldFileManager_Search_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UWorldFileManager_Search_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWorldFileManager_Search_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWorldFileManager_Search_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWorldFileManager_Search()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWorldFileManager_Search_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWorldFileManager_NoRegister()
	{
		return UWorldFileManager::StaticClass();
	}
	struct Z_Construct_UClass_UWorldFileManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldFileManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_EdenUniverseBuilder,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWorldFileManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWorldFileManager_DownloadFile, "DownloadFile" }, // 370969622
		{ &Z_Construct_UFunction_UWorldFileManager_FileLoadArray, "FileLoadArray" }, // 1557285210
		{ &Z_Construct_UFunction_UWorldFileManager_FileLoadString, "FileLoadString" }, // 188973486
		{ &Z_Construct_UFunction_UWorldFileManager_FileSaveString, "FileSaveString" }, // 1868445215
		{ &Z_Construct_UFunction_UWorldFileManager_Search, "Search" }, // 3445752618
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldFileManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldFileManager.h" },
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldFileManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldFileManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorldFileManager_Statics::ClassParams = {
		&UWorldFileManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UWorldFileManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWorldFileManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldFileManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorldFileManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldFileManager, 3823981623);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldFileManager(Z_Construct_UClass_UWorldFileManager, &UWorldFileManager::StaticClass, TEXT("/Script/EdenUniverseBuilder"), TEXT("UWorldFileManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldFileManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
