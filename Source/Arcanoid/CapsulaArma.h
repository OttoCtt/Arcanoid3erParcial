// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Capsula.h"
#include "CapsulaArma.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API ACapsulaArma : public ACapsula
{
	GENERATED_BODY()
	
<<<<<<< HEAD
public:
	// Sets default values for this actor's properties
	ACapsulaArma();
=======
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	//Brew the potion
	virtual void desplegar() override;
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
};
