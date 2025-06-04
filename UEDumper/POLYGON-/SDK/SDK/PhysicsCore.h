
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: DeveloperSettings

#pragma pack(push, 0x1)

/// Enum /Script/PhysicsCore.ECollisionTraceFlag
/// Size: 0x01 (1 bytes)
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                                                                   = 0,
	CTF_UseSimpleAndComplex                                                          = 1,
	CTF_UseSimpleAsComplex                                                           = 2,
	CTF_UseComplexAsSimple                                                           = 3
};

/// Enum /Script/PhysicsCore.EPhysicsType
/// Size: 0x01 (1 bytes)
enum class EPhysicsType : uint8_t
{
	PhysType_Default                                                                 = 0,
	PhysType_Kinematic                                                               = 1,
	PhysType_Simulated                                                               = 2
};

/// Enum /Script/PhysicsCore.EBodyCollisionResponse
/// Size: 0x01 (1 bytes)
enum class EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled                                    = 0,
	EBodyCollisionResponse__BodyCollision_Disabled                                   = 1
};

/// Enum /Script/PhysicsCore.EPhysicalSurface
/// Size: 0x01 (1 bytes)
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default                                                              = 0,
	SurfaceType1                                                                     = 1,
	SurfaceType2                                                                     = 2,
	SurfaceType3                                                                     = 3,
	SurfaceType4                                                                     = 4,
	SurfaceType5                                                                     = 5,
	SurfaceType6                                                                     = 6,
	SurfaceType7                                                                     = 7,
	SurfaceType8                                                                     = 8,
	SurfaceType9                                                                     = 9,
	SurfaceType10                                                                    = 10,
	SurfaceType11                                                                    = 11,
	SurfaceType12                                                                    = 12,
	SurfaceType13                                                                    = 13,
	SurfaceType14                                                                    = 14,
	SurfaceType15                                                                    = 15,
	SurfaceType16                                                                    = 16,
	SurfaceType17                                                                    = 17,
	SurfaceType18                                                                    = 18,
	SurfaceType19                                                                    = 19,
	SurfaceType20                                                                    = 20,
	SurfaceType21                                                                    = 21,
	SurfaceType22                                                                    = 22,
	SurfaceType23                                                                    = 23,
	SurfaceType24                                                                    = 24,
	SurfaceType25                                                                    = 25,
	SurfaceType26                                                                    = 26,
	SurfaceType27                                                                    = 27,
	SurfaceType28                                                                    = 28,
	SurfaceType29                                                                    = 29,
	SurfaceType30                                                                    = 30,
	SurfaceType31                                                                    = 31,
	SurfaceType32                                                                    = 32,
	SurfaceType33                                                                    = 33,
	SurfaceType34                                                                    = 34,
	SurfaceType35                                                                    = 35,
	SurfaceType36                                                                    = 36,
	SurfaceType37                                                                    = 37,
	SurfaceType38                                                                    = 38,
	SurfaceType39                                                                    = 39,
	SurfaceType40                                                                    = 40,
	SurfaceType41                                                                    = 41,
	SurfaceType42                                                                    = 42,
	SurfaceType43                                                                    = 43,
	SurfaceType44                                                                    = 44,
	SurfaceType45                                                                    = 45,
	SurfaceType46                                                                    = 46,
	SurfaceType47                                                                    = 47,
	SurfaceType48                                                                    = 48,
	SurfaceType49                                                                    = 49,
	SurfaceType50                                                                    = 50,
	SurfaceType51                                                                    = 51,
	SurfaceType52                                                                    = 52,
	SurfaceType53                                                                    = 53,
	SurfaceType54                                                                    = 54,
	SurfaceType55                                                                    = 55,
	SurfaceType56                                                                    = 56,
	SurfaceType57                                                                    = 57,
	SurfaceType58                                                                    = 58,
	SurfaceType59                                                                    = 59,
	SurfaceType60                                                                    = 60,
	SurfaceType61                                                                    = 61,
	SurfaceType62                                                                    = 62,
	SurfaceType_Max                                                                  = 63
};

/// Enum /Script/PhysicsCore.ERadialImpulseFalloff
/// Size: 0x01 (1 bytes)
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                                                                     = 0,
	RIF_Linear                                                                       = 1
};

/// Enum /Script/PhysicsCore.ESleepFamily
/// Size: 0x01 (1 bytes)
enum class ESleepFamily : uint8_t
{
	ESleepFamily__Normal                                                             = 0,
	ESleepFamily__Sensitive                                                          = 1,
	ESleepFamily__Custom                                                             = 2
};

