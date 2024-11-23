// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Homework_W01 : ModuleRules
{
	public Homework_W01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
