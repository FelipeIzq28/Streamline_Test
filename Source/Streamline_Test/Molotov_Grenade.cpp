// Fill out your copyright notice in the Description page of Project Settings.
/**
 * @file Molotov_Grenade.cpp
 * @brief Implementation file for the Molotov grenade class, `AMolotov_Grenade`.
 * @details This file defines the behavior of the Molotov grenade, including activating a fire effect upon impact.
 *          The fire effect is handled by a Niagara component and remains active for a specific duration, after which the grenade actor is destroyed.
 *          The class inherits from `ABase_Grenade` to reuse general grenade functionality such as launching and collision detection.
 * @author
 * Felipe Izquierdo
 * @date 09/12/2024
 */

#include "Molotov_Grenade.h"
#include "Kismet/GameplayStatics.h"

AMolotov_Grenade::AMolotov_Grenade()
{
    // Create the fire effect component and attach it to the root
    ImpactEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ImpactEffect"));
    ImpactEffect->SetupAttachment(RootComponent); // Adjuntar al RootComponent
    ImpactEffect->SetAutoActivate(false); // No activar automáticamente
}
void AMolotov_Grenade::BeginPlay()
{
    Super::BeginPlay();

    // Bind the OnHit function to the grenade mesh's hit event
    GrenadeMesh->OnComponentHit.AddDynamic(this, &AMolotov_Grenade::OnHit);
}
// OnHit

/**
 * @brief Handles collision events for the Molotov grenade.
 * @param HitComponent The component on this actor that was involved in the collision.
 * @param OtherActor The other actor involved in the collision.
 * @param OtherComp The other component involved in the collision.
 * @param NormalImpulse The impulse applied during the collision.
 * @param Hit Information about the collision, including the impact location and normal.
 * @details Activates the fire effect at the impact location, scales it appropriately, and sets the grenade actor to be destroyed after a short lifespan.
 */
void AMolotov_Grenade::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
    Super::OnHit(HitComponent, OtherActor, OtherComp, NormalImpulse, Hit);

    UE_LOG(LogTemp, Display, TEXT("Molotov Grenade OnHit called!"));
    if (GrenadeMesh)
    {
        GrenadeMesh->DestroyComponent();
    }
    // Lógica de impacto específica para la Molotov
    if (ImpactEffect)
    {
        ImpactEffect->SetWorldScale3D(FVector(0.5f, 0.5f, 0.5f));
        ImpactEffect->SetWorldLocation(Hit.Location);
        ImpactEffect->Activate();
    }

    SetLifeSpan(5.0f);
}
