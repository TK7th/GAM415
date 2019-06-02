// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFooCameraModel;
class UObject;
class UTextureRenderTarget2D;
#ifdef FOO_LensDistortionBlueprintLibrary_generated_h
#error "LensDistortionBlueprintLibrary.generated.h already included, missing '#pragma once' in LensDistortionBlueprintLibrary.h"
#endif
#define FOO_LensDistortionBlueprintLibrary_generated_h

#define ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels) \
	{ \
		P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULensDistortionBlueprintLibrary::NotEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels) \
	{ \
		P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULensDistortionBlueprintLibrary::EqualEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawUVDisplacementToRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_CameraModel); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DistortedHorizontalFOV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DistortedAspectRatio); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UndistortOverscanFactor); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutputMultiply); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutputAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULensDistortionBlueprintLibrary::DrawUVDisplacementToRenderTarget(Z_Param_WorldContextObject,Z_Param_Out_CameraModel,Z_Param_DistortedHorizontalFOV,Z_Param_DistortedAspectRatio,Z_Param_UndistortOverscanFactor,Z_Param_OutputRenderTarget,Z_Param_OutputMultiply,Z_Param_OutputAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor) \
	{ \
		P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_CameraModel); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DistortedHorizontalFOV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DistortedAspectRatio); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_UndistortOverscanFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULensDistortionBlueprintLibrary::GetUndistortOverscanFactor(Z_Param_Out_CameraModel,Z_Param_DistortedHorizontalFOV,Z_Param_DistortedAspectRatio,Z_Param_Out_UndistortOverscanFactor); \
		P_NATIVE_END; \
	}


#define ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNotEqual_CompareLensDistortionModels) \
	{ \
		P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULensDistortionBlueprintLibrary::NotEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqualEqual_CompareLensDistortionModels) \
	{ \
		P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=ULensDistortionBlueprintLibrary::EqualEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawUVDisplacementToRenderTarget) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_CameraModel); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DistortedHorizontalFOV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DistortedAspectRatio); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_UndistortOverscanFactor); \
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutputMultiply); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_OutputAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULensDistortionBlueprintLibrary::DrawUVDisplacementToRenderTarget(Z_Param_WorldContextObject,Z_Param_Out_CameraModel,Z_Param_DistortedHorizontalFOV,Z_Param_DistortedAspectRatio,Z_Param_UndistortOverscanFactor,Z_Param_OutputRenderTarget,Z_Param_OutputMultiply,Z_Param_OutputAdd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUndistortOverscanFactor) \
	{ \
		P_GET_STRUCT_REF(FFooCameraModel,Z_Param_Out_CameraModel); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DistortedHorizontalFOV); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DistortedAspectRatio); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_UndistortOverscanFactor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		ULensDistortionBlueprintLibrary::GetUndistortOverscanFactor(Z_Param_Out_CameraModel,Z_Param_DistortedHorizontalFOV,Z_Param_DistortedAspectRatio,Z_Param_Out_UndistortOverscanFactor); \
		P_NATIVE_END; \
	}


#define ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULensDistortionBlueprintLibrary(); \
	friend FOO_API class UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary(); \
public: \
	DECLARE_CLASS(ULensDistortionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Foo"), FOO_API) \
	DECLARE_SERIALIZER(ULensDistortionBlueprintLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULensDistortionBlueprintLibrary(); \
	friend FOO_API class UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary(); \
public: \
	DECLARE_CLASS(ULensDistortionBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Foo"), FOO_API) \
	DECLARE_SERIALIZER(ULensDistortionBlueprintLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOO_API ULensDistortionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOO_API, ULensDistortionBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOO_API ULensDistortionBlueprintLibrary(ULensDistortionBlueprintLibrary&&); \
	FOO_API ULensDistortionBlueprintLibrary(const ULensDistortionBlueprintLibrary&); \
public:


#define ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FOO_API ULensDistortionBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FOO_API ULensDistortionBlueprintLibrary(ULensDistortionBlueprintLibrary&&); \
	FOO_API ULensDistortionBlueprintLibrary(const ULensDistortionBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOO_API, ULensDistortionBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULensDistortionBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULensDistortionBlueprintLibrary)


#define ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_11_PROLOG
#define ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_RPC_WRAPPERS \
	ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_INCLASS \
	ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_INCLASS_NO_PURE_DECLS \
	ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h_14_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LensDistortionBlueprintLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShadersInPlugins_Plugins_Foo_Source_Foo_Classes_LensDistortionBlueprintLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
