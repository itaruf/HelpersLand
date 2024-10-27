// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent, name="Health Component"))
class HELPERSLAND_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (ClampMin = "0", Tooltip="The current health value of the actor"))
	int Health = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (ClampMin = "0", Tooltip = "The current max health value of the actor"))
	int MaxHealth = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health|Regeneration", meta = (ClampMin = "0", Tooltip = "The current health regeneration rate of the actor"))
	float HealthRegenerationRate = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health|Regeneration", meta = (ClampMin = "0", Tooltip = "The current health decay rate of the actor"))
	float HealthDecayRate = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status", meta = (Tooltip = "True if the actor is alive"))
	bool bIsAlive = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Status", meta = (Tooltip = "True if the actor is invincible"))
	bool bIsInvincible = false;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Getters & Setters
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Health Component", meta = (DisplayName = "GetHealth"))
	int GetHealth() const;
	UFUNCTION(BlueprintCallable, Category = "Health Component", meta = (DisplayName = "SetHealth"))
	void SetHealth(const int NewHealth);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Health Component", BlueprintPure, meta = (DisplayName = "GetMaxHealth"))
	int GetMaxHealth() const;
	UFUNCTION(BlueprintCallable, Category = "Health Component", meta = (DisplayName = "SetMaxHealth"))
	void SetMaxHealth(const int NewMaxHealth);
	UFUNCTION(BlueprintCallable, Category = "Health Component", meta = (DisplayName = "GetHealthRegenerationRate"))
	float GetHealthRegenerationRate() const;
	UFUNCTION(BlueprintCallable, Category = "Health Component", meta = (DisplayName = "SetHealthRegenerationRate"))
	void SetHealthRegenerationRate(const float NewHealthRegenerationRate);
	UFUNCTION(BlueprintCallable, Category = "Health Component", meta = (DisplayName = "GetHealthDecayRate"))
	float GetHealthDecayRate() const;
	UFUNCTION(BlueprintCallable, Category = "Health Component", meta = (DisplayName = "SetHealthDecayRate"))
	void SetHealthDecayRate(const float NewHealthDecayRate);
	UFUNCTION(BlueprintCallable, Category = "Health Component", meta = (DisplayName = "IsAlive"))
	bool IsAlive() const;
	UFUNCTION(BlueprintCallable, Category = "Health Component", meta = (DisplayName = "SetHealthDecayRate"))
	void SetIsAlive(const bool NewIsAlive);
	UFUNCTION(BlueprintCallable, Category = "Health Component", meta = (DisplayName = "IsInvincible"))
	bool IsInvincible() const;
	UFUNCTION(BlueprintCallable, Category = "Health Component", meta = (DisplayName = "SetIsInvincible"))
	void SetIsInvincible(const bool NewIsInvincible);

public:
	// Event Dispatchers
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, int, NewHealth);

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Events")
	FOnHealthChanged OnHealthChanged;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMaxHealthChanged, int, NewMaxHealth);

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Events")
	FOnMaxHealthChanged OnMaxHealthChanged;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthRegenerationRateChanged, float, NewHealthRegenerationRate);

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Events")
	FOnHealthRegenerationRateChanged OnHealthRegenerationRateChanged;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAliveStatusChanged, bool, NewAlive);

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Events")
	FOnAliveStatusChanged OnAliveStatusChanged;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInvincibleStatusChanged, bool, NewInvincible);

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Events")
	FOnInvincibleStatusChanged OnInvincibleStatusChanged;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
