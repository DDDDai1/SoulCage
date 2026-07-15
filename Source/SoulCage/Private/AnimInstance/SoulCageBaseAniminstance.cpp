// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/SoulCageBaseAniminstance.h"

#include "SoulCageFunctionLibrary.h"

bool USoulCageBaseAniminstance::DoesOwnerHaveTag(FGameplayTag TagToCheck) const
{
	if (APawn* OwningPawn = TryGetPawnOwner())
	{
		return USoulCageFunctionLibrary::NativeDoesActorHaveTag(OwningPawn, TagToCheck);
	}

    return false;
}
