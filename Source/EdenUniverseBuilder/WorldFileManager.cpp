// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0)


#include "WorldFileManager.h"

using namespace std;

bool UWorldFileManager::FileSaveString(FString SaveTextB, FString FileNameB)
{
        return FFileHelper::SaveStringToFile(SaveTextB, *(FileNameB));
}

bool UWorldFileManager::FileSaveStringArray(TArray<FString> SaveTextB, FString FileNameB)
{
        return FFileHelper::SaveStringArrayToFile(SaveTextB, *(FileNameB));
}


bool UWorldFileManager::FileLoadString(FString FileNameA, FString& SaveTextA)
{
        return FFileHelper::LoadFileToString(SaveTextA, *(FileNameA));
}

bool UWorldFileManager::FileLoadArray(FString FileNameA, TArray<FString>& SaveTextA)
{
        return FFileHelper::LoadFileToStringArray(SaveTextA, *(FileNameA));
}

bool UWorldFileManager::DeleteFile(FString FileName)
{
        return FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*FileName);
}
/*
TArray<uint8> UWorldFileManager::DecompressFile(TArray<uint8> &compressedData)
{
        TArray<uint8> UncompressedBinaryArray;
        UncompressedBinaryArray.SetNum(compressedData.Num() * 1032);

        //int ret;
        z_stream strm;
        strm.zalloc = Z_NULL;
        strm.zfree = Z_NULL;
        strm.opaque = Z_NULL;

        strm.avail_in = compressedData.Num();
        strm.next_in = (Bytef *)compressedData.GetData();
        strm.avail_out = UncompressedBinaryArray.Num();
        strm.next_out = (Bytef *)UncompressedBinaryArray.GetData();

        // the actual DE-compression work.
        inflateInit(&strm);
        inflate(&strm, Z_FINISH);
        inflateEnd(&strm);

        return UncompressedBinaryArray.GetData());

        //FCompression::UncompressMemory(COMPRESS_ZLIB, (void*)UncompressedContent.GetData(), UncompressedContent.Num(), (const void*)Content.GetData(), Content.Num(), false, DEFAULT_ZLIB_BIT_WINDOW | 16)
}*/
