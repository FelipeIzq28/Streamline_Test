// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Streamline_Test : ModuleRules
{
	public Streamline_Test(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