/// Enum /Script/PhysicsCore.EAngularConstraintMotion
/// Size: 0x01 (1 bytes)
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                                                                         = 0,
	ACM_Limited                                                                      = 1,
	ACM_Locked                                                                       = 2
};

/// Enum /Script/PhysicsCore.EConstraintFrame
/// Size: 0x01 (1 bytes)
enum class EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame1                                                         = 0,
	EConstraintFrame__Frame2                                                         = 1
};

/// Enum /Script/PhysicsCore.EConstraintPlasticityType
/// Size: 0x01 (1 bytes)
enum class EConstraintPlasticityType : uint8_t
{
	CCPT_Free                                                                        = 0,
	CCPT_Shrink                                                                      = 1,
	CCPT_Grow                                                                        = 2
};

/// Enum /Script/PhysicsCore.ELinearConstraintMotion
/// Size: 0x01 (1 bytes)
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                                                                         = 0,
	LCM_Limited                                                                      = 1,
	LCM_Locked                                                                       = 2
};

/// Enum /Script/PhysicsCore.EFrictionCombineMode
/// Size: 0x01 (1 bytes)
enum class EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average                                                    = 0,
	EFrictionCombineMode__Min                                                        = 1,
	EFrictionCombineMode__Multiply                                                   = 2,
	EFrictionCombineMode__Max                                                        = 3
};

/// Class /Script/PhysicsCore.PhysicalMaterialPropertyBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPhysicalMaterialPropertyBase : public UObject
{ 
public:
};

/// Class /Script/PhysicsCore.BodySetupCore
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UBodySetupCore : public UObject
{ 
public:
	FName                                              BoneName;                                                   // 0x0028   (0x0008)  
	TEnumAsByte<EPhysicsType>                          PhysicsType;                                                // 0x0030   (0x0001)  
	TEnumAsByte<ECollisionTraceFlag>                   CollisionTraceFlag;                                         // 0x0031   (0x0001)  
	TEnumAsByte<EBodyCollisionResponse>                CollisionReponse;                                           // 0x0032   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0033   (0x0005)  MISSED
};

