// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "Base_Grenade.h"
#include "Smoke_Grenade.generated.h"
/**
 * @file Smoke_Grenade.h
 * @brief Header file for the smoke grenade class, `ASmoke_Grenade`.
 * @details This class extends the functionality of `ABase_Grenade` to add smoke-based effects using Niagara.
 *          The grenade emits a smoke effect after a delay and for a specific duration, making it ideal for creating cover or obscuring vision in gameplay scenarios.
 *          It inherits basic grenade functionality such as launching and exploding from the base class.
 * @author
 * Felipe Izquierdo
 * @date 09/12/2024
 */
UCLASS()
class STREAMLINE_TEST_API ASmoke_Grenade : public ABase_Grenade
{
	GENERATED_BODY()
	
public:
    ASmoke_Grenade();

    virtual void Tick(float DeltaTime) override;
protected:
    virtual void BeginPlay() override;

    /** The Niagara component responsible for rendering the smoke effect. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Smoke")
    UNiagaraComponent* SmokeEffect;

    /** The delay (in seconds) before the smoke effect is activated. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Smoke")
    float SmokeDelay;

    /** The duration (in seconds) for which the smoke effect remains active. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Smoke")
    float SmokeDuration;


    virtual void Explode() override;

private:

    void ActivateSmoke();

    /** Direction to ensure the smoke effect is always aligned upwards. */
    FVector StartUpDirection;

    /** Timer handle to manage the duration of the smoke effect. */
    FTimerHandle SmokeDurationTimer;
};
