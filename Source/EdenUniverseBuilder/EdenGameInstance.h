// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//Essential Include
#include "Engine/GameInstance.h"

#include "EdenGameInstance.generated.h"

UCLASS()
class EDENUNIVERSEBUILDER_API UEdenGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
        UEdenGameInstance(const FObjectInitializer& ObjectInitializer);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MainMenu)
	FString WorldPath = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir()) + "/Worlds/testWorld.eden";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UserInterface)
	FString SearchPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UserInterface)
	FString SearchName;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=MainMenu)
        TMap<FString, bool> Options;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UserInterface)
        int Tool = 0;

        UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UserInterface)
        int BlockToPlace = 13;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=WorldDecoder)
	float RenderDistance = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=WorldDecoder)
	int ChunkLimit = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=UserInterface)
	int WidgetToDisplay = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=WorldDecoder)
	FVector StartingPlayerPosition = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Logging)
	FString LogLevel = "Warning";
};
