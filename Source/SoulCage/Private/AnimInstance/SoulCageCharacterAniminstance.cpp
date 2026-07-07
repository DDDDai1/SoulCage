// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/SoulCageCharacterAniminstance.h"

#include "Character/SoulCageCharacterBase.h"
#include "GameFramework/CharacterMovementComponent.h"

void USoulCageCharacterAniminstance::NativeInitializeAnimation()
{
	OwningCharacter = Cast<ASoulCageCharacterBase>(TryGetPawnOwner());

	if (OwningCharacter)
	{
		OwningMovementComponent = OwningCharacter->GetCharacterMovement();
	}
}

void USoulCageCharacterAniminstance::NativeThreadSafeUpdateAnimation(float DeltaSeconds)
{
	if (!OwningCharacter || !OwningMovementComponent)	return;

	GroundSpeed = OwningCharacter->GetVelocity().Size2D();

	bHasAcceleration = OwningMovementComponent->GetCurrentAcceleration().SizeSquared() > 0.f;
	
}