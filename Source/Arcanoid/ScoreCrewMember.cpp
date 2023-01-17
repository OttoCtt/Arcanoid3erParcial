// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreCrewMember.h"

// Sets default values
AScoreCrewMember::AScoreCrewMember()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Dummy0"));
	RootComponent = DummyRoot;
}

// Called when the game starts or when spawned
void AScoreCrewMember::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AScoreCrewMember::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AScoreCrewMember::Task(const FString& Task)
{
	//Checks which task must be executed
	if (Task.Equals("Activate"))
	{
		bAppearInGame();
	}
	else {
		//In case the passed Task doesn't exist
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
			TEXT("Undefined task"));
	}
}

void AScoreCrewMember::bAppearInGame()
{
}

void AScoreCrewMember::Task(const TArray<FString>& Tasks)
{
	//Loop the Tasks array and call the Task() function for each of them
	for (const FString& myTask : Tasks)
	{
		Task(myTask);
	}
}

void AScoreCrewMember::AddScore()
{
}

