// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/LensDistortionBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensDistortionBlueprintLibrary() {}
// Cross Module References
	FOO_API UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary_NoRegister();
	FOO_API UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Foo();
	FOO_API UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	FOO_API UScriptStruct* Z_Construct_UScriptStruct_FFooCameraModel();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	FOO_API UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels();
	FOO_API UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor();
	FOO_API UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels();
// End Cross Module References
	void ULensDistortionBlueprintLibrary::StaticRegisterNativesULensDistortionBlueprintLibrary()
	{
		UClass* Class = ULensDistortionBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawUVDisplacementToRenderTarget", (Native)&ULensDistortionBlueprintLibrary::execDrawUVDisplacementToRenderTarget },
			{ "EqualEqual_CompareLensDistortionModels", (Native)&ULensDistortionBlueprintLibrary::execEqualEqual_CompareLensDistortionModels },
			{ "GetUndistortOverscanFactor", (Native)&ULensDistortionBlueprintLibrary::execGetUndistortOverscanFactor },
			{ "NotEqual_CompareLensDistortionModels", (Native)&ULensDistortionBlueprintLibrary::execNotEqual_CompareLensDistortionModels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget()
	{
		struct LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms
		{
			const UObject* WorldContextObject;
			FFooCameraModel CameraModel;
			float DistortedHorizontalFOV;
			float DistortedAspectRatio;
			float UndistortOverscanFactor;
			UTextureRenderTarget2D* OutputRenderTarget;
			float OutputMultiply;
			float OutputAdd;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputAdd = { UE4CodeGen_Private::EPropertyClass::Float, "OutputAdd", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, OutputAdd), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutputMultiply = { UE4CodeGen_Private::EPropertyClass::Float, "OutputMultiply", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, OutputMultiply), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget = { UE4CodeGen_Private::EPropertyClass::Object, "OutputRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UndistortOverscanFactor = { UE4CodeGen_Private::EPropertyClass::Float, "UndistortOverscanFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, UndistortOverscanFactor), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistortedAspectRatio = { UE4CodeGen_Private::EPropertyClass::Float, "DistortedAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, DistortedAspectRatio), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistortedHorizontalFOV = { UE4CodeGen_Private::EPropertyClass::Float, "DistortedHorizontalFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, DistortedHorizontalFOV), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraModel_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraModel = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, CameraModel), Z_Construct_UScriptStruct_FFooCameraModel, METADATA_PARAMS(NewProp_CameraModel_MetaData, ARRAY_COUNT(NewProp_CameraModel_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputAdd,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputMultiply,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutputRenderTarget,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UndistortOverscanFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistortedAspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistortedHorizontalFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraModel,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Foo | Lens Distortion" },
				{ "CPP_Default_OutputAdd", "0.500000" },
				{ "CPP_Default_OutputMultiply", "0.500000" },
				{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
				{ "ToolTip", "Draws UV displacement map within the output render target.\n- Red & green channels hold the distortion displacement;\n- Blue & alpha channels hold the undistortion displacement.\n@param DistortedHorizontalFOV The desired horizontal FOV in the distorted render.\n@param DistortedAspectRatio The desired aspect ratio of the distorted render.\n@param UndistortOverscanFactor The factor of the overscan for the undistorted render.\n@param OutputRenderTarget The render target to draw to. Don't necessarily need to have same resolution or aspect ratio as distorted render.\n@param OutputMultiply The multiplication factor applied on the displacement.\n@param OutputAdd Value added to the multiplied displacement before storing into the output render target." },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionBlueprintLibrary, "DrawUVDisplacementToRenderTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels()
	{
		struct LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms
		{
			FFooCameraModel A;
			FFooCameraModel B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms, B), Z_Construct_UScriptStruct_FFooCameraModel, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms, A), Z_Construct_UScriptStruct_FFooCameraModel, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Foo | Lens Distortion" },
				{ "CompactNodeTitle", "==" },
				{ "DisplayName", "Equal (FooCameraModel)" },
				{ "Keywords", "== equal" },
				{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
				{ "ToolTip", "Returns true if A is equal to B (A == B)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionBlueprintLibrary, "EqualEqual_CompareLensDistortionModels", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor()
	{
		struct LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms
		{
			FFooCameraModel CameraModel;
			float DistortedHorizontalFOV;
			float DistortedAspectRatio;
			float UndistortOverscanFactor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UndistortOverscanFactor = { UE4CodeGen_Private::EPropertyClass::Float, "UndistortOverscanFactor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, UndistortOverscanFactor), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistortedAspectRatio = { UE4CodeGen_Private::EPropertyClass::Float, "DistortedAspectRatio", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, DistortedAspectRatio), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistortedHorizontalFOV = { UE4CodeGen_Private::EPropertyClass::Float, "DistortedHorizontalFOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, DistortedHorizontalFOV), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraModel_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraModel = { UE4CodeGen_Private::EPropertyClass::Struct, "CameraModel", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, CameraModel), Z_Construct_UScriptStruct_FFooCameraModel, METADATA_PARAMS(NewProp_CameraModel_MetaData, ARRAY_COUNT(NewProp_CameraModel_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UndistortOverscanFactor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistortedAspectRatio,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DistortedHorizontalFOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraModel,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Foo | Lens Distortion" },
				{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
				{ "ToolTip", "Returns the overscan factor required for the undistort rendering to avoid unrendered distorted pixels." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionBlueprintLibrary, "GetUndistortOverscanFactor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels()
	{
		struct LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms
		{
			FFooCameraModel A;
			FFooCameraModel B;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Struct, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms, B), Z_Construct_UScriptStruct_FFooCameraModel, METADATA_PARAMS(NewProp_B_MetaData, ARRAY_COUNT(NewProp_B_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Struct, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms, A), Z_Construct_UScriptStruct_FFooCameraModel, METADATA_PARAMS(NewProp_A_MetaData, ARRAY_COUNT(NewProp_A_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Foo | Lens Distortion" },
				{ "CompactNodeTitle", "!=" },
				{ "DisplayName", "NotEqual (FooCameraModel)" },
				{ "Keywords", "!= not equal" },
				{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
				{ "ToolTip", "Returns true if A is not equal to B (A != B)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionBlueprintLibrary, "NotEqual_CompareLensDistortionModels", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary_NoRegister()
	{
		return ULensDistortionBlueprintLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_Foo,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget, "DrawUVDisplacementToRenderTarget" }, // 1079349051
				{ &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels, "EqualEqual_CompareLensDistortionModels" }, // 3526738483
				{ &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor, "GetUndistortOverscanFactor" }, // 1071787712
				{ &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels, "NotEqual_CompareLensDistortionModels" }, // 1434605234
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LensDistortionBlueprintLibrary.h" },
				{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ULensDistortionBlueprintLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ULensDistortionBlueprintLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00080080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULensDistortionBlueprintLibrary, 3326288064);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULensDistortionBlueprintLibrary(Z_Construct_UClass_ULensDistortionBlueprintLibrary, &ULensDistortionBlueprintLibrary::StaticClass, TEXT("/Script/Foo"), TEXT("ULensDistortionBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULensDistortionBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
