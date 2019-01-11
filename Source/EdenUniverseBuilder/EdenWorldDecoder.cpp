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
	UE_LOG(LogTemp,Log,TEXT("Geting world metadata..."));
	GetWorldMetadata();
}

TArray<int32> EdenWorldDecoder::OpenFile(FString Path)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	TArray<int32> LWorldData;

	IFileHandle* FileHandle = PlatformFile.OpenRead(*Path);
	if(FileHandle)
	{
		// Create a pointer to MyInteger
		int32 MyInteger;
		int32* IntPointer = &MyInteger;
		// Reinterpret the pointer for the Read function
		uint8* ByteBuffer = reinterpret_cast<uint8*>(IntPointer);

		for (int i = 0; i < FileHandle->Size(); i++)
		{
			FileHandle->Read(ByteBuffer, 1);
			LWorldData.Add(MyInteger);
		}

		// Because ByteBuffer points directly to MyInteger, it's already been updated at this point
		//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("Read integer is %d"), MyInteger);

		// Close the file again
		delete FileHandle;
		UE_LOG(LogTemp,Log,TEXT("World file path is vaid. All systems are go for launch."));
	} else {
		UE_LOG(LogTemp,Log,TEXT("World file path is invalid!"));
	}
	return LWorldData;
}

void EdenWorldDecoder::WriteFile(TArray<int32> WorldDataToWrite, FString Path)
{
        //std::vector <int32> Data;
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
// Returns the player position
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

	// We need to read the world file again.
	// This is because a float is 4 times as big as a char.

	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	FString Path = WorldPath;
	TArray<float> FWorldData;

	IFileHandle* FileHandle = PlatformFile.OpenRead(*Path);
	if(FileHandle)
	{
		// Create a pointer to MyInteger
		float MyInteger;
		float* IntPointer = &MyInteger;
		// Reinterpret the pointer for the Read function
		uint8* ByteBuffer = reinterpret_cast<uint8*>(IntPointer);

		for (int i = 0; i < 30; i++)
		{

			FileHandle->Read(ByteBuffer, 4);
			FWorldData.Add(MyInteger);
		}

		// Because ByteBuffer points directly to MyInteger, it's already been updated at this point
		//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("Read integer is %d"), MyInteger);

		// Close the file again
		delete FileHandle;
		UE_LOG(LogTemp,Log,TEXT("World file path is vaid. All systems are go for launch."));
	} else {
		UE_LOG(LogTemp,Log,TEXT("World file path is invalid!"));
	}

        float x = (FWorldData[1] - 64000) * 100;
	float y = (FWorldData[3] - 64000) * 100;
	float z = FWorldData[2] * 100;

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
	UE_LOG(LogTemp,Log,TEXT("Line 1"));
	UE_LOG(LogTemp,Log,TEXT("WorldData[35]: %d"), WorldData[35]);
	UE_LOG(LogTemp,Log,TEXT("WorldData[34]: %d"), WorldData[34]);
	UE_LOG(LogTemp,Log,TEXT("WorldData[33]: %d"), WorldData[33]);
	UE_LOG(LogTemp,Log,TEXT("WorldData[32]: %d"), WorldData[32]);
	int chunkPointer = WorldData[35] * 256 * 256 * 256 + WorldData[34] * 256 * 256 + WorldData[33] * 256 + WorldData[32];
	UE_LOG(LogTemp,Log,TEXT("chunkPointer: %d"), chunkPointer);
	do
	{
		UE_LOG(LogTemp,Log,TEXT("Line 2"));
		// Find chunk address
		int address = WorldData[chunkPointer + 11] * 256 * 256 * 256 + WorldData[chunkPointer + 10] * 256 * 256 + WorldData[chunkPointer + 9] * 256 + WorldData[chunkPointer + 8];

		// Find the position of the chunk
                int x = (WorldData[chunkPointer + 1] * 256 + WorldData[chunkPointer]) - 4000;     // Minus 4000 to center the world around 0, 0

		int y = (WorldData[chunkPointer + 5] * 256 + WorldData[chunkPointer + 4]) - 4000; // This shouldn't brake anything

		UE_LOG(LogTemp,Log,TEXT("Line 5"));
		if (worldAreaX > x){
			worldAreaX = x;
		}
		UE_LOG(LogTemp,Log,TEXT("Line 6"));
		if (worldAreaY > y){
			worldAreaY = y;
		}

		UE_LOG(LogTemp,Log,TEXT("Line 7"));
		if (worldAreaWidthTemp < x){
			worldAreaWidthTemp = x;
		}
		UE_LOG(LogTemp,Log,TEXT("Line 8"));
		if (worldAreaHeightTemp < y){
			worldAreaHeightTemp = y;
		}

		UE_LOG(LogTemp,Log,TEXT("Line 9"));
		chunkAddress.Add(address);
		UE_LOG(LogTemp,Log,TEXT("Line 9.5"));
		chunkPositionX.Add(x);
		chunkPositionY.Add(y);

		UE_LOG(LogTemp,Log,TEXT("Line 10"));
                ChunkLocations.Add(address, FVector2D(x, y));

		UE_LOG(LogTemp,Log,TEXT("Line 11"));
                EdenChunkMetadata TempChunkData {address, x, y};
		UE_LOG(LogTemp,Log,TEXT("Line 12"));
                ChunkMetadata.Add(TempChunkData);

	} while ((chunkPointer += 16) < WorldData.Num());

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
