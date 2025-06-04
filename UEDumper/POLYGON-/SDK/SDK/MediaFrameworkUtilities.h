
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
/// dependency: MediaIOCore
/// dependency: OpenCVLensDistortion
/// dependency: TimeManagement

#pragma pack(push, 0x1)

/// Class /Script/MediaFrameworkUtilities.MediaBundle
/// Size: 0x0118 (280 bytes) (0x000028 - 0x000118) align 8 MaxSize: 0x0118
class UMediaBundle : public UObject
{ 
public:
	class UMediaSource*                                MediaSource;                                                // 0x0028   (0x0008)  
	bool                                               bLoopMediaSource;                                           // 0x0030   (0x0001)  
	bool                                               bReopenSourceOnError;                                       // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0032   (0x0006)  MISSED
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0038   (0x0008)  
	class UMediaTexture*                               MediaTexture;                                               // 0x0040   (0x0008)  
	class UMaterialInterface*                          Material;                                                   // 0x0048   (0x0008)  
	FOpenCVLensDistortionParameters                    LensParameters;                                             // 0x0050   (0x0048)  
	FOpenCVCameraViewInfo                              UndistortedCameraViewInfo;                                  // 0x0098   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	FOpenCVLensDistortionParameters                    CurrentLensParameters;                                      // 0x00A8   (0x0048)  
	class UTextureRenderTarget2D*                      LensDisplacementMap;                                        // 0x00F0   (0x0008)  
	int32_t                                            ReferenceCount;                                             // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x1C];                                      // 0x00FC   (0x001C)  MISSED


	/// Functions
	// Function /Script/MediaFrameworkUtilities.MediaBundle.OnMediaOpenOpened
	// void OnMediaOpenOpened(FString DeviceUrl);                                                                               // [0x19de200] Final|Native|Private 
	// Function /Script/MediaFrameworkUtilities.MediaBundle.OnMediaOpenFailed
	// void OnMediaOpenFailed(FString DeviceUrl);                                                                               // [0x19de100] Final|Native|Private 
	// Function /Script/MediaFrameworkUtilities.MediaBundle.OnMediaClosed
	// void OnMediaClosed();                                                                                                    // [0x19de0e0] Final|Native|Private 
	// Function /Script/MediaFrameworkUtilities.MediaBundle.GetUndistortedCameraViewInfo
	// FOpenCVCameraViewInfo GetUndistortedCameraViewInfo();                                                                    // [0x19de030] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaFrameworkUtilities.MediaBundle.GetMediaTexture
	// class UMediaTexture* GetMediaTexture();                                                                                  // [0x19de010] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaFrameworkUtilities.MediaBundle.GetMediaSource
	// class UMediaSource* GetMediaSource();                                                                                    // [0x1925390] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaFrameworkUtilities.MediaBundle.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x19ddfb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaFrameworkUtilities.MediaBundle.GetMaterial
	// class UMaterialInterface* GetMaterial();                                                                                 // [0x19ddf70] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaFrameworkUtilities.MediaBundle.GetLensDisplacementTexture
	// class UTextureRenderTarget2D* GetLensDisplacementTexture();                                                              // [0x19ddf50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaFrameworkUtilities.MediaBundleActorBase
/// Size: 0x02D0 (720 bytes) (0x000290 - 0x0002D0) align 8 MaxSize: 0x02D0
class AMediaBundleActorBase : public AActor
{ 
public:
	class UTextureRenderTarget2D*                      GarbageMatteMask;                                           // 0x0290   (0x0008)  
	class UMediaBundle*                                MediaBundle;                                                // 0x0298   (0x0008)  
	bool                                               bAutoPlay;                                                  // 0x02A0   (0x0001)  
	bool                                               bPlayWhileEditing;                                          // 0x02A1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x02A2   (0x0006)  MISSED
	class UPrimitiveComponent*                         PrimitiveCmp;                                               // 0x02A8   (0x0008)  
	class UMediaSoundComponent*                        MediaSoundCmp;                                              // 0x02B0   (0x0008)  
	class UMaterialInstanceDynamic*                    Material;                                                   // 0x02B8   (0x0008)  
	int32_t                                            PrimitiveMaterialIndex;                                     // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x02C4   (0x000C)  MISSED


