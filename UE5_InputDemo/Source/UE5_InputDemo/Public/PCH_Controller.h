// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputMappingContext.h"
#include "GameFramework/PlayerController.h"
#include "PCH_Controller.generated.h"

class UIADataConfig;

UCLASS()
class UE5_INPUTDEMO_API APCH_Controller : public APlayerController
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APCH_Controller();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category=InputMapping)
	TSoftObjectPtr<UInputMappingContext>_InputMapping;

	UPROPERTY()
	TObjectPtr<AActor> _LocalPCH;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly,Category=InputMapping)
	TSoftObjectPtr<UIADataConfig> _InputActions;

	virtual void SetupInputComponent() override;

	//add controller action methods
	void CAM_Move(const FInputActionInstance& Instance);
	void CAM_Look(const FInputActionInstance& Instance);
	void CAM_Action(const FInputActionInstance& Instance);
	void CAM_Sprint(const FInputActionInstance& Instance);
};
