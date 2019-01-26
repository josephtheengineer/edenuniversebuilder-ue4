// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0)

#include "Debug.h"

//==============================================================================
// Constructor
//==============================================================================
Debug::Debug()
{
}

//==============================================================================
// Deconstructor
//==============================================================================
Debug::~Debug()
{
}

//==============================================================================
// SetLogLevel
//==============================================================================
bool Debug::SetLogLevel(FString Level)
{
        if (LogLevel == Level) {
                Log("Log level did not change.", "Debug");
                return false;
        } else {
                LogLevel = Level;
                return true;
        }
}

//==============================================================================
// GetLogLevelFromString
//==============================================================================
bool Debug::GetLogLevelFromString(FString Level, int& IntLevel)
{
        if (Level == "Off")
        {
                IntLevel = -1;
        }
        else if (Level == "Fatal")
        {
                IntLevel = 0;
        }
        else if (Level == "Error")
        {
                IntLevel = 1;
        }
        else if (Level == "Warn")
        {
                IntLevel = 2;
        }
        else if (Level == "Info")
        {
                IntLevel = 3;
        }
        else if (Level == "Debug")
        {
                IntLevel = 4;
        }
        else if (Level == "Trace")
        {
                IntLevel = 5;
        } else {
                return false;
        }
        return true;
}

//==============================================================================
// Log
//==============================================================================
bool Debug::Log(FString Message, FString Level)
{
        int IntLevel = 0;
        int IntLogLevel = 0;

        GetLogLevelFromString(Level, IntLevel);
        GetLogLevelFromString(LogLevel, IntLogLevel);

        if (IntLevel >= IntLogLevel)
        {
                GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("%s: %s"), *Level, *Message));
                UE_LOG(LogTemp, Log, TEXT("%s: %s"), *Level, *Message);
                return true;
        }
        else
        {
                return false;
        }
}

//==============================================================================
// Log
//==============================================================================
bool Debug::LogFloat(FString MessageBefore, float Variable, FString MessageAfter, FString Level)
{
        int IntLevel = 0;
        int IntLogLevel = 0;

        GetLogLevelFromString(Level, IntLevel);
        GetLogLevelFromString(LogLevel, IntLogLevel);

        if (IntLevel >= IntLogLevel)
        {
                GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("%s: %s %f %s"), *Level, *MessageBefore, Variable, *MessageAfter));
                UE_LOG(LogTemp, Log, TEXT("%s: %s %f %s"), *Level, *MessageBefore, Variable, *MessageAfter);
                return true;
        }
        else
        {
                return false;
        }
}

//==============================================================================
// Log
//==============================================================================
bool Debug::LogInt(FString MessageBefore, int Variable, FString MessageAfter, FString Level)
{
        int IntLevel = 0;
        int IntLogLevel = 0;

        GetLogLevelFromString(Level, IntLevel);
        GetLogLevelFromString(LogLevel, IntLogLevel);

        if (IntLevel >= IntLogLevel)
        {
                GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Yellow, FString::Printf(TEXT("%s: %s %d %s"), *Level, *MessageBefore, Variable, *MessageAfter));
                UE_LOG(LogTemp, Log, TEXT("%s: %s %d %s"), *Level, *MessageBefore, Variable, *MessageAfter);
                return true;
        }
        else
        {
                return false;
        }
}
