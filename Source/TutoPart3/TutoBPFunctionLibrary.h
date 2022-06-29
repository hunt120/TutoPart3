// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TutoBPFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class TUTOPART3_API UTutoBPFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, Category = TutoBPLibrary, meta = (WorldContext = "WorldContextObject") )
	static int32 GetNumberOfInstances(UObject* WorldContextObject, TSubclassOf < AActor > ActorClass );	
};
