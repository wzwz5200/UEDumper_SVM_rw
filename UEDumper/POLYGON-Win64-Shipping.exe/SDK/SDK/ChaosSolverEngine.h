
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
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
/// Size: 0x01 (1 bytes)
enum class EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit                                  = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation                          = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation     = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay      = 3,
	EClusterConnectionTypeEnum__Chaos_BoundsOverlapFilteredDelaunayTriangulation     = 4,
	EClusterConnectionTypeEnum__Chaos_None                                           = 5,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max                 = 6
};

/// Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class UChaosDebugDrawComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosEventListenerComponent
/// Size: 0x00A8 (168 bytes) (0x0000A0 - 0x0000A8) align 8 MaxSize: 0x00A8
class UChaosEventListenerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A0   (0x0008)  MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosHandlerSet
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FChaosHandlerSet
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	SDK_UNDEFINED(80,1139) /* TSet<UObject*> */        __um(ChaosHandlers);                                        // 0x0008   (0x0050)  
};

/// Struct /Script/ChaosSolverEngine.BreakEventCallbackWrapper
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FBreakEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/ChaosSolverEngine.RemovalEventCallbackWrapper
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FRemovalEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/ChaosSolverEngine.CrumblingEventCallbackWrapper
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FCrumblingEventCallbackWrapper
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
/// Size: 0x0308 (776 bytes) (0x0000A8 - 0x000308) align 8 MaxSize: 0x0308
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x110];                                     // 0x00A8   (0x0110)  MISSED
	TMap<class UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations;                                // 0x01B8   (0x0050)  
	TMap<class UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;                          // 0x0208   (0x0050)  
	TMap<class UPrimitiveComponent*, FRemovalEventCallbackWrapper> RemovalEventRegistrations;                      // 0x0258   (0x0050)  
	TMap<class UPrimitiveComponent*, FCrumblingEventCallbackWrapper> CrumblingEventRegistrations;                  // 0x02A8   (0x0050)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x02F8   (0x0010)  MISSED
};

/// Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UChaosNotifyHandlerInterface : public UInterface
{ 
public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
	// FHitResult ConvertPhysicsCollisionToHitResult(FChaosPhysicsCollisionInfo& PhysicsCollision);                             // [0x3fed890] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ChaosSolverEngine.ChaosSolver
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UChaosSolver : public UObject
{ 
public:
};

/// Struct /Script/ChaosSolverEngine.ChaosDebugSubstepControl
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FChaosDebugSubstepControl
{ 
	bool                                               bPause;                                                     // 0x0000   (0x0001)  
	bool                                               bSubstep;                                                   // 0x0001   (0x0001)  
	bool                                               bStep;                                                      // 0x0002   (0x0001)  
};

/// Class /Script/ChaosSolverEngine.ChaosSolverActor
/// Size: 0x0388 (904 bytes) (0x000290 - 0x000388) align 8 MaxSize: 0x0388
class AChaosSolverActor : public AActor
{ 
public:
	FChaosSolverConfiguration                          Properties;                                                 // 0x0290   (0x0068)  
	float                                              TimeStepMultiplier;                                         // 0x02F8   (0x0004)  
	int32_t                                            CollisionIterations;                                        // 0x02FC   (0x0004)  
	int32_t                                            PushOutIterations;                                          // 0x0300   (0x0004)  
	int32_t                                            PushOutPairIterations;                                      // 0x0304   (0x0004)  
	float                                              ClusterConnectionFactor;                                    // 0x0308   (0x0004)  
	EClusterConnectionTypeEnum                         ClusterUnionConnectionType;                                 // 0x030C   (0x0001)  
	bool                                               DoGenerateCollisionData;                                    // 0x030D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x030E   (0x0002)  MISSED
	FSolverCollisionFilterSettings                     CollisionFilterSettings;                                    // 0x0310   (0x0010)  
	bool                                               DoGenerateBreakingData;                                     // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0321   (0x0003)  MISSED
	FSolverBreakingFilterSettings                      BreakingFilterSettings;                                     // 0x0324   (0x0010)  
	bool                                               DoGenerateTrailingData;                                     // 0x0334   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0335   (0x0003)  MISSED
	FSolverTrailingFilterSettings                      TrailingFilterSettings;                                     // 0x0338   (0x0010)  
	float                                              MassScale;                                                  // 0x0348   (0x0004)  
	bool                                               bHasFloor;                                                  // 0x034C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x034D   (0x0003)  MISSED
	float                                              FloorHeight;                                                // 0x0350   (0x0004)  
	FChaosDebugSubstepControl                          ChaosDebugSubstepControl;                                   // 0x0354   (0x0003)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0357   (0x0001)  MISSED
	class UBillboardComponent*                         SpriteComponent;                                            // 0x0358   (0x0008)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x0360   (0x0018)  MISSED
	class UChaosGameplayEventDispatcher*               GameplayEventDispatcherComponent;                           // 0x0378   (0x0008)  
	unsigned char                                      UnknownData06_7[0x8];                                       // 0x0380   (0x0008)  MISSED


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	// void SetSolverActive(bool bActive);                                                                                      // [0x21d03e0] Native|Public|BlueprintCallable 
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	// void SetAsCurrentWorldSolver();                                                                                          // [0x3fedb30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosSolverEngine.ChaosSolverSettings
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UChaosSolverSettings : public UDeveloperSettings
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FSoftClassPath                                     DefaultChaosSolverActorClass;                               // 0x0040   (0x0020)  
};

/// Struct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FChaosPhysicsCollisionInfo
{ 
	class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)  
	class UPrimitiveComponent*                         OtherComponent;                                             // 0x0008   (0x0008)  
	FVector                                            Location;                                                   // 0x0010   (0x0018)  
	FVector                                            Normal;                                                     // 0x0028   (0x0018)  
	FVector                                            AccumulatedImpulse;                                         // 0x0040   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0058   (0x0018)  
	FVector                                            OtherVelocity;                                              // 0x0070   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0088   (0x0018)  
	FVector                                            OtherAngularVelocity;                                       // 0x00A0   (0x0018)  
	float                                              Mass;                                                       // 0x00B8   (0x0004)  
	float                                              OtherMass;                                                  // 0x00BC   (0x0004)  
};

