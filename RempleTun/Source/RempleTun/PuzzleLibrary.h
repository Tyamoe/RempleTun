// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PuzzleLibrary.generated.h"

/**
 *
 */
UCLASS()
class REMPLETUN_API UPuzzleLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "PuzzleBPLibrary")
		static TMap<int32, int32> GetPuzzleLayout();

	UFUNCTION(BlueprintCallable, Category = "PuzzleBPLibrary")
		static void PrintTestFunc();
};
