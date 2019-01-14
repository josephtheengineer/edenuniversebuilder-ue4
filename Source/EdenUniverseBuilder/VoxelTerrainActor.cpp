#include "VoxelTerrainActor.h"
#include "VoxelIndexer.h"
#include "EdenWorldDecoder.h"
#include "EdenGameInstance.h"
#include "WorldFileManager.h"

//==============================================================================
// Constructor
//==============================================================================
AVoxelTerrainActor::AVoxelTerrainActor()
{
        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_BedrockAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Bedrock.MAT_Bedrock'"));
        MAT_Bedrock = MAT_BedrockAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_BlockTNTSideAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_BlockTNTSide.MAT_BlockTNTSide'"));
        MAT_BlockTNTSide = MAT_BlockTNTSideAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_BrickAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Brick.MAT_Brick'"));
        MAT_Brick = MAT_BrickAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_CloudAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Cloud.MAT_Cloud'"));
        MAT_Cloud = MAT_CloudAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_DirtAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Dirt.MAT_Dirt'"));
        MAT_Dirt = MAT_DirtAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_FenceAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Fence.MAT_Fence'"));
        MAT_Fence = MAT_FenceAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_FireworksSideAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_FireworksSide.MAT_FireworksSide'"));
        MAT_FireworksSide = MAT_FireworksSideAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_FlowersTopAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_FlowersTop.MAT_FlowersTop'"));
        MAT_FlowersTop = MAT_FlowersTopAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_GlassAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Glass.MAT_Glass'"));
        MAT_Glass = MAT_GlassAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_GrassSideAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_GrassSide.MAT_GrassSide'"));
        MAT_GrassSide = MAT_GrassSideAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_GrassTopAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_GrassTop.MAT_GrassTop'"));
        MAT_GrassTop = MAT_GrassTopAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_IceAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Ice.MAT_Ice'"));
        MAT_Ice = MAT_IceAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_LadderSideAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_LadderSide.MAT_LadderSide'"));
        MAT_LadderSide = MAT_LadderSideAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_LavaAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Lava.MAT_Lava'"));
        MAT_Lava = MAT_LavaAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_LeavesAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Leaves.MAT_Leaves'"));
        MAT_Leaves = MAT_LeavesAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_LightAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Light.MAT_Light'"));
        MAT_Light = MAT_LightAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_NeonAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Neon.MAT_Neon'"));
        MAT_Neon = MAT_NeonAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_RockAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Rock.MAT_Rock'"));
        MAT_Rock = MAT_RockAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_RoofAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Roof.MAT_Roof'"));
        MAT_Roof = MAT_RoofAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_SandAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Sand.MAT_Sand'"));
        MAT_Sand = MAT_SandAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_SteelAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Steel.MAT_Steel'"));
        MAT_Steel = MAT_SteelAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_StoneAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Stone.MAT_Stone'"));
        MAT_Stone = MAT_StoneAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_TilesAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Tiles.MAT_Tiles'"));
        MAT_Tiles = MAT_TilesAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_TNTSideAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_TNTSide.MAT_TNTSide'"));
        MAT_TNTSide = MAT_TNTSideAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_TNTTopAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_TNTTop.MAT_TNTTop'"));
        MAT_TNTTop = MAT_TNTTopAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_TrampolineAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Trampoline.MAT_Trampoline'"));
        MAT_Trampoline = MAT_TrampolineAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_TrunkSideAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_TrunkSide.MAT_TrunkSide'"));
        MAT_TrunkSide = MAT_TrunkSideAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_TrunkTopAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_TrunkTop.MAT_TrunkTop'"));
        MAT_TrunkTop = MAT_TrunkTopAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_VinesAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Vines.MAT_Vines'"));
        MAT_Vines = MAT_VinesAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_WallpaperAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Wallpaper.MAT_Wallpaper'"));
        MAT_Wallpaper = MAT_WallpaperAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_WaterAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Water.MAT_Water'"));
        MAT_Water = MAT_WaterAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_WeedsSideAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_WeedsSide.MAT_WeedsSide'"));
        MAT_WeedsSide = MAT_WeedsSideAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_WeedsTopAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_WeedsTop.MAT_WeedsTop'"));
        MAT_WeedsTop = MAT_WeedsTopAsset.Object;

        static ConstructorHelpers::FObjectFinder<UMaterialInterface> MAT_WoodAsset(TEXT("Material'/Game/EdenUniverseBuilder/Art/Blocks/MAT_Wood.MAT_Wood'"));
        MAT_Wood = MAT_WoodAsset.Object;

        static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeAsset(TEXT("Mesh'/Game/EdenUniverseBuilder/Core/Placeables/cube.cube'"));
        Cube = CubeAsset.Object;
}

