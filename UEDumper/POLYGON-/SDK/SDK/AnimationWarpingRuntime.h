
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

/// Enum /Script/AnimationWarpingRuntime.EFootPlacementLockType
/// Size: 0x01 (1 bytes)
enum class EFootPlacementLockType : uint8_t
{
	EFootPlacementLockType__Unlocked                                                 = 0,
	EFootPlacementLockType__PivotAroundBall                                          = 1,
	EFootPlacementLockType__PivotAroundAnkle                                         = 2,
	EFootPlacementLockType__LockRotation                                             = 3
};

/// Enum /Script/AnimationWarpingRuntime.EPelvisHeightMode
/// Size: 0x01 (1 bytes)
enum class EPelvisHeightMode : uint8_t
{
	EPelvisHeightMode__AllLegs                                                       = 0,
	EPelvisHeightMode__AllPlantedFeet                                                = 1,
	EPelvisHeightMode__FrontPlantedFeetUphill_FrontFeetDownhill                      = 2
};

/// Enum /Script/AnimationWarpingRuntime.EActorMovementCompensationMode
/// Size: 0x01 (1 bytes)
enum class EActorMovementCompensationMode : uint8_t
{
	EActorMovementCompensationMode__ComponentSpace                                   = 0,
	EActorMovementCompensationMode__WorldSpace                                       = 1,
	EActorMovementCompensationMode__SuddenMotionOnly                                 = 2
};

