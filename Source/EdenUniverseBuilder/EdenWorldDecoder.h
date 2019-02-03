// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0)

#pragma once

#include "CoreMinimal.h"
#include "GenericPlatformFile.h"
#include "PlatformFilemanager.h"
#include "Kismet/GameplayStatics.h"
#include "Debug.h"
#include "zlib.h"

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
	bool InitializeWorld();
        bool SetWorldPath(FString Path);
        int32 ReadIntFromFile(int Position);
        int GetFileSize();
        void WriteFile(TArray<int32> WorldDataToWrite, FString Path);
	FString GetWorldName();
	bool GetWorldMetadata();
        void CreateWorldMetadata();
        FVector GetPlayerPosition();
	TArray<EdenChunkData> GetChunkData(int chunk);
        //bool LoadWorldData();
        void SaveWorld();
        int GetIntFromStream(gzFile File, int Position);

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

        //TArray<int32> WorldData;
        //int WorldFileSize = 0;

        FString WorldPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()) + "/Worlds/testWorld.eden";

	int worldAreaX = 0;
	int worldAreaY = 0;
        int worldAreaWidth = 0;
        int worldAreaHeight = 0;
private:
        Debug Logger;
};
