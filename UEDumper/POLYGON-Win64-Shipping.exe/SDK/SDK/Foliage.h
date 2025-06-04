
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/Foliage.FoliageVertexColorMask
/// Size: 0x01 (1 bytes)
enum class FoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled                                                  = 0,
	FOLIAGEVERTEXCOLORMASK_Red                                                       = 1,
	FOLIAGEVERTEXCOLORMASK_Green                                                     = 2,
	FOLIAGEVERTEXCOLORMASK_Blue                                                      = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha                                                     = 4
};

/// Enum /Script/Foliage.EVertexColorMaskChannel
/// Size: 0x01 (1 bytes)
enum class EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red                                                     = 0,
	EVertexColorMaskChannel__Green                                                   = 1,
	EVertexColorMaskChannel__Blue                                                    = 2,
	EVertexColorMaskChannel__Alpha                                                   = 3,
	EVertexColorMaskChannel__MAX_None                                                = 4
};

/// Enum /Script/Foliage.EFoliageScaling
/// Size: 0x01 (1 bytes)
enum class EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform                                                         = 0,
	EFoliageScaling__Free                                                            = 1,
	EFoliageScaling__LockXY                                                          = 2,
	EFoliageScaling__LockXZ                                                          = 3,
	EFoliageScaling__LockYZ                                                          = 4
};

/// Enum /Script/Foliage.ESimulationOverlap
/// Size: 0x01 (1 bytes)
enum class ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap                                             = 0,
	ESimulationOverlap__ShadeOverlap                                                 = 1,
	ESimulationOverlap__None                                                         = 2
};

/// Enum /Script/Foliage.ESimulationQuery
/// Size: 0x01 (1 bytes)
enum class ESimulationQuery : uint8_t
{
	ESimulationQuery__None                                                           = 0,
	ESimulationQuery__CollisionOverlap                                               = 1,
	ESimulationQuery__ShadeOverlap                                                   = 2,
	ESimulationQuery__AnyOverlap                                                     = 3
};

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x0930 (2352 bytes) (0x0008F8 - 0x000930) align 16 MaxSize: 0x0930
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
public:
	SDK_UNDEFINED(16,1191) /* FMulticastInlineDelegate */ __um(OnInstanceTakePointDamage);                         // 0x08F8   (0x0010)  
	SDK_UNDEFINED(16,1192) /* FMulticastInlineDelegate */ __um(OnInstanceTakeRadialDamage);                        // 0x0908   (0x0010)  
	bool                                               bEnableDiscardOnLoad;                                       // 0x0918   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0919   (0x0003)  MISSED
	FGuid                                              GenerationGuid;                                             // 0x091C   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x092C   (0x0004)  MISSED
};

