// Fill out your copyright notice in the Description page of Project Settings.


#include "RpgCharacter.h"

// Sets default values
ARpgCharacter::ARpgCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARpgCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARpgCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ARpgCharacter::MoveForward(const float Value)
{
    if (Value == 0.0f)
        return;

    AddMovementInput(GetActorForwardVector(), Value);
}

void ARpgCharacter::MoveRight(const float Value)
{
    if (Value == 0.0f)
        return;

    AddMovementInput(GetActorRightVector(), Value);
}

void ARpgCharacter::Turn(float Value)
{
    AddControllerYawInput(Value);
}

void ARpgCharacter::LookUp(float Value)
{
    AddControllerPitchInput(Value);
}

