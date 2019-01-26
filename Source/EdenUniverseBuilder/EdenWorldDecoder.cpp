// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0) ¯\_(ツ)_/¯

// Based on code from Vuenctools for Eden || http://forum.edengame.net/index.php?/topic/295-vuenctools-for-eden-eden-world-manipulation-tool/
// with help from Robert Munafo || http://www.mrob.com/pub/vidgames/eden-file-format.html

#include "EdenWorldDecoder.h"
#include "VoxelTerrainActor.h"
#include "EdenGameInstance.h"
#include "VoxelIndexer.h"
#include "TerrainGenerator.h"
//#include "ThirdParty/zlib/zlib-1.2.5/Inc/zlib.h"
#include "zlib.h"

/** ==============================================================================
  * @desc constructor
  * @param void
  * @return void
  */// ===========================================================================
EdenWorldDecoder::EdenWorldDecoder()
{
}

/** ==============================================================================
  * @desc constructor
  * @param void
  * @return void
  */// ===========================================================================
EdenWorldDecoder::~EdenWorldDecoder()
{
}

/** ==============================================================================
  * @desc sets up the Indexer and must be run
  * @param void
  * @return bool - success or failure
  */// ===========================================================================
bool EdenWorldDecoder::InitializeWorld()
{
	Logger.Log(TEXT("We are online. Starting world convertion..."), "Info");
	Logger.Log(TEXT("WorldPath: " + WorldPath), "Info");

	VoxelIndexer Indexer;
	Indexer.SetWorldPath(WorldPath);

	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*WorldPath) == false)
	{
		Logger.Log(TEXT("Creating file " + WorldPath), "Info");
		TerrainGenerator Generator;
		Generator.CreateDebugChunk();
		CreateWorldMetadata();
	}
	Logger.Log(TEXT("Loading world data..."), "Info");
	LoadWorldData();
	Logger.Log(TEXT("Geting world metadata..."), "Info");
	GetWorldMetadata();
	return true;
}

/** ==============================================================================
  * @desc sets the current world
  * @param FString $Path - the path to the world file
  * @return bool - success or failure
  */// ===========================================================================
bool EdenWorldDecoder::SetWorldPath(FString Path)
{
	WorldPath = Path;
	return true;
}

/** ==============================================================================
  * @desc reads an binary file at a position into a int32
  * @param int $Position - the position in the file
  * @return TArray<int32> - binary array
  */// ===========================================================================
int32 EdenWorldDecoder::ReadIntFromFile(int Position)
{
	gzFile File;
	File = gzopen(TCHAR_TO_UTF8(*WorldPath), "rb");
	if(File == NULL)
	{
		Logger.Log("Couldn't open input file for reading", "Error");
	}

	gzseek(File, Position, SEEK_SET);

	//void *VoidPointer = nullptr;
	int* IntPointer = new int(0);
	gzread(File, IntPointer, 1);
	//Logger.LogInt("Uncompressed Value: ", *IntPointer, "", "Debug");

	gzclose(File);

	//free( dataReadInCompressed );
	//free( dataUncompressed );

	return *IntPointer;
}

/** ==============================================================================
  * @desc gets the size of the world
  * @param void
  * @return int - file size in bytes
  */// ===========================================================================
int EdenWorldDecoder::GetFileSize()
{
	gzFile File;
	File = gzopen(TCHAR_TO_UTF8(*WorldPath), "rb");
	if(File == NULL)
	{
		Logger.Log("Couldn't open input file for reading", "Error");
	}

	int i = 0;

	while (!(gzeof(File)))
	{
		int* IntPointer = new int(0);
		gzread(File, IntPointer, 1);
		i++;
	}

	gzclose(File);

	//free( dataReadInCompressed );
	//free( dataUncompressed );

	return i;
}

//==============================================================================
// Returns the world name
//==============================================================================
FString EdenWorldDecoder::GetWorldName()
{
	Logger.Log(TEXT("Fetching world name..."), "Debug");
	FString worldName;

	for (int i = 35; i < 35+50; i++)
	{
		worldName += static_cast<char>(ReadIntFromFile(i));
	}
	Logger.Log("World name is:" + worldName, "Info");

	return worldName;
}

