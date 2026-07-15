// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "SoulCageFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SOULCAGE_API USoulCageFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	static bool NativeDoesActorHaveTag(AActor* InActor, FGameplayTag TagToCheck);
};
