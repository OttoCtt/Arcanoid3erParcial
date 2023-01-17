// Fill out your copyright notice in the Description page of Project Settings.


#include "PaddlePlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"
#include "Engine/World.h"
#include "Paddle.h"
#include "Ball.h"
#include "MenuHUD.h"

APaddlePlayerController::APaddlePlayerController()
{
}

void APaddlePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	EnableInput(this);

	InputComponent->BindAxis("MoveHorizontal", this, &APaddlePlayerController::MoveHorizontal);
	InputComponent->BindAction("Launch", IE_Pressed, this, &APaddlePlayerController::Lanch);

	//Main menu interface
	InputComponent->BindAction("OpenMenu", IE_Pressed, this, &APaddlePlayerController::OpenMenu);

}

void APaddlePlayerController::BeginPlay()
{
	TArray<AActor*>CameraActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), CameraActors);
	FViewTargetTransitionParams Params;
	SetViewTarget(CameraActors[0], Params);
	SpawnNewBall();
}

void APaddlePlayerController::MoveHorizontal(float XAxisValue)
{
	thispad = Cast<APaddle>(GetPawn());
	if (thispad) {
		thispad->MoveHorizontal(XAxisValue);
	}
}

void APaddlePlayerController::Lanch()
{
	MyBall->Lauch();
}

void APaddlePlayerController::OpenMenu()
{
	if (AMenuHUD* MenuHUD = Cast<AMenuHUD>(GetHUD()))
	{
		MenuHUD->ShowMenu();
	}
}

void APaddlePlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!(MyBall->BallLaunched)) {
		MyBall->SetActorLocation(FVector(thispad->GetActorLocation().X, 0.f, 40.f));
	}

}

void APaddlePlayerController::SpawnNewBall()
{
	/*if (!MyBall) {
		MyBall = nullptr;
	}
	if (BallObj) {
		MyBall = GetWorld()->SpawnActor<ABall>(BallObj, SpawnLocation, SpawnRotator, SpawnInfo);
	}*/
	MyBall = GetWorld()->SpawnActor<ABall>(ABall::StaticClass());
}
