// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RempleTun/RempleTunGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRempleTunGameModeBase() {}
// Cross Module References
	REMPLETUN_API UClass* Z_Construct_UClass_ARempleTunGameModeBase_NoRegister();
	REMPLETUN_API UClass* Z_Construct_UClass_ARempleTunGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RempleTun();
// End Cross Module References
	void ARempleTunGameModeBase::StaticRegisterNativesARempleTunGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARempleTunGameModeBase_NoRegister()
	{
		return ARempleTunGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARempleTunGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARempleTunGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RempleTun,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARempleTunGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RempleTunGameModeBase.h" },
		{ "ModuleRelativePath", "RempleTunGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARempleTunGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARempleTunGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARempleTunGameModeBase_Statics::ClassParams = {
		&ARempleTunGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ARempleTunGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARempleTunGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARempleTunGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARempleTunGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARempleTunGameModeBase, 1078241130);
	template<> REMPLETUN_API UClass* StaticClass<ARempleTunGameModeBase>()
	{
		return ARempleTunGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARempleTunGameModeBase(Z_Construct_UClass_ARempleTunGameModeBase, &ARempleTunGameModeBase::StaticClass, TEXT("/Script/RempleTun"), TEXT("ARempleTunGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARempleTunGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
