// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddle.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"
#include "Capsula.h"
#include "Friend_Paddlick.h"
#include "Dementor.h"
#include "InventoryComponent.h"
#include "Ball.h"

// Sets default values
APaddle::APaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Paddle(TEXT("StaticMesh'/Game/Meshes/SM_Paddle.SM_Paddle'"));
	SM_Paddle = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("SM Paddle"));
	SM_Paddle->SetStaticMesh(Paddle.Object);
	RootComponent = SM_Paddle;

	SM_Paddle->SetEnableGravity(false);
	SM_Paddle->SetConstraintMode(EDOFMode::XZPlane);
	SM_Paddle->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	SM_Paddle->SetCollisionProfileName(TEXT("PhisycActor"));

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box_Collision"));
	BoxCollision->SetupAttachment(RootComponent);
	BoxCollision->SetBoxExtent(FVector(32.f,6.f,7.5f));
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &APaddle::OnOverlapBegin);

	FloatingMovement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("Floating Pawn Movement"));
	FloatingMovement->MaxSpeed = 420.f;

	it = 0;

	TArray<AActor*>Instances;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(),APaddle::StaticClass(), Instances);
	if (Instances.Num() > 2)
	{
		//If exist at least one of them, set the instance with the first found one
		Instance = Cast<APaddle>(Instances[0]);
		GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow,
			FString::Printf(TEXT("%s already exists"), *Instance->GetName()));
		//Then Destroy this Actor
		Destroy();
	}
	//UGameplayStatics::GetAllActorsOfClass(GetWorld(), APaddle::StaticClass(), Paddles);
}

// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();
}

void APaddle::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult)
{
	ACapsula* InventoryItem = Cast<ACapsula>(OtherActor);
	if (InventoryItem != nullptr) {
		FString n = InventoryItem->GetNombre();
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, FString::Printf(TEXT("Se consumio :%s"), *n));
		if (n.Equals("CapArma")) {
			ball=GetWorld()->SpawnActor<ABall>(FVector(GetActorLocation().X, 0.f, 25.f), FRotator::ZeroRotator);
			ball->Lauch();
		}
		else if (n.Equals("CapDano")) {
			FloatingMovement->MaxSpeed = 120.f;
		}
		else if (n.Equals("CapPadAmigo")) {
			//aca van las mamaguevadas
			if (onwnermelon != nullptr) {
				AFriend_Paddlick* newfriend = GetWorld()->SpawnActor<AFriend_Paddlick>(AFriend_Paddlick::StaticClass());
				newfriend->SetActorLocation(FVector(GetActorLocation().X - 70.f, 0.f, 20.f));
				newfriend->SetDementor(onwnermelon);

				onwnermelon->SetReport("Morning");
				onwnermelon->SetReport("Midday");
			}
		}
		TakeItem(InventoryItem);
	}
}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APaddle::MoveHorizontal(float AxisValue)
{
	AddMovementInput(FVector(AxisValue , 0.0f, 0.0f), 1.0f, false);
	setaxis(AxisValue);
}

void APaddle::TakeItem(ACapsula* _InventoryItem)
{
	_InventoryItem->PickUp();
}

void APaddle::setaxis(float AxisValue)
{
	axxisvalue = AxisValue;
	it++;
	GEngine->AddOnScreenDebugMessage(-1, 0.f, FColor::Emerald, FString::Printf(TEXT("El AxisValueX es: %f, it: %i"), axxisvalue, it));
}

float APaddle::getaxis()
{
	return axxisvalue;
}

/*void APaddle::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalInpulse, const FHitResult& Hit)
{
	ACapsula* InventoryItem = Cast<ACapsula>(Other);
	if (InventoryItem != nullptr) {
		FString n = InventoryItem->GetNombre();
		if (n.Equals("CapArma")) {
			GetWorld()->SpawnActor<ABall>(FVector(GetActorLocation().X, 0.f, 25.f), FRotator::ZeroRotator);
		}
		else if (n.Equals("CapDano")) {
			FloatingMovement->MaxSpeed = 120.f;
		}
		TakeItem(InventoryItem);
	}
}*/

