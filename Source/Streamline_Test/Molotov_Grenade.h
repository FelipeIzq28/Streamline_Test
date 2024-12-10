// Fill out your copyright notice in the Description page of Project Settings.
/**
 * @file Molotov_Grenade.h
 * @brief Header file for the Molotov grenade class, `AMolotov_Grenade`.
 * @details This class extends `ABase_Grenade` to implement the behavior of a Molotov grenade. Upon impact, the grenade triggers a Niagara-based fire effect that persists for a specified duration.
 *          This effect can be used for area denial or applying damage over time to nearby actors.
 * @author
 * Felipe Izquierdo
 * @date 09/12/2024
 */
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

	/** The Niagara component responsible for rendering the fire effect upon impact. */
	UPROPERTY(VisibleAnywhere, Category = "Molotov")
	UNiagaraComponent* ImpactEffect;
private:
	/** The duration (in seconds) for which the fire effect remains active. */
	UPROPERTY(EditAnywhere, Category = "Molotov")
	float MolotovDuration = 2.0f;

	/** Timer handle to manage the duration of the fire effect. */
	FTimerHandle MolotovDurationTimer;
};
