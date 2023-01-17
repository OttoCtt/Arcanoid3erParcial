// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ScoreCrewMember.h"
#include "ScoreBricks.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API AScoreBricks : public AScoreCrewMember
{
	GENERATED_BODY()
	
public:
	AScoreBricks();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void AddScore() override;

	int32 ndbricks;
};
