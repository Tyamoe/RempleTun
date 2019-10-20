// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
//#include "PuzzleFunctions.generated.h"
#include "../../../Intermediate/Build/Win64/UE4Editor/Inc/RempleTun/PuzzleFunctions.generated.h"
/**
 * 
 */
UCLASS()
class REMPLETUN_API UPuzzleFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "PuzzleBPLibrary")
	static TMap<int32, int32> GetPuzzleLayout();
};
