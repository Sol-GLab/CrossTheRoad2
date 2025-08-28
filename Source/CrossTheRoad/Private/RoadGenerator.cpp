#include "RoadGenerator.h"
#include "RoadActor.h"
#include "SafeRoadActor.h"
#include "Engine/World.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ARoadGenerator::ARoadGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ARoadGenerator::BeginPlay()
{
	Super::BeginPlay();
	
	
    for (int i = 0; i < NumberOfRoads; i++)
    {
        // Logic for spawning roads (no more the 1 safe road in a row and no more then 3 roads in a row) 
        // Should be here



        //Roads randomiser
        bool Random = FMath::RandBool();
        TSubclassOf<ARoadActor> RandomSpawn = Random ? Road : SafeRoad;
        ARoadActor* RoadsSpawn = nullptr;

        //Road Gen
        if (RandomSpawn)
        {
            FVector Location = GetActorLocation() + (Direction * Distance * i);
            FTransform Spawn(Location);
            RoadsSpawn = GetWorld()->SpawnActor<ARoadActor>(RandomSpawn, Spawn);

        }

        if (RoadsSpawn) 
        {
            RoadsCounter.Add(RoadsSpawn);
            UE_LOG(LogTemp, Warning, TEXT("Road Spawned!"));
        }

        else
        {
            UE_LOG(LogTemp, Warning, TEXT("Road didn't spawn!"));

        }

    }

}

// Called every frame
void ARoadGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

