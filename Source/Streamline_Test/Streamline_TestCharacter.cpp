// Copyright Epic Games, Inc. All Rights Reserved.

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

	PhysicsHandleComponent = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));


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

		// Obtén la ubicación y rotación de la cámara del jugador
		GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);

		// Calcula la posición objetivo para el objeto agarrado
		FVector TargetLocation = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * HoldDistance;

		// Actualiza la posición y rotación del Physics Handle
		PhysicsHandle->SetTargetLocationAndRotation(TargetLocation, PlayerViewPointRotation);
	}
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
void AStreamline_TestCharacter::ReleaseObject(const FInputActionValue& Value)
{
	UPhysicsHandleComponent* PhysicsHandle = GetPhysicsHandle();

	if (PhysicsHandle && PhysicsHandle->GetGrabbedComponent())
	{
		UPrimitiveComponent* GrabbedComponent = PhysicsHandle->GetGrabbedComponent();
		AActor* GrabbedActor = GrabbedComponent->GetOwner();

		if (GrabbedActor)
		{
			// Remover etiqueta "Grabbed"
			GrabbedActor->Tags.Remove("Grabbed");
			UE_LOG(LogTemp, Display, TEXT("Released Actor: %s"), *GrabbedActor->GetActorNameOrLabel());
			// Calcula la dirección de lanzamiento
			FVector PlayerViewPointLocation;
			FRotator PlayerViewPointRotation;
			GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);
			FVector LaunchDirection = PlayerViewPointRotation.Vector();

			GrabbedComponent->AddImpulse(LaunchDirection * GravityLaunchForce, NAME_None, true);
		}

		// Liberar el componente del PhysicsHandle
		PhysicsHandle->ReleaseComponent();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No component to release."));
	}
}
UPhysicsHandleComponent* AStreamline_TestCharacter::GetPhysicsHandle() const
{
	UPhysicsHandleComponent* Result = FindComponentByClass<UPhysicsHandleComponent>();
	if (Result == nullptr)
	{
		UE_LOG(LogTemp, Display, TEXT("Grabber rquires a UPhysicsHandleComponent"));
	}
	return Result;
}

bool AStreamline_TestCharacter::GetGrabbableInReach(FHitResult& OutHitResult) const
{
	FVector PlayerViewpointLocation;
	FRotator PlayerViewpointRotation;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewpointLocation, PlayerViewpointRotation);

	// Calcula el vector final basado en la dirección en que mira el jugador
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
void AStreamline_TestCharacter::PerformDash(const FInputActionValue& Value)
{
	if (!bCanDash)
	{
		UE_LOG(LogTemp, Warning, TEXT("Dash is on cooldown."));
		return;
	}

	// Obtén la dirección hacia adelante del personaje
	FVector DashDirection = GetActorForwardVector();

	// Calcula la ubicación de destino del Dash
	FVector DashTargetLocation = GetActorLocation() + DashDirection * DashDistance;

	// Mueve al personaje
	LaunchCharacter(DashDirection * DashDistance / DashDuration, true, true);

	UE_LOG(LogTemp, Display, TEXT("Dashing to: %s"), *DashTargetLocation.ToString());

	// Inicia el cooldown
	bCanDash = false;
	GetWorld()->GetTimerManager().SetTimer(DashCooldownTimer, [this]()
		{
			ResetCooldown(&bCanDash, CurrentDashCooldown, DashCooldown);
		}, DashCooldown, false);
}
void AStreamline_TestCharacter::ThrowGrenade(TSubclassOf<ABase_Grenade> GrenadeClass)
{
	if (GrenadeClass)
	{
		FVector PlayerViewPointLocation;
		FRotator PlayerViewPointRotation;

		// Obtén la ubicación y rotación de la cámara
		GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewPointLocation, PlayerViewPointRotation);

		FVector SpawnLocation = PlayerViewPointLocation + PlayerViewPointRotation.Vector() * 100.0f; // Ajusta esta distancia
		FVector LaunchDirection = PlayerViewPointRotation.Vector();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = this;
		SpawnParams.Instigator = GetInstigator();

		// Crea y configura la granada
		ABase_Grenade* SpawnedGrenade = GetWorld()->SpawnActor<ABase_Grenade>(GrenadeClass, SpawnLocation, PlayerViewPointRotation, SpawnParams);
		if (SpawnedGrenade)
		{
			SpawnedGrenade->InitializeGrenade(LaunchDirection, GrenadeLaunchForce);
		}
	}
}
void AStreamline_TestCharacter::ThrowSmokeGrenade()
{
	if (!bCanThrowSmokeGrenade)
	{
		UE_LOG(LogTemp, Warning, TEXT("Smoke grenade is on cooldown."));
		return;
	}
	ThrowGrenade(SmokeGrenade);

	bCanThrowSmokeGrenade = false;

	GetWorld()->GetTimerManager().SetTimer(SmokeGrenadeCooldownTimer, [this]()
		{
			ResetCooldown(&bCanThrowSmokeGrenade, CurrentSmokeCooldown, SmokeGrenadeCooldown);
		}, SmokeGrenadeCooldown, false);
}
void AStreamline_TestCharacter::ThrowMolotovGrenade()
{
	if (!bCanThrowMolotovGrenade)
	{
		UE_LOG(LogTemp, Warning, TEXT("Flash grenade is on cooldown."));
		return;
	}
	ThrowGrenade(MolotovGrenade);

	bCanThrowMolotovGrenade = false;

	GetWorld()->GetTimerManager().SetTimer(MolotovGrenadeCooldownTimer, [this]()
		{
			ResetCooldown(&bCanThrowMolotovGrenade, CurrentMolotovCooldown, MolotovGrenadeCooldown);
		}, SmokeGrenadeCooldown, false);
}
void AStreamline_TestCharacter::ResetCooldown(bool* bCanThrow, float& CurrentCooldown, float& Cooldown)
{
	if (bCanThrow)
	{
		*bCanThrow = true;
		CurrentCooldown = Cooldown;
		UE_LOG(LogTemp, Display, TEXT("Grenade cooldown reset."));
	}
}
void AStreamline_TestCharacter::CreateLight()
{
	if (!DynamicLight)
	{
		// Crear dinámicamente el componente de luz
		DynamicLight = NewObject<UPointLightComponent>(this);
		if (DynamicLight)
		{
			DynamicLight->RegisterComponent();
			DynamicLight->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);

			// Configurar la luz
			DynamicLight->SetIntensity(LightIntensity); // Intensidad de la luz
			DynamicLight->SetLightColor(LightColor); // Color de la luz
			APlayerController* PlayerController = Cast<APlayerController>(GetController());
			if (PlayerController)
			{
				FRotator CameraRotation = PlayerController->GetControlRotation(); // Rotación de la cámara
				FVector ForwardVector = CameraRotation.Vector(); // Dirección hacia adelante
				FVector LightWorldPosition = GetActorLocation() + (ForwardVector * LightDistance);

				// Posicionar la luz en el frente
				DynamicLight->SetWorldLocation(LightWorldPosition);
			}
		}
	}
}
void AStreamline_TestCharacter::DestroyLight()
{
	if (DynamicLight)
	{
		// Destruir el componente de luz
		DynamicLight->DestroyComponent();
		DynamicLight = nullptr;
	}
}
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
float AStreamline_TestCharacter::GetDashCooldown() const
{
	return CurrentDashCooldown;
}

float AStreamline_TestCharacter::GetSmokeCooldown() const
{
	return CurrentSmokeCooldown;
}

float AStreamline_TestCharacter::GetMolotovCooldown() const
{
	return CurrentMolotovCooldown;
}
