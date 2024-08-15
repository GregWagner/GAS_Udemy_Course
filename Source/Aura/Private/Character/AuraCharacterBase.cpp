#include "Character/AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase(){
	PrimaryActorTick.bCanEverTick = false;
}

auto AAuraCharacterBase::BeginPlay() -> void{
	Super::BeginPlay();
}
