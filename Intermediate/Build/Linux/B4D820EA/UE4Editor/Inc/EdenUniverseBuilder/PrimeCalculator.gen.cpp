// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PrimeCalculator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrimeCalculator() {}
// Cross Module References
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_APrimeCalculator_NoRegister();
	EDENUNIVERSEBUILDER_API UClass* Z_Construct_UClass_APrimeCalculator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EdenUniverseBuilder();
	EDENUNIVERSEBUILDER_API UFunction* Z_Construct_UFunction_APrimeCalculator_RunPrimeTask();
	EDENUNIVERSEBUILDER_API UFunction* Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain();
// End Cross Module References
	void APrimeCalculator::StaticRegisterNativesAPrimeCalculator()
	{
		UClass* Class = APrimeCalculator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RunPrimeTask", &APrimeCalculator::execRunPrimeTask },
			{ "RunPrimeTaskOnMain", &APrimeCalculator::execRunPrimeTaskOnMain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_APrimeCalculator_RunPrimeTask()
	{
		struct PrimeCalculator_eventRunPrimeTask_Parms
		{
			int32 Layer;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Layer = { UE4CodeGen_Private::EPropertyClass::Int, "Layer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PrimeCalculator_eventRunPrimeTask_Parms, Layer), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Layer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PrimeCalculator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APrimeCalculator, "RunPrimeTask", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PrimeCalculator_eventRunPrimeTask_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain()
	{
		struct PrimeCalculator_eventRunPrimeTaskOnMain_Parms
		{
			int32 Layer;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Layer = { UE4CodeGen_Private::EPropertyClass::Int, "Layer", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(PrimeCalculator_eventRunPrimeTaskOnMain_Parms, Layer), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Layer,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "PrimeCalculator.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_APrimeCalculator, "RunPrimeTaskOnMain", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(PrimeCalculator_eventRunPrimeTaskOnMain_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APrimeCalculator_NoRegister()
	{
		return APrimeCalculator::StaticClass();
	}
	UClass* Z_Construct_UClass_APrimeCalculator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_EdenUniverseBuilder,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_APrimeCalculator_RunPrimeTask, "RunPrimeTask" }, // 808769085
				{ &Z_Construct_UFunction_APrimeCalculator_RunPrimeTaskOnMain, "RunPrimeTaskOnMain" }, // 347713459
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "PrimeCalculator.h" },
				{ "ModuleRelativePath", "PrimeCalculator.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<APrimeCalculator>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&APrimeCalculator::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(APrimeCalculator, 2233691503);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APrimeCalculator(Z_Construct_UClass_APrimeCalculator, &APrimeCalculator::StaticClass, TEXT("/Script/EdenUniverseBuilder"), TEXT("APrimeCalculator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrimeCalculator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
