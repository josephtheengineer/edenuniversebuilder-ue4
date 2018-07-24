// Fill out your copyright notice in the Description page of Project Settings.

// Based on code from Vuenctools for Eden || http://forum.edengame.net/index.php?/topic/295-vuenctools-for-eden-eden-world-manipulation-tool/
// with help from Robert Munafo || http://www.mrob.com/pub/vidgames/eden-file-format.html

#include "WorldConverter.h"

// Sets default values
AWorldConverter::AWorldConverter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldConverter::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp,Log,TEXT("We are online. Starting world convertion..."));

	// Used this to store the map in a raw hex format
	const char *filename = "/home/josephtheengineer/workspace/EdenProject/Engine/Converter/DirectCity.eden";

	unsigned char x;
	std::ifstream input(filename, std::ios::binary);
	input >> std::noskipws;
	while (input >> x)
	{
		// We'll store the hex symbol in decimal format
		bytes.push_back((int)x);
	}

	// Nobody really knows how this works
	int chunkPointerStartIndex = bytes[35] * 256 * 256 * 256 + bytes[34] * 256 * 256 + bytes[33] * 256 + bytes[32];

	vector <char> nameArray;

	UE_LOG(LogTemp,Log,TEXT("Fetching world Name (ASCII)..."));
	for (int i = 35; i < 35+50; i++)
	{
		nameArray.push_back(static_cast<char>(bytes[i]));
	}


	UE_LOG(LogTemp,Log,TEXT("World file is vaid. All systems are go for launch."));

	int currentChunkPointerIndex = chunkPointerStartIndex;

	// Associate the chunk position with the chunk address in the map (chunks)
	do
	{
		// Find chunk address
		int address = bytes[currentChunkPointerIndex + 11] * 256 * 256 * 256 + bytes[currentChunkPointerIndex + 10] * 256 * 256 + bytes[currentChunkPointerIndex + 9] * 256 + bytes[currentChunkPointerIndex + 8];

		// Find the position of the chunk
		int x = bytes[currentChunkPointerIndex + 1] * 256 + bytes[currentChunkPointerIndex];
		int y = bytes[currentChunkPointerIndex + 5] * 256 + bytes[currentChunkPointerIndex + 4];

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

		string position = std::to_string(x) + "|" + std::to_string(y);
		FString positionS = FString::FromInt(x) + "|" + FString::FromInt(y);

		UE_LOG(LogTemp,Log,TEXT("Chunk address: %d"), address);
		UE_LOG(LogTemp,Log,TEXT("Chunk position: %d | %d"), x, y);

		chunkAddress.Add(address);
		chunkPosition.Add(positionS);

		cout << address << ": " << endl;
		cout << x << endl;
		cout << y << endl;

		chunksX[address] = x;
		chunksY[address] = y;
	} while ((currentChunkPointerIndex += 16) < bytes.size());

	UE_LOG(LogTemp,Log,TEXT("Chunks size: %d"), chunksX.size());

	// Get the total world width | max - min + 1
	int worldAreaWidth = worldAreaWidthTemp - worldAreaX + 1;

	// Get the total world height | max - min + 1
	int worldAreaHeight = worldAreaHeightTemp - worldAreaY + 1;

	//vector <int> map = worldAreaWidth * 16, worldAreaHeight * 16, 64, 2;
}

// Used in blueprints
TArray<int32> AWorldConverter::getChunkAddress(){
	return chunkAddress;
}

// Used in blueprints
TArray<FString> AWorldConverter::getChunkPosition(){
	return chunkPosition;
}

// Used in blueprints
TArray<FString> AWorldConverter::GrabChunkInfo(int chunk)
{
	(new FAutoDeleteAsyncTask<PrimeSearchTask>(chunk))->StartBackgroundTask();
	return chunkFinal;
}

// Runs on a different thread
void AWorldConverter::SubTask(int chunk)
{
	UE_LOG(LogTemp,Log,TEXT("Converting chunk %d..."), chunk);
	// Whatever this does
	int baseX = (chunksX[chunk] - worldAreaX) * 16, baseY = (chunksY[chunk] - worldAreaY) * 16;

	for (int baseHeight = 0; baseHeight < 4; baseHeight++)
	{
		for (int x = 16; x > 0; x--)
		{
			for (int y = 16; y > 0; y--)
			{
				for (int z = 16; z > 0; z--)
				{
				// Get block id
				vector<int> id;
				id.push_back(baseX + x);
				id.push_back(baseY + y);
				id.push_back(baseHeight * 16 + z);
				id.push_back(0);

				blocks[id] = bytes[chunk + baseHeight * 8192 + x * 256 + y * 16 + z];
				chunkFinal.Add(FString::FromInt(x) + "|" + FString::FromInt(y) + "|" + FString::FromInt(z));
				chunkFinal.Add(FString::FromInt(bytes[chunk + baseHeight * 8192 + x * 256 + y * 16 + z]));

				// Get block color
				vector<int> color;
				color.push_back(baseX + x);
				color.push_back(baseY + y);
				color.push_back(baseHeight * 16 + z);
				color.push_back(1);

				blocks[color] = bytes[chunk + baseHeight * 8192 + x * 256 + y * 16 + z + 4096];
				}
			}
		}
	}
}

// Port of BlockSpawner::ScanBlocks blueprint
void AWorldConverter::LoadBlocks()
{

}

// Called every frame
void AWorldConverter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
