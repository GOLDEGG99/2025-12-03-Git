// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WWBActor.generated.h"

UCLASS()
class GIT_API AWWBActor : public AActor
{
	GENERATED_BODY()
	
public:	
	AWWBActor();

protected:
	virtual void BeginPlay() override;
};
