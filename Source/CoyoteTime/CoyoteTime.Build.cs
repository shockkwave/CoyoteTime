// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CoyoteTime : ModuleRules
{
	public CoyoteTime(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
