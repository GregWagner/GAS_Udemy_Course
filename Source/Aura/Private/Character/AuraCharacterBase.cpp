// Shared functionality between Aura and Enemies

#include "Character/AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase(){
	PrimaryActorTick.bCanEverTick = false;
}

auto AAuraCharacterBase::BeginPlay() -> void{
	Super::BeginPlay();

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>()
}
