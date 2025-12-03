// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PCYActor.generated.h"

UCLASS()
class GIT_API APCYActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APCYActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
