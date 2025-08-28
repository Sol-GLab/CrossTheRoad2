#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoadGenerator.generated.h"

class ARoadActor;
class ASafeRoadActor;

UCLASS()
class CROSSTHEROAD_API ARoadGenerator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoadGenerator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Roads Settings
	UPROPERTY(EditAnywhere, Category = "Settings")
	int32 NumberOfRoads;

	UPROPERTY(EditAnywhere, Category = "Settings")
	float Distance;

	UPROPERTY(EditAnywhere, Category = "Settings")
	FVector Direction;

	// Roads variables should be here

	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Road Gen
	UPROPERTY(EditAnywhere, Category = "Settings")
	TSubclassOf<ARoadActor> Road;

	UPROPERTY(EditAnywhere, Category = "Settings")
	TSubclassOf<ARoadActor> SafeRoad;

	//Roads counter
	UPROPERTY()
	TArray<ARoadActor*> RoadsCounter;

};
