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
	EDENUNIVERSEBUILDER_API UFunction* Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EdenUniverseBuilder();
	EDENUNIVERSEBUILDER_API UFunction* Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature();
	EDENUNIVERSEBUILDER_API UEnum* Z_Construct_UEnum_EdenUniverseBuilder_EDownloadResult();
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_AWorldFileManager_NoRegister();
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_AWorldFileManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics
	{
		struct _Script_EdenUniverseBuilder_eventOnProgress_Parms
		{
			int32 BytesSent;
			int32 BytesReceived;
			int32 ContentLength;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ContentLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytesReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesReceived;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BytesSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BytesSent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_ContentLength_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_ContentLength = { UE4CodeGen_Private::EPropertyClass::Int, "ContentLength", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_EdenUniverseBuilder_eventOnProgress_Parms, ContentLength), METADATA_PARAMS(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_ContentLength_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_ContentLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_BytesReceived_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_BytesReceived = { UE4CodeGen_Private::EPropertyClass::Int, "BytesReceived", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_EdenUniverseBuilder_eventOnProgress_Parms, BytesReceived), METADATA_PARAMS(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_BytesReceived_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_BytesReceived_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_BytesSent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_BytesSent = { UE4CodeGen_Private::EPropertyClass::Int, "BytesSent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_EdenUniverseBuilder_eventOnProgress_Parms, BytesSent), METADATA_PARAMS(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_BytesSent_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_BytesSent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_ContentLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_BytesReceived,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::NewProp_BytesSent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EdenUniverseBuilder, "OnProgress__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_EdenUniverseBuilder_eventOnProgress_Parms), Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics
	{
		struct _Script_EdenUniverseBuilder_eventOnResult_Parms
		{
			EDownloadResult Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Enum, "Result", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(_Script_EdenUniverseBuilder_eventOnResult_Parms, Result), Z_Construct_UEnum_EdenUniverseBuilder_EDownloadResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::NewProp_Result_MetaData, ARRAY_COUNT(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::NewProp_Result_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::NewProp_Result_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EdenUniverseBuilder, "OnResult__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_EdenUniverseBuilder_eventOnResult_Parms), Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EdenUniverseBuilder_OnResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EDownloadResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_EdenUniverseBuilder_EDownloadResult, Z_Construct_UPackage__Script_EdenUniverseBuilder(), TEXT("EDownloadResult"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDownloadResult(EDownloadResult_StaticEnum, TEXT("/Script/EdenUniverseBuilder"), TEXT("EDownloadResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_EdenUniverseBuilder_EDownloadResult_CRC() { return 384080015U; }
	UEnum* Z_Construct_UEnum_EdenUniverseBuilder_EDownloadResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_EdenUniverseBuilder();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDownloadResult"), 0, Get_Z_Construct_UEnum_EdenUniverseBuilder_EDownloadResult_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDownloadResult::Success", (int64)EDownloadResult::Success },
				{ "EDownloadResult::DownloadFailed", (int64)EDownloadResult::DownloadFailed },
				{ "EDownloadResult::SaveFailed", (int64)EDownloadResult::SaveFailed },
				{ "EDownloadResult::DirectoryCreationFailed", (int64)EDownloadResult::DirectoryCreationFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "HTTP" },
				{ "ModuleRelativePath", "WorldFileManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_EdenUniverseBuilder,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EDownloadResult",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EDownloadResult",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AWorldFileManager::StaticRegisterNativesAWorldFileManager()
	{
	}
	UClass* Z_Construct_UClass_AWorldFileManager_NoRegister()
	{
		return AWorldFileManager::StaticClass();
	}
	struct Z_Construct_UClass_AWorldFileManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileSavePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileSavePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TestsToRun_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TestsToRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Payload_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Payload;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Verb;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorldFileManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EdenUniverseBuilder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldFileManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldFileManager.h" },
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldFileManager_Statics::NewProp_FileSavePath_MetaData[] = {
		{ "Category", "WorldFileManager" },
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWorldFileManager_Statics::NewProp_FileSavePath = { UE4CodeGen_Private::EPropertyClass::Str, "FileSavePath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldFileManager, FileSavePath), METADATA_PARAMS(Z_Construct_UClass_AWorldFileManager_Statics::NewProp_FileSavePath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldFileManager_Statics::NewProp_FileSavePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldFileManager_Statics::NewProp_TestsToRun_MetaData[] = {
		{ "Category", "WorldFileManager" },
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWorldFileManager_Statics::NewProp_TestsToRun = { UE4CodeGen_Private::EPropertyClass::Int, "TestsToRun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldFileManager, TestsToRun), METADATA_PARAMS(Z_Construct_UClass_AWorldFileManager_Statics::NewProp_TestsToRun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldFileManager_Statics::NewProp_TestsToRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "WorldFileManager" },
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Url = { UE4CodeGen_Private::EPropertyClass::Str, "Url", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldFileManager, Url), METADATA_PARAMS(Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Url_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Payload_MetaData[] = {
		{ "Category", "WorldFileManager" },
		{ "ModuleRelativePath", "WorldFileManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Payload = { UE4CodeGen_Private::EPropertyClass::Str, "Payload", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldFileManager, Payload), METADATA_PARAMS(Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Payload_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Payload_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Verb_MetaData[] = {
		{ "Category", "WorldFileManager" },
		{ "ModuleRelativePath", "WorldFileManager.h" },
		{ "ToolTip", "@param Verb - verb to use for request (GET,POST,DELETE,etc)\n@param Payload - optional payload string\n@param Url - url address to connect to\n@param InIterations - total test iterations to run" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Verb = { UE4CodeGen_Private::EPropertyClass::Str, "Verb", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AWorldFileManager, Verb), METADATA_PARAMS(Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Verb_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Verb_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorldFileManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldFileManager_Statics::NewProp_FileSavePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldFileManager_Statics::NewProp_TestsToRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Url,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Payload,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorldFileManager_Statics::NewProp_Verb,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorldFileManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorldFileManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorldFileManager_Statics::ClassParams = {
		&AWorldFileManager::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AWorldFileManager_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AWorldFileManager_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWorldFileManager_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWorldFileManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorldFileManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorldFileManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorldFileManager, 2746631376);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorldFileManager(Z_Construct_UClass_AWorldFileManager, &AWorldFileManager::StaticClass, TEXT("/Script/EdenUniverseBuilder"), TEXT("AWorldFileManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorldFileManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
