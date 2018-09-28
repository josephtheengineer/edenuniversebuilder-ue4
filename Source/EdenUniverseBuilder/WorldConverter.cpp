// Fill out your copyright notice in the Description page of Project Settings.

// Based on code from Vuenctools for Eden || http://forum.edengame.net/index.php?/topic/295-vuenctools-for-eden-eden-world-manipulation-tool/
// with help from Robert Munafo || http://www.mrob.com/pub/vidgames/eden-file-format.html

#include "WorldConverter.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Core/Public/Misc/Paths.h"

//==============================================================================
// AWorldConverter::AWorldConverter() | Sets default values
//==============================================================================
AWorldConverter::AWorldConverter()
{
}

//==============================================================================
// AWorldConverter::BeginPlay() | Called when the game starts or when spawned
//==============================================================================
void AWorldConverter::BeginPlay()
{
	Super::BeginPlay();

	LoadChunk();
}

//==============================================================================
// AWorldConverter::LoadChunk() | Main code for the class
//==============================================================================
void AWorldConverter::LoadChunk(){
	UE_LOG(LogTemp,Log,TEXT("We are online. Starting world convertion..."));

	UE_LOG(LogTemp,Verbose,TEXT("Opening file..."));
	bytes = OpenFile("/home/josephtheengineer/workspace/EdenProject/Engine/Converter/DirectCity.eden");

	GetWorldName(bytes);

	// Nobody really knows how this works
	int chunkPointer = bytes[35] * 256 * 256 * 256 + bytes[34] * 256 * 256 + bytes[33] * 256 + bytes[32];

	CreateChunkMap(bytes, chunkPointer);

	CreateMesh(0);
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
		int x = (worldData[chunkPointer + 1] * 256 + worldData[chunkPointer    ]) - 4000;
		int y = (worldData[chunkPointer + 5] * 256 + worldData[chunkPointer + 4]) - 4000;

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
// AWorldConverter::CreateMesh() | Creates the mesh for the current chunk
//==============================================================================
void AWorldConverter::CreateMesh(int totalRenderDistance)
{
	int loaded_chunks = 0;
	/* Everything is setup now and we can begin to read from the world file and
	 * place blocks in the world.
	 * The below if statement should go through all chunks in the world.
	 * Probably a bad idea and we should of used a foreach statement instead.
	 */

	int player [2]  = { 0, 0 };
	int sorted_count = 0;


	// Player is at 0(x) 0(y)
	player[0] = 0;
	player[1] = 0;

	//bool again = true;

	for (int i = 0; i < (chunksX.size() - 1); i++)
	{

		// Grabbing the chunk position
		int32 globalChunkPosX = chunkPositionX[i]; // USE CHUNK INDEX *NOT ADDRESS*
		int32 globalChunkPosY = chunkPositionY[i]; // USE CHUNK INDEX *NOT ADDRESS*

		//UE_LOG(LogTemp,Log,TEXT("=== Checking chunk number %d ==="), i);
		//UE_LOG(LogTemp,Log,TEXT("    globalChunkPosX: %d"), globalChunkPosX);
		//UE_LOG(LogTemp,Log,TEXT("    globalChunkPosY: %d"), globalChunkPosY);

		// =========== RENDER DISTANCE ALGORITHM ===========

    //vector<int> current_chunk = chunks[address[i]];

    // Convert to positive number
    if(globalChunkPosX < 0) {
        globalChunkPosX = -globalChunkPosX;
    }

    if(globalChunkPosY < 0) {
        globalChunkPosY = -globalChunkPosY;
    }
		/*
    again = true;
    for (int a = 0; a <= 10; a++){
        if (address_sorted[a] == address[i]){
            again = false;
        }
    }*/

    int in_bounds = 0;

    //if (again){
        // Handles x
        if (globalChunkPosX <= player[0] && globalChunkPosX >= player[0] - render_distance){
            // Handles left side

            //cout<<"left"<<endl;
            in_bounds++;
        } else if (globalChunkPosX >= player[0] && globalChunkPosX <= player[0] + render_distance){
            // Handles right side

            //cout<<"right"<<endl;
            in_bounds++;
        }

        // Handles y
        if (globalChunkPosY <= player[1] && globalChunkPosY >= player[1] - render_distance){
            // Handles down direction

            //cout<<"down"<<endl;
            in_bounds++;
        } else if (globalChunkPosY >= player[1] && globalChunkPosY <= player[1] + render_distance){
            // Handles up direction

            //cout<<"up"<<endl;
            in_bounds++;
        }
    //}

    if (in_bounds >= 2){
			//chunks_to_load.Add(i);

			UE_LOG(LogTemp,Log,TEXT(" ==================== PREPARING TO LOAD CHUNK %d ==================== "), i);
			loaded_chunks++;
			UE_LOG(LogTemp,Log,TEXT("       x: %d "), globalChunkPosX);
			UE_LOG(LogTemp,Log,TEXT("       y: %d "), globalChunkPosY);


			UE_LOG(LogTemp,Log,TEXT("Loading mesh %d... "), i);

			FTransform newT = GetTransform();

			blockData EdenBlockData[] = {
			/* ID  Name              Front              Left              Right              Back              Top              Bottom              */
			{   0, "air",         MAT_Dirt,    		MAT_Dirt,           MAT_Dirt,     		 MAT_Dirt,    		 MAT_Dirt,     			MAT_Dirt          },
			{   1, "bedrock",     MAT_Bedrock,    	MAT_Bedrock,       	MAT_Bedrock,     	 MAT_Bedrock,    	 MAT_Bedrock,       MAT_Bedrock       },
			{   2, "stone",       MAT_Stone,    		MAT_Stone,          MAT_Stone,     		 MAT_Stone,    		 MAT_Stone,     		MAT_Stone         },
			{   3, "dirt",        MAT_Dirt,    		MAT_Dirt,           MAT_Dirt,     		 MAT_Dirt,         MAT_Dirt,     			MAT_Dirt          },
			{   4, "sand",        MAT_Sand,    		MAT_Sand,           MAT_Sand,     		 MAT_Sand,    		 MAT_Sand,     			MAT_Sand          },
			{   5, "leaves",      MAT_Leaves,    	MAT_Leaves,         MAT_Leaves,     	 MAT_Leaves,    	 MAT_Leaves,     		MAT_Leaves        },
			{   6, "trunk",       MAT_TrunkSide,   MAT_TrunkSide,      MAT_TrunkSide,     MAT_TrunkSide,    MAT_TrunkTop,      MAT_TrunkTop      },
			{   7, "wood",        MAT_Wood,    		MAT_Wood,           MAT_Wood,     		 MAT_Wood,    		 MAT_Wood,     			MAT_Wood          },
			{   8, "grass",       MAT_GrassSide,   MAT_GrassSide,      MAT_GrassSide,     MAT_GrassSide,    MAT_GrassTop,      MAT_Dirt          },
			{   9, "TNT",         MAT_TNTSide,    	MAT_TNTSide,        MAT_TNTSide,     	 MAT_TNTSide,      MAT_TNTTop,        MAT_TNTTop        },
			{  10, "rock",        MAT_Rock,        MAT_Rock,           MAT_Rock,          MAT_Rock,         MAT_Rock,          MAT_Rock          },
			{  11, "weeds",       MAT_WeedsSide,   MAT_WeedsSide,      MAT_WeedsSide,     MAT_WeedsSide,    MAT_WeedsTop,      MAT_WeedsTop      },
			{  12, "flowers",     MAT_GrassSide,   MAT_GrassSide,      MAT_GrassSide,     MAT_GrassSide,    MAT_FlowersTop,    MAT_FlowersTop    },
			{  13, "brick",       MAT_Brick,       MAT_Brick,          MAT_Brick,         MAT_Brick,        MAT_Brick,         MAT_Brick         },
			{  14, "slate",       MAT_Roof,        MAT_Roof,           MAT_Roof,          MAT_Roof,         MAT_Roof,          MAT_Roof          },
			{  15, "ice",         MAT_Ice,    			MAT_Ice,            MAT_Ice,     			 MAT_Ice,          MAT_Ice,           MAT_Ice           },
			{  16, "wallpaper",   MAT_Wallpaper,   MAT_Wallpaper,      MAT_Wallpaper,     MAT_Wallpaper,    MAT_Wallpaper,     MAT_Wallpaper     },
			{  17, "bouncy",      MAT_Trampoline,  MAT_Trampoline,     MAT_Trampoline,    MAT_Trampoline,   MAT_Trampoline,    MAT_Trampoline    },
			{  18, "ladder",      MAT_LadderSide,  MAT_LadderSide,     MAT_LadderSide,    MAT_LadderSide,   MAT_Wood,          MAT_Wood          },
			{  19, "cloud",       MAT_Cloud,    		MAT_Cloud,          MAT_Cloud,     		 MAT_Cloud,    		 MAT_Cloud,     		MAT_Cloud         },
			{  20, "water",       MAT_Water,    		MAT_Water,          MAT_Water,     		 MAT_Water,    		 MAT_Water,     		MAT_Water         },
			{  21, "fence",       MAT_Fence,    		MAT_Fence,          MAT_Fence,     		 MAT_Fence,    		 MAT_Fence,     		MAT_Fence         },
			{  22, "ivy",         MAT_Vines,    		MAT_Vines,          MAT_Vines,     		 MAT_Vines,    		 MAT_Vines,     		MAT_Vines         },
			{  23, "lava",        MAT_Lava,    		MAT_Lava,           MAT_Lava,     		 MAT_Lava,    		 MAT_Lava,     		  MAT_Lava          },
			{  56, "shingles",    MAT_Roof,    		MAT_Roof,           MAT_Roof,     		 MAT_Roof,    		 MAT_Roof,     		  MAT_Roof          },
			{  57, "tile",        MAT_Tiles,    		MAT_Tiles,          MAT_Tiles,     		 MAT_Tiles,    		 MAT_Tiles,     		MAT_Tiles         },
			{  58, "glass",       MAT_Glass,    		MAT_Glass,          MAT_Glass,     		 MAT_Glass,    		 MAT_Glass,     		MAT_Glass         },
			{  65, "fireworks",   MAT_FireworksSide,MAT_FireworksSide, MAT_FireworksSide, MAT_FireworksSide,MAT_TNTTop,        MAT_TNTTop        },
			{  71, "transcube",   MAT_BlockTNTSide,MAT_BlockTNTSide,   MAT_BlockTNTSide,  MAT_BlockTNTSide, MAT_TNTTop,        MAT_TNTTop        },
			{  72, "light",       MAT_Light,    		MAT_Light,          MAT_Light,     		 MAT_Light,    		 MAT_Light,     		MAT_Light         },
			{  73, "newflower",   MAT_FlowersTop,  MAT_Dirt,           MAT_GrassSide,     MAT_GrassSide,    MAT_GrassSide,     MAT_GrassSide     },
			{  74, "steel",       MAT_Steel,    		MAT_Steel,          MAT_Steel,     		 MAT_Steel,    		 MAT_Steel,     		MAT_Steel         }
			};

			int chunk = chunkAddress[i];

			/* We are creating a single InstancedStaticMesh for every block in the game
			 * in the below if statement
			 * This should be all blocks (meanwhile for debuging I'm using 23 :P)
			 */
			UE_LOG(LogTemp,Log,TEXT("Creating chunk mesh..."));
			for (int b = 1; b <= 23; b++){

				mesh_array[b][chunk] = NewObject<UInstancedStaticMeshComponent>(this);
				mesh_array[b][chunk]->RegisterComponent();
				//UE_LOG(LogTemp,Log,TEXT("STAGE 1"));

				//Set the block type to Cube
				mesh_array[b][chunk]->SetStaticMesh(SMAsset_Cube);
				//UE_LOG(LogTemp,Log,TEXT("STAGE 2"));
				mesh_array[b][chunk]->SetFlags(RF_Transactional);

				// TODO: Change this line to the new API in UE4 4.20
				//mesh_array[b][chunk]->KeepInstanceBufferCPUAccess = false;

				//UE_LOG(LogTemp,Log,TEXT("STAGE 3"));
				mesh_array[b][chunk]->SetMaterial(0, EdenBlockData[b].topMaterial);
				mesh_array[b][chunk]->SetMaterial(1, EdenBlockData[b].bottomMaterial);
				mesh_array[b][chunk]->SetMaterial(2, EdenBlockData[b].frontMaterial);
				mesh_array[b][chunk]->SetMaterial(3, EdenBlockData[b].backMaterial);
				mesh_array[b][chunk]->SetMaterial(4, EdenBlockData[b].rightMaterial);
				mesh_array[b][chunk]->SetMaterial(5, EdenBlockData[b].leftMaterial);

				//UE_LOG(LogTemp,Log,TEXT("STAGE 4"));
				this->AddInstanceComponent(mesh_array[b][chunk]);

				//UE_LOG(LogTemp,Log,TEXT("STAGE 5"));
				newT.SetLocation(FVector(0,0,0));
			}

			UE_LOG(LogTemp,Log,TEXT("Converting chunk %d..."), chunk);

			// Whatever this does ¯\_(ツ)_/¯
			int baseX = (chunksX[chunk] - worldAreaX) * 16, baseY = (chunksY[chunk] - worldAreaY) * 16;

			for (int baseHeight = 0; baseHeight < 4; baseHeight++)
			{
				for (int x = 0; x < 16; x++)
				{
					for (int y = 0; y < 16; y++)
					{
						for (int z = 0; z < 16; z++)
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

						int blockId = bytes[chunk + baseHeight * 8192 + x * 256 + y * 16 + z];

						int newX = (x + (globalChunkPosX*16)) * 100;
						int newY = (y + (globalChunkPosY*16)) * 100;
						int newZ = (z + (16 * baseHeight)) * 100;

						//UE_LOG(LogTemp,Log,TEXT("Chunk pos x: %d"), newX);
						//UE_LOG(LogTemp,Log,TEXT("Chunk pos y: %d"), newY);

						newT.SetLocation(FVector(newX, newY, newZ));
						newT.SetScale3D(FVector(0.5, 0.5, 0.5));

						if (blockId != 0){
							if (bytes[chunk + baseHeight * 8192 + x * 256 + y * 16 + z] <= 23 && bytes[chunk + baseHeight * 8192 + x * 256 + y * 16 + z] >= 1)
							{
								//dirt->AddInstance(newT);
								//EdenBlockData[blockId].name->AddInstance(newT);
								//UE_LOG(LogTemp,Log,TEXT("Placing block %d..."), blockId);
								mesh_array[blockId][chunk]->AddInstance(newT);
							} else {
								//EdenBlockData[19].name->AddInstance(newT);
								mesh_array[19][chunk]->AddInstance(newT);
							}
						}

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
	}
	UE_LOG(LogTemp,Log,TEXT("Done!"));
	UE_LOG(LogTemp,Log,TEXT("%d chunks loaded!"), loaded_chunks);
}
