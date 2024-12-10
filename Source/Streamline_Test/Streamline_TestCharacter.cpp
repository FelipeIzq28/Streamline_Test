// Copyright Epic Games, Inc. All Rights Reserved.
/**
 * @file Streamline_TestCharacter.cpp
 * @brief Implementation of the `AStreamline_TestCharacter` class, providing advanced player character mechanics such as gravity gun interactions, dashing, grenade usage, quest tracking, and dynamic lighting.
 * @details This file defines the core logic for the player character, including input bindings, physics interactions, and various abilities. It also handles cooldown systems for abilities and integrates with the `QuestManager` for tracking progress on specific quests.
 * @author Felipe Izquierdo
 * @date 09/12/2024
 */
#include "Streamline_TestCharacter.h"
#include "Streamline_TestProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/PointLightComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/LocalPlayer.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// AStreamline_TestCharacter

AStreamline_TestCharacter::AStreamline_TestCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	//Mesh1P->SetRelativeRotation(FRotator(0.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	// Initialize the physics handle
	PhysicsHandleComponent = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));

	// Initialize the quest manager
	QuestManager = CreateDefaultSubobject<UQuest_Manager>(TEXT("QuestManager"));
}

void AStreamline_TestCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (Subsystem)
		{
			Subsystem->AddMappingContext(AbilitiesMappingContext, 0);
		}
	}

	// Initialize cooldown values
	CurrentSmokeCooldown = SmokeGrenadeCooldown;
	CurrentMolotovCooldown = MolotovGrenadeCooldown;
	CurrentDashCooldown = DashCooldown;
}

void AStreamline_TestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();
	if (PhysicsHandle && PhysicsHandle->GetGrabbedComponent())
	{
		FVector PlayerViewPointLocation;
		FRotator PlayerViewPointRotation;
		GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);

		FVector TargetLocation = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * HoldDistance;

		PhysicsHandle->SetTargetLocationAndRotation(TargetLocation, PlayerViewPointRotation);
	}

	// Update ability cooldowns
	SetCooldowns(DeltaTime);
}

//////////////////////////////////////////////////////////////////////////// Input

void AStreamline_TestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AStreamline_TestCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AStreamline_TestCharacter::Look);

		//Grab and launch objects
		EnhancedInputComponent->BindAction(GrabAction, ETriggerEvent::Started, this, &AStreamline_TestCharacter::Grab);
		EnhancedInputComponent->BindAction(GrabAction, ETriggerEvent::Completed, this, &AStreamline_TestCharacter::ReleaseObject);

		//Dash
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Triggered, this, &AStreamline_TestCharacter::PerformDash);

		//Grenades
		EnhancedInputComponent->BindAction(SmokeGrenadeAction, ETriggerEvent::Triggered, this, &AStreamline_TestCharacter::ThrowSmokeGrenade);
		EnhancedInputComponent->BindAction(MolotovGrenadeAction, ETriggerEvent::Triggered, this, &AStreamline_TestCharacter::ThrowMolotovGrenade);

		//Create Lights
		EnhancedInputComponent->BindAction(CreateLightAction, ETriggerEvent::Started, this, &AStreamline_TestCharacter::CreateLight);
		EnhancedInputComponent->BindAction(CreateLightAction, ETriggerEvent::Completed, this, &AStreamline_TestCharacter::DestroyLight);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}

void AStreamline_TestCharacter::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void AStreamline_TestCharacter::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}
/**
 * @brief Attempts to grab an object within reach.
 * @param Value Unused parameter in this context, as the action is triggered by input.
 * @details Uses a physics handle to grab the first object within the specified grab radius and distance.
 * The grabbed object is detached from any parent actors and is tagged as "Grabbed."
 */
void AStreamline_TestCharacter::Grab(const FInputActionValue& Value)
{
	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();
	if (PhysicsHandle == nullptr)
	{
		return;
	}
	FHitResult HitResult;
	if (GetGrabbableInReach(HitResult))
	{
		UPrimitiveComponent* HitComponent = HitResult.GetComponent();
		HitComponent->SetSimulatePhysics(true);
		HitComponent->WakeAllRigidBodies();
		HitResult.GetActor()->Tags.Add("Grabbed");
		AActor* HitActor = HitResult.GetActor();
		HitActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		UE_LOG(LogTemp, Display, TEXT("Hit Actor: %s"), *HitActor->GetActorNameOrLabel());

		PhysicsHandle->GrabComponentAtLocationWithRotation(
			HitComponent,
			NAME_None,
			HitResult.ImpactPoint,
			HitComponent->GetComponentRotation()
		);

	}
}
/**
 * @brief Releases the currently grabbed object.
 * @param Value Unused parameter in this context, as the action is triggered by input.
 * @details If a component is being held by the physics handle, it is released, given an impulse in the forward direction,
 * and the "Grabbed" tag is removed from the actor. Also reports this action to the quest system.
 */
