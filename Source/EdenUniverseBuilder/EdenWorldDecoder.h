// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <iostream>
#include <map>
#include <fstream>
#include <vector>

struct EdenChunkMetadata {
    int Address;
    int X;
    int Y;
};

struct EdenChunkData {
    FVector Position;
    int Id;
    int Color;
    int Address;
};

class EDENUNIVERSEBUILDER_API EdenWorldDecoder
{
public:
	EdenWorldDecoder();
	~EdenWorldDecoder();

	//============================================================================
	// Functions
	//============================================================================
	void LoadWorld(const char *path);
	std::vector <int> OpenFile(const char *filename);
        std::vector <int> WriteFile(const char *Filename);
	FString GetWorldName(std::vector <int> bytes);
	void GetWorldMetadata(std::vector <int> worldData, int chunkPointer);
	TArray<EdenChunkData> GetChunkData(int chunk);
        FVector GetPlayerPosition(std::vector <int> worldData);
        TArray<EdenChunkMetadata> GetChunkMetadata();
        TMap<int, FVector2D> GetChunkLocations();

	//============================================================================
	// Variables
	//============================================================================
        TArray<EdenChunkMetadata> ChunkMetadata;
        TMap<int, FVector2D> ChunkLocations;

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
};
