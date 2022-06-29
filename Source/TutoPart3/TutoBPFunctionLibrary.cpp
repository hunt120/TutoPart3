// Fill out your copyright notice in the Description page of Project Settings.


#include "TutoBPFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

int32 UTutoBPFunctionLibrary::GetNumberOfInstances(UObject* WorldContextObject, TSubclassOf < AActor > ActorClass )
{
  TArray< AActor* > InstancesFound;

  UGameplayStatics::GetAllActorsOfClass(WorldContextObject, ActorClass, InstancesFound);
 
  return InstancesFound.Num(); 
}
