// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BoostTestFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UE4_BOOST_API UBoostTestFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = BOOST)
	static void testTimer();
	
	UFUNCTION(BlueprintCallable, Category = BOOST)
	static void testGraph();
};
