// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

// Polyvox
//#include "PolyVox/PagedVolume.h"
//#include "PolyVox/MaterialDensityPair.h"
//#include "PolyVox/Vector.h"

#include "ProceduralMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "ConstructorHelpers.h"
#include <map>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VoxelTerrainActor.generated.h"

/*
struct Data {
    TArray<FVector> Position;
    TArray<int> id;
    TArray<int> chunkId;
};*/

USTRUCT()
struct FBlockData
{
        GENERATED_BODY()

        int id;    // The block type, as a value found in the blocks[] chunk

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

        int activePlanes = 0;

        UPROPERTY(Category = "Voxel Terrain", BlueprintReadWrite, EditAnywhere) float RenderDistance;

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

        UFUNCTION(BlueprintCallable)
        void LoadWorld(FString path);

        std::map<int, std::map<int, UInstancedStaticMeshComponent*>> MeshArray;

        UPROPERTY(EditAnywhere)
        UStaticMesh* Cube;

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
};
