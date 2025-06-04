
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets

#pragma pack(push, 0x1)

/// Class /Script/ImgMedia.ImgMediaSource
/// Size: 0x00D0 (208 bytes) (0x000088 - 0x0000D0) align 8 MaxSize: 0x00D0
class UImgMediaSource : public UBaseMediaSource
{ 
public:
	bool                                               IsPathRelativeToProjectRoot;                                // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0089   (0x0003)  MISSED
	FFrameRate                                         FrameRateOverride;                                          // 0x008C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FString                                            ProxyOverride;                                              // 0x0098   (0x0010)  
	bool                                               bFillGapsInSequence;                                        // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FDirectoryPath                                     SequencePath;                                               // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x00C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/ImgMedia.ImgMediaSource.SetTokenizedSequencePath
	// void SetTokenizedSequencePath(FString Path);                                                                             // [0x23f8290] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.SetSequencePath
	// void SetSequencePath(FString Path);                                                                                      // [0x23f81f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.SetMipLevelDistance
	// void SetMipLevelDistance(float Distance);                                                                                // [0x23f8180] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.RemoveTargetObject
	// void RemoveTargetObject(class AActor* InActor);                                                                          // [0x23f8010] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.RemoveGlobalCamera
	// void RemoveGlobalCamera(class AActor* InActor);                                                                          // [0x23f7d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.GetSequencePath
	// FString GetSequencePath();                                                                                               // [0x23f7fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.GetProxies
	// void GetProxies(TArray<FString>& OutProxies);                                                                            // [0x23f7e10] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ImgMedia.ImgMediaSource.AddTargetObject
	// void AddTargetObject(class AActor* InActor);                                                                             // [0x23f7da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImgMedia.ImgMediaSource.AddGlobalCamera
	// void AddGlobalCamera(class AActor* InActor);                                                                             // [0x23f7d30] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ImgMedia.ImgMediaSourceCustomizationSequenceProxy
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FImgMediaSourceCustomizationSequenceProxy
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UImgMediaSource) == 0x00D0); // 208 bytes (0x000088 - 0x0000D0)
static_assert(sizeof(FImgMediaSourceCustomizationSequenceProxy) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UImgMediaSource, FrameRateOverride) == 0x008C);
static_assert(offsetof(UImgMediaSource, ProxyOverride) == 0x0098);
static_assert(offsetof(UImgMediaSource, SequencePath) == 0x00B0);
