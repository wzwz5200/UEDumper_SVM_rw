
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

/// Class /Script/AnimationSharing.AnimationSharingStateProcessor
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UAnimationSharingStateProcessor : public UObject
{ 
public:
	TWeakObjectPtr<class UEnum*>                       AnimationStateEnum;                                         // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0030   (0x0028)  MISSED


	/// Functions
	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
	// void ProcessActorState(int32_t& OutState, class AActor* InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // [0x23b2890] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
	// class UEnum* GetAnimationStateEnum();                                                                                    // [0x23b26d0] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/AnimationSharing.AnimSharingStateInstance
/// Size: 0x0370 (880 bytes) (0x000348 - 0x000370) align 16 MaxSize: 0x0370
class UAnimSharingStateInstance : public UAnimInstance
{ 
public:
	class UAnimSequence*                               AnimationToPlay;                                            // 0x0348   (0x0008)  
	float                                              PermutationTimeOffset;                                      // 0x0350   (0x0004)  
	float                                              PlayRate;                                                   // 0x0354   (0x0004)  
	bool                                               bStateBool;                                                 // 0x0358   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0359   (0x0007)  MISSED
	class UAnimSharingInstance*                        Instance;                                                   // 0x0360   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0368   (0x0008)  MISSED


	/// Functions
	// Function /Script/AnimationSharing.AnimSharingStateInstance.GetInstancedActors
	// void GetInstancedActors(TArray<AActor*>& Actors);                                                                        // [0x23b2700] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/AnimationSharing.AnimSharingTransitionInstance
/// Size: 0x0360 (864 bytes) (0x000348 - 0x000360) align 16 MaxSize: 0x0360
class UAnimSharingTransitionInstance : public UAnimInstance
{ 
public:
	TWeakObjectPtr<class USkeletalMeshComponent*>      FromComponent;                                              // 0x0348   (0x0008)  
	TWeakObjectPtr<class USkeletalMeshComponent*>      ToComponent;                                                // 0x0350   (0x0008)  
	float                                              BlendTime;                                                  // 0x0358   (0x0004)  
	bool                                               bBlendBool;                                                 // 0x035C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x035D   (0x0003)  MISSED
};

/// Class /Script/AnimationSharing.AnimSharingAdditiveInstance
/// Size: 0x0360 (864 bytes) (0x000348 - 0x000360) align 16 MaxSize: 0x0360
class UAnimSharingAdditiveInstance : public UAnimInstance
{ 
public:
	TWeakObjectPtr<class USkeletalMeshComponent*>      BaseComponent;                                              // 0x0348   (0x0008)  
	TWeakObjectPtr<class UAnimSequence*>               AdditiveAnimation;                                          // 0x0350   (0x0008)  
	float                                              Alpha;                                                      // 0x0358   (0x0004)  
	bool                                               bStateBool;                                                 // 0x035C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x035D   (0x0003)  MISSED
};

/// Class /Script/AnimationSharing.AnimSharingInstance
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align 8 MaxSize: 0x0120
class UAnimSharingInstance : public UObject
{ 
public:
	TArray<class AActor*>                              RegisteredActors;                                           // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0038   (0x0050)  MISSED
	class UAnimationSharingStateProcessor*             StateProcessor;                                             // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x0090   (0x0038)  MISSED
	TArray<class UAnimSequence*>                       UsedAnimationSequences;                                     // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00D8   (0x0010)  MISSED
	class UEnum*                                       StateEnum;                                                  // 0x00E8   (0x0008)  
	class AActor*                                      SharingActor;                                               // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData03_7[0x28];                                      // 0x00F8   (0x0028)  MISSED
};

/// Class /Script/AnimationSharing.AnimationSharingManager
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UAnimationSharingManager : public UObject
{ 
public:
	TArray<class USkeleton*>                           Skeletons;                                                  // 0x0028   (0x0010)  
	TArray<class UAnimSharingInstance*>                PerSkeletonData;                                            // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0048   (0x0040)  MISSED


	/// Functions
	// Function /Script/AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
	// void RegisterActorWithSkeletonBP(class AActor* InActor, class USkeleton* SharingSkeleton);                               // [0x23b2a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
	// class UAnimationSharingManager* GetAnimationSharingManager(class UObject* WorldContextObject);                           // [0x23b2570] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
	// bool CreateAnimationSharingManager(class UObject* WorldContextObject, class UAnimationSharingSetup* Setup);              // [0x23b2470] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
	// bool AnimationSharingEnabled();                                                                                          // [0x23b2440] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AnimationSharing.AnimationSetup
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAnimationSetup
{ 
	class UAnimSequence*                               AnimSequence;                                               // 0x0000   (0x0008)  
	class UClass*                                      AnimBlueprint;                                              // 0x0008   (0x0008)  
	FPerPlatformInt                                    NumRandomizedInstances;                                     // 0x0010   (0x0004)  
	FPerPlatformBool                                   Enabled;                                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/AnimationSharing.AnimationStateEntry
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FAnimationStateEntry
{ 
	char                                               State;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FAnimationSetup>                            AnimationSetups;                                            // 0x0008   (0x0010)  
	bool                                               bOnDemand;                                                  // 0x0018   (0x0001)  
	bool                                               bAdditive;                                                  // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              BlendTime;                                                  // 0x001C   (0x0004)  
	bool                                               bReturnToPreviousState;                                     // 0x0020   (0x0001)  
	bool                                               bSetNextState;                                              // 0x0021   (0x0001)  
	char                                               NextState;                                                  // 0x0022   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x0023   (0x0001)  MISSED
	FPerPlatformInt                                    MaximumNumberOfConcurrentInstances;                         // 0x0024   (0x0004)  
	float                                              WiggleTimePercentage;                                       // 0x0028   (0x0004)  
	bool                                               bRequiresCurves;                                            // 0x002C   (0x0001)  
	unsigned char                                      UnknownData03_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Struct /Script/AnimationSharing.PerSkeletonAnimationSharingSetup
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FPerSkeletonAnimationSharingSetup
{ 
	class USkeleton*                                   Skeleton;                                                   // 0x0000   (0x0008)  
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0008   (0x0008)  
	class UClass*                                      BlendAnimBlueprint;                                         // 0x0010   (0x0008)  
	class UClass*                                      AdditiveAnimBlueprint;                                      // 0x0018   (0x0008)  
	class UClass*                                      StateProcessorClass;                                        // 0x0020   (0x0008)  
	TArray<FAnimationStateEntry>                       AnimationStates;                                            // 0x0028   (0x0010)  
};

/// Struct /Script/AnimationSharing.AnimationSharingScalability
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FAnimationSharingScalability
{ 
	FPerPlatformBool                                   UseBlendTransitions;                                        // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FPerPlatformFloat                                  BlendSignificanceValue;                                     // 0x0004   (0x0004)  
	FPerPlatformInt                                    MaximumNumberConcurrentBlends;                              // 0x0008   (0x0004)  
	FPerPlatformFloat                                  TickSignificanceValue;                                      // 0x000C   (0x0004)  
};

/// Class /Script/AnimationSharing.AnimationSharingSetup
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UAnimationSharingSetup : public UObject
{ 
public:
	TArray<FPerSkeletonAnimationSharingSetup>          SkeletonSetups;                                             // 0x0028   (0x0010)  
	FAnimationSharingScalability                       ScalabilitySettings;                                        // 0x0038   (0x0010)  
};

/// Struct /Script/AnimationSharing.TickAnimationSharingFunction
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FTickAnimationSharingFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAnimationSharingStateProcessor) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UAnimSharingStateInstance) == 0x0370); // 880 bytes (0x000348 - 0x000370)
static_assert(sizeof(UAnimSharingTransitionInstance) == 0x0360); // 864 bytes (0x000348 - 0x000360)
static_assert(sizeof(UAnimSharingAdditiveInstance) == 0x0360); // 864 bytes (0x000348 - 0x000360)
static_assert(sizeof(UAnimSharingInstance) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(sizeof(UAnimationSharingManager) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(FAnimationSetup) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAnimationStateEntry) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPerSkeletonAnimationSharingSetup) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FAnimationSharingScalability) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UAnimationSharingSetup) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FTickAnimationSharingFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(offsetof(UAnimationSharingStateProcessor, AnimationStateEnum) == 0x0028);
static_assert(offsetof(UAnimSharingStateInstance, AnimationToPlay) == 0x0348);
static_assert(offsetof(UAnimSharingStateInstance, Instance) == 0x0360);
static_assert(offsetof(UAnimSharingTransitionInstance, FromComponent) == 0x0348);
static_assert(offsetof(UAnimSharingTransitionInstance, ToComponent) == 0x0350);
static_assert(offsetof(UAnimSharingAdditiveInstance, BaseComponent) == 0x0348);
static_assert(offsetof(UAnimSharingAdditiveInstance, AdditiveAnimation) == 0x0350);
static_assert(offsetof(UAnimSharingInstance, RegisteredActors) == 0x0028);
static_assert(offsetof(UAnimSharingInstance, StateProcessor) == 0x0088);
static_assert(offsetof(UAnimSharingInstance, UsedAnimationSequences) == 0x00C8);
static_assert(offsetof(UAnimSharingInstance, StateEnum) == 0x00E8);
static_assert(offsetof(UAnimSharingInstance, SharingActor) == 0x00F0);
static_assert(offsetof(UAnimationSharingManager, Skeletons) == 0x0028);
static_assert(offsetof(UAnimationSharingManager, PerSkeletonData) == 0x0038);
static_assert(offsetof(FAnimationSetup, AnimSequence) == 0x0000);
static_assert(offsetof(FAnimationSetup, AnimBlueprint) == 0x0008);
static_assert(offsetof(FAnimationSetup, NumRandomizedInstances) == 0x0010);
static_assert(offsetof(FAnimationSetup, Enabled) == 0x0014);
static_assert(offsetof(FAnimationStateEntry, AnimationSetups) == 0x0008);
static_assert(offsetof(FAnimationStateEntry, MaximumNumberOfConcurrentInstances) == 0x0024);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, Skeleton) == 0x0000);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, SkeletalMesh) == 0x0008);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, BlendAnimBlueprint) == 0x0010);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, AdditiveAnimBlueprint) == 0x0018);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, StateProcessorClass) == 0x0020);
static_assert(offsetof(FPerSkeletonAnimationSharingSetup, AnimationStates) == 0x0028);
static_assert(offsetof(FAnimationSharingScalability, UseBlendTransitions) == 0x0000);
static_assert(offsetof(FAnimationSharingScalability, BlendSignificanceValue) == 0x0004);
static_assert(offsetof(FAnimationSharingScalability, MaximumNumberConcurrentBlends) == 0x0008);
static_assert(offsetof(FAnimationSharingScalability, TickSignificanceValue) == 0x000C);
static_assert(offsetof(UAnimationSharingSetup, SkeletonSetups) == 0x0028);
static_assert(offsetof(UAnimationSharingSetup, ScalabilitySettings) == 0x0038);
