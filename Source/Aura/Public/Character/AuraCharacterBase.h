// Shared functionality between Aura and Enemies
// Note: This class is abstact

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AuraCharacterBase.generated.h"

UCLASS(Abstract)
class AURA_API AAuraCharacterBase : public ACharacter {
	GENERATED_BODY()

public:
	AAuraCharacterBase();

protected:
	virtual auto BeginPlay() -> void override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<USkeletalMeshComponent> Weapon;
};
