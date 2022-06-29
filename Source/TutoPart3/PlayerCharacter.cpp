// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "PlayerProjectile.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	if(CurrentProjectileClass == nullptr && ProjectileClasses.Num() > 0)
	{
		CurrentProjectileClass = ProjectileClasses[0];
	}	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APlayerCharacter::MoveForward(float Value)
{
  AddMovementInput(GetActorForwardVector(), Value);
}

void APlayerCharacter::MoveRight(float Value)
{
  AddMovementInput(GetActorRightVector(), Value);
}

void APlayerCharacter::ChangeProjectile()
{
	IndexProjectileClass++;
	
	if(IndexProjectileClass == ProjectileClasses.Num()) 
	{
		IndexProjectileClass = 0;
	}
	
	CurrentProjectileClass = ProjectileClasses[IndexProjectileClass];
}

