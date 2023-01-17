// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScoreCrewMember.h"
#include "FacadeScoreBoard.generated.h"

UCLASS()
class ARCANOID_API AFacadeScoreBoard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacadeScoreBoard();

private:
	//The Crew list
	TArray<AScoreCrewMember*> Crew;
	//The Tasks to execute
	UPROPERTY()
		TArray<FString> Tasks;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//Execute the tasks for a specific Crew
	void PerformTasks(TArray<AScoreCrewMember*> myCrew, TArray<FString> myTasks);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void ClipOnScreen();

	class AScoreBricks* ScoreBricks;
	class AScoreEnergy* ScoreEnegy;
};
