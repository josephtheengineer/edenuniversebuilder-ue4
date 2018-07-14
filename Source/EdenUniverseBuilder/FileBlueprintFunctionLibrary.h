// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class EDENUNIVERSEBUILDER_API UFileBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	public:

		UFUNCTION(BlueprintCallable, Category = "save")
			static bool FileSaveString(FString SaveTextB, FString FileNameB);

		UFUNCTION(BlueprintPure, Category = "save")
			static bool FileLoadString(FString FileNameA, FString& SaveTextA);
	
	
};
