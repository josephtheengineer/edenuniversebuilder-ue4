// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0) ¯\_(ツ)_/¯

// Based on code from Vuenctools for Eden || http://forum.edengame.net/index.php?/topic/295-vuenctools-for-eden-eden-world-manipulation-tool/
// with help from Robert Munafo || http://www.mrob.com/pub/vidgames/eden-file-format.html

#include "EdenWorldDecoder.h"
#include "VoxelTerrainActor.h"
#include "EdenGameInstance.h"
#include "VoxelIndexer.h"
#include "TerrainGenerator.h"
#include "zlib.h"

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
	VoxelIndexer Indexer;
	TerrainGenerator Generator;
	Logger.Log(TEXT("We are online. Starting world convertion..."), "Info");
	WorldPath = Path;
	Logger.Log(TEXT("WorldPath: " + WorldPath), "Info");
	Indexer.SetWorldPath(Path);
	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*Path) == false)
	{
		Logger.Log(TEXT("Creating file " + Path), "Info");
		Generator.CreateDebugChunk();
		//CreateWorldMetadata();
	}
	Logger.Log(TEXT("Geting world metadata..."), "Info");
	GetWorldMetadata();
}

//==============================================================================
// Reads an entire binary file into a TArray (int32) given a path
//==============================================================================
TArray<int32> EdenWorldDecoder::OpenFile(FString Path)
{
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	TArray<int32> LWorldData;

	IFileHandle* FileHandle = PlatformFile.OpenRead(*Path);
	if(FileHandle)
	{
		int32 MyInteger;
		int32* IntPointer = &MyInteger;
		// Reinterpret the pointer for the Read function
		uint8* ByteBuffer = reinterpret_cast<uint8*>(IntPointer);

		for (int i = 0; i < FileHandle->Size(); i++)
		{
			FileHandle->Read(ByteBuffer, 1);
			LWorldData.Add(MyInteger);
		}
		delete FileHandle;
		Logger.Log(TEXT("World file path is vaid."), "Info");
	} else {
		Logger.Log(TEXT("World file path is invalid!"), "Error");
	}
	return LWorldData;
}

//==============================================================================
// Writes to a file
//==============================================================================
void EdenWorldDecoder::WriteFile(TArray<int32> WorldDataToWrite, FString Path)
{/*
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	TArray<int32> LWorldData;

	IFileHandle* FileHandle = PlatformFile.OpenRead(*Path);
	if(FileHandle)
	{
		int32 MyInteger;
		int32* IntPointer = &MyInteger;
		// Reinterpret the pointer f.or the Read function
		uint8* ByteBuffer = reinterpret_cast<uint8*>(IntPointer);

		for (int i = 0; i < WorldDataToWrite.Num(); i++)
		{
			FileHandle->Write(ByteBuffer, 1);
			LWorldData.Add(MyInteger);
		}
		delete FileHandle;
		Logger.Log(TEXT("World file path is vaid."), "Info");
	} else {
		Logger.Log(TEXT("World file path is invalid!"), "Error");
	}
	return LWorldData;*/
}

//==============================================================================
// Reads an binary file at a position into a int32 given a path
//==============================================================================
int32 EdenWorldDecoder::ReadIntFromFile(int Position)
{
	//Logger.Log(TEXT("World file is " + WorldPath), "Debug");
	/*
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	IFileHandle* FileHandle = PlatformFile.OpenRead(*WorldPath);
	if(FileHandle)
	{
		int32 MyInteger;
		int32* IntPointer = &MyInteger;
		// Reinterpret the pointer for the Read function
		uint8* ByteBuffer = reinterpret_cast<uint8*>(IntPointer);

		FileHandle->Seek(Position);
		FileHandle->Read(ByteBuffer, 1);
		return MyInteger;
		delete FileHandle;
	}
	else
	{
		Logger.Log(TEXT("World file path is invalid!"), "Error");
		return 0;
	}*/
	return DecompressIntFromFile(Position);
}

//==============================================================================
// Gets the file size of the world
//==============================================================================
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
		Logger.LogInt("", ReadIntFromFile(i), "", "Debug");
	}

	// We need to read the world file again.
	// This is because a float is 4 times as big as a char.
/*
	IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();
	TArray<float> FWorldData;

	IFileHandle* FileHandle = PlatformFile.OpenRead(*WorldPath);
	if(FileHandle)
	{
		float MyInteger;
		float* IntPointer = &MyInteger;
		// Reinterpret the pointer for the Read function
		uint8* ByteBuffer = reinterpret_cast<uint8*>(IntPointer);

		for (int i = 0; i < 30; i++)
		{
			FileHandle->Read(ByteBuffer, 4);
			FWorldData.Add(MyInteger);
		}

		// Close the file again
		delete FileHandle;
	} else {
		Logger.Log(TEXT("World file path is invalid!"), "Error");
	}*/

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
/*
	gzFile inFileZ = gzopen("data4.txt", "rb");

	unsigned char unzipBuffer[4];
	gzread(inFileZ, unzipBuffer, 4);
	std::cout<<std::hex<<unzipBuffer<<std::endl;

	stream.next_in = unzipBuffer;
	inflate(&stream, 1);
	float *f = (float *) unzipBuffer;
	printf("%f\n", f);

	z_stream stream;
	gzread(inFileZ, unzipBuffer, 4);
	stream.next_in = unzipBuffer;
	inflate(&stream, 1);
	f = (float *) unzipBuffer;
	printf("%f\n", f);
	gzclose(inFileZ);*/

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

