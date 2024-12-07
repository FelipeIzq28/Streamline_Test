// Fill out your copyright notice in the Description page of Project Settings.

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

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

    UFUNCTION()
    virtual void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

    // Componente raíz de la granada (malla)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* GrenadeMesh;

    // Tiempo antes de que la granada explote
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grenade")
    float ExplosionDelay;

    // Función llamada cuando la granada explota
    virtual void Explode();

    // Temporizador para la explosión
    FTimerHandle ExplosionTimer;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    virtual void InitializeGrenade(FVector LaunchDirection, float LaunchForce);
};
