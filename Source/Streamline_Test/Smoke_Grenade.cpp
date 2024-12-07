// Fill out your copyright notice in the Description page of Project Settings.


#include "Smoke_Grenade.h"

ASmoke_Grenade::ASmoke_Grenade()
{
    SmokeEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("SmokeEffect"));
    SmokeEffect->SetupAttachment(RootComponent);

    SmokeEffect->SetWorldLocation(FVector(0.0f, 0.0f, -50.0f));
    SmokeEffect->SetUsingAbsoluteRotation(true);
    SmokeEffect->SetAutoActivate(false);
}


void ASmoke_Grenade::BeginPlay()
{
    Super::BeginPlay();
    StartUpDirection = GetActorUpVector();
}
void ASmoke_Grenade::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (SmokeEffect && SmokeEffect->IsActive())
    {
        FVector DownwardOffset = -StartUpDirection * 50.0f; // Ajuste de la distancia hacia abajo
        SmokeEffect->SetWorldLocation(GetActorLocation() + DownwardOffset);
        // Mantén la rotación fija hacia arriba
        SmokeEffect->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));
    }
}

void ASmoke_Grenade::Explode()
{
    Super::Explode();  // Llama al comportamiento base de explosión si es necesario

    // Configura un temporizador para activar el efecto de humo
    ActivateSmoke();
}

void ASmoke_Grenade::ActivateSmoke()
{
    if (SmokeEffect)
    {
        SmokeEffect->SetWorldRotation(FRotator(0.0f, 0.0f, 0.0f));
        SmokeEffect->SetWorldScale3D(FVector(0.4f, 0.5f, 0.3f));
        // Activa el efecto de humo
        SmokeEffect->Activate();

        // Configura un temporizador para desactivar el humo después de su duración
        GetWorld()->GetTimerManager().SetTimer(SmokeDurationTimer, [this]()
            {
                if (SmokeEffect)
                {
                    SmokeEffect->Deactivate();
                }

                // Destruye la granada después de que el humo desaparezca
                Destroy();
            }, SmokeDuration, false);
    }
}
