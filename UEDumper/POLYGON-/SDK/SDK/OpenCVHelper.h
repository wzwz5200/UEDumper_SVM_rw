
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/OpenCVHelper.EOpenCVArucoDictionary
/// Size: 0x01 (1 bytes)
enum class EOpenCVArucoDictionary : uint8_t
{
	EOpenCVArucoDictionary__Dict4x4                                                  = 0,
	EOpenCVArucoDictionary__Dict5x5                                                  = 1,
	EOpenCVArucoDictionary__Dict6x6                                                  = 2,
	EOpenCVArucoDictionary__Dict7x7                                                  = 3,
	EOpenCVArucoDictionary__DictOriginal                                             = 4
};

/// Enum /Script/OpenCVHelper.EOpenCVArucoDictionarySize
/// Size: 0x01 (1 bytes)
enum class EOpenCVArucoDictionarySize : uint8_t
{
	EOpenCVArucoDictionarySize__DictSize50                                           = 0,
	EOpenCVArucoDictionarySize__DictSize100                                          = 1,
	EOpenCVArucoDictionarySize__DictSize250                                          = 2,
	EOpenCVArucoDictionarySize__DictSize1000                                         = 3
};

/// Class /Script/OpenCVHelper.OpenCVBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOpenCVBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OpenCVHelper.OpenCVBlueprintFunctionLibrary.OpenCVChessboardDetectCorners
	// int32_t OpenCVChessboardDetectCorners(class UTextureRenderTarget2D* InRenderTarget, FIntPoint InPatternSize, bool bDebugDrawCorners, class UTexture2D*& OutDebugTexture, TArray<FVector2D>& OutDetectedCorners); // [0x1a02030] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OpenCVHelper.OpenCVBlueprintFunctionLibrary.OpenCVArucoDetectMarkers
	// int32_t OpenCVArucoDetectMarkers(class UTextureRenderTarget2D* InRenderTarget, EOpenCVArucoDictionary InDictionary, EOpenCVArucoDictionarySize InDictionarySize, bool bDebugDrawMarkers, bool bEstimatePose, float InMarkerLengthInMeters, FOpenCVLensDistortionParametersBase& InLensDistortionParameters, class UTexture2D*& OutDebugTexture, TArray<FOpenCVArucoDetectedMarker>& OutDetectedMarkers); // [0x1a01ce0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/OpenCVHelper.OpenCVLensDistortionParametersBase
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FOpenCVLensDistortionParametersBase
{ 
	float                                              K1;                                                         // 0x0000   (0x0004)  
	float                                              K2;                                                         // 0x0004   (0x0004)  
	float                                              P1;                                                         // 0x0008   (0x0004)  
	float                                              P2;                                                         // 0x000C   (0x0004)  
	float                                              K3;                                                         // 0x0010   (0x0004)  
	float                                              K4;                                                         // 0x0014   (0x0004)  
	float                                              K5;                                                         // 0x0018   (0x0004)  
	float                                              K6;                                                         // 0x001C   (0x0004)  
	FVector2D                                          F;                                                          // 0x0020   (0x0010)  
	FVector2D                                          C;                                                          // 0x0030   (0x0010)  
	bool                                               bUseFisheyeModel;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/OpenCVHelper.OpenCVArucoDetectedMarker
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FOpenCVArucoDetectedMarker
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVector2D>                                  Corners;                                                    // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Pose;                                                       // 0x0020   (0x0060)  
};

#pragma pack(pop)


static_assert(sizeof(UOpenCVBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FOpenCVLensDistortionParametersBase) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FOpenCVArucoDetectedMarker) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(offsetof(FOpenCVLensDistortionParametersBase, F) == 0x0020);
static_assert(offsetof(FOpenCVLensDistortionParametersBase, C) == 0x0030);
static_assert(offsetof(FOpenCVArucoDetectedMarker, Corners) == 0x0008);
static_assert(offsetof(FOpenCVArucoDetectedMarker, Pose) == 0x0020);
