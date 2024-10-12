// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UPlayerTransformHelper.generated.h"

/**
 * 
 */
UCLASS()
class HELPERSLAND_API UPlayerTransformHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "PlayerHelpers", meta = (WorldContext = "WorldContextObject"))
	static FVector GetPlayerLocation(const UObject* WorldContextObject);
};