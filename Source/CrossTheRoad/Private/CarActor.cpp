#include "CarActor.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PlayerCharacter.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
ACarActor::ACarActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	

	//Basic mesh and collision
	CarMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CarMesh"));
	RootComponent = CarMesh;

	CollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	CollisionBox->SetupAttachment(CarMesh);



	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACarActor::PlayerOverlap);

}

// Called when the game starts or when spawned
void ACarActor::BeginPlay()
{
	Super::BeginPlay();

	CollisionBox->OnComponentBeginOverlap.AddDynamic(this, &ACarActor::PlayerOverlap);
	

}

void ACarActor::SetEndPoint(FVector NewTarget)
{
	EndPoint = NewTarget;
	HasPoint = true;
}

// Called every frame
void ACarActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (HasPoint)
	{
		FVector CurrentLocation = GetActorLocation();
		FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, EndPoint, DeltaTime, Speed);

		SetActorLocation(NewLocation);

		float Distance = FVector::Dist(CurrentLocation, EndPoint);
		if (Distance < 0.1f)
		{
			Destroy();

		}
	}
}

// CarOverlap
void ACarActor::PlayerOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,	const FHitResult& SweepResult)
{
	if (OtherActor && OtherActor->IsA(APlayerCharacter::StaticClass()))
	{
		UE_LOG(LogTemp, Warning, TEXT("Player hit by car!"));
		UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, false);

	}
}

