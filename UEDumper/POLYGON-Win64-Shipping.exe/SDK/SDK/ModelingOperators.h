
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: InteractiveToolsFramework

#pragma pack(push, 0x1)

/// Enum /Script/ModelingOperators.ERecomputeUVsPropertiesUnwrapType
/// Size: 0x04 (4 bytes)
enum class ERecomputeUVsPropertiesUnwrapType : uint32_t
{
	ERecomputeUVsPropertiesUnwrapType__ExpMap                                        = 0,
	ERecomputeUVsPropertiesUnwrapType__Conformal                                     = 1,
	ERecomputeUVsPropertiesUnwrapType__SpectralConformal                             = 2,
	ERecomputeUVsPropertiesUnwrapType__IslandMerging                                 = 3
};

/// Enum /Script/ModelingOperators.ERecomputeUVsPropertiesIslandMode
/// Size: 0x04 (4 bytes)
enum class ERecomputeUVsPropertiesIslandMode : uint32_t
{
	ERecomputeUVsPropertiesIslandMode__PolyGroups                                    = 0,
	ERecomputeUVsPropertiesIslandMode__ExistingUVs                                   = 1
};

/// Enum /Script/ModelingOperators.ERecomputeUVsToolOrientationMode
/// Size: 0x04 (4 bytes)
enum class ERecomputeUVsToolOrientationMode : uint32_t
{
	ERecomputeUVsToolOrientationMode__None                                           = 0,
	ERecomputeUVsToolOrientationMode__MinBounds                                      = 1
};

/// Enum /Script/ModelingOperators.ERecomputeUVsPropertiesLayoutType
/// Size: 0x04 (4 bytes)
enum class ERecomputeUVsPropertiesLayoutType : uint32_t
{
	ERecomputeUVsPropertiesLayoutType__None                                          = 0,
	ERecomputeUVsPropertiesLayoutType__Repack                                        = 1,
	ERecomputeUVsPropertiesLayoutType__NormalizeToExistingBounds                     = 2,
	ERecomputeUVsPropertiesLayoutType__NormalizeToBounds                             = 3,
	ERecomputeUVsPropertiesLayoutType__NormalizeToWorld                              = 4
};

/// Enum /Script/ModelingOperators.EUVLayoutType
/// Size: 0x04 (4 bytes)
enum class EUVLayoutType : uint32_t
{
	EUVLayoutType__Transform                                                         = 0,
	EUVLayoutType__Stack                                                             = 1,
	EUVLayoutType__Repack                                                            = 2
};

/// Enum /Script/ModelingOperators.ENormalCalculationMethod
/// Size: 0x01 (1 bytes)
enum class ENormalCalculationMethod : uint8_t
{
	ENormalCalculationMethod__AreaWeighted                                           = 0,
	ENormalCalculationMethod__AngleWeighted                                          = 1,
	ENormalCalculationMethod__AreaAngleWeighting                                     = 2
};

/// Enum /Script/ModelingOperators.ESplitNormalMethod
/// Size: 0x01 (1 bytes)
enum class ESplitNormalMethod : uint8_t
{
	ESplitNormalMethod__UseExistingTopology                                          = 0,
	ESplitNormalMethod__FaceNormalThreshold                                          = 1,
	ESplitNormalMethod__FaceGroupID                                                  = 2,
	ESplitNormalMethod__PerTriangle                                                  = 3,
	ESplitNormalMethod__PerVertex                                                    = 4
};

/// Enum /Script/ModelingOperators.EHoleFillOpFillType
/// Size: 0x01 (1 bytes)
enum class EHoleFillOpFillType : uint8_t
{
	EHoleFillOpFillType__TriangleFan                                                 = 0,
	EHoleFillOpFillType__PolygonEarClipping                                          = 1,
	EHoleFillOpFillType__Planar                                                      = 2,
	EHoleFillOpFillType__Minimal                                                     = 3,
	EHoleFillOpFillType__Smooth                                                      = 4
};

/// Enum /Script/ModelingOperators.ERemeshType
/// Size: 0x01 (1 bytes)
enum class ERemeshType : uint8_t
{
	ERemeshType__Standard                                                            = 0,
	ERemeshType__FullPass                                                            = 1,
	ERemeshType__NormalFlow                                                          = 2
};

/// Enum /Script/ModelingOperators.ERemeshSmoothingType
/// Size: 0x01 (1 bytes)
enum class ERemeshSmoothingType : uint8_t
{
	ERemeshSmoothingType__Uniform                                                    = 0,
	ERemeshSmoothingType__Cotangent                                                  = 1,
	ERemeshSmoothingType__MeanValue                                                  = 2
};

/// Enum /Script/ModelingOperators.ECSGOperation
/// Size: 0x01 (1 bytes)
enum class ECSGOperation : uint8_t
{
	ECSGOperation__DifferenceAB                                                      = 0,
	ECSGOperation__DifferenceBA                                                      = 1,
	ECSGOperation__Intersect                                                         = 2,
	ECSGOperation__Union                                                             = 3
};

/// Enum /Script/ModelingOperators.ETrimOperation
/// Size: 0x01 (1 bytes)
enum class ETrimOperation : uint8_t
{
	ETrimOperation__TrimA                                                            = 0,
	ETrimOperation__TrimB                                                            = 1
};

