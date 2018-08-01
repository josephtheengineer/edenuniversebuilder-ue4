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

	//==============================================================================
	// Functions
	//==============================================================================

	vector <int> OpenFile(const char *filename);

	FString GetWorldName(vector <int> bytes);

	void CreateChunkMap(vector <int> worldData, int chunkPointer);

	void GetChunkInfo(int chunk);

	void LoadBlocks();

	// Load a material from the corresponding path
	UFUNCTION(BlueprintCallable, Category = "Asset Loading")
	UMaterialInterface * LoadMaterialReference(const FString& materialPath);

	//==============================================================================
	// Variables
	//==============================================================================
	map<int, int> chunksX;
	map<int, int> chunksY;

	// Get the min X value by finding the last value in chunks
	int worldAreaX = 0;

	// Get the min Y value by finding the last value in chunks
	int worldAreaY = 0;

	int worldAreaWidthTemp = 0;
	int worldAreaHeightTemp = 0;

	map<vector<int>, int> blocks;

	TArray<int32> chunkAddress;
	TArray<FString> chunkPosition;

	TArray<FString> chunkFinal;
	vector <int> bytes;

	UPROPERTY()
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	class UInstancedStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	class UMaterialInterface* grass;

	UPROPERTY(EditAnywhere)
	class UMaterialInterface* dirt;

	//UPROPERTY()
	//class UBoxComponent* MyBoxComponent;

	//UFUNCTION(BlueprintCallable, Category="Components|InstancedStaticMesh")
	//virtual void AddInstance(const FTransform& InstanceTransform);

	struct blockData
	{

	int id;    /* The block type, as a value found in the blocks[] chunk */

	FString longname; /* Human-readable name */

	UMaterialInterface* dirt;

	};

	// Add StaticMeshComponent
	UPROPERTY()
	UInstancedStaticMeshComponent* ISMComp;

	UPROPERTY()
	UStaticMesh* SMAsset_Cube;
};
