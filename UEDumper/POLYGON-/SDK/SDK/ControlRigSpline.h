
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: RigVM

#pragma pack(push, 0x1)

/// Enum /Script/ControlRigSpline.ESplineType
/// Size: 0x01 (1 bytes)
enum class ESplineType : uint8_t
{
	ESplineType__BSpline                                                             = 0,
	ESplineType__Hermite                                                             = 1,
	ESplineType__Max                                                                 = 2
};

/// Struct /Script/ControlRigSpline.ControlRigSplineImpl
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FControlRigSplineImpl
{ 
	unsigned char                                      UnknownData00_2[0x58];                                      // 0x0000   (0x0058)  MISSED
};

/// Struct /Script/ControlRigSpline.ControlRigSpline
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FControlRigSpline
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_ControlRigSplineBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_ControlRigSplineBase : FRigUnit
{ 
};

/// Struct /Script/ControlRigSpline.RigUnit_ControlRigSplineFromPoints
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_ControlRigSplineFromPoints : FRigUnit_ControlRigSplineBase
{ 
	TArray<FVector>                                    Points;                                                     // 0x0008   (0x0010)  
	ESplineType                                        SplineMode;                                                 // 0x0018   (0x0001)  
	bool                                               bClosed;                                                    // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	int32_t                                            SamplesPerSegment;                                          // 0x001C   (0x0004)  
	float                                              Compression;                                                // 0x0020   (0x0004)  
	float                                              Stretch;                                                    // 0x0024   (0x0004)  
	FControlRigSpline                                  Spline;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRigSpline.RigUnit_SetSplinePoints
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetSplinePoints : FRigUnitMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0130   (0x0010)  
	FControlRigSpline                                  Spline;                                                     // 0x0140   (0x0018)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_PositionFromControlRigSpline
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_PositionFromControlRigSpline : FRigUnit_ControlRigSplineBase
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	float                                              U;                                                          // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            position;                                                   // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRigSpline.RigUnit_TransformFromControlRigSpline
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_TransformFromControlRigSpline : FRigUnit_ControlRigSplineBase
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	FVector                                            UpVector;                                                   // 0x0020   (0x0018)  
	float                                              Roll;                                                       // 0x0038   (0x0004)  
	float                                              U;                                                          // 0x003C   (0x0004)  
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
};

/// Struct /Script/ControlRigSpline.RigUnit_TangentFromControlRigSpline
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_TangentFromControlRigSpline : FRigUnit_ControlRigSplineBase
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	float                                              U;                                                          // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Tangent;                                                    // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRigSpline.RigUnit_DrawControlRigSpline
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_DrawControlRigSpline : FRigUnitMutable
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0130   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0148   (0x0010)  
	float                                              Thickness;                                                  // 0x0158   (0x0004)  
	int32_t                                            Detail;                                                     // 0x015C   (0x0004)  
};

/// Struct /Script/ControlRigSpline.RigUnit_GetLengthControlRigSpline
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_GetLengthControlRigSpline : FRigUnit
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	float                                              Length;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_FitChainToSplineCurve
/// Size: 0x0300 (768 bytes) (0x000130 - 0x000300) align 16 MaxSize: 0x0300
struct FRigUnit_FitChainToSplineCurve : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0130   (0x0010)  
	FControlRigSpline                                  Spline;                                                     // 0x0140   (0x0018)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0159   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x015C   (0x0004)  
	float                                              Maximum;                                                    // 0x0160   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x0164   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x0168   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0180   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x0198   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x01B0   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01C1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x01C4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x01C9   (0x0007)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x01D0   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0260   (0x0098)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x02F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