	/// Functions
	// Function /Script/MediaFrameworkUtilities.MediaBundleActorBase.SetComponent
	// void SetComponent(class UPrimitiveComponent* InPrimitive, class UMediaSoundComponent* InMediaSound);                     // [0x19de3e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MediaFrameworkUtilities.MediaBundleActorBase.RequestOpenMediaSource
	// bool RequestOpenMediaSource();                                                                                           // [0x19de350] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaFrameworkUtilities.MediaBundleActorBase.RequestCloseMediaSource
	// void RequestCloseMediaSource();                                                                                          // [0x19de300] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaFrameworkUtilities.MediaBundleActorBase.GetMediaBundle
	// class UMediaBundle* GetMediaBundle();                                                                                    // [0x19ddf90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaFrameworkUtilities.MediaBundleTimeSynchronizationSource
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UMediaBundleTimeSynchronizationSource : public UTimeSynchronizationSource
{ 
public:
	class UMediaBundle*                                MediaBundle;                                                // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0038   (0x0028)  MISSED
};

/// Class /Script/MediaFrameworkUtilities.MediaPlayerTimeSynchronizationSource
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UMediaPlayerTimeSynchronizationSource : public UTimeSynchronizationSource
{ 
public:
	class UMediaSource*                                MediaSource;                                                // 0x0030   (0x0008)  
	class UMediaTexture*                               MediaTexture;                                               // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0040   (0x0028)  MISSED
};

/// Class /Script/MediaFrameworkUtilities.MediaProfile
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UMediaProfile : public UObject
{ 
public:
	TArray<class UMediaSource*>                        MediaSources;                                               // 0x0028   (0x0010)  
	TArray<class UMediaOutput*>                        MediaOutputs;                                               // 0x0038   (0x0010)  
	bool                                               bOverrideTimecodeProvider;                                  // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	class UTimecodeProvider*                           TimecodeProvider;                                           // 0x0050   (0x0008)  
	bool                                               bOverrideCustomTimeStep;                                    // 0x0058   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0059   (0x0007)  MISSED
	class UEngineCustomTimeStep*                       CustomTimeStep;                                             // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	class UTimecodeProvider*                           AppliedTimecodeProvider;                                    // 0x0070   (0x0008)  
	class UTimecodeProvider*                           PreviousTimecodeProvider;                                   // 0x0078   (0x0008)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0080   (0x0008)  MISSED
	class UEngineCustomTimeStep*                       AppliedCustomTimeStep;                                      // 0x0088   (0x0008)  
	class UEngineCustomTimeStep*                       PreviousCustomTimeStep;                                     // 0x0090   (0x0008)  
};

/// Class /Script/MediaFrameworkUtilities.MediaProfileBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMediaProfileBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/MediaFrameworkUtilities.MediaProfileBlueprintLibrary.SetMediaProfile
	// void SetMediaProfile(class UMediaProfile* MediaProfile);                                                                 // [0x19de580] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetMediaProfile
	// class UMediaProfile* GetMediaProfile();                                                                                  // [0x19ddfd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaSourceProxy
	// TArray<UProxyMediaSource*> GetAllMediaSourceProxy();                                                                     // [0x19ddec0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaOutputProxy
	// TArray<UProxyMediaOutput*> GetAllMediaOutputProxy();                                                                     // [0x19dde30] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/MediaFrameworkUtilities.MediaProfileSettings
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UMediaProfileSettings : public UObject
{ 
public:
	bool                                               bApplyInCommandlet;                                         // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	SDK_UNDEFINED(16,1256) /* TArray<TWeakObjectPtr<UProxyMediaSource*>> */ __um(MediaSourceProxy);                // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1257) /* TArray<TWeakObjectPtr<UProxyMediaOutput*>> */ __um(MediaOutputProxy);                // 0x0040   (0x0010)  
	TWeakObjectPtr<class UMediaProfile*>               StartupMediaProfile;                                        // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0058   (0x0028)  MISSED
};

/// Class /Script/MediaFrameworkUtilities.MediaProfileEditorSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMediaProfileEditorSettings : public UObject
{ 
public:
};

/// Class /Script/MediaFrameworkUtilities.ProxyMediaOutput
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UProxyMediaOutput : public UMediaOutput
{ 
public:
	class UMediaOutput*                                DynamicProxy;                                               // 0x0030   (0x0008)  
	class UMediaOutput*                                Proxy;                                                      // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0040   (0x0008)  MISSED


	/// Functions
	// Function /Script/MediaFrameworkUtilities.ProxyMediaOutput.IsProxyValid
	// bool IsProxyValid();                                                                                                     // [0x19de060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MediaFrameworkUtilities.ProxyMediaSource
/// Size: 0x0098 (152 bytes) (0x000080 - 0x000098) align 8 MaxSize: 0x0098
class UProxyMediaSource : public UMediaSource
{ 
public:
	class UMediaSource*                                DynamicProxy;                                               // 0x0080   (0x0008)  
	class UMediaSource*                                Proxy;                                                      // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0090   (0x0008)  MISSED


	/// Functions
	// Function /Script/MediaFrameworkUtilities.ProxyMediaSource.IsProxyValid
	// bool IsProxyValid();                                                                                                     // [0x19de0a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(UMediaBundle) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(AMediaBundleActorBase) == 0x02D0); // 720 bytes (0x000290 - 0x0002D0)
static_assert(sizeof(UMediaBundleTimeSynchronizationSource) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UMediaPlayerTimeSynchronizationSource) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UMediaProfile) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UMediaProfileBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMediaProfileSettings) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UMediaProfileEditorSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UProxyMediaOutput) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UProxyMediaSource) == 0x0098); // 152 bytes (0x000080 - 0x000098)
static_assert(offsetof(UMediaBundle, MediaSource) == 0x0028);
static_assert(offsetof(UMediaBundle, MediaPlayer) == 0x0038);
static_assert(offsetof(UMediaBundle, MediaTexture) == 0x0040);
static_assert(offsetof(UMediaBundle, Material) == 0x0048);
static_assert(offsetof(UMediaBundle, LensParameters) == 0x0050);
static_assert(offsetof(UMediaBundle, UndistortedCameraViewInfo) == 0x0098);
static_assert(offsetof(UMediaBundle, CurrentLensParameters) == 0x00A8);
static_assert(offsetof(UMediaBundle, LensDisplacementMap) == 0x00F0);
static_assert(offsetof(AMediaBundleActorBase, GarbageMatteMask) == 0x0290);
static_assert(offsetof(AMediaBundleActorBase, MediaBundle) == 0x0298);
static_assert(offsetof(AMediaBundleActorBase, PrimitiveCmp) == 0x02A8);
static_assert(offsetof(AMediaBundleActorBase, MediaSoundCmp) == 0x02B0);
static_assert(offsetof(AMediaBundleActorBase, Material) == 0x02B8);
static_assert(offsetof(UMediaBundleTimeSynchronizationSource, MediaBundle) == 0x0030);
static_assert(offsetof(UMediaPlayerTimeSynchronizationSource, MediaSource) == 0x0030);
static_assert(offsetof(UMediaPlayerTimeSynchronizationSource, MediaTexture) == 0x0038);
static_assert(offsetof(UMediaProfile, MediaSources) == 0x0028);
static_assert(offsetof(UMediaProfile, MediaOutputs) == 0x0038);
static_assert(offsetof(UMediaProfile, TimecodeProvider) == 0x0050);
static_assert(offsetof(UMediaProfile, CustomTimeStep) == 0x0060);
static_assert(offsetof(UMediaProfile, AppliedTimecodeProvider) == 0x0070);
static_assert(offsetof(UMediaProfile, PreviousTimecodeProvider) == 0x0078);
static_assert(offsetof(UMediaProfile, AppliedCustomTimeStep) == 0x0088);
static_assert(offsetof(UMediaProfile, PreviousCustomTimeStep) == 0x0090);
static_assert(offsetof(UMediaProfileSettings, StartupMediaProfile) == 0x0050);
static_assert(offsetof(UProxyMediaOutput, DynamicProxy) == 0x0030);
static_assert(offsetof(UProxyMediaOutput, Proxy) == 0x0038);
static_assert(offsetof(UProxyMediaSource, DynamicProxy) == 0x0080);
static_assert(offsetof(UProxyMediaSource, Proxy) == 0x0088);
