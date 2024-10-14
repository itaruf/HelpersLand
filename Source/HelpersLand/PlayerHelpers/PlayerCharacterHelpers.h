// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayerCharacterHelpers.generated.h"

/**
 * 
 */
UCLASS()
class HELPERSLAND_API UPlayerCharacterHelpers : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerPawnHelpers", meta = (WorldContext = "WorldContextObject"))
	static ACharacter* GetPlayerCharacterFromPlayerController(const UObject* WorldContextObject, int PlayerIndex);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PlayerPawnHelpers", meta = (WorldContext = "WorldContextObject"))
	static ACharacter* GetPlayerPawnFromGameMode(const UObject* WorldContextObject);
};