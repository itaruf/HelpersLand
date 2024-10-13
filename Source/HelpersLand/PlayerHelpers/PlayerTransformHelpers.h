// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayerTransformHelpers.generated.h"

/**
 * 
 */
UCLASS()
class HELPERSLAND_API UPlayerTransformHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerHelpers", meta = (WorldContext = "WorldContextObject"))
	static FVector GetPlayerLocation(const UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerHelpers", meta = (WorldContext = "WorldContextObject"))
	static FRotator GetPlayerRotation(const UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerHelpers", meta = (WorldContext = "WorldContextObject"))
	static FVector GetPlayerScale(const UObject* WorldContextObject);
};