//==============================================================================
// Start
//==============================================================================
void AVoxelTerrainActor::BeginPlay()
{
        CreateChunk(0, 0, 0, 0); // Debug chunk

        UEdenGameInstance* GameInstance = Cast<UEdenGameInstance>(GetGameInstance());
        if(GameInstance)
        {
                LoadWorld(GameInstance->WorldPath);
        }
}

// Called every frame
void AVoxelTerrainActor::Tick(float DeltaTime)
{
	Super::Tick( DeltaTime );
        // If player has moved chunks
}

//==============================================================================
// Load World
//==============================================================================
// Test World = /home/josephtheengineer/workspace/edenproject/EdenUniverseBuilder/Content/Worlds/testWorld.eden
// Direct City = /home/josephtheengineer/workspace/edenproject/EdenUniverseBuilder/Content/Worlds/DirectCity.eden
void AVoxelTerrainActor::LoadWorld(FString Path)
{
        UE_LOG(LogTemp,Log,TEXT("VoxelTerrainActor: LoadWorld process started!"));
        EdenWorldDecoder WorldDecoder;
        VoxelIndexer Indexer;

        if (Indexer.WorldLoaded == false)
        {
                //==============================================================================
                // Load variables into the indexer from the world file.
                // This excludes memory heavy operations such as block data.
                WorldDecoder.LoadWorld(TCHAR_TO_UTF8(*Path));

                UEdenGameInstance* GameInstance = Cast<UEdenGameInstance>(GetGameInstance());
                GameInstance->StartingPlayerPosition = WorldDecoder.GetPlayerPosition();

                TMap<int, FVector2D> ChunkLocations = WorldDecoder.GetChunkLocations();
                TArray<EdenChunkMetadata> ChunkMetadata = WorldDecoder.GetChunkMetadata();

                Indexer.RegisterChunks(ChunkMetadata);
                //==============================================================================

                UE_LOG(LogTemp, Warning, TEXT("ChunkMetadata: %d"), ChunkMetadata.Num());
                FVector PlayerPosition = FVector(0, 0, 0);

                float RenderDistance = 60;
                int ChunkLimit = 10;
                int LoadedBlocks = 0;
                int LoadedChunks = 0;
                int Status = 0;

                RenderDistance = GameInstance->RenderDistance;
                ChunkLimit = GameInstance->ChunkLimit;
                PlayerPosition = GameInstance->StartingPlayerPosition;

                FVector2D ChunkPlayerPosition = ChunkPositionFromUnrealUnits(PlayerPosition, ChunkMetadata);

                for (int i = 0; i < ChunkLocations.Num(); i++)
                {
                        //==============================================================================

                        // Break apart the FVectors
                        //float pX = PlayerPosition.X * 100;
                        //float pY = PlayerPosition.Y * 100;
                        //float pZ = PlayerPosition.Z * 100;

                        float pX = ChunkPlayerPosition.X;
                        float pY = ChunkPlayerPosition.Y;

                        //float x = (ChunkMetadata[i].X*16) * 100;
                        //float y = (ChunkMetadata[i].Y*16) * 100;
                        //float z = 0.0;

                        float x = ChunkMetadata[i].X;
                        float y = ChunkMetadata[i].Y;
                        float z = 0;

                        //==============================================================================

                        if (DisplayChunkPositions)
                        {
                                UE_LOG(LogTemp, Warning, TEXT("=== Address: %d ==="), ChunkMetadata[i].Address);
                                UE_LOG(LogTemp, Warning, TEXT("Position X: %f"), x);
                                UE_LOG(LogTemp, Warning, TEXT("Position Y: %f"), y);
                        }

                        // Get distance from player
                        float Distance = sqrtf( powf( (x-pX), 2.f )  +  powf( (y-pY), 2.f ) );

                        UE_LOG(LogTemp, Warning, TEXT("Distance: %f"), Distance);

                        if (Distance < RenderDistance && LoadedChunks < ChunkLimit)
                        {
                                if (Status > 10)
                                {
                                        UE_LOG(LogTemp, Warning, TEXT("Loading... %d"), i);
                                        Status = 0;
                                }
                                if (DebugWorldLoad == false)
                                {
                                        //==============================================================================
                                        // Get the chunk data from the WORLD FILE.
                                        TArray<EdenChunkData> ChunkData = WorldDecoder.GetChunkData(ChunkMetadata[i].Address);

                                        CreateChunk(ChunkMetadata[i].Address, x, y, z);

                                        for (int Blocks = 0; Blocks < ChunkData.Num(); Blocks++)
                                        {
                                                Indexer.RegisterBlock(ChunkData[Blocks].Id, ChunkData[Blocks].Position.X, ChunkData[Blocks].Position.Y, ChunkData[Blocks].Position.Z, ChunkMetadata[i].Address, 0);
                                        }

                                        //==============================================================================
                                        // Place all the blocks contained in the chunk data.
                                        for (int Blocks = 0; Blocks < ChunkData.Num(); Blocks++)
                                        {
                                                float X = ChunkData[Blocks].Position.X;
                                                float Y = ChunkData[Blocks].Position.Y;
                                                float Z = ChunkData[Blocks].Position.Z;

                                                if (!(Indexer.CheckBlock(X, Y+100, Z) && Indexer.CheckBlock(X, Y-100, Z) && Indexer.CheckBlock(X+100,Y, Z) && Indexer.CheckBlock(X-100, Y, Z) && Indexer.CheckBlock(X, Y, Z+100) && Indexer.CheckBlock(X, Y, Z-100)))
                                                {
                                                        CreateBlock(ChunkData[Blocks].Id, ChunkMetadata[i].Address, X, Y, Z);
                                                        LoadedBlocks++;
                                                }
                                        }
                                        //==============================================================================
                                        Status++;
                                        LoadedChunks++;
                                }
                        }
                }
                UE_LOG(LogTemp, Warning, TEXT("Done! Loaded %d blocks!"), LoadedBlocks);
                UE_LOG(LogTemp, Warning, TEXT("      Loaded %d chunks!"), LoadedChunks);
                UE_LOG(LogTemp, Warning, TEXT("Render distance was %f"), RenderDistance);
                UE_LOG(LogTemp, Warning, TEXT("Chunk limit was %d"), ChunkLimit);
                ACharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
                //myCharacter->GetActorLocation();
                myCharacter->SetActorLocation(PlayerPosition);
                Indexer.WorldLoaded = true;
        }
}

