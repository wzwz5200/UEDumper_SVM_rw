
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OpenCVHelper

#pragma pack(push, 0x1)

/// Class /Script/OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOpenCVLensDistortionBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels
	// bool NotEqual_CompareLensDistortionModels(FOpenCVLensDistortionParameters& A, FOpenCVLensDistortionParameters& B);       // [0x19feed0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels
	// bool EqualEqual_CompareLensDistortionModels(FOpenCVLensDistortionParameters& A, FOpenCVLensDistortionParameters& B);     // [0x19fed70] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.DrawDisplacementMapToRenderTarget
	// void DrawDisplacementMapToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* OutputRenderTarget, class UTexture2D* PreComputedUndistortDisplacementMap); // [0x19feb20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.CreateUndistortUVDisplacementMap
	// class UTexture2D* CreateUndistortUVDisplacementMap(FOpenCVLensDistortionParameters& LensParameters, FIntPoint& ImageSize, float CroppingFactor, FOpenCVCameraViewInfo& CameraViewInfo); // [0x19fe950] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/OpenCVLensDistortion.OpenCVCameraViewInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FOpenCVCameraViewInfo
{ 
	float                                              HorizontalFOV;                                              // 0x0000   (0x0004)  
	float                                              VerticalFOV;                                                // 0x0004   (0x0004)  
	float                                              FocalLengthRatio;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/OpenCVLensDistortion.OpenCVLensDistortionParameters
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
struct FOpenCVLensDistortionParameters : FOpenCVLensDistortionParametersBase
{ 
};

#pragma pack(pop)


static_assert(sizeof(UOpenCVLensDistortionBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FOpenCVCameraViewInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FOpenCVLensDistortionParameters) == 0x0048); // 72 bytes (0x000048 - 0x000048)
