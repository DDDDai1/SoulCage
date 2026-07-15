
#include "Character/SoulCageCharacterBase.h"
#include "AbilitySystem/SoulCageAbilitySystemComponent.h"
#include "AbilitySystem/SoulCageAttributeSet.h"

ASoulCageCharacterBase::ASoulCageCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	GetMesh()->bReceivesDecals = false;

	SoulCageAbilitySystemComponent = CreateDefaultSubobject<USoulCageAbilitySystemComponent>(TEXT("SoulCageAbilitySystemComponent"));

	SoulCageAttributeSet = CreateDefaultSubobject<USoulCageAttributeSet>(TEXT("SoulCageAttributeSet"));
}

UAbilitySystemComponent* ASoulCageCharacterBase::GetAbilitySystemComponent() const
{
	return GetSoulCageAbilitySystemComponent();
}

void ASoulCageCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (SoulCageAbilitySystemComponent)
	{
		SoulCageAbilitySystemComponent->InitAbilityActorInfo(this, this);

		ensureMsgf(!CharacterStartUpData.IsNull(),TEXT("Forgot to assign start up data to %s"),*GetName());
	}
}


