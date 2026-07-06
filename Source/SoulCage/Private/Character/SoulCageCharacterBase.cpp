
#include "Character/SoulCageCharacterBase.h"


ASoulCageCharacterBase::ASoulCageCharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ASoulCageCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}


