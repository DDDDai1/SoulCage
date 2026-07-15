// Fill out your copyright notice in the Description page of Project Settings.

//Privides helper functions

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimInstance.h"
#include "SoulCageBaseAniminstance.generated.h"

/**
 * 
 */
UCLASS()
class SOULCAGE_API USoulCageBaseAniminstance : public UAnimInstance
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintPure, meta = (BlueprintThreadSafe))
	bool DoesOwnerHaveTag(FGameplayTag TagToCheck) const;
};
