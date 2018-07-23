// Fill out your copyright notice in the Description page of Project Settings.
/*

#include "PrimeCalculator.h"


// Sets default values
APrimeCalculator::APrimeCalculator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrimeCalculator::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APrimeCalculator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APrimeCalculator::RunPrimeTask(int32 chunk)
{
	chunks = chunk;
	(new FAutoDeleteAsyncTask<PrimeSearchTask>(chunk))->StartBackgroundTask();
}

void RunPrimeTaskOnMain(int32 chunk)
{
		PrimeSearchTask* task = new PrimeSearchTask(chunk);

		task->DoWorkMain();
		delete task;
}

PrimeSearchTask::PrimeSearchTask(int32 _primeCount)
{
	PrimeCount = _primeCount;
}

PrimeSearchTask::~PrimeSearchTask()
{
		UE_LOG(LogTemp, Warning, TEXT("Task Finished!"));
}

void PrimeSearchTask::DoWork()
{
	//CurrentWorldConverter = ObjectInitializer.CreateDefaultSubobject<AWorldConverter>(this, TEXT("WorldConverter"));
	//ChunkInfo(chunks);

	//system(" > /home/josephtheengineer/workspace/EdenProject/Engine/Converter/world.out");
	//FString path = "/home/josephtheengineer/workspace/EdenProject/Engine/Converter/";

	FString thingo = FString::FromInt(PrimeCount);
	std::string MyStdString(TCHAR_TO_UTF8(*thingo));

	FString myString(MyStdString.c_str());

	FString command = path + "locus-amoenus " + path + "DirectCity.eden srs 'slice " + myString;
	command = command + "' q";
	const char* commands(TCHAR_TO_UTF8(*command));

	UE_LOG(LogTemp, Warning, TEXT("Int %d"), PrimeCount );
	UE_LOG(LogTemp, Warning, TEXT("Woah %s"), *command);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *commands);
	//system(commands);
	//system("/home/josephtheengineer/workspace/EdenProject/Engine/Converter/locus-amoenus /home/josephtheengineer/workspace/EdenProject/Engine/Converter/DirectCity.eden srs 'slice 12' q");
	//system("echo woah > /home/josephtheengineer/workspace/EdenProject/Engine/Converter/world.out");
}

void PrimeSearchTask::DoWorkMain()
{
	DoWork();
}
*/