/// Class /Script/PhysicsCore.ChaosPhysicalMaterial
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UChaosPhysicalMaterial : public UObject
{ 
public:
	float                                              Friction;                                                   // 0x0028   (0x0004)  
	float                                              StaticFriction;                                             // 0x002C   (0x0004)  
	float                                              Restitution;                                                // 0x0030   (0x0004)  
	float                                              LinearEtherDrag;                                            // 0x0034   (0x0004)  
	float                                              AngularEtherDrag;                                           // 0x0038   (0x0004)  
	float                                              SleepingLinearVelocityThreshold;                            // 0x003C   (0x0004)  
	float                                              SleepingAngularVelocityThreshold;                           // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/PhysicsCore.PhysicalMaterial
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UPhysicalMaterial : public UObject
{ 
public:
	float                                              Friction;                                                   // 0x0028   (0x0004)  
	float                                              StaticFriction;                                             // 0x002C   (0x0004)  
	TEnumAsByte<EFrictionCombineMode>                  FrictionCombineMode;                                        // 0x0030   (0x0001)  
	bool                                               bOverrideFrictionCombineMode;                               // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              Restitution;                                                // 0x0034   (0x0004)  
	TEnumAsByte<EFrictionCombineMode>                  RestitutionCombineMode;                                     // 0x0038   (0x0001)  
	bool                                               bOverrideRestitutionCombineMode;                            // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x003A   (0x0002)  MISSED
	float                                              Density;                                                    // 0x003C   (0x0004)  
	float                                              SleepLinearVelocityThreshold;                               // 0x0040   (0x0004)  
	float                                              SleepAngularVelocityThreshold;                              // 0x0044   (0x0004)  
	int32_t                                            SleepCounterThreshold;                                      // 0x0048   (0x0004)  
	float                                              RaiseMassToPower;                                           // 0x004C   (0x0004)  
	float                                              DestructibleDamageThresholdScale;                           // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	class UPhysicalMaterialPropertyBase*               PhysicalMaterialProperty;                                   // 0x0058   (0x0008)  
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                                // 0x0060   (0x0001)  
	unsigned char                                      UnknownData03_7[0x1F];                                      // 0x0061   (0x001F)  MISSED
};

/// Class /Script/PhysicsCore.PhysicsSettingsCore
/// Size: 0x00E0 (224 bytes) (0x000038 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPhysicsSettingsCore : public UDeveloperSettings
{ 
public:
	float                                              DefaultGravityZ;                                            // 0x0038   (0x0004)  
	float                                              DefaultTerminalVelocity;                                    // 0x003C   (0x0004)  
	float                                              DefaultFluidFriction;                                       // 0x0040   (0x0004)  
	int32_t                                            SimulateScratchMemorySize;                                  // 0x0044   (0x0004)  
	int32_t                                            RagdollAggregateThreshold;                                  // 0x0048   (0x0004)  
	float                                              TriangleMeshTriangleMinAreaThreshold;                       // 0x004C   (0x0004)  
	bool                                               bEnableEnhancedDeterminism;                                 // 0x0050   (0x0001)  
	bool                                               bEnableShapeSharing;                                        // 0x0051   (0x0001)  
	bool                                               bEnablePCM;                                                 // 0x0052   (0x0001)  
	bool                                               bEnableStabilization;                                       // 0x0053   (0x0001)  
	bool                                               bWarnMissingLocks;                                          // 0x0054   (0x0001)  
	bool                                               bEnable2DPhysics;                                           // 0x0055   (0x0001)  
	bool                                               bDefaultHasComplexCollision;                                // 0x0056   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0057   (0x0001)  MISSED
	float                                              BounceThresholdVelocity;                                    // 0x0058   (0x0004)  
	TEnumAsByte<EFrictionCombineMode>                  FrictionCombineMode;                                        // 0x005C   (0x0001)  
	TEnumAsByte<EFrictionCombineMode>                  RestitutionCombineMode;                                     // 0x005D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x005E   (0x0002)  MISSED
	float                                              MaxAngularVelocity;                                         // 0x0060   (0x0004)  
	float                                              MaxDepenetrationVelocity;                                   // 0x0064   (0x0004)  
	float                                              ContactOffsetMultiplier;                                    // 0x0068   (0x0004)  
	float                                              MinContactOffset;                                           // 0x006C   (0x0004)  
	float                                              MaxContactOffset;                                           // 0x0070   (0x0004)  
	bool                                               bSimulateSkeletalMeshOnDedicatedServer;                     // 0x0074   (0x0001)  
	TEnumAsByte<ECollisionTraceFlag>                   DefaultShapeComplexity;                                     // 0x0075   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0076   (0x0002)  MISSED
	FChaosSolverConfiguration                          SolverOptions;                                              // 0x0078   (0x0068)  
};

/// Struct /Script/PhysicsCore.BodyInstanceCore
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBodyInstanceCore
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	bool                                               bSimulatePhysics : 1;                                       // 0x0010:0 (0x0001)  
	bool                                               bOverrideMass : 1;                                          // 0x0010:1 (0x0001)  
	bool                                               bEnableGravity : 1;                                         // 0x0010:2 (0x0001)  
	bool                                               bAutoWeld : 1;                                              // 0x0010:3 (0x0001)  
	bool                                               bStartAwake : 1;                                            // 0x0010:4 (0x0001)  
	bool                                               bGenerateWakeEvents : 1;                                    // 0x0010:5 (0x0001)  
	bool                                               bUpdateMassWhenScaleChanges : 1;                            // 0x0010:6 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UPhysicalMaterialPropertyBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBodySetupCore) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UChaosPhysicalMaterial) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UPhysicalMaterial) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UPhysicsSettingsCore) == 0x00E0); // 224 bytes (0x000038 - 0x0000E0)
static_assert(sizeof(FBodyInstanceCore) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UBodySetupCore, BoneName) == 0x0028);
static_assert(offsetof(UBodySetupCore, PhysicsType) == 0x0030);
static_assert(offsetof(UBodySetupCore, CollisionTraceFlag) == 0x0031);
static_assert(offsetof(UBodySetupCore, CollisionReponse) == 0x0032);
static_assert(offsetof(UPhysicalMaterial, FrictionCombineMode) == 0x0030);
static_assert(offsetof(UPhysicalMaterial, RestitutionCombineMode) == 0x0038);
static_assert(offsetof(UPhysicalMaterial, PhysicalMaterialProperty) == 0x0058);
static_assert(offsetof(UPhysicalMaterial, SurfaceType) == 0x0060);
static_assert(offsetof(UPhysicsSettingsCore, FrictionCombineMode) == 0x005C);
static_assert(offsetof(UPhysicsSettingsCore, RestitutionCombineMode) == 0x005D);
static_assert(offsetof(UPhysicsSettingsCore, DefaultShapeComplexity) == 0x0075);
static_assert(offsetof(UPhysicsSettingsCore, SolverOptions) == 0x0078);
