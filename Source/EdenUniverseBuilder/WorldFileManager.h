// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GenericPlatformFile.h"
#include "PlatformFilemanager.h"
#include "WorldFileManager.generated.h"

/**
 *
 */
UCLASS()
class EDENUNIVERSEBUILDER_API UWorldFileManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

        UFUNCTION(BlueprintCallable, Category = "FileManager")
        static bool FileSaveString(FString SaveTextB, FString FileNameB);

	UFUNCTION(BlueprintCallable, Category = "FileManager")
	static bool FileSaveStringArray(TArray<FString> SaveTextB, FString FileNameB);

        UFUNCTION(BlueprintPure, Category = "FileManager")
        static bool FileLoadString(FString FileNameA, FString& SaveTextA);

        UFUNCTION(BlueprintPure, Category = "FileManager")
        static bool FileLoadArray(FString FileNameA, TArray<FString>& SaveTextA);

	UFUNCTION(BlueprintCallable, Category = "FileManager")
	static bool DeleteFile(FString FileName);
};
