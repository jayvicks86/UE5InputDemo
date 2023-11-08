// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAInterface.h"
#include "GameFramework/Character.h"
#include "PCH.generated.h"

UCLASS()
class UE5_INPUTDEMO_API APCH : public ACharacter, public IIAInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APCH();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Speeds)
	float _WalkSpeed = 200;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Speeds)
	float _SprintSpeed = 700;

	UPROPERTY(BlueprintReadWrite, Category=Speeds)
	bool bIsSprinting = false;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Move_Implementation(const FInputActionInstance& Instance) override;
	virtual void Look_Implementation(const FInputActionInstance& Instance) override;
	virtual void Action_Implementation(const FInputActionInstance& Instance) override;
	virtual void Sprint_Implementation(const FInputActionInstance& Instance) override;

	void Sprinting(bool isSprinting);
};
