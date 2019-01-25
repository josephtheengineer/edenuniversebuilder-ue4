// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0)

#pragma once

#include "ProceduralMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "ConstructorHelpers.h"
#include "GameFramework/Character.h"
#include <map>

#include "EdenWorldDecoder.h"
#include "Debug.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VoxelTerrainActor.generated.h"

USTRUCT()
struct FBlockData
{
        GENERATED_BODY()
        int id;
        FString name;
        UMaterialInterface* topMaterial;
        UMaterialInterface* bottomMaterial;
        UMaterialInterface* frontMaterial;
        UMaterialInterface* backMaterial;
        UMaterialInterface* rightMaterial;
        UMaterialInterface* leftMaterial;
};

UCLASS()
class EDENUNIVERSEBUILDER_API AVoxelTerrainActor : public AActor
{
        GENERATED_BODY()

public:
        // Sets default values for this actor's properties
        AVoxelTerrainActor();

        // Called every frame
        virtual void Tick(float DeltaSeconds) override;

        int activePlanes = 0;

        UPROPERTY(Category = "Voxel Terrain", BlueprintReadWrite, EditAnywhere) bool DebugWorldLoad = false;

        // The material to apply to our voxel terrain
        UPROPERTY(Category = "Voxel Terrain", BlueprintReadWrite, EditAnywhere) TArray<UMaterialInterface*> TerrainMaterials;

        // Called when the actor has begun playing in the level
        virtual void BeginPlay() override;

        // The procedurally generated mesh that represents our voxels
        //UPROPERTY(Category = "Voxel Terrain", BlueprintReadWrite, VisibleAnywhere) class UProceduralMeshComponent* Mesh;

        void CreateBlock(int id, int chunk, float x, float y, float z);
        void RemoveBlock(int id, int chunk, int index);
        void CreateChunk(int chunk, float x, float y, float z);
        void GetBlockMaterials();

        FVector2D ChunkPositionFromUnrealUnits(FVector UnrealUnits, TArray<EdenChunkMetadata> ChunkMetadata);

        UFUNCTION(BlueprintCallable)
        void LoadWorld(FString Path);

        std::map<int, std::map<int, UInstancedStaticMeshComponent*>> MeshArray;

        UPROPERTY(EditAnywhere)
        UStaticMesh* Cube;

        UPROPERTY(EditAnywhere)
        int heightLimit;

        UPROPERTY(EditAnywhere)
        bool DisplayChunkPositions = false;

        //============================================================================
        // Materials
        //============================================================================

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Bedrock;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_BlockTNTSide;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Brick;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Cloud;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Dirt;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Fence;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_FireworksSide;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_FlowersTop;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Glass;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_GrassSide;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_GrassTop;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Ice;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_LadderSide;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Lava;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Leaves;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Light;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Neon;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Rock;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Roof;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Sand;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Steel;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Stone;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Tiles;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_TNTSide;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_TNTTop;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Trampoline;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_TrunkSide;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_TrunkTop;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Vines;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Wallpaper;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Water;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_WeedsSide;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_WeedsTop;

        UPROPERTY(EditAnywhere)
        class UMaterialInterface* MAT_Wood;

private:
        Debug Logger;
};
