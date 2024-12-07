// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "Base_Grenade.h"
#include "Molotov_Grenade.generated.h"

/**
 * 
 */
UCLASS()
class STREAMLINE_TEST_API AMolotov_Grenade : public ABase_Grenade
{
	GENERATED_BODY()

public:
	AMolotov_Grenade();

protected:
	virtual void BeginPlay() override;

	virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) override;

	UPROPERTY(VisibleAnywhere, Category = "Molotov")
	UNiagaraComponent* ImpactEffect;
private:
	UPROPERTY(EditAnywhere, Category = "Molotov")
	float MolotovDuration = 2.0f;

	FTimerHandle MolotovDurationTimer;
};
