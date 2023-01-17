// Fill out your copyright notice in the Description page of Project Settings.


#include "Observer_Main.h"
#include "Dementor.h"
#include "Paddle.h"
#include "Friend_Paddlick.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AObserver_Main::AObserver_Main()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AObserver_Main::BeginPlay()
{
	Super::BeginPlay();
	
	ADementor* Dementor = GetWorld()->SpawnActor<ADementor>(ADementor::StaticClass());
	
	/*AFriend_Paddlick* Friend_Paddlick = GetWorld()->SpawnActor<AFriend_Paddlick>(AFriend_Paddlick::StaticClass());
	Friend_Paddlick->SetDementor(Dementor);

	Dementor->SetReport("Morning");
	Dementor->SetReport("Midday");*/
	APaddle* Paddle = Cast<APaddle>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (Paddle != nullptr) {
		Paddle->onwnermelon = Dementor;
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Orange, FString::Printf(TEXT("Bingou")));
	}
}

// Called every frame
void AObserver_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

