
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
	// void SetAnimationBudgetParameters(class UObject* WorldContextObject, FAnimationBudgetAllocatorParameters& InParameters); // [0xd30430] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
	// void EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);                                            // [0xd30300] Final|Native|Static|Private|BlueprintCallable 
};

/// Class /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
/// Size: 0x1000 (4096 bytes) (0x000FD0 - 0x001000) align 16 MaxSize: 0x1000
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0FD0   (0x0020)  MISSED
	bool                                               bAutoRegisterWithBudgetAllocator : 1;                       // 0x0FF0:0 (0x0001)  
	bool                                               bAutoCalculateSignificance : 1;                             // 0x0FF0:1 (0x0001)  
	bool                                               bShouldUseActorRenderedFlag : 1;                            // 0x0FF0:2 (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0FF1   (0x000F)  MISSED


	/// Functions
	// Function /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
	// void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);                                        // [0xd305f0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 4 MaxSize: 0x0058
struct FAnimationBudgetAllocatorParameters
{ 
	float                                              BudgetInMs;                                                 // 0x0000   (0x0004)  
	float                                              MinQuality;                                                 // 0x0004   (0x0004)  
	int32_t                                            MaxTickRate;                                                // 0x0008   (0x0004)  
	float                                              WorkUnitSmoothingSpeed;                                     // 0x000C   (0x0004)  
	float                                              AlwaysTickFalloffAggression;                                // 0x0010   (0x0004)  
	float                                              InterpolationFalloffAggression;                             // 0x0014   (0x0004)  
	int32_t                                            InterpolationMaxRate;                                       // 0x0018   (0x0004)  
	int32_t                                            MaxInterpolatedComponents;                                  // 0x001C   (0x0004)  
	float                                              InterpolationTickMultiplier;                                // 0x0020   (0x0004)  
	float                                              InitialEstimatedWorkUnitTimeMs;                             // 0x0024   (0x0004)  
	int32_t                                            MaxTickedOffsreenComponents;                                // 0x0028   (0x0004)  
	int32_t                                            StateChangeThrottleInFrames;                                // 0x002C   (0x0004)  
	float                                              BudgetFactorBeforeReducedWork;                              // 0x0030   (0x0004)  
	float                                              BudgetFactorBeforeReducedWorkEpsilon;                       // 0x0034   (0x0004)  
	float                                              BudgetPressureSmoothingSpeed;                               // 0x0038   (0x0004)  
	int32_t                                            ReducedWorkThrottleMinInFrames;                             // 0x003C   (0x0004)  
	int32_t                                            ReducedWorkThrottleMaxInFrames;                             // 0x0040   (0x0004)  
	float                                              BudgetFactorBeforeAggressiveReducedWork;                    // 0x0044   (0x0004)  
	int32_t                                            ReducedWorkThrottleMaxPerFrame;                             // 0x0048   (0x0004)  
	float                                              BudgetPressureBeforeEmergencyReducedWork;                   // 0x004C   (0x0004)  
	float                                              AutoCalculatedSignificanceMaxDistance;                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAnimationBudgetBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USkeletalMeshComponentBudgeted) == 0x1000); // 4096 bytes (0x000FD0 - 0x001000)
static_assert(sizeof(FAnimationBudgetAllocatorParameters) == 0x0058); // 88 bytes (0x000000 - 0x000058)
