// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0)

#pragma once

#include "CoreMinimal.h"
#include "GenericPlatformFile.h"
#include "PlatformFilemanager.h"
#include "Kismet/GameplayStatics.h"
#include "Debug.h"

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
	TArray<int32> OpenFile(FString Path);
        int32 ReadIntFromFile(int Position);
        int GetFileSize();
        //std::vector <int32> LegacyOpenFile(FString Path);
        void WriteFile(TArray<int32> WorldDataToWrite, FString Path);
	FString GetWorldName();
	void GetWorldMetadata();
        void CreateWorldMetadata();
        FVector GetPlayerPosition();
	TArray<EdenChunkData> GetChunkData(int chunk);
        bool DecompressGZip(const TArray<int32>& CompressedContent, TArray<int32>& UncompressedContent);
        TArray<int32> DecompressBytes(TArray<int32> CompressedBinaryArray);
        int32 DecompressIntFromFile(int Position);
        float DecompressFloatFromFile(int Position);

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

        FString WorldPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()) + "/Worlds/testWorld.eden";

	// Get the min X value by finding the last value in chunks
	int worldAreaX = 0;
	// Get the min Y value by finding the last value in chunks
	int worldAreaY = 0;
	int worldAreaWidthTemp = 0;
	int worldAreaHeightTemp = 0;

	TArray<int32> chunkAddress;
	TArray<int32> chunkPositionX;
	TArray<int32> chunkPositionY;
private:
        Debug Logger;
};
