// Fill out your copyright notice in the Description page of Project Settings.


#include "FactoryMethod_Main.h"
#include "InnerGeneradorCapsulas.h"

// Sets default values
AFactoryMethod_Main::AFactoryMethod_Main()
{
<<<<<<< HEAD
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
=======
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFactoryMethod_Main::BeginPlay()
{
	Super::BeginPlay();
<<<<<<< HEAD

	AGeneradorCapsulas* InnerGeneradorCapsulas = GetWorld()->SpawnActor<AInnerGeneradorCapsulas>(AInnerGeneradorCapsulas::StaticClass());
	ACapsula* Capsula = InnerGeneradorCapsulas->GetCapsula("Arma");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Capsula %s"), *Capsula->GetNombre()));
	Capsula = InnerGeneradorCapsulas->GetCapsula("Dano");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue, FString::Printf(TEXT("Capsula %s"), *Capsula->GetNombre()));
=======
	
	AGeneradorCapsulas* InnerGeneradorCapsulas = GetWorld()->SpawnActor<AInnerGeneradorCapsulas>(AInnerGeneradorCapsulas::StaticClass());
	ACapsula* Capsula = InnerGeneradorCapsulas->GetCapsula("Poder");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue,FString::Printf(TEXT("Capsula %s"), *Capsula->GetNombre()));
	Capsula = InnerGeneradorCapsulas->GetCapsula("Dano");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Blue,FString::Printf(TEXT("Capsula %s"), *Capsula->GetNombre()));
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
	//Capsula = InnerGeneradorCapsulas->GetCapsula("Dano2");
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red, FString::Printf(TEXT("Capsula %s"), *Capsula->GetNombre()));
}

// Called every frame
void AFactoryMethod_Main::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

