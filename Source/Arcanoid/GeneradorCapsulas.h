// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Capsula.h"
#include "GeneradorCapsulas.generated.h"

UCLASS()
class ARCANOID_API AGeneradorCapsulas : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGeneradorCapsulas();

<<<<<<< HEAD
	virtual ACapsula* FabricarCapsula(FString NombreTipoCapsula)PURE_VIRTUAL(AGeneradorCapsulas::FabricarCapsula, return nullptr;);
	ACapsula* GetCapsula(FString TipoCapsula);

=======
	virtual ACapsula* FabricarCapsula(FString NombreTipoCapsula)PURE_VIRTUAL(APotionShop::FabricarCapsula, return nullptr;);
	ACapsula* GetCapsula(FString TipoCapsula);
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
