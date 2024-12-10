// Fill out your copyright notice in the Description page of Project Settings.
/**
 * @file Base_Grenade.cpp
 * @brief Implementation file for the base grenade class, `ABase_Grenade`.
 * @details This file defines the behavior of a basic grenade, including initialization, physics-based launching, and explosion logic.
 *          It serves as a foundation for more specialized grenade types by providing default functionality for collision and explosion events.
 * @author Felipe Izquierdo
 * @date 09/12/2024
 */

#include "Base_Grenade.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
ABase_Grenade::ABase_Grenade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create the grenade's static mesh component and set it as the root
	GrenadeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GrenadeMesh"));
	RootComponent = GrenadeMesh;

	// Enable physics simulation and collision notifications for the grenade
	GrenadeMesh->SetSimulatePhysics(true);
	GrenadeMesh->SetNotifyRigidBodyCollision(true);
}

// Called when the game starts or when spawned
void ABase_Grenade::BeginPlay()
{
	Super::BeginPlay();

	// Set a timer to call the Explode function after the explosion delay
	GetWorld()->GetTimerManager().SetTimer(ExplosionTimer, this, &ABase_Grenade::Explode, ExplosionDelay, false);
}


// Called every frame
void ABase_Grenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// InitializeGrenade

/**
 * @brief Initializes the grenade with a launch direction and force.
 * @param LaunchDirection The direction in which the grenade should be launched.
 * @param LaunchForce The magnitude of the force to apply to the grenade.
 * @details This function applies an impulse to the grenade mesh, simulating a throw or launch.
 *          The grenade must have physics simulation enabled for this to work.
 */
void ABase_Grenade::InitializeGrenade(FVector LaunchDirection, float LaunchForce)
{
	if (GrenadeMesh)
	{
		GrenadeMesh->SetSimulatePhysics(true);

		GrenadeMesh->AddImpulse(LaunchDirection * LaunchForce, NAME_None, true);
	}
}

/**
 * @brief Triggers the grenade's explosion.
 * @details Logs a message to the console indicating the grenade has exploded.
 *          This function is intended to be overridden by derived classes to add custom explosion effects, such as spawning particles or dealing damage.
 */
void ABase_Grenade::Explode()
{
	UE_LOG(LogTemp, Display, TEXT("Base Grenade Exploded!"));
}

/**
 * @brief Handles collision events for the grenade.
 * @param HitComponent The component on this actor that was involved in the collision.
 * @param OtherActor The other actor involved in the collision.
 * @param OtherComp The other component involved in the collision.
 * @param NormalImpulse The impulse applied during the collision.
 * @param Hit Information about the collision, including the impact location and normal.
 * @details Logs a message to the console when the grenade collides with another object.
 *          This function is intended to be overridden in derived classes for specific collision behavior, such as detonating on impact.
 */
void ABase_Grenade::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	UE_LOG(LogTemp, Display, TEXT("Base Grenade Hit!"));
}

