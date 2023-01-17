// Fill out your copyright notice in the Description page of Project Settings.


#include "Capsula.h"

// Sets default values
ACapsula::ACapsula()
{
<<<<<<< HEAD
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//CapsulaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CapMesh"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CapMesh(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
	CapsulaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CapMesh"));
	CapsulaMesh->SetStaticMesh(CapMesh.Object);
	CapsulaMesh->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f));
	CapsulaMesh->SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	CapsulaMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	CapsulaMesh->SetMobility(EComponentMobility::Movable);
	CapsulaMesh->SetEnableGravity(false);
	CapsulaMesh->SetSimulatePhysics(false);
	SetActorEnableCollision(true);
=======
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
}

// Called when the game starts or when spawned
void ACapsula::BeginPlay()
{
	Super::BeginPlay();
<<<<<<< HEAD

=======
	
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
}

// Called every frame
void ACapsula::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
<<<<<<< HEAD
	// Creo la direccion y el vector movimiento
	const FVector MoveDirection = FVector(0.0f, 0.0f, -1.f);
	const FVector Movement = MoveDirection * 25.f * DeltaTime;

	if (Movement.SizeSquared() > 0.0f)
	{
		FHitResult Hit(1.f);
		RootComponent->MoveComponent(Movement, FRotator::ZeroRotator, true, &Hit);

	}
}

void ACapsula::PickUp()
{
	Destroy();
=======

}

void ACapsula::generar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,FString::Printf(TEXT("Generando la capsula %s"), *GetNombre()));
}

void ACapsula::cargar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Cargando en partida")));
}

void ACapsula::desplegar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Desplazando")));
}

void ACapsula::destruir()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("Se consumio la capsula")));
>>>>>>> 1bdf070144160bf23fc044ff5b9190e0698a31b8
}

