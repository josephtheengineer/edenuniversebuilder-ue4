// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0)

#pragma once

#include "Engine.h"

/**
 *
 */
class EDENUNIVERSEBUILDER_API Debug
{
public:
	Debug();
	~Debug();
	FString LogLevel = "Warning";
	bool GetLogLevelFromString(FString Level, int& IntLevel);
	bool SetLogLevel(FString Level);
	bool Log(FString Message, FString Level);
	bool LogFloat(FString MessageBefore, float Variable, FString MessageAfter, FString Level);
	bool LogInt(FString MessageBefore, int Variable, FString MessageAfter, FString Level);
};
