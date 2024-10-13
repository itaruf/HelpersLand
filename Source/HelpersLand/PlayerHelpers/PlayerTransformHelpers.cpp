// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerTransformHelpers.h"
#include "Kismet/GameplayStatics.h"

FVector UPlayerTransformHelpers::GetPlayerLocation(const UObject* WorldContextObject)
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

FRotator UPlayerTransformHelpers::GetPlayerRotation(const UObject* WorldContextObject)
{
	FRotator PlayerRotation = FRotator::ZeroRotator;
	if (const APlayerController* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0))
	{
		if (const APawn* PlayerPawn = PlayerController->GetPawn())
		{
			PlayerRotation = PlayerPawn->GetActorRotation();
		}
	}
	return PlayerRotation;
}

FVector UPlayerTransformHelpers::GetPlayerScale(const UObject* WorldContextObject)
{
	FVector PlayerScale = FVector::ZeroVector;
	if (const APlayerController* PlayerController = UGameplayStatics::GetPlayerController(WorldContextObject, 0))
	{
		if (const APawn* PlayerPawn = PlayerController->GetPawn())
		{
			PlayerScale = PlayerPawn->GetActorScale();
		}
	}
	return PlayerScale;
}