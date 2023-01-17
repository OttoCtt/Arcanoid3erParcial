// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreEnergy.h"
#include "Components/TextRenderComponent.h"

#define LOCTEXT_NAMESPACE "ScoreBoardArcanoid"
AScoreEnergy::AScoreEnergy()
{
	ScoreText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("ScoreText0"));
	ScoreText->SetText(FText::Format(LOCTEXT("PaddleEnegy", "Energia Paddle: {0}"), FText::AsNumber(0)));
	ScoreText->SetTextRenderColor(FColor::Blue);
	ScoreText->SetupAttachment(RootComponent);
}

void AScoreEnergy::BeginPlay()
{
}

void AScoreEnergy::Tick(float DeltaTime)
{
}
void AScoreEnergy::AddScore()
{
	PaddEnergy++,
		ScoreText->SetText(FText::Format(LOCTEXT("PaddleEnegy", "Energia Paddle: {0}"), FText::AsNumber(PaddEnergy)));
}
#undef LOCTEXT_NAMESPACE