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
	FString WorldPath = "/home/josephtheengineer/workspace/edenproject/EdenUniverseBuilder/Content/Worlds/testWorld.eden";

};
