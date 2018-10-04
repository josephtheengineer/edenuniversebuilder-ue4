// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BlockTemplate.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlockSpawner.generated.h"

UCLASS()
class EDENUNIVERSEBUILDER_API ABlockSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlockSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Generate a new X
	float generateX(float DeltaSeconds);

	// Keep current alive time
	float currentTime;

	// Holds the new x cord
	float xCord;

	// Hold all of our old spawn locations
	FTransform ourOldSpawnLocation;

	// Hold our spawn location
	FVector ourLoc;

	// Hold the rotation of the object
	FRotator ourRotation;

	// Holds the blueprints of the object to spawn
	UPROPERTY(EditDefaultsOnly, Category = "grass")
	TSubclassOf<ABlockTemplate> grass;

};
