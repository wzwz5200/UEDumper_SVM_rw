
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ComputeFramework
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryCache
/// dependency: MovieScene
/// dependency: Niagara
/// dependency: NiagaraCore
/// dependency: OptimusCore

#pragma pack(push, 0x1)

/// Enum /Script/HairStrandsCore.EOptimusGroomExecDomain
/// Size: 0x01 (1 bytes)
enum class EOptimusGroomExecDomain : uint8_t
{
	EOptimusGroomExecDomain__None                                                    = 0,
	EOptimusGroomExecDomain__ControlPoint                                            = 1,
	EOptimusGroomExecDomain__Curve                                                   = 2
};

/// Enum /Script/HairStrandsCore.EGroomCacheImportType
/// Size: 0x01 (1 bytes)
enum class EGroomCacheImportType : uint8_t
{
	EGroomCacheImportType__None                                                      = 0,
	EGroomCacheImportType__Strands                                                   = 1,
	EGroomCacheImportType__Guides                                                    = 2,
	EGroomCacheImportType__All                                                       = 3
};

/// Enum /Script/HairStrandsCore.EHairAtlasTextureType
/// Size: 0x01 (1 bytes)
enum class EHairAtlasTextureType : uint8_t
{
	EHairAtlasTextureType__Depth                                                     = 0,
	EHairAtlasTextureType__Tangent                                                   = 1,
	EHairAtlasTextureType__Attribute                                                 = 2,
	EHairAtlasTextureType__Coverage                                                  = 3,
	EHairAtlasTextureType__AuxilaryData                                              = 4,
	EHairAtlasTextureType__Material                                                  = 5
};

/// Enum /Script/HairStrandsCore.EHairCardsClusterType
/// Size: 0x01 (1 bytes)
enum class EHairCardsClusterType : uint8_t
{
	EHairCardsClusterType__Low                                                       = 0,
	EHairCardsClusterType__High                                                      = 1
};

/// Enum /Script/HairStrandsCore.EHairCardsGenerationType
/// Size: 0x01 (1 bytes)
enum class EHairCardsGenerationType : uint8_t
{
	EHairCardsGenerationType__CardsCount                                             = 0,
	EHairCardsGenerationType__UseGuides                                              = 1
};

/// Enum /Script/HairStrandsCore.EHairCardsSourceType
/// Size: 0x01 (1 bytes)
enum class EHairCardsSourceType : uint8_t
{
	EHairCardsSourceType__Procedural                                                 = 0,
	EHairCardsSourceType__Imported                                                   = 1
};

/// Enum /Script/HairStrandsCore.EHairInterpolationQuality
/// Size: 0x01 (1 bytes)
enum class EHairInterpolationQuality : uint8_t
{
	EHairInterpolationQuality__Low                                                   = 0,
	EHairInterpolationQuality__Medium                                                = 1,
	EHairInterpolationQuality__High                                                  = 2,
	EHairInterpolationQuality__Unknown                                               = 3
};

/// Enum /Script/HairStrandsCore.EHairInterpolationWeight
/// Size: 0x01 (1 bytes)
enum class EHairInterpolationWeight : uint8_t
{
	EHairInterpolationWeight__Parametric                                             = 0,
	EHairInterpolationWeight__Root                                                   = 1,
	EHairInterpolationWeight__Index                                                  = 2,
	EHairInterpolationWeight__Distance                                               = 3,
	EHairInterpolationWeight__Unknown                                                = 4
};

/// Enum /Script/HairStrandsCore.EGroomGeometryType
/// Size: 0x01 (1 bytes)
enum class EGroomGeometryType : uint8_t
{
	EGroomGeometryType__Strands                                                      = 0,
	EGroomGeometryType__Cards                                                        = 1,
	EGroomGeometryType__Meshes                                                       = 2
};

/// Enum /Script/HairStrandsCore.EGroomBindingType
/// Size: 0x01 (1 bytes)
enum class EGroomBindingType : uint8_t
{
	EGroomBindingType__NoneBinding                                                   = 0,
	EGroomBindingType__Rigid                                                         = 1,
	EGroomBindingType__Skinning                                                      = 2
};

/// Enum /Script/HairStrandsCore.EGroomOverrideType
/// Size: 0x01 (1 bytes)
enum class EGroomOverrideType : uint8_t
{
	EGroomOverrideType__Auto                                                         = 0,
	EGroomOverrideType__Enable                                                       = 1,
	EGroomOverrideType__Disable                                                      = 2
};

/// Enum /Script/HairStrandsCore.EGroomNiagaraSolvers
/// Size: 0x01 (1 bytes)
enum class EGroomNiagaraSolvers : uint8_t
{
	EGroomNiagaraSolvers__None                                                       = 0,
	EGroomNiagaraSolvers__CosseratRods                                               = 2,
	EGroomNiagaraSolvers__AngularSprings                                             = 4,
	EGroomNiagaraSolvers__CustomSolver                                               = 8
};

