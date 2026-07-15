// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "SoulCageCharacterBase.generated.h"

class USoulCageAbilitySystemComponent;
class USoulCageAttributeSet;
class UDataAsset_StartUpDatabase;

UCLASS(Abstract)
class SOULCAGE_API ASoulCageCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ASoulCageCharacterBase();

	//~ Begin IAbilitySystemInterface Interface
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const;
	//~ End IAbilitySystemInterface Interface

protected:
	//~ Begin APawn Interface
	virtual void PossessedBy(AController* NewController) override;
	//~ End APawn Interface

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	USoulCageAbilitySystemComponent* SoulCageAbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AbilitySystem")
	USoulCageAttributeSet* SoulCageAttributeSet;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "CharacterData")
	TSoftObjectPtr<UDataAsset_StartUpDatabase> CharacterStartUpData;

public:
	FORCEINLINE USoulCageAbilitySystemComponent* GetSoulCageAbilitySystemComponent() const { return SoulCageAbilitySystemComponent; }

	FORCEINLINE USoulCageAttributeSet* GetSoulCageAttributeSet() const { return SoulCageAttributeSet; }
};
