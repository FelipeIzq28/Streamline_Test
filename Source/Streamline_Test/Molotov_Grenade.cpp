// Fill out your copyright notice in the Description page of Project Settings.


#include "Molotov_Grenade.h"
#include "Kismet/GameplayStatics.h"

AMolotov_Grenade::AMolotov_Grenade()
{

    ImpactEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("ImpactEffect"));
    ImpactEffect->SetupAttachment(RootComponent); // Adjuntar al RootComponent
    ImpactEffect->SetAutoActivate(false); // No activar automáticamente
}
void AMolotov_Grenade::BeginPlay()
{
    Super::BeginPlay();
    GrenadeMesh->OnComponentHit.AddDynamic(this, &AMolotov_Grenade::OnHit);
}

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
