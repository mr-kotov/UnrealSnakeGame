// Snake Game, Copyright LifeEXE

using UnrealBuildTool;

public class SnakeGame : ModuleRules
{
	public SnakeGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG" });
		PublicIncludePaths.AddRange(new string[] { "SnakeGame", "Core", "Framework" });

		if (Target.Configuration != UnrealTargetConfiguration.Shipping)
		{
			PublicDependencyModuleNames.Add("FunctionalTesting");
		}
	}
}