void AStreamline_TestCharacter::ReleaseObject(const FInputActionValue& Value)
{
	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();

	if (PhysicsHandle && PhysicsHandle->GetGrabbedComponent())
	{
		UPrimitiveComponent* GrabbedComponent = PhysicsHandle->GetGrabbedComponent();
		AActor* GrabbedActor = GrabbedComponent->GetOwner();

		if (GrabbedActor)
		{
			GrabbedActor->Tags.Remove("Grabbed");
			FVector PlayerViewPointLocation;
			FRotator PlayerViewPointRotation;
			GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);
			FVector LaunchDirection = PlayerViewPointRotation.Vector();

			GrabbedComponent->AddImpulse(LaunchDirection * GravityLaunchForce, NAME_None, true);
			CompleteQuestMission("Gravity Gun");
		}
		PhysicsHandle->ReleaseComponent();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No component to release."));
	}
}
/**
 * @brief Retrieves the physics handle component used for object interactions.
 * @return A pointer to the `UPhysicsHandleComponent` if found, otherwise nullptr.
 * @details Logs a warning if the physics handle is not present.
 */
UPhysicsHandleComponent* AStreamline_TestCharacter::GetPhysicsHandle() const
{
	UPhysicsHandleComponent* Result = FindComponentByClass<UPhysicsHandleComponent>();
	if (Result == nullptr)
	{
		UE_LOG(LogTemp, Display, TEXT("Grabber rquires a UPhysicsHandleComponent"));
	}
	return Result;
}
/**
 * @brief Performs a sphere sweep to detect if an object is within grabbing range.
 * @param OutHitResult Reference to store the hit result if an object is found.
 * @return True if an object is within range, false otherwise.
 * @details Uses a sphere to check for grabbable objects and visualizes the reach with debug lines and spheres.
 */
bool AStreamline_TestCharacter::GetGrabbableInReach(FHitResult& OutHitResult) const
{
	FVector PlayerViewpointLocation;
	FRotator PlayerViewpointRotation;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewpointLocation, PlayerViewpointRotation);
	FVector Start = PlayerViewpointLocation;
	FVector End = Start + PlayerViewpointRotation.Vector() * MaxGrabDistance;
	DrawDebugLine(GetWorld(), Start, End, FColor::Red);
	DrawDebugSphere(GetWorld(), End, 10, 10, FColor::Blue, false, 5);

	FCollisionShape Sphere = FCollisionShape::MakeSphere(GrabRadius);

	bool HasHit = GetWorld()->SweepSingleByChannel(
		OutHitResult,

		Start, End,
		FQuat::Identity,
		ECC_GameTraceChannel2,
		Sphere
	);
	return HasHit;
}
/**
 * @brief Performs a dash in the forward direction.
 * @param Value Unused parameter in this context, as the action is triggered by input.
 * @details Moves the character rapidly in the forward direction using the `LaunchCharacter` function.
 * Adds a cooldown before the dash can be used again and reports the action to the quest system.
 */
void AStreamline_TestCharacter::PerformDash(const FInputActionValue& Value)
{
	if (!bCanDash)
	{
		return;
	}
	FVector DashDirection = GetActorForwardVector();
	FVector DashTargetLocation = GetActorLocation() + DashDirection * DashDistance;
	LaunchCharacter(DashDirection * DashDistance / DashDuration, true, true);
	CompleteQuestMission("Dash");
	bCanDash = false;
	GetWorld()->GetTimerManager().SetTimer(DashCooldownTimer, [this]()
		{
			ResetCooldown(&bCanDash, CurrentDashCooldown, DashCooldown);
		}, DashCooldown, false);
}
/**
 * @brief Throws a grenade of the specified class.
 * @param GrenadeClass The class of the grenade to spawn.
 * @details Spawns a grenade actor in front of the player and launches it in the forward direction with the specified force.
 */
void AStreamline_TestCharacter::ThrowGrenade(TSubclassOf<ABase_Grenade> GrenadeClass)
{
	if (GrenadeClass)
	{
		FVector PlayerViewPointLocation;
		FRotator PlayerViewPointRotation;
		GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);

		FVector SpawnLocation = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * 100.0f;
		FVector LaunchDirection = PlayerViewPointRotation.Vector();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		ABase_Grenade* SpawnedGrenade = GetWorld()->SpawnActor<ABase_Grenade>(GrenadeClass, SpawnLocation, PlayerViewPointRotation, SpawnParams);
		if (SpawnedGrenade)
		{
			SpawnedGrenade->InitializeGrenade(LaunchDirection, GrenadeLaunchForce);
		}
	}
}
/**
 * @brief Throws a smoke grenade.
 * @details Spawns and launches a smoke grenade if the cooldown allows it. Triggers the cooldown timer and reports the action to the quest system.
 */
