// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <iostream>
#include <map>
#include <fstream>
#include <vector>

struct Data {
    TArray<FVector> Position;
    TArray<int> id;
    TArray<int> chunkId;
    std::map<int, int> chunksX;
};

struct ChunkData {
    TArray<FVector> Position;
    TArray<int> id;
    TArray<int> chunkId;
    std::map<int, int> chunksX;
};


/**
 *
 */
class EDENUNIVERSEBUILDER_API EdenWorldDecoder
{
public:
	EdenWorldDecoder();
	~EdenWorldDecoder();
/*
	typedef struct blockData
	{

	int id;    // The block type, as a value found in the blocks[] chunk

	//FString name; // Human-readable name

	//UInstancedStaticMeshComponent* name;
	string name;

	UMaterialInterface* topMaterial;

	UMaterialInterface* bottomMaterial;

	UMaterialInterface* frontMaterial;

	UMaterialInterface* backMaterial;

	UMaterialInterface* rightMaterial;

	UMaterialInterface* leftMaterial;

	} blockData;
*/

	//============================================================================
	// Functions
	//============================================================================

	Data LoadWorld(const char *path);

	std::vector <int> OpenFile(const char *filename);

	FString GetWorldName(std::vector <int> bytes);

	void CreateChunkMap(std::vector <int> worldData, int chunkPointer);

	// Load a material from the corresponding path
	/*	UFUNCTION(BlueprintCallable, Category = "Asset Loading")
	UMaterialInterface * LoadMaterialReference(const FString& materialPath);*/

	Data CreateMesh(int totalRenderDistance);

        FVector GetPlayerPosition(std::vector <int> worldData);

	//============================================================================
	// Variables
	//============================================================================

	UPROPERTY(EditAnywhere)
	int totalRenderDistanceG = 5;

	//std::vector <UInstancedStaticMeshComponent> MeshArray;

	std::map<int, int> chunksX;
	std::map<int, int> chunksY;

	// Get the min X value by finding the last value in chunks
	int worldAreaX = 0;

	// Get the min Y value by finding the last value in chunks
	int worldAreaY = 0;

	int worldAreaWidthTemp = 0;
	int worldAreaHeightTemp = 0;

	std::map<std::vector<int>, int> blocks;

	TArray<int32> chunkAddress;
	TArray<int32> chunkPositionX;
	TArray<int32> chunkPositionY;

	TArray<FString> chunkFinal;
	std::vector <int> bytes;

	UPROPERTY()
	USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	float render_distance = 2.0;

	UPROPERTY(VisibleAnywhere)
	class UInstancedStaticMeshComponent* Mesh;

	//============================================================================
	// Materials
	//============================================================================

	UPROPERTY(EditAnywhere)
	class UBoxComponent* ChunkBoundary;

	std::map<int32, std::map<int32, UInstancedStaticMeshComponent*>> mesh_array;

	UPROPERTY(EditAnywhere)
	UStaticMesh* SMAsset_Cube;

	TArray<int32> chunks_to_load;

        ChunkData FetchChunkData(float x, float y);
};
