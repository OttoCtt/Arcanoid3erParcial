// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsulaArma.h"

<<<<<<< HEAD
ACapsulaArma::ACapsulaArma()
{
	Nombre = "CapArma";
=======
void ACapsulaArma::BeginPlay()
{
	Super::BeginPlay();

	Nombre = "Capsula arma";
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
	TipoCapsula = "Caja";
	TipoEfecto = "Incrementa las ball";
	TipoDuracion = "Permanente";
}
<<<<<<< HEAD
=======

void ACapsulaArma::desplegar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,TEXT("Generando la capsula arma"));
}
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
