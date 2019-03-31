// Fill out your copyright notice in the Description page of Project Settings.

#include "Claw.h"
#include "../Public/Claw.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"


// Sets default values
AClaw::AClaw()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AClaw::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AClaw::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AClaw::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AClaw::Grab()
{
	UE_LOG(LogTemp, Warning, TEXT("DONKEY: Grab grab!"));
}

void AClaw::MoveRight(float Input)
{
	FMath::Clamp<float>(Input, -1, 1);
	AddMovementInput(GetActorForwardVector(), Input);
}

void AClaw::MoveUp(float Input)
{
	FMath::Clamp<float>(Input, -1, 1);
	AddMovementInput(FVector::UpVector, Input);
}

void AClaw::Initialize(USceneComponent* GrabLocationToSet)
{
	GrabLocation = GrabLocationToSet;
}

