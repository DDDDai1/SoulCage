// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/SoulCagePlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

ASoulCagePlayerController::ASoulCagePlayerController()
{

}

void ASoulCagePlayerController::BeginPlay()
{
	Super::BeginPlay();

	check(SoulCageContext);

	auto* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	check(Subsystem);

	Subsystem->AddMappingContext(SoulCageContext, 0);

	bShowMouseCursor = false;
	FInputModeGameAndUI InputMode;
	SetInputMode(InputMode);
}

void ASoulCagePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	auto* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(InputComponent);

	EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ASoulCagePlayerController::Move);
}

void ASoulCagePlayerController::Move(const FInputActionValue& Value)
{
}

void ASoulCagePlayerController::Look(const FInputActionValue& Value)
{
}
