// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.generated.h"

UCLASS()
class ARCANOID_API ACapsula : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsula();

<<<<<<< HEAD

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

=======
protected:
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
	UPROPERTY()
		class UStaticMeshComponent* CapsulaMesh;
	/** Pointer to white material used on the focused block */
	UPROPERTY()
		class UMaterial* BaseMaterial;

	/** Pointer to blue material used on inactive blocks */
	UPROPERTY()
		class UMaterialInstance* BlueMaterial;

	/** Pointer to orange material used on active blocks */
	UPROPERTY()
		class UMaterialInstance* OrangeMaterial;

<<<<<<< HEAD
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Datos", meta = (AllowPrivateAccess = "true"))
		FString Nombre;
=======
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	FString Nombre;
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
	FString TipoCapsula;
	FString TipoEfecto;
	FString TipoDuracion;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

<<<<<<< HEAD
	virtual void PickUp();
=======
	virtual void generar();
	void cargar();
	virtual void desplegar();
	void destruir();
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8

	FString GetNombre() { return Nombre; }
};
