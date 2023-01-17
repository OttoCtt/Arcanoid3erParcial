// Fill out your copyright notice in the Description page of Project Settings.


#include "FacadeScoreBoard.h"
#include "ScoreBricks.h"
#include "ScoreEnergy.h"

// Sets default values
AFacadeScoreBoard::AFacadeScoreBoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacadeScoreBoard::BeginPlay()
{
	Super::BeginPlay();

	//Initialize the lists
	Crew = TArray<AScoreCrewMember*>();
	Tasks = TArray<FString>();

	ScoreBricks = GetWorld()->SpawnActor<AScoreBricks>(FVector(-180.f,0.f,420.f),FRotator(0.f,90.f,0.f));
	ScoreEnegy = GetWorld()->SpawnActor<AScoreEnergy>(FVector(-180.f, 0.f, 390.f), FRotator(0.f, 90.f, 0.f));

	Crew.Add(ScoreBricks);
	Crew.Add(ScoreEnegy);
	
}

void AFacadeScoreBoard::PerformTasks(TArray<AScoreCrewMember*> myCrew, TArray<FString> myTasks)
{
	//Execute the passed tasks for each crew member
	for (AScoreCrewMember* Member : myCrew)
	{
		//Execute the task
		Member->Task(myTasks);
	}
}

// Called every frame
void AFacadeScoreBoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AFacadeScoreBoard::ClipOnScreen()
{
	//Empty the task list
	Tasks.Empty();
	//Add the task to execute
	Tasks.Add("Activate");
	//Execute the tasks
	PerformTasks(Crew, Tasks);
}

