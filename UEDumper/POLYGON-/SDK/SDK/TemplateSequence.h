
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x04 (4 bytes)
enum class ETemplateSectionPropertyScaleType : uint32_t
{
	ETemplateSectionPropertyScaleType__FloatProperty                                 = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly                 = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly                 = 2
};

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x00F0 (240 bytes) (0x000068 - 0x0000F0) align 8 MaxSize: 0x00F0
class UTemplateSequence : public UMovieSceneSequence
{ 
public:
	class UMovieScene*                                 MovieScene;                                                 // 0x0068   (0x0008)  
	TSoftObjectPtr<class UClass*>                      BoundActorClass;                                            // 0x0070   (0x0030)  
	TMap<FGuid, FName>                                 BoundActorComponents;                                       // 0x00A0   (0x0050)  
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 8 MaxSize: 0x00F0
class UCameraAnimationSequence : public UTemplateSequence
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceCameraStandIn
/// Size: 0x0840 (2112 bytes) (0x000028 - 0x000840) align 16 MaxSize: 0x0840
class UCameraAnimationSequenceCameraStandIn : public UObject
{ 
public:
	float                                              FieldOfView;                                                // 0x0028   (0x0004)  
	bool                                               bConstrainAspectRatio : 1;                                  // 0x002C:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
	FPostProcessSettings                               PostProcessSettings;                                        // 0x0040   (0x06E0)  
	float                                              PostProcessBlendWeight;                                     // 0x0720   (0x0004)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x0724   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x0730   (0x001C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x074C   (0x0004)  MISSED
	FCameraFocusSettings                               FocusSettings;                                              // 0x0750   (0x0068)  
	float                                              CurrentFocalLength;                                         // 0x07B8   (0x0004)  
	float                                              CurrentAperture;                                            // 0x07BC   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x07C0   (0x0004)  
	unsigned char                                      UnknownData03_7[0x7C];                                      // 0x07C4   (0x007C)  MISSED
};

/// Class /Script/TemplateSequence.CameraAnimationSequencePlayer
/// Size: 0x0390 (912 bytes) (0x000028 - 0x000390) align 8 MaxSize: 0x0390
class UCameraAnimationSequencePlayer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x270];                                     // 0x0028   (0x0270)  MISSED
	class UObject*                                     BoundObjectOverride;                                        // 0x0298   (0x0008)  
	class UMovieSceneSequence*                         Sequence;                                                   // 0x02A0   (0x0008)  
	FMovieSceneRootEvaluationTemplateInstance          RootTemplateInstance;                                       // 0x02A8   (0x0088)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x0330   (0x0060)  MISSED
};

