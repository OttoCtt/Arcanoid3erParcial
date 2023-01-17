// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Publisher.h"
#include "Dementor.generated.h"

/**
 * 
 */
UCLASS()
class ARCANOID_API ADementor : public APublisher
{
	GENERATED_BODY()
	
public:
	ADementor();
private:
	FString Report;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	void ReportChanged();
	void SetReport(FString myReport);
	FORCEINLINE FString GetReport() { return Report; };
};
