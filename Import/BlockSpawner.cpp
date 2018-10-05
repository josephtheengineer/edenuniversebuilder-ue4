// Fill out your copyright notice in the Description page of Project Settings.

#include "BlockSpawner.h"


// Sets default values
ABlockSpawner::ABlockSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	currentTime = 0.f;
	xCord = 0.f;

	// Set vector and Rototor to zero
	ourRotation.ZeroRotator;
	ourLoc.X = 0.f;
	ourLoc.Y = 100.f;
	ourLoc.Z = 800.f;

}

// Called when the game starts or when spawned
void ABlockSpawner::BeginPlay()
{
	Super::BeginPlay();

	// Debug message
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("We are alive"));

	// gen new x
	//xCord = generateX(5);
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("boi"));
	for (int i = 0; i < 10; i++)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("boi"));

		// set the x location
		ourLoc.X = 0.f + i * 100;

		// Create spawn params
		FActorSpawnParameters spawnParams;

		// Who did the spawn
		spawnParams.Owner = this;

		// Set the instigator to default
		spawnParams.Instigator = Instigator;

		// Spawn the object
		ABlockSpawner* ourNewObject = GetWorld()->SpawnActor<ABlockSpawner>(grass, ourLoc, ourRotation, spawnParams);

		// Debug
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::White, TEXT("We spawned an object"));
	}
}

// Called every frame
void ABlockSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//currentTime = currentTime + 1 * DeltaTime;
	//FString ourString = FString::SanitizeFloat(currentTime);

	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, TEXT("Our Current Time: " + ourString));
	/*
	if (currentTime >= 2.f)
	{
		// gen new x
		xCord = generateX(DeltaTime);

		// set the x location
		ourLoc.X = xCord;

		// Create spawn params
		FActorSpawnParameters spawnParams;

		// Who did the spawn
		spawnParams.Owner = this;

		// Set the instigator to default
		spawnParams.Instigator = Instigator;

		// Spawn the object
		APowerUP_Parent* ourNewObject = GetWorld()->SpawnActor<APowerUP_Parent>(ourSpawningObject, ourLoc, ourRotation, spawnParams);

		// Debug
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::White, TEXT("We spawned an object"));

		currentTime = 0.f;
	}*/

}

// Generate a new number
float ABlockSpawner::generateX(float DeltaSeconds)
{
	float passBack = 0.f;

	passBack = FMath::RandRange(-300, 300);

	passBack = passBack + DeltaSeconds;

	return passBack;
}

