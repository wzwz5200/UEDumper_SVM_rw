
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAnimCharacterMovementLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementStopLocation
	// FVector PredictGroundMovementStopLocation(FVector& Velocity, bool bUseSeparateBrakingFriction, float BrakingFriction, float GroundFriction, float BrakingFrictionFactor, float BrakingDecelerationWalking); // [0xd31b00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
	// FVector PredictGroundMovementPivotLocation(FVector& Acceleration, FVector& Velocity, float GroundFriction);              // [0xd317b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed
	// FSequencePlayerReference SetPlayrateToMatchSpeed(FSequencePlayerReference& SequencePlayer, float SpeedToMatch, FVector2D PlayRateClamp); // [0xd31ea0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
	// FSequenceEvaluatorReference DistanceMatchToTarget(FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, FName DistanceCurveName); // [0xd31650] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
	// FSequenceEvaluatorReference AdvanceTimeByDistanceMatching(FAnimUpdateContext& UpdateContext, FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, FName DistanceCurveName, FVector2D PlayRateClamp); // [0xd31430] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UAnimCharacterMovementLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAnimDistanceMatchingLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
