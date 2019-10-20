// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef REMPLETUN_PuzzleFunctions_generated_h
#error "PuzzleFunctions.generated.h already included, missing '#pragma once' in PuzzleFunctions.h"
#endif
#define REMPLETUN_PuzzleFunctions_generated_h

#define RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPuzzleLayout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<int32,int32>*)Z_Param__Result=UPuzzleFunctions::GetPuzzleLayout(); \
		P_NATIVE_END; \
	}


#define RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPuzzleLayout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<int32,int32>*)Z_Param__Result=UPuzzleFunctions::GetPuzzleLayout(); \
		P_NATIVE_END; \
	}


#define RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPuzzleFunctions(); \
	friend struct Z_Construct_UClass_UPuzzleFunctions_Statics; \
public: \
	DECLARE_CLASS(UPuzzleFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RempleTun"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleFunctions)


#define RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPuzzleFunctions(); \
	friend struct Z_Construct_UClass_UPuzzleFunctions_Statics; \
public: \
	DECLARE_CLASS(UPuzzleFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RempleTun"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleFunctions)


#define RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleFunctions(UPuzzleFunctions&&); \
	NO_API UPuzzleFunctions(const UPuzzleFunctions&); \
public:


#define RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleFunctions(UPuzzleFunctions&&); \
	NO_API UPuzzleFunctions(const UPuzzleFunctions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleFunctions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleFunctions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleFunctions)


#define RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_PRIVATE_PROPERTY_OFFSET
#define RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_12_PROLOG
#define RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_PRIVATE_PROPERTY_OFFSET \
	RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_RPC_WRAPPERS \
	RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_INCLASS \
	RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_PRIVATE_PROPERTY_OFFSET \
	RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_INCLASS_NO_PURE_DECLS \
	RempleTun_Source_RempleTun_Public_PuzzleFunctions_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMPLETUN_API UClass* StaticClass<class UPuzzleFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RempleTun_Source_RempleTun_Public_PuzzleFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
