// Licensed under the Apache License, Version 2.0 (www.apache.org/licenses/LICENSE-2.0)

using UnrealBuildTool;
using System.IO;

public class EdenUniverseBuilder : ModuleRules
{
	public EdenUniverseBuilder(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		//if(Target.Platform == UnrealTargetPlatform.Android)
		//{
			// zlib libraries
			//PublicAdditionalLibraries.Add(Path.Combine(EngineDirectory, "Source", Target.UEThirdPartySourceDirectory, "zlib", "v1.2.8", "lib", "Linux", "x86_64-unknown-linux-gnu", "libz.a"));
		//} else if (Target.Platform == UnrealTargetPlatform.Windows) {
		//	// zlib libraries
		//	PublicAdditionalLibraries.Add(Path.Combine(EngineDirectory, "Source", Target.UEThirdPartySourceDirectory, "zlib", "v1.2.8", "lib", "Linux", "x86_64-unknown-linux-gnu", "libz.a"));
		//}

		// zLib includes
		//PublicIncludePaths.Add(Path.Combine(EngineDirectory, "Source", Target.UEThirdPartySourceDirectory, "zlib"));

		//AddEngineThirdPartyPrivateStaticDependencies(Target, "zlib");

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
