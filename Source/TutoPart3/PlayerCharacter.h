// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

class APlayerProjectile;

UCLASS()
class TUTOPART3_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = Movement)
	void MoveForward(float Value);
	
	UFUNCTION(BlueprintCallable, Category = Movement)
    void MoveRight(float Value);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
	TSubclassOf<APlayerProjectile> CurrentProjectileClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Projectile)
	TArray< TSubclassOf<APlayerProjectile> > ProjectileClasses;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Projectile)
	int32 IndexProjectileClass;
	
	UFUNCTION(BlueprintCallable, Category = Projectile)
	void ChangeProjectile();
};
