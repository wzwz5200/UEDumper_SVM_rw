
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/Landmass.EBrushFalloffMode
/// Size: 0x01 (1 bytes)
enum class EBrushFalloffMode : uint8_t
{
	EBrushFalloffMode__Angle                                                         = 0,
	EBrushFalloffMode__Width                                                         = 1
};

/// Enum /Script/Landmass.EBrushBlendType
/// Size: 0x01 (1 bytes)
enum class EBrushBlendType : uint8_t
{
	EBrushBlendType__AlphaBlend                                                      = 0,
	EBrushBlendType__Min                                                             = 1,
	EBrushBlendType__Max                                                             = 2,
	EBrushBlendType__Additive                                                        = 3
};

/// Struct /Script/Landmass.BrushEffectBlurring
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FBrushEffectBlurring
{ 
	bool                                               bBlurShape;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Radius;                                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Landmass.BrushEffectCurlNoise
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FBrushEffectCurlNoise
{ 
	float                                              Curl1Amount;                                                // 0x0000   (0x0004)  
	float                                              Curl2Amount;                                                // 0x0004   (0x0004)  
	float                                              Curl1Tiling;                                                // 0x0008   (0x0004)  
	float                                              Curl2Tiling;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/Landmass.BrushEffectCurves
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FBrushEffectCurves
{ 
	bool                                               bUseCurveChannel;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UCurveFloat*                                 ElevationCurveAsset;                                        // 0x0008   (0x0008)  
	float                                              ChannelEdgeOffset;                                          // 0x0010   (0x0004)  
	float                                              ChannelDepth;                                               // 0x0014   (0x0004)  
	float                                              CurveRampWidth;                                             // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/Landmass.BrushEffectDisplacement
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FBrushEffectDisplacement
{ 
	float                                              DisplacementHeight;                                         // 0x0000   (0x0004)  
	float                                              DisplacementTiling;                                         // 0x0004   (0x0004)  
	class UTexture2D*                                  Texture;                                                    // 0x0008   (0x0008)  
	float                                              Midpoint;                                                   // 0x0010   (0x0004)  
	FLinearColor                                       Channel;                                                    // 0x0014   (0x0010)  
	float                                              WeightmapInfluence;                                         // 0x0024   (0x0004)  
};

/// Struct /Script/Landmass.BrushEffectSmoothBlending
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FBrushEffectSmoothBlending
{ 
	float                                              InnerSmoothDistance;                                        // 0x0000   (0x0004)  
	float                                              OuterSmoothDistance;                                        // 0x0004   (0x0004)  
};

/// Struct /Script/Landmass.BrushEffectTerracing
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FBrushEffectTerracing
{ 
	float                                              TerraceAlpha;                                               // 0x0000   (0x0004)  
	float                                              TerraceSpacing;                                             // 0x0004   (0x0004)  
	float                                              TerraceSmoothness;                                          // 0x0008   (0x0004)  
	float                                              MaskLength;                                                 // 0x000C   (0x0004)  
	float                                              MaskStartOffset;                                            // 0x0010   (0x0004)  
};

/// Struct /Script/Landmass.LandmassBrushEffectsList
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FLandmassBrushEffectsList
{ 
	FBrushEffectBlurring                               Blurring;                                                   // 0x0000   (0x0008)  
	FBrushEffectCurlNoise                              CurlNoise;                                                  // 0x0008   (0x0010)  
	FBrushEffectDisplacement                           Displacement;                                               // 0x0018   (0x0028)  
	FBrushEffectSmoothBlending                         SmoothBlending;                                             // 0x0040   (0x0008)  
	FBrushEffectTerracing                              Terracing;                                                  // 0x0048   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Struct /Script/Landmass.LandmassFalloffSettings
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FLandmassFalloffSettings
{ 
	EBrushFalloffMode                                  FalloffMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              FalloffAngle;                                               // 0x0004   (0x0004)  
	float                                              FalloffWidth;                                               // 0x0008   (0x0004)  
	float                                              EdgeOffset;                                                 // 0x000C   (0x0004)  
	float                                              ZOffset;                                                    // 0x0010   (0x0004)  
};

/// Struct /Script/Landmass.LandmassTerrainCarvingSettings
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FLandmassTerrainCarvingSettings
{ 
	EBrushBlendType                                    BlendMode;                                                  // 0x0000   (0x0001)  
	bool                                               bInvertShape;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FLandmassFalloffSettings                           FalloffSettings;                                            // 0x0004   (0x0014)  
	FLandmassBrushEffectsList                          Effects;                                                    // 0x0018   (0x0060)  
	int32_t                                            Priority;                                                   // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FBrushEffectBlurring) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FBrushEffectCurlNoise) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBrushEffectCurves) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FBrushEffectDisplacement) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FBrushEffectSmoothBlending) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FBrushEffectTerracing) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FLandmassBrushEffectsList) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FLandmassFalloffSettings) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FLandmassTerrainCarvingSettings) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(offsetof(FBrushEffectCurves, ElevationCurveAsset) == 0x0008);
static_assert(offsetof(FBrushEffectDisplacement, Texture) == 0x0008);
static_assert(offsetof(FBrushEffectDisplacement, Channel) == 0x0014);
static_assert(offsetof(FLandmassBrushEffectsList, Blurring) == 0x0000);
static_assert(offsetof(FLandmassBrushEffectsList, CurlNoise) == 0x0008);
static_assert(offsetof(FLandmassBrushEffectsList, Displacement) == 0x0018);
static_assert(offsetof(FLandmassBrushEffectsList, SmoothBlending) == 0x0040);
static_assert(offsetof(FLandmassBrushEffectsList, Terracing) == 0x0048);
static_assert(offsetof(FLandmassFalloffSettings, FalloffMode) == 0x0000);
static_assert(offsetof(FLandmassTerrainCarvingSettings, BlendMode) == 0x0000);
static_assert(offsetof(FLandmassTerrainCarvingSettings, FalloffSettings) == 0x0004);
static_assert(offsetof(FLandmassTerrainCarvingSettings, Effects) == 0x0018);
