// Fill out your copyright notice in the Description page of Project Settings.

#include "TKCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


// Sets default values
ATKCharacter::ATKCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create Spring Arm Component Object and attach it to Root Component
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
	SpringArm->SetupAttachment(GetMesh());
	SpringArm->SetRelativeLocation(FVector(0.f, 0.f, 100.f));
	SpringArm->TargetArmLength = 300.0f;
	SpringArm->bEnableCameraLag = true;

	// Create Third Person Camera and attach it to the Spring Arm Component
	ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>("ThirdPersonCamera");
	ThirdPersonCamera->SetupAttachment(SpringArm);
	ThirdPersonCamera->bUsePawnControlRotation = true;

}

// Called when the game starts or when spawned
void ATKCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATKCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATKCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Forward", this, &ATKCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &ATKCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ATKCharacter::Turn);
	PlayerInputComponent->BindAxis("LookUp", this, &ATKCharacter::LookUp);

	//bUseControllerRotationPitch = true;
	//bUseControllerRotationRoll = true;
}

void ATKCharacter::MoveForward(float Value)
{
	if (Controller && Value)
	{
		FVector Direction = GetActorForwardVector();
		AddMovementInput(Direction, Value / 2);
	}
}

void ATKCharacter::MoveRight(float Value)
{
	if (Controller && Value)
	{
		FVector Direction = GetActorRightVector();
		AddMovementInput(Direction, Value / 2);
	}
}

void ATKCharacter::Turn(float Value)
{
	AddControllerYawInput(Value);
}

void ATKCharacter::LookUp(float Value)
{
	AddControllerPitchInput(Value);
}