/// Enum /Script/AnimationWarpingRuntime.EOffsetRootBoneMode
/// Size: 0x01 (1 bytes)
enum class EOffsetRootBoneMode : uint8_t
{
	EOffsetRootBoneMode__Accumulate                                                  = 0,
	EOffsetRootBoneMode__Interpolate                                                 = 1,
	EOffsetRootBoneMode__Hold                                                        = 2,
	EOffsetRootBoneMode__Release                                                     = 3
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementInterpolationSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FFootPlacementInterpolationSettings
{ 
	float                                              UnplantLinearStiffness;                                     // 0x0000   (0x0004)  
	float                                              UnplantLinearDamping;                                       // 0x0004   (0x0004)  
	float                                              UnplantAngularStiffness;                                    // 0x0008   (0x0004)  
	float                                              UnplantAngularDamping;                                      // 0x000C   (0x0004)  
	float                                              FloorLinearStiffness;                                       // 0x0010   (0x0004)  
	float                                              FloorLinearDamping;                                         // 0x0014   (0x0004)  
	float                                              FloorAngularStiffness;                                      // 0x0018   (0x0004)  
	float                                              FloorAngularDamping;                                        // 0x001C   (0x0004)  
	bool                                               bEnableFloorInterpolation;                                  // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0021   (0x0003)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementTraceSettings
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FFootPlacementTraceSettings
{ 
	float                                              StartOffset;                                                // 0x0000   (0x0004)  
	float                                              EndOffset;                                                  // 0x0004   (0x0004)  
	float                                              SweepRadius;                                                // 0x0008   (0x0004)  
	TEnumAsByte<ETraceTypeQuery>                       ComplexTraceChannel;                                        // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              MaxGroundPenetration;                                       // 0x0010   (0x0004)  
	float                                              SimpleCollisionInfluence;                                   // 0x0014   (0x0004)  
	TEnumAsByte<ETraceTypeQuery>                       SimpleTraceChannel;                                         // 0x0018   (0x0001)  
	bool                                               bEnabled;                                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x001A   (0x0002)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementRootDefinition
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FFootPlacementRootDefinition
{ 
	FBoneReference                                     PelvisBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     IKRootBone;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementPelvisSettings
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FFootPlacementPelvisSettings
{ 
	float                                              MaxOffset;                                                  // 0x0000   (0x0004)  
	float                                              LinearStiffness;                                            // 0x0004   (0x0004)  
	float                                              LinearDamping;                                              // 0x0008   (0x0004)  
	float                                              HorizontalRebalancingWeight;                                // 0x000C   (0x0004)  
	float                                              MaxOffsetHorizontal;                                        // 0x0010   (0x0004)  
	float                                              HeelLiftRatio;                                              // 0x0014   (0x0004)  
	EPelvisHeightMode                                  PelvisHeightMode;                                           // 0x0018   (0x0001)  
	EActorMovementCompensationMode                     ActorMovementCompensationMode;                              // 0x0019   (0x0001)  
	bool                                               bEnableInterpolation;                                       // 0x001A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x001B   (0x0001)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacemenLegDefinition
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align 4 MaxSize: 0x0044
struct FFootPlacemenLegDefinition
{ 
	FBoneReference                                     FKFootBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     IKFootBone;                                                 // 0x0010   (0x0010)  
	FBoneReference                                     BallBone;                                                   // 0x0020   (0x0010)  
	int32_t                                            NumBonesInLimb;                                             // 0x0030   (0x0004)  
	FName                                              SpeedCurveName;                                             // 0x0034   (0x0008)  
	FName                                              DisableLockCurveName;                                       // 0x003C   (0x0008)  
};

/// Struct /Script/AnimationWarpingRuntime.FootPlacementPlantSettings
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FFootPlacementPlantSettings
{ 
	float                                              SpeedThreshold;                                             // 0x0000   (0x0004)  
	float                                              DistanceToGround;                                           // 0x0004   (0x0004)  
	EFootPlacementLockType                             LockType;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              UnplantRadius;                                              // 0x000C   (0x0004)  
	float                                              ReplantRadiusRatio;                                         // 0x0010   (0x0004)  
	float                                              UnplantAngle;                                               // 0x0014   (0x0004)  
	float                                              ReplantAngleRatio;                                          // 0x0018   (0x0004)  
	float                                              MaxExtensionRatio;                                          // 0x001C   (0x0004)  
	float                                              MinExtensionRatio;                                          // 0x0020   (0x0004)  
	float                                              SeparatingDistance;                                         // 0x0024   (0x0004)  
	float                                              UnalignmentSpeedThreshold;                                  // 0x0028   (0x0004)  
	float                                              AnkleTwistReduction;                                        // 0x002C   (0x0004)  
	bool                                               bAdjustHeelBeforePlanting;                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0031   (0x0003)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_FootPlacement
/// Size: 0x0410 (1040 bytes) (0x0000C8 - 0x000410) align 16 MaxSize: 0x0410
struct FAnimNode_FootPlacement : FAnimNode_SkeletalControlBase
{ 
	EWarpingEvaluationMode                             PlantSpeedMode;                                             // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	FBoneReference                                     IKFootRootBone;                                             // 0x00CC   (0x0010)  
	FBoneReference                                     PelvisBone;                                                 // 0x00DC   (0x0010)  
	FFootPlacementPelvisSettings                       PelvisSettings;                                             // 0x00EC   (0x001C)  
	TArray<FFootPlacemenLegDefinition>                 LegDefinitions;                                             // 0x0108   (0x0010)  
	FFootPlacementPlantSettings                        PlantSettings;                                              // 0x0118   (0x0034)  
	FFootPlacementInterpolationSettings                InterpolationSettings;                                      // 0x014C   (0x0024)  
	FFootPlacementTraceSettings                        TraceSettings;                                              // 0x0170   (0x001C)  
	unsigned char                                      UnknownData01_7[0x284];                                     // 0x018C   (0x0284)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_OffsetRootBone
/// Size: 0x0190 (400 bytes) (0x0000C8 - 0x000190) align 16 MaxSize: 0x0190
struct FAnimNode_OffsetRootBone : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x00C8   (0x00C8)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_OrientationWarping
/// Size: 0x0198 (408 bytes) (0x0000C8 - 0x000198) align 8 MaxSize: 0x0198
struct FAnimNode_OrientationWarping : FAnimNode_SkeletalControlBase
{ 
	EWarpingEvaluationMode                             Mode;                                                       // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              OrientationAngle;                                           // 0x00CC   (0x0004)  
	float                                              LocomotionAngle;                                            // 0x00D0   (0x0004)  
	float                                              MinRootMotionSpeedThreshold;                                // 0x00D4   (0x0004)  
	float                                              LocomotionAngleDeltaThreshold;                              // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FBoneReference>                             SpineBones;                                                 // 0x00E0   (0x0010)  
	FBoneReference                                     IKFootRootBone;                                             // 0x00F0   (0x0010)  
	TArray<FBoneReference>                             IKFootBones;                                                // 0x0100   (0x0010)  
	TEnumAsByte<EAxis>                                 RotationAxis;                                               // 0x0110   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              DistributedBoneOrientationAlpha;                            // 0x0114   (0x0004)  
	float                                              RotationInterpSpeed;                                        // 0x0118   (0x0004)  
	float                                              WarpingAlpha;                                               // 0x011C   (0x0004)  
	float                                              OffsetAlpha;                                                // 0x0120   (0x0004)  
	float                                              MaxOffsetAngle;                                             // 0x0124   (0x0004)  
	unsigned char                                      UnknownData03_7[0x70];                                      // 0x0128   (0x0070)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.SlopeWarpingFootDefinition
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FSlopeWarpingFootDefinition
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     FKFootBone;                                                 // 0x0010   (0x0010)  
	int32_t                                            NumBonesInLimb;                                             // 0x0020   (0x0004)  
	float                                              FootSize;                                                   // 0x0024   (0x0004)  
};

/// Struct /Script/AnimationWarpingRuntime.SlopeWarpingFootData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FSlopeWarpingFootData
{ 
	unsigned char                                      UnknownData00_2[0xB0];                                      // 0x0000   (0x00B0)  MISSED
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_SlopeWarping
/// Size: 0x02E0 (736 bytes) (0x0000C8 - 0x0002E0) align 8 MaxSize: 0x02E0
struct FAnimNode_SlopeWarping : FAnimNode_SkeletalControlBase
{ 
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x00C8   (0x0018)  MISSED
	FBoneReference                                     IKFootRootBone;                                             // 0x00E0   (0x0010)  
	FBoneReference                                     PelvisBone;                                                 // 0x00F0   (0x0010)  
	TArray<FSlopeWarpingFootDefinition>                FeetDefinitions;                                            // 0x0100   (0x0010)  
	TArray<FSlopeWarpingFootData>                      FeetData;                                                   // 0x0110   (0x0010)  
	FVectorRK4SpringInterpolator                       PelvisOffsetInterpolator;                                   // 0x0120   (0x0008)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x0128   (0x0058)  MISSED
	FVector                                            GravityDir;                                                 // 0x0180   (0x0018)  
	FVector                                            CustomFloorOffset;                                          // 0x0198   (0x0018)  
	float                                              CachedDeltaTime;                                            // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
	FVector                                            TargetFloorNormalWorldSpace;                                // 0x01B8   (0x0018)  
	FVectorRK4SpringInterpolator                       FloorNormalInterpolator;                                    // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x58];                                      // 0x01D8   (0x0058)  MISSED
	FVector                                            TargetFloorOffsetLocalSpace;                                // 0x0230   (0x0018)  
	FVectorRK4SpringInterpolator                       FloorOffsetInterpolator;                                    // 0x0248   (0x0008)  
	unsigned char                                      UnknownData04_6[0x58];                                      // 0x0250   (0x0058)  MISSED
	float                                              MaxStepHeight;                                              // 0x02A8   (0x0004)  
	bool                                               bKeepMeshInsideOfCapsule : 1;                               // 0x02AC:0 (0x0001)  
	bool                                               bPullPelvisDown : 1;                                        // 0x02AC:1 (0x0001)  
	bool                                               bUseCustomFloorOffset : 1;                                  // 0x02AC:2 (0x0001)  
	bool                                               bWasOnGround : 1;                                           // 0x02AC:3 (0x0001)  
	bool                                               bShowDebug : 1;                                             // 0x02AC:4 (0x0001)  
	bool                                               bFloorSmoothingInitialized : 1;                             // 0x02AC:5 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x02AD   (0x0003)  MISSED
	FVector                                            ActorLocation;                                              // 0x02B0   (0x0018)  
	FVector                                            GravityDirCompSpace;                                        // 0x02C8   (0x0018)  
};

/// Struct /Script/AnimationWarpingRuntime.StrideWarpingFootDefinition
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 4 MaxSize: 0x0030
struct FStrideWarpingFootDefinition
{ 
	FBoneReference                                     IKFootBone;                                                 // 0x0000   (0x0010)  
	FBoneReference                                     FKFootBone;                                                 // 0x0010   (0x0010)  
	FBoneReference                                     ThighBone;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/AnimationWarpingRuntime.AnimNode_StrideWarping
/// Size: 0x0248 (584 bytes) (0x0000C8 - 0x000248) align 8 MaxSize: 0x0248
struct FAnimNode_StrideWarping : FAnimNode_SkeletalControlBase
{ 
	EWarpingEvaluationMode                             Mode;                                                       // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FVector                                            StrideDirection;                                            // 0x00D0   (0x0018)  
	float                                              StrideScale;                                                // 0x00E8   (0x0004)  
	float                                              LocomotionSpeed;                                            // 0x00EC   (0x0004)  
	float                                              MinRootMotionSpeedThreshold;                                // 0x00F0   (0x0004)  
	FBoneReference                                     PelvisBone;                                                 // 0x00F4   (0x0010)  
	FBoneReference                                     IKFootRootBone;                                             // 0x0104   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0114   (0x0004)  MISSED
	TArray<FStrideWarpingFootDefinition>               FootDefinitions;                                            // 0x0118   (0x0010)  
	FInputClampConstants                               StrideScaleModifier;                                        // 0x0128   (0x0014)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FWarpingVectorValue                                FloorNormalDirection;                                       // 0x0140   (0x0020)  
	FWarpingVectorValue                                GravityDirection;                                           // 0x0160   (0x0020)  
	FIKFootPelvisPullDownSolver                        PelvisIKFootSolver;                                         // 0x0180   (0x0080)  
	bool                                               bOrientStrideDirectionUsingFloorNormal;                     // 0x0200   (0x0001)  
	bool                                               bCompensateIKUsingFKThighRotation;                          // 0x0201   (0x0001)  
	bool                                               bClampIKUsingFKLimits;                                      // 0x0202   (0x0001)  
	unsigned char                                      UnknownData03_7[0x45];                                      // 0x0203   (0x0045)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FFootPlacementInterpolationSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FFootPlacementTraceSettings) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FFootPlacementRootDefinition) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FFootPlacementPelvisSettings) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FFootPlacemenLegDefinition) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(sizeof(FFootPlacementPlantSettings) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FAnimNode_FootPlacement) == 0x0410); // 1040 bytes (0x0000C8 - 0x000410)
static_assert(sizeof(FAnimNode_OffsetRootBone) == 0x0190); // 400 bytes (0x0000C8 - 0x000190)
static_assert(sizeof(FAnimNode_OrientationWarping) == 0x0198); // 408 bytes (0x0000C8 - 0x000198)
static_assert(sizeof(FSlopeWarpingFootDefinition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FSlopeWarpingFootData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FAnimNode_SlopeWarping) == 0x02E0); // 736 bytes (0x0000C8 - 0x0002E0)
static_assert(sizeof(FStrideWarpingFootDefinition) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FAnimNode_StrideWarping) == 0x0248); // 584 bytes (0x0000C8 - 0x000248)
static_assert(offsetof(FFootPlacementTraceSettings, ComplexTraceChannel) == 0x000C);
static_assert(offsetof(FFootPlacementTraceSettings, SimpleTraceChannel) == 0x0018);
static_assert(offsetof(FFootPlacementRootDefinition, PelvisBone) == 0x0000);
static_assert(offsetof(FFootPlacementRootDefinition, IKRootBone) == 0x0010);
static_assert(offsetof(FFootPlacementPelvisSettings, PelvisHeightMode) == 0x0018);
static_assert(offsetof(FFootPlacementPelvisSettings, ActorMovementCompensationMode) == 0x0019);
static_assert(offsetof(FFootPlacemenLegDefinition, FKFootBone) == 0x0000);
static_assert(offsetof(FFootPlacemenLegDefinition, IKFootBone) == 0x0010);
static_assert(offsetof(FFootPlacemenLegDefinition, BallBone) == 0x0020);
static_assert(offsetof(FFootPlacemenLegDefinition, SpeedCurveName) == 0x0034);
static_assert(offsetof(FFootPlacemenLegDefinition, DisableLockCurveName) == 0x003C);
static_assert(offsetof(FFootPlacementPlantSettings, LockType) == 0x0008);
static_assert(offsetof(FAnimNode_FootPlacement, PlantSpeedMode) == 0x00C8);
static_assert(offsetof(FAnimNode_FootPlacement, IKFootRootBone) == 0x00CC);
static_assert(offsetof(FAnimNode_FootPlacement, PelvisBone) == 0x00DC);
static_assert(offsetof(FAnimNode_FootPlacement, PelvisSettings) == 0x00EC);
static_assert(offsetof(FAnimNode_FootPlacement, LegDefinitions) == 0x0108);
static_assert(offsetof(FAnimNode_FootPlacement, PlantSettings) == 0x0118);
static_assert(offsetof(FAnimNode_FootPlacement, InterpolationSettings) == 0x014C);
static_assert(offsetof(FAnimNode_FootPlacement, TraceSettings) == 0x0170);
static_assert(offsetof(FAnimNode_OrientationWarping, Mode) == 0x00C8);
static_assert(offsetof(FAnimNode_OrientationWarping, SpineBones) == 0x00E0);
static_assert(offsetof(FAnimNode_OrientationWarping, IKFootRootBone) == 0x00F0);
static_assert(offsetof(FAnimNode_OrientationWarping, IKFootBones) == 0x0100);
static_assert(offsetof(FAnimNode_OrientationWarping, RotationAxis) == 0x0110);
static_assert(offsetof(FSlopeWarpingFootDefinition, IKFootBone) == 0x0000);
static_assert(offsetof(FSlopeWarpingFootDefinition, FKFootBone) == 0x0010);
static_assert(offsetof(FAnimNode_SlopeWarping, IKFootRootBone) == 0x00E0);
static_assert(offsetof(FAnimNode_SlopeWarping, PelvisBone) == 0x00F0);
static_assert(offsetof(FAnimNode_SlopeWarping, FeetDefinitions) == 0x0100);
static_assert(offsetof(FAnimNode_SlopeWarping, FeetData) == 0x0110);
static_assert(offsetof(FAnimNode_SlopeWarping, PelvisOffsetInterpolator) == 0x0120);
static_assert(offsetof(FAnimNode_SlopeWarping, GravityDir) == 0x0180);
static_assert(offsetof(FAnimNode_SlopeWarping, CustomFloorOffset) == 0x0198);
static_assert(offsetof(FAnimNode_SlopeWarping, TargetFloorNormalWorldSpace) == 0x01B8);
static_assert(offsetof(FAnimNode_SlopeWarping, FloorNormalInterpolator) == 0x01D0);
static_assert(offsetof(FAnimNode_SlopeWarping, TargetFloorOffsetLocalSpace) == 0x0230);
static_assert(offsetof(FAnimNode_SlopeWarping, FloorOffsetInterpolator) == 0x0248);
static_assert(offsetof(FAnimNode_SlopeWarping, ActorLocation) == 0x02B0);
static_assert(offsetof(FAnimNode_SlopeWarping, GravityDirCompSpace) == 0x02C8);
static_assert(offsetof(FStrideWarpingFootDefinition, IKFootBone) == 0x0000);
static_assert(offsetof(FStrideWarpingFootDefinition, FKFootBone) == 0x0010);
static_assert(offsetof(FStrideWarpingFootDefinition, ThighBone) == 0x0020);
static_assert(offsetof(FAnimNode_StrideWarping, Mode) == 0x00C8);
static_assert(offsetof(FAnimNode_StrideWarping, StrideDirection) == 0x00D0);
static_assert(offsetof(FAnimNode_StrideWarping, PelvisBone) == 0x00F4);
static_assert(offsetof(FAnimNode_StrideWarping, IKFootRootBone) == 0x0104);
static_assert(offsetof(FAnimNode_StrideWarping, FootDefinitions) == 0x0118);
static_assert(offsetof(FAnimNode_StrideWarping, StrideScaleModifier) == 0x0128);
static_assert(offsetof(FAnimNode_StrideWarping, FloorNormalDirection) == 0x0140);
static_assert(offsetof(FAnimNode_StrideWarping, GravityDirection) == 0x0160);
static_assert(offsetof(FAnimNode_StrideWarping, PelvisIKFootSolver) == 0x0180);
