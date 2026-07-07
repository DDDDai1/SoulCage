// Fill out your copyright notice in the Description page of Project Settings.

// Shared by Player and Enemy

#pragma once

#include "CoreMinimal.h"
#include "AnimInstance/SoulCageBaseAniminstance.h"
#include "SoulCageCharacterAniminstance.generated.h"

class ASoulCageCharacterBase;
class UCharacterMovementComponent;

/**
 * 
 */
UCLASS()
class SOULCAGE_API USoulCageCharacterAniminstance : public USoulCageBaseAniminstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeThreadSafeUpdateAnimation(float DeltaSeconds);

protected:
	UPROPERTY()
	ASoulCageCharacterBase* OwningCharacter;

	UPROPERTY()
	UCharacterMovementComponent* OwningMovementComponent;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocomotionData")
	float GroundSpeed;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocomotionData")
	bool bHasAcceleration;
	
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "AnimData|LocomotionData")
	float LocomotionDirection;
};
