// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdenWorldDecoder.h"
#include <map>

struct LocationStruct {
        int id;
        int chunk;
        int index;
};

/**
 *
 */
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
};
