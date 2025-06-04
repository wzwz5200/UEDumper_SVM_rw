
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
/// Size: 0x01 (1 bytes)
enum class EClothingWindMethod_Legacy : uint8_t
{
	EClothingWindMethod_Legacy__Legacy                                               = 0,
	EClothingWindMethod_Legacy__Accurate                                             = 1
};

/// Enum /Script/ClothingSystemRuntimeCommon.EWeightMapTargetCommon
/// Size: 0x01 (1 bytes)
enum class EWeightMapTargetCommon : uint8_t
{
	EWeightMapTargetCommon__None                                                     = 0,
	EWeightMapTargetCommon__MaxDistance                                              = 1,
	EWeightMapTargetCommon__BackstopDistance                                         = 2,
	EWeightMapTargetCommon__BackstopRadius                                           = 3,
	EWeightMapTargetCommon__AnimDriveStiffness                                       = 4,
	EWeightMapTargetCommon__AnimDriveDamping_DEPRECATED                              = 5
};

/// Enum /Script/ClothingSystemRuntimeCommon.EClothMassMode
/// Size: 0x01 (1 bytes)
enum class EClothMassMode : uint8_t
{
	EClothMassMode__UniformMass                                                      = 0,
	EClothMassMode__TotalMass                                                        = 1,
	EClothMassMode__Density                                                          = 2,
	EClothMassMode__MaxClothMassMode                                                 = 3
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothConfigCommon
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UClothConfigCommon : public UClothConfigBase
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothSharedConfigCommon
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UClothSharedConfigCommon : public UClothConfigCommon
{ 
public:
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCustomData
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UClothingAssetCustomData : public UObject
{ 
public:
};

/// Struct /Script/ClothingSystemRuntimeCommon.PointWeightMap
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPointWeightMap
{ 
	TArray<float>                                      Values;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothTetherData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FClothTetherData
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothPhysicalMeshData
/// Size: 0x00D8 (216 bytes) (0x000000 - 0x0000D8) align 8 MaxSize: 0x00D8
struct FClothPhysicalMeshData
{ 
	TArray<FVector3f>                                  Vertices;                                                   // 0x0000   (0x0010)  
	TArray<FVector3f>                                  Normals;                                                    // 0x0010   (0x0010)  
	TArray<uint32_t>                                   Indices;                                                    // 0x0020   (0x0010)  
	TMap<uint32_t, FPointWeightMap>                    WeightMaps;                                                 // 0x0030   (0x0050)  
	TArray<float>                                      InverseMasses;                                              // 0x0080   (0x0010)  
	TArray<FClothVertBoneData>                         BoneData;                                                   // 0x0090   (0x0010)  
	TArray<uint32_t>                                   SelfCollisionIndices;                                       // 0x00A0   (0x0010)  
	FClothTetherData                                   EuclideanTethers;                                           // 0x00B0   (0x0010)  
	FClothTetherData                                   GeodesicTethers;                                            // 0x00C0   (0x0010)  
	int32_t                                            MaxBoneWeights;                                             // 0x00D0   (0x0004)  
	int32_t                                            NumFixedVerts;                                              // 0x00D4   (0x0004)  
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon
/// Size: 0x0148 (328 bytes) (0x000000 - 0x000148) align 8 MaxSize: 0x0148
struct FClothLODDataCommon
{ 
	FClothPhysicalMeshData                             PhysicalMeshData;                                           // 0x0000   (0x00D8)  
	FClothCollisionData                                CollisionData;                                              // 0x00D8   (0x0040)  
	bool                                               bUseMultipleInfluences;                                     // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0119   (0x0003)  MISSED
	float                                              SkinningKernelRadius;                                       // 0x011C   (0x0004)  
	bool                                               bSmoothTransition;                                          // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_7[0x27];                                      // 0x0121   (0x0027)  MISSED
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCommon
/// Size: 0x00F0 (240 bytes) (0x000048 - 0x0000F0) align 8 MaxSize: 0x00F0
class UClothingAssetCommon : public UClothingAssetBase
{ 
public:
	class UPhysicsAsset*                               PhysicsAsset;                                               // 0x0048   (0x0008)  
	TMap<FName, class UClothConfigBase*>               ClothConfigs;                                               // 0x0050   (0x0050)  
	TArray<FClothLODDataCommon>                        LODData;                                                    // 0x00A0   (0x0010)  
	TArray<int32_t>                                    LodMap;                                                     // 0x00B0   (0x0010)  
	TArray<FName>                                      UsedBoneNames;                                              // 0x00C0   (0x0010)  
	TArray<int32_t>                                    UsedBoneIndices;                                            // 0x00D0   (0x0010)  
	int32_t                                            ReferenceBoneIndex;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	class UClothingAssetCustomData*                    customData;                                                 // 0x00E8   (0x0008)  
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
/// Size: 0x0168 (360 bytes) (0x000028 - 0x000168) align 8 MaxSize: 0x0168
class UClothLODDataCommon_Legacy : public UObject
{ 
public:
	class UClothPhysicalMeshDataBase_Legacy*           PhysicalMeshData;                                           // 0x0028   (0x0008)  
	FClothPhysicalMeshData                             ClothPhysicalMeshData;                                      // 0x0030   (0x00D8)  
	FClothCollisionData                                CollisionData;                                              // 0x0108   (0x0040)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0148   (0x0020)  MISSED
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FClothConstraintSetup_Legacy
{ 
	float                                              Stiffness;                                                  // 0x0000   (0x0004)  
	float                                              StiffnessMultiplier;                                        // 0x0004   (0x0004)  
	float                                              StretchLimit;                                               // 0x0008   (0x0004)  
	float                                              CompressionLimit;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothConfig_Legacy
/// Size: 0x0130 (304 bytes) (0x000000 - 0x000130) align 8 MaxSize: 0x0130
struct FClothConfig_Legacy
{ 
	EClothingWindMethod_Legacy                         WindMethod;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FClothConstraintSetup_Legacy                       VerticalConstraintConfig;                                   // 0x0004   (0x0010)  
	FClothConstraintSetup_Legacy                       HorizontalConstraintConfig;                                 // 0x0014   (0x0010)  
	FClothConstraintSetup_Legacy                       BendConstraintConfig;                                       // 0x0024   (0x0010)  
	FClothConstraintSetup_Legacy                       ShearConstraintConfig;                                      // 0x0034   (0x0010)  
	float                                              SelfCollisionRadius;                                        // 0x0044   (0x0004)  
	float                                              SelfCollisionStiffness;                                     // 0x0048   (0x0004)  
	float                                              SelfCollisionCullScale;                                     // 0x004C   (0x0004)  
	FVector                                            Damping;                                                    // 0x0050   (0x0018)  
	float                                              Friction;                                                   // 0x0068   (0x0004)  
	float                                              WindDragCoefficient;                                        // 0x006C   (0x0004)  
	float                                              WindLiftCoefficient;                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FVector                                            LinearDrag;                                                 // 0x0078   (0x0018)  
	FVector                                            AngularDrag;                                                // 0x0090   (0x0018)  
	FVector                                            LinearInertiaScale;                                         // 0x00A8   (0x0018)  
	FVector                                            AngularInertiaScale;                                        // 0x00C0   (0x0018)  
	FVector                                            CentrifugalInertiaScale;                                    // 0x00D8   (0x0018)  
	float                                              SolverFrequency;                                            // 0x00F0   (0x0004)  
	float                                              StiffnessFrequency;                                         // 0x00F4   (0x0004)  
	float                                              GravityScale;                                               // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FVector                                            GravityOverride;                                            // 0x0100   (0x0018)  
	bool                                               bUseGravityOverride;                                        // 0x0118   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0119   (0x0003)  MISSED
	float                                              TetherStiffness;                                            // 0x011C   (0x0004)  
	float                                              TetherLimit;                                                // 0x0120   (0x0004)  
	float                                              CollisionThickness;                                         // 0x0124   (0x0004)  
	float                                              AnimDriveSpringStiffness;                                   // 0x0128   (0x0004)  
	float                                              AnimDriveDamperStiffness;                                   // 0x012C   (0x0004)  
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FClothParameterMask_Legacy
{ 
	FName                                              MaskName;                                                   // 0x0000   (0x0008)  
	EWeightMapTargetCommon                             CurrentTarget;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              MaxValue;                                                   // 0x000C   (0x0004)  
	float                                              MinValue;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<float>                                      Values;                                                     // 0x0018   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UClothConfigCommon) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothSharedConfigCommon) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClothingAssetCustomData) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPointWeightMap) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FClothTetherData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FClothPhysicalMeshData) == 0x00D8); // 216 bytes (0x000000 - 0x0000D8)
static_assert(sizeof(FClothLODDataCommon) == 0x0148); // 328 bytes (0x000000 - 0x000148)
static_assert(sizeof(UClothingAssetCommon) == 0x00F0); // 240 bytes (0x000048 - 0x0000F0)
static_assert(sizeof(UClothLODDataCommon_Legacy) == 0x0168); // 360 bytes (0x000028 - 0x000168)
static_assert(sizeof(FClothConstraintSetup_Legacy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FClothConfig_Legacy) == 0x0130); // 304 bytes (0x000000 - 0x000130)
static_assert(sizeof(FClothParameterMask_Legacy) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FPointWeightMap, Values) == 0x0000);
static_assert(offsetof(FClothPhysicalMeshData, Vertices) == 0x0000);
static_assert(offsetof(FClothPhysicalMeshData, Normals) == 0x0010);
static_assert(offsetof(FClothPhysicalMeshData, Indices) == 0x0020);
static_assert(offsetof(FClothPhysicalMeshData, WeightMaps) == 0x0030);
static_assert(offsetof(FClothPhysicalMeshData, InverseMasses) == 0x0080);
static_assert(offsetof(FClothPhysicalMeshData, BoneData) == 0x0090);
static_assert(offsetof(FClothPhysicalMeshData, SelfCollisionIndices) == 0x00A0);
static_assert(offsetof(FClothPhysicalMeshData, EuclideanTethers) == 0x00B0);
static_assert(offsetof(FClothPhysicalMeshData, GeodesicTethers) == 0x00C0);
static_assert(offsetof(FClothLODDataCommon, PhysicalMeshData) == 0x0000);
static_assert(offsetof(FClothLODDataCommon, CollisionData) == 0x00D8);
static_assert(offsetof(UClothingAssetCommon, PhysicsAsset) == 0x0048);
static_assert(offsetof(UClothingAssetCommon, ClothConfigs) == 0x0050);
static_assert(offsetof(UClothingAssetCommon, LODData) == 0x00A0);
static_assert(offsetof(UClothingAssetCommon, LodMap) == 0x00B0);
static_assert(offsetof(UClothingAssetCommon, UsedBoneNames) == 0x00C0);
static_assert(offsetof(UClothingAssetCommon, UsedBoneIndices) == 0x00D0);
static_assert(offsetof(UClothingAssetCommon, customData) == 0x00E8);
static_assert(offsetof(UClothLODDataCommon_Legacy, PhysicalMeshData) == 0x0028);
static_assert(offsetof(UClothLODDataCommon_Legacy, ClothPhysicalMeshData) == 0x0030);
static_assert(offsetof(UClothLODDataCommon_Legacy, CollisionData) == 0x0108);
static_assert(offsetof(FClothConfig_Legacy, WindMethod) == 0x0000);
static_assert(offsetof(FClothConfig_Legacy, VerticalConstraintConfig) == 0x0004);
static_assert(offsetof(FClothConfig_Legacy, HorizontalConstraintConfig) == 0x0014);
static_assert(offsetof(FClothConfig_Legacy, BendConstraintConfig) == 0x0024);
static_assert(offsetof(FClothConfig_Legacy, ShearConstraintConfig) == 0x0034);
static_assert(offsetof(FClothConfig_Legacy, Damping) == 0x0050);
static_assert(offsetof(FClothConfig_Legacy, LinearDrag) == 0x0078);
static_assert(offsetof(FClothConfig_Legacy, AngularDrag) == 0x0090);
static_assert(offsetof(FClothConfig_Legacy, LinearInertiaScale) == 0x00A8);
static_assert(offsetof(FClothConfig_Legacy, AngularInertiaScale) == 0x00C0);
static_assert(offsetof(FClothConfig_Legacy, CentrifugalInertiaScale) == 0x00D8);
static_assert(offsetof(FClothConfig_Legacy, GravityOverride) == 0x0100);
static_assert(offsetof(FClothParameterMask_Legacy, MaskName) == 0x0000);
static_assert(offsetof(FClothParameterMask_Legacy, CurrentTarget) == 0x0008);
static_assert(offsetof(FClothParameterMask_Legacy, Values) == 0x0018);
