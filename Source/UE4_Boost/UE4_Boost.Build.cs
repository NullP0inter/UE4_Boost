// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class UE4_Boost : ModuleRules
{ 
    private string ThirdPartyPath
    {
        get { return Path.GetFullPath( Path.Combine( ModuleDirectory, "../../ThirdParty/" ) ); }
    }
	
	public UE4_Boost(TargetInfo Target)
	{
        PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "BoostInternalLibrary", "includes"));

        //PublicIncludePaths.Add("$(BOOST_HOME)");

        PublicSystemIncludePaths.Add(Path.Combine(ThirdPartyPath, "BoostInternalLibrary", "includes"));

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
        
        //PublicAdditionalLibraries.Add( Path.Combine(ThirdPartyPath, "BoostInternalLibrary", "x64", "Release", "boost_timer-vc140-mt-1_61.lib") );
        //PublicAdditionalLibraries.Add( Path.Combine(ThirdPartyPath, "BoostInternalLibrary", "x64", "Release", "libboost_timer-vc140-mt-1_61.lib") );

        // Delay-load the DLL, so we can load it from the right place first
        //PublicDelayLoadDLLs.Add( Path.Combine(ThirdPartyPath, "BoostInternalLibrary", "x64", "Release", "boost_timer-vc140-mt-1_61.dll") );
    }
}
