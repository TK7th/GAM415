// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TyreeFuller_Plugin.h"

#define LOCTEXT_NAMESPACE "FTyreeFuller_PluginModule"

void FTyreeFuller_PluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	// Display message to the Output Log
	UE_LOG(LogTemp, Warning, TEXT("Hello Crazy World!"));
}

void FTyreeFuller_PluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTyreeFuller_PluginModule, TyreeFuller_Plugin)