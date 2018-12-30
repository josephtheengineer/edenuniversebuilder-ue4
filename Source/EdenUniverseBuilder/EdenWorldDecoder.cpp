// Fill out your copyright notice in the Description page of Project Settings. ¯\_(ツ)_/¯


#include "EdenWorldDecoder.h"

#include "VoxelTerrainActor.h"

//==============================================================================
// Constructor
//==============================================================================
EdenWorldDecoder::EdenWorldDecoder()
{

}

//==============================================================================
// Main code for the class
//==============================================================================
void EdenWorldDecoder::LoadWorld(const char *path)
{
	UE_LOG(LogTemp,Log,TEXT("We are online. Starting world convertion..."));

	UE_LOG(LogTemp,Verbose,TEXT("Opening file..."));
	//bytes = OpenFile("/home/josephtheengineer/workspace/EdenProject/Engine/Converter/DirectCity.eden");
	bytes = OpenFile(path);

	GetWorldName(bytes);

        GetPlayerPosition(bytes);

	// Nobody really knows how this works
	int chunkPointer = bytes[35] * 256 * 256 * 256 + bytes[34] * 256 * 256 + bytes[33] * 256 + bytes[32];

	GetWorldMetadata(bytes, chunkPointer);
}

//==============================================================================
// Returns a hex world file to a decimal array
//==============================================================================
std::vector <int> EdenWorldDecoder::OpenFile(const char *filename)
{
	UE_LOG(LogTemp,Log,TEXT("Loading file: %s"), filename);
	std::vector <int> worldData;

	unsigned char x;
	std::ifstream input(filename, std::ios::binary);
	input >> std::noskipws;
	while (input >> x)
	{
		// We'll store the hex symbol in decimal format
		worldData.push_back((int)x);
	}

	UE_LOG(LogTemp,Log,TEXT("World file is vaid. All systems are go for launch."));

        ////////////////////////////////////////////////////////
/*
        std::ifstream in(filename, ::std::ios::binary);
        while (in) {
                char c;
                in.get(c);
                if (in) {
                        UE_LOG(LogTemp,Log,TEXT("New int: %d"), int(c));
                }
        }*/
	return worldData;
}

//==============================================================================
// Returns the world name
//==============================================================================
FString EdenWorldDecoder::GetWorldName(std::vector <int> worldData)
{
	UE_LOG(LogTemp,Log,TEXT("Fetching world name..."));
	FString worldName;

	for (int i = 35; i < 35+50; i++)
	{
		worldName += static_cast<char>(worldData[i]);
	}

	UE_LOG(LogTemp,Log,TEXT("World name is: %s"), *worldName);

	return worldName;
}

//==============================================================================
// Returns the world name
//==============================================================================
FVector EdenWorldDecoder::GetPlayerPosition(std::vector <int> worldData)
{
	UE_LOG(LogTemp,Log,TEXT("Fetching player position..."));

        float y = 0.f;
	for (int i = 4; i < 7; i++)
	{
		y += static_cast<float>(worldData[i]);
	}

        float z = 0.f;
        for (int i = 8; i < 11; i++)
        {
                z += static_cast<float>(worldData[i]);
        }

        float x = 0.f;
        for (int i = 12; i < 15; i++)
        {
                x += static_cast<float>(worldData[i]);
        }

        //UE_LOG(LogTemp,Log,TEXT("Var: %s"), *worldName);

	UE_LOG(LogTemp,Log,TEXT("Player position x: %f"), x);
        UE_LOG(LogTemp,Log,TEXT("Player position y: %f"), y);
        UE_LOG(LogTemp,Log,TEXT("Player position z: %f"), z);

	FVector Position = FVector(x, y, z);

	return Position;
}

//==============================================================================
// Associate the chunk pos with the address + get world area
//==============================================================================
void EdenWorldDecoder::GetWorldMetadata(std::vector <int> worldData, int chunkPointer)
{
	do
	{
		// Find chunk address
		int address = worldData[chunkPointer + 11] * 256 * 256 * 256 + worldData[chunkPointer + 10] * 256 * 256 + worldData[chunkPointer + 9] * 256 + worldData[chunkPointer + 8];

		// Find the position of the chunk
                int x = (worldData[chunkPointer + 1] * 256 + worldData[chunkPointer]) - 4000;     // Minus 4000 to center the world around 0, 0
		int y = (worldData[chunkPointer + 5] * 256 + worldData[chunkPointer + 4]) - 4000; // This shouldn't brake anything

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

	} while ((chunkPointer += 16) < worldData.size());

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
                			int Id = bytes[chunk + baseHeight * 8192 + x * 256 + y * 16 + z];
                                        int Color = bytes[chunk + baseHeight * 8192 + x * 256 + y * 16 + z + 4096];

                			float RealX = (x + (globalChunkPosX*16)) * 100;
                			float RealY = (y + (globalChunkPosY*16)) * 100;
                			float RealZ = (z + (16 * baseHeight)) * 100;

                                        FVector Position = FVector(RealX, RealY, RealZ);

                			if (Id != 0 && Id <= 79){
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

//==============================================================================
// Destructor
//==============================================================================
EdenWorldDecoder::~EdenWorldDecoder()
{
}