FVector2D AVoxelTerrainActor::ChunkPositionFromUnrealUnits(FVector UnrealUnits, TArray<EdenChunkMetadata> ChunkMetadata)
{

        int X = int(UnrealUnits.X + 0.5);
        int Y = int(UnrealUnits.Y + 0.5);

        UE_LOG(LogTemp, Warning, TEXT("Player position converted to int: "));
        UE_LOG(LogTemp, Warning, TEXT("   X: %d"), X);
        UE_LOG(LogTemp, Warning, TEXT("   Y: %d"), Y);

        for (int i = 0; i < ChunkMetadata.Num(); i++)
        {
                int ChunkX = (ChunkMetadata[i].X*16) * 100;
                int ChunkY = (ChunkMetadata[i].Y*16) * 100;

                //UE_LOG(LogTemp, Warning, TEXT("Chunk position converted to unreal units: "));
                //UE_LOG(LogTemp, Warning, TEXT("   X: %d"), ChunkX);
                //UE_LOG(LogTemp, Warning, TEXT("   Y: %d"), ChunkY);

                //UE_LOG(LogTemp, Warning, TEXT("Checking... %d"), ChunkMetadata[i].X);
                if (X > ChunkX && X < (ChunkX + 1600) && Y > ChunkY && Y < (ChunkY + 1600))
                {
                        UE_LOG(LogTemp, Warning, TEXT("Player is in chunk: "));
                        UE_LOG(LogTemp, Warning, TEXT("   X: %d"), ChunkMetadata[i].X);
                        UE_LOG(LogTemp, Warning, TEXT("   Y: %d"), ChunkMetadata[i].Y);

                        return FVector2D(ChunkMetadata[i].X, ChunkMetadata[i].Y);
                }
        }
        UE_LOG(LogTemp, Warning, TEXT("Error: Could not find the chunk that the player is in"));
        return FVector2D(0, 0);
}

