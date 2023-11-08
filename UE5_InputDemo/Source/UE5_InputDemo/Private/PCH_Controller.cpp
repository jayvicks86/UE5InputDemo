// Fill out your copyright notice in the Description page of Project Settings.


#include "UE5_InputDemo/Public/PCH_Controller.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "UE5_InputDemo/Public/IADataConfig.h"
#include "UE5_InputDemo/Public/IAInterface.h"


// Sets default values
APCH_Controller::APCH_Controller()
{
	
}

// Called when the game starts or when spawned
void APCH_Controller::BeginPlay()
{
	Super::BeginPlay();

	if(UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		if(!_InputMapping.IsNull())
		{
			Subsystem->ClearAllMappings();
			Subsystem->AddMappingContext(_InputMapping.LoadSynchronous(),0);
		}
	}

	_LocalPCH = GetPawn();
	
}

void APCH_Controller::SetupInputComponent()
{
	Super::SetupInputComponent();
	if(UEnhancedInputComponent* PEI = CastChecked<UEnhancedInputComponent>(InputComponent))
	{
		PEI->BindAction(_InputActions->Move.LoadSynchronous(), ETriggerEvent::Triggered, this, &APCH_Controller::CAM_Move);
		PEI->BindAction(_InputActions->Look.LoadSynchronous(), ETriggerEvent::Triggered, this, &APCH_Controller::CAM_Look);
		PEI->BindAction(_InputActions->Action.LoadSynchronous(), ETriggerEvent::Triggered, this, &APCH_Controller::CAM_Action);
		PEI->BindAction(_InputActions->Sprint.LoadSynchronous(), ETriggerEvent::Triggered, this, &APCH_Controller::CAM_Sprint);
		PEI->BindAction(_InputActions->Sprint.LoadSynchronous(), ETriggerEvent::Completed, this, &APCH_Controller::CAM_Sprint);
	}
}

void APCH_Controller::CAM_Move(const FInputActionInstance& Instance)
{
	IIAInterface::Execute_Move(_LocalPCH, Instance);
}

void APCH_Controller::CAM_Look(const FInputActionInstance& Instance)
{

	IIAInterface::Execute_Look(_LocalPCH, Instance);
}

void APCH_Controller::CAM_Action(const FInputActionInstance& Instance)
{
	IIAInterface::Execute_Action(_LocalPCH, Instance);
}

void APCH_Controller::CAM_Sprint(const FInputActionInstance& Instance)
{
	IIAInterface::Execute_Sprint(_LocalPCH, Instance);
}

