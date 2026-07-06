// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SoulCageCharacterBase.generated.h"

UCLASS(Abstract)
class SOULCAGE_API ASoulCageCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	ASoulCageCharacterBase();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
};