/// Enum /Script/ModelingOperators.ETrimSide
/// Size: 0x01 (1 bytes)
enum class ETrimSide : uint8_t
{
	ETrimSide__RemoveInside                                                          = 0,
	ETrimSide__RemoveOutside                                                         = 1
};

/// Enum /Script/ModelingOperators.EMorphologyOperation
/// Size: 0x01 (1 bytes)
enum class EMorphologyOperation : uint8_t
{
	EMorphologyOperation__Dilate                                                     = 0,
	EMorphologyOperation__Contract                                                   = 1,
	EMorphologyOperation__Close                                                      = 2,
	EMorphologyOperation__Open                                                       = 3
};

/// Enum /Script/ModelingOperators.EUVProjectionMethod
/// Size: 0x01 (1 bytes)
enum class EUVProjectionMethod : uint8_t
{
	EUVProjectionMethod__Box                                                         = 0,
	EUVProjectionMethod__Cylinder                                                    = 1,
	EUVProjectionMethod__Plane                                                       = 2,
	EUVProjectionMethod__ExpMap                                                      = 3
};

/// Class /Script/ModelingOperators.RecomputeUVsToolProperties
/// Size: 0x00E0 (224 bytes) (0x0000A8 - 0x0000E0) align 8 MaxSize: 0x00E0
class URecomputeUVsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnablePolygroupSupport;                                    // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	ERecomputeUVsPropertiesIslandMode                  IslandGeneration;                                           // 0x00AC   (0x0004)  
	ERecomputeUVsPropertiesUnwrapType                  UnwrapType;                                                 // 0x00B0   (0x0004)  
	ERecomputeUVsToolOrientationMode                   AutoRotation;                                               // 0x00B4   (0x0004)  
	bool                                               bPreserveIrregularity;                                      // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            SmoothingSteps;                                             // 0x00BC   (0x0004)  
	float                                              SmoothingAlpha;                                             // 0x00C0   (0x0004)  
	float                                              MergingDistortionThreshold;                                 // 0x00C4   (0x0004)  
	float                                              MergingAngleThreshold;                                      // 0x00C8   (0x0004)  
	ERecomputeUVsPropertiesLayoutType                  LayoutType;                                                 // 0x00CC   (0x0004)  
	int32_t                                            TextureResolution;                                          // 0x00D0   (0x0004)  
	float                                              NormalizeScale;                                             // 0x00D4   (0x0004)  
	bool                                               bEnableUDIMLayout;                                          // 0x00D8   (0x0001)  
	bool                                               bUDIMCVAREnabled;                                           // 0x00D9   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x00DA   (0x0006)  MISSED
};

/// Class /Script/ModelingOperators.UVLayoutProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UUVLayoutProperties : public UInteractiveToolPropertySet
{ 
public:
	EUVLayoutType                                      LayoutType;                                                 // 0x00A8   (0x0004)  
	int32_t                                            TextureResolution;                                          // 0x00AC   (0x0004)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FVector2D                                          Translation;                                                // 0x00B8   (0x0010)  
	bool                                               bAllowFlips;                                                // 0x00C8   (0x0001)  
	bool                                               bEnableUDIMLayout;                                          // 0x00C9   (0x0001)  
	bool                                               bUDIMCVAREnabled;                                           // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x00CB   (0x0005)  MISSED
};

/// Class /Script/ModelingOperators.RecomputeUVsOpFactory
/// Size: 0x0140 (320 bytes) (0x000028 - 0x000140) align 16 MaxSize: 0x0140
class URecomputeUVsOpFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class URecomputeUVsToolProperties*                 Settings;                                                   // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x108];                                     // 0x0038   (0x0108)  MISSED
};

/// Class /Script/ModelingOperators.UVLayoutOperatorFactory
/// Size: 0x0140 (320 bytes) (0x000028 - 0x000140) align 16 MaxSize: 0x0140
class UUVLayoutOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UUVLayoutProperties*                         Settings;                                                   // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x108];                                     // 0x0038   (0x0108)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(URecomputeUVsToolProperties) == 0x00E0); // 224 bytes (0x0000A8 - 0x0000E0)
static_assert(sizeof(UUVLayoutProperties) == 0x00D0); // 208 bytes (0x0000A8 - 0x0000D0)
static_assert(sizeof(URecomputeUVsOpFactory) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(UUVLayoutOperatorFactory) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(offsetof(URecomputeUVsToolProperties, IslandGeneration) == 0x00AC);
static_assert(offsetof(URecomputeUVsToolProperties, UnwrapType) == 0x00B0);
static_assert(offsetof(URecomputeUVsToolProperties, AutoRotation) == 0x00B4);
static_assert(offsetof(URecomputeUVsToolProperties, LayoutType) == 0x00CC);
static_assert(offsetof(UUVLayoutProperties, LayoutType) == 0x00A8);
static_assert(offsetof(UUVLayoutProperties, Translation) == 0x00B8);
static_assert(offsetof(URecomputeUVsOpFactory, Settings) == 0x0030);
static_assert(offsetof(UUVLayoutOperatorFactory, Settings) == 0x0030);
