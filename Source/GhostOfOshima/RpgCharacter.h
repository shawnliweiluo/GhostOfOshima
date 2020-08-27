// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RpgCharacter.generated.h"

UCLASS()
class GHOSTOFOSHIMA_API ARpgCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ARpgCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	int Hp;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

    void MoveForward(float Value);
    void MoveRight(float Value);
	void Turn(float Value);
	void LookUp(float Value);
};
