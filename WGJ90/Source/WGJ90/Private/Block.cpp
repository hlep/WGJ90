// Fill out your copyright notice in the Description page of Project Settings.

#include "Block.h"
#include "Engine/World.h"
#include "../Public/Block.h"


// Sets default values
ABlock::ABlock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABlock::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (IsInstalling)
	{
		if ((GetWorld()->GetTimeSeconds()) - InstallTime > 5.0) 
		{
			IsInstalled = true;
		}
	}
}

//this architecture looks awful

void ABlock::StartInstalling()
{
	InstallTime = GetWorld()->GetTimeSeconds();
	IsInstalling = true;
}

void ABlock::InstallingBroken()
{
	InstallTime = 0;
	IsInstalling = false;
	IsInstalled = false;
}
