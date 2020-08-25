// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"
#include "Components/InputComponent.h"
#include "PlayerCharacter.h"

void AMyPlayerController::BeginPlay()
{
    PlayerCharacter = Cast<APlayerCharacter>(GetPawn());
}

void AMyPlayerController::Tick(float DeltaSeconds)
{

}

void AMyPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    check(InputComponent);

    InputComponent->BindAxis("MoveForward", this, &AMyPlayerController::MoveForward);
    InputComponent->BindAxis("MoveRight", this, &AMyPlayerController::MoveRight);
    InputComponent->BindAction("Jump", IE_Pressed, this, &AMyPlayerController::Jump);
}

void AMyPlayerController::MoveForward(float Value)
{
    //UE_LOG(LogTemp, Warning, TEXT("MoveForward: %f"), Value);
    PlayerCharacter->MoveForward(Value);
}

void AMyPlayerController::MoveRight(float Value)
{
    PlayerCharacter->MoveRight(Value);
}

void AMyPlayerController::Jump()
{
    PlayerCharacter->Jump();
}