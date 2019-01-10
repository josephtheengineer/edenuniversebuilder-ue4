// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldFileManager.h"

#include <stdio.h>
//#include <curl/curl.h>

using namespace std;

size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream) {
    size_t written;
    written = fwrite(ptr, size, nmemb, stream);
    return written;
}

void UWorldFileManager::DownloadFile(FString url, FString outfilename)
{/*
        CURL *curl;
        FILE *fp;
        CURLcode res;
        //FString url = "http://stackoverflow.com";
        //char outfilename[FILENAME_MAX] = "page.html";
        curl = curl_easy_init();
        if (curl)
        {
                fp = fopen(TCHAR_TO_ANSI(*outfilename),"wb");
                curl_easy_setopt(curl, CURLOPT_URL, TCHAR_TO_ANSI(*url));
                curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, NULL);
                curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
                res = curl_easy_perform(curl);
                curl_easy_cleanup(curl);
                fclose(fp);
        }*/
}

void UWorldFileManager::Search(FString Query)
{
        FString ContentDir = FPaths::ConvertRelativePathToFull(FPaths::ProjectContentDir());
}

bool UWorldFileManager::FileSaveString(FString SaveTextB, FString FileNameB)
{
    return FFileHelper::SaveStringToFile(SaveTextB, *(FileNameB));
}

bool UWorldFileManager::FileLoadString(FString FileNameA, FString& SaveTextA)
{
    return FFileHelper::LoadFileToString(SaveTextA, *(FileNameA));
}

bool UWorldFileManager::FileLoadArray(FString FileNameA, TArray<FString>& SaveTextA)
{
    return FFileHelper::LoadFileToStringArray(SaveTextA, *(FileNameA));
}
