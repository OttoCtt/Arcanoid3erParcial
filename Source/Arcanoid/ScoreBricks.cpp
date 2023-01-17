// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreBricks.h"
#include "Components/TextRenderComponent.h"

#define LOCTEXT_NAMESPACE "ScoreBoardArcanoid"
AScoreBricks::AScoreBricks()
{
	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText0"));
	ScoreText->SetText(FText::Format(LOCTEXT("BricksDestruidos", "Bricks Destruidos: {0}"), FText::AsNumber(0)));
	ScoreText->SetTextRenderColor(FColor::Green);
	ScoreText->SetupAttachment(RootComponent);
}

void AScoreBricks::BeginPlay()
{
}

void AScoreBricks::Tick(float DeltaTime)
{
}
void AScoreBricks::AddScore()
{
	ndbricks++;
	ScoreText->SetText(FText::Format(LOCTEXT("BricksDestruidos", "Bricks Destruidos: {0}"), FText::AsNumber(ndbricks)));
}
#undef LOCTEXT_NAMESPACE