void AVoxelTerrainActor::GetBlockMaterials()
{
}

//==============================================================================
// Create Chunk
//==============================================================================
void AVoxelTerrainActor::CreateChunk(int chunk, float x, float y, float z)
{
        FBlockData EdenBlockData[] = {
        // ID  Name           Front                 Left                 Right                 Back                 Top                 Bottom
        {   0, "air",         MAT_Dirt,    	    MAT_Dirt,            MAT_Dirt,     	       MAT_Dirt,            MAT_Dirt,           MAT_Dirt          },
        {   1, "bedrock",     MAT_Bedrock,    	    MAT_Bedrock,       	 MAT_Bedrock,          MAT_Bedrock,    	    MAT_Bedrock,        MAT_Bedrock       },
        {   2, "stone",       MAT_Stone,    	    MAT_Stone,           MAT_Stone,            MAT_Stone,    	    MAT_Stone,          MAT_Stone         },
        {   3, "dirt",        MAT_Dirt,    	    MAT_Dirt,            MAT_Dirt,     	       MAT_Dirt,            MAT_Dirt,           MAT_Dirt          },
        {   4, "sand",        MAT_Sand,    	    MAT_Sand,            MAT_Sand,     	       MAT_Sand,            MAT_Sand,           MAT_Sand          },
        {   5, "leaves",      MAT_Leaves,           MAT_Leaves,          MAT_Leaves,           MAT_Leaves,    	    MAT_Leaves,         MAT_Leaves        },
        {   6, "trunk",       MAT_TrunkSide,        MAT_TrunkSide,       MAT_TrunkSide,        MAT_TrunkSide,       MAT_TrunkTop,       MAT_TrunkTop      },
        {   7, "wood",        MAT_Wood,    	    MAT_Wood,            MAT_Wood,     	       MAT_Wood,    	    MAT_Wood,           MAT_Wood          },
        {   8, "grass",       MAT_GrassSide,        MAT_GrassSide,       MAT_GrassSide,        MAT_GrassSide,       MAT_GrassTop,       MAT_Dirt          },
        {   9, "TNT",         MAT_TNTSide,    	    MAT_TNTSide,         MAT_TNTSide,          MAT_TNTSide,         MAT_TNTTop,         MAT_TNTTop        },
        {  10, "rock",        MAT_Rock,             MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },

        {  11, "weeds",       MAT_WeedsSide,        MAT_WeedsSide,       MAT_WeedsSide,        MAT_WeedsSide,       MAT_WeedsTop,       MAT_WeedsTop      },
        {  12, "flowers",     MAT_GrassSide,        MAT_GrassSide,       MAT_GrassSide,        MAT_GrassSide,       MAT_FlowersTop,     MAT_FlowersTop    },
        {  13, "brick",       MAT_Brick,            MAT_Brick,           MAT_Brick,            MAT_Brick,           MAT_Brick,          MAT_Brick         },
        {  14, "slate",       MAT_Roof,             MAT_Roof,            MAT_Roof,             MAT_Roof,            MAT_Roof,           MAT_Roof          },
        {  15, "ice",         MAT_Ice,    	    MAT_Ice,             MAT_Ice,     	       MAT_Ice,             MAT_Ice,            MAT_Ice           },
        {  16, "wallpaper",   MAT_Wallpaper,        MAT_Wallpaper,       MAT_Wallpaper,        MAT_Wallpaper,       MAT_Wallpaper,      MAT_Wallpaper     },
        {  17, "bouncy",      MAT_Trampoline,       MAT_Trampoline,      MAT_Trampoline,       MAT_Trampoline,      MAT_Trampoline,     MAT_Trampoline    },
        {  18, "ladder",      MAT_LadderSide,       MAT_LadderSide,      MAT_LadderSide,       MAT_LadderSide,      MAT_Wood,           MAT_Wood          },
        {  19, "cloud",       MAT_Cloud,            MAT_Cloud,           MAT_Cloud,            MAT_Cloud,    	    MAT_Cloud,          MAT_Cloud         },
        {  20, "water",       MAT_Water,    	    MAT_Water,           MAT_Water,            MAT_Water,    	    MAT_Water,          MAT_Water         },

        {  21, "fence",       MAT_Fence,    	    MAT_Fence,           MAT_Fence,            MAT_Fence,    	    MAT_Fence,          MAT_Fence         },
        {  22, "ivy",         MAT_Vines,    	    MAT_Vines,           MAT_Vines,            MAT_Vines,    	    MAT_Vines,          MAT_Vines         },
        {  23, "lava",        MAT_Lava,    	    MAT_Lava,            MAT_Lava,     	       MAT_Lava,            MAT_Lava,           MAT_Lava          },

        {  24, "rock .S",     MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },
        {  25, "rock .W",     MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },
        {  26, "rock .N",     MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },
        {  27, "rock .E",     MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },

        {  28, "wood .S",     MAT_Wood,    	    MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },
        {  29, "wood .W",     MAT_Wood,    	    MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },
        {  30, "wood .N",     MAT_Wood,    	    MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },
        {  31, "wood .E",     MAT_Wood,    	    MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },

        {  32, "shing .S",    MAT_Roof,    	    MAT_Roof,            MAT_Roof,             MAT_Roof,            MAT_Roof,           MAT_Roof          },
        {  33, "shing .W",    MAT_Roof,    	    MAT_Roof,            MAT_Roof,             MAT_Roof,            MAT_Roof,           MAT_Roof          },
        {  34, "shing .N",    MAT_Roof,    	    MAT_Roof,            MAT_Roof,             MAT_Roof,            MAT_Roof,           MAT_Roof          },
        {  35, "shing .E",    MAT_Roof,    	    MAT_Roof,            MAT_Roof,             MAT_Roof,            MAT_Roof,           MAT_Roof          },

        {  36, "ice .S",      MAT_Ice,    	    MAT_Ice,             MAT_Ice,              MAT_Ice,             MAT_Ice,            MAT_Ice           },
        {  37, "ice .W",      MAT_Ice,    	    MAT_Ice,             MAT_Ice,              MAT_Ice,             MAT_Ice,            MAT_Ice           },
        {  38, "ice .N",      MAT_Ice,    	    MAT_Ice,             MAT_Ice,              MAT_Ice,             MAT_Ice,            MAT_Ice           },
        {  39, "ice .E",      MAT_Ice,    	    MAT_Ice,             MAT_Ice,              MAT_Ice,             MAT_Ice,            MAT_Ice           },

        {  40, "rock SE",     MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },
        {  41, "rock SW",     MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },
        {  42, "rock NW",     MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },
        {  43, "rock NE",     MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },

        {  44, "wood SE",     MAT_Wood,    	    MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },
        {  45, "wood SW",     MAT_Wood,    	    MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },
        {  46, "wood NW",     MAT_Wood,    	    MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },
        {  47, "wood NE",     MAT_Wood,    	    MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },

        {  48, "shing SE",    MAT_Roof,    	    MAT_Roof,            MAT_Roof,             MAT_Roof,            MAT_Roof,           MAT_Roof          },
        {  49, "shing SW",    MAT_Roof,    	    MAT_Roof,            MAT_Roof,             MAT_Roof,            MAT_Roof,           MAT_Roof          },
        {  50, "shing NW",    MAT_Roof,    	    MAT_Roof,            MAT_Roof,             MAT_Roof,            MAT_Roof,           MAT_Roof          },
        {  51, "shing NE",    MAT_Roof,    	    MAT_Roof,            MAT_Roof,             MAT_Roof,            MAT_Roof,           MAT_Roof          },

        {  52, "ice SE",      MAT_Ice,    	    MAT_Ice,             MAT_Ice,              MAT_Ice,             MAT_Ice,            MAT_Ice           },
        {  53, "ice SW",      MAT_Ice,    	    MAT_Ice,             MAT_Ice,              MAT_Ice,             MAT_Ice,            MAT_Ice           },
        {  54, "ice NW",      MAT_Ice,    	    MAT_Ice,             MAT_Ice,              MAT_Ice,             MAT_Ice,            MAT_Ice           },
        {  55, "ice NE",      MAT_Ice,    	    MAT_Ice,             MAT_Ice,              MAT_Ice,             MAT_Ice,            MAT_Ice           },

        {  56, "shingles",    MAT_Roof,    	    MAT_Roof,            MAT_Roof,     	       MAT_Roof,            MAT_Roof,           MAT_Roof          },
        {  57, "tile",        MAT_Tiles,    	    MAT_Tiles,           MAT_Tiles,            MAT_Tiles,           MAT_Tiles,          MAT_Tiles         },
        {  58, "glass",       MAT_Glass,    	    MAT_Glass,           MAT_Glass,            MAT_Glass,    	    MAT_Glass,          MAT_Glass         },

        {  59, "water 3/4",   MAT_Water,    	    MAT_Water,           MAT_Water,            MAT_Water,           MAT_Water,          MAT_Water         },
        {  60, "water 1/2",   MAT_Water,    	    MAT_Water,           MAT_Water,            MAT_Water,           MAT_Water,          MAT_Water         },
        {  61, "water 1/4",   MAT_Water,    	    MAT_Water,           MAT_Water,            MAT_Water,           MAT_Water,          MAT_Water         },

        {  62, "lava 3/4",    MAT_Lava,    	    MAT_Lava,            MAT_Lava,             MAT_Lava,            MAT_Lava,           MAT_Lava          },
        {  63, "lava 1/2",    MAT_Lava,    	    MAT_Lava,            MAT_Lava,             MAT_Lava,            MAT_Lava,           MAT_Lava          },
        {  64, "lava 1/4",    MAT_Lava,    	    MAT_Lava,            MAT_Lava,             MAT_Lava,            MAT_Lava,           MAT_Lava          },

        {  65, "fireworks",   MAT_FireworksSide,    MAT_FireworksSide,   MAT_FireworksSide,    MAT_FireworksSide,   MAT_TNTTop,         MAT_TNTTop        },
        {  66, "door N",      MAT_Wood,             MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },
        {  67, "door E",      MAT_Wood,             MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },
        {  68, "door S",      MAT_Wood,             MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },
        {  69, "door W",      MAT_Wood,             MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },
        {  70, "door top",    MAT_Wood,             MAT_Wood,            MAT_Wood,             MAT_Wood,            MAT_Wood,           MAT_Wood          },

        {  71, "transcube",   MAT_BlockTNTSide,     MAT_BlockTNTSide,    MAT_BlockTNTSide,     MAT_BlockTNTSide,    MAT_TNTTop,         MAT_TNTTop        },
        {  72, "light",       MAT_Light,    	    MAT_Light,           MAT_Light,            MAT_Light,           MAT_Light,          MAT_Light         },
        {  73, "newflower",   MAT_FlowersTop,       MAT_Dirt,            MAT_GrassSide,        MAT_GrassSide,       MAT_GrassSide,      MAT_GrassSide     },
        {  74, "steel",       MAT_Steel,    	    MAT_Steel,           MAT_Steel,            MAT_Steel,           MAT_Steel,          MAT_Steel         },

        {  75, "pN portal N", MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },
        {  76, "pE portal E", MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },
        {  77, "pS portal S", MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },
        {  78, "pW portal W", MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          },
        {  79, "pT portal top", MAT_Rock,    	    MAT_Rock,            MAT_Rock,             MAT_Rock,            MAT_Rock,           MAT_Rock          }
        };

        //UE_LOG(LogTemp,Log,TEXT("Creating chunk mesh..."));
        FTransform newT = GetTransform();
        newT.SetLocation(FVector(0,0,0));

        for (int BlockId = 1; BlockId <= 79; BlockId++){
                //UE_LOG(LogTemp,Log,TEXT("Creating mesh %d"), BlockId);
                MeshArray[BlockId][chunk] = NewObject<UInstancedStaticMeshComponent>(this);
                MeshArray[BlockId][chunk]->RegisterComponent();
                MeshArray[BlockId][chunk]->SetStaticMesh(Cube);
                MeshArray[BlockId][chunk]->SetFlags(RF_Transactional);

                MeshArray[BlockId][chunk]->SetMaterial(0, EdenBlockData[BlockId].topMaterial);
                MeshArray[BlockId][chunk]->SetMaterial(1, EdenBlockData[BlockId].bottomMaterial);
                MeshArray[BlockId][chunk]->SetMaterial(2, EdenBlockData[BlockId].frontMaterial);
                MeshArray[BlockId][chunk]->SetMaterial(3, EdenBlockData[BlockId].backMaterial);
                MeshArray[BlockId][chunk]->SetMaterial(4, EdenBlockData[BlockId].rightMaterial);
                MeshArray[BlockId][chunk]->SetMaterial(5, EdenBlockData[BlockId].leftMaterial);

                this->AddInstanceComponent(MeshArray[BlockId][chunk]);
        }
        MeshArray[1][chunk]->AddInstance(newT);
        //UE_LOG(LogTemp,Log,TEXT("Added instance"));
        //VoxelIndexer Indexer;
        //Indexer.RegisterChunk(chunk, x, y, z);
}

//==============================================================================
// Create Block
//==============================================================================
void AVoxelTerrainActor::CreateBlock(int id, int chunk, float x, float y, float z)
{
        FTransform Location = GetTransform();
	Location.SetScale3D(FVector(0.5, 0.5, 0.5));
        Location.SetLocation(FVector(x, y, z));
        MeshArray[id][chunk]->AddInstance(Location);
}

//==============================================================================
// Remove Block
//==============================================================================
void AVoxelTerrainActor::RemoveBlock(int id, int chunk, int index)
{
        //FTransform Location = GetTransform();
	//Location.SetScale3D(FVector(0.5, 0.5, 0.5));
        //Location.SetLocation(FVector(x, y, z));
        MeshArray[id][chunk]->RemoveInstance(index);
}
