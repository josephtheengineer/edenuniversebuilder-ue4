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


	// Called every frame
	//virtual void Tick(float DeltaTime) override;

	void LoadChunk();

	vector <int> OpenFile(const char *filename);

	FString GetWorldName(vector <int> bytes);

	void CreateChunkMap(vector <int> worldData, int chunkPointer);

	// Load a material from the corresponding path
/*	UFUNCTION(BlueprintCallable, Category = "Asset Loading")
	UMaterialInterface * LoadMaterialReference(const FString& materialPath);*/

	void CreateMesh(int totalRenderDistance);

	//============================================================================
	// Variables
	//============================================================================

	UPROPERTY(EditAnywhere)
	int totalRenderDistanceG = 5;

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

	UPROPERTY(EditAnywhere)
	int render_distance = 2;

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

	UPROPERTY(EditAnywhere)
	class UBoxComponent* ChunkBoundary;

	// Add StaticMeshComponent
	map<int32, UInstancedStaticMeshComponent*> air;
	map<int32, UInstancedStaticMeshComponent*> bedrock;
	map<int32, UInstancedStaticMeshComponent*> stone;
	map<int32, UInstancedStaticMeshComponent*> dirt;

	map<int32, UInstancedStaticMeshComponent*> sand;
	map<int32, UInstancedStaticMeshComponent*> leaves;
	map<int32, UInstancedStaticMeshComponent*> trunk;
	map<int32, UInstancedStaticMeshComponent*> wood;

	map<int32, UInstancedStaticMeshComponent*> grass;
	map<int32, UInstancedStaticMeshComponent*> TNT;
	map<int32, UInstancedStaticMeshComponent*> rock;
	map<int32, UInstancedStaticMeshComponent*> weeds;

	map<int32, UInstancedStaticMeshComponent*> flowers;
	map<int32, UInstancedStaticMeshComponent*> brick;
	map<int32, UInstancedStaticMeshComponent*> slate;
	map<int32, UInstancedStaticMeshComponent*> ice;

	map<int32, UInstancedStaticMeshComponent*> wallpaper;
	map<int32, UInstancedStaticMeshComponent*> bouncy;
	map<int32, UInstancedStaticMeshComponent*> ladder;
	map<int32, UInstancedStaticMeshComponent*> cloud;

	map<int32, UInstancedStaticMeshComponent*> water;
	map<int32, UInstancedStaticMeshComponent*> fence;
	map<int32, UInstancedStaticMeshComponent*> ivy;
	map<int32, UInstancedStaticMeshComponent*> lava;

	map<int32, UInstancedStaticMeshComponent*> shingles;
	map<int32, UInstancedStaticMeshComponent*> tile;
	map<int32, UInstancedStaticMeshComponent*> glass;
	map<int32, UInstancedStaticMeshComponent*> fireworks;

	map<int32, UInstancedStaticMeshComponent*> transcube;
	map<int32, UInstancedStaticMeshComponent*> light;
	map<int32, UInstancedStaticMeshComponent*> newflower;
	map<int32, UInstancedStaticMeshComponent*> steel;

	UStaticMesh* SMAsset_Cube;

	TArray<int32> chunks_to_load;
};