/// Size: 0x0300 (768 bytes) (0x000130 - 0x000300) align 16 MaxSize: 0x0300
struct FRigUnit_FitChainToSplineCurveItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0130   (0x0010)  
	FControlRigSpline                                  Spline;                                                     // 0x0140   (0x0018)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0159   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x015C   (0x0004)  
	float                                              Maximum;                                                    // 0x0160   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x0164   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x0168   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0180   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x0198   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x01B0   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01C1   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x01C4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x01C9   (0x0007)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x01D0   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x0260   (0x0098)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x02F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_FitSplineCurveToChain
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_FitSplineCurveToChain : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0130   (0x0010)  
	FControlRigSpline                                  Spline;                                                     // 0x0140   (0x0018)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_FitSplineCurveToChainItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0130   (0x0010)  
	FControlRigSpline                                  Spline;                                                     // 0x0140   (0x0018)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_ClosestParameterFromControlRigSpline : FRigUnit_ControlRigSplineBase
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	FVector                                            position;                                                   // 0x0020   (0x0018)  
	float                                              U;                                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRigSpline.RigUnit_ParameterAtPercentage
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_ParameterAtPercentage : FRigUnit_ControlRigSplineBase
{ 
	FControlRigSpline                                  Spline;                                                     // 0x0008   (0x0018)  
	float                                              Percentage;                                                 // 0x0020   (0x0004)  
	float                                              U;                                                          // 0x0024   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(FControlRigSplineImpl) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FControlRigSpline) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigUnit_ControlRigSplineBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_ControlRigSplineFromPoints) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_SetSplinePoints) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_PositionFromControlRigSpline) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_TransformFromControlRigSpline) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_TangentFromControlRigSpline) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_DrawControlRigSpline) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_GetLengthControlRigSpline) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_FitChainToSplineCurve) == 0x0300); // 768 bytes (0x000130 - 0x000300)
static_assert(sizeof(FRigUnit_FitChainToSplineCurveItemArray) == 0x0300); // 768 bytes (0x000130 - 0x000300)
static_assert(sizeof(FRigUnit_FitSplineCurveToChain) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_FitSplineCurveToChainItemArray) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_ClosestParameterFromControlRigSpline) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_ParameterAtPercentage) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Points) == 0x0008);
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, SplineMode) == 0x0018);
static_assert(offsetof(FRigUnit_ControlRigSplineFromPoints, Spline) == 0x0028);
static_assert(offsetof(FRigUnit_SetSplinePoints, Points) == 0x0130);
static_assert(offsetof(FRigUnit_SetSplinePoints, Spline) == 0x0140);
static_assert(offsetof(FRigUnit_PositionFromControlRigSpline, Spline) == 0x0008);
static_assert(offsetof(FRigUnit_PositionFromControlRigSpline, position) == 0x0028);
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, Spline) == 0x0008);
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, UpVector) == 0x0020);
static_assert(offsetof(FRigUnit_TransformFromControlRigSpline, Transform) == 0x0040);
static_assert(offsetof(FRigUnit_TangentFromControlRigSpline, Spline) == 0x0008);
static_assert(offsetof(FRigUnit_TangentFromControlRigSpline, Tangent) == 0x0028);
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Spline) == 0x0130);
static_assert(offsetof(FRigUnit_DrawControlRigSpline, Color) == 0x0148);
static_assert(offsetof(FRigUnit_GetLengthControlRigSpline, Spline) == 0x0008);
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Items) == 0x0130);
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Spline) == 0x0140);
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Alignment) == 0x0158);
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, PrimaryAxis) == 0x0168);
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, SecondaryAxis) == 0x0180);
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, PoleVectorPosition) == 0x0198);
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, Rotations) == 0x01B0);
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, RotationEaseType) == 0x01C0);
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, DebugSettings) == 0x01D0);
static_assert(offsetof(FRigUnit_FitChainToSplineCurve, WorkData) == 0x0260);
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Items) == 0x0130);
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Spline) == 0x0140);
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Alignment) == 0x0158);
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, PrimaryAxis) == 0x0168);
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, SecondaryAxis) == 0x0180);
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, PoleVectorPosition) == 0x0198);
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, Rotations) == 0x01B0);
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, RotationEaseType) == 0x01C0);
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, DebugSettings) == 0x01D0);
static_assert(offsetof(FRigUnit_FitChainToSplineCurveItemArray, WorkData) == 0x0260);
static_assert(offsetof(FRigUnit_FitSplineCurveToChain, Items) == 0x0130);
static_assert(offsetof(FRigUnit_FitSplineCurveToChain, Spline) == 0x0140);
static_assert(offsetof(FRigUnit_FitSplineCurveToChainItemArray, Items) == 0x0130);
static_assert(offsetof(FRigUnit_FitSplineCurveToChainItemArray, Spline) == 0x0140);
static_assert(offsetof(FRigUnit_ClosestParameterFromControlRigSpline, Spline) == 0x0008);
static_assert(offsetof(FRigUnit_ClosestParameterFromControlRigSpline, position) == 0x0020);
static_assert(offsetof(FRigUnit_ParameterAtPercentage, Spline) == 0x0008);
