// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

int UHealthComponent::GetHealth() const
{
	return Health;
}

void UHealthComponent::SetHealth(const int NewHealth)
{
	Health = FMath::Clamp(NewHealth, 0.0f, MaxHealth);
}

int UHealthComponent::GetMaxHealth() const
{
	return MaxHealth;
}

void UHealthComponent::SetMaxHealth(const int NewMaxHealth)
{
	if (NewMaxHealth < 0)
		MaxHealth = 0;
	else
		MaxHealth = NewMaxHealth;
}

float UHealthComponent::GetHealthRegenerationRate() const
{
	return HealthRegenerationRate;
}

void UHealthComponent::SetHealthRegenerationRate(const float NewHealthRegenerationRate)
{
	if (NewHealthRegenerationRate < 0)
		HealthRegenerationRate = 0;
	else
		HealthRegenerationRate = NewHealthRegenerationRate;
}

float UHealthComponent::GetHealthDecayRate() const
{
	return HealthDecayRate;
}

void UHealthComponent::SetHealthDecayRate(const float NewHealthDecayRate)
{
	if (NewHealthDecayRate < 0)
		HealthDecayRate = 0;
	else
		HealthDecayRate = NewHealthDecayRate;
}

bool UHealthComponent::IsAlive() const
{
	return Health > 0;
}

void UHealthComponent::SetIsAlive(const bool NewIsAlive)
{
	bIsAlive = NewIsAlive;
}

bool UHealthComponent::IsInvincible() const
{
	return bIsInvincible;
}

void UHealthComponent::SetIsInvincible(const bool NewIsInvincible)
{
	bIsInvincible = NewIsInvincible;
}

// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
