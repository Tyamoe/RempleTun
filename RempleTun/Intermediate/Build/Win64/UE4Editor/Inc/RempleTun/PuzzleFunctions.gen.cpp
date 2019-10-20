// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RempleTun/Public/PuzzleFunctions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleFunctions() {}
// Cross Module References
	REMPLETUN_API UClass* Z_Construct_UClass_UPuzzleFunctions_NoRegister();
	REMPLETUN_API UClass* Z_Construct_UClass_UPuzzleFunctions();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RempleTun();
	REMPLETUN_API UFunction* Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout();
// End Cross Module References
	void UPuzzleFunctions::StaticRegisterNativesUPuzzleFunctions()
	{
		UClass* Class = UPuzzleFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPuzzleLayout", &UPuzzleFunctions::execGetPuzzleLayout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics
	{
		struct PuzzleFunctions_eventGetPuzzleLayout_Parms
		{
			TMap<int32,int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleFunctions_eventGetPuzzleLayout_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "PuzzleBPLibrary" },
		{ "ModuleRelativePath", "Public/PuzzleFunctions.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleFunctions, nullptr, "GetPuzzleLayout", sizeof(PuzzleFunctions_eventGetPuzzleLayout_Parms), Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzleFunctions_NoRegister()
	{
		return UPuzzleFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RempleTun,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzleFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzleFunctions_GetPuzzleLayout, "GetPuzzleLayout" }, // 1287054563
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PuzzleFunctions.h" },
		{ "ModuleRelativePath", "Public/PuzzleFunctions.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzleFunctions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleFunctions_Statics::ClassParams = {
		&UPuzzleFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleFunctions_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPuzzleFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleFunctions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzleFunctions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzleFunctions, 2817342571);
	template<> REMPLETUN_API UClass* StaticClass<UPuzzleFunctions>()
	{
		return UPuzzleFunctions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzleFunctions(Z_Construct_UClass_UPuzzleFunctions, &UPuzzleFunctions::StaticClass, TEXT("/Script/RempleTun"), TEXT("UPuzzleFunctions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleFunctions);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
