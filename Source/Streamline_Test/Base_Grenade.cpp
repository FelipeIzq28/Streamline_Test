// Fill out your copyright notice in the Description page of Project Settings.


#include "Base_Grenade.h"

// Sets default values
ABase_Grenade::ABase_Grenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	GrenadeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrenadeMesh"));
	RootComponent = GrenadeMesh;

	GrenadeMesh->SetSimulatePhysics(true);
}

// Called when the game starts or when spawned
void ABase_Grenade::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(ExplosionTimer, this, &ABase_Grenade::Explode, ExplosionDelay, false);
}

// Called every frame
void ABase_Grenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABase_Grenade::InitializeGrenade(FVector LaunchDirection, float LaunchForce)
{
	if (GrenadeMesh)
	{
		// Asegúrate de que la malla tiene simulación de físicas habilitada
		GrenadeMesh->SetSimulatePhysics(true);

		// Aplica un impulso inicial en la dirección del lanzamiento
		GrenadeMesh->AddImpulse(LaunchDirection * LaunchForce, NAME_None, true);
	}
}
void ABase_Grenade::Explode()
{
	UE_LOG(LogTemp, Display, TEXT("Base Grenade Exploded!"));
}

