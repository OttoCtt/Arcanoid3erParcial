// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ScoreCrewMember.h"
#include "ScoreEnergy.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API AScoreEnergy : public AScoreCrewMember
{
	GENERATED_BODY()
	
public:
	AScoreEnergy();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int32 PaddEnergy;

	virtual void AddScore() override;
};
