// Fill out your copyright notice in the Description page of Project Settings.

#include "FileBlueprintFunctionLibrary.h"

bool UFileBlueprintFunctionLibrary::FileSaveString(FString SaveTextB, FString FileNameB)
{
	return FFileHelper::SaveStringToFile(SaveTextB, *(FPaths::GameDir() + FileNameB));
}

bool UFileBlueprintFunctionLibrary::FileLoadString(FString FileNameA, FString& SaveTextA)
{
	return FFileHelper::LoadFileToString(SaveTextA, *(FPaths::GameDir() + FileNameA));
}
