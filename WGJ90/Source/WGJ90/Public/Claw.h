// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Claw.generated.h"

class UPhysicsHandleComponent;

UCLASS()
class WGJ90_API AClaw : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AClaw();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void Grab();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void MoveRight(float Input);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void MoveUp(float Input);

	UFUNCTION(BlueprintCallable, Category = "Setup")
	void Initialize(UPhysicsHandleComponent* HandleComponentToSet);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPhysicsHandleComponent* HandleComponent = nullptr;
};
