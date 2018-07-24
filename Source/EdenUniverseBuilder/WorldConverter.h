// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <iostream>
#include <map>
#include <fstream>
#include <vector>
#include "WorldConverter.generated.h"

using namespace std;

UCLASS()
class EDENUNIVERSEBUILDER_API AWorldConverter : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWorldConverter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	TArray<FString> GrabChunkInfo(int32 chunk);

	void SubTask(int32 chunk);

	UFUNCTION(BlueprintCallable)
	TArray<int32> getChunkAddress();

	UFUNCTION(BlueprintCallable)
	TArray<FString> getChunkPosition();

	void LoadBlocks();

	map<int, int> chunksX;
	map<int, int> chunksY;

	// Get the min X value by finding the last value in chunks
	int worldAreaX = 0;

	// Get the min Y value by finding the last value in chunks
	int worldAreaY = 0;

	int worldAreaWidthTemp = 0;
	int worldAreaHeightTemp = 0;

	map<vector<int>, int> blocks;

	vector <int> bytes;

	TArray<int32> chunkAddress;
	TArray<FString> chunkPosition;

	TArray<FString> chunkFinal;
};

class PrimeSearchTask : public FNonAbandonableTask
{
public:

	PrimeSearchTask(int32 _primeCount);

	~PrimeSearchTask();

	FORCEINLINE TStatId GetStatId() const
	{
			RETURN_QUICK_DECLARE_CYCLE_STAT(PrimeSearchTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	int32 PrimeCount;

	void DoWork();

	void DoWorkMain();
};
