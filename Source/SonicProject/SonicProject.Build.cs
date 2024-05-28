// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SonicProject : ModuleRules
{
	public SonicProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
