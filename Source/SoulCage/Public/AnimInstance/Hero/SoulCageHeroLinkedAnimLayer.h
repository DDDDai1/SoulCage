// Fill out your copyright notice in the Description page of Project Settings.

// For hero weapons

#pragma once

#include "CoreMinimal.h"
#include "AnimInstance/SoulCageBaseAniminstance.h"
#include "SoulCageHeroLinkedAnimLayer.generated.h"

class USoulCageHeroAnimInstance;
/**
 * 
 */
UCLASS()
class SOULCAGE_API USoulCageHeroLinkedAnimLayer : public USoulCageBaseAniminstance
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintPure, meta = (NotBlueprintThreadSafe))
	USoulCageHeroAnimInstance* GetHeroAnimInstance() const;

};
