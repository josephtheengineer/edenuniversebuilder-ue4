// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "EdenUniverseBuilderCharacter.h"
#include "EdenUniverseBuilderProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

#include "DrawDebugHelpers.h"
#include "VoxelTerrainActor.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AEdenUniverseBuilderCharacter

AEdenUniverseBuilderCharacter::AEdenUniverseBuilderCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->RelativeLocation = FVector(-39.56f, 1.75f, 64.f); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
}

void AEdenUniverseBuilderCharacter::BeginPlay()
{
	// Call the base class
	Super::BeginPlay();
}

//////////////////////////////////////////////////////////////////////////
// Input

void AEdenUniverseBuilderCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	//PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AEdenUniverseBuilderCharacter::OnFire);
        PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AEdenUniverseBuilderCharacter::Raycast);

	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &AEdenUniverseBuilderCharacter::OnResetVR);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AEdenUniverseBuilderCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AEdenUniverseBuilderCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AEdenUniverseBuilderCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AEdenUniverseBuilderCharacter::LookUpAtRate);
}

void AEdenUniverseBuilderCharacter::OnFire()
{

}

void AEdenUniverseBuilderCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void AEdenUniverseBuilderCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnFire();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void AEdenUniverseBuilderCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}

//Commenting this section out to be consistent with FPS BP template.
//This allows the user to turn without using the right virtual joystick

//void AEdenUniverseBuilderCharacter::TouchUpdate(const ETouchIndex::Type FingerIndex, const FVector Location)
//{
//	if ((TouchItem.bIsPressed == true) && (TouchItem.FingerIndex == FingerIndex))
//	{
//		if (TouchItem.bIsPressed)
//		{
//			if (GetWorld() != nullptr)
//			{
//				UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
//				if (ViewportClient != nullptr)
//				{
//					FVector MoveDelta = Location - TouchItem.Location;
//					FVector2D ScreenSize;
//					ViewportClient->GetViewportSize(ScreenSize);
//					FVector2D ScaledDelta = FVector2D(MoveDelta.X, MoveDelta.Y) / ScreenSize;
//					if (FMath::Abs(ScaledDelta.X) >= 4.0 / ScreenSize.X)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.X * BaseTurnRate;
//						AddControllerYawInput(Value);
//					}
//					if (FMath::Abs(ScaledDelta.Y) >= 4.0 / ScreenSize.Y)
//					{
//						TouchItem.bMoved = true;
//						float Value = ScaledDelta.Y * BaseTurnRate;
//						AddControllerPitchInput(Value);
//					}
//					TouchItem.Location = Location;
//				}
//				TouchItem.Location = Location;
//			}
//		}
//	}
//}

void AEdenUniverseBuilderCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AEdenUniverseBuilderCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AEdenUniverseBuilderCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AEdenUniverseBuilderCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

bool AEdenUniverseBuilderCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &AEdenUniverseBuilderCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &AEdenUniverseBuilderCharacter::EndTouch);

		//Commenting this out to be more consistent with FPS BP template.
		//PlayerInputComponent->BindTouch(EInputEvent::IE_Repeat, this, &AEdenUniverseBuilderCharacter::TouchUpdate);
		return true;
	}

	return false;
}

void AEdenUniverseBuilderCharacter::Raycast()
{
        FHitResult* HitResult = new FHitResult();
        FVector StartTrace = FirstPersonCameraComponent->GetComponentLocation();
        FVector ForwardVector = FirstPersonCameraComponent->GetForwardVector();
        FVector EndTrace = (ForwardVector * 5000.f) + StartTrace;
        FCollisionQueryParams* CQP = new FCollisionQueryParams();

        if (GetWorld()->LineTraceSingleByChannel(*HitResult, StartTrace, EndTrace, ECC_Visibility, *CQP))
        {
                DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor(255, 0, 0), true);

                if(HitResult->GetActor() != NULL)
                {
                        int index = HitResult->Item;
                        FVector location = HitResult->Location;
			UE_LOG(LogTemp,Warning,TEXT("Hit result: %d"), index);

                        UE_LOG(LogTemp,Warning,TEXT("X: %f"), location.X);
                        UE_LOG(LogTemp,Warning,TEXT("Y: %f"), location.Y);
                        UE_LOG(LogTemp,Warning,TEXT("Z: %f"), location.Z);

                        //AVoxelTerrainActor TerrainActor;
                        FVector Location(0.0f, 0.0f, 0.0f);
                        FRotator Rotation(0.0f, 0.0f, 0.0f);
                        FActorSpawnParameters SpawnInfo;
                        AVoxelTerrainActor* TerrainActor = GetWorld()->SpawnActor<AVoxelTerrainActor>(Location, Rotation, SpawnInfo);
                        TerrainActor->CreateBlock(13, 0, location.X, location.Y, location.Z);
                        //AVoxelTerrainActor TerrainActor = SpawnActor<AActor>(AVoxelTerrainActor, this, Instigator);
                        //TerrainActor.RemoveBlock(8, 0, index);

                        //HitResult->GetActor()->Destroy();
                }
        }
}
