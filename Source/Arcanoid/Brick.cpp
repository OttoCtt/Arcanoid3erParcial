// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Ball.h"
#include "ScoreBricks.h"
#include "InnerGeneradorCapsulas.h"

// Sets default values
ABrick::ABrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Brick(TEXT("StaticMesh'/Game/Meshes/SM_Brick.SM_Brick'"));
	SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick_0"));
	RootComponent = SM_Brick;
	SM_Brick->SetStaticMesh(Brick.Object);
	SM_Brick->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Collision"));
	BoxCollision->SetupAttachment(RootComponent);
	BoxCollision->SetBoxExtent(FVector(25.0f, 10.0f, 10.0f));

	bricktimer = 2.f;
	statebrick = 1.f;

}

// Called when the game starts or when spawned
void ABrick::BeginPlay()
{
	Super::BeginPlay();
	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &ABrick::OnOverlapBegin);
}

void ABrick::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndexType, bool bFromSweet, const FHitResult& SweepResult)
{
	if (OtherActor->ActorHasTag("Ball")) {
		ABall* MyBall = Cast<ABall>(OtherActor);
		FVector BallVelocity = MyBall->GetVelocity();
		BallVelocity *= (SpeedModifierOnBounce - 1.0f);
		MyBall->GetBall()->SetPhysicsLinearVelocity(BallVelocity, true);
		FTimerHandle UnusedHandle;
		GetWorldTimerManager().SetTimer(UnusedHandle, this, &ABrick::DestroyBrick, 0.1f, false);
	}
	if (ownScoreBricks != nullptr) {
		ownScoreBricks->AddScore();
	}
}

void ABrick::DestroyBrick()
{
	InnerGeneradorCapsulas = GetWorld()->SpawnActor<AInnerGeneradorCapsulas>(AInnerGeneradorCapsulas::StaticClass());
	if (!(FMath::RandRange(0, 3))) {
		Capsula = InnerGeneradorCapsulas->GetCapsula("Arma");
		Capsula->SetActorLocation(GetActorLocation());
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("Capsula %s"), *Capsula->GetNombre()));
	}
	else if (!(FMath::RandRange(0, 4))) {
		Capsula = InnerGeneradorCapsulas->GetCapsula("Dano");
		Capsula->SetActorLocation(GetActorLocation());
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("Capsula %s"), *Capsula->GetNombre()));
	}
	else if (!(FMath::RandRange(0, 9))) {
		Capsula = InnerGeneradorCapsulas->GetCapsula("Amigo");
		Capsula->SetActorLocation(GetActorLocation());
		GEngine->AddOnScreenDebugMessage(-1, 1.f, FColor::Blue, FString::Printf(TEXT("Capsula %s"), *Capsula->GetNombre()));
	}
	InnerGeneradorCapsulas->Destroy();
	this->Destroy();
}

// Called every frame
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

