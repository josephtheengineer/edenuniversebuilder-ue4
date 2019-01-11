// Fill out your copyright notice in the Description page of Project Settings. ¯\_(ツ)_/¯

// Based on code from Vuenctools for Eden || http://forum.edengame.net/index.php?/topic/295-vuenctools-for-eden-eden-world-manipulation-tool/
// with help from Robert Munafo || http://www.mrob.com/pub/vidgames/eden-file-format.html

#include "EdenWorldDecoder.h"

#include "VoxelTerrainActor.h"
#include "EdenGameInstance.h"
#include "VoxelIndexer.h"

//==============================================================================
// Constructor
//==============================================================================
EdenWorldDecoder::EdenWorldDecoder()
{

}

//==============================================================================
// This function sets up the Indexer and must be run
//==============================================================================
void EdenWorldDecoder::LoadWorld(FString Path)
{
	UE_LOG(LogTemp,Log,TEXT("We are online. Starting world convertion..."));
	WorldPath = Path;

	// Setup Indexer
	VoxelIndexer Indexer;
	Indexer.SetWorldPath(Path);
	//Indexer.SetWorldName(GetWorldName(Path));
	WorldData = OpenFile(Path);
	GetWorldMetadata();
}

//==============================================================================
// Returns a hex world file to a decimal array
//==============================================================================
std::vector <int32> EdenWorldDecoder::OpenFile(FString Path)
{
	std::vector <int32> worldData;
	UE_LOG(LogTemp,Log,TEXT("Loading file %s"), *Path);
	if(FPaths::FileExists(Path))
	{
		const char *filename = TCHAR_TO_UTF8(*Path);
		unsigned char x;
		std::ifstream input(filename, std::ios::binary);
		input >> std::noskipws;
		while (input >> x)
		{
			// We'll store the hex symbol in decimal format
			worldData.push_back((int)x);
		}

		UE_LOG(LogTemp,Log,TEXT("World file path is vaid. All systems are go for launch."));
	} else {
		UE_LOG(LogTemp,Log,TEXT("World file path is invalid!"));
	}
	return worldData;
}

void EdenWorldDecoder::WriteFile(std::vector <int32> WorldData, FString Path)
{
        std::vector <int32> Data;
/*
        unsigned char X;
	std::ofstream Input(Filename, std::ios::binary);
        Input >> std::noskipws;
        while (Input >> X)
        {
                // We'll store the hex symbol in decimal format
                Data.push_back((int)X);
        }*/
        //return Data;
}

//==============================================================================
// Returns the world name
//==============================================================================
FString EdenWorldDecoder::GetWorldName()
{
	UE_LOG(LogTemp,Log,TEXT("Fetching world name..."));
	FString worldName;

	for (int i = 35; i < 35+50; i++)
	{
		worldName += static_cast<char>(WorldData[i]);
	}

	UE_LOG(LogTemp,Log,TEXT("World name is: %s"), *worldName);

	return worldName;
}

//==============================================================================
// Returns the world name
//==============================================================================
FVector EdenWorldDecoder::GetPlayerPosition()
{
	UE_LOG(LogTemp,Log,TEXT("Fetching player position..."));
	UE_LOG(LogTemp,Log,TEXT("====== World File Header ======"));
	//for (int i = 0; i < WorldData.size(); i++)
	for (int i = 0; i < 30; i++)
	{
		UE_LOG(LogTemp,Log,TEXT("%d"), WorldData[i]);
	}

	std::vector <unsigned char> RawWorldData;
	std::vector <float> WorldPositionData;
	FString Path = WorldPath;
	UE_LOG(LogTemp,Log,TEXT("Loading file %s"), *Path);
	if(FPaths::FileExists(Path))
	{
		const char *filename = TCHAR_TO_UTF8(*Path);
		unsigned char x;
		std::ifstream input(filename, std::ios::binary);
		input >> std::noskipws;
		while (input >> x)
		{
			// We'll store the hex symbol in decimal format
			RawWorldData.push_back(x);
		}

		for(int i = 0; i < 30; i += sizeof(float))
		{
			float f = *((float*)&RawWorldData[i]);
			UE_LOG(LogTemp,Log,TEXT("Float: %f"), f);
			WorldPositionData.push_back(f);
		}



		UE_LOG(LogTemp,Log,TEXT("World file path is vaid. All systems are go for launch."));
	} else {
		UE_LOG(LogTemp,Log,TEXT("World file path is invalid!"));
	}


        float x = (WorldPositionData[1] - 64000) * 100;
	float y = (WorldPositionData[3] - 64000) * 100;
	float z = WorldPositionData[2] * 100;

	UE_LOG(LogTemp,Log,TEXT("Spawning player at..."));
	UE_LOG(LogTemp,Log,TEXT("   x: %f"), x);
        UE_LOG(LogTemp,Log,TEXT("   y: %f"), y);
        UE_LOG(LogTemp,Log,TEXT("   z: %f"), z);

	FVector Position = FVector(x, y, z);

	return Position;
}