/// Struct /Script/ChaosSolverEngine.ChaosBreakEvent
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FChaosBreakEvent
{ 
	class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0020   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0038   (0x0018)  
	FVector                                            Extents;                                                    // 0x0050   (0x0018)  
	float                                              Mass;                                                       // 0x0068   (0x0004)  
	int32_t                                            Index;                                                      // 0x006C   (0x0004)  
	bool                                               bFromCrumble;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/ChaosSolverEngine.ChaosCrumblingEvent
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FChaosCrumblingEvent
{ 
	class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FQuat                                              Orientation;                                                // 0x0020   (0x0020)  
	FVector                                            LinearVelocity;                                             // 0x0040   (0x0018)  
	FVector                                            AngularVelocity;                                            // 0x0058   (0x0018)  
	float                                              Mass;                                                       // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FBox                                               LocalBounds;                                                // 0x0078   (0x0038)  
	TArray<int32_t>                                    Children;                                                   // 0x00B0   (0x0010)  
};

/// Struct /Script/ChaosSolverEngine.ChaosRemovalEvent
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FChaosRemovalEvent
{ 
	class UPrimitiveComponent*                         Component;                                                  // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	float                                              Mass;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UChaosDebugDrawComponent) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(UChaosEventListenerComponent) == 0x00A8); // 168 bytes (0x0000A0 - 0x0000A8)
static_assert(sizeof(FChaosHandlerSet) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FBreakEventCallbackWrapper) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRemovalEventCallbackWrapper) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FCrumblingEventCallbackWrapper) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UChaosGameplayEventDispatcher) == 0x0308); // 776 bytes (0x0000A8 - 0x000308)
static_assert(sizeof(UChaosNotifyHandlerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UChaosSolverEngineBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UChaosSolver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FChaosDebugSubstepControl) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(AChaosSolverActor) == 0x0388); // 904 bytes (0x000290 - 0x000388)
static_assert(sizeof(UChaosSolverSettings) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(FChaosPhysicsCollisionInfo) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FChaosBreakEvent) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FChaosCrumblingEvent) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FChaosRemovalEvent) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(UChaosGameplayEventDispatcher, CollisionEventRegistrations) == 0x01B8);
static_assert(offsetof(UChaosGameplayEventDispatcher, BreakEventRegistrations) == 0x0208);
static_assert(offsetof(UChaosGameplayEventDispatcher, RemovalEventRegistrations) == 0x0258);
static_assert(offsetof(UChaosGameplayEventDispatcher, CrumblingEventRegistrations) == 0x02A8);
static_assert(offsetof(AChaosSolverActor, Properties) == 0x0290);
static_assert(offsetof(AChaosSolverActor, ClusterUnionConnectionType) == 0x030C);
static_assert(offsetof(AChaosSolverActor, CollisionFilterSettings) == 0x0310);
static_assert(offsetof(AChaosSolverActor, BreakingFilterSettings) == 0x0324);
static_assert(offsetof(AChaosSolverActor, TrailingFilterSettings) == 0x0338);
static_assert(offsetof(AChaosSolverActor, ChaosDebugSubstepControl) == 0x0354);
static_assert(offsetof(AChaosSolverActor, SpriteComponent) == 0x0358);
static_assert(offsetof(AChaosSolverActor, GameplayEventDispatcherComponent) == 0x0378);
static_assert(offsetof(UChaosSolverSettings, DefaultChaosSolverActorClass) == 0x0040);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Component) == 0x0000);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherComponent) == 0x0008);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Location) == 0x0010);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Normal) == 0x0028);
static_assert(offsetof(FChaosPhysicsCollisionInfo, AccumulatedImpulse) == 0x0040);
static_assert(offsetof(FChaosPhysicsCollisionInfo, Velocity) == 0x0058);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherVelocity) == 0x0070);
static_assert(offsetof(FChaosPhysicsCollisionInfo, AngularVelocity) == 0x0088);
static_assert(offsetof(FChaosPhysicsCollisionInfo, OtherAngularVelocity) == 0x00A0);
static_assert(offsetof(FChaosBreakEvent, Component) == 0x0000);
static_assert(offsetof(FChaosBreakEvent, Location) == 0x0008);
static_assert(offsetof(FChaosBreakEvent, Velocity) == 0x0020);
static_assert(offsetof(FChaosBreakEvent, AngularVelocity) == 0x0038);
static_assert(offsetof(FChaosBreakEvent, Extents) == 0x0050);
static_assert(offsetof(FChaosCrumblingEvent, Component) == 0x0000);
static_assert(offsetof(FChaosCrumblingEvent, Location) == 0x0008);
static_assert(offsetof(FChaosCrumblingEvent, Orientation) == 0x0020);
static_assert(offsetof(FChaosCrumblingEvent, LinearVelocity) == 0x0040);
static_assert(offsetof(FChaosCrumblingEvent, AngularVelocity) == 0x0058);
static_assert(offsetof(FChaosCrumblingEvent, LocalBounds) == 0x0078);
static_assert(offsetof(FChaosCrumblingEvent, Children) == 0x00B0);
static_assert(offsetof(FChaosRemovalEvent, Component) == 0x0000);
static_assert(offsetof(FChaosRemovalEvent, Location) == 0x0008);
