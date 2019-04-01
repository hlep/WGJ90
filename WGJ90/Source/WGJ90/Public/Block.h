// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block.generated.h"

UCLASS()
class WGJ90_API ABlock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlock();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void StartInstalling();

	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void InstallingBroken();

	UPROPERTY(EditAnywhere, Category = "Setup")
	bool IsBroken = false;

	UPROPERTY(BlueprintReadOnly, Category = "Gameplay")
	bool IsInstalled = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float InstallTime = 0.0;

	bool IsInstalling = false;
	
};
