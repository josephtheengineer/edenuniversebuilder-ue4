// Fill out your copyright notice in the Description page of Project Settings.


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

void APrimeCalculator::RunPrimeTask(int32 Layer)
{
	(new FAutoDeleteAsyncTask<PrimeSearchTask>(Layer))->StartBackgroundTask();
}

void RunPrimeTaskOnMain(int32 Layer)
{
		PrimeSearchTask* task = new PrimeSearchTask(Layer);

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

		//execl("sh", "-c", "/home/josephtheengineer/Unreal\\ Projects/EdenUniverseBuilder/locus-amoenus /home/josephtheengineer/Unreal\\ Projects/EdenUniverseBuilder/DirectCity.eden srs 'slice 30' q");
		//system("/home/josephtheengineer/workspace/EdenProject/Engine/Converter/locus.sh");
		//const char * SLayer = UTF8_TO_TCHAR(PrimeCount.c_str();

		//FString str = path + "locus-amoenus";
		//str = path + "DirectCity.eden srs 'slice ";
		//str = str + SLayer + "' q";
}

void PrimeSearchTask::DoWork()
{
	//system(" > /home/josephtheengineer/workspace/EdenProject/Engine/Converter/world.out");
	//FString path = "/home/josephtheengineer/workspace/EdenProject/Engine/Converter/";
/*
	FString thingo = FString::FromInt(PrimeCount);
	std::string MyStdString(TCHAR_TO_UTF8(*thingo));

	FString myString(MyStdString.c_str());

	FString command = path + "locus-amoenus " + path + "DirectCity.eden srs 'slice " + myString;
	command = command + "' q";
	const char* commands(TCHAR_TO_UTF8(*command));

	UE_LOG(LogTemp, Warning, TEXT("Int %d"), PrimeCount );
	UE_LOG(LogTemp, Warning, TEXT("Woah %s"), *command);
	UE_LOG(LogTemp, Warning, TEXT("%s"), *commands);
	//system(commands);*/
	//system("/home/josephtheengineer/workspace/EdenProject/Engine/Converter/locus-amoenus /home/josephtheengineer/workspace/EdenProject/Engine/Converter/DirectCity.eden srs 'slice 12' q");
	//system("echo woah > /home/josephtheengineer/workspace/EdenProject/Engine/Converter/world.out");
}

void PrimeSearchTask::DoWorkMain()
{
	DoWork();
}
