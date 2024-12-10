// Copyright Epic Games, Inc. All Rights Reserved.

/**
 * @file Streamline_TestCharacter.h
 * @brief Header file for the `AStreamline_TestCharacter` class, defining a versatile player character with enhanced input capabilities, gravity gun mechanics, dash functionality, grenade abilities, and quest management.
 * @author Felipe Izquierdo
 * @date 09/12/2024
 *
 * This file defines the `AStreamline_TestCharacter` class, which serves as the primary player character in the game.
 * It integrates advanced mechanics such as:
 * - Gravity gun functionality for interacting with objects.
 * - Dash mechanics for swift movement.
 * - Grenade-throwing mechanics (e.g., smoke and Molotov grenades) with cooldowns.
 * - Quest management via the `UQuest_Manager` component.
 * - Light creation and destruction for dynamic illumination.
 *
 * The character is designed to utilize the Enhanced Input System for flexible input handling.
 */

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Base_Grenade.h"
#include "Quest_Manager.h"
#include "Logging/LogMacros.h"
#include "Streamline_TestCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
class UInputMappingContext;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

UCLASS(config=Game)
class AStreamline_TestCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Mesh, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FirstPersonCameraComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input", meta = (AllowPrivateAccess = "true"))
	UInputMappingContext* AbilitiesMappingContext;
	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MoveAction;

	/** Grab Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* GrabAction;

	/** Dash Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* DashAction;

	/** Smoke Grenade Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SmokeGrenadeAction;

	/** Molotov Grenade Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MolotovGrenadeAction;

	/** Light Grenade Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* CreateLightAction ;
public:
	AStreamline_TestCharacter();

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	// Cooldown accessors
	UFUNCTION(BlueprintPure, Category = "Cooldown")
	float GetDashCooldown() const;

	UFUNCTION(BlueprintPure, Category = "Cooldown")
	float GetSmokeCooldown() const;

	UFUNCTION(BlueprintPure, Category = "Cooldown")
	float GetMolotovCooldown() const;

public:
	virtual void Tick(float DeltaTime) override;
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

protected:
	virtual void BeginPlay();

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	/** Called for grabbing input */
	void Grab(const FInputActionValue& Value);

	/** Called for releasing input */
	void ReleaseObject(const FInputActionValue& Value);

	/** Called for dash input */
	void PerformDash(const FInputActionValue& Value);

	/** Called for throw grenade input */
	void ThrowGrenade(TSubclassOf<ABase_Grenade> GrenadeClass);

	void ThrowSmokeGrenade();

	void ThrowMolotovGrenade();

	/** Creates and destroy a dynamic light. */
	void CreateLight();
	void DestroyLight();

	/** Reference to the Quest Manager. */
	void CompleteQuestMission(FString Quest);
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quests", meta = (AllowPrivateAccess = "true"))
	UQuest_Manager* QuestManager;

private:
	//Gravity Gun Variables
	UPROPERTY(EditAnywhere, Category = "Gravity Gun");
	float MaxGrabDistance = 400;

	UPROPERTY(EditAnywhere, Category = "Gravity Gun")
	float GrabRadius = 100;

	UPROPERTY(EditAnywhere, Category = "Gravity Gun")
	float HoldDistance = 200;

	UPROPERTY(EditAnywhere, Category = "Gravity Gun")
	float GravityLaunchForce = 1500.0f;

	UPROPERTY(VisibleAnywhere)
	UPhysicsHandleComponent* PhysicsHandleComponent;
	UPhysicsHandleComponent* GetPhysicsHandle() const;

	bool GetGrabbableInReach(FHitResult& OutHitResult) const;

	//Dash Variables
	UPROPERTY(EditAnywhere, Category = "Dash")
	float DashDistance = 600.0f;

	UPROPERTY(EditAnywhere, Category = "Dash")
	float DashDuration = 0.2f;

	UPROPERTY(EditAnywhere, Category = "Dash")
	bool bCanDash = true;

	UPROPERTY(EditAnywhere, Category = "Dash")
	float DashCooldown = 1.0f;


	UPROPERTY(VisibleAnywhere, Category = "Dash")
	float CurrentDashCooldown;

	FTimerHandle DashCooldownTimer;

	//Grenades variables
	UPROPERTY(EditAnywhere, Category = "Grenades")
	TSubclassOf<class ABase_Grenade> SmokeGrenade;

	UPROPERTY(EditAnywhere, Category = "Grenades")
	TSubclassOf<class ABase_Grenade> MolotovGrenade;

	UPROPERTY(EditAnywhere, Category = "Grenades")
	float GrenadeLaunchForce = 1000.0f;

	UPROPERTY(EditAnywhere, Category = "Grenades")
	float SmokeGrenadeCooldown = 1.0f;

	UPROPERTY(VisibleAnywhere, Category = "Grenades")
	float CurrentSmokeCooldown;

	UPROPERTY(EditAnywhere, Category = "Grenades")
	float MolotovGrenadeCooldown = 1.5f;

	UPROPERTY(VisibleAnywhere, Category = "Grenades")
	float CurrentMolotovCooldown;

	bool bCanThrowSmokeGrenade = true;
	bool bCanThrowMolotovGrenade = true;

	FTimerHandle SmokeGrenadeCooldownTimer;
	FTimerHandle MolotovGrenadeCooldownTimer;

	void ResetCooldown(bool* bCanThrow, float& CurrentCooldown, float& Cooldown);

	void SetCooldowns(float DeltaTime);


	//Light Creation Variables
	UPROPERTY(EditAnywhere, Category = "Light Creation")
	float LightDistance;

	UPROPERTY(EditAnywhere, Category = "Light Creation")
	float LightIntensity;

	UPROPERTY(EditAnywhere, Category = "Light Creation")
	FLinearColor LightColor;

	UPROPERTY()
	class UPointLightComponent* DynamicLight;

};

