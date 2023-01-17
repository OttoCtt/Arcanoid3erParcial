// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeneradorCapsulas.h"
#include "InnerGeneradorCapsulas.generated.h"

/**
<<<<<<< HEAD
 *
=======
 * 
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
 */
UCLASS()
class ARCANOID_API AInnerGeneradorCapsulas : public AGeneradorCapsulas
{
	GENERATED_BODY()
<<<<<<< HEAD

=======
	
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
public:
	//Concoct the selected potion
	//virtual APotion* ConcoctPotion(FString PotionSKU) override;
private:
	virtual ACapsula* FabricarCapsula(FString NombreTipoCapsula) override;
<<<<<<< HEAD

=======
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
};
