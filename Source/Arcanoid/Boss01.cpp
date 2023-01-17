// Fill out your copyright notice in the Description page of Project Settings.


#include "Boss01.h"
#include "Paddle.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

// Sets default values
ABoss01::ABoss01()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABoss01::BeginPlay()
{
	Super::BeginPlay();
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APaddle::StaticClass(), Paddles);
	bg = GetActorLocation();
}

// Called every frame
void ABoss01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*FVector pd = Paddles[0]->GetActorLocation();
	if (Paddles[0]->GetActorLocation().X > dr) {
		drr = 1;
	}
	else
	{
		drr=-1;
	}
	dr = pd.X;
	mae = GetActorLocation().X;*/
	// Find movement direction
	//const int RightValue = 1;
	RightValue = FMath::Cos(GetWorld()->GetTimeSeconds());

	const FVector MoveDirection = FVector(RightValue, 0.f, 0.f);

	// Calculate  movement
	const FVector Movement = MoveDirection * 120.f * DeltaTime;

	// If non-zero size, move this actor
	if (Movement.SizeSquared() > 0.0f)
	{
		const FRotator NewRotation = Movement.Rotation();
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, NewRotation, true, &Hit);

		if (Hit.IsValidBlockingHit())
		{
			const FVector Normal2D = Hit.Normal.GetSafeNormal2D();
			const FVector Deflection = FVector::VectorPlaneProject(Movement, Normal2D) * (1.f - Hit.Time);
			RootComponent->MoveComponent(Deflection, NewRotation, true);
		}
	}
	//dr = Paddles[0]->GetActorLocation().X;
	//SetActorLocation(FVector(dr, bg.Y, bg.Z));
}

// Called to bind functionality to input
void ABoss01::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABoss01::BossCharacteristics()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("%s "), *Velocidad_Movimiento));
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("%s "), *Resistencia_Vida));
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("%s "), *SistemaRotacion));
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Red, FString::Printf(TEXT("%s "), *SistemaEscudo));
}

