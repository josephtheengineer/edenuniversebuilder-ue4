// Fill out your copyright notice in the Description page of Project Settings.


#include "VoxelIndexer.h"

#include "VoxelTerrainActor.h"

//==============================================================================
// Constructor
//==============================================================================
VoxelIndexer::VoxelIndexer()
{
}

//==============================================================================
// Destructor
//==============================================================================
VoxelIndexer::~VoxelIndexer()
{
}

//==============================================================================
// Initializer
//==============================================================================
void VoxelIndexer::Initialize()
{
  //
}

//==============================================================================
// Get Block Id
//==============================================================================
int VoxelIndexer::GetBlockId(float x, float y, float z)
{
  return blockIdIndex[FVector(x, y, z)];
}

//==============================================================================
// Get Block
//==============================================================================
FVector VoxelIndexer::GetBlockLocation(int id, int chunk, int index)
{
        return BlockLocationIndex[FVector(id, chunk, index)];
}

//==============================================================================
// Create Block
//==============================================================================
void VoxelIndexer::RegisterBlock(int id, float x, float y, float z, int chunk, int index)
{
        blockIdIndex.Add(FVector(x, y, z), id);

        BlockLocationIndex.Add(FVector(id, chunk, index), FVector(x, y, z));
}

//==============================================================================
// Create Chunk
//==============================================================================
void VoxelIndexer::RegisterChunk(int chunk, float x, float y, float z)
{
        //chunkIndex.Add(FVector(x, y, z), chunk);
}

void VoxelIndexer::RegisterChunks(TArray<EdenChunkMetadata> Metadata)
{
        for (int i = 0; i < Metadata.Num(); i++)
        {
                chunkIndex.Add(FVector2D(Metadata[i].X, Metadata[i].Y), Metadata[i].Address);
        }
}

//==============================================================================
// Check Block
//==============================================================================
bool VoxelIndexer::CheckBlock(float x, float y, float z)
{
        return blockIdIndex.Contains(FVector(x, y, z));
}

//==============================================================================
// Check Chunk Block
//==============================================================================
bool VoxelIndexer::CheckChunk(int chunk)
{
        return false; //chunkIndex.Contains(chunk);
}

void VoxelIndexer::SetWorldPath(FString Path)
{
        WorldPath = Path;
}

FString VoxelIndexer::GetWorldPath()
{
        return WorldPath;
}

void VoxelIndexer::SetWorldName(FString Name)
{
        WorldName = Name;
}

FString VoxelIndexer::GetWorldName()
{
        return WorldName;
}

void VoxelIndexer::SetStartingPlayerPosition(FVector Position)
{
        StartingPlayerPosition = Position;
}

FVector VoxelIndexer::GetStartingPlayerPosition()
{
        return StartingPlayerPosition;
}