/// Enum /Script/HairStrandsCore.EGroomStrandsSize
/// Size: 0x01 (1 bytes)
enum class EGroomStrandsSize : uint8_t
{
	EGroomStrandsSize__None                                                          = 0,
	EGroomStrandsSize__Size2                                                         = 2,
	EGroomStrandsSize__Size4                                                         = 4,
	EGroomStrandsSize__Size8                                                         = 8,
	EGroomStrandsSize__Size16                                                        = 16,
	EGroomStrandsSize__Size32                                                        = 32
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationType
/// Size: 0x01 (1 bytes)
enum class EGroomInterpolationType : uint8_t
{
	EGroomInterpolationType__None                                                    = 0,
	EGroomInterpolationType__RigidTransform                                          = 2,
	EGroomInterpolationType__OffsetTransform                                         = 4,
	EGroomInterpolationType__SmoothTransform                                         = 8
};

/// Enum /Script/HairStrandsCore.EGroomBindingMeshType
/// Size: 0x01 (1 bytes)
enum class EGroomBindingMeshType : uint8_t
{
	EGroomBindingMeshType__SkeletalMesh                                              = 0,
	EGroomBindingMeshType__GeometryCache                                             = 1
};

/// Enum /Script/HairStrandsCore.EGroomCacheAttributes
/// Size: 0x01 (1 bytes)
enum class EGroomCacheAttributes : uint8_t
{
	EGroomCacheAttributes__None                                                      = 0,
	EGroomCacheAttributes__Position                                                  = 1,
	EGroomCacheAttributes__Width                                                     = 2,
	EGroomCacheAttributes__Color                                                     = 4,
	EGroomCacheAttributes__PositionWidth                                             = 3,
	EGroomCacheAttributes__PositionColor                                             = 5,
	EGroomCacheAttributes__WidthColor                                                = 5,
	EGroomCacheAttributes__PositionWidthColor                                        = 7
};

/// Enum /Script/HairStrandsCore.EGroomCacheType
/// Size: 0x01 (1 bytes)
enum class EGroomCacheType : uint8_t
{
	EGroomCacheType__None                                                            = 0,
	EGroomCacheType__Strands                                                         = 1,
	EGroomCacheType__Guides                                                          = 2
};

/// Enum /Script/HairStrandsCore.EGroomBasisType
/// Size: 0x01 (1 bytes)
enum class EGroomBasisType : uint8_t
{
	EGroomBasisType__NoBasis                                                         = 0,
	EGroomBasisType__BezierBasis                                                     = 1,
	EGroomBasisType__BsplineBasis                                                    = 2,
	EGroomBasisType__CatmullromBasis                                                 = 3,
	EGroomBasisType__HermiteBasis                                                    = 4,
	EGroomBasisType__PowerBasis                                                      = 5
};

/// Enum /Script/HairStrandsCore.EGroomCurveType
/// Size: 0x01 (1 bytes)
enum class EGroomCurveType : uint8_t
{
	EGroomCurveType__Cubic                                                           = 0,
	EGroomCurveType__Linear                                                          = 1,
	EGroomCurveType__VariableOrder                                                   = 2
};

/// Enum /Script/HairStrandsCore.EFollicleMaskChannel
/// Size: 0x01 (1 bytes)
enum class EFollicleMaskChannel : uint8_t
{
	EFollicleMaskChannel__R                                                          = 0,
	EFollicleMaskChannel__G                                                          = 1,
	EFollicleMaskChannel__B                                                          = 2,
	EFollicleMaskChannel__A                                                          = 3
};

/// Enum /Script/HairStrandsCore.EStrandsTexturesTraceType
/// Size: 0x01 (1 bytes)
enum class EStrandsTexturesTraceType : uint8_t
{
	EStrandsTexturesTraceType__TraceInside                                           = 0,
	EStrandsTexturesTraceType__TraceOuside                                           = 1,
	EStrandsTexturesTraceType__TraceBidirectional                                    = 2
};

/// Enum /Script/HairStrandsCore.EStrandsTexturesMeshType
/// Size: 0x01 (1 bytes)
enum class EStrandsTexturesMeshType : uint8_t
{
	EStrandsTexturesMeshType__Static                                                 = 0,
	EStrandsTexturesMeshType__Skeletal                                               = 1
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationQuality
/// Size: 0x01 (1 bytes)
enum class EGroomInterpolationQuality : uint8_t
{
	EGroomInterpolationQuality__Low                                                  = 0,
	EGroomInterpolationQuality__Medium                                               = 1,
	EGroomInterpolationQuality__High                                                 = 2,
	EGroomInterpolationQuality__Unknown                                              = 3
};

/// Enum /Script/HairStrandsCore.EGroomInterpolationWeight
/// Size: 0x01 (1 bytes)
enum class EGroomInterpolationWeight : uint8_t
{
	EGroomInterpolationWeight__Parametric                                            = 0,
	EGroomInterpolationWeight__Root                                                  = 1,
	EGroomInterpolationWeight__Index                                                 = 2,
	EGroomInterpolationWeight__Unknown                                               = 3
};

/// Class /Script/HairStrandsCore.OptimusGroomDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusGroomDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/HairStrandsCore.OptimusGroomDataProvider
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UOptimusGroomDataProvider : public UComputeDataProvider
{ 
public:
	class UGroomComponent*                             Groom;                                                      // 0x0028   (0x0008)  
};

/// Class /Script/HairStrandsCore.OptimusGroomExecDataInterface
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UOptimusGroomExecDataInterface : public UOptimusComputeDataInterface
{ 
public:
	EOptimusGroomExecDomain                            Domain;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/HairStrandsCore.OptimusGroomExecDataProvider
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOptimusGroomExecDataProvider : public UComputeDataProvider
{ 
public:
	class UGroomComponent*                             GroomComponent;                                             // 0x0028   (0x0008)  
	EOptimusGroomExecDomain                            Domain;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/HairStrandsCore.OptimusGroomWriteDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusGroomWriteDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/HairStrandsCore.OptimusGroomWriteDataProvider
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOptimusGroomWriteDataProvider : public UComputeDataProvider
{ 
public:
	class UGroomComponent*                             GroomComponent;                                             // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/HairStrandsCore.OptimusGroomComponentSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusGroomComponentSource : public UOptimusComponentSource
{ 
public:
};

/// Struct /Script/HairStrandsCore.GroomConversionSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGroomConversionSettings
{ 
	FVector                                            Rotation;                                                   // 0x0000   (0x0018)  
	FVector                                            Scale;                                                      // 0x0018   (0x0018)  
};

/// Struct /Script/HairStrandsCore.GroomCacheImportSettings
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FGroomCacheImportSettings
{ 
	bool                                               bImportGroomCache;                                          // 0x0000   (0x0001)  
	EGroomCacheImportType                              ImportType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            FrameStart;                                                 // 0x0004   (0x0004)  
	int32_t                                            FrameEnd;                                                   // 0x0008   (0x0004)  
	bool                                               bSkipEmptyFrames;                                           // 0x000C   (0x0001)  
	bool                                               bImportGroomAsset;                                          // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	FSoftObjectPath                                    GroomAsset;                                                 // 0x0010   (0x0020)  
	bool                                               bOverrideConversionSettings;                                // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FGroomConversionSettings                           ConversionSettings;                                         // 0x0038   (0x0030)  
};

/// Class /Script/HairStrandsCore.GroomCacheImportOptions
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UGroomCacheImportOptions : public UObject
{ 
public:
	FGroomCacheImportSettings                          ImportSettings;                                             // 0x0028   (0x0068)  
};

/// Class /Script/HairStrandsCore.GroomCacheImportData
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UGroomCacheImportData : public UAssetImportData
{ 
public:
	FGroomCacheImportSettings                          Settings;                                                   // 0x0028   (0x0068)  
};

/// Class /Script/HairStrandsCore.GroomActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class AGroomActor : public AActor
{ 
public:
	class UGroomComponent*                             GroomComponent;                                             // 0x0290   (0x0008)  
};

/// Struct /Script/HairStrandsCore.HairGroupInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FHairGroupInfo
{ 
	int32_t                                            GroupID;                                                    // 0x0000   (0x0004)  
	FName                                              GroupName;                                                  // 0x0004   (0x0008)  
	int32_t                                            NumCurves;                                                  // 0x000C   (0x0004)  
	int32_t                                            NumGuides;                                                  // 0x0010   (0x0004)  
	int32_t                                            NumCurveVertices;                                           // 0x0014   (0x0004)  
	int32_t                                            NumGuideVertices;                                           // 0x0018   (0x0004)  
	float                                              MaxCurveLength;                                             // 0x001C   (0x0004)  
	float                                              MaxImportedWidth;                                           // 0x0020   (0x0004)  
	int32_t                                            GroupCardsID;                                               // 0x0024   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupInfoWithVisibility
/// Size: 0x002C (44 bytes) (0x000028 - 0x00002C) align 4 MaxSize: 0x002C
struct FHairGroupInfoWithVisibility : FHairGroupInfo
{ 
	bool                                               bIsVisible;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0029   (0x0003)  MISSED
};

/// Struct /Script/HairStrandsCore.HairGeometrySettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FHairGeometrySettings
{ 
	float                                              HairWidth;                                                  // 0x0000   (0x0004)  
	float                                              HairRootScale;                                              // 0x0004   (0x0004)  
	float                                              HairTipScale;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairShadowSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FHairShadowSettings
{ 
	float                                              HairShadowDensity;                                          // 0x0000   (0x0004)  
	float                                              HairRaytracingRadiusScale;                                  // 0x0004   (0x0004)  
	bool                                               bUseHairRaytracingGeometry;                                 // 0x0008   (0x0001)  
	bool                                               bVoxelize;                                                  // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x000A   (0x0002)  MISSED
};

/// Struct /Script/HairStrandsCore.HairAdvancedRenderingSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FHairAdvancedRenderingSettings
{ 
	bool                                               bUseStableRasterization;                                    // 0x0000   (0x0001)  
	bool                                               bScatterSceneLighting;                                      // 0x0001   (0x0001)  
};

/// Struct /Script/HairStrandsCore.HairGroupsRendering
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FHairGroupsRendering
{ 
	FName                                              MaterialSlotName;                                           // 0x0000   (0x0008)  
	class UMaterialInterface*                          Material;                                                   // 0x0008   (0x0008)  
	FHairGeometrySettings                              GeometrySettings;                                           // 0x0010   (0x000C)  
	FHairShadowSettings                                ShadowSettings;                                             // 0x001C   (0x000C)  
	FHairAdvancedRenderingSettings                     AdvancedSettings;                                           // 0x0028   (0x0002)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x002A   (0x0006)  MISSED
};

/// Struct /Script/HairStrandsCore.HairSolverSettings
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FHairSolverSettings
{ 
	bool                                               EnableSimulation;                                           // 0x0000   (0x0001)  
	EGroomNiagaraSolvers                               NiagaraSolver;                                              // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	TWeakObjectPtr<class UNiagaraSystem*>              CustomSystem;                                               // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0010   (0x0028)  MISSED
	float                                              GravityPreloading;                                          // 0x0038   (0x0004)  
	int32_t                                            SubSteps;                                                   // 0x003C   (0x0004)  
	int32_t                                            IterationCount;                                             // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/HairStrandsCore.HairExternalForces
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FHairExternalForces
{ 
	FVector                                            GravityVector;                                              // 0x0000   (0x0018)  
	float                                              AirDrag;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            AirVelocity;                                                // 0x0020   (0x0018)  
};

/// Struct /Script/HairStrandsCore.HairBendConstraint
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FHairBendConstraint
{ 
	bool                                               SolveBend;                                                  // 0x0000   (0x0001)  
	bool                                               ProjectBend;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              BendDamping;                                                // 0x0004   (0x0004)  
	float                                              BendStiffness;                                              // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 BendScale;                                                  // 0x0010   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairStretchConstraint
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FHairStretchConstraint
{ 
	bool                                               SolveStretch;                                               // 0x0000   (0x0001)  
	bool                                               ProjectStretch;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              StretchDamping;                                             // 0x0004   (0x0004)  
	float                                              StretchStiffness;                                           // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 StretchScale;                                               // 0x0010   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairCollisionConstraint
/// Size: 0x00A8 (168 bytes) (0x000000 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FHairCollisionConstraint
{ 
	bool                                               SolveCollision;                                             // 0x0000   (0x0001)  
	bool                                               ProjectCollision;                                           // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              StaticFriction;                                             // 0x0004   (0x0004)  
	float                                              KineticFriction;                                            // 0x0008   (0x0004)  
	float                                              StrandsViscosity;                                           // 0x000C   (0x0004)  
	FIntVector                                         GridDimension;                                              // 0x0010   (0x000C)  
	float                                              CollisionRadius;                                            // 0x001C   (0x0004)  
	FRuntimeFloatCurve                                 RadiusScale;                                                // 0x0020   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairMaterialConstraints
/// Size: 0x01D8 (472 bytes) (0x000000 - 0x0001D8) align 8 MaxSize: 0x01D8
struct FHairMaterialConstraints
{ 
	FHairBendConstraint                                BendConstraint;                                             // 0x0000   (0x0098)  
	FHairStretchConstraint                             StretchConstraint;                                          // 0x0098   (0x0098)  
	FHairCollisionConstraint                           CollisionConstraint;                                        // 0x0130   (0x00A8)  
};

/// Struct /Script/HairStrandsCore.HairStrandsParameters
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FHairStrandsParameters
{ 
	EGroomStrandsSize                                  StrandsSize;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              StrandsDensity;                                             // 0x0004   (0x0004)  
	float                                              StrandsSmoothing;                                           // 0x0008   (0x0004)  
	float                                              StrandsThickness;                                           // 0x000C   (0x0004)  
	FRuntimeFloatCurve                                 ThicknessScale;                                             // 0x0010   (0x0088)  
};

/// Struct /Script/HairStrandsCore.HairGroupsPhysics
/// Size: 0x02F0 (752 bytes) (0x000000 - 0x0002F0) align 8 MaxSize: 0x02F0
struct FHairGroupsPhysics
{ 
	FHairSolverSettings                                SolverSettings;                                             // 0x0000   (0x0048)  
	FHairExternalForces                                ExternalForces;                                             // 0x0048   (0x0038)  
	FHairMaterialConstraints                           MaterialConstraints;                                        // 0x0080   (0x01D8)  
	FHairStrandsParameters                             StrandsParameters;                                          // 0x0258   (0x0098)  
};

/// Struct /Script/HairStrandsCore.HairDecimationSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FHairDecimationSettings
{ 
	float                                              CurveDecimation;                                            // 0x0000   (0x0004)  
	float                                              VertexDecimation;                                           // 0x0004   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairInterpolationSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FHairInterpolationSettings
{ 
	bool                                               bOverrideGuides;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              HairToGuideDensity;                                         // 0x0004   (0x0004)  
	EHairInterpolationQuality                          InterpolationQuality;                                       // 0x0008   (0x0001)  
	EHairInterpolationWeight                           InterpolationDistance;                                      // 0x0009   (0x0001)  
	bool                                               bRandomizeGuide;                                            // 0x000A   (0x0001)  
	bool                                               bUseUniqueGuide;                                            // 0x000B   (0x0001)  
};

/// Struct /Script/HairStrandsCore.HairDeformationSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FHairDeformationSettings
{ 
	bool                                               bCanEditRigging;                                            // 0x0000   (0x0001)  
	bool                                               bEnableRigging;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            NumCurves;                                                  // 0x0004   (0x0004)  
	int32_t                                            NumPoints;                                                  // 0x0008   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupsInterpolation
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FHairGroupsInterpolation
{ 
	FHairDecimationSettings                            DecimationSettings;                                         // 0x0000   (0x0008)  
	FHairInterpolationSettings                         InterpolationSettings;                                      // 0x0008   (0x000C)  
	FHairDeformationSettings                           RiggingSettings;                                            // 0x0014   (0x000C)  
};

/// Struct /Script/HairStrandsCore.HairLODSettings
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FHairLODSettings
{ 
	float                                              CurveDecimation;                                            // 0x0000   (0x0004)  
	float                                              VertexDecimation;                                           // 0x0004   (0x0004)  
	float                                              AngularThreshold;                                           // 0x0008   (0x0004)  
	float                                              ScreenSize;                                                 // 0x000C   (0x0004)  
	float                                              ThicknessScale;                                             // 0x0010   (0x0004)  
	bool                                               bVisible;                                                   // 0x0014   (0x0001)  
	EGroomGeometryType                                 GeometryType;                                               // 0x0015   (0x0001)  
	EGroomBindingType                                  BindingType;                                                // 0x0016   (0x0001)  
	EGroomOverrideType                                 Simulation;                                                 // 0x0017   (0x0001)  
	EGroomOverrideType                                 GlobalInterpolation;                                        // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/HairStrandsCore.HairGroupsLOD
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FHairGroupsLOD
{ 
	TArray<FHairLODSettings>                           LODs;                                                       // 0x0000   (0x0010)  
	float                                              ClusterWorldSize;                                           // 0x0010   (0x0004)  
	float                                              ClusterScreenSizeScale;                                     // 0x0014   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairCardsClusterSettings
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FHairCardsClusterSettings
{ 
	float                                              ClusterDecimation;                                          // 0x0000   (0x0004)  
	EHairCardsClusterType                              Type;                                                       // 0x0004   (0x0001)  
	bool                                               bUseGuide;                                                  // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0006   (0x0002)  MISSED
};

/// Struct /Script/HairStrandsCore.HairCardsGeometrySettings
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FHairCardsGeometrySettings
{ 
	EHairCardsGenerationType                           GenerationType;                                             // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            CardsCount;                                                 // 0x0004   (0x0004)  
	EHairCardsClusterType                              ClusterType;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              MinSegmentLength;                                           // 0x000C   (0x0004)  
	float                                              AngularThreshold;                                           // 0x0010   (0x0004)  
	float                                              MinCardsLength;                                             // 0x0014   (0x0004)  
	float                                              MaxCardsLength;                                             // 0x0018   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairCardsTextureSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FHairCardsTextureSettings
{ 
	int32_t                                            AtlasMaxResolution;                                         // 0x0000   (0x0004)  
	int32_t                                            PixelPerCentimeters;                                        // 0x0004   (0x0004)  
	int32_t                                            LengthTextureCount;                                         // 0x0008   (0x0004)  
	int32_t                                            DensityTextureCount;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupsProceduralCards
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FHairGroupsProceduralCards
{ 
	FHairCardsClusterSettings                          ClusterSettings;                                            // 0x0000   (0x0008)  
	FHairCardsGeometrySettings                         GeometrySettings;                                           // 0x0008   (0x001C)  
	FHairCardsTextureSettings                          TextureSettings;                                            // 0x0024   (0x0010)  
	int32_t                                            Version;                                                    // 0x0034   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupCardsTextures
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FHairGroupCardsTextures
{ 
	class UTexture2D*                                  DepthTexture;                                               // 0x0000   (0x0008)  
	class UTexture2D*                                  CoverageTexture;                                            // 0x0008   (0x0008)  
	class UTexture2D*                                  TangentTexture;                                             // 0x0010   (0x0008)  
	class UTexture2D*                                  AttributeTexture;                                           // 0x0018   (0x0008)  
	class UTexture2D*                                  AuxilaryDataTexture;                                        // 0x0020   (0x0008)  
	class UTexture2D*                                  MaterialTexture;                                            // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/HairStrandsCore.HairGroupCardsInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FHairGroupCardsInfo
{ 
	int32_t                                            NumCards;                                                   // 0x0000   (0x0004)  
	int32_t                                            NumCardVertices;                                            // 0x0004   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairGroupsCardsSourceDescription
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FHairGroupsCardsSourceDescription
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              MaterialSlotName;                                           // 0x0008   (0x0008)  
	EHairCardsSourceType                               SourceType;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	class UStaticMesh*                                 ProceduralMesh;                                             // 0x0018   (0x0008)  
	FString                                            ProceduralMeshKey;                                          // 0x0020   (0x0010)  
	class UStaticMesh*                                 ImportedMesh;                                               // 0x0030   (0x0008)  
	FHairGroupsProceduralCards                         ProceduralSettings;                                         // 0x0038   (0x0038)  
	FHairGroupCardsTextures                            Textures;                                                   // 0x0070   (0x0038)  
	int32_t                                            GroupIndex;                                                 // 0x00A8   (0x0004)  
	int32_t                                            LODIndex;                                                   // 0x00AC   (0x0004)  
	FHairGroupCardsInfo                                CardsInfo;                                                  // 0x00B0   (0x0008)  
	FString                                            ImportedMeshKey;                                            // 0x00B8   (0x0010)  
};

/// Struct /Script/HairStrandsCore.HairGroupsMeshesSourceDescription
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FHairGroupsMeshesSourceDescription
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              MaterialSlotName;                                           // 0x0008   (0x0008)  
	class UStaticMesh*                                 ImportedMesh;                                               // 0x0010   (0x0008)  
	FHairGroupCardsTextures                            Textures;                                                   // 0x0018   (0x0038)  
	int32_t                                            GroupIndex;                                                 // 0x0050   (0x0004)  
	int32_t                                            LODIndex;                                                   // 0x0054   (0x0004)  
	FString                                            ImportedMeshKey;                                            // 0x0058   (0x0010)  
};

/// Struct /Script/HairStrandsCore.HairGroupsMaterial
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FHairGroupsMaterial
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FName                                              SlotName;                                                   // 0x0008   (0x0008)  
};

/// Class /Script/HairStrandsCore.GroomAsset
/// Size: 0x0110 (272 bytes) (0x000028 - 0x000110) align 8 MaxSize: 0x0110
class UGroomAsset : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<FHairGroupInfoWithVisibility>               HairGroupsInfo;                                             // 0x0030   (0x0010)  
	TArray<FHairGroupsRendering>                       HairGroupsRendering;                                        // 0x0040   (0x0010)  
	TArray<FHairGroupsPhysics>                         HairGroupsPhysics;                                          // 0x0050   (0x0010)  
	TArray<FHairGroupsInterpolation>                   HairGroupsInterpolation;                                    // 0x0060   (0x0010)  
	TArray<FHairGroupsLOD>                             HairGroupsLOD;                                              // 0x0070   (0x0010)  
	TArray<FHairGroupsCardsSourceDescription>          HairGroupsCards;                                            // 0x0080   (0x0010)  
	TArray<FHairGroupsMeshesSourceDescription>         HairGroupsMeshes;                                           // 0x0090   (0x0010)  
	TArray<FHairGroupsMaterial>                        HairGroupsMaterials;                                        // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x00B0   (0x0010)  MISSED
	bool                                               EnableGlobalInterpolation;                                  // 0x00C0   (0x0001)  
	EGroomInterpolationType                            HairInterpolationType;                                      // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x00C2   (0x0006)  MISSED
	class USkeletalMesh*                               RiggedSkeletalMesh;                                         // 0x00C8   (0x0008)  
	TArray<int32_t>                                    DeformedGroupSections;                                      // 0x00D0   (0x0010)  
	FPerPlatformInt                                    MinLOD;                                                     // 0x00E0   (0x0004)  
	FPerPlatformBool                                   DisableBelowMinLodStripping;                                // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00E5   (0x0003)  MISSED
	TArray<float>                                      EffectiveLODBias;                                           // 0x00E8   (0x0010)  
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Class /Script/HairStrandsCore.HairCardGenerationSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHairCardGenerationSettings : public UObject
{ 
public:
};

/// Class /Script/HairStrandsCore.GroomAssetImportData
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UGroomAssetImportData : public UAssetImportData
{ 
public:
	class UGroomImportOptions*                         ImportOptions;                                              // 0x0028   (0x0008)  
};

/// Struct /Script/HairStrandsCore.GoomBindingGroupInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGoomBindingGroupInfo
{ 
	int32_t                                            RenRootCount;                                               // 0x0000   (0x0004)  
	int32_t                                            RenLODCount;                                                // 0x0004   (0x0004)  
	int32_t                                            SimRootCount;                                               // 0x0008   (0x0004)  
	int32_t                                            SimLODCount;                                                // 0x000C   (0x0004)  
};

/// Class /Script/HairStrandsCore.GroomBindingAsset
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 16 MaxSize: 0x00B0
class UGroomBindingAsset : public UObject
{ 
public:
	EGroomBindingMeshType                              GroomBindingType;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	class UGroomAsset*                                 Groom;                                                      // 0x0030   (0x0008)  
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0038   (0x0008)  
	class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x0040   (0x0008)  
	class UGeometryCache*                              SourceGeometryCache;                                        // 0x0048   (0x0008)  
	class UGeometryCache*                              TargetGeometryCache;                                        // 0x0050   (0x0008)  
	int32_t                                            NumInterpolationPoints;                                     // 0x0058   (0x0004)  
	int32_t                                            MatchingSection;                                            // 0x005C   (0x0004)  
	TArray<FGoomBindingGroupInfo>                      GroupInfos;                                                 // 0x0060   (0x0010)  
	unsigned char                                      UnknownData01_7[0x40];                                      // 0x0070   (0x0040)  MISSED
};

/// Class /Script/HairStrandsCore.GroomBindingAssetList
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGroomBindingAssetList : public UObject
{ 
public:
	TArray<class UGroomBindingAsset*>                  Bindings;                                                   // 0x0028   (0x0010)  
};

/// Class /Script/HairStrandsCore.GroomBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
	// class UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(FString InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // [0x14adf20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
	// class UGroomBindingAsset* CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32_t InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32_t InMatchingSection); // [0x14addb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
	// class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(FString DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // [0x14adf20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
	// class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32_t NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32_t MatchingSection); // [0x14addb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/HairStrandsCore.GroomAnimationInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FGroomAnimationInfo
{ 
	uint32_t                                           NumFrames;                                                  // 0x0000   (0x0004)  
	float                                              SecondsPerFrame;                                            // 0x0004   (0x0004)  
	float                                              Duration;                                                   // 0x0008   (0x0004)  
	float                                              StartTime;                                                  // 0x000C   (0x0004)  
	float                                              EndTime;                                                    // 0x0010   (0x0004)  
	int32_t                                            StartFrame;                                                 // 0x0014   (0x0004)  
	int32_t                                            EndFrame;                                                   // 0x0018   (0x0004)  
	EGroomCacheAttributes                              Attributes;                                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/HairStrandsCore.GroomCacheInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 4 MaxSize: 0x0028
struct FGroomCacheInfo
{ 
	int32_t                                            Version;                                                    // 0x0000   (0x0004)  
	EGroomCacheType                                    Type;                                                       // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	FGroomAnimationInfo                                AnimationInfo;                                              // 0x0008   (0x0020)  
};

/// Class /Script/HairStrandsCore.GroomCache
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UGroomCache : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x14];                                      // 0x0028   (0x0014)  MISSED
	FGroomCacheInfo                                    GroomCacheInfo;                                             // 0x003C   (0x0028)  
	unsigned char                                      UnknownData01_7[0x14];                                      // 0x0064   (0x0014)  MISSED
};

/// Struct /Script/HairStrandsCore.HairSimulationSetup
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FHairSimulationSetup
{ 
	bool                                               bResetSimulation;                                           // 0x0000   (0x0001)  
	bool                                               bDebugSimulation;                                           // 0x0001   (0x0001)  
	bool                                               bLocalSimulation;                                           // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              LinearVelocityScale;                                        // 0x0004   (0x0004)  
	float                                              AngularVelocityScale;                                       // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            LocalBone;                                                  // 0x0010   (0x0010)  
	float                                              TeleportDistance;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/HairStrandsCore.HairSimulationSolver
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FHairSimulationSolver
{ 
	bool                                               bEnableSimulation;                                          // 0x0000   (0x0001)  
};

/// Struct /Script/HairStrandsCore.HairSimulationForces
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FHairSimulationForces
{ 
	FVector                                            GravityVector;                                              // 0x0000   (0x0018)  
	float                                              AirDrag;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            AirVelocity;                                                // 0x0020   (0x0018)  
};

/// Struct /Script/HairStrandsCore.HairSimulationConstraints
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FHairSimulationConstraints
{ 
	float                                              BendDamping;                                                // 0x0000   (0x0004)  
	float                                              BendStiffness;                                              // 0x0004   (0x0004)  
	float                                              StretchDamping;                                             // 0x0008   (0x0004)  
	float                                              StretchStiffness;                                           // 0x000C   (0x0004)  
	float                                              StaticFriction;                                             // 0x0010   (0x0004)  
	float                                              KineticFriction;                                            // 0x0014   (0x0004)  
	float                                              StrandsViscosity;                                           // 0x0018   (0x0004)  
	float                                              CollisionRadius;                                            // 0x001C   (0x0004)  
};

/// Struct /Script/HairStrandsCore.HairSimulationSettings
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FHairSimulationSettings
{ 
	bool                                               bOverrideSettings;                                          // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FHairSimulationSetup                               SimulationSetup;                                            // 0x0008   (0x0028)  
	FHairSimulationSolver                              SolverSettings;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FHairSimulationForces                              ExternalForces;                                             // 0x0038   (0x0038)  
	FHairSimulationConstraints                         MaterialConstraints;                                        // 0x0070   (0x0020)  
};

/// Struct /Script/HairStrandsCore.HairGroupDesc
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FHairGroupDesc
{ 
	float                                              HairLength;                                                 // 0x0000   (0x0004)  
	float                                              HairWidth;                                                  // 0x0004   (0x0004)  
	bool                                               HairWidth_Override;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              HairRootScale;                                              // 0x000C   (0x0004)  
	bool                                               HairRootScale_Override;                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              HairTipScale;                                               // 0x0014   (0x0004)  
	bool                                               HairTipScale_Override;                                      // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              HairShadowDensity;                                          // 0x001C   (0x0004)  
	bool                                               HairShadowDensity_Override;                                 // 0x0020   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              HairRaytracingRadiusScale;                                  // 0x0024   (0x0004)  
	bool                                               HairRaytracingRadiusScale_Override;                         // 0x0028   (0x0001)  
	bool                                               bUseHairRaytracingGeometry;                                 // 0x0029   (0x0001)  
	bool                                               bUseHairRaytracingGeometry_Override;                        // 0x002A   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              LODBias;                                                    // 0x002C   (0x0004)  
	bool                                               bUseStableRasterization;                                    // 0x0030   (0x0001)  
	bool                                               bUseStableRasterization_Override;                           // 0x0031   (0x0001)  
	bool                                               bScatterSceneLighting;                                      // 0x0032   (0x0001)  
	bool                                               bScatterSceneLighting_Override;                             // 0x0033   (0x0001)  
	bool                                               bSupportVoxelization;                                       // 0x0034   (0x0001)  
	bool                                               bSupportVoxelization_Override;                              // 0x0035   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x0036   (0x0002)  MISSED
	float                                              HairLengthScale;                                            // 0x0038   (0x0004)  
	bool                                               HairLengthScale_Override;                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData06_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/HairStrandsCore.GroomComponent
/// Size: 0x0800 (2048 bytes) (0x0005A0 - 0x000800) align 16 MaxSize: 0x0800
class UGroomComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x05A0   (0x0010)  MISSED
	class UGroomAsset*                                 GroomAsset;                                                 // 0x05B0   (0x0008)  
	class UGroomCache*                                 GroomCache;                                                 // 0x05B8   (0x0008)  
	TArray<class UNiagaraComponent*>                   NiagaraComponents;                                          // 0x05C0   (0x0010)  
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x05D0   (0x0008)  
	class UGroomBindingAsset*                          BindingAsset;                                               // 0x05D8   (0x0008)  
	class UPhysicsAsset*                               PhysicsAsset;                                               // 0x05E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x05E8   (0x0010)  MISSED
	FHairSimulationSettings                            SimulationSettings;                                         // 0x05F8   (0x0090)  
	class UMeshDeformer*                               MeshDeformer;                                               // 0x0688   (0x0008)  
	class UMeshDeformerInstance*                       MeshDeformerInstance;                                       // 0x0690   (0x0008)  
	class UMeshDeformerInstanceSettings*               MeshDeformerInstanceSettings;                               // 0x0698   (0x0008)  
	class UMaterialInterface*                          Strands_DebugMaterial;                                      // 0x06A0   (0x0008)  
	class UMaterialInterface*                          Strands_DefaultMaterial;                                    // 0x06A8   (0x0008)  
	class UMaterialInterface*                          Cards_DefaultMaterial;                                      // 0x06B0   (0x0008)  
	class UMaterialInterface*                          Meshes_DefaultMaterial;                                     // 0x06B8   (0x0008)  
	class UNiagaraSystem*                              AngularSpringsSystem;                                       // 0x06C0   (0x0008)  
	class UNiagaraSystem*                              CosseratRodsSystem;                                         // 0x06C8   (0x0008)  
	FString                                            AttachmentName;                                             // 0x06D0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x90];                                      // 0x06E0   (0x0090)  MISSED
	TArray<FHairGroupDesc>                             GroomGroupsDesc;                                            // 0x0770   (0x0010)  
	bool                                               bUseCards;                                                  // 0x0780   (0x0001)  
	bool                                               bRunning;                                                   // 0x0781   (0x0001)  
	bool                                               bLooping;                                                   // 0x0782   (0x0001)  
	bool                                               bManualTick;                                                // 0x0783   (0x0001)  
	float                                              ElapsedTime;                                                // 0x0784   (0x0004)  
	unsigned char                                      UnknownData03_7[0x78];                                      // 0x0788   (0x0078)  MISSED


	/// Functions
	// Function /Script/HairStrandsCore.GroomComponent.SetPhysicsAsset
	// void SetPhysicsAsset(class UPhysicsAsset* InPhysicsAsset);                                                               // [0x14ae900] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetMeshDeformer
	// void SetMeshDeformer(class UMeshDeformer* InMeshDeformer);                                                               // [0x14ae830] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetHairLengthScaleEnable
	// void SetHairLengthScaleEnable(bool bEnable);                                                                             // [0x14ae6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetHairLengthScale
	// void SetHairLengthScale(float Scale);                                                                                    // [0x14ae5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetGroomAsset
	// void SetGroomAsset(class UGroomAsset* Asset);                                                                            // [0x14ae450] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetEnableSimulation
	// void SetEnableSimulation(bool bInEnableSimulation);                                                                      // [0x14ae330] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.SetBindingAsset
	// void SetBindingAsset(class UGroomBindingAsset* InBinding);                                                               // [0x14ae260] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.ResetSimulation
	// void ResetSimulation();                                                                                                  // [0x14ae240] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.ResetCollisionComponents
	// void ResetCollisionComponents();                                                                                         // [0x14ae210] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.GetNiagaraComponent
	// class UNiagaraComponent* GetNiagaraComponent(int32_t GroupIndex);                                                        // [0x14ae150] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled
	// bool GetIsHairLengthScaleEnabled();                                                                                      // [0x14ae0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HairStrandsCore.GroomComponent.AddCollisionComponent
	// void AddCollisionComponent(class USkeletalMeshComponent* SkeletalMeshComponent);                                         // [0x14adc80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HairStrandsCore.GroomCreateBindingOptions
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UGroomCreateBindingOptions : public UObject
{ 
public:
	EGroomBindingMeshType                              GroomBindingType;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x0030   (0x0008)  
	class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x0038   (0x0008)  
	class UGeometryCache*                              SourceGeometryCache;                                        // 0x0040   (0x0008)  
	class UGeometryCache*                              TargetGeometryCache;                                        // 0x0048   (0x0008)  
	int32_t                                            NumInterpolationPoints;                                     // 0x0050   (0x0004)  
	int32_t                                            MatchingSection;                                            // 0x0054   (0x0004)  
};

/// Struct /Script/HairStrandsCore.FollicleMaskOptions
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FFollicleMaskOptions
{ 
	class UGroomAsset*                                 Groom;                                                      // 0x0000   (0x0008)  
	EFollicleMaskChannel                               Channel;                                                    // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Class /Script/HairStrandsCore.GroomCreateFollicleMaskOptions
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGroomCreateFollicleMaskOptions : public UObject
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0028   (0x0004)  
	int32_t                                            RootRadius;                                                 // 0x002C   (0x0004)  
	TArray<FFollicleMaskOptions>                       Grooms;                                                     // 0x0030   (0x0010)  
};

/// Class /Script/HairStrandsCore.GroomCreateStrandsTexturesOptions
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UGroomCreateStrandsTexturesOptions : public UObject
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0028   (0x0004)  
	EStrandsTexturesTraceType                          TraceType;                                                  // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	float                                              TraceDistance;                                              // 0x0030   (0x0004)  
	EStrandsTexturesMeshType                           MeshType;                                                   // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	class UStaticMesh*                                 StaticMesh;                                                 // 0x0038   (0x0008)  
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x0040   (0x0008)  
	int32_t                                            LODIndex;                                                   // 0x0048   (0x0004)  
	int32_t                                            SectionIndex;                                               // 0x004C   (0x0004)  
	int32_t                                            UVChannelIndex;                                             // 0x0050   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	TArray<int32_t>                                    GroupIndex;                                                 // 0x0058   (0x0010)  
};

/// Class /Script/HairStrandsCore.GroomImportOptions
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UGroomImportOptions : public UObject
{ 
public:
	FGroomConversionSettings                           ConversionSettings;                                         // 0x0028   (0x0030)  
	TArray<FHairGroupsInterpolation>                   InterpolationSettings;                                      // 0x0058   (0x0010)  
};

/// Struct /Script/HairStrandsCore.GroomHairGroupPreview
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 MaxSize: 0x003C
struct FGroomHairGroupPreview
{ 
	FName                                              GroupName;                                                  // 0x0000   (0x0008)  
	int32_t                                            GroupID;                                                    // 0x0008   (0x0004)  
	int32_t                                            CurveCount;                                                 // 0x000C   (0x0004)  
	int32_t                                            GuideCount;                                                 // 0x0010   (0x0004)  
	bool                                               bHasRootUV;                                                 // 0x0014   (0x0001)  
	bool                                               bHasClumpID;                                                // 0x0015   (0x0001)  
	bool                                               bHasColor;                                                  // 0x0016   (0x0001)  
	bool                                               bHasRoughness;                                              // 0x0017   (0x0001)  
	bool                                               bHasAO;                                                     // 0x0018   (0x0001)  
	bool                                               bHasPrecomputedWeights;                                     // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	FHairGroupsInterpolation                           InterpolationSettings;                                      // 0x001C   (0x0020)  
};

/// Class /Script/HairStrandsCore.GroomHairGroupsPreview
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGroomHairGroupsPreview : public UObject
{ 
public:
	TArray<FGroomHairGroupPreview>                     Groups;                                                     // 0x0028   (0x0010)  
};

/// Class /Script/HairStrandsCore.GroomPluginSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UGroomPluginSettings : public UObject
{ 
public:
	float                                              GroomCacheLookAheadBuffer;                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/HairStrandsCore.MovieSceneGroomCacheParams
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMovieSceneGroomCacheParams
{ 
	class UGroomCache*                                 GroomCache;                                                 // 0x0000   (0x0008)  
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x0008   (0x0004)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x000C   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	bool                                               bReverse : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/HairStrandsCore.MovieSceneGroomCacheSection
/// Size: 0x0110 (272 bytes) (0x0000F0 - 0x000110) align 8 MaxSize: 0x0110
class UMovieSceneGroomCacheSection : public UMovieSceneSection
{ 
public:
	FMovieSceneGroomCacheParams                        Params;                                                     // 0x00F0   (0x0020)  
};

/// Class /Script/HairStrandsCore.MovieSceneGroomCacheTrack
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x00A0   (0x0010)  
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfaceHairStrands
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	class UGroomAsset*                                 DefaultSource;                                              // 0x0040   (0x0008)  
	class AActor*                                      SourceActor;                                                // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfaceVelocityGrid
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         GridSize;                                                   // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/HairStrandsCore.NiagaraDataInterfacePressureGrid
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{ 
public:
};

/// Struct /Script/HairStrandsCore.GroomBuildSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGroomBuildSettings
{ 
	bool                                               bOverrideGuides;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              HairToGuideDensity;                                         // 0x0004   (0x0004)  
	EGroomInterpolationQuality                         InterpolationQuality;                                       // 0x0008   (0x0001)  
	EGroomInterpolationWeight                          InterpolationDistance;                                      // 0x0009   (0x0001)  
	bool                                               bRandomizeGuide;                                            // 0x000A   (0x0001)  
	bool                                               bUseUniqueGuide;                                            // 0x000B   (0x0001)  
};

/// Struct /Script/HairStrandsCore.MovieSceneGroomCacheSectionTemplateParameters
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneGroomCacheSectionTemplateParameters : FMovieSceneGroomCacheParams
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0020   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x0024   (0x0004)  
};

/// Struct /Script/HairStrandsCore.MovieSceneGroomCacheSectionTemplate
/// Size: 0x0048 (72 bytes) (0x000020 - 0x000048) align 8 MaxSize: 0x0048
struct FMovieSceneGroomCacheSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneGroomCacheSectionTemplateParameters     Params;                                                     // 0x0020   (0x0028)  
};

#pragma pack(pop)


static_assert(sizeof(UOptimusGroomDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusGroomDataProvider) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UOptimusGroomExecDataInterface) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UOptimusGroomExecDataProvider) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOptimusGroomWriteDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusGroomWriteDataProvider) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOptimusGroomComponentSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGroomConversionSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FGroomCacheImportSettings) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UGroomCacheImportOptions) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UGroomCacheImportData) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(AGroomActor) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(FHairGroupInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FHairGroupInfoWithVisibility) == 0x002C); // 44 bytes (0x000028 - 0x00002C)
static_assert(sizeof(FHairGeometrySettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FHairShadowSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FHairAdvancedRenderingSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FHairGroupsRendering) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FHairSolverSettings) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FHairExternalForces) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FHairBendConstraint) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FHairStretchConstraint) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FHairCollisionConstraint) == 0x00A8); // 168 bytes (0x000000 - 0x0000A8)
static_assert(sizeof(FHairMaterialConstraints) == 0x01D8); // 472 bytes (0x000000 - 0x0001D8)
static_assert(sizeof(FHairStrandsParameters) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FHairGroupsPhysics) == 0x02F0); // 752 bytes (0x000000 - 0x0002F0)
static_assert(sizeof(FHairDecimationSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHairInterpolationSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FHairDeformationSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FHairGroupsInterpolation) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FHairLODSettings) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FHairGroupsLOD) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FHairCardsClusterSettings) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHairCardsGeometrySettings) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FHairCardsTextureSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FHairGroupsProceduralCards) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FHairGroupCardsTextures) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FHairGroupCardsInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FHairGroupsCardsSourceDescription) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(FHairGroupsMeshesSourceDescription) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FHairGroupsMaterial) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGroomAsset) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(UHairCardGenerationSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGroomAssetImportData) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FGoomBindingGroupInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGroomBindingAsset) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UGroomBindingAssetList) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGroomBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FGroomAnimationInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FGroomCacheInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UGroomCache) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(FHairSimulationSetup) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FHairSimulationSolver) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FHairSimulationForces) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FHairSimulationConstraints) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FHairSimulationSettings) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FHairGroupDesc) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UGroomComponent) == 0x0800); // 2048 bytes (0x0005A0 - 0x000800)
static_assert(sizeof(UGroomCreateBindingOptions) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FFollicleMaskOptions) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UGroomCreateFollicleMaskOptions) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UGroomCreateStrandsTexturesOptions) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UGroomImportOptions) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FGroomHairGroupPreview) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(UGroomHairGroupsPreview) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGroomPluginSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FMovieSceneGroomCacheParams) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMovieSceneGroomCacheSection) == 0x0110); // 272 bytes (0x0000F0 - 0x000110)
static_assert(sizeof(UMovieSceneGroomCacheTrack) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(UNiagaraDataInterfaceHairStrands) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceVelocityGrid) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfacePressureGrid) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(FGroomBuildSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMovieSceneGroomCacheSectionTemplateParameters) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FMovieSceneGroomCacheSectionTemplate) == 0x0048); // 72 bytes (0x000020 - 0x000048)
static_assert(offsetof(UOptimusGroomDataProvider, Groom) == 0x0028);
static_assert(offsetof(UOptimusGroomExecDataInterface, Domain) == 0x0028);
static_assert(offsetof(UOptimusGroomExecDataProvider, GroomComponent) == 0x0028);
static_assert(offsetof(UOptimusGroomExecDataProvider, Domain) == 0x0030);
static_assert(offsetof(UOptimusGroomWriteDataProvider, GroomComponent) == 0x0028);
static_assert(offsetof(FGroomConversionSettings, Rotation) == 0x0000);
static_assert(offsetof(FGroomConversionSettings, Scale) == 0x0018);
static_assert(offsetof(FGroomCacheImportSettings, ImportType) == 0x0001);
static_assert(offsetof(FGroomCacheImportSettings, GroomAsset) == 0x0010);
static_assert(offsetof(FGroomCacheImportSettings, ConversionSettings) == 0x0038);
static_assert(offsetof(UGroomCacheImportOptions, ImportSettings) == 0x0028);
static_assert(offsetof(UGroomCacheImportData, Settings) == 0x0028);
static_assert(offsetof(AGroomActor, GroomComponent) == 0x0290);
static_assert(offsetof(FHairGroupInfo, GroupName) == 0x0004);
static_assert(offsetof(FHairGroupsRendering, MaterialSlotName) == 0x0000);
static_assert(offsetof(FHairGroupsRendering, Material) == 0x0008);
static_assert(offsetof(FHairGroupsRendering, GeometrySettings) == 0x0010);
static_assert(offsetof(FHairGroupsRendering, ShadowSettings) == 0x001C);
static_assert(offsetof(FHairGroupsRendering, AdvancedSettings) == 0x0028);
static_assert(offsetof(FHairSolverSettings, NiagaraSolver) == 0x0001);
static_assert(offsetof(FHairSolverSettings, CustomSystem) == 0x0008);
static_assert(offsetof(FHairExternalForces, GravityVector) == 0x0000);
static_assert(offsetof(FHairExternalForces, AirVelocity) == 0x0020);
static_assert(offsetof(FHairBendConstraint, BendScale) == 0x0010);
static_assert(offsetof(FHairStretchConstraint, StretchScale) == 0x0010);
static_assert(offsetof(FHairCollisionConstraint, GridDimension) == 0x0010);
static_assert(offsetof(FHairCollisionConstraint, RadiusScale) == 0x0020);
static_assert(offsetof(FHairMaterialConstraints, BendConstraint) == 0x0000);
static_assert(offsetof(FHairMaterialConstraints, StretchConstraint) == 0x0098);
static_assert(offsetof(FHairMaterialConstraints, CollisionConstraint) == 0x0130);
static_assert(offsetof(FHairStrandsParameters, StrandsSize) == 0x0000);
static_assert(offsetof(FHairStrandsParameters, ThicknessScale) == 0x0010);
static_assert(offsetof(FHairGroupsPhysics, SolverSettings) == 0x0000);
static_assert(offsetof(FHairGroupsPhysics, ExternalForces) == 0x0048);
static_assert(offsetof(FHairGroupsPhysics, MaterialConstraints) == 0x0080);
static_assert(offsetof(FHairGroupsPhysics, StrandsParameters) == 0x0258);
static_assert(offsetof(FHairInterpolationSettings, InterpolationQuality) == 0x0008);
static_assert(offsetof(FHairInterpolationSettings, InterpolationDistance) == 0x0009);
static_assert(offsetof(FHairGroupsInterpolation, DecimationSettings) == 0x0000);
static_assert(offsetof(FHairGroupsInterpolation, InterpolationSettings) == 0x0008);
static_assert(offsetof(FHairGroupsInterpolation, RiggingSettings) == 0x0014);
static_assert(offsetof(FHairLODSettings, GeometryType) == 0x0015);
static_assert(offsetof(FHairLODSettings, BindingType) == 0x0016);
static_assert(offsetof(FHairLODSettings, Simulation) == 0x0017);
static_assert(offsetof(FHairLODSettings, GlobalInterpolation) == 0x0018);
static_assert(offsetof(FHairGroupsLOD, LODs) == 0x0000);
static_assert(offsetof(FHairCardsClusterSettings, Type) == 0x0004);
static_assert(offsetof(FHairCardsGeometrySettings, GenerationType) == 0x0000);
static_assert(offsetof(FHairCardsGeometrySettings, ClusterType) == 0x0008);
static_assert(offsetof(FHairGroupsProceduralCards, ClusterSettings) == 0x0000);
static_assert(offsetof(FHairGroupsProceduralCards, GeometrySettings) == 0x0008);
static_assert(offsetof(FHairGroupsProceduralCards, TextureSettings) == 0x0024);
static_assert(offsetof(FHairGroupCardsTextures, DepthTexture) == 0x0000);
static_assert(offsetof(FHairGroupCardsTextures, CoverageTexture) == 0x0008);
static_assert(offsetof(FHairGroupCardsTextures, TangentTexture) == 0x0010);
static_assert(offsetof(FHairGroupCardsTextures, AttributeTexture) == 0x0018);
static_assert(offsetof(FHairGroupCardsTextures, AuxilaryDataTexture) == 0x0020);
static_assert(offsetof(FHairGroupCardsTextures, MaterialTexture) == 0x0028);
static_assert(offsetof(FHairGroupsCardsSourceDescription, Material) == 0x0000);
static_assert(offsetof(FHairGroupsCardsSourceDescription, MaterialSlotName) == 0x0008);
static_assert(offsetof(FHairGroupsCardsSourceDescription, SourceType) == 0x0010);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralMesh) == 0x0018);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralMeshKey) == 0x0020);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ImportedMesh) == 0x0030);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ProceduralSettings) == 0x0038);
static_assert(offsetof(FHairGroupsCardsSourceDescription, Textures) == 0x0070);
static_assert(offsetof(FHairGroupsCardsSourceDescription, CardsInfo) == 0x00B0);
static_assert(offsetof(FHairGroupsCardsSourceDescription, ImportedMeshKey) == 0x00B8);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, Material) == 0x0000);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, MaterialSlotName) == 0x0008);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, ImportedMesh) == 0x0010);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, Textures) == 0x0018);
static_assert(offsetof(FHairGroupsMeshesSourceDescription, ImportedMeshKey) == 0x0058);
static_assert(offsetof(FHairGroupsMaterial, Material) == 0x0000);
static_assert(offsetof(FHairGroupsMaterial, SlotName) == 0x0008);
static_assert(offsetof(UGroomAsset, HairGroupsInfo) == 0x0030);
static_assert(offsetof(UGroomAsset, HairGroupsRendering) == 0x0040);
static_assert(offsetof(UGroomAsset, HairGroupsPhysics) == 0x0050);
static_assert(offsetof(UGroomAsset, HairGroupsInterpolation) == 0x0060);
static_assert(offsetof(UGroomAsset, HairGroupsLOD) == 0x0070);
static_assert(offsetof(UGroomAsset, HairGroupsCards) == 0x0080);
static_assert(offsetof(UGroomAsset, HairGroupsMeshes) == 0x0090);
static_assert(offsetof(UGroomAsset, HairGroupsMaterials) == 0x00A0);
static_assert(offsetof(UGroomAsset, HairInterpolationType) == 0x00C1);
static_assert(offsetof(UGroomAsset, RiggedSkeletalMesh) == 0x00C8);
static_assert(offsetof(UGroomAsset, DeformedGroupSections) == 0x00D0);
static_assert(offsetof(UGroomAsset, MinLOD) == 0x00E0);
static_assert(offsetof(UGroomAsset, DisableBelowMinLodStripping) == 0x00E4);
static_assert(offsetof(UGroomAsset, EffectiveLODBias) == 0x00E8);
static_assert(offsetof(UGroomAsset, AssetUserData) == 0x00F8);
static_assert(offsetof(UGroomAssetImportData, ImportOptions) == 0x0028);
static_assert(offsetof(UGroomBindingAsset, GroomBindingType) == 0x0028);
static_assert(offsetof(UGroomBindingAsset, Groom) == 0x0030);
static_assert(offsetof(UGroomBindingAsset, SourceSkeletalMesh) == 0x0038);
static_assert(offsetof(UGroomBindingAsset, TargetSkeletalMesh) == 0x0040);
static_assert(offsetof(UGroomBindingAsset, SourceGeometryCache) == 0x0048);
static_assert(offsetof(UGroomBindingAsset, TargetGeometryCache) == 0x0050);
static_assert(offsetof(UGroomBindingAsset, GroupInfos) == 0x0060);
static_assert(offsetof(UGroomBindingAssetList, Bindings) == 0x0028);
static_assert(offsetof(FGroomAnimationInfo, Attributes) == 0x001C);
static_assert(offsetof(FGroomCacheInfo, Type) == 0x0004);
static_assert(offsetof(FGroomCacheInfo, AnimationInfo) == 0x0008);
static_assert(offsetof(UGroomCache, GroomCacheInfo) == 0x003C);
static_assert(offsetof(FHairSimulationSetup, LocalBone) == 0x0010);
static_assert(offsetof(FHairSimulationForces, GravityVector) == 0x0000);
static_assert(offsetof(FHairSimulationForces, AirVelocity) == 0x0020);
static_assert(offsetof(FHairSimulationSettings, SimulationSetup) == 0x0008);
static_assert(offsetof(FHairSimulationSettings, SolverSettings) == 0x0030);
static_assert(offsetof(FHairSimulationSettings, ExternalForces) == 0x0038);
static_assert(offsetof(FHairSimulationSettings, MaterialConstraints) == 0x0070);
static_assert(offsetof(UGroomComponent, GroomAsset) == 0x05B0);
static_assert(offsetof(UGroomComponent, GroomCache) == 0x05B8);
static_assert(offsetof(UGroomComponent, NiagaraComponents) == 0x05C0);
static_assert(offsetof(UGroomComponent, SourceSkeletalMesh) == 0x05D0);
static_assert(offsetof(UGroomComponent, BindingAsset) == 0x05D8);
static_assert(offsetof(UGroomComponent, PhysicsAsset) == 0x05E0);
static_assert(offsetof(UGroomComponent, SimulationSettings) == 0x05F8);
static_assert(offsetof(UGroomComponent, MeshDeformer) == 0x0688);
static_assert(offsetof(UGroomComponent, MeshDeformerInstance) == 0x0690);
static_assert(offsetof(UGroomComponent, MeshDeformerInstanceSettings) == 0x0698);
static_assert(offsetof(UGroomComponent, Strands_DebugMaterial) == 0x06A0);
static_assert(offsetof(UGroomComponent, Strands_DefaultMaterial) == 0x06A8);
static_assert(offsetof(UGroomComponent, Cards_DefaultMaterial) == 0x06B0);
static_assert(offsetof(UGroomComponent, Meshes_DefaultMaterial) == 0x06B8);
static_assert(offsetof(UGroomComponent, AngularSpringsSystem) == 0x06C0);
static_assert(offsetof(UGroomComponent, CosseratRodsSystem) == 0x06C8);
static_assert(offsetof(UGroomComponent, AttachmentName) == 0x06D0);
static_assert(offsetof(UGroomComponent, GroomGroupsDesc) == 0x0770);
static_assert(offsetof(UGroomCreateBindingOptions, GroomBindingType) == 0x0028);
static_assert(offsetof(UGroomCreateBindingOptions, SourceSkeletalMesh) == 0x0030);
static_assert(offsetof(UGroomCreateBindingOptions, TargetSkeletalMesh) == 0x0038);
static_assert(offsetof(UGroomCreateBindingOptions, SourceGeometryCache) == 0x0040);
static_assert(offsetof(UGroomCreateBindingOptions, TargetGeometryCache) == 0x0048);
static_assert(offsetof(FFollicleMaskOptions, Groom) == 0x0000);
static_assert(offsetof(FFollicleMaskOptions, Channel) == 0x0008);
static_assert(offsetof(UGroomCreateFollicleMaskOptions, Grooms) == 0x0030);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, TraceType) == 0x002C);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, MeshType) == 0x0034);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, StaticMesh) == 0x0038);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, SkeletalMesh) == 0x0040);
static_assert(offsetof(UGroomCreateStrandsTexturesOptions, GroupIndex) == 0x0058);
static_assert(offsetof(UGroomImportOptions, ConversionSettings) == 0x0028);
static_assert(offsetof(UGroomImportOptions, InterpolationSettings) == 0x0058);
static_assert(offsetof(FGroomHairGroupPreview, GroupName) == 0x0000);
static_assert(offsetof(FGroomHairGroupPreview, InterpolationSettings) == 0x001C);
static_assert(offsetof(UGroomHairGroupsPreview, Groups) == 0x0028);
static_assert(offsetof(FMovieSceneGroomCacheParams, GroomCache) == 0x0000);
static_assert(offsetof(FMovieSceneGroomCacheParams, FirstLoopStartFrameOffset) == 0x0008);
static_assert(offsetof(FMovieSceneGroomCacheParams, StartFrameOffset) == 0x000C);
static_assert(offsetof(FMovieSceneGroomCacheParams, EndFrameOffset) == 0x0010);
static_assert(offsetof(UMovieSceneGroomCacheSection, Params) == 0x00F0);
static_assert(offsetof(UMovieSceneGroomCacheTrack, AnimationSections) == 0x00A0);
static_assert(offsetof(UNiagaraDataInterfaceHairStrands, DefaultSource) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceHairStrands, SourceActor) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceVelocityGrid, GridSize) == 0x0038);
static_assert(offsetof(FGroomBuildSettings, InterpolationQuality) == 0x0008);
static_assert(offsetof(FGroomBuildSettings, InterpolationDistance) == 0x0009);
static_assert(offsetof(FMovieSceneGroomCacheSectionTemplateParameters, SectionStartTime) == 0x0020);
static_assert(offsetof(FMovieSceneGroomCacheSectionTemplateParameters, SectionEndTime) == 0x0024);
static_assert(offsetof(FMovieSceneGroomCacheSectionTemplate, Params) == 0x0020);
