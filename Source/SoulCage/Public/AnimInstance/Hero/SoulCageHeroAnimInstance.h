// Fill out your copyright notice in the Description page of Project Settings.

// Contains code specific for player

#pragma once

#include "CoreMinimal.h"
#include "AnimInstance/SoulCageCharacterAniminstance.h"
#include "SoulCageHeroAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class SOULCAGE_API USoulCageHeroAnimInstance : public USoulCageCharacterAniminstance
{
	GENERATED_BODY()
	
	// 这个类原本是为了处理玩家的静止不懂持续一定时间后进入休息状态的动画逻辑，但目前由于缺少具体的动画资产，所以遗弃
	// 如果后续有其他动画逻辑可以添加，在这个类中实现

};
