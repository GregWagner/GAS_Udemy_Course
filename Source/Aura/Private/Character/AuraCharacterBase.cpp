// Shared functionality between Aura and Enemies
// Note: This class is abstact

#include "Character/AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase(){
	PrimaryActorTick.bCanEverTick = false;
}

auto AAuraCharacterBase::BeginPlay() -> void{
	Super::BeginPlay();

	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>()
}
