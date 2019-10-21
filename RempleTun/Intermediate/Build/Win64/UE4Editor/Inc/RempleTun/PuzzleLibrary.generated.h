// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef REMPLETUN_PuzzleLibrary_generated_h
#error "PuzzleLibrary.generated.h already included, missing '#pragma once' in PuzzleLibrary.h"
#endif
#define REMPLETUN_PuzzleLibrary_generated_h

#define RempleTun_Source_RempleTun_PuzzleLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPrintTestFunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPuzzleLibrary::PrintTestFunc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPuzzleLayout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<int32,int32>*)Z_Param__Result=UPuzzleLibrary::GetPuzzleLayout(); \
		P_NATIVE_END; \
	}


#define RempleTun_Source_RempleTun_PuzzleLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPrintTestFunc) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UPuzzleLibrary::PrintTestFunc(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPuzzleLayout) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TMap<int32,int32>*)Z_Param__Result=UPuzzleLibrary::GetPuzzleLayout(); \
		P_NATIVE_END; \
	}


#define RempleTun_Source_RempleTun_PuzzleLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPuzzleLibrary(); \
	friend struct Z_Construct_UClass_UPuzzleLibrary_Statics; \
public: \
	DECLARE_CLASS(UPuzzleLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RempleTun"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleLibrary)


#define RempleTun_Source_RempleTun_PuzzleLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPuzzleLibrary(); \
	friend struct Z_Construct_UClass_UPuzzleLibrary_Statics; \
public: \
	DECLARE_CLASS(UPuzzleLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RempleTun"), NO_API) \
	DECLARE_SERIALIZER(UPuzzleLibrary)


#define RempleTun_Source_RempleTun_PuzzleLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleLibrary(UPuzzleLibrary&&); \
	NO_API UPuzzleLibrary(const UPuzzleLibrary&); \
public:


#define RempleTun_Source_RempleTun_PuzzleLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPuzzleLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPuzzleLibrary(UPuzzleLibrary&&); \
	NO_API UPuzzleLibrary(const UPuzzleLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPuzzleLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPuzzleLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPuzzleLibrary)


#define RempleTun_Source_RempleTun_PuzzleLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define RempleTun_Source_RempleTun_PuzzleLibrary_h_12_PROLOG
#define RempleTun_Source_RempleTun_PuzzleLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RempleTun_Source_RempleTun_PuzzleLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	RempleTun_Source_RempleTun_PuzzleLibrary_h_15_RPC_WRAPPERS \
	RempleTun_Source_RempleTun_PuzzleLibrary_h_15_INCLASS \
	RempleTun_Source_RempleTun_PuzzleLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RempleTun_Source_RempleTun_PuzzleLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RempleTun_Source_RempleTun_PuzzleLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	RempleTun_Source_RempleTun_PuzzleLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	RempleTun_Source_RempleTun_PuzzleLibrary_h_15_INCLASS_NO_PURE_DECLS \
	RempleTun_Source_RempleTun_PuzzleLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REMPLETUN_API UClass* StaticClass<class UPuzzleLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RempleTun_Source_RempleTun_PuzzleLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
