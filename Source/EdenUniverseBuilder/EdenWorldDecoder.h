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

// The WorldDecoder's job is to read from the world file
// NOT TO STORE IT that is the Indexer's job.
class EDENUNIVERSEBUILDER_API EdenWorldDecoder
{
public:
	EdenWorldDecoder();
	~EdenWorldDecoder();

	//============================================================================
	// Primary Functions
	//============================================================================
	void LoadWorld(FString Path);
	std::vector <int32> OpenFile(FString Path);
        void WriteFile(std::vector <int32> WorldData, FString Path);
	FString GetWorldName();
	void GetWorldMetadata();
        FVector GetPlayerPosition();
	TArray<EdenChunkData> GetChunkData(int chunk);

        //============================================================================
        // Secondary Functions
        //============================================================================
        TArray<EdenChunkMetadata> GetChunkMetadata();
        TMap<int, FVector2D> GetChunkLocations();

	//============================================================================
	// Variables
	//============================================================================
        TArray<EdenChunkMetadata> ChunkMetadata;
        TMap<int, FVector2D> ChunkLocations;

        std::vector <int32> WorldData;
        FString WorldPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()) + "/Worlds/testWorld.eden";

	// Get the min X value by finding the last value in chunks
	int worldAreaX = 0;
	// Get the min Y value by finding the last value in chunks
	int worldAreaY = 0;
	int worldAreaWidthTemp = 0;
	int worldAreaHeightTemp = 0;
	std::map<std::vector<int32>, int> blocks;

	TArray<int32> chunkAddress;
	TArray<int32> chunkPositionX;
	TArray<int32> chunkPositionY;
};
