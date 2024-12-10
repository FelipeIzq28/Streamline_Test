// Fill out your copyright notice in the Description page of Project Settings.
/**
 * @file Base_Grenade.h
 * @brief Header file for the base grenade class, `ABase_Grenade`, providing the foundation for all grenade-related functionality in the game.
 * @details This class serves as the base class for all grenade types in the game. It includes essential properties such as a mesh component, an explosion delay, and logic for initialization, collisions, and explosion effects.
 *          Derived classes can override key methods (e.g., `Explode`) to implement custom behavior.
 * @author Felipe Izquierdo
 * @date 09/12/2024
 */
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Base_Grenade.generated.h"

UCLASS()
class STREAMLINE_TEST_API ABase_Grenade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABase_Grenade();
public:
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    virtual void InitializeGrenade(FVector LaunchDirection, float LaunchForce);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

    UFUNCTION()
    virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

    /** The static mesh component representing the grenade's physical appearance. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* GrenadeMesh;

    /** The delay (in seconds) before the grenade explodes after being thrown. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grenade")
    float ExplosionDelay;

    virtual void Explode();

    /** Timer handle for managing the explosion delay. */
    FTimerHandle ExplosionTimer;

};