/// Struct /Script/Foliage.FoliageVertexColorChannelMask
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FFoliageVertexColorChannelMask
{ 
	bool                                               UseMask : 1;                                                // 0x0000:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaskThreshold;                                              // 0x0004   (0x0004)  
	bool                                               InvertMask : 1;                                             // 0x0008:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Foliage.FoliageDensityFalloff
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FFoliageDensityFalloff
{ 
	bool                                               bUseFalloffCurve;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FRuntimeFloatCurve                                 FalloffCurve;                                               // 0x0008   (0x0088)  
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x04C0 (1216 bytes) (0x000028 - 0x0004C0) align 8 MaxSize: 0x04C0
class UFoliageType : public UObject
{ 
public:
	FGuid                                              UpdateGuid;                                                 // 0x0028   (0x0010)  
	float                                              Density;                                                    // 0x0038   (0x0004)  
	float                                              DensityAdjustmentFactor;                                    // 0x003C   (0x0004)  
	float                                              Radius;                                                     // 0x0040   (0x0004)  
	bool                                               bSingleInstanceModeOverrideRadius;                          // 0x0044   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              SingleInstanceModeRadius;                                   // 0x0048   (0x0004)  
	EFoliageScaling                                    Scaling;                                                    // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FFloatInterval                                     ScaleX;                                                     // 0x0050   (0x0008)  
	FFloatInterval                                     ScaleY;                                                     // 0x0058   (0x0008)  
	FFloatInterval                                     ScaleZ;                                                     // 0x0060   (0x0008)  
	FFoliageVertexColorChannelMask                     VertexColorMaskByChannel[4];                                // 0x0068   (0x0030)  
	TEnumAsByte<FoliageVertexColorMask>                VertexColorMask;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	float                                              VertexColorMaskThreshold;                                   // 0x009C   (0x0004)  
	bool                                               VertexColorMaskInvert : 1;                                  // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00A1   (0x0003)  MISSED
	FFloatInterval                                     ZOffset;                                                    // 0x00A4   (0x0008)  
	bool                                               AlignToNormal : 1;                                          // 0x00AC:0 (0x0001)  
	bool                                               AverageNormal : 1;                                          // 0x00AC:1 (0x0001)  
	bool                                               AverageNormalSingleComponent : 1;                           // 0x00AC:2 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              AlignMaxAngle;                                              // 0x00B0   (0x0004)  
	bool                                               RandomYaw : 1;                                              // 0x00B4:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              RandomPitchAngle;                                           // 0x00B8   (0x0004)  
	FFloatInterval                                     GroundSlopeAngle;                                           // 0x00BC   (0x0008)  
	FFloatInterval                                     Height;                                                     // 0x00C4   (0x0008)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	TArray<FName>                                      LandscapeLayers;                                            // 0x00D0   (0x0010)  
	float                                              MinimumLayerWeight;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FName>                                      ExclusionLandscapeLayers;                                   // 0x00E8   (0x0010)  
	float                                              MinimumExclusionLayerWeight;                                // 0x00F8   (0x0004)  
	FName                                              LandscapeLayer;                                             // 0x00FC   (0x0008)  
	bool                                               CollisionWithWorld : 1;                                     // 0x0104:0 (0x0001)  
	unsigned char                                      UnknownData08_5[0x3];                                       // 0x0105   (0x0003)  MISSED
	FVector                                            CollisionScale;                                             // 0x0108   (0x0018)  
	int32_t                                            AverageNormalSampleCount;                                   // 0x0120   (0x0004)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x0124   (0x0004)  MISSED
	FBoxSphereBounds                                   MeshBounds;                                                 // 0x0128   (0x0038)  
	FVector                                            LowBoundOriginRadius;                                       // 0x0160   (0x0018)  
	TEnumAsByte<EComponentMobility>                    Mobility;                                                   // 0x0178   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x0179   (0x0003)  MISSED
	FInt32Interval                                     CullDistance;                                               // 0x017C   (0x0008)  
	bool                                               bEnableStaticLighting : 1;                                  // 0x0184:0 (0x0001)  
	bool                                               CastShadow : 1;                                             // 0x0184:1 (0x0001)  
	bool                                               bAffectDynamicIndirectLighting : 1;                         // 0x0184:2 (0x0001)  
	bool                                               bAffectDistanceFieldLighting : 1;                           // 0x0184:3 (0x0001)  
	bool                                               bCastDynamicShadow : 1;                                     // 0x0184:4 (0x0001)  
	bool                                               bCastStaticShadow : 1;                                      // 0x0184:5 (0x0001)  
	unsigned char                                      UnknownData11_3[0x3];                                       // 0x0185   (0x0003)  MISSED
	bool                                               bCastContactShadow : 1;                                     // 0x0188:0 (0x0001)  
	unsigned char                                      UnknownData12_3[0x3];                                       // 0x0189   (0x0003)  MISSED
	bool                                               bCastShadowAsTwoSided : 1;                                  // 0x018C:0 (0x0001)  
	bool                                               bReceivesDecals : 1;                                        // 0x018C:1 (0x0001)  
	bool                                               bOverrideLightMapRes : 1;                                   // 0x018C:2 (0x0001)  
	unsigned char                                      UnknownData13_5[0x3];                                       // 0x018D   (0x0003)  MISSED
	int32_t                                            OverriddenLightMapRes;                                      // 0x0190   (0x0004)  
	ELightmapType                                      LightmapType;                                               // 0x0194   (0x0001)  
	unsigned char                                      UnknownData14_6[0x3];                                       // 0x0195   (0x0003)  MISSED
	bool                                               bUseAsOccluder : 1;                                         // 0x0198:0 (0x0001)  
	unsigned char                                      UnknownData15_3[0x3];                                       // 0x0199   (0x0003)  MISSED
	bool                                               bVisibleInRayTracing : 1;                                   // 0x019C:0 (0x0001)  
	bool                                               bEvaluateWorldPositionOffset : 1;                           // 0x019C:1 (0x0001)  
	unsigned char                                      UnknownData16_5[0x3];                                       // 0x019D   (0x0003)  MISSED
	int32_t                                            WorldPositionOffsetDisableDistance;                         // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData17_6[0x4];                                       // 0x01A4   (0x0004)  MISSED
	FBodyInstance                                      BodyInstance;                                               // 0x01A8   (0x0190)  
	TEnumAsByte<EHasCustomNavigableGeometry>           CustomNavigableGeometry;                                    // 0x0338   (0x0001)  
	FLightingChannels                                  LightingChannels;                                           // 0x0339   (0x0001)  
	unsigned char                                      UnknownData18_6[0x2];                                       // 0x033A   (0x0002)  MISSED
	bool                                               bRenderCustomDepth : 1;                                     // 0x033C:0 (0x0001)  
	unsigned char                                      UnknownData19_5[0x3];                                       // 0x033D   (0x0003)  MISSED
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x0340   (0x0001)  
	unsigned char                                      UnknownData20_6[0x3];                                       // 0x0341   (0x0003)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x0344   (0x0004)  
	int32_t                                            TranslucencySortPriority;                                   // 0x0348   (0x0004)  
	float                                              CollisionRadius;                                            // 0x034C   (0x0004)  
	float                                              ShadeRadius;                                                // 0x0350   (0x0004)  
	int32_t                                            NumSteps;                                                   // 0x0354   (0x0004)  
	float                                              InitialSeedDensity;                                         // 0x0358   (0x0004)  
	float                                              AverageSpreadDistance;                                      // 0x035C   (0x0004)  
	float                                              SpreadVariance;                                             // 0x0360   (0x0004)  
	int32_t                                            SeedsPerStep;                                               // 0x0364   (0x0004)  
	int32_t                                            DistributionSeed;                                           // 0x0368   (0x0004)  
	float                                              MaxInitialSeedOffset;                                       // 0x036C   (0x0004)  
	bool                                               bCanGrowInShade;                                            // 0x0370   (0x0001)  
	bool                                               bSpawnsInShade;                                             // 0x0371   (0x0001)  
	unsigned char                                      UnknownData21_6[0x2];                                       // 0x0372   (0x0002)  MISSED
	float                                              MaxInitialAge;                                              // 0x0374   (0x0004)  
	float                                              MaxAge;                                                     // 0x0378   (0x0004)  
	float                                              OverlapPriority;                                            // 0x037C   (0x0004)  
	FFloatInterval                                     ProceduralScale;                                            // 0x0380   (0x0008)  
	FRuntimeFloatCurve                                 ScaleCurve;                                                 // 0x0388   (0x0088)  
	FFoliageDensityFalloff                             DensityFalloff;                                             // 0x0410   (0x0090)  
	int32_t                                            ChangeCount;                                                // 0x04A0   (0x0004)  
	bool                                               ReapplyDensity : 1;                                         // 0x04A4:0 (0x0001)  
	bool                                               ReapplyRadius : 1;                                          // 0x04A4:1 (0x0001)  
	bool                                               ReapplyAlignToNormal : 1;                                   // 0x04A4:2 (0x0001)  
	bool                                               ReapplyRandomYaw : 1;                                       // 0x04A4:3 (0x0001)  
	bool                                               ReapplyScaling : 1;                                         // 0x04A4:4 (0x0001)  
	bool                                               ReapplyScaleX : 1;                                          // 0x04A4:5 (0x0001)  
	bool                                               ReapplyScaleY : 1;                                          // 0x04A4:6 (0x0001)  
	bool                                               ReapplyScaleZ : 1;                                          // 0x04A4:7 (0x0001)  
	bool                                               ReapplyRandomPitchAngle : 1;                                // 0x04A5:0 (0x0001)  
	bool                                               ReapplyGroundSlope : 1;                                     // 0x04A5:1 (0x0001)  
	bool                                               ReapplyHeight : 1;                                          // 0x04A5:2 (0x0001)  
	bool                                               ReapplyLandscapeLayers : 1;                                 // 0x04A5:3 (0x0001)  
	bool                                               ReapplyZOffset : 1;                                         // 0x04A5:4 (0x0001)  
	bool                                               ReapplyCollisionWithWorld : 1;                              // 0x04A5:5 (0x0001)  
	bool                                               ReapplyVertexColorMask : 1;                                 // 0x04A5:6 (0x0001)  
	bool                                               bEnableDensityScaling : 1;                                  // 0x04A5:7 (0x0001)  
	bool                                               bEnableDiscardOnLoad : 1;                                   // 0x04A6:0 (0x0001)  
	bool                                               bEnableCullDistanceScaling : 1;                             // 0x04A6:1 (0x0001)  
	unsigned char                                      UnknownData22_5[0x1];                                       // 0x04A7   (0x0001)  MISSED
	TArray<class URuntimeVirtualTexture*>              RuntimeVirtualTextures;                                     // 0x04A8   (0x0010)  
	int32_t                                            VirtualTextureCullMips;                                     // 0x04B8   (0x0004)  
	ERuntimeVirtualTextureMainPassType                 VirtualTextureRenderPassType;                               // 0x04BC   (0x0001)  
	unsigned char                                      UnknownData23_7[0x3];                                       // 0x04BD   (0x0003)  MISSED
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x04D8 (1240 bytes) (0x0004C0 - 0x0004D8) align 8 MaxSize: 0x04D8
class UFoliageType_Actor : public UFoliageType
{ 
public:
	class UClass*                                      ActorClass;                                                 // 0x04C0   (0x0008)  
	bool                                               bShouldAttachToBaseComponent;                               // 0x04C8   (0x0001)  
	bool                                               bStaticMeshOnly;                                            // 0x04C9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x04CA   (0x0006)  MISSED
	class UClass*                                      StaticMeshOnlyComponentClass;                               // 0x04D0   (0x0008)  
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x04F0 (1264 bytes) (0x0004C0 - 0x0004F0) align 8 MaxSize: 0x04F0
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
public:
	class UStaticMesh*                                 Mesh;                                                       // 0x04C0   (0x0008)  
	TArray<class UMaterialInterface*>                  OverrideMaterials;                                          // 0x04C8   (0x0010)  
	TArray<class UMaterialInterface*>                  NaniteOverrideMaterials;                                    // 0x04D8   (0x0010)  
	class UClass*                                      ComponentClass;                                             // 0x04E8   (0x0008)  
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x02F0 (752 bytes) (0x0002A0 - 0x0002F0) align 8 MaxSize: 0x02F0
class AInstancedFoliageActor : public AISMPartitionActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x02A0   (0x0050)  MISSED
};

/// Class /Script/Foliage.InteractiveFoliageComponent
/// Size: 0x0630 (1584 bytes) (0x000620 - 0x000630) align 16 MaxSize: 0x0630
class UInteractiveFoliageComponent : public UStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0620   (0x0010)  MISSED
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFoliageStatistics : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	// int32_t FoliageOverlappingSphereCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius); // [0x3ea2080] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms
	// void FoliageOverlappingBoxTransforms(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FBox Box, TArray<FTransform>& OutTransforms); // [0x3ea1ef0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	// int32_t FoliageOverlappingBoxCount(class UObject* WorldContextObject, class UStaticMesh* StaticMesh, FBox Box);          // [0x3ea1d90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/Foliage.GrassInstancedStaticMeshComponent
/// Size: 0x0900 (2304 bytes) (0x0008F8 - 0x000900) align 16 MaxSize: 0x0900
class UGrassInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x08F8   (0x0008)  MISSED
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0330 (816 bytes) (0x0002A0 - 0x000330) align 8 MaxSize: 0x0330
class AInteractiveFoliageActor : public AStaticMeshActor
{ 
public:
	class UCapsuleComponent*                           CapsuleComponent;                                           // 0x02A0   (0x0008)  
	FVector                                            TouchingActorEntryPosition;                                 // 0x02A8   (0x0018)  
	FVector                                            FoliageVelocity;                                            // 0x02C0   (0x0018)  
	FVector                                            FoliageForce;                                               // 0x02D8   (0x0018)  
	FVector                                            FoliagePosition;                                            // 0x02F0   (0x0018)  
	float                                              FoliageDamageImpulseScale;                                  // 0x0308   (0x0004)  
	float                                              FoliageTouchImpulseScale;                                   // 0x030C   (0x0004)  
	float                                              FoliageStiffness;                                           // 0x0310   (0x0004)  
	float                                              FoliageStiffnessQuadratic;                                  // 0x0314   (0x0004)  
	float                                              FoliageDamping;                                             // 0x0318   (0x0004)  
	float                                              MaxDamageImpulse;                                           // 0x031C   (0x0004)  
	float                                              MaxTouchImpulse;                                            // 0x0320   (0x0004)  
	float                                              MaxForce;                                                   // 0x0324   (0x0004)  
	float                                              Mass;                                                       // 0x0328   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x032C   (0x0004)  MISSED


	/// Functions
	// Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched
	// void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // [0x3ea1a00] Final|Native|Protected|HasOutParms 
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0360 (864 bytes) (0x0002C8 - 0x000360) align 8 MaxSize: 0x0360
class AProceduralFoliageBlockingVolume : public AVolume
{ 
public:
	class AProceduralFoliageVolume*                    ProceduralFoliageVolume;                                    // 0x02C8   (0x0008)  
	FFoliageDensityFalloff                             DensityFalloff;                                             // 0x02D0   (0x0090)  
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x00C8 (200 bytes) (0x0000A0 - 0x0000C8) align 8 MaxSize: 0x00C8
class UProceduralFoliageComponent : public UActorComponent
{ 
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x00A0   (0x0008)  
	float                                              TileOverlap;                                                // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class AVolume*                                     SpawningVolume;                                             // 0x00B0   (0x0008)  
	FGuid                                              ProceduralGuid;                                             // 0x00B8   (0x0010)  
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FFoliageTypeObject
{ 
	class UObject*                                     FoliageTypeObject;                                          // 0x0000   (0x0008)  
	class UFoliageType*                                TypeInstance;                                               // 0x0008   (0x0008)  
	bool                                               bIsAsset;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	class UClass*                                      Type;                                                       // 0x0018   (0x0008)  
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UProceduralFoliageSpawner : public UObject
{ 
public:
	int32_t                                            RandomSeed;                                                 // 0x0028   (0x0004)  
	float                                              TileSize;                                                   // 0x002C   (0x0004)  
	int32_t                                            NumUniqueTiles;                                             // 0x0030   (0x0004)  
	float                                              MinimumQuadTreeSize;                                        // 0x0034   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<FFoliageTypeObject>                         FoliageTypes;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
	// void Simulate(int32_t NumSteps);                                                                                         // [0x3ea2200] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FProceduralFoliageInstance
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0020)  
	FVector                                            Location;                                                   // 0x0020   (0x0018)  
	float                                              Age;                                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FVector                                            Normal;                                                     // 0x0040   (0x0018)  
	float                                              Scale;                                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	class UFoliageType*                                Type;                                                       // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0068   (0x0018)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align 8 MaxSize: 0x0170
class UProceduralFoliageTile : public UObject
{ 
public:
	class UProceduralFoliageSpawner*                   FoliageSpawner;                                             // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0xA0];                                      // 0x0030   (0x00A0)  MISSED
	TArray<FProceduralFoliageInstance>                 InstancesArray;                                             // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x90];                                      // 0x00E0   (0x0090)  MISSED
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x02D8 (728 bytes) (0x0002C8 - 0x0002D8) align 8 MaxSize: 0x02D8
class AProceduralFoliageVolume : public AVolume
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02C8   (0x0008)  MISSED
	class UProceduralFoliageComponent*                 ProceduralComponent;                                        // 0x02D0   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UFoliageInstancedStaticMeshComponent) == 0x0930); // 2352 bytes (0x0008F8 - 0x000930)
static_assert(sizeof(FFoliageVertexColorChannelMask) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FFoliageDensityFalloff) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(UFoliageType) == 0x04C0); // 1216 bytes (0x000028 - 0x0004C0)
static_assert(sizeof(UFoliageType_Actor) == 0x04D8); // 1240 bytes (0x0004C0 - 0x0004D8)
static_assert(sizeof(UFoliageType_InstancedStaticMesh) == 0x04F0); // 1264 bytes (0x0004C0 - 0x0004F0)
static_assert(sizeof(AInstancedFoliageActor) == 0x02F0); // 752 bytes (0x0002A0 - 0x0002F0)
static_assert(sizeof(UInteractiveFoliageComponent) == 0x0630); // 1584 bytes (0x000620 - 0x000630)
static_assert(sizeof(UFoliageStatistics) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGrassInstancedStaticMeshComponent) == 0x0900); // 2304 bytes (0x0008F8 - 0x000900)
static_assert(sizeof(AInteractiveFoliageActor) == 0x0330); // 816 bytes (0x0002A0 - 0x000330)
static_assert(sizeof(AProceduralFoliageBlockingVolume) == 0x0360); // 864 bytes (0x0002C8 - 0x000360)
static_assert(sizeof(UProceduralFoliageComponent) == 0x00C8); // 200 bytes (0x0000A0 - 0x0000C8)
static_assert(sizeof(FFoliageTypeObject) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UProceduralFoliageSpawner) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FProceduralFoliageInstance) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(UProceduralFoliageTile) == 0x0170); // 368 bytes (0x000028 - 0x000170)
static_assert(sizeof(AProceduralFoliageVolume) == 0x02D8); // 728 bytes (0x0002C8 - 0x0002D8)
static_assert(offsetof(UFoliageInstancedStaticMeshComponent, GenerationGuid) == 0x091C);
static_assert(offsetof(FFoliageDensityFalloff, FalloffCurve) == 0x0008);
static_assert(offsetof(UFoliageType, UpdateGuid) == 0x0028);
static_assert(offsetof(UFoliageType, Scaling) == 0x004C);
static_assert(offsetof(UFoliageType, ScaleX) == 0x0050);
static_assert(offsetof(UFoliageType, ScaleY) == 0x0058);
static_assert(offsetof(UFoliageType, ScaleZ) == 0x0060);
static_assert(offsetof(UFoliageType, VertexColorMaskByChannel) == 0x0068);
static_assert(offsetof(UFoliageType, VertexColorMask) == 0x0098);
static_assert(offsetof(UFoliageType, ZOffset) == 0x00A4);
static_assert(offsetof(UFoliageType, GroundSlopeAngle) == 0x00BC);
static_assert(offsetof(UFoliageType, Height) == 0x00C4);
static_assert(offsetof(UFoliageType, LandscapeLayers) == 0x00D0);
static_assert(offsetof(UFoliageType, ExclusionLandscapeLayers) == 0x00E8);
static_assert(offsetof(UFoliageType, LandscapeLayer) == 0x00FC);
static_assert(offsetof(UFoliageType, CollisionScale) == 0x0108);
static_assert(offsetof(UFoliageType, MeshBounds) == 0x0128);
static_assert(offsetof(UFoliageType, LowBoundOriginRadius) == 0x0160);
static_assert(offsetof(UFoliageType, Mobility) == 0x0178);
static_assert(offsetof(UFoliageType, CullDistance) == 0x017C);
static_assert(offsetof(UFoliageType, LightmapType) == 0x0194);
static_assert(offsetof(UFoliageType, BodyInstance) == 0x01A8);
static_assert(offsetof(UFoliageType, CustomNavigableGeometry) == 0x0338);
static_assert(offsetof(UFoliageType, LightingChannels) == 0x0339);
static_assert(offsetof(UFoliageType, CustomDepthStencilWriteMask) == 0x0340);
static_assert(offsetof(UFoliageType, ProceduralScale) == 0x0380);
static_assert(offsetof(UFoliageType, ScaleCurve) == 0x0388);
static_assert(offsetof(UFoliageType, DensityFalloff) == 0x0410);
static_assert(offsetof(UFoliageType, RuntimeVirtualTextures) == 0x04A8);
static_assert(offsetof(UFoliageType, VirtualTextureRenderPassType) == 0x04BC);
static_assert(offsetof(UFoliageType_Actor, ActorClass) == 0x04C0);
static_assert(offsetof(UFoliageType_Actor, StaticMeshOnlyComponentClass) == 0x04D0);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, Mesh) == 0x04C0);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, OverrideMaterials) == 0x04C8);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, NaniteOverrideMaterials) == 0x04D8);
static_assert(offsetof(UFoliageType_InstancedStaticMesh, ComponentClass) == 0x04E8);
static_assert(offsetof(AInteractiveFoliageActor, CapsuleComponent) == 0x02A0);
static_assert(offsetof(AInteractiveFoliageActor, TouchingActorEntryPosition) == 0x02A8);
static_assert(offsetof(AInteractiveFoliageActor, FoliageVelocity) == 0x02C0);
static_assert(offsetof(AInteractiveFoliageActor, FoliageForce) == 0x02D8);
static_assert(offsetof(AInteractiveFoliageActor, FoliagePosition) == 0x02F0);
static_assert(offsetof(AProceduralFoliageBlockingVolume, ProceduralFoliageVolume) == 0x02C8);
static_assert(offsetof(AProceduralFoliageBlockingVolume, DensityFalloff) == 0x02D0);
static_assert(offsetof(UProceduralFoliageComponent, FoliageSpawner) == 0x00A0);
static_assert(offsetof(UProceduralFoliageComponent, SpawningVolume) == 0x00B0);
static_assert(offsetof(UProceduralFoliageComponent, ProceduralGuid) == 0x00B8);
static_assert(offsetof(FFoliageTypeObject, FoliageTypeObject) == 0x0000);
static_assert(offsetof(FFoliageTypeObject, TypeInstance) == 0x0008);
static_assert(offsetof(FFoliageTypeObject, Type) == 0x0018);
static_assert(offsetof(UProceduralFoliageSpawner, FoliageTypes) == 0x0040);
static_assert(offsetof(FProceduralFoliageInstance, Rotation) == 0x0000);
static_assert(offsetof(FProceduralFoliageInstance, Location) == 0x0020);
static_assert(offsetof(FProceduralFoliageInstance, Normal) == 0x0040);
static_assert(offsetof(FProceduralFoliageInstance, Type) == 0x0060);
static_assert(offsetof(UProceduralFoliageTile, FoliageSpawner) == 0x0028);
static_assert(offsetof(UProceduralFoliageTile, InstancesArray) == 0x00D0);
static_assert(offsetof(AProceduralFoliageVolume, ProceduralComponent) == 0x02D0);
