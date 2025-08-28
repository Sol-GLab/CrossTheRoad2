#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoadActor.generated.h"

class UStaticMeshComponent;
class UBoxComponent;
class USceneComponent;

UCLASS()
class CROSSTHEROAD_API ARoadActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoadActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Mesh and collision
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "RoadMesh")
	UStaticMeshComponent* RoadMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "CollisionBox")
	UBoxComponent* CollisionBox;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Spawn Points
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SpawnPoint")
	USceneComponent* SpawnPointRight;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "SpawnPoint")
	USceneComponent* SpawnPointLeft;


};