void AStreamline_TestCharacter::ThrowSmokeGrenade()
{
	if (!bCanThrowSmokeGrenade)
	{
		return;
	}
	ThrowGrenade(SmokeGrenade);

	bCanThrowSmokeGrenade = false;
	CompleteQuestMission("Smoke Grenade");
	GetWorld()->GetTimerManager().SetTimer(SmokeGrenadeCooldownTimer, [this]()
		{
			ResetCooldown(&bCanThrowSmokeGrenade, CurrentSmokeCooldown, SmokeGrenadeCooldown);
		}, SmokeGrenadeCooldown, false);
}
/**
 * @brief Handles the action of throwing a Molotov grenade.
 * @details Checks if the ability is available, spawns the grenade, and applies a cooldown.
 */
void AStreamline_TestCharacter::ThrowMolotovGrenade()
{
	if (!bCanThrowMolotovGrenade)
	{
		return;
	}
	ThrowGrenade(MolotovGrenade);

	bCanThrowMolotovGrenade = false;
	CompleteQuestMission("Molotov Grenade");
	GetWorld()->GetTimerManager().SetTimer(MolotovGrenadeCooldownTimer, [this]()
		{
			ResetCooldown(&bCanThrowMolotovGrenade, CurrentMolotovCooldown, MolotovGrenadeCooldown);
		}, SmokeGrenadeCooldown, false);
}
/**
 * @brief Resets the cooldown state for a specific ability.
 * @param bCanThrow Pointer to the boolean tracking whether the ability can be used.
 * @param CurrentCooldown Reference to the current cooldown timer value.
 * @param Cooldown Reference to the maximum cooldown value.
 * @details This function sets the ability to be usable again and resets the cooldown timer to its maximum value.
 */
void AStreamline_TestCharacter::ResetCooldown(bool* bCanThrow, float& CurrentCooldown, float& Cooldown)
{
	if (bCanThrow)
	{
		*bCanThrow = true;
		CurrentCooldown = Cooldown;
	}
}
/**
 * @brief Creates a dynamic point light in front of the player.
 * @details The light is created at a distance defined by `LightDistance` and aligned with the direction the player is facing.
 *          The light's intensity and color are configurable through properties.
 *          This ability also tracks quest progress for "Light Creation."
 */
void AStreamline_TestCharacter::CreateLight()
{
	if (!DynamicLight)
	{
		DynamicLight = NewObject<UPointLightComponent>(this);
		if (DynamicLight)
		{
			DynamicLight->RegisterComponent();
			DynamicLight->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
			DynamicLight->SetIntensity(LightIntensity); 
			DynamicLight->SetLightColor(LightColor); 
			APlayerController* PlayerController = Cast<APlayerController>(GetController());
			if (PlayerController)
			{
				FRotator CameraRotation = PlayerController->GetControlRotation();
				FVector ForwardVector = CameraRotation.Vector();
				FVector LightWorldPosition = GetActorLocation() + (ForwardVector * LightDistance);

				DynamicLight->SetWorldLocation(LightWorldPosition);
				CompleteQuestMission("Light Creation");
			}
		}
	}
}
/**
 * @brief Destroys the currently active dynamic light.
 * @details Ensures that the light component is properly destroyed and sets the reference to nullptr.
 */
void AStreamline_TestCharacter::DestroyLight()
{
	if (DynamicLight)
	{
		DynamicLight->DestroyComponent();
		DynamicLight = nullptr;
	}
}
void AStreamline_TestCharacter::CompleteQuestMission(FString Quest)
{
	if (QuestManager)
	{
		QuestManager->ReportAbilityUse(Quest);
	}
}
/**
 * @brief Updates the cooldown timers for all abilities.
 * @param DeltaTime Time elapsed since the last frame.
 * @details Reduces the current cooldown values for abilities that are on cooldown.
 *          Ensures that abilities are only affected if they are currently disabled.
 */
void AStreamline_TestCharacter::SetCooldowns(float DeltaTime)
{
	if (!bCanThrowSmokeGrenade)
	{
		CurrentSmokeCooldown -= DeltaTime;
	}
	if (!bCanThrowMolotovGrenade)
	{
		CurrentMolotovCooldown -= DeltaTime;
	}
	if (!bCanDash)
	{
		CurrentDashCooldown -= DeltaTime;
	}
}
/**
 * @brief Retrieves the current cooldown value for the Dash ability.
 * @return The remaining cooldown time for the Dash ability.
 * @details This function is intended for use in widgets to display the cooldown visually.
 */
float AStreamline_TestCharacter::GetDashCooldown() const
{
	return CurrentDashCooldown;
}
/**
 * @brief Retrieves the current cooldown value for the Smoke Grenade ability.
 * @return The remaining cooldown time for the Smoke Grenade ability.
 * @details This function is intended for use in widgets to display the cooldown visually.
 */
float AStreamline_TestCharacter::GetSmokeCooldown() const
{
	return CurrentSmokeCooldown;
}
/**
 * @brief Retrieves the current cooldown value for the Molotov Grenade ability.
 * @return The remaining cooldown time for the Molotov Grenade ability.
 * @details This function is intended for use in widgets to display the cooldown visually.
 */
float AStreamline_TestCharacter::GetMolotovCooldown() const
{
	return CurrentMolotovCooldown;
}
