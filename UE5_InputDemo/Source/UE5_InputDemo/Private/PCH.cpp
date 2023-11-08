// Fill out your copyright notice in the Description page of Project Settings.


#include "UE5_InputDemo/Public/PCH.h"

#include "GameFramework/CharacterMovementComponent.h"


// Sets default values
APCH::APCH()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APCH::BeginPlay()
{
	Super::BeginPlay();
	GetCharacterMovement()->MaxWalkSpeed = _WalkSpeed;
	
}

// Called every frame
void APCH::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APCH::Move_Implementation(const FInputActionInstance& Instance)
{
	if(Controller != nullptr)
	{
		const FVector2d MoveValue = Instance.GetValue().Get<FVector2d>();
		const FRotator MovementRotation(0, Controller->GetControlRotation().Yaw, 0);

		if(MoveValue.Y != 0.f)
		{
			const FVector Direction = MovementRotation.RotateVector(FVector::ForwardVector);
			AddMovementInput(Direction, MoveValue.Y);
		}
		if(MoveValue.X != 0.f)
		{
			const FVector Direction = MovementRotation.RotateVector(FVector::RightVector);
			AddMovementInput(Direction, MoveValue.X);
		}
	}
}

void APCH::Look_Implementation(const FInputActionInstance& Instance)
{
	if(Controller != nullptr)
	{
		const FVector2d AxisValue = Instance.GetValue().Get<FVector2d>();

		if(AxisValue.Y != 0.f)
		{
			AddControllerPitchInput(AxisValue.Y);
		}
		if(AxisValue.X != 0.f)
		{
			AddControllerYawInput(AxisValue.X);
		}
	}
}

void APCH::Action_Implementation(const FInputActionInstance& Instance)
{
	bool BoolValue = Instance.GetValue().Get<bool>();
	//do some action, if armed shoot, if not or melee?
	//very similar setup for interaction
	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green, TEXT("FIRE!"));
}

void APCH::Sprint_Implementation(const FInputActionInstance& Instance)
{
	const bool BoolValue = Instance.GetValue().Get<bool>();

	Sprinting(BoolValue);
	
}

void APCH::Sprinting(bool isSprinting)
{
	GetCharacterMovement()->MaxWalkSpeed = isSprinting ? _SprintSpeed : _WalkSpeed;
	//handy to setup bools for conditions to be used later on
	bIsSprinting = isSprinting;
}


