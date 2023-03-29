// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Team2CarbonGame : ModuleRules
{
	public Team2CarbonGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
