// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "Base_Grenade.h"
#include "Smoke_Grenade.generated.h"

/**
 * 
 */
UCLASS()
class STREAMLINE_TEST_API ASmoke_Grenade : public ABase_Grenade
{
	GENERATED_BODY()
	
public:
    ASmoke_Grenade();

protected:
    virtual void BeginPlay() override;

    // Componente de Niagara para el gas
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Smoke")
    UNiagaraComponent* SmokeEffect;

    // Tiempo antes de que el humo se active
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Smoke")
    float SmokeDelay;

    // Duración del humo
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Smoke")
    float SmokeDuration;

    // Sobrescribe Explode para activar el gas
    virtual void Explode() override;

private:
    // Función para activar el humo
    void ActivateSmoke();

    // TimerHandle para controlar el inicio del humo
    FTimerHandle SmokeDelayTimer;

    // TimerHandle para detener el humo
    FTimerHandle SmokeDurationTimer;
};
