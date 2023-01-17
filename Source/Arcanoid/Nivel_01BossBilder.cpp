// Fill out your copyright notice in the Description page of Project Settings.


#include "Nivel_01BossBilder.h"
#include "Boss.h"

// Sets default values
ANivel_01BossBilder::ANivel_01BossBilder()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//UWorld* const World = GetWorld();
	//if (World != nullptr)
	//{
	//	FVector SpawnLocation = FVector(200.0f, -200.0f, 60.0f);
	//	FRotator SpawnRotator = FRotator(0.0f, -90.0f, 0.0f);

	//	Boss = World->SpawnActor<ABoss>(SpawnLocation, SpawnRotator);
	//	Boss->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

		//NaveEnemigaEscuadrilla_02 = World->SpawnActor<ANaveEnemigaEscuadrilla_02>(SpawnLocation, SpawnRotator);
		//NaveEnemigaEscuadrilla_02->GetShipMeshComponent()->SetMaterial(0, MaterialMesh.Object);
		//NaveEnemigaEscuadrilla_02->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

		//NaveEnemigaEscuadrilla_03 = World->SpawnActor<ANaveEnemigaEscuadrilla_03>(SpawnLocation, SpawnRotator);
		//NaveEnemigaEscuadrilla_03->GetShipMeshComponent()->SetMaterial(0, MaterialMesh.Object);
		//NaveEnemigaEscuadrilla_03->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);

		//MoveSpeed = 100.0f;
		//MovingTX = 0.0f;
		//MovingTY = 0.0f;

	//}
}

// Called when the game starts or when spawned
void ANivel_01BossBilder::BeginPlay()
{
	Super::BeginPlay();

	//Spawn the Lodging Actors
	Boss = GetWorld()->SpawnActor<ABoss01>(ABoss01::StaticClass());

	//Attach it to the Builder (this)
	Boss->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
}

// Called every frame
void ANivel_01BossBilder::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ANivel_01BossBilder::BuildVelocidad_Movimiento()
{
	if (!Boss)
	{
		UE_LOG(LogTemp, Warning, TEXT("BuildVelocidad_Movimiento(): BossNivel_01 es NULL, inicializar correctamente esta clase"));
	}
	Boss->SetVelocidad_Movimiento("locidad Movimiento BossNivel_01");
}

void ANivel_01BossBilder::BuildResistencia_Vida()
{
	if (!Boss)
	{
		UE_LOG(LogTemp, Warning, TEXT("BuildResistencia_Vida(): BossNivel_01 es NULL, inicializar correctamente esta clase"));
	}

	Boss->SetResistencia_Vida("Resistencia Vida BossNivel_01");
}

void ANivel_01BossBilder::BuildSistemaRotacion()
{
	if (!Boss)
	{
		UE_LOG(LogTemp, Warning, TEXT("BuildSistemaRotacion(): BossNivel_01 es NULL, inicializar correctamente esta clase"));
	}

	Boss->SetSistemaRotacion("Sistema Rotacion BossNivel_01");
}

void ANivel_01BossBilder::BuildSistemaEscudo()
{
	if (!Boss)
	{
		UE_LOG(LogTemp, Warning, TEXT("BuildSistemaEscudo(): BossNivel_01 es NULL, inicializar correctamente esta clase"));
	}

	Boss->SetSistemaEscudo("Sistema Escudo BossNivel_01");
}

ABoss01* ANivel_01BossBilder::GetBoss()
{
	return Boss;
}

