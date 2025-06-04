
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

#pragma pack(push, 0x1)

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0030   (0x0008)  
	FName                                              SocketName;                                                 // 0x0038   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0040   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0058   (0x0018)  
	bool                                               bDestroyAtEnd;                                              // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0071   (0x0007)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect(class UMeshComponent* MeshComp);                                              // [0x116bbe0] Final|Native|Public|BlueprintCallable|Const 
};

/// Struct /Script/NiagaraAnimNotifies.CurveParameterPair
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FCurveParameterPair
{ 
	FName                                              AnimCurveName;                                              // 0x0000   (0x0008)  
	FName                                              UserVariableName;                                           // 0x0008   (0x0008)  
};

/// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
/// Size: 0x00E8 (232 bytes) (0x000078 - 0x0000E8) align 8 MaxSize: 0x00E8
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{ 
public:
	bool                                               bEnableNormalizedNotifyProgress;                            // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0079   (0x0003)  MISSED
	FName                                              NotifyProgressUserParameter;                                // 0x007C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	TArray<FCurveParameterPair>                        AnimCurves;                                                 // 0x0088   (0x0010)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x0098   (0x0050)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress
	// float GetNotifyProgress(class UMeshComponent* MeshComp);                                                                 // [0x116bb40] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
/// Size: 0x00D0 (208 bytes) (0x000038 - 0x0000D0) align 16 MaxSize: 0x00D0
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{ 
public:
	class UNiagaraSystem*                              Template;                                                   // 0x0038   (0x0008)  
	FVector                                            LocationOffset;                                             // 0x0040   (0x0018)  
	FRotator                                           RotationOffset;                                             // 0x0058   (0x0018)  
	FVector                                            Scale;                                                      // 0x0070   (0x0018)  
	bool                                               bAbsoluteScale;                                             // 0x0088   (0x0001)  
	unsigned char                                      UnknownData00_6[0x37];                                      // 0x0089   (0x0037)  MISSED
	bool                                               Attached : 1;                                               // 0x00C0:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00C1   (0x0003)  MISSED
	FName                                              SocketName;                                                 // 0x00C4   (0x0008)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00CC   (0x0004)  MISSED


	/// Functions
	// Function /Script/NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect
	// class UFXSystemComponent* GetSpawnedEffect();                                                                            // [0x116bd00] Final|Native|Public|BlueprintCallable|Const 
};

#pragma pack(pop)


static_assert(sizeof(UAnimNotifyState_TimedNiagaraEffect) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(FCurveParameterPair) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAnimNotifyState_TimedNiagaraEffectAdvanced) == 0x00E8); // 232 bytes (0x000078 - 0x0000E8)
static_assert(sizeof(UAnimNotify_PlayNiagaraEffect) == 0x00D0); // 208 bytes (0x000038 - 0x0000D0)
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, Template) == 0x0030);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, SocketName) == 0x0038);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, LocationOffset) == 0x0040);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffect, RotationOffset) == 0x0058);
static_assert(offsetof(FCurveParameterPair, AnimCurveName) == 0x0000);
static_assert(offsetof(FCurveParameterPair, UserVariableName) == 0x0008);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffectAdvanced, NotifyProgressUserParameter) == 0x007C);
static_assert(offsetof(UAnimNotifyState_TimedNiagaraEffectAdvanced, AnimCurves) == 0x0088);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Template) == 0x0038);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, LocationOffset) == 0x0040);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, RotationOffset) == 0x0058);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, Scale) == 0x0070);
static_assert(offsetof(UAnimNotify_PlayNiagaraEffect, SocketName) == 0x00C4);
