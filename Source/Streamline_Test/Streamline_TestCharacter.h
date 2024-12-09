// Copyright Epic Games, Inc. All Rights Reserved.

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

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* GrabAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* DashAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* SmokeGrenadeAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* MolotovGrenadeAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* CreateLightAction ;
public:
	AStreamline_TestCharacter();

protected:
	virtual void BeginPlay();

public:
	virtual void Tick(float DeltaTime) override;
	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

protected:
	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

	void Grab(const FInputActionValue& Value);

	void ReleaseObject(const FInputActionValue& Value);

	void PerformDash(const FInputActionValue& Value);

	void ThrowGrenade(TSubclassOf<ABase_Grenade> GrenadeClass);

	void ThrowSmokeGrenade();

	void ThrowMolotovGrenade();

	void CreateLight();
	void DestroyLight();
protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;
	// End of APawn interface
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Quests", meta = (AllowPrivateAccess = "true"))
	UQuest_Manager* QuestManager;

public:
	/** Returns Mesh1P subobject **/
	USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	UFUNCTION(BlueprintPure, Category = "Cooldown")
	float GetDashCooldown() const;

	UFUNCTION(BlueprintPure, Category = "Cooldown")
	float GetSmokeCooldown() const;

	UFUNCTION(BlueprintPure, Category = "Cooldown")
	float GetMolotovCooldown() const;

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

	//Grenades
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


	//Light Creation
	UPROPERTY(EditAnywhere, Category = "Light Creation")
	float LightDistance;

	UPROPERTY(EditAnywhere, Category = "Light Creation")
	float LightIntensity;

	UPROPERTY(EditAnywhere, Category = "Light Creation")
	FLinearColor LightColor;

	UPROPERTY()
	class UPointLightComponent* DynamicLight;

};

