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
	void BeginPlay() override;
	void Tick(float DeltaSeconds) override;
	void SetupInputComponent() override;

public:
	void MoveForward(float Value);
	void MoveRight(float Value);
	void Jump();

private:
	UPROPERTY()
	APlayerCharacter* PlayerCharacter;
};
