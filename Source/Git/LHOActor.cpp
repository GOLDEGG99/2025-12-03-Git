// Fill out your copyright notice in the Description page of Project Settings.


#include "LHOActor.h"

// Sets default values
ALHOActor::ALHOActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	UE_LOG(LogTemp, Warning, TEXT("Nuclear Launch Officer Actor Created"));
	UE_LOG(LogTemp, Warning, TEXT("Target Acquisition: Confirmed"));
	UE_LOG(LogTemp, Warning, TEXT("WARNING! This is not a drill"));
	UE_LOG(LogTemp, Warning, TEXT("5min to launch"));
	UL_LOG(LogTemp, Warning, TEXT("3min to launch"));
	UE_LOG(LogTemp, Warning, TEXT("1min to launch"));
	UE_LOG(LogTemp, Warning, TEXT("10 seconds to launch. launch sequence unstoppable"));
	UE_LOG(LogTemp, Warning, TEXT("Launch in 5... 4... 3... 2... 1..."));
	UE_LOG(LogTemp, Warning, TEXT("LAUNCH AUTHORIZED"))
}

// Called when the game starts or when spawned
void ALHOActor::BeginPlay()
{
	Super::BeginPlay();
	
}

