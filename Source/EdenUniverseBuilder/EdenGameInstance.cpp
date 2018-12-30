// Fill out your copyright notice in the Description page of Project Settings.

#include "EdenGameInstance.h"

UEdenGameInstance::UEdenGameInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
        Options.Add("Music", true);
        Options.Add("SoundEffects", true);
        Options.Add("Health", true);
        Options.Add("AutoJump", true);
        Options.Add("Creatures", true);
        Options.Add("DeveloperMode", false);
}
