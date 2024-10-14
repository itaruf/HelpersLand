// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacterHelpers.h"

#include "Kismet/GameplayStatics.h"

ACharacter* UPlayerCharacterHelpers::GetPlayerCharacterFromPlayerController(const UObject* WorldContextObject, const int PlayerIndex)
{
	const APlayerController* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, PlayerIndex);
	return PlayerController ? PlayerController->GetCharacter() : nullptr;
}

ACharacter* UPlayerCharacterHelpers::GetPlayerPawnFromGameMode(const UObject* WorldContextObject)
{
	// TODO: complete this function according to the need of the project
	return  nullptr;
}