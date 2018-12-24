// Fill out your copyright notice in the Description page of Project Settings.


#include "WorldFileManager.h"


// Sets default values
AWorldFileManager::AWorldFileManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWorldFileManager::BeginPlay()
{
	Super::BeginPlay();
        Run();
}

// Called every frame
void AWorldFileManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWorldFileManager::Run(void)
{
	UE_LOG(LogTemp, Warning, TEXT("Starting test [%s] Url=[%s]"),
		*Verb, *Url);

	for (int Idx=0; Idx < TestsToRun; Idx++)
	{
		TSharedPtr<IHttpRequest> Request = FHttpModule::Get().CreateRequest();
		Request->OnProcessRequestComplete().BindUObject(this, &AWorldFileManager::RequestComplete);
		Request->SetURL(Url);
		if (Payload.Len() > 0)
		{
			Request->SetContentAsString(Payload);
		}
		Request->SetVerb(Verb);
		Request->ProcessRequest();
	}
}

void AWorldFileManager::RequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded)
{
	if (!HttpResponse.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Test failed. NULL response"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Completed test [%s] Url=[%s] Response=[%d] [%s]"),
			*HttpRequest->GetVerb(),
			*HttpRequest->GetURL(),
			HttpResponse->GetResponseCode(),
			*HttpResponse->GetContentAsString());
	}

	if ((--TestsToRun) <= 0)
	{
		HttpRequest->OnProcessRequestComplete().Unbind();
		// Done with the test. Delegate should always gets called
		delete this;
	}



        RemoveFromRoot();
        //Request->OnProcessRequestComplete().Unbind();

        if (HttpResponse.IsValid() && EHttpResponseCodes::IsOk(HttpResponse->GetResponseCode()))
        {
                // SAVE FILE
                IPlatformFile& PlatformFile = FPlatformFileManager::Get().GetPlatformFile();

                // create save directory if not existent
                FString Path, Filename, Extension;
                FPaths::Split(FileSavePath, Path, Filename, Extension);
                if (!PlatformFile.DirectoryExists(*Path))
                {
                        if(!PlatformFile.CreateDirectoryTree(*Path))
                        {
                                UE_LOG(LogTemp, Error, TEXT("Download directory creation failed"));
                                return;
                        }
                }

                // open/create the file
                IFileHandle* FileHandle = PlatformFile.OpenWrite(*FileSavePath);
                if (FileHandle)
                {
                        // write the file
                        FileHandle->Write(HttpResponse->GetContent().GetData(), HttpResponse->GetContentLength());
                        // Close the file
                        delete FileHandle;

                        UE_LOG(LogTemp, Log, TEXT("Download was successfull"));
                }
                else
                {
                        UE_LOG(LogTemp, Error, TEXT("Download save failed"));
                }
        }
        else
        {
                UE_LOG(LogTemp, Error, TEXT("Download failed"));
        }
}
