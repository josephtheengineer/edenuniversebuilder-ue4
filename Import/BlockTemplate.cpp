// Fill out your copyright notice in the Description page of Project Settings.

#include "BlockTemplate.h"


// Sets default values
ABlockTemplate::ABlockTemplate()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABlockTemplate::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlockTemplate::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

