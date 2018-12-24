// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "GameFramework/Actor.h"
#include "GenericPlatformFile.h"
#include "PlatformFilemanager.h"
#include "WorldFileManager.generated.h"

UENUM(BlueprintType, Category = "HTTP")
enum class EDownloadResult : uint8
{
	Success,
	DownloadFailed,
	SaveFailed,
	DirectoryCreationFailed
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResult, const EDownloadResult, Result);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnProgress, const int32, BytesSent, const int32, BytesReceived, const int32, ContentLength);

UCLASS()
class EDENUNIVERSEBUILDER_API AWorldFileManager : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AWorldFileManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

        /**
         * Kick off the Http request for the test and wait for delegate to be called
         */
        void Run(void);

        /**
         * Delegate called when the request completes
         *
         * @param HttpRequest - object that started/processed the request
         * @param HttpResponse - optional response object if request completed
         * @param bSucceeded - true if Url connection was made and response was received
         */
        void RequestComplete(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);

        /**
         * @param Verb - verb to use for request (GET,POST,DELETE,etc)
         * @param Payload - optional payload string
         * @param Url - url address to connect to
         * @param InIterations - total test iterations to run
         */

        UPROPERTY(EditAnywhere)
        FString Verb;

        UPROPERTY(EditAnywhere)
        FString Payload;

        UPROPERTY(EditAnywhere)
        FString Url;

        UPROPERTY(EditAnywhere)
        int32 TestsToRun;

        UPROPERTY(EditAnywhere)
        FString FileSavePath;
};
