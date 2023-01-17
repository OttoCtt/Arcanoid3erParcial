// Fill out your copyright notice in the Description page of Project Settings.


#include "GeneradorCapsulas.h"

// Sets default values
AGeneradorCapsulas::AGeneradorCapsulas()
{
<<<<<<< HEAD
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
=======
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGeneradorCapsulas::BeginPlay()
{
	Super::BeginPlay();
<<<<<<< HEAD

=======
	
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
}

// Called every frame
void AGeneradorCapsulas::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

ACapsula* AGeneradorCapsulas::GetCapsula(FString TipoCapsula)
{
	//Create the Potion and log its name
	ACapsula* Capsula = FabricarCapsula(TipoCapsula);
<<<<<<< HEAD
	GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Yellow, FString::Printf(TEXT("Desplegando %s"), *Capsula->GetNombre()));
=======
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("frabricando mamaguevos %s"), *Capsula->GetNombre()));
	//Start the concoct process
	Capsula->generar();
	Capsula->cargar();
	Capsula->desplegar();
	Capsula->destruir();
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
	//Returns the created potion
	return Capsula;
}
