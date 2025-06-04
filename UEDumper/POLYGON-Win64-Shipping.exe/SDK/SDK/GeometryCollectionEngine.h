
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: Chaos
/// dependency: ChaosSolverEngine
/// dependency: CoreUObject
/// dependency: DataflowEngine
/// dependency: Engine
/// dependency: FieldSystemEngine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
/// Size: 0x01 (1 bytes)
enum class ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active                                           = 0,
	ECollectionAttributeEnum__Chaos_DynamicState                                     = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup                                   = 2,
	ECollectionAttributeEnum__Chaos_Max                                              = 3
};

/// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
/// Size: 0x01 (1 bytes)
enum class ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform                                           = 0,
	ECollectionGroupEnum__Chaos_Max                                                  = 1
};

/// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone                                               = 0,
	EChaosBreakingSortMethod__SortByHighestMass                                      = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosBreakingSortMethod__SortByNearestFirst                                     = 3,
	EChaosBreakingSortMethod__Count                                                  = 4
};

/// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone                                              = 0,
	EChaosCollisionSortMethod__SortByHighestMass                                     = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed                                    = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse                                  = 3,
	EChaosCollisionSortMethod__SortByNearestFirst                                    = 4,
	EChaosCollisionSortMethod__Count                                                 = 5
};

/// Enum /Script/GeometryCollectionEngine.EChaosRemovalSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosRemovalSortMethod : uint8_t
{
	EChaosRemovalSortMethod__SortNone                                                = 0,
	EChaosRemovalSortMethod__SortByHighestMass                                       = 1,
	EChaosRemovalSortMethod__SortByNearestFirst                                      = 2,
	EChaosRemovalSortMethod__Count                                                   = 3
};

/// Enum /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
/// Size: 0x01 (1 bytes)
enum class EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone                                               = 0,
	EChaosTrailingSortMethod__SortByHighestMass                                      = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosTrailingSortMethod__SortByNearestFirst                                     = 3,
	EChaosTrailingSortMethod__Count                                                  = 4
};

/// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
/// Size: 0x01 (1 bytes)
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone                          = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision                 = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected                      = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection               = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll                           = 4
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FChaosCollisionEventRequestSettings
{ 
	int32_t                                            MaxNumberResults;                                           // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinImpulse;                                                 // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosCollisionSortMethod                          SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FChaosBreakingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinRadius;                                                  // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinMass;                                                    // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosBreakingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FChaosTrailingEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MinSpeed;                                                   // 0x0008   (0x0004)  
	float                                              MinAngularSpeed;                                            // 0x000C   (0x0004)  
	float                                              MaxDistance;                                                // 0x0010   (0x0004)  
	EChaosTrailingSortMethod                           SortMethod;                                                 // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventRequestSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FChaosRemovalEventRequestSettings
{ 
	int32_t                                            MaxNumberOfResults;                                         // 0x0000   (0x0004)  
	float                                              MinMass;                                                    // 0x0004   (0x0004)  
	float                                              MaxDistance;                                                // 0x0008   (0x0004)  
	EChaosRemovalSortMethod                            SortMethod;                                                 // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
/// Size: 0x0550 (1360 bytes) (0x0002A0 - 0x000550) align 16 MaxSize: 0x0550
class UChaosDestructionListener : public USceneComponent
{ 
public:
	bool                                               bIsCollisionEventListeningEnabled : 1;                      // 0x02A0:0 (0x0001)  
	bool                                               bIsBreakingEventListeningEnabled : 1;                       // 0x02A0:1 (0x0001)  
	bool                                               bIsTrailingEventListeningEnabled : 1;                       // 0x02A0:2 (0x0001)  
	bool                                               bIsRemovalEventListeningEnabled : 1;                        // 0x02A0:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x02A1   (0x0003)  MISSED
	FChaosCollisionEventRequestSettings                CollisionEventRequestSettings;                              // 0x02A4   (0x0018)  
	FChaosBreakingEventRequestSettings                 BreakingEventRequestSettings;                               // 0x02BC   (0x0018)  
	FChaosTrailingEventRequestSettings                 TrailingEventRequestSettings;                               // 0x02D4   (0x0018)  
	FChaosRemovalEventRequestSettings                  RemovalEventRequestSettings;                                // 0x02EC   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02FC   (0x0004)  MISSED
	SDK_UNDEFINED(80,1193) /* TSet<AChaosSolverActor*> */ __um(ChaosSolverActors);                                 // 0x0300   (0x0050)  
	SDK_UNDEFINED(80,1194) /* TSet<AGeometryCollectionActor*> */ __um(GeometryCollectionActors);                   // 0x0350   (0x0050)  
	SDK_UNDEFINED(16,1195) /* FMulticastInlineDelegate */ __um(OnCollisionEvents);                                 // 0x03A0   (0x0010)  
	SDK_UNDEFINED(16,1196) /* FMulticastInlineDelegate */ __um(OnBreakingEvents);                                  // 0x03B0   (0x0010)  
	SDK_UNDEFINED(16,1197) /* FMulticastInlineDelegate */ __um(OnTrailingEvents);                                  // 0x03C0   (0x0010)  
	SDK_UNDEFINED(16,1198) /* FMulticastInlineDelegate */ __um(OnRemovalEvents);                                   // 0x03D0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x170];                                     // 0x03E0   (0x0170)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	// void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);           // [0x403b110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
	// void SortRemovalEvents(TArray<FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod);               // [0x403b000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	// void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);       // [0x403aef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	// void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);           // [0x403ade0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	// void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings);                                    // [0x403ad20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	// void SetTrailingEventEnabled(bool bIsEnabled);                                                                           // [0x403ac80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
	// void SetRemovalEventRequestSettings(FChaosRemovalEventRequestSettings& InSettings);                                      // [0x403a8c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
	// void SetRemovalEventEnabled(bool bIsEnabled);                                                                            // [0x403a820] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	// void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings);                                  // [0x403a320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	// void SetCollisionEventEnabled(bool bIsEnabled);                                                                          // [0x403a280] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	// void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings);                                    // [0x403a1c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	// void SetBreakingEventEnabled(bool bIsEnabled);                                                                           // [0x403a120] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	// void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                             // [0x4039bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	// void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                  // [0x23f7d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	// bool IsEventListening();                                                                                                 // [0x40398a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	// void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                                // [0x4038690] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	// void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                     // [0x23f7d30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class AGeometryCollectionActor : public AActor
{ 
public:
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                                // 0x0290   (0x0008)  
	class UGeometryCollectionDebugDrawComponent*       GeometryCollectionDebugDrawComponent;                       // 0x0298   (0x0008)  


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	// bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);                                                      // [0x40398d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionCache
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UGeometryCollectionCache : public UObject
{ 
public:
	FRecordedTransformTrack                            RecordedData;                                               // 0x0028   (0x0010)  
	class UGeometryCollection*                         SupportedCollection;                                        // 0x0038   (0x0008)  
	FGuid                                              CompatibleCollectionState;                                  // 0x0040   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDamagePropagationData
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGeometryCollectionDamagePropagationData
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              BreakDamagePropagationFactor;                               // 0x0004   (0x0004)  
	float                                              ShockDamagePropagationFactor;                               // 0x0008   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeomComponentCacheParameters
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FGeomComponentCacheParameters
{ 
	EGeometryCollectionCacheType                       CacheMode;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UGeometryCollectionCache*                    TargetCache;                                                // 0x0008   (0x0008)  
	float                                              ReverseCacheBeginTime;                                      // 0x0010   (0x0004)  
	bool                                               SaveCollisionData;                                          // 0x0014   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	int32_t                                            CollisionDataSizeMax;                                       // 0x0018   (0x0004)  
	bool                                               DoCollisionDataSpatialHash;                                 // 0x001C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              CollisionDataSpatialHashRadius;                             // 0x0020   (0x0004)  
	int32_t                                            MaxCollisionPerCell;                                        // 0x0024   (0x0004)  
	bool                                               SaveBreakingData;                                           // 0x0028   (0x0001)  
	bool                                               DoGenerateBreakingData;                                     // 0x0029   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x002A   (0x0002)  MISSED
	int32_t                                            BreakingDataSizeMax;                                        // 0x002C   (0x0004)  
	bool                                               DoBreakingDataSpatialHash;                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              BreakingDataSpatialHashRadius;                              // 0x0034   (0x0004)  
	int32_t                                            MaxBreakingPerCell;                                         // 0x0038   (0x0004)  
	bool                                               SaveTrailingData;                                           // 0x003C   (0x0001)  
	bool                                               DoGenerateTrailingData;                                     // 0x003D   (0x0001)  
	unsigned char                                      UnknownData05_6[0x2];                                       // 0x003E   (0x0002)  MISSED
	int32_t                                            TrailingDataSizeMax;                                        // 0x0040   (0x0004)  
	float                                              TrailingMinSpeedThreshold;                                  // 0x0044   (0x0004)  
	float                                              TrailingMinVolumeThreshold;                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData06_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGeometryCollectionRepData
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
/// Size: 0x0B40 (2880 bytes) (0x0005A0 - 0x000B40) align 16 MaxSize: 0x0B40
class UGeometryCollectionComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x05A0   (0x0008)  MISSED
	class AChaosSolverActor*                           ChaosSolverActor;                                           // 0x05A8   (0x0008)  
	unsigned char                                      UnknownData01_6[0xE0];                                      // 0x05B0   (0x00E0)  MISSED
	class UGeometryCollection*                         RestCollection;                                             // 0x0690   (0x0008)  
	TArray<class AFieldSystemActor*>                   InitializationFields;                                       // 0x0698   (0x0010)  
	bool                                               Simulating;                                                 // 0x06A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x06A9   (0x0001)  MISSED
	EObjectStateTypeEnum                               ObjectType;                                                 // 0x06AA   (0x0001)  
	bool                                               bForceMotionBlur;                                           // 0x06AB   (0x0001)  
	bool                                               EnableClustering;                                           // 0x06AC   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x06AD   (0x0003)  MISSED
	int32_t                                            ClusterGroupIndex;                                          // 0x06B0   (0x0004)  
	int32_t                                            MaxClusterLevel;                                            // 0x06B4   (0x0004)  
	TArray<float>                                      DamageThreshold;                                            // 0x06B8   (0x0010)  
	bool                                               bUseSizeSpecificDamageThreshold;                            // 0x06C8   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x06C9   (0x0003)  MISSED
	FGeometryCollectionDamagePropagationData           DamagePropagationData;                                      // 0x06CC   (0x000C)  
	bool                                               bEnableDamageFromCollision;                                 // 0x06D8   (0x0001)  
	bool                                               bAllowRemovalOnSleep;                                       // 0x06D9   (0x0001)  
	bool                                               bAllowRemovalOnBreak;                                       // 0x06DA   (0x0001)  
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                      // 0x06DB   (0x0001)  
	int32_t                                            CollisionGroup;                                             // 0x06DC   (0x0004)  
	float                                              CollisionSampleFraction;                                    // 0x06E0   (0x0004)  
	float                                              LinearEtherDrag;                                            // 0x06E4   (0x0004)  
	float                                              AngularEtherDrag;                                           // 0x06E8   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x06EC   (0x0004)  MISSED
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                           // 0x06F0   (0x0008)  
	EInitialVelocityTypeEnum                           InitialVelocityType;                                        // 0x06F8   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x06F9   (0x0007)  MISSED
	FVector                                            InitialLinearVelocity;                                      // 0x0700   (0x0018)  
	FVector                                            InitialAngularVelocity;                                     // 0x0718   (0x0018)  
	class UPhysicalMaterial*                           PhysicalMaterialOverride;                                   // 0x0730   (0x0008)  
	FGeomComponentCacheParameters                      CacheParameters;                                            // 0x0738   (0x0050)  
	TArray<FTransform>                                 RestTransforms;                                             // 0x0788   (0x0010)  
	SDK_UNDEFINED(16,1199) /* FMulticastInlineDelegate */ __um(NotifyGeometryCollectionPhysicsStateChange);        // 0x0798   (0x0010)  
	SDK_UNDEFINED(16,1200) /* FMulticastInlineDelegate */ __um(NotifyGeometryCollectionPhysicsLoadingStateChange); // 0x07A8   (0x0010)  
	unsigned char                                      UnknownData07_6[0x18];                                      // 0x07B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,1201) /* FMulticastInlineDelegate */ __um(OnChaosBreakEvent);                                 // 0x07D0   (0x0010)  
	SDK_UNDEFINED(16,1202) /* FMulticastInlineDelegate */ __um(OnChaosRemovalEvent);                               // 0x07E0   (0x0010)  
	SDK_UNDEFINED(16,1203) /* FMulticastInlineDelegate */ __um(OnChaosCrumblingEvent);                             // 0x07F0   (0x0010)  
	float                                              DesiredCacheTime;                                           // 0x0800   (0x0004)  
	bool                                               CachePlayback;                                              // 0x0804   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x0805   (0x0003)  MISSED
	SDK_UNDEFINED(16,1204) /* FMulticastInlineDelegate */ __um(OnChaosPhysicsCollision);                           // 0x0808   (0x0010)  
	bool                                               bNotifyBreaks;                                              // 0x0818   (0x0001)  
	bool                                               bNotifyCollisions;                                          // 0x0819   (0x0001)  
	bool                                               bNotifyTrailing;                                            // 0x081A   (0x0001)  
	bool                                               bNotifyRemovals;                                            // 0x081B   (0x0001)  
	bool                                               bNotifyCrumblings;                                          // 0x081C   (0x0001)  
	bool                                               bCrumblingEventIncludesChildren;                            // 0x081D   (0x0001)  
	bool                                               bStoreVelocities;                                           // 0x081E   (0x0001)  
	bool                                               bShowBoneColors;                                            // 0x081F   (0x0001)  
	bool                                               bUseRootProxyForNavigation;                                 // 0x0820   (0x0001)  
	bool                                               bUpdateNavigationInTick;                                    // 0x0821   (0x0001)  
	unsigned char                                      UnknownData09_6[0x6];                                       // 0x0822   (0x0006)  MISSED
	class AGeometryCollectionISMPoolActor*             ISMPool;                                                    // 0x0828   (0x0008)  
	unsigned char                                      UnknownData10_6[0x8];                                       // 0x0830   (0x0008)  MISSED
	bool                                               bEnableReplication;                                         // 0x0838   (0x0001)  
	bool                                               bEnableAbandonAfterLevel;                                   // 0x0839   (0x0001)  
	unsigned char                                      UnknownData11_6[0x2];                                       // 0x083A   (0x0002)  MISSED
	int32_t                                            ReplicationAbandonClusterLevel;                             // 0x083C   (0x0004)  
	int32_t                                            ReplicationAbandonAfterLevel;                               // 0x0840   (0x0004)  
	unsigned char                                      UnknownData12_6[0x4];                                       // 0x0844   (0x0004)  MISSED
	FGeometryCollectionRepData                         RepData;                                                    // 0x0848   (0x0028)  
	unsigned char                                      UnknownData13_6[0x290];                                     // 0x0870   (0x0290)  MISSED
	class UBodySetup*                                  DummyBodySetup;                                             // 0x0B00   (0x0008)  
	unsigned char                                      UnknownData14_6[0x8];                                       // 0x0B08   (0x0008)  MISSED
	TArray<class UInstancedStaticMeshComponent*>       EmbeddedGeometryComponents;                                 // 0x0B10   (0x0010)  
	unsigned char                                      UnknownData15_7[0x20];                                      // 0x0B20   (0x0020)  MISSED


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
	// void SetRestCollection(class UGeometryCollection* RestCollectionIn);                                                     // [0x403a970] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
	// void SetNotifyRemovals(bool bNewNotifyRemovals);                                                                         // [0x403a710] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
	// void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);                            // [0x403a590] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	// void SetNotifyBreaks(bool bNewNotifyBreaks);                                                                             // [0x403a480] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
	// void SetEnableDamageFromCollision(bool bValue);                                                                          // [0x403a3e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
	// void SetAnchoredByTransformedBox(FBox Box, FTransform Transform, bool bAnchored, int32_t MaxLevel);                      // [0x4039ef0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
	// void SetAnchoredByIndex(int32_t Index, bool bAnchored);                                                                  // [0x4039e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
	// void SetAnchoredByBox(FBox WorldSpaceBox, bool bAnchored, int32_t MaxLevel);                                             // [0x4039c70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
	// void RemoveAllAnchors();                                                                                                 // [0x4039b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                                 // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
	// int32_t GetRootIndex();                                                                                                  // [0x4039870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
	// void GetMassAndExtents(int32_t ItemIndex, float& OutMass, FBox& OutExtents);                                             // [0x4039730] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
	// FBox GetLocalBounds();                                                                                                   // [0x40396e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
	// int32_t GetInitialLevel(int32_t ItemIndex);                                                                              // [0x4039640] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
	// FString GetDebugInfo();                                                                                                  // [0x40395c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
	// void CrumbleCluster(int32_t ItemIndex);                                                                                  // [0x40394d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
	// void CrumbleActiveClusters();                                                                                            // [0x40394a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x4039040] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
	// void ApplyLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                                    // [0x4038f50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	// void ApplyKinematicField(float Radius, FVector position);                                                                // [0x4038db0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
	// void ApplyInternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x4038bc0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
	// void ApplyExternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x40389d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
	// void ApplyBreakingLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                            // [0x40388e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
	// void ApplyBreakingAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                          // [0x40388e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
	// void ApplyAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                                  // [0x40387f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FGeometryCollectionDebugDrawWarningMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{ 
	int32_t                                            ID;                                                         // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class AChaosSolverActor*                           Solver;                                                     // 0x0008   (0x0008)  
	class AGeometryCollectionActor*                    GeometryCollection;                                         // 0x0010   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
/// Size: 0x0350 (848 bytes) (0x000290 - 0x000350) align 8 MaxSize: 0x0350
class AGeometryCollectionDebugDrawActor : public AActor
{ 
public:
	FGeometryCollectionDebugDrawWarningMessage         WarningMessage;                                             // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0291   (0x0007)  MISSED
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                          // 0x0298   (0x0018)  
	bool                                               bDebugDrawWholeCollection;                                  // 0x02B0   (0x0001)  
	bool                                               bDebugDrawHierarchy;                                        // 0x02B1   (0x0001)  
	bool                                               bDebugDrawClustering;                                       // 0x02B2   (0x0001)  
	EGeometryCollectionDebugDrawActorHideGeometry      HideGeometry;                                               // 0x02B3   (0x0001)  
	bool                                               bShowRigidBodyId;                                           // 0x02B4   (0x0001)  
	bool                                               bShowRigidBodyCollision;                                    // 0x02B5   (0x0001)  
	bool                                               bCollisionAtOrigin;                                         // 0x02B6   (0x0001)  
	bool                                               bShowRigidBodyTransform;                                    // 0x02B7   (0x0001)  
	bool                                               bShowRigidBodyInertia;                                      // 0x02B8   (0x0001)  
	bool                                               bShowRigidBodyVelocity;                                     // 0x02B9   (0x0001)  
	bool                                               bShowRigidBodyForce;                                        // 0x02BA   (0x0001)  
	bool                                               bShowRigidBodyInfos;                                        // 0x02BB   (0x0001)  
	bool                                               bShowTransformIndex;                                        // 0x02BC   (0x0001)  
	bool                                               bShowTransform;                                             // 0x02BD   (0x0001)  
	bool                                               bShowParent;                                                // 0x02BE   (0x0001)  
	bool                                               bShowLevel;                                                 // 0x02BF   (0x0001)  
	bool                                               bShowConnectivityEdges;                                     // 0x02C0   (0x0001)  
	bool                                               bShowGeometryIndex;                                         // 0x02C1   (0x0001)  
	bool                                               bShowGeometryTransform;                                     // 0x02C2   (0x0001)  
	bool                                               bShowBoundingBox;                                           // 0x02C3   (0x0001)  
	bool                                               bShowFaces;                                                 // 0x02C4   (0x0001)  
	bool                                               bShowFaceIndices;                                           // 0x02C5   (0x0001)  
	bool                                               bShowFaceNormals;                                           // 0x02C6   (0x0001)  
	bool                                               bShowSingleFace;                                            // 0x02C7   (0x0001)  
	int32_t                                            SingleFaceIndex;                                            // 0x02C8   (0x0004)  
	bool                                               bShowVertices;                                              // 0x02CC   (0x0001)  
	bool                                               bShowVertexIndices;                                         // 0x02CD   (0x0001)  
	bool                                               bShowVertexNormals;                                         // 0x02CE   (0x0001)  
	bool                                               bUseActiveVisualization;                                    // 0x02CF   (0x0001)  
	float                                              PointThickness;                                             // 0x02D0   (0x0004)  
	float                                              LineThickness;                                              // 0x02D4   (0x0004)  
	bool                                               bTextShadow;                                                // 0x02D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02D9   (0x0003)  MISSED
	float                                              TextScale;                                                  // 0x02DC   (0x0004)  
	float                                              NormalScale;                                                // 0x02E0   (0x0004)  
	float                                              AxisScale;                                                  // 0x02E4   (0x0004)  
	float                                              ArrowScale;                                                 // 0x02E8   (0x0004)  
	FColor                                             RigidBodyIdColor;                                           // 0x02EC   (0x0004)  
	float                                              RigidBodyTransformScale;                                    // 0x02F0   (0x0004)  
	FColor                                             RigidBodyCollisionColor;                                    // 0x02F4   (0x0004)  
	FColor                                             RigidBodyInertiaColor;                                      // 0x02F8   (0x0004)  
	FColor                                             RigidBodyVelocityColor;                                     // 0x02FC   (0x0004)  
	FColor                                             RigidBodyForceColor;                                        // 0x0300   (0x0004)  
	FColor                                             RigidBodyInfoColor;                                         // 0x0304   (0x0004)  
	FColor                                             TransformIndexColor;                                        // 0x0308   (0x0004)  
	float                                              TransformScale;                                             // 0x030C   (0x0004)  
	FColor                                             LevelColor;                                                 // 0x0310   (0x0004)  
	FColor                                             ParentColor;                                                // 0x0314   (0x0004)  
	float                                              ConnectivityEdgeThickness;                                  // 0x0318   (0x0004)  
	FColor                                             GeometryIndexColor;                                         // 0x031C   (0x0004)  
	float                                              GeometryTransformScale;                                     // 0x0320   (0x0004)  
	FColor                                             BoundingBoxColor;                                           // 0x0324   (0x0004)  
	FColor                                             FaceColor;                                                  // 0x0328   (0x0004)  
	FColor                                             FaceIndexColor;                                             // 0x032C   (0x0004)  
	FColor                                             FaceNormalColor;                                            // 0x0330   (0x0004)  
	FColor                                             SingleFaceColor;                                            // 0x0334   (0x0004)  
	FColor                                             VertexColor;                                                // 0x0338   (0x0004)  
	FColor                                             VertexIndexColor;                                           // 0x033C   (0x0004)  
	FColor                                             VertexNormalColor;                                          // 0x0340   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0344   (0x0004)  MISSED
	class UBillboardComponent*                         SpriteComponent;                                            // 0x0348   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
/// Size: 0x00B8 (184 bytes) (0x0000A0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{ 
public:
	class AGeometryCollectionDebugDrawActor*           GeometryCollectionDebugDrawActor;                           // 0x00A0   (0x0008)  
	class AGeometryCollectionRenderLevelSetActor*      GeometryCollectionRenderLevelSetActor;                      // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00B0   (0x0008)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class AGeometryCollectionISMPoolActor : public AActor
{ 
public:
	class UGeometryCollectionISMPoolComponent*         ISMPoolComp;                                                // 0x0290   (0x0008)  
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolComponent
/// Size: 0x0360 (864 bytes) (0x0002A0 - 0x000360) align 16 MaxSize: 0x0360
class UGeometryCollectionISMPoolComponent : public USceneComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0xC0];                                      // 0x02A0   (0x00C0)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGeometryCollectionEmbeddedExemplar
{ 
	FSoftObjectPath                                    StaticMeshExemplar;                                         // 0x0000   (0x0020)  
	float                                              StartCullDistance;                                          // 0x0020   (0x0004)  
	float                                              EndCullDistance;                                            // 0x0024   (0x0004)  
	int32_t                                            InstanceCount;                                              // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGeometryCollectionAutoInstanceMesh
{ 
	FSoftObjectPath                                    StaticMesh;                                                 // 0x0000   (0x0020)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionLevelSetData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGeometryCollectionLevelSetData
{ 
	int32_t                                            MinLevelSetResolution;                                      // 0x0000   (0x0004)  
	int32_t                                            MaxLevelSetResolution;                                      // 0x0004   (0x0004)  
	int32_t                                            MinClusterLevelSetResolution;                               // 0x0008   (0x0004)  
	int32_t                                            MaxClusterLevelSetResolution;                               // 0x000C   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionParticleData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGeometryCollectionCollisionParticleData
{ 
	float                                              CollisionParticlesFraction;                                 // 0x0000   (0x0004)  
	int32_t                                            MaximumCollisionParticles;                                  // 0x0004   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionTypeData
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FGeometryCollectionCollisionTypeData
{ 
	ECollisionTypeEnum                                 CollisionType;                                              // 0x0000   (0x0001)  
	EImplicitTypeEnum                                  ImplicitType;                                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FGeometryCollectionLevelSetData                    LevelSet;                                                   // 0x0004   (0x0010)  
	FGeometryCollectionCollisionParticleData           CollisionParticles;                                         // 0x0014   (0x0008)  
	float                                              CollisionObjectReductionPercentage;                         // 0x001C   (0x0004)  
	float                                              CollisionMarginFraction;                                    // 0x0020   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGeometryCollectionSizeSpecificData
{ 
	float                                              MaxSize;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FGeometryCollectionCollisionTypeData>       CollisionShapes;                                            // 0x0008   (0x0010)  
	int32_t                                            DamageThreshold;                                            // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollection
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align 8 MaxSize: 0x0170
class UGeometryCollection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	bool                                               EnableClustering;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            ClusterGroupIndex;                                          // 0x0034   (0x0004)  
	int32_t                                            MaxClusterLevel;                                            // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<float>                                      DamageThreshold;                                            // 0x0040   (0x0010)  
	bool                                               bUseSizeSpecificDamageThreshold;                            // 0x0050   (0x0001)  
	bool                                               PerClusterOnlyDamageThreshold;                              // 0x0051   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0052   (0x0002)  MISSED
	FGeometryCollectionDamagePropagationData           DamagePropagationData;                                      // 0x0054   (0x000C)  
	EClusterConnectionTypeEnum                         ClusterConnectionType;                                      // 0x0060   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              ConnectionGraphBoundsFilteringMargin;                       // 0x0064   (0x0004)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x0068   (0x0010)  
	TArray<FGeometryCollectionEmbeddedExemplar>        EmbeddedGeometryExemplar;                                   // 0x0078   (0x0010)  
	bool                                               bUseFullPrecisionUVs;                                       // 0x0088   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0089   (0x0007)  MISSED
	TArray<FGeometryCollectionAutoInstanceMesh>        AutoInstanceMeshes;                                         // 0x0090   (0x0010)  
	FSoftObjectPath                                    RootProxy;                                                  // 0x00A0   (0x0020)  
	bool                                               bStripOnCook;                                               // 0x00C0   (0x0001)  
	bool                                               EnableNanite;                                               // 0x00C1   (0x0001)  
	bool                                               bMassAsDensity;                                             // 0x00C2   (0x0001)  
	unsigned char                                      UnknownData06_6[0x1];                                       // 0x00C3   (0x0001)  MISSED
	float                                              Mass;                                                       // 0x00C4   (0x0004)  
	float                                              MinimumMassClamp;                                           // 0x00C8   (0x0004)  
	bool                                               bImportCollisionFromSource;                                 // 0x00CC   (0x0001)  
	bool                                               bRemoveOnMaxSleep;                                          // 0x00CD   (0x0001)  
	unsigned char                                      UnknownData07_6[0x2];                                       // 0x00CE   (0x0002)  MISSED
	FVector2D                                          MaximumSleepTime;                                           // 0x00D0   (0x0010)  
	FVector2D                                          RemovalDuration;                                            // 0x00E0   (0x0010)  
	bool                                               bSlowMovingAsSleeping;                                      // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData08_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              SlowMovingVelocityThreshold;                                // 0x00F4   (0x0004)  
	TArray<FGeometryCollectionSizeSpecificData>        SizeSpecificData;                                           // 0x00F8   (0x0010)  
	bool                                               EnableRemovePiecesOnFracture;                               // 0x0108   (0x0001)  
	unsigned char                                      UnknownData09_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	TArray<class UMaterialInterface*>                  RemoveOnFractureMaterials;                                  // 0x0110   (0x0010)  
	class UDataflow*                                   DataflowAsset;                                              // 0x0120   (0x0008)  
	FString                                            DataflowTerminal;                                           // 0x0128   (0x0010)  
	FGuid                                              PersistentGuid;                                             // 0x0138   (0x0010)  
	FGuid                                              StateGuid;                                                  // 0x0148   (0x0010)  
	int32_t                                            BoneSelectedMaterialIndex;                                  // 0x0158   (0x0004)  
	unsigned char                                      UnknownData10_7[0x14];                                      // 0x015C   (0x0014)  MISSED
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
/// Size: 0x0380 (896 bytes) (0x000290 - 0x000380) align 16 MaxSize: 0x0380
class AGeometryCollectionRenderLevelSetActor : public AActor
{ 
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                        // 0x0290   (0x0008)  
	class UMaterial*                                   RayMarchMaterial;                                           // 0x0298   (0x0008)  
	float                                              SurfaceTolerance;                                           // 0x02A0   (0x0004)  
	float                                              Isovalue;                                                   // 0x02A4   (0x0004)  
	bool                                               Enabled;                                                    // 0x02A8   (0x0001)  
	bool                                               RenderVolumeBoundingBox;                                    // 0x02A9   (0x0001)  
	unsigned char                                      UnknownData00_7[0xD6];                                      // 0x02AA   (0x00D6)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FChaosBreakingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	float                                              Mass;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FChaosCollisionEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Normal;                                                     // 0x0018   (0x0018)  
	FVector                                            Velocity1;                                                  // 0x0030   (0x0018)  
	FVector                                            Velocity2;                                                  // 0x0048   (0x0018)  
	float                                              Mass1;                                                      // 0x0060   (0x0004)  
	float                                              Mass2;                                                      // 0x0064   (0x0004)  
	FVector                                            Impulse;                                                    // 0x0068   (0x0018)  
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FChaosRemovalEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	float                                              Mass;                                                       // 0x0018   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x001C   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FChaosTrailingEventData
{ 
	FVector                                            Location;                                                   // 0x0000   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0018   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0030   (0x0018)  
	float                                              Mass;                                                       // 0x0048   (0x0004)  
	int32_t                                            ParticleIndex;                                              // 0x004C   (0x0004)  
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSource
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FGeometryCollectionSource
{ 
	FSoftObjectPath                                    SourceGeometryObject;                                       // 0x0000   (0x0020)  
	FTransform                                         LocalTransform;                                             // 0x0020   (0x0060)  
	TArray<class UMaterialInterface*>                  SourceMaterial;                                             // 0x0080   (0x0010)  
	bool                                               bAddInternalMaterials;                                      // 0x0090   (0x0001)  
	bool                                               bSplitComponents;                                           // 0x0091   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x0092   (0x000E)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FChaosCollisionEventRequestSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FChaosBreakingEventRequestSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FChaosTrailingEventRequestSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FChaosRemovalEventRequestSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UChaosDestructionListener) == 0x0550); // 1360 bytes (0x0002A0 - 0x000550)
static_assert(sizeof(AGeometryCollectionActor) == 0x02A0); // 672 bytes (0x000290 - 0x0002A0)
static_assert(sizeof(UGeometryCollectionCache) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FGeometryCollectionDamagePropagationData) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FGeomComponentCacheParameters) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGeometryCollectionRepData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UGeometryCollectionComponent) == 0x0B40); // 2880 bytes (0x0005A0 - 0x000B40)
static_assert(sizeof(FGeometryCollectionDebugDrawWarningMessage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FGeometryCollectionDebugDrawActorSelectedRigidBody) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(AGeometryCollectionDebugDrawActor) == 0x0350); // 848 bytes (0x000290 - 0x000350)
static_assert(sizeof(UGeometryCollectionDebugDrawComponent) == 0x00B8); // 184 bytes (0x0000A0 - 0x0000B8)
static_assert(sizeof(AGeometryCollectionISMPoolActor) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UGeometryCollectionISMPoolComponent) == 0x0360); // 864 bytes (0x0002A0 - 0x000360)
static_assert(sizeof(FGeometryCollectionEmbeddedExemplar) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FGeometryCollectionAutoInstanceMesh) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FGeometryCollectionLevelSetData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGeometryCollectionCollisionParticleData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FGeometryCollectionCollisionTypeData) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FGeometryCollectionSizeSpecificData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGeometryCollection) == 0x0170); // 368 bytes (0x000028 - 0x000170)
static_assert(sizeof(AGeometryCollectionRenderLevelSetActor) == 0x0380); // 896 bytes (0x000290 - 0x000380)
static_assert(sizeof(FChaosBreakingEventData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FChaosCollisionEventData) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FChaosRemovalEventData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FChaosTrailingEventData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FGeometryCollectionSource) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(offsetof(FChaosCollisionEventRequestSettings, SortMethod) == 0x0014);
static_assert(offsetof(FChaosBreakingEventRequestSettings, SortMethod) == 0x0014);
static_assert(offsetof(FChaosTrailingEventRequestSettings, SortMethod) == 0x0014);
static_assert(offsetof(FChaosRemovalEventRequestSettings, SortMethod) == 0x000C);
static_assert(offsetof(UChaosDestructionListener, CollisionEventRequestSettings) == 0x02A4);
static_assert(offsetof(UChaosDestructionListener, BreakingEventRequestSettings) == 0x02BC);
static_assert(offsetof(UChaosDestructionListener, TrailingEventRequestSettings) == 0x02D4);
static_assert(offsetof(UChaosDestructionListener, RemovalEventRequestSettings) == 0x02EC);
static_assert(offsetof(AGeometryCollectionActor, GeometryCollectionComponent) == 0x0290);
static_assert(offsetof(AGeometryCollectionActor, GeometryCollectionDebugDrawComponent) == 0x0298);
static_assert(offsetof(UGeometryCollectionCache, RecordedData) == 0x0028);
static_assert(offsetof(UGeometryCollectionCache, SupportedCollection) == 0x0038);
static_assert(offsetof(UGeometryCollectionCache, CompatibleCollectionState) == 0x0040);
static_assert(offsetof(FGeomComponentCacheParameters, CacheMode) == 0x0000);
static_assert(offsetof(FGeomComponentCacheParameters, TargetCache) == 0x0008);
static_assert(offsetof(UGeometryCollectionComponent, ChaosSolverActor) == 0x05A8);
static_assert(offsetof(UGeometryCollectionComponent, RestCollection) == 0x0690);
static_assert(offsetof(UGeometryCollectionComponent, InitializationFields) == 0x0698);
static_assert(offsetof(UGeometryCollectionComponent, ObjectType) == 0x06AA);
static_assert(offsetof(UGeometryCollectionComponent, DamageThreshold) == 0x06B8);
static_assert(offsetof(UGeometryCollectionComponent, DamagePropagationData) == 0x06CC);
static_assert(offsetof(UGeometryCollectionComponent, ClusterConnectionType) == 0x06DB);
static_assert(offsetof(UGeometryCollectionComponent, PhysicalMaterial) == 0x06F0);
static_assert(offsetof(UGeometryCollectionComponent, InitialVelocityType) == 0x06F8);
static_assert(offsetof(UGeometryCollectionComponent, InitialLinearVelocity) == 0x0700);
static_assert(offsetof(UGeometryCollectionComponent, InitialAngularVelocity) == 0x0718);
static_assert(offsetof(UGeometryCollectionComponent, PhysicalMaterialOverride) == 0x0730);
static_assert(offsetof(UGeometryCollectionComponent, CacheParameters) == 0x0738);
static_assert(offsetof(UGeometryCollectionComponent, RestTransforms) == 0x0788);
static_assert(offsetof(UGeometryCollectionComponent, ISMPool) == 0x0828);
static_assert(offsetof(UGeometryCollectionComponent, RepData) == 0x0848);
static_assert(offsetof(UGeometryCollectionComponent, DummyBodySetup) == 0x0B00);
static_assert(offsetof(UGeometryCollectionComponent, EmbeddedGeometryComponents) == 0x0B10);
static_assert(offsetof(FGeometryCollectionDebugDrawActorSelectedRigidBody, Solver) == 0x0008);
static_assert(offsetof(FGeometryCollectionDebugDrawActorSelectedRigidBody, GeometryCollection) == 0x0010);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, WarningMessage) == 0x0290);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SelectedRigidBody) == 0x0298);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, HideGeometry) == 0x02B3);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyIdColor) == 0x02EC);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyCollisionColor) == 0x02F4);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyInertiaColor) == 0x02F8);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyVelocityColor) == 0x02FC);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyForceColor) == 0x0300);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, RigidBodyInfoColor) == 0x0304);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, TransformIndexColor) == 0x0308);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, LevelColor) == 0x0310);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, ParentColor) == 0x0314);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, GeometryIndexColor) == 0x031C);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, BoundingBoxColor) == 0x0324);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceColor) == 0x0328);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceIndexColor) == 0x032C);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, FaceNormalColor) == 0x0330);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SingleFaceColor) == 0x0334);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexColor) == 0x0338);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexIndexColor) == 0x033C);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, VertexNormalColor) == 0x0340);
static_assert(offsetof(AGeometryCollectionDebugDrawActor, SpriteComponent) == 0x0348);
static_assert(offsetof(UGeometryCollectionDebugDrawComponent, GeometryCollectionDebugDrawActor) == 0x00A0);
static_assert(offsetof(UGeometryCollectionDebugDrawComponent, GeometryCollectionRenderLevelSetActor) == 0x00A8);
static_assert(offsetof(AGeometryCollectionISMPoolActor, ISMPoolComp) == 0x0290);
static_assert(offsetof(FGeometryCollectionEmbeddedExemplar, StaticMeshExemplar) == 0x0000);
static_assert(offsetof(FGeometryCollectionAutoInstanceMesh, StaticMesh) == 0x0000);
static_assert(offsetof(FGeometryCollectionAutoInstanceMesh, Materials) == 0x0020);
static_assert(offsetof(FGeometryCollectionCollisionTypeData, CollisionType) == 0x0000);
static_assert(offsetof(FGeometryCollectionCollisionTypeData, ImplicitType) == 0x0001);
static_assert(offsetof(FGeometryCollectionCollisionTypeData, LevelSet) == 0x0004);
static_assert(offsetof(FGeometryCollectionCollisionTypeData, CollisionParticles) == 0x0014);
static_assert(offsetof(FGeometryCollectionSizeSpecificData, CollisionShapes) == 0x0008);
static_assert(offsetof(UGeometryCollection, DamageThreshold) == 0x0040);
static_assert(offsetof(UGeometryCollection, DamagePropagationData) == 0x0054);
static_assert(offsetof(UGeometryCollection, ClusterConnectionType) == 0x0060);
static_assert(offsetof(UGeometryCollection, Materials) == 0x0068);
static_assert(offsetof(UGeometryCollection, EmbeddedGeometryExemplar) == 0x0078);
static_assert(offsetof(UGeometryCollection, AutoInstanceMeshes) == 0x0090);
static_assert(offsetof(UGeometryCollection, RootProxy) == 0x00A0);
static_assert(offsetof(UGeometryCollection, MaximumSleepTime) == 0x00D0);
static_assert(offsetof(UGeometryCollection, RemovalDuration) == 0x00E0);
static_assert(offsetof(UGeometryCollection, SizeSpecificData) == 0x00F8);
static_assert(offsetof(UGeometryCollection, RemoveOnFractureMaterials) == 0x0110);
static_assert(offsetof(UGeometryCollection, DataflowAsset) == 0x0120);
static_assert(offsetof(UGeometryCollection, DataflowTerminal) == 0x0128);
static_assert(offsetof(UGeometryCollection, PersistentGuid) == 0x0138);
static_assert(offsetof(UGeometryCollection, StateGuid) == 0x0148);
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, TargetVolumeTexture) == 0x0290);
static_assert(offsetof(AGeometryCollectionRenderLevelSetActor, RayMarchMaterial) == 0x0298);
static_assert(offsetof(FChaosBreakingEventData, Location) == 0x0000);
static_assert(offsetof(FChaosBreakingEventData, Velocity) == 0x0018);
static_assert(offsetof(FChaosCollisionEventData, Location) == 0x0000);
static_assert(offsetof(FChaosCollisionEventData, Normal) == 0x0018);
static_assert(offsetof(FChaosCollisionEventData, Velocity1) == 0x0030);
static_assert(offsetof(FChaosCollisionEventData, Velocity2) == 0x0048);
static_assert(offsetof(FChaosCollisionEventData, Impulse) == 0x0068);
static_assert(offsetof(FChaosRemovalEventData, Location) == 0x0000);
static_assert(offsetof(FChaosTrailingEventData, Location) == 0x0000);
static_assert(offsetof(FChaosTrailingEventData, Velocity) == 0x0018);
static_assert(offsetof(FChaosTrailingEventData, AngularVelocity) == 0x0030);
static_assert(offsetof(FGeometryCollectionSource, SourceGeometryObject) == 0x0000);
static_assert(offsetof(FGeometryCollectionSource, LocalTransform) == 0x0020);
static_assert(offsetof(FGeometryCollectionSource, SourceMaterial) == 0x0080);
