// JYActor.cpp

#include "JYActor.h"

AJYActor::AJYActor()
{
	PrimaryActorTick.bCanEverTick = false;

}

void AJYActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("AJYActor has begun play."));
}


