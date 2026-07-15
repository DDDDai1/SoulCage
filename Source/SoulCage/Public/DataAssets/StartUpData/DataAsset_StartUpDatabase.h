// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataAsset_StartUpDatabase.generated.h"

class USoulCageGameplayAbility;
class USoulCageAbilitySystemComponent;

UCLASS()
class SOULCAGE_API UDataAsset_StartUpDatabase : public UDataAsset
{
	GENERATED_BODY()
	
public:
	virtual void GiveToAbilitySystemComponent(USoulCageAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);

protected:
	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray< TSubclassOf < USoulCageGameplayAbility > > ActivateOnGivenAbilities;

	UPROPERTY(EditDefaultsOnly, Category = "StartUpData")
	TArray< TSubclassOf < USoulCageGameplayAbility > > ReactiveAbilities;
	
	void GrantAbilities(const TArray< TSubclassOf < USoulCageGameplayAbility > >& InAbilitiesToGive, USoulCageAbilitySystemComponent* InASCToGive, int32 ApplyLevel = 1);
};