//==============================================================================
// Associate the chunk pos with the address + get world area
//==============================================================================
void EdenWorldDecoder::GetWorldMetadata()
{
	Logger.LogInt("WorldData[35]: ", ReadIntFromFile(35), "!", "Debug");
	Logger.LogInt("WorldData[34]: ", ReadIntFromFile(34), "!", "Debug");
	Logger.LogInt("WorldData[33]: ", ReadIntFromFile(33), "!", "Debug");
	Logger.LogInt("WorldData[32]: ", ReadIntFromFile(32), "!", "Debug");
	// This might be incorrect
	int chunkPointer = ReadIntFromFile(35) * 256 * 256 * 256 + ReadIntFromFile(34) * 256 * 256 + ReadIntFromFile(33) * 256 + ReadIntFromFile(32);
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

		chunkAddress.Add(address);
		chunkPositionX.Add(x);
		chunkPositionY.Add(y);

                ChunkLocations.Add(address, FVector2D(x, y));

                EdenChunkMetadata TempChunkData {address, x, y};
                ChunkMetadata.Add(TempChunkData);

	} while ((chunkPointer += 16) < GetFileSize());

	Logger.LogInt("Found ", ChunkLocations.Num(), " chunks", "Info");

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
                			int Id = ReadIntFromFile(chunk + baseHeight * 8192 + x * 256 + y * 16 + z);
                                        int Color = ReadIntFromFile(chunk + baseHeight * 8192 + x * 256 + y * 16 + z + 4096);

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
// Attempt 1 - returns empty array
//==============================================================================
bool EdenWorldDecoder::DecompressGZip(const TArray<int32>& CompressedContent, TArray<int32>& UncompressedContent)
{
	return FCompression::UncompressMemory(COMPRESS_ZLIB, (void*)UncompressedContent.GetData(), UncompressedContent.Num(), (const void*)CompressedContent.GetData(), CompressedContent.Num(), false, DEFAULT_ZLIB_BIT_WINDOW | 16);
}

//==============================================================================
// Attempt 2 - returns an array with 0's
//==============================================================================
TArray<int32> EdenWorldDecoder::DecompressBytes(TArray<int32> CompressedBinaryArray)
{
	TArray<int32> UncompressedBinaryArray;
	UncompressedBinaryArray.SetNum(CompressedBinaryArray.Num() * 1032);

	//int ret;
	z_stream strm;
	strm.zalloc = Z_NULL;
	strm.zfree = Z_NULL;
	strm.opaque = Z_NULL;

	strm.avail_in = CompressedBinaryArray.Num();
	strm.next_in = (Bytef *)CompressedBinaryArray.GetData();
	strm.avail_out = UncompressedBinaryArray.Num();
	strm.next_out = (Bytef *)UncompressedBinaryArray.GetData();

	// the actual DE-compression work.
	inflateInit(&strm);
	inflate(&strm, Z_FINISH);
	inflateEnd(&strm);

	return UncompressedBinaryArray;
	//return BinaryArrayToFString(UncompressedBinaryArray);
}
/*
//==============================================================================
// Decompresses a file
//==============================================================================
TArray<int32> EdenWorldDecoder::DecompressFile(FString filename)
{
	std::ifstream file;
	file.exceptions(std::ios::failbit | std::ios::badbit);
	file.open(std::string(TCHAR_TO_UTF8(*filename), std::ios_base::in | std::ios_base::binary);

	boost::iostreams::filtering_stream<boost::iostreams::input> decompressor;
	decompressor.push(boost::iostreams::gzip_decompressor());
	decompressor.push(file);

	//And then to decompress line by line:

	for(std::string line; getline(decompressor, line);) {
		// decompressed a line
	}

	//Or entire file into an array:

	//std::vector<char> data(
	//	std::istreambuf_iterator<char>(decompressor)
	//	, std::istreambuf_iterator<char>()
	//);
	TArray<int32> test;
	return test;
}*/

//==============================================================================
// Decompresses a int from a file
//==============================================================================
int32 EdenWorldDecoder::DecompressIntFromFile(int Position)
{
	//////////////!!!!!!!!!!IMPORTANT:  note "rb" NOT just "r".
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

//==============================================================================
// Decompresses a float from a file
//==============================================================================
float EdenWorldDecoder::DecompressFloatFromFile(int Position)
{
	//////////////!!!!!!!!!!IMPORTANT:  note "rb" NOT just "r".
	gzFile File;
	File = gzopen(TCHAR_TO_UTF8(*WorldPath), "rb");
	if(File == NULL)
	{
		Logger.Log("Couldn't open input file for reading", "Error");
	}

	gzseek(File, Position, SEEK_SET);

	//void *VoidPointer = nullptr;
	float* FloatPointer = new float(0.f);
	gzread(File, FloatPointer, 4);

	gzclose(File);

	//free( dataReadInCompressed );
	//free( dataUncompressed );

	return *FloatPointer;
}

//==============================================================================
// Destructor
//==============================================================================
EdenWorldDecoder::~EdenWorldDecoder()
{
}