//==============================================================================
// Returns the player position
//==============================================================================
FVector EdenWorldDecoder::GetPlayerPosition()
{
	Logger.Log((TEXT("Fetching player position...")), "Info");
	Logger.Log((TEXT("====== World File Header ======")), "Debug");
	for (int i = 0; i < 30; i++)
	{
		Logger.LogInt("", WorldData[i], "", "Debug");
	}

	TArray<float> FWorldData;
	//////////////!!!!!!!!!!IMPORTANT:  note "rb" NOT just "r".
	gzFile File;
	File = gzopen(TCHAR_TO_UTF8(*WorldPath), "rb");
	if(File == NULL)
	{
		Logger.Log("Couldn't open input file for reading", "Error");
	}

	//gzseek(File, Position, SEEK_SET);

	//float* FloatPointer = new float(0.f);

	float MyInteger;
	float* IntPointer = &MyInteger;
	// Reinterpret the pointer for the Read function
	uint8* ByteBuffer = reinterpret_cast<uint8*>(IntPointer);

	//void *VoidPointer = nullptr;
	for (int i = 0; i < 10; i++)
	{
		gzread(File, ByteBuffer, 4);
		FWorldData.Add(MyInteger);
	}

	gzclose(File);

	//free( dataReadInCompressed );
	//free( dataUncompressed );

        float x = (FWorldData[1] - 64000) * 100;
	float y = (FWorldData[3] - 64000) * 100;
	float z = FWorldData[2] * 100;

	Logger.Log("Spawning player at...", "Info");
	Logger.LogFloat("   x: ", x, "", "Info");
	Logger.LogFloat("   y: ", y, "", "Info");
	Logger.LogFloat("   z: ", z, "", "Info");

	FVector Position = FVector(x, y, z);

	return Position;
}

void EdenWorldDecoder::CreateWorldMetadata()
{
	// Write header
}

/** ==============================================================================
  * @desc associate the chunk pos with the address + get world area
  * @param void
  * @return void
  */// ===========================================================================
void EdenWorldDecoder::GetWorldMetadata()
{

	Logger.LogInt("WorldData[35]: ", WorldData[35], "!", "Debug");
	Logger.LogInt("WorldData[34]: ", WorldData[34], "!", "Debug");
	Logger.LogInt("WorldData[33]: ", WorldData[33], "!", "Debug");
	Logger.LogInt("WorldData[32]: ", WorldData[32], "!", "Debug");

	int chunkPointer = ReadIntFromFile(35) * 256 * 256 * 256 + ReadIntFromFile(34) * 256 * 256 + ReadIntFromFile(33) * 256 + ReadIntFromFile(32);
	int worldAreaWidthTemp = 0;
	int worldAreaHeightTemp = 0;

	Logger.LogInt("chunkPointer: ", chunkPointer, "", "Debug");
	Logger.Log(TEXT("World file path is vaid. All systems are go for launch."), "Info");
	do
	{
		// Find chunk address
		// Crashes on this line
		int address = ReadIntFromFile(chunkPointer + 11) * 256 * 256 * 256 + ReadIntFromFile(chunkPointer + 10) * 256 * 256 + ReadIntFromFile(chunkPointer + 9) * 256 + ReadIntFromFile(chunkPointer + 8);

		// Find the position of the chunk
                int x = (ReadIntFromFile(chunkPointer + 1) * 256 + ReadIntFromFile(chunkPointer)) - 4000;     // Minus 4000 to center the world around 0, 0

		int y = (ReadIntFromFile(chunkPointer + 5) * 256 + ReadIntFromFile(chunkPointer + 4)) - 4000; // This shouldn't brake anything

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

                ChunkLocations.Add(address, FVector2D(x, y));

                EdenChunkMetadata TempChunkData {address, x, y};
                ChunkMetadata.Add(TempChunkData);

	} while ((chunkPointer += 16) < GetFileSize());

	Logger.LogInt("Found ", ChunkLocations.Num(), " chunks", "Info");

	// Get the total world width | max - min + 1
	worldAreaWidth = worldAreaWidthTemp - worldAreaX + 1;

	// Get the total world height | max - min + 1
	worldAreaHeight = worldAreaHeightTemp - worldAreaY + 1;
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

					//Logger.LogInt("=== Id: ", Id, " ===", "Debug");
					//Logger.LogInt("Color: ", Color, "", "Debug");
					//Logger.LogFloat("X: ", (x + (globalChunkPosX*16)) * 100, "", "Debug");
					//Logger.LogFloat("Y: ", (y + (globalChunkPosY*16)) * 100, "", "Debug");
					//Logger.LogFloat("Z: ", (z + (16 * baseHeight)) * 100, "", "Debug");

                			if (Id != 0 && Id <= 79 && Id > 0){
						//Logger.Log("Block is valid", "Debug");
                                                EdenChunkData BlockData {Position, Id, Color, chunk};
                                                ChunkData.Add(BlockData);
						//Logger.LogInt("Adding Block ", ChunkData.Num(), "", "Debug");
                			}
					//Logger.LogInt("Chunk data tmp: ", ChunkData.Num(), " blocks", "Debug");
        			}
        		}
        	}
        }
	Logger.LogInt("Chunk data contains ", ChunkData.Num(), " blocks", "Debug");
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

void EdenWorldDecoder::SaveWorld()
{/*
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
        }*/
}

bool EdenWorldDecoder::LoadWorldData()
{
	gzFile File;
	File = gzopen(TCHAR_TO_UTF8(*WorldPath), "rb");
	if(File == NULL)
	{
		Logger.Log("Couldn't open input file for reading", "Error");
	}

	while (!(gzeof(File)))
	{
		int* IntPointer = new int(0);
		gzread(File, IntPointer, 1);
		WorldData.Add(*IntPointer);
	}

	gzclose(File);

	//free( dataReadInCompressed );
	//free( dataUncompressed );

	return true;
}
