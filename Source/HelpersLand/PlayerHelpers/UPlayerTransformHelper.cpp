// Fill out your copyright notice in the Description page of Project Settings.

#include "UPlayerTransformHelper.h"
#include "Kismet/GameplayStatics.h"

FVector UPlayerTransformHelper::GetPlayerLocation(const UObject* WorldContextObject)
{
	FVector PlayerLocation = FVector::ZeroVector;
	if (const APlayerController* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0))
	{
		if (const APawn* PlayerPawn = PlayerController->GetPawn())
		{
			PlayerLocation = PlayerPawn->GetActorLocation();
		}
	}
	return PlayerLocation;
}