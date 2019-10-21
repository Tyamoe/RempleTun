// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RempleTun/PuzzleLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleLibrary() {}
// Cross Module References
	REMPLETUN_API UClass* Z_Construct_UClass_UPuzzleLibrary_NoRegister();
	REMPLETUN_API UClass* Z_Construct_UClass_UPuzzleLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RempleTun();
	REMPLETUN_API UFunction* Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout();
	REMPLETUN_API UFunction* Z_Construct_UFunction_UPuzzleLibrary_PrintTestFunc();
// End Cross Module References
	void UPuzzleLibrary::StaticRegisterNativesUPuzzleLibrary()
	{
		UClass* Class = UPuzzleLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPuzzleLayout", &UPuzzleLibrary::execGetPuzzleLayout },
			{ "PrintTestFunc", &UPuzzleLibrary::execPrintTestFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics
	{
		struct PuzzleLibrary_eventGetPuzzleLayout_Parms
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
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PuzzleLibrary_eventGetPuzzleLayout_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::NewProp_ReturnValue_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::Function_MetaDataParams[] = {
		{ "Category", "PuzzleBPLibrary" },
		{ "ModuleRelativePath", "PuzzleLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleLibrary, nullptr, "GetPuzzleLayout", sizeof(PuzzleLibrary_eventGetPuzzleLayout_Parms), Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPuzzleLibrary_PrintTestFunc_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPuzzleLibrary_PrintTestFunc_Statics::Function_MetaDataParams[] = {
		{ "Category", "PuzzleBPLibrary" },
		{ "ModuleRelativePath", "PuzzleLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPuzzleLibrary_PrintTestFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPuzzleLibrary, nullptr, "PrintTestFunc", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPuzzleLibrary_PrintTestFunc_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UPuzzleLibrary_PrintTestFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPuzzleLibrary_PrintTestFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPuzzleLibrary_PrintTestFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPuzzleLibrary_NoRegister()
	{
		return UPuzzleLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPuzzleLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPuzzleLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_RempleTun,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPuzzleLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPuzzleLibrary_GetPuzzleLayout, "GetPuzzleLayout" }, // 4210664195
		{ &Z_Construct_UFunction_UPuzzleLibrary_PrintTestFunc, "PrintTestFunc" }, // 1586267841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPuzzleLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PuzzleLibrary.h" },
		{ "ModuleRelativePath", "PuzzleLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPuzzleLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPuzzleLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPuzzleLibrary_Statics::ClassParams = {
		&UPuzzleLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPuzzleLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPuzzleLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPuzzleLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPuzzleLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPuzzleLibrary, 2772597343);
	template<> REMPLETUN_API UClass* StaticClass<UPuzzleLibrary>()
	{
		return UPuzzleLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPuzzleLibrary(Z_Construct_UClass_UPuzzleLibrary, &UPuzzleLibrary::StaticClass, TEXT("/Script/RempleTun"), TEXT("UPuzzleLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPuzzleLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
