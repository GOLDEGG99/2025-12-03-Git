// Fill out your copyright notice in the Description page of Project Settings.

#include "WWBActor.h"

AWWBActor::AWWBActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AWWBActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("I was here. from JY"))
}


