// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ScoreCrewMember.generated.h"

UCLASS()
class ARCANOID_API AScoreCrewMember : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AScoreCrewMember();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	//Execute the passed Task
	void Task(const FString& Task);
public:
	
	void bAppearInGame();
	//Execute the passed Tasks
	void Task(const TArray<FString>& Tasks);
protected:
	UPROPERTY()
		class USceneComponent* DummyRoot;
	UPROPERTY()
		class UTextRenderComponent* ScoreText;
public:

	virtual void AddScore();
	/** Returns DummyRoot subobject **/
	FORCEINLINE class USceneComponent* GetDummyRoot() const { return DummyRoot; }
	/** Returns ScoreText subobject **/
	FORCEINLINE class UTextRenderComponent* GetScoreText() const { return ScoreText; }
protected:
	bool bScbrick;
	bool bScenerg;
};
