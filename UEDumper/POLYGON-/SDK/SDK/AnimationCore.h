
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/AnimationCore.EEulerRotationOrder
/// Size: 0x01 (1 bytes)
enum class EEulerRotationOrder : uint8_t
{
	EEulerRotationOrder__XYZ                                                         = 0,
	EEulerRotationOrder__XZY                                                         = 1,
	EEulerRotationOrder__YXZ                                                         = 2,
	EEulerRotationOrder__YZX                                                         = 3,
	EEulerRotationOrder__ZXY                                                         = 4,
	EEulerRotationOrder__ZYX                                                         = 5
};

/// Enum /Script/AnimationCore.EConstraintType
/// Size: 0x01 (1 bytes)
enum class EConstraintType : uint8_t
{
	EConstraintType__Transform                                                       = 0,
	EConstraintType__Aim                                                             = 1
};

/// Enum /Script/AnimationCore.ETransformConstraintType
/// Size: 0x01 (1 bytes)
enum class ETransformConstraintType : uint8_t
{
	ETransformConstraintType__Translation                                            = 0,
	ETransformConstraintType__Rotation                                               = 1,
	ETransformConstraintType__Scale                                                  = 2,
	ETransformConstraintType__Parent                                                 = 3,
	ETransformConstraintType__LookAt                                                 = 4
};

/// Class /Script/AnimationCore.AnimationDataSourceRegistry
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UAnimationDataSourceRegistry : public UObject
{ 
public:
	SDK_UNDEFINED(80,2) /* TMap<FName, TWeakObjectPtr<UObject*>> */ __um(DataSources);                             // 0x0028   (0x0050)  
};

/// Struct /Script/AnimationCore.FilterOptionPerAxis
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FFilterOptionPerAxis
{ 
	bool                                               bX;                                                         // 0x0000   (0x0001)  
	bool                                               bY;                                                         // 0x0001   (0x0001)  
	bool                                               bZ;                                                         // 0x0002   (0x0001)  
};

/// Struct /Script/AnimationCore.ConstraintDescription
/// Size: 0x000D (13 bytes) (0x000000 - 0x00000D) align 1 MaxSize: 0x000D
struct FConstraintDescription
{ 
	bool                                               bTranslation;                                               // 0x0000   (0x0001)  
	bool                                               bRotation;                                                  // 0x0001   (0x0001)  
	bool                                               bScale;                                                     // 0x0002   (0x0001)  
	bool                                               bParent;                                                    // 0x0003   (0x0001)  
	FFilterOptionPerAxis                               TranslationAxes;                                            // 0x0004   (0x0003)  
	FFilterOptionPerAxis                               RotationAxes;                                               // 0x0007   (0x0003)  
	FFilterOptionPerAxis                               ScaleAxes;                                                  // 0x000A   (0x0003)  
};

/// Struct /Script/AnimationCore.TransformConstraint
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FTransformConstraint
{ 
	FConstraintDescription                             Operator;                                                   // 0x0000   (0x000D)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FName                                              SourceNode;                                                 // 0x0010   (0x0008)  
	FName                                              TargetNode;                                                 // 0x0018   (0x0008)  
	float                                              Weight;                                                     // 0x0020   (0x0004)  
	bool                                               bMaintainOffset;                                            // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/AnimationCore.ConstraintOffset
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FConstraintOffset
{ 
	FVector                                            Translation;                                                // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0020   (0x0020)  
	FVector                                            Scale;                                                      // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	FTransform                                         Parent;                                                     // 0x0060   (0x0060)  
};

/// Struct /Script/AnimationCore.NodeObject
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNodeObject
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              ParentName;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/AnimationCore.NodeHierarchyData
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FNodeHierarchyData
{ 
	TArray<FNodeObject>                                Nodes;                                                      // 0x0000   (0x0010)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0010   (0x0010)  
	TMap<FName, int32_t>                               NodeNameToIndexMapping;                                     // 0x0020   (0x0050)  
};

/// Struct /Script/AnimationCore.NodeHierarchyWithUserData
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FNodeHierarchyWithUserData
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FNodeHierarchyData                                 Hierarchy;                                                  // 0x0008   (0x0070)  
};

/// Struct /Script/AnimationCore.TransformFilter
/// Size: 0x0009 (9 bytes) (0x000000 - 0x000009) align 1 MaxSize: 0x0009
struct FTransformFilter
{ 
	FFilterOptionPerAxis                               TranslationFilter;                                          // 0x0000   (0x0003)  
	FFilterOptionPerAxis                               RotationFilter;                                             // 0x0003   (0x0003)  
	FFilterOptionPerAxis                               ScaleFilter;                                                // 0x0006   (0x0003)  
};

/// Struct /Script/AnimationCore.EulerTransform
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FEulerTransform
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0018   (0x0018)  
	FVector                                            Scale;                                                      // 0x0030   (0x0018)  
};

/// Struct /Script/AnimationCore.ConstraintDescriptor
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FConstraintDescriptor
{ 
	EConstraintType                                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0001   (0x000F)  MISSED
};

/// Struct /Script/AnimationCore.ConstraintData
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FConstraintData
{ 
	FConstraintDescriptor                              Constraint;                                                 // 0x0000   (0x0010)  
	float                                              Weight;                                                     // 0x0010   (0x0004)  
	bool                                               bMaintainOffset;                                            // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0015   (0x000B)  MISSED
	FTransform                                         Offset;                                                     // 0x0020   (0x0060)  
	FTransform                                         CurrentTransform;                                           // 0x0080   (0x0060)  
};

