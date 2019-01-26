// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0)

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
