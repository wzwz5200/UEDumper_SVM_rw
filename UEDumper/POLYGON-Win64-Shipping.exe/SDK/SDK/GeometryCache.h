
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Niagara
/// dependency: NiagaraCore

#pragma pack(push, 0x1)

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UGeometryCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0030   (0x0010)  
	TArray<class UGeometryCacheTrack*>                 Tracks;                                                     // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	int32_t                                            StartFrame;                                                 // 0x0060   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x0064   (0x0004)  
	uint64_t                                           Hash;                                                       // 0x0068   (0x0008)  
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class AGeometryCacheActor : public AActor
{ 
public:
	class UGeometryCacheComponent*                     GeometryCacheComponent;                                     // 0x0290   (0x0008)  


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	// class UGeometryCacheComponent* GetGeometryCacheComponent();                                                              // [0x155a580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheCodecBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGeometryCacheCodecBase : public UObject
{ 
public:
	TArray<int32_t>                                    TopologyRanges;                                             // 0x0028   (0x0010)  
};

/// Class /Script/GeometryCache.GeometryCacheCodecRaw
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{ 
public:
	int32_t                                            DummyProperty;                                              // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheCodecV1
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x0630 (1584 bytes) (0x0005A0 - 0x000630) align 16 MaxSize: 0x0630
class UGeometryCacheComponent : public UMeshComponent
{ 
public:
	class UGeometryCache*                              GeometryCache;                                              // 0x05A0   (0x0008)  
	bool                                               bRunning;                                                   // 0x05A8   (0x0001)  
	bool                                               bLooping;                                                   // 0x05A9   (0x0001)  
	bool                                               bExtrapolateFrames;                                         // 0x05AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x05AB   (0x0001)  MISSED
	float                                              StartTimeOffset;                                            // 0x05AC   (0x0004)  
	float                                              PlaybackSpeed;                                              // 0x05B0   (0x0004)  
	float                                              MotionVectorScale;                                          // 0x05B4   (0x0004)  
	int32_t                                            NumTracks;                                                  // 0x05B8   (0x0004)  
	float                                              ElapsedTime;                                                // 0x05BC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4C];                                      // 0x05C0   (0x004C)  MISSED
	float                                              Duration;                                                   // 0x060C   (0x0004)  
	bool                                               bManualTick;                                                // 0x0610   (0x0001)  
	bool                                               bOverrideWireframeColor;                                    // 0x0611   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0612   (0x0002)  MISSED
	FLinearColor                                       WireframeOverrideColor;                                     // 0x0614   (0x0010)  
	unsigned char                                      UnknownData03_7[0xC];                                       // 0x0624   (0x000C)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheComponent.TickAtThisTime
	// void TickAtThisTime(float time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);                                // [0x155b0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Stop
	// void Stop();                                                                                                             // [0x155b080] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetWireframeOverrideColor
	// void SetWireframeOverrideColor(FLinearColor Color);                                                                      // [0x155b000] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	// void SetStartTimeOffset(float NewStartTimeOffset);                                                                       // [0x155af50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	// void SetPlaybackSpeed(float NewPlaybackSpeed);                                                                           // [0x155ae90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetOverrideWireframeColor
	// void SetOverrideWireframeColor(bool bOverride);                                                                          // [0x155ae00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetMotionVectorScale
	// void SetMotionVectorScale(float NewMotionVectorScale);                                                                   // [0x155ad40] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
	// void SetLooping(bool bNewLooping);                                                                                       // [0x155aa50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
	// bool SetGeometryCache(class UGeometryCache* NewGeomCache);                                                               // [0x155a9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
	// void SetExtrapolateFrames(bool bNewExtrapolating);                                                                       // [0x155a920] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	// void PlayReversedFromEnd();                                                                                              // [0x155a8c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
	// void PlayReversed();                                                                                                     // [0x155a870] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
	// void PlayFromStart();                                                                                                    // [0x155a810] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Play
	// void Play();                                                                                                             // [0x155a7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Pause
	// void Pause();                                                                                                            // [0x155a790] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
	// bool IsPlayingReversed();                                                                                                // [0x155a750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x155a730] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
	// bool IsLooping();                                                                                                        // [0x155a710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
	// bool IsExtrapolatingFrames();                                                                                            // [0x155a6f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetWireframeOverrideColor
	// FLinearColor GetWireframeOverrideColor();                                                                                // [0x155a6c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	// float GetStartTimeOffset();                                                                                              // [0x155a6a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	// float GetPlaybackSpeed();                                                                                                // [0x155a660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	// float GetPlaybackDirection();                                                                                            // [0x155a640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetOverrideWireframeColor
	// bool GetOverrideWireframeColor();                                                                                        // [0x155a620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	// int32_t GetNumberOfFrames();                                                                                             // [0x155a5e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetMotionVectorScale
	// float GetMotionVectorScale();                                                                                            // [0x155a5a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetDuration
	// float GetDuration();                                                                                                     // [0x155a560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetAnimationTime
	// float GetAnimationTime();                                                                                                // [0x155a510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UGeometryCacheTrack : public UObject
{ 
public:
	float                                              Duration;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x2C];                                      // 0x002C   (0x002C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0080 (128 bytes) (0x000058 - 0x000080) align 8 MaxSize: 0x0080
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
public:
	uint32_t                                           NumMeshSamples;                                             // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_7[0x24];                                      // 0x005C   (0x0024)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	// void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime);                                                  // [0x155a210] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrackStreamable
/// Size: 0x00D8 (216 bytes) (0x000058 - 0x0000D8) align 8 MaxSize: 0x00D8
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{ 
public:
	class UGeometryCacheCodecBase*                     Codec;                                                      // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_6[0x68];                                      // 0x0060   (0x0068)  MISSED
	float                                              StartSampleTime;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x00CC   (0x000C)  MISSED
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x0120 (288 bytes) (0x000058 - 0x000120) align 8 MaxSize: 0x0120
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0058   (0x00C8)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x155aae0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x0120 (288 bytes) (0x000058 - 0x000120) align 8 MaxSize: 0x0120
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0058   (0x00C8)  MISSED


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x155aae0] Final|Native|Public|HasOutParms 
};

/// Struct /Script/GeometryCache.NiagaraGeometryCacheReference
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraGeometryCacheReference
{ 
	class UGeometryCache*                              GeometryCache;                                              // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       GeometryCacheUserParamBinding;                              // 0x0008   (0x0020)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x0028   (0x0010)  
};

/// Class /Script/GeometryCache.NiagaraGeometryCacheRendererProperties
/// Size: 0x0368 (872 bytes) (0x0000E0 - 0x000368) align 8 MaxSize: 0x0368
class UNiagaraGeometryCacheRendererProperties : public UNiagaraRendererProperties
{ 
public:
	TArray<FNiagaraGeometryCacheReference>             GeometryCaches;                                             // 0x00E0   (0x0010)  
	bool                                               bIsLooping;                                                 // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	uint32_t                                           ComponentCountLimit;                                        // 0x00F4   (0x0004)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x00F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RotationBinding;                                            // 0x0150   (0x0058)  
	FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x01A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ElapsedTimeBinding;                                         // 0x0200   (0x0058)  
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x0258   (0x0058)  
	FNiagaraVariableAttributeBinding                   ArrayIndexBinding;                                          // 0x02B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0308   (0x0058)  
	int32_t                                            RendererVisibility;                                         // 0x0360   (0x0004)  
	bool                                               bAssignComponentsOnParticleID;                              // 0x0364   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0365   (0x0003)  MISSED
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FTrackRenderData
{ 
	unsigned char                                      UnknownData00_2[0xC0];                                      // 0x0000   (0x00C0)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryCacheMeshBatchInfo
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheVertexInfo
/// Size: 0x0009 (9 bytes) (0x000000 - 0x000009) align 1 MaxSize: 0x0009
struct FGeometryCacheVertexInfo
{ 
	unsigned char                                      UnknownData00_2[0x9];                                       // 0x0000   (0x0009)  MISSED
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FGeometryCacheMeshData
{ 
	unsigned char                                      UnknownData00_2[0xC8];                                      // 0x0000   (0x00C8)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UGeometryCache) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(AGeometryCacheActor) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UGeometryCacheCodecBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGeometryCacheCodecRaw) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UGeometryCacheCodecV1) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UGeometryCacheComponent) == 0x0630); // 1584 bytes (0x0005A0 - 0x000630)
static_assert(sizeof(UGeometryCacheTrack) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UGeometryCacheTrack_FlipbookAnimation) == 0x0080); // 128 bytes (0x000058 - 0x000080)
static_assert(sizeof(UGeometryCacheTrackStreamable) == 0x00D8); // 216 bytes (0x000058 - 0x0000D8)
static_assert(sizeof(UGeometryCacheTrack_TransformAnimation) == 0x0120); // 288 bytes (0x000058 - 0x000120)
static_assert(sizeof(UGeometryCacheTrack_TransformGroupAnimation) == 0x0120); // 288 bytes (0x000058 - 0x000120)
static_assert(sizeof(FNiagaraGeometryCacheReference) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UNiagaraGeometryCacheRendererProperties) == 0x0368); // 872 bytes (0x0000E0 - 0x000368)
static_assert(sizeof(FTrackRenderData) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FGeometryCacheMeshBatchInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FGeometryCacheVertexInfo) == 0x0009); // 9 bytes (0x000000 - 0x000009)
static_assert(sizeof(FGeometryCacheMeshData) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(offsetof(UGeometryCache, Materials) == 0x0030);
static_assert(offsetof(UGeometryCache, Tracks) == 0x0040);
static_assert(offsetof(AGeometryCacheActor, GeometryCacheComponent) == 0x0290);
static_assert(offsetof(UGeometryCacheCodecBase, TopologyRanges) == 0x0028);
static_assert(offsetof(UGeometryCacheComponent, GeometryCache) == 0x05A0);
static_assert(offsetof(UGeometryCacheComponent, WireframeOverrideColor) == 0x0614);
static_assert(offsetof(UGeometryCacheTrackStreamable, Codec) == 0x0058);
static_assert(offsetof(FNiagaraGeometryCacheReference, GeometryCache) == 0x0000);
static_assert(offsetof(FNiagaraGeometryCacheReference, GeometryCacheUserParamBinding) == 0x0008);
static_assert(offsetof(FNiagaraGeometryCacheReference, OverrideMaterials) == 0x0028);
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, GeometryCaches) == 0x00E0);
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, PositionBinding) == 0x00F8);
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, RotationBinding) == 0x0150);
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, ScaleBinding) == 0x01A8);
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, ElapsedTimeBinding) == 0x0200);
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, EnabledBinding) == 0x0258);
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, ArrayIndexBinding) == 0x02B0);
static_assert(offsetof(UNiagaraGeometryCacheRendererProperties, RendererVisibilityTagBinding) == 0x0308);
