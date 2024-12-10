// Fill out your copyright notice in the Description page of Project Settings.
/**
 * @file Smoke_Grenade.cpp
 * @brief Implementation file for the smoke grenade class, `ASmoke_Grenade`.
 * @details This file defines the behavior of the smoke grenade, including the activation of a Niagara-based smoke effect upon explosion.
 *          The smoke effect is dynamically positioned and maintained for a specified duration before deactivating and destroying the grenade actor.
 *          The grenade inherits base functionality from `ABase_Grenade`.
 * @author
 * Felipe Izquierdo
 * @date 09/12/2024
 */

#include "Smoke_Grenade.h"

ASmoke_Grenade::ASmoke_Grenade()
{
    // Create the smoke effect component and attach it to the root
    SmokeEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SmokeEffect"));
    SmokeEffect->SetupAttachment(RootComponent);

    // Configure initial smoke effect properties
    SmokeEffect->SetWorldLocation(FVector(0.0f, 0.0f, -50.0f));
    SmokeEffect->SetUsingAbsoluteRotation(true);
    SmokeEffect->SetAutoActivate(false);
}


void ASmoke_Grenade::BeginPlay()
{
    Super::BeginPlay();

    // Store the initial upward direction of the grenade
    StartUpDirection = GetActorUpVector();
}
void ASmoke_Grenade::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // If the smoke effect is active, update its position and rotation
    if (SmokeEffect && SmokeEffect->IsActive())
    {
        FVector DownwardOffset = -StartUpDirection * 50.0f;
        SmokeEffect->SetWorldLocation(GetActorLocation() + DownwardOffset);

        SmokeEffect->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));
    }
}

////////////////////////////////////////////////////////////////////////////
// Explode

/**
 * @brief Triggers the grenade's explosion and activates the smoke effect.
 * @details Calls the base `Explode` method for generic explosion behavior, then initiates the smoke effect via `ActivateSmoke`.
 */
void ASmoke_Grenade::Explode()
{
    Super::Explode(); 

    ActivateSmoke();
}
/**
 * @brief Activates the smoke effect and manages its duration.
 * @details Plays the smoke effect using the Niagara component, scaling and aligning it as necessary.
 *          Deactivates the smoke effect and destroys the grenade actor after the specified duration.
 */
void ASmoke_Grenade::ActivateSmoke()
{
    if (SmokeEffect)
    {
        SmokeEffect->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));
        SmokeEffect->SetWorldScale3D(FVector(0.4f, 0.5f, 0.3f));
        SmokeEffect->Activate();

        GetWorld()->GetTimerManager().SetTimer(SmokeDurationTimer, [this]()
            {
                if (SmokeEffect)
                {
                    SmokeEffect->Deactivate();
                }
                Destroy();
            }, SmokeDuration, false);
    }
}
