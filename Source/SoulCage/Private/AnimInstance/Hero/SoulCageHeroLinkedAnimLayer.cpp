// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstance/Hero/SoulCageHeroLinkedAnimLayer.h"

#include "AnimInstance/Hero/SoulCageHeroAnimInstance.h"

USoulCageHeroAnimInstance* USoulCageHeroLinkedAnimLayer::GetHeroAnimInstance() const
{
    return Cast<USoulCageHeroAnimInstance>(GetOwningComponent()->GetAnimInstance());
}
