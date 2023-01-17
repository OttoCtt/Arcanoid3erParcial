// Fill out your copyright notice in the Description page of Project Settings.


#include "Dementor.h"

ADementor::ADementor()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
// Called when the game starts or when spawned
void ADementor::BeginPlay()
{
	Super::BeginPlay();
}
// Called every frame
void ADementor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
void ADementor::ReportChanged()
{
	NotifySubscribers();
}
void ADementor::SetReport(FString myReport)
{
	Report = myReport;
	ReportChanged();
}