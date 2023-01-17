// Fill out your copyright notice in the Description page of Project Settings.


#include "Friend_Paddlick.h"
#include "Publisher.h"
#include "Paddle.h"
#include "Dementor.h"
#include "Materials/MaterialInterface.h"

// Sets default values
AFriend_Paddlick::AFriend_Paddlick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh>Padd(TEXT("StaticMesh'/Game/Meshes/SM_Paddle.SM_Paddle'"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface>PaddMat(TEXT("MaterialInstanceConstant'/Game/Materials/M_BrickBlue.M_BrickBlue'"));

	PaddlickMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Paddlickmesh"));
	PaddlickMesh->SetStaticMesh(Padd.Object);
	PaddlickMesh->SetMaterial(0, PaddMat.Object);

}

// Called when the game starts or when spawned
void AFriend_Paddlick::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Yellow, FString::Printf(TEXT("Esto sirve??")));
	ourpadle = Cast<APaddle>(GetWorld()->GetFirstPlayerController()->GetPawn());
	if (ourpadle != nullptr) {
		GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Yellow, FString::Printf(TEXT("Se logro mamaguevon")));
	}
}

// Called every frame
void AFriend_Paddlick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//float axxispadlick = ourpadle->axxisvalue;
	GEngine->AddOnScreenDebugMessage(0, 0.f, FColor::Purple, FString::Printf(TEXT("AxisPaddleAmigo: %f"),ourpadle->axxisvalue));

	// Creo la direccion y el vector movimiento
	const FVector MoveDirection = FVector(ourpadle->axxisvalue, 0.0f, 0.f);
	const FVector Movement = MoveDirection * 220.f * DeltaTime;

	if (Movement.SizeSquared() > 0.0f)
	{
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, FRotator::ZeroRotator, true, &Hit);

	}
}

void AFriend_Paddlick::Destroyed()
{
	Super::Destroyed();
	//Log Error if its Clock Tower is NULL
	if (!Dementor) {
		UE_LOG(LogTemp, Error, TEXT("Destroyed():ClockTower is NULL, make sure it's initialized.")); return;
	}
	//Unsubscribe from the Clock Tower if it's destroyed
	Dementor->UnSubscribe(this);
}
void AFriend_Paddlick::Update(APublisher* Publisher)
{
	//Execute the routine
	Morph();
}
void AFriend_Paddlick::Morph() 
{
	//Log Error if its Clock Tower is NULL
	if (!Dementor) {
		UE_LOG(LogTemp, Error, TEXT("Morph():Dementor is NULL, make sure it's initialized.")); 
		return;
	}
	//Get the current report
	FString Report = Dementor->GetReport();

	if (!Report.Compare("Morning"))
	{
		//Execute the Morning routine
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("It is %s, so FreakyAllen makes a bowl of cereal"), *Report));
	}
	else if (!Report.Compare("Midday"))
	{
		//Execute the Midday routine
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("It is %s, so FreakyAllen's right eye starts to twitch"), *Report));
	}
}
void AFriend_Paddlick::SetDementor(ADementor* myDementor)
{
	//Log Error if the passed Clock Tower is NULL
	if (!myDementor) {
		UE_LOG(LogTemp, Error,TEXT("SetClockTower(): myClockTower is NULL, make sure it'sinitialized.")); 
		return; 
	}
	//Set the Clock Tower and Subscribe to that
	Dementor = myDementor;
	Dementor->Subscribe(this);
}
