// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0)

#include "EdenUniverseBuilderGameMode.h"
#include "EdenUniverseBuilderHUD.h"
#include "EdenUniverseBuilderCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEdenUniverseBuilderGameMode::AEdenUniverseBuilderGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/EdenUniverseBuilder/Core/Characters/Player/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AEdenUniverseBuilderHUD::StaticClass();
}