//==============================================================================
// Associate the chunk pos with the address + get world area
//==============================================================================
void EdenWorldDecoder::GetWorldMetadata()
{
	int chunkPointer = WorldData[35] * 256 * 256 * 256 + WorldData[34] * 256 * 256 + WorldData[33] * 256 + WorldData[32];
	do
	{
		// Find chunk address
		int address = WorldData[chunkPointer + 11] * 256 * 256 * 256 + WorldData[chunkPointer + 10] * 256 * 256 + WorldData[chunkPointer + 9] * 256 + WorldData[chunkPointer + 8];

		// Find the position of the chunk
                int x = (WorldData[chunkPointer + 1] * 256 + WorldData[chunkPointer]) - 4000;     // Minus 4000 to center the world around 0, 0
		int y = (WorldData[chunkPointer + 5] * 256 + WorldData[chunkPointer + 4]) - 4000; // This shouldn't brake anything

		if (worldAreaX > x){
			worldAreaX = x;
		}
		if (worldAreaY > y){
			worldAreaY = y;
		}

		if (worldAreaWidthTemp < x){
			worldAreaWidthTemp = x;
		}
		if (worldAreaHeightTemp < y){
			worldAreaHeightTemp = y;
		}

		chunkAddress.Add(address);
		chunkPositionX.Add(x);
		chunkPositionY.Add(y);

                ChunkLocations.Add(address, FVector2D(x, y));

                EdenChunkMetadata TempChunkData {address, x, y};
                ChunkMetadata.Add(TempChunkData);

	} while ((chunkPointer += 16) < WorldData.size());

	UE_LOG(LogTemp,Log,TEXT("Chunks size: %d"), ChunkLocations.Num());

	// Get the total world width | max - min + 1
	int worldAreaWidth = worldAreaWidthTemp - worldAreaX + 1;

	// Get the total world height | max - min + 1
	int worldAreaHeight = worldAreaHeightTemp - worldAreaY + 1;
}

//==============================================================================
// Creates the mesh for the current chunk
//==============================================================================
TArray<EdenChunkData> EdenWorldDecoder::GetChunkData(int chunk)
{
        TArray<EdenChunkData> ChunkData;
	//VoxelIndexer Indexer;

	// Grabbing the chunk position
	int32 globalChunkPosX = ChunkLocations[chunk].X;
	int32 globalChunkPosY = ChunkLocations[chunk].Y;

	int realChunkPosX = (globalChunkPosX*16) * 100;
	int realChunkPosY = (globalChunkPosY*16) * 100;

        //int chunk = chunkAddress[i];

        // Gets the staring point for placing blocks in the chunk
        int baseX = (ChunkLocations[chunk].X - worldAreaX) * 16;
        int baseY = (ChunkLocations[chunk].Y - worldAreaY) * 16;

        for (int baseHeight = 0; baseHeight < 4; baseHeight++)
        {
        	for (int x = 0; x < 16; x++)
        	{
        		for (int y = 0; y < 16; y++)
        		{
        			for (int z = 0; z < 16; z++)
        			{
                			int Id = WorldData[chunk + baseHeight * 8192 + x * 256 + y * 16 + z];
                                        int Color = WorldData[chunk + baseHeight * 8192 + x * 256 + y * 16 + z + 4096];

                			float RealX = (x + (globalChunkPosX*16)) * 100;
                			float RealY = (y + (globalChunkPosY*16)) * 100;
                			float RealZ = (z + (16 * baseHeight)) * 100;

                                        FVector Position = FVector(RealX, RealY, RealZ);

                			if (Id != 0 && Id <= 79 && Id > 0){
                                                EdenChunkData BlockData {Position, Id, Color, chunk};
                                                ChunkData.Add(BlockData);
                			}
        			}
        		}
        	}
        }
        return ChunkData;
}

//==============================================================================
// Returns the chunk address attached to the x and y cord of the chunk
//==============================================================================
TArray<EdenChunkMetadata> EdenWorldDecoder::GetChunkMetadata()
{
        return ChunkMetadata;
}

TMap<int, FVector2D> EdenWorldDecoder::GetChunkLocations()
{
        return ChunkLocations;
}
/*
void EdenWorldDecoder::SaveWorld(FString path)
{
        using (FileStream stream = new FileStream(path, FileMode.CreateNew))
        {
                //Write header
                for (int i = 0; i < 192; i++)
                {
                    stream.WriteByte(otherBytes[i]);
                }

                //Write block data
                for (int i = 0; i < ChunkLocations.Num(); i++)
                {
                        // Gets the staring point for placing blocks in the chunk
                        int baseX = (ChunkLocations[chunk].X - worldAreaX) * 16;
                        int baseY = (ChunkLocations[chunk].Y - worldAreaY) * 16;
                        for (int baseHeight = 0; baseHeight < 4; baseHeight++)
                        {
                                for (int mode = 0; mode < 2; mode++) //0 = block types, 1 = colors
                                {
                                        for (int x = 0; x < 16; x++)
                                        {
                                                for (int y = 0; y < 16; y++)
                                                {
                                                        for (int z = 0; z < 16; z++)
                                                        {
                                                                if(mode == 0) //block type
                                                                        stream.WriteByte((byte)this.Map[baseX + x, baseY + y, baseHeight * 16 + z, 0]);
                                                                else //color
                                                                        stream.WriteByte((byte)this.Map[baseX + x, baseY + y, baseHeight * 16 + z, 1]);
                                                        }
                                                }
                                        }
                                }
                        }
                }

                //Write creature bytes + chunk pointers
                for (int i = 192; i < otherBytes.Length; i++)
                {
                    stream.WriteByte(otherBytes[i]);
                }
        }
}*/

//==============================================================================
// Destructor
//==============================================================================
EdenWorldDecoder::~EdenWorldDecoder()
{
}
