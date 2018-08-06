// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <iostream>
#include <map>
#include <fstream>
#include <vector>
#include "Components/InstancedStaticMeshComponent.h"
#include "WorldConverter.generated.h"

using namespace std;

UCLASS()
class EDENUNIVERSEBUILDER_API AWorldConverter : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWorldConverter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	typedef struct blockData
	{

	int id;    // The block type, as a value found in the blocks[] chunk

	//FString name; // Human-readable name

	UInstancedStaticMeshComponent* name;

	UMaterialInterface* topMaterial;

	UMaterialInterface* bottomMaterial;

	UMaterialInterface* frontMaterial;

	UMaterialInterface* backMaterial;

	UMaterialInterface* rightMaterial;

	UMaterialInterface* leftMaterial;

	} blockData;


	//============================================================================
	// Functions
	//============================================================================

	void LoadChunk();

	vector <int> OpenFile(const char *filename);

	FString GetWorldName(vector <int> bytes);

	void CreateChunkMap(vector <int> worldData, int chunkPointer);

	void GetChunkInfo(int chunk);

	void LoadBlocks();

	// Load a material from the corresponding path
/*	UFUNCTION(BlueprintCallable, Category = "Asset Loading")
	UMaterialInterface * LoadMaterialReference(const FString& materialPath);*/

	void CreateMesh(int totalRenderDistance);

	//============================================================================
	// Variables
	//============================================================================
	vector <UInstancedStaticMeshComponent> MeshArray;

	map<int, int> chunksX;
	map<int, int> chunksY;

	// Get the min X value by finding the last value in chunks
	int worldAreaX = 0;

	// Get the min Y value by finding the last value in chunks
	int worldAreaY = 0;

	int worldAreaWidthTemp = 0;
	int worldAreaHeightTemp = 0;

	map<vector<int>, int> blocks;

	TArray<int32> chunkAddress;
	TArray<int32> chunkPositionX;
	TArray<int32> chunkPositionY;

	TArray<FString> chunkFinal;
	vector <int> bytes;

	UPROPERTY()
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	class UInstancedStaticMeshComponent* Mesh;

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

	// Add StaticMeshComponent
	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* air;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* bedrock;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* stone;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* dirt;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* sand;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* leaves;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* trunk;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* wood;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* grass;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* TNT;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* rock;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* weeds;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* flowers;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* brick;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* slate;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* ice;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* wallpaper;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* bouncy;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* ladder;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* cloud;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* water;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* fence;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* ivy;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* lava;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* shingles;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* tile;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* glass;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* fireworks;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* transcube;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* light;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* newflower;

	UPROPERTY(EditAnywhere)
	UInstancedStaticMeshComponent* steel;

	UPROPERTY(EditAnywhere)
	UStaticMesh* SMAsset_Cube;

	// ======================== MULTI-THREADING ========================

	void RunPrimeTask(int32 NumPrimes);

	void RunPrimeTaskOnMain(int32 NumPrimes);
};

class PrimeSearchTask : public FNonAbandonableTask
{
public:
	PrimeSearchTask(int32 _primeCount);

	~PrimeSearchTask();

	//Required by UE4
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(PrimeSearchTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	int32 PrimeCount;

	void DoWork();
	void DoWorkOnMain();
};
