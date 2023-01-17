// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"

class UFloatingPawnMovement;
class UBoxComponent;

UCLASS()
class ARCANOID_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddle();
	//The instance of this Class
	UPROPERTY()
		APaddle* Instance;

	UPROPERTY()
	class ADementor* onwnermelon;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Paddle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UBoxComponent* BoxCollision;

	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly)
		UFloatingPawnMovement* FloatingMovement;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult);

	class ABall* ball;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void MoveHorizontal(float AxisValue);

	UPROPERTY()
		class UInventoryComponent* InventarioJugador;
	UFUNCTION()
		void TakeItem(class ACapsula* _InventoryItem);
	/*UFUNCTION()
		virtual void NotifyHit(class UPrimitiveComponent* MyComp, AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalInpulse, const FHitResult& Hit)override;*/

	int it;
	float axxisvalue;
	void setaxis(float AxisValue);
	float getaxis();
};
