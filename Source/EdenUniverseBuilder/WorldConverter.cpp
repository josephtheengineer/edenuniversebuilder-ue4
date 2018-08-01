// Fill out your copyright notice in the Description page of Project Settings.

// Based on code from Vuenctools for Eden || http://forum.edengame.net/index.php?/topic/295-vuenctools-for-eden-eden-world-manipulation-tool/
// with help from Robert Munafo || http://www.mrob.com/pub/vidgames/eden-file-format.html

#include "WorldConverter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Runtime/Core/Public/Misc/Paths.h"

//==============================================================================
// AWorldConverter::AWorldConverter() | Sets default values
//==============================================================================
AWorldConverter::AWorldConverter()
{
	ISMComp = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("UInstancedStaticMeshComponent"));//NewObject<UInstancedStaticMeshComponent>(this);
  ISMComp->RegisterComponent();
  ISMComp->SetStaticMesh(SMAsset_Cube);
  //ISMComp->SetFlags(RF_Transactional);
	//InstancedStaticMeshComponent->SetStaticMesh(SMAsset_Cube);
  //this->AddInstanceComponent(ISMComp);

	FTransform newT = GetTransform();
	newT.SetLocation(FVector(0,0,0));
	ISMComp->AddInstance(newT);


	//this->GetWorld()->SpawnActor<AActor>(AActor::StaticClass());

/*
	//Attach to component
	InstancedStaticMeshComponent->SetStaticMesh(SMAsset_Cube);

	//Add Core Instance
	FTransform newT = GetTransform();
	newT.SetLocation(FVector(0,0,0));
	InstancedStaticMeshComponent->AddInstance(newT);
*/
	//Scale
	//NewVertex->SetActorRelativeScale3D(CurrentVerticiesScale);
/*
	Mesh = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Mesh"));
	RootComponent = Mesh;

	MyBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));

	MyBoxComponent->SetupAttachment(RootComponent);

	grass = CreateDefaultSubobject<UMaterialInterface>(TEXT("grass material"));

	grass = LoadMaterialReference("MaterialInterface'/Content/Materials/Blocks/MAT_GrassSide.uasset'");

	Mesh->SetMaterial(0, grass);*/
}

UMaterialInterface * AWorldConverter::LoadMaterialReference(const FString& materialPath)
{
		FStringAssetReference assetRef(materialPath);
		return Cast<UMaterialInterface>(assetRef.TryLoad());
}

//==============================================================================
// AWorldConverter::BeginPlay() | Called when the game starts or when spawned
//==============================================================================
void AWorldConverter::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp,Log,TEXT("We are online. Starting world convertion..."));

	bytes = OpenFile("/home/josephtheengineer/workspace/EdenProject/Engine/Converter/DirectCity.eden");

	GetWorldName(bytes);

	// Nobody really knows how this works
	int chunkPointer = bytes[35] * 256 * 256 * 256 + bytes[34] * 256 * 256 + bytes[33] * 256 + bytes[32];

	CreateChunkMap(bytes, chunkPointer);

	LoadBlocks();
}

//==============================================================================
// AWorldConverter::OpenFile() | Returns a hex world file to a decimal array
//==============================================================================
vector <int> AWorldConverter::OpenFile(const char *filename)
{
	UE_LOG(LogTemp,Log,TEXT("Loading file: %s"), filename);
	vector <int> worldData;

	unsigned char x;
	std::ifstream input(filename, std::ios::binary);
	input >> std::noskipws;
	while (input >> x)
	{
		// We'll store the hex symbol in decimal format
		worldData.push_back((int)x);
	}

	UE_LOG(LogTemp,Log,TEXT("World file is vaid. All systems are go for launch."));
	return worldData;
}

//==============================================================================
// AWorldConverter::GetWorldName() | Returns the world name
//==============================================================================
FString AWorldConverter::GetWorldName(vector <int> worldData)
{
	UE_LOG(LogTemp,Log,TEXT("Fetching world Name..."));
	FString worldName;

	for (int i = 35; i < 35+50; i++)
	{
		worldName += static_cast<char>(worldData[i]);
	}

	UE_LOG(LogTemp,Log,TEXT("World name is: %s"), *worldName);
	return worldName;
}

//==============================================================================
// AWorldConverter::CreateChunkMap() | Associate the chunk pos with the address
//==============================================================================
void AWorldConverter::CreateChunkMap(vector <int> worldData, int chunkPointer)
{
	do
	{
		// Find chunk address
		int address = worldData[chunkPointer + 11] * 256 * 256 * 256 + worldData[chunkPointer + 10] * 256 * 256 + worldData[chunkPointer + 9] * 256 + worldData[chunkPointer + 8];

		// Find the position of the chunk
		int x = worldData[chunkPointer + 1] * 256 + worldData[chunkPointer];
		int y = worldData[chunkPointer + 5] * 256 + worldData[chunkPointer + 4];

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
	} while ((chunkPointer += 16) < worldData.size());

	UE_LOG(LogTemp,Log,TEXT("Chunks size: %d"), chunksX.size());

	// Get the total world width | max - min + 1
	int worldAreaWidth = worldAreaWidthTemp - worldAreaX + 1;

	// Get the total world height | max - min + 1
	int worldAreaHeight = worldAreaHeightTemp - worldAreaY + 1;
}

//==============================================================================
// AWorldConverter::GetChunkInfo() | Gets block info for specific blocks
//==============================================================================
void AWorldConverter::GetChunkInfo(int chunk)
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

//==============================================================================
// AWorldConverter::LoadBlocks() | Port of BlockSpawner::ScanBlocks blueprint
//==============================================================================
void AWorldConverter::LoadBlocks()
{/*
	blockData EdenBlockData[] = {

	{0, "air"},
	{1, "bedrock"))}

	};

	UE_LOG(LogTemp,Log,TEXT("BLOCK DATA: %d"), EdenBlockData[0].id);*/
}
