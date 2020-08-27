// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MyPlayerController.generated.h"

class APlayerCharacter;

/**
 * 
 */
UCLASS()
class GHOSTOFOSHIMA_API AMyPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	virtual void SetupInputComponent() override;

public:
	void MoveForward(float Value);
	void MoveRight(float Value);
	void Jump();
	void Turn(float Value);
	void LookUp(float Value);

private:
	UPROPERTY()
	APlayerCharacter* PlayerCharacter;
};
