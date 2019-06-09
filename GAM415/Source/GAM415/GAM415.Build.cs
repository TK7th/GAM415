// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class GAM415 : ModuleRules
{
	public GAM415(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore",
            "HeadMountedDisplay", "PixelShader", "ComputeShader", "ProceduralMeshComponent", "RuntimeMeshComponent", "RHI", "RenderCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        // Uncomment if you are using Slate UI
        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "AIModule", "GameplayTasks" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
