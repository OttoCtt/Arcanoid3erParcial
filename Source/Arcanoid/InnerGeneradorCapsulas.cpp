// Fill out your copyright notice in the Description page of Project Settings.


#include "InnerGeneradorCapsulas.h"
#include "CapsulaArma.h"
<<<<<<< HEAD
#include "CapsulaDano.h"
#include "CapsulaPaddleAmigo.h"
=======
#include "CapsulaArma1.h"
#include "CapsulaDano.h"
#include "CapsulaDano1.h"
#include "CapsulaDano2.h"
#include "CapsulaPoder.h"
#include "CapsulaPoder1.h"
#include "CapsulaPoder2.h"
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8

ACapsula* AInnerGeneradorCapsulas::FabricarCapsula(FString NombreTipoCapsula)
{
	if (NombreTipoCapsula.Equals("Arma")) {
		return GetWorld()->SpawnActor<ACapsulaArma>(ACapsulaArma::StaticClass());
	}
<<<<<<< HEAD
	else if (NombreTipoCapsula.Equals("Dano")) {
		return GetWorld()->SpawnActor<ACapsulaDano>(ACapsulaDano::StaticClass());
	}
	else if (NombreTipoCapsula.Equals("Amigo")) {
		return GetWorld()->SpawnActor<ACapsulaPaddleAmigo>(ACapsulaPaddleAmigo::StaticClass());
	}
	else return nullptr;
}
=======
	else if (NombreTipoCapsula.Equals("Arma1")) {
		return GetWorld()->SpawnActor<ACapsulaArma1>(ACapsulaArma1::StaticClass());
	}
	else if (NombreTipoCapsula.Equals("Dano")) {
		return GetWorld()->SpawnActor<ACapsulaDano>(FVector(120.f,0.f,90.f),FRotator(0,0,0));
	}
	else if (NombreTipoCapsula.Equals("Dano1")) {
		return GetWorld()->SpawnActor<ACapsulaDano1>(ACapsulaDano1::StaticClass());
	}
	else if (NombreTipoCapsula.Equals("Dano2")) {
		return GetWorld()->SpawnActor<ACapsulaDano2>(ACapsulaDano2::StaticClass());
	}
	else if (NombreTipoCapsula.Equals("Poder")) {
		return GetWorld()->SpawnActor<ACapsulaPoder>(FVector(-120.f, 0.f, 90.f), FRotator(0, 0, 0));
	}
	else if (NombreTipoCapsula.Equals("Poder1")) {
		return GetWorld()->SpawnActor<ACapsulaPoder1>(ACapsulaPoder1::StaticClass());
	}
	else if (NombreTipoCapsula.Equals("Poder2")) {
		return GetWorld()->SpawnActor<ACapsulaPoder2>(ACapsulaPoder2::StaticClass());
	}
	return nullptr;
}
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