/// Class /Script/TemplateSequence.CameraAnimationSpawnableSystem
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationBoundObjectInstantiator
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationEntitySystemLinker
/// Size: 0x06F8 (1784 bytes) (0x0006F8 - 0x0006F8) align 8 MaxSize: 0x06F8
class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{ 
public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceSubsystem
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{ 
public:
	class UMovieSceneEntitySystemLinker*               Linker;                                                     // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0038   (0x0010)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x0138 (312 bytes) (0x000000 - 0x000138) align 8 MaxSize: 0x0138
struct FTemplateSectionPropertyScale
{ 
	FGuid                                              ObjectBinding;                                              // 0x0000   (0x0010)  
	FMovieScenePropertyBinding                         PropertyBinding;                                            // 0x0010   (0x0014)  
	ETemplateSectionPropertyScaleType                  PropertyScaleType;                                          // 0x0024   (0x0004)  
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0028   (0x0110)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0148 (328 bytes) (0x000138 - 0x000148) align 8 MaxSize: 0x0148
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
public:
	TArray<FTemplateSectionPropertyScale>              PropertyScales;                                             // 0x0138   (0x0010)  
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
public:
	class UCameraAnimationSequence*                    Sequence;                                                   // 0x0028   (0x0008)  
	float                                              PlayRate;                                                   // 0x0030   (0x0004)  
	float                                              Scale;                                                      // 0x0034   (0x0004)  
	float                                              BlendInTime;                                                // 0x0038   (0x0004)  
	float                                              BlendOutTime;                                               // 0x003C   (0x0004)  
	float                                              RandomSegmentDuration;                                      // 0x0040   (0x0004)  
	bool                                               bRandomSegment;                                             // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	class UCameraAnimationSequencePlayer*              Player;                                                     // 0x0048   (0x0008)  
	class UCameraAnimationSequenceCameraStandIn*       CameraStandIn;                                              // 0x0050   (0x0008)  
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x00B0 (176 bytes) (0x000040 - 0x0000B0) align 8 MaxSize: 0x00B0
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x0098 (152 bytes) (0x000040 - 0x000098) align 8 MaxSize: 0x0098
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0040   (0x0058)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0090 (144 bytes) (0x000040 - 0x000090) align 8 MaxSize: 0x0090
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FTemplateSequenceBindingOverrideData
{ 
	TWeakObjectPtr<class UObject*>                     Object;                                                     // 0x0000   (0x0008)  
	bool                                               bOverridesDefault;                                          // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x02F0 (752 bytes) (0x000290 - 0x0002F0) align 8 MaxSize: 0x02F0
class ATemplateSequenceActor : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0290   (0x0008)  MISSED
	FMovieSceneSequencePlaybackSettings                PlaybackSettings;                                           // 0x0298   (0x0020)  
	class UTemplateSequencePlayer*                     SequencePlayer;                                             // 0x02B8   (0x0008)  
	FSoftObjectPath                                    TemplateSequence;                                           // 0x02C0   (0x0020)  
	FTemplateSequenceBindingOverrideData               BindingOverride;                                            // 0x02E0   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x02EC   (0x0004)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	// void SetSequence(class UTemplateSequence* InSequence);                                                                   // [0x23a0cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	// void SetBinding(class AActor* Actor, bool bOverridesDefault);                                                            // [0x23a0b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	// class UTemplateSequence* LoadSequence();                                                                                 // [0x23a0ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// class UTemplateSequencePlayer* GetSequencePlayer();                                                                      // [0x23a0a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	// class UTemplateSequence* GetSequence();                                                                                  // [0x23a09f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x04C0 (1216 bytes) (0x0004B8 - 0x0004C0) align 8 MaxSize: 0x04C0
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x04B8   (0x0008)  MISSED


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
	// class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, class ATemplateSequenceActor*& OutActor); // [0x23a0250] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TemplateSequence.SequenceCameraShakeTestUtil
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
	// bool GetPostProcessBlendCache(class APlayerController* PlayerController, int32_t PPIndex, FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight); // [0x23a07f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
	// FMinimalViewInfo GetLastFrameCameraCachePOV(class APlayerController* PlayerController);                                  // [0x23a06f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
	// FMinimalViewInfo GetCameraCachePOV(class APlayerController* PlayerController);                                           // [0x23a05f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UTemplateSequence) == 0x00F0); // 240 bytes (0x000068 - 0x0000F0)
static_assert(sizeof(UCameraAnimationSequence) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(UCameraAnimationSequenceCameraStandIn) == 0x0840); // 2112 bytes (0x000028 - 0x000840)
static_assert(sizeof(UCameraAnimationSequencePlayer) == 0x0390); // 912 bytes (0x000028 - 0x000390)
static_assert(sizeof(UCameraAnimationSpawnableSystem) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UCameraAnimationBoundObjectInstantiator) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(UCameraAnimationEntitySystemLinker) == 0x06F8); // 1784 bytes (0x0006F8 - 0x0006F8)
static_assert(sizeof(UCameraAnimationSequenceSubsystem) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(FTemplateSectionPropertyScale) == 0x0138); // 312 bytes (0x000000 - 0x000138)
static_assert(sizeof(UTemplateSequenceSection) == 0x0148); // 328 bytes (0x000138 - 0x000148)
static_assert(sizeof(USequenceCameraShakePattern) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UTemplateSequenceSystem) == 0x00B0); // 176 bytes (0x000040 - 0x0000B0)
static_assert(sizeof(UTemplateSequencePropertyScalingInstantiatorSystem) == 0x0098); // 152 bytes (0x000040 - 0x000098)
static_assert(sizeof(UTemplateSequencePropertyScalingEvaluatorSystem) == 0x0090); // 144 bytes (0x000040 - 0x000090)
static_assert(sizeof(FTemplateSequenceBindingOverrideData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(ATemplateSequenceActor) == 0x02F0); // 752 bytes (0x000290 - 0x0002F0)
static_assert(sizeof(UTemplateSequencePlayer) == 0x04C0); // 1216 bytes (0x0004B8 - 0x0004C0)
static_assert(sizeof(USequenceCameraShakeTestUtil) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTemplateSequenceTrack) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(offsetof(UTemplateSequence, MovieScene) == 0x0068);
static_assert(offsetof(UTemplateSequence, BoundActorClass) == 0x0070);
static_assert(offsetof(UTemplateSequence, BoundActorComponents) == 0x00A0);
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, PostProcessSettings) == 0x0040);
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, Filmback) == 0x0724);
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, LensSettings) == 0x0730);
static_assert(offsetof(UCameraAnimationSequenceCameraStandIn, FocusSettings) == 0x0750);
static_assert(offsetof(UCameraAnimationSequencePlayer, BoundObjectOverride) == 0x0298);
static_assert(offsetof(UCameraAnimationSequencePlayer, Sequence) == 0x02A0);
static_assert(offsetof(UCameraAnimationSequencePlayer, RootTemplateInstance) == 0x02A8);
static_assert(offsetof(UCameraAnimationSequenceSubsystem, Linker) == 0x0030);
static_assert(offsetof(FTemplateSectionPropertyScale, ObjectBinding) == 0x0000);
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyBinding) == 0x0010);
static_assert(offsetof(FTemplateSectionPropertyScale, PropertyScaleType) == 0x0024);
static_assert(offsetof(FTemplateSectionPropertyScale, FloatChannel) == 0x0028);
static_assert(offsetof(UTemplateSequenceSection, PropertyScales) == 0x0138);
static_assert(offsetof(USequenceCameraShakePattern, Sequence) == 0x0028);
static_assert(offsetof(USequenceCameraShakePattern, Player) == 0x0048);
static_assert(offsetof(USequenceCameraShakePattern, CameraStandIn) == 0x0050);
static_assert(offsetof(FTemplateSequenceBindingOverrideData, Object) == 0x0000);
static_assert(offsetof(ATemplateSequenceActor, PlaybackSettings) == 0x0298);
static_assert(offsetof(ATemplateSequenceActor, SequencePlayer) == 0x02B8);
static_assert(offsetof(ATemplateSequenceActor, TemplateSequence) == 0x02C0);
static_assert(offsetof(ATemplateSequenceActor, BindingOverride) == 0x02E0);
