// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0)

using UnrealBuildTool;

public class EdenUniverseBuilder : ModuleRules
{
	public EdenUniverseBuilder(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core",
                                                                    "CoreUObject",
                                                                    "Engine",
                                                                    "InputCore",
                                                                    "HeadMountedDisplay",
                                                                    "ProceduralMeshComponent",
                                                                    "Http",
                                                                    "Json",
                                                                    "JsonUtilities",
								    "ImageWrapper",
								    "RenderCore",
								    "zlib" });
	}
}
