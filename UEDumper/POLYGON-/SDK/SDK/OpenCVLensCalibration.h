
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OpenCVLensDistortion

#pragma pack(push, 0x1)

/// Class /Script/OpenCVLensCalibration.OpenCVLensCalibrator
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UOpenCVLensCalibrator : public UObject
{ 
public:
	FVector2D                                          MinimumCornerCoordinates;                                   // 0x0028   (0x0010)  
	FVector2D                                          MaximumCornerCoordinates;                                   // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0048   (0x0048)  MISSED


	/// Functions
	// Function /Script/OpenCVLensCalibration.OpenCVLensCalibrator.FeedRenderTarget
	// bool FeedRenderTarget(class UTextureRenderTarget2D* TextureRenderTarget);                                                // [0x19fae20] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenCVLensCalibration.OpenCVLensCalibrator.FeedImage
	// bool FeedImage(FString FilePath);                                                                                        // [0x19fad70] Final|Native|Public|BlueprintCallable 
	// Function /Script/OpenCVLensCalibration.OpenCVLensCalibrator.CreateCalibrator
	// class UOpenCVLensCalibrator* CreateCalibrator(int32_t BoardWidth, int32_t BoardHeight, float SquareSize, bool bUseFisheyeModel); // [0x19fab70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OpenCVLensCalibration.OpenCVLensCalibrator.CalculateLensParameters
	// bool CalculateLensParameters(FOpenCVLensDistortionParameters& LensDistortionParameters, float& MarginOfError, FOpenCVCameraViewInfo& CameraViewInfo); // [0x19fa9e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UOpenCVLensCalibrator) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(offsetof(UOpenCVLensCalibrator, MinimumCornerCoordinates) == 0x0028);
static_assert(offsetof(UOpenCVLensCalibrator, MaximumCornerCoordinates) == 0x0038);
