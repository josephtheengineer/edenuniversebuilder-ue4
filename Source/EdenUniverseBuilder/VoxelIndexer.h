// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0)

#pragma once

#include "CoreMinimal.h"
#include "EdenWorldDecoder.h"
#include <map>

struct LocationStruct {
        int id;
        int chunk;
        int index;
};

// The Indexers's job is to store world data in memory so that it can be easily
// accessed and is not used for options, that is the GameInstance's job.
class EDENUNIVERSEBUILDER_API VoxelIndexer
{
public:
	VoxelIndexer();
	~VoxelIndexer();

	//============================================================================
	// Variables
	//============================================================================
	TMap<FVector, int> blockIdIndex;

        TMap<FVector2D, int> chunkIndex;

        TMap<FVector, FVector> BlockLocationIndex;

        UPROPERTY(EditAnywhere)
        bool WorldLoaded = false;

        FString WorldPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()) + "/Worlds/testWorld.eden";

        FString WorldName = "Error";

        FVector StartingPlayerPosition  = FVector(0, 0, 0);

	//============================================================================
	// Functions
	//============================================================================
	void Initialize();
	void RegisterBlock(int id, float x, float y, float z, int chunk, int index);
	int GetBlockId(float x, float y, float z);
        FVector GetBlockLocation(int id, int chunk, int index);
        void RegisterChunk(int chunk, float x, float y, float z);
        void RegisterChunks(TArray<EdenChunkMetadata> Metadata);
        bool CheckBlock(float x, float y, float z);
        bool CheckChunk(int chunk);
        void SetWorldPath(FString Path);
        FString GetWorldPath();
        void SetWorldName(FString Path);
        FString GetWorldName();
        void SetStartingPlayerPosition(FVector Position);
        FVector GetStartingPlayerPosition();
};
