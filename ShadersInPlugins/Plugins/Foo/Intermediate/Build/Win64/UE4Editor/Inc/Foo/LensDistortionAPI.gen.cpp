// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LensDistortionAPI.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensDistortionAPI() {}
// Cross Module References
	FOO_API UScriptStruct* Z_Construct_UScriptStruct_FFooCameraModel();
	UPackage* Z_Construct_UPackage__Script_Foo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FFooCameraModel::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOO_API uint32 Get_Z_Construct_UScriptStruct_FFooCameraModel_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFooCameraModel, Z_Construct_UPackage__Script_Foo(), TEXT("FooCameraModel"), sizeof(FFooCameraModel), Get_Z_Construct_UScriptStruct_FFooCameraModel_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFooCameraModel(FFooCameraModel::StaticStruct, TEXT("/Script/Foo"), TEXT("FooCameraModel"), false, nullptr, nullptr);
static struct FScriptStruct_Foo_StaticRegisterNativesFFooCameraModel
{
	FScriptStruct_Foo_StaticRegisterNativesFFooCameraModel()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FooCameraModel")),new UScriptStruct::TCppStructOps<FFooCameraModel>);
	}
} ScriptStruct_Foo_StaticRegisterNativesFFooCameraModel;
	UScriptStruct* Z_Construct_UScriptStruct_FFooCameraModel()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFooCameraModel_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Foo();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FooCameraModel"), sizeof(FFooCameraModel), Get_Z_Construct_UScriptStruct_FFooCameraModel_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
				{ "ToolTip", "Mathematic camera model for lens distortion/undistortion.\n\nCamera matrix =\n| F.X  0  C.x |\n|  0  F.Y C.Y |\n|  0   0   1  |" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFooCameraModel>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[] = {
				{ "Category", "Lens Distortion|Camera Model" },
				{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
				{ "ToolTip", "Camera matrix's Cx and Cy." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_C = { UE4CodeGen_Private::EPropertyClass::Struct, "C", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FFooCameraModel, C), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_C_MetaData, ARRAY_COUNT(NewProp_C_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_F_MetaData[] = {
				{ "Category", "Lens Distortion|Camera Model" },
				{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
				{ "ToolTip", "Camera matrix's Fx and Fy." },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_F = { UE4CodeGen_Private::EPropertyClass::Struct, "F", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FFooCameraModel, F), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_F_MetaData, ARRAY_COUNT(NewProp_F_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P2_MetaData[] = {
				{ "Category", "Lens Distortion|Camera Model" },
				{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
				{ "ToolTip", "Tangential parameter #2." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_P2 = { UE4CodeGen_Private::EPropertyClass::Float, "P2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FFooCameraModel, P2), METADATA_PARAMS(NewProp_P2_MetaData, ARRAY_COUNT(NewProp_P2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_P1_MetaData[] = {
				{ "Category", "Lens Distortion|Camera Model" },
				{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
				{ "ToolTip", "Tangential parameter #1." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_P1 = { UE4CodeGen_Private::EPropertyClass::Float, "P1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FFooCameraModel, P1), METADATA_PARAMS(NewProp_P1_MetaData, ARRAY_COUNT(NewProp_P1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K3_MetaData[] = {
				{ "Category", "Lens Distortion|Camera Model" },
				{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
				{ "ToolTip", "Radial parameter #3." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_K3 = { UE4CodeGen_Private::EPropertyClass::Float, "K3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FFooCameraModel, K3), METADATA_PARAMS(NewProp_K3_MetaData, ARRAY_COUNT(NewProp_K3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K2_MetaData[] = {
				{ "Category", "Lens Distortion|Camera Model" },
				{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
				{ "ToolTip", "Radial parameter #2." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_K2 = { UE4CodeGen_Private::EPropertyClass::Float, "K2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FFooCameraModel, K2), METADATA_PARAMS(NewProp_K2_MetaData, ARRAY_COUNT(NewProp_K2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K1_MetaData[] = {
				{ "Category", "Lens Distortion|Camera Model" },
				{ "ModuleRelativePath", "Classes/LensDistortionAPI.h" },
				{ "ToolTip", "Radial parameter #1." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_K1 = { UE4CodeGen_Private::EPropertyClass::Float, "K1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000200000005, 1, nullptr, STRUCT_OFFSET(FFooCameraModel, K1), METADATA_PARAMS(NewProp_K1_MetaData, ARRAY_COUNT(NewProp_K1_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_C,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_F,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_P2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_P1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_K3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_K2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_K1,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_Foo,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"FooCameraModel",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FFooCameraModel),
				alignof(FFooCameraModel),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFooCameraModel_CRC() { return 254953473U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
