#include "FinishZoneActor.h"
#include "Components/BoxComponent.h"
#include "PlayerCharacter.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AFinishZoneActor::AFinishZoneActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Collision box and overlap
	EndZoneCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("EndZoneCollision"));
	RootComponent = EndZoneCollision;

	EndZoneCollision->OnComponentBeginOverlap.AddDynamic(this, &AFinishZoneActor::EndGame);

}

// Called when the game starts or when spawned
void AFinishZoneActor::BeginPlay()
{
	Super::BeginPlay();

}

// End Game when finish crossed
void AFinishZoneActor::EndGame(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
			if (OtherActor && OtherActor->ActorHasTag("Player"))
				{
					UE_LOG(LogTemp, Warning, TEXT("Finish reached!"));
					UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, false);
				}
}

// Called every frame
void AFinishZoneActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