/// Struct /Script/AnimationCore.CCDIKChainLink
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FCCDIKChainLink
{ 
	unsigned char                                      UnknownData00_2[0xE0];                                      // 0x0000   (0x00E0)  MISSED
};

/// Struct /Script/AnimationCore.FABRIKChainLink
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FFABRIKChainLink
{ 
	unsigned char                                      UnknownData00_2[0x50];                                      // 0x0000   (0x0050)  MISSED
};

/// Struct /Script/AnimationCore.Axis
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FAxis
{ 
	FVector                                            Axis;                                                       // 0x0000   (0x0018)  
	bool                                               bInLocalSpace;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/AnimationCore.NodeChain
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNodeChain
{ 
	TArray<FName>                                      Nodes;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/AnimationCore.ConstraintDescriptionEx
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FConstraintDescriptionEx
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FFilterOptionPerAxis                               AxesFilterOption;                                           // 0x0008   (0x0003)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/AnimationCore.TransformConstraintDescription
/// Size: 0x0018 (24 bytes) (0x000010 - 0x000018) align 8 MaxSize: 0x0018
struct FTransformConstraintDescription : FConstraintDescriptionEx
{ 
	ETransformConstraintType                           TransformType;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/AnimationCore.AimConstraintDescription
/// Size: 0x0070 (112 bytes) (0x000010 - 0x000070) align 8 MaxSize: 0x0070
struct FAimConstraintDescription : FConstraintDescriptionEx
{ 
	FAxis                                              LookAt_Axis;                                                // 0x0010   (0x0020)  
	FAxis                                              LookUp_Axis;                                                // 0x0030   (0x0020)  
	bool                                               bUseLookUp;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FVector                                            LookUpTarget;                                               // 0x0058   (0x0018)  
};

/// Struct /Script/AnimationCore.TransformNoScale
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FTransformNoScale
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0020   (0x0020)  
};

#pragma pack(pop)


static_assert(sizeof(UAnimationDataSourceRegistry) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FFilterOptionPerAxis) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FConstraintDescription) == 0x000D); // 13 bytes (0x000000 - 0x00000D)
static_assert(sizeof(FTransformConstraint) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FConstraintOffset) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FNodeObject) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNodeHierarchyData) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FNodeHierarchyWithUserData) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FTransformFilter) == 0x0009); // 9 bytes (0x000000 - 0x000009)
static_assert(sizeof(FEulerTransform) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FConstraintDescriptor) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FConstraintData) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FCCDIKChainLink) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FFABRIKChainLink) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FAxis) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNodeChain) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FConstraintDescriptionEx) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTransformConstraintDescription) == 0x0018); // 24 bytes (0x000010 - 0x000018)
static_assert(sizeof(FAimConstraintDescription) == 0x0070); // 112 bytes (0x000010 - 0x000070)
static_assert(sizeof(FTransformNoScale) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(FConstraintDescription, TranslationAxes) == 0x0004);
static_assert(offsetof(FConstraintDescription, RotationAxes) == 0x0007);
static_assert(offsetof(FConstraintDescription, ScaleAxes) == 0x000A);
static_assert(offsetof(FTransformConstraint, Operator) == 0x0000);
static_assert(offsetof(FTransformConstraint, SourceNode) == 0x0010);
static_assert(offsetof(FTransformConstraint, TargetNode) == 0x0018);
static_assert(offsetof(FConstraintOffset, Translation) == 0x0000);
static_assert(offsetof(FConstraintOffset, Rotation) == 0x0020);
static_assert(offsetof(FConstraintOffset, Scale) == 0x0040);
static_assert(offsetof(FConstraintOffset, Parent) == 0x0060);
static_assert(offsetof(FNodeObject, Name) == 0x0000);
static_assert(offsetof(FNodeObject, ParentName) == 0x0008);
static_assert(offsetof(FNodeHierarchyData, Nodes) == 0x0000);
static_assert(offsetof(FNodeHierarchyData, Transforms) == 0x0010);
static_assert(offsetof(FNodeHierarchyData, NodeNameToIndexMapping) == 0x0020);
static_assert(offsetof(FNodeHierarchyWithUserData, Hierarchy) == 0x0008);
static_assert(offsetof(FTransformFilter, TranslationFilter) == 0x0000);
static_assert(offsetof(FTransformFilter, RotationFilter) == 0x0003);
static_assert(offsetof(FTransformFilter, ScaleFilter) == 0x0006);
static_assert(offsetof(FEulerTransform, Location) == 0x0000);
static_assert(offsetof(FEulerTransform, Rotation) == 0x0018);
static_assert(offsetof(FEulerTransform, Scale) == 0x0030);
static_assert(offsetof(FConstraintDescriptor, Type) == 0x0000);
static_assert(offsetof(FConstraintData, Constraint) == 0x0000);
static_assert(offsetof(FConstraintData, Offset) == 0x0020);
static_assert(offsetof(FConstraintData, CurrentTransform) == 0x0080);
static_assert(offsetof(FAxis, Axis) == 0x0000);
static_assert(offsetof(FNodeChain, Nodes) == 0x0000);
static_assert(offsetof(FConstraintDescriptionEx, AxesFilterOption) == 0x0008);
static_assert(offsetof(FTransformConstraintDescription, TransformType) == 0x0010);
static_assert(offsetof(FAimConstraintDescription, LookAt_Axis) == 0x0010);
static_assert(offsetof(FAimConstraintDescription, LookUp_Axis) == 0x0030);
static_assert(offsetof(FAimConstraintDescription, LookUpTarget) == 0x0058);
static_assert(offsetof(FTransformNoScale, Location) == 0x0000);
static_assert(offsetof(FTransformNoScale, Rotation) == 0x0020);
