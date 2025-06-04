
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataContainer
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: PhysicsCore
/// dependency: PlayFab
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/POLYGON.EAccrualTypeGameScore
/// Size: 0x01 (1 bytes)
enum class EAccrualTypeGameScore : uint8_t
{
	EAccrualTypeGameScore__NONE                                                      = 0,
	EAccrualTypeGameScore__KILL                                                      = 1,
	EAccrualTypeGameScore__HEADSHOT                                                  = 2,
	EAccrualTypeGameScore__KILL_ASSIST                                               = 3,
	EAccrualTypeGameScore__KILL_CONQUEST_DEFENCE                                     = 4,
	EAccrualTypeGameScore__KILL_CONQUEST_ATTACK                                      = 5,
	EAccrualTypeGameScore__CONQUEST_CAPTURE                                          = 6,
	EAccrualTypeGameScore__CONQUEST_CAPTURING                                        = 7
};

/// Enum /Script/POLYGON.EModifiedData
/// Size: 0x01 (1 bytes)
enum class EModifiedData : uint8_t
{
	EModifiedData__NONE                                                              = 0,
	EModifiedData__WEAPONS                                                           = 1,
	EModifiedData__GEAR                                                              = 2,
	EModifiedData__STATISTICS                                                        = 3
};

/// Enum /Script/POLYGON.EPenetrationTraceType
/// Size: 0x01 (1 bytes)
enum class EPenetrationTraceType : uint8_t
{
	EPenetrationTraceType__BACK_TRACE                                                = 0,
	EPenetrationTraceType__BY_COMPONENT                                              = 1,
	EPenetrationTraceType__TWO_SIDED_GEOMETRY                                        = 2
};

/// Enum /Script/POLYGON.EAtmosphereType
/// Size: 0x01 (1 bytes)
enum class EAtmosphereType : uint8_t
{
	EAtmosphereType__CONSTANT                                                        = 0,
	EAtmosphereType__CURVE                                                           = 1,
	EAtmosphereType__EARTH                                                           = 2
};

/// Enum /Script/POLYGON.ECameraViewMode
/// Size: 0x01 (1 bytes)
enum class ECameraViewMode : uint8_t
{
	ECameraViewMode__FIRST_PERSON                                                    = 0,
	ECameraViewMode__THIRD_PERSON                                                    = 1
};

/// Enum /Script/POLYGON.ECharacterPoseState
/// Size: 0x01 (1 bytes)
enum class ECharacterPoseState : uint8_t
{
	ECharacterPoseState__NONE                                                        = 0,
	ECharacterPoseState__STAND                                                       = 1,
	ECharacterPoseState__CROUCN                                                      = 2,
	ECharacterPoseState__LIE                                                         = 3,
	ECharacterPoseState__AIR                                                         = 4
};

/// Enum /Script/POLYGON.EControlPoint
/// Size: 0x01 (1 bytes)
enum class EControlPoint : uint8_t
{
	EControlPoint__NONE_                                                             = 0,
	EControlPoint__ALPHA_                                                            = 1,
	EControlPoint__BRAVO_                                                            = 2,
	EControlPoint__CHARLIE_                                                          = 3,
	EControlPoint__DELTA_                                                            = 4,
	EControlPoint__ECHO_                                                             = 5,
	EControlPoint__FOXTROT_                                                          = 6
};

/// Enum /Script/POLYGON.EPG_GameState
/// Size: 0x01 (1 bytes)
enum class EPG_GameState : uint8_t
{
	EPG_GameState__NONE                                                              = 0,
	EPG_GameState__WAITING_PLAYERS                                                   = 1,
	EPG_GameState__PAUSE                                                             = 2,
	EPG_GameState__COUNTDOWN                                                         = 3,
	EPG_GameState__GAME                                                              = 4,
	EPG_GameState__ENDED                                                             = 5
};

/// Enum /Script/POLYGON.EGearType
/// Size: 0x01 (1 bytes)
enum class EGearType : uint8_t
{
	EGearType__NONE                                                                  = 0,
	EGearType__SKIN                                                                  = 1,
	EGearType__PATCH                                                                 = 2
};

/// Enum /Script/POLYGON.EGunClass
/// Size: 0x01 (1 bytes)
enum class EGunClass : uint8_t
{
	EGunClass__NONE                                                                  = 0,
	EGunClass__ASSAULT                                                               = 1,
	EGunClass__SMG                                                                   = 2,
	EGunClass__MARKSMAN                                                              = 3,
	EGunClass__LMG                                                                   = 4,
	EGunClass__SHOTGUN                                                               = 5,
	EGunClass__SNIPER                                                                = 6,
	EGunClass__PISTOL                                                                = 7,
	EGunClass__REVOLVER                                                              = 8
};

/// Enum /Script/POLYGON.EGunModuleType
/// Size: 0x01 (1 bytes)
enum class EGunModuleType : uint8_t
{
	EGunModuleType__NONE                                                             = 0,
	EGunModuleType__OPTIC                                                            = 1,
	EGunModuleType__BARREL                                                           = 2,
	EGunModuleType__UNDERBARREL                                                      = 3,
	EGunModuleType__MAGAZINE                                                         = 4,
	EGunModuleType__ACCESSORY                                                        = 5,
	EGunModuleType__SKIN                                                             = 6,
	EGunModuleType__STRAP                                                            = 7,
	EGunModuleType__CHARM                                                            = 8
};

/// Enum /Script/POLYGON.EGunShootingType
/// Size: 0x01 (1 bytes)
enum class EGunShootingType : uint8_t
{
	EGunShootingType__BOLT                                                           = 0,
	EGunShootingType__SEMI_AUTO                                                      = 1,
	EGunShootingType__AUTO                                                           = 2
};

/// Enum /Script/POLYGON.EGunSlot
/// Size: 0x01 (1 bytes)
enum class EGunSlot : uint8_t
{
	EGunSlot__PRIMARY                                                                = 0,
	EGunSlot__SECONDARY                                                              = 1
};

/// Enum /Script/POLYGON.EStaminaState
/// Size: 0x01 (1 bytes)
enum class EStaminaState : uint8_t
{
	EStaminaState__IDLE                                                              = 0,
	EStaminaState__INCREASE                                                          = 1,
	EStaminaState__DECREASE                                                          = 2
};

/// Enum /Script/POLYGON.EItemRareType
/// Size: 0x01 (1 bytes)
enum class EItemRareType : uint8_t
{
	EItemRareType__NONE                                                              = 0,
	EItemRareType__COMMON                                                            = 1,
	EItemRareType__RARE                                                              = 2,
	EItemRareType__EPIC                                                              = 3,
	EItemRareType__LEGENDARY                                                         = 4,
	EItemRareType__MYTHICAL                                                          = 5,
	EItemRareType__RELIC                                                             = 6
};

/// Enum /Script/POLYGON.EItemType
/// Size: 0x01 (1 bytes)
enum class EItemType : uint8_t
{
	EItemType__NONE                                                                  = 0,
	EItemType__GUN                                                                   = 1,
	EItemType__GRENADE                                                               = 2,
	EItemType__MODULE                                                                = 3,
	EItemType__WATCH                                                                 = 4,
	EItemType__GEAR                                                                  = 5
};

/// Enum /Script/POLYGON.EGameMode
/// Size: 0x01 (1 bytes)
enum class EGameMode : uint8_t
{
	EGameMode__NONE                                                                  = 0,
	EGameMode__CONQUEST                                                              = 1,
	EGameMode__KING_OF_HILL                                                          = 2
};

/// Enum /Script/POLYGON.EMessageType
/// Size: 0x01 (1 bytes)
enum class EMessageType : uint8_t
{
	EMessageType__ALL                                                                = 0,
	EMessageType__TEAM                                                               = 1,
	EMessageType__SQUAD                                                              = 2,
	EMessageType__PRIVATE                                                            = 3,
	EMessageType__SYSTEM                                                             = 4
};

/// Enum /Script/POLYGON.EPlayerAction
/// Size: 0x01 (1 bytes)
enum class EPlayerAction : uint8_t
{
	EPlayerAction__NONE                                                              = 0,
	EPlayerAction__RELOADING                                                         = 1,
	EPlayerAction__BOLTING                                                           = 2,
	EPlayerAction__CHANGING                                                          = 3,
	EPlayerAction__THROW_GRENADE                                                     = 4
};

/// Enum /Script/POLYGON.EPlayerDeathType
/// Size: 0x01 (1 bytes)
enum class EPlayerDeathType : uint8_t
{
	EPlayerDeathType__NONE                                                           = 0,
	EPlayerDeathType__HEADSHOT                                                       = 1,
	EPlayerDeathType__GRENADE                                                        = 2
};

/// Enum /Script/POLYGON.ETeam
/// Size: 0x01 (1 bytes)
enum class ETeam : uint8_t
{
	ETeam__NONE                                                                      = 0,
	ETeam__NOBODY                                                                    = 1,
	ETeam__ALPHA                                                                     = 2,
	ETeam__BRAVO                                                                     = 3
};

/// Class /Script/POLYGON.AnimNotify_PlaySoundLocal
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UAnimNotify_PlaySoundLocal : public UAnimNotify
{ 
public:
	class USoundBase*                                  Sound;                                                      // 0x0038   (0x0008)  
	float                                              VolumeMultiplier;                                           // 0x0040   (0x0004)  
	float                                              PitchMultiplier;                                            // 0x0044   (0x0004)  
	FName                                              AttachName;                                                 // 0x0048   (0x0008)  
};

/// Struct /Script/POLYGON.BallisticMaterialResponseMapEntry
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FBallisticMaterialResponseMapEntry
{ 
	EPenetrationTraceType                              PenTraceType;                                               // 0x0000   (0x0001)  
	bool                                               NeverPenetrate;                                             // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              PenetrationDepthMultiplier;                                 // 0x0004   (0x0004)  
	float                                              PenetrationNormalization;                                   // 0x0008   (0x0004)  
	float                                              PenetrationNormalizationGrazing;                            // 0x000C   (0x0004)  
	float                                              PenetrationEntryAngleSpread;                                // 0x0010   (0x0004)  
	float                                              PenetrationExitAngleSpread;                                 // 0x0014   (0x0004)  
	bool                                               NeverRicochet;                                              // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              RicochetProbabilityMultiplier;                              // 0x001C   (0x0004)  
	float                                              RicochetRestitution;                                        // 0x0020   (0x0004)  
	float                                              RicochetRestitutionInfluence;                               // 0x0024   (0x0004)  
	float                                              RicochetFriction;                                           // 0x0028   (0x0004)  
	float                                              RicochetFrictionInfluence;                                  // 0x002C   (0x0004)  
	float                                              RicochetSpread;                                             // 0x0030   (0x0004)  
};

/// Class /Script/POLYGON.BallisticMaterialResponseMap
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UBallisticMaterialResponseMap : public UDataAsset
{ 
public:
	TMap<class UPhysicalMaterial*, FBallisticMaterialResponseMapEntry> List;                                       // 0x0030   (0x0050)  
};

/// Class /Script/POLYGON.TraceProjectile
/// Size: 0x04A0 (1184 bytes) (0x000290 - 0x0004A0) align 8 MaxSize: 0x04A0
class ATraceProjectile : public AActor
{ 
public:
	FVector                                            Velocity;                                                   // 0x0290   (0x0018)  
	FRandomStream                                      RandomStream;                                               // 0x02A8   (0x0008)  
	bool                                               OwnerSafe;                                                  // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x67];                                      // 0x02B1   (0x0067)  MISSED
	class UParticleSystemComponent*                    ActiveTraceComponent;                                       // 0x0318   (0x0008)  
	bool                                               DebugEnabled;                                               // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0321   (0x0003)  MISSED
	float                                              DebugTrailTime;                                             // 0x0324   (0x0004)  
	float                                              DebugTrailWidth;                                            // 0x0328   (0x0004)  
	FLinearColor                                       DebugTrailColorFast;                                        // 0x032C   (0x0010)  
	FLinearColor                                       DebugTrailColorSlow;                                        // 0x033C   (0x0010)  
	bool                                               DebugPooling;                                               // 0x034C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x034D   (0x0003)  MISSED
	FVector                                            Wind;                                                       // 0x0350   (0x0018)  
	EAtmosphereType                                    AtmosphereType;                                             // 0x0368   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0369   (0x0003)  MISSED
	float                                              SeaLevelAirDensity;                                         // 0x036C   (0x0004)  
	float                                              SeaLevelSpeedOfSound;                                       // 0x0370   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x0374   (0x0004)  MISSED
	class UCurveFloat*                                 AirDensityCurve;                                            // 0x0378   (0x0008)  
	bool                                               SpeedOfSoundVariesWithAltitude;                             // 0x0380   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0381   (0x0007)  MISSED
	class UCurveFloat*                                 SpeedOfSoundCurve;                                          // 0x0388   (0x0008)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x0390   (0x0004)  MISSED
	float                                              SeaLevelAirPressure;                                        // 0x0394   (0x0004)  
	float                                              SeaLevelAirTemperature;                                     // 0x0398   (0x0004)  
	float                                              TemperatureLapseRate;                                       // 0x039C   (0x0004)  
	float                                              TropopauseAltitude;                                         // 0x03A0   (0x0004)  
	float                                              SpecificGasConstant;                                        // 0x03A4   (0x0004)  
	FVector                                            WorldCenterLocation;                                        // 0x03A8   (0x0018)  
	bool                                               SphericalAltitude;                                          // 0x03C0   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x03C1   (0x0003)  MISSED
	float                                              SeaLevelRadius;                                             // 0x03C4   (0x0004)  
	bool                                               OverrideGravity;                                            // 0x03C8   (0x0001)  
	unsigned char                                      UnknownData08_6[0x7];                                       // 0x03C9   (0x0007)  MISSED
	FVector                                            Gravity;                                                    // 0x03D0   (0x0018)  
	bool                                               SafeLaunch;                                                 // 0x03E8   (0x0001)  
	bool                                               SafeLaunchIgnoreAttachParent;                               // 0x03E9   (0x0001)  
	bool                                               SafeLaunchIgnoreAllAttached;                                // 0x03EA   (0x0001)  
	unsigned char                                      UnknownData09_6[0x1];                                       // 0x03EB   (0x0001)  MISSED
	float                                              SafeDelay;                                                  // 0x03EC   (0x0004)  
	TArray<class AActor*>                              SafeLaunchIgnoredActors;                                    // 0x03F0   (0x0010)  
	float                                              MuzzleVelocityMin;                                          // 0x0400   (0x0004)  
	float                                              MuzzleVelocityMax;                                          // 0x0404   (0x0004)  
	float                                              Spread;                                                     // 0x0408   (0x0004)  
	float                                              Mass;                                                       // 0x040C   (0x0004)  
	float                                              Diameter;                                                   // 0x0410   (0x0004)  
	float                                              FormFactor;                                                 // 0x0414   (0x0004)  
	class UCurveFloat*                                 MachDragCurve;                                              // 0x0418   (0x0008)  
	float                                              GrazingAngleExponent;                                       // 0x0420   (0x0004)  
	float                                              MinPenetration;                                             // 0x0424   (0x0004)  
	float                                              MaxPenetration;                                             // 0x0428   (0x0004)  
	float                                              PenetrationNormalization;                                   // 0x042C   (0x0004)  
	float                                              PenetrationNormalizationGrazing;                            // 0x0430   (0x0004)  
	float                                              PenetrationEntryAngleSpread;                                // 0x0434   (0x0004)  
	float                                              PenetrationExitAngleSpread;                                 // 0x0438   (0x0004)  
	float                                              RicochetProbability;                                        // 0x043C   (0x0004)  
	float                                              RicochetProbabilityGrazing;                                 // 0x0440   (0x0004)  
	float                                              RicochetRestitution;                                        // 0x0444   (0x0004)  
	float                                              RicochetFriction;                                           // 0x0448   (0x0004)  
	float                                              RicochetSpread;                                             // 0x044C   (0x0004)  
	bool                                               SpeedControlsRicochetProbability;                           // 0x0450   (0x0001)  
	bool                                               AddImpulse;                                                 // 0x0451   (0x0001)  
	unsigned char                                      UnknownData10_6[0x2];                                       // 0x0452   (0x0002)  MISSED
	float                                              ImpulseMultiplier;                                          // 0x0454   (0x0004)  
	EPenetrationTraceType                              DefaultPenTraceType;                                        // 0x0458   (0x0001)  
	unsigned char                                      UnknownData11_6[0x7];                                       // 0x0459   (0x0007)  MISSED
	class UBallisticMaterialResponseMap*               MaterialResponseMap;                                        // 0x0460   (0x0008)  
	bool                                               MaterialDensityControlsPenetrationDepth;                    // 0x0468   (0x0001)  
	bool                                               MaterialRestitutionControlsRicochet;                        // 0x0469   (0x0001)  
	bool                                               AllowComponentCollisions;                                   // 0x046A   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     TraceChannel;                                               // 0x046B   (0x0001)  
	bool                                               TraceComplex;                                               // 0x046C   (0x0001)  
	unsigned char                                      UnknownData12_6[0x3];                                       // 0x046D   (0x0003)  MISSED
	float                                              CollisionMargin;                                            // 0x0470   (0x0004)  
	float                                              DespawnVelocity;                                            // 0x0474   (0x0004)  
	TArray<class AActor*>                              IgnoredActors;                                              // 0x0478   (0x0010)  
	bool                                               DoFirstStepImmediately;                                     // 0x0488   (0x0001)  
	bool                                               RandomFirstStepDelta;                                       // 0x0489   (0x0001)  
	unsigned char                                      UnknownData13_6[0x2];                                       // 0x048A   (0x0002)  MISSED
	int32_t                                            MaxTracesPerStep;                                           // 0x048C   (0x0004)  
	bool                                               Retrace;                                                    // 0x0490   (0x0001)  
	bool                                               RetraceOnAnotherChannel;                                    // 0x0491   (0x0001)  
	TEnumAsByte<ECollisionChannel>                     RetraceChannel;                                             // 0x0492   (0x0001)  
	bool                                               RotateActor;                                                // 0x0493   (0x0001)  
	bool                                               RotateRandomRoll;                                           // 0x0494   (0x0001)  
	bool                                               EnablePooling;                                              // 0x0495   (0x0001)  
	unsigned char                                      UnknownData14_6[0x2];                                       // 0x0496   (0x0002)  MISSED
	class UParticleSystem*                             TraceFX;                                                    // 0x0498   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.TraceProjectile.UpdateVelocity
	// FVector UpdateVelocity(FVector& Location, FVector& previousVelocity, float DeltaTime);                                   // [0x2918b90] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/POLYGON.TraceProjectile.SpawnWithExactVelocity
	// void SpawnWithExactVelocity(class UClass* bulletClass, class AItem_Gun_General* Gun, FVector& spawnLocation, FVector& startVelocity, char RandomSeed); // [0x29189d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/POLYGON.TraceProjectile.Spawn
	// void Spawn(class UClass* bulletClass, class AItem_Gun_General* Gun, FVector& spawnLocation, FVector& startVelocity, char RandomSeed); // [0x2918810] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/POLYGON.TraceProjectile.OnTrajectoryUpdateReceived
	// void OnTrajectoryUpdateReceived(FVector& Location, FVector& OldVelocity, FVector& NewVelocity);                          // [0x2c97800] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/POLYGON.TraceProjectile.OnTrace
	// void OnTrace(FVector& StartLocation, FVector& EndLocation);                                                              // [0x2c97800] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/POLYGON.TraceProjectile.OnImpact
	// void OnImpact(bool ricochet, bool passedThrough, FVector& exitVelocity, FVector& Impulse, float PenetrationDepth, FHitResult& HitResult); // [0x2918580] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/POLYGON.TraceProjectile.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x2918560] Native|Event|Public|BlueprintEvent 
	// Function /Script/POLYGON.TraceProjectile.Deactivate
	// void Deactivate();                                                                                                       // [0x2918540] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.TraceProjectile.CollisionFilter
	// bool CollisionFilter(FHitResult& HitResult);                                                                             // [0x2918430] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/POLYGON.Bullet_Casing_General
/// Size: 0x02A8 (680 bytes) (0x000290 - 0x0002A8) align 8 MaxSize: 0x02A8
class ABullet_Casing_General : public AActor
{ 
public:
	class USoundBase*                                  SoundDrop;                                                  // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        Mesh;                                                       // 0x0298   (0x0008)  
	class UProjectileMovementComponent*                ProjectileMovementComponent;                                // 0x02A0   (0x0008)  
};

/// Struct /Script/POLYGON.GameChatMessage
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameChatMessage
{ 
	class APG_PlayerState_Game*                        Sender;                                                     // 0x0000   (0x0008)  
	EMessageType                                       MessageType;                                                // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0010   (0x0010)  
};

/// Class /Script/POLYGON.ChatSystemComponent
/// Size: 0x00B0 (176 bytes) (0x0000A0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UChatSystemComponent : public UActorComponent
{ 
public:
	TArray<FGameChatMessage>                           ChatHistory;                                                // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/POLYGON.ChatSystemComponent.SentMessage_Multicast
	// void SentMessage_Multicast(FGameChatMessage Message);                                                                    // [0x29194e0] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/POLYGON.ChatSystemComponent.SendMessage_Server
	// void SendMessage_Server(FGameChatMessage Message);                                                                       // [0x2919350] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
};

/// Class /Script/POLYGON.GeneralBackendComponent
/// Size: 0x00D0 (208 bytes) (0x0000A0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UGeneralBackendComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00A0   (0x0030)  MISSED
};

/// Class /Script/POLYGON.ClientBackendComponent
/// Size: 0x0110 (272 bytes) (0x0000D0 - 0x000110) align 8 MaxSize: 0x0110
class UClientBackendComponent : public UGeneralBackendComponent
{ 
public:
	SDK_UNDEFINED(16,885) /* FMulticastInlineDelegate */ __um(OnSetPlayerId);                                      // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,886) /* FMulticastInlineDelegate */ __um(OnUpdatePlayerCombinedInfo);                         // 0x00E0   (0x0010)  
	FString                                            PlayerMasterId;                                             // 0x00F0   (0x0010)  
	class UPlayFabJsonObject*                          PlayerCombinedInfo;                                         // 0x0100   (0x0008)  
	class UPlayFabJsonObject*                          PlayerExperiments;                                          // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.ClientBackendComponent.SetPlayerId
	// void SetPlayerId(FString newPlayerMasterId);                                                                             // [0x2919e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.ClientBackendComponent.SetPlayerCombinedInfo
	// void SetPlayerCombinedInfo(class UPlayFabJsonObject* newPlayerCombinedInfo, TArray<EModifiedData>& ModifiedData, FString customDelegateString); // [0x2919cd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/POLYGON.ClientBackendComponent.SerPlayerExperiments
	// void SerPlayerExperiments(class UPlayFabJsonObject* Experiments);                                                        // [0x2919c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.ClientBackendComponent.IsClientLoggedIn
	// bool IsClientLoggedIn();                                                                                                 // [0x2919c10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/POLYGON.ClientBackendComponent.GiveVipLocal
	// void GiveVipLocal(FString ID);                                                                                           // [0x2919b60] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.ClientBackendComponent.GetPlayerExperiments
	// class UPlayFabJsonObject* GetPlayerExperiments();                                                                        // [0xa3f000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.ClientBackendComponent.GetPlayerCombinedInfo
	// class UPlayFabJsonObject* GetPlayerCombinedInfo();                                                                       // [0xa3efe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/POLYGON.ClientGameInstance
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UClientGameInstance : public UObject
{ 
public:
	SDK_UNDEFINED(16,887) /* FMulticastInlineDelegate */ __um(OnSetMasterId);                                      // 0x0028   (0x0010)  
	FText                                              KickReason;                                                 // 0x0038   (0x0018)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0050   (0x0010)  MISSED
	class UPlayFabJsonObject*                          PlayerCombinedInfo;                                         // 0x0060   (0x0008)  
	TArray<class UUserEntry*>                          UsersCache;                                                 // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0078   (0x0010)  MISSED


	/// Functions
	// Function /Script/POLYGON.ClientGameInstance.SetServerTime
	// void SetServerTime(FDateTime& serverTime);                                                                               // [0x291a690] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/POLYGON.ClientGameInstance.SetPlayerId
	// void SetPlayerId(FString newPlayerMasterId);                                                                             // [0x291a5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.ClientGameInstance.SetPlayerCombinedInfo
	// void SetPlayerCombinedInfo(class UPlayFabJsonObject* newPlayerCombinedInfo);                                             // [0x291a550] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.ClientGameInstance.HandleNetworkFailure
	// void HandleNetworkFailure(class UWorld* World, class UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure> FailureType, FString errorString); // [0x291a3d0] Final|Native|Private 
	// Function /Script/POLYGON.ClientGameInstance.GetServerTime
	// FDateTime GetServerTime();                                                                                               // [0x291a390] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.ClientGameInstance.GetPlayerMasterId
	// FString GetPlayerMasterId();                                                                                             // [0x291a2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.ClientGameInstance.GetPlayerCombinedInfo
	// class UPlayFabJsonObject* GetPlayerCombinedInfo();                                                                       // [0x291a290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/POLYGON.ControlPoint
/// Size: 0x0300 (768 bytes) (0x000290 - 0x000300) align 8 MaxSize: 0x0300
class AControlPoint : public AActor
{ 
public:
	SDK_UNDEFINED(16,888) /* FMulticastInlineDelegate */ __um(OnCapturedTeam);                                     // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,889) /* FMulticastInlineDelegate */ __um(OnIsCapture);                                        // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,890) /* FMulticastInlineDelegate */ __um(OnChangeCapturePoints);                              // 0x02B0   (0x0010)  
	EControlPoint                                      ControlPointName;                                           // 0x02C0   (0x0001)  
	ETeam                                              CapturedTeam;                                               // 0x02C1   (0x0001)  
	bool                                               bIsCapture;                                                 // 0x02C2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x02C3   (0x0001)  MISSED
	int32_t                                            CapturePointsAlphaTeam;                                     // 0x02C4   (0x0004)  
	int32_t                                            CapturePointsBravoTeam;                                     // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
	TArray<class APG_PlayerState_Game*>                CapturePlayersAlphaTeam;                                    // 0x02D0   (0x0010)  
	TArray<class APG_PlayerState_Game*>                CapturePlayersBravoTeam;                                    // 0x02E0   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x02F0   (0x0008)  MISSED
	class USceneComponent*                             Root;                                                       // 0x02F8   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.ControlPoint.OnRep_IsCapture
	// void OnRep_IsCapture();                                                                                                  // [0x291ae60] Final|Native|Private 
	// Function /Script/POLYGON.ControlPoint.OnRep_CapturePointsBravoTeam
	// void OnRep_CapturePointsBravoTeam();                                                                                     // [0x291ae20] Final|Native|Private|Const 
	// Function /Script/POLYGON.ControlPoint.OnRep_CapturePointsAlphaTeam
	// void OnRep_CapturePointsAlphaTeam();                                                                                     // [0x291ae20] Final|Native|Private|Const 
	// Function /Script/POLYGON.ControlPoint.OnRep_CapturedTeam
	// void OnRep_CapturedTeam();                                                                                               // [0x291ae40] Final|Native|Private 
	// Function /Script/POLYGON.ControlPoint.GetControlPointNameAsString
	// FString GetControlPointNameAsString();                                                                                   // [0x291ada0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.ControlPoint.GetControlPointNameAsOneLetter
	// FString GetControlPointNameAsOneLetter();                                                                                // [0x291ad20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.ControlPoint.ContainsCharacter
	// bool ContainsCharacter(class ACharacter* Character);                                                                     // [0x291ac80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/POLYGON.DataManagerLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDataManagerLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/POLYGON.DataManagerLibrary.GetDataTableReferences
	// class UDataContainerAsset* GetDataTableReferences();                                                                     // [0x291b040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/POLYGON.EOSPartyId
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEOSPartyId : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/POLYGON.EOSPartyId.ToString
	// FString ToString();                                                                                                      // [0x291bda0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/POLYGON.EOSPartyMemberId
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEOSPartyMemberId : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/POLYGON.EOSPartyMemberId.ToString
	// FString ToString();                                                                                                      // [0x291bed0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/POLYGON.EOSSubsystemAvanced
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UEOSSubsystemAvanced : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED


	/// Functions
	// Function /Script/POLYGON.EOSSubsystemAvanced.StartLogin
	// void StartLogin(FDelegateProperty OnLoginComplete);                                                                      // [0x291bd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.EOSSubsystemAvanced.StartCreateParty
	// void StartCreateParty(class UObject* WorldContextObject, int32_t PartyTypeId, FDelegateProperty onDone);                 // [0x291bbe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.EOSSubsystemAvanced.GetPartyMembers
	// TArray<UEOSPartyMemberId*> GetPartyMembers(class UObject* WorldContextObject, class UEOSPartyId* PartyId);               // [0x291bad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.EOSSubsystemAvanced.GetJoinedParties
	// TArray<UEOSPartyId*> GetJoinedParties(class UObject* WorldContextObject);                                                // [0x291b9f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/POLYGON.EventManagerComponent
/// Size: 0x00A0 (160 bytes) (0x0000A0 - 0x0000A0) align 8 MaxSize: 0x00A0
class UEventManagerComponent : public UActorComponent
{ 
public:


	/// Functions
	// Function /Script/POLYGON.EventManagerComponent.OnAmmoBoxAction
	// void OnAmmoBoxAction();                                                                                                  // [0x2c97800] Event|Public|BlueprintEvent 
	// Function /Script/POLYGON.EventManagerComponent.AmmoBoxAction
	// void AmmoBoxAction();                                                                                                    // [0x291c1e0] Net|Native|Event|Public|NetClient 
};

/// Class /Script/POLYGON.FOVManagerComponent
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UFOVManagerComponent : public UActorComponent
{ 
public:
	float                                              AimingFOV_Alpha;                                            // 0x00A0   (0x0004)  
	float                                              DefaultCameraFOV;                                           // 0x00A4   (0x0004)  
	float                                              CurrentCameraFOV;                                           // 0x00A8   (0x0004)  
	float                                              DefaultMeshFOV;                                             // 0x00AC   (0x0004)  
	float                                              CurrentMeshFOV;                                             // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	class UMaterialParameterCollection*                MaterialCollection_CorrectFOV;                              // 0x00B8   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.FOVManagerComponent.SetMeshFOV
	// void SetMeshFOV(float newMeshFOV);                                                                                       // [0x291c5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.FOVManagerComponent.SetDefaultCameraFOV
	// void SetDefaultCameraFOV(float newDefaultCameraFOV);                                                                     // [0x291c560] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.FOVManagerComponent.SetCameraFOV
	// void SetCameraFOV(float newCameraFOV);                                                                                   // [0x291c4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.FOVManagerComponent.HardResetMeshFOV
	// void HardResetMeshFOV();                                                                                                 // [0x291c4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.FOVManagerComponent.HardResetCameraFOV
	// void HardResetCameraFOV();                                                                                               // [0x291c4a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/POLYGON.FOVManagerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFOVManagerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/POLYGON.FOVManagerInterface.SetCorrectiveFovMaterial
	// void SetCorrectiveFovMaterial(bool useFovMaterial);                                                                      // [0x291c830] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/POLYGON.GameSettings
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UGameSettings : public UDeveloperSettings
{ 
public:
};

/// Struct /Script/POLYGON.GunModuleInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FGunModuleInfo
{ 
	class UClass*                                      ModuleClass;                                                // 0x0000   (0x0008)  
	TArray<class UClass*>                              Parents;                                                    // 0x0008   (0x0010)  
	TArray<class UClass*>                              Children;                                                   // 0x0018   (0x0010)  
	int32_t                                            RequiredExperience;                                         // 0x0028   (0x0004)  
	int32_t                                            RequiredLevel;                                              // 0x002C   (0x0004)  
	int32_t                                            RequiredCredits;                                            // 0x0030   (0x0004)  
	int32_t                                            RequiredCrowns;                                             // 0x0034   (0x0004)  
	FDataContainerObjectWrapper                        customData;                                                 // 0x0038   (0x0008)  
};

/// Class /Script/POLYGON.GunModulesInfo
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UGunModulesInfo : public UDataAsset
{ 
public:
	TArray<FGunModuleInfo>                             Modules;                                                    // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/POLYGON.GunModulesInfo.FindModule
	// FGunModuleInfo FindModule(TArray<FGunModuleInfo> Array, class UClass* ModuleClass);                                      // [0x291d310] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/POLYGON.HalloweenPumpkin
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class AHalloweenPumpkin : public AActor
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0290   (0x0010)  MISSED
};

/// Struct /Script/POLYGON.PlayerAssist
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FPlayerAssist
{ 
	class APG_PlayerState_Game*                        PlayerAssist;                                               // 0x0000   (0x0008)  
	TMap<class AActor*, int32_t>                       DamageCausers;                                              // 0x0008   (0x0050)  
	FTimerHandle                                       TimerResetAssist;                                           // 0x0058   (0x0008)  
};

/// Class /Script/POLYGON.HealthStatsComponent
/// Size: 0x0110 (272 bytes) (0x0000A0 - 0x000110) align 8 MaxSize: 0x0110
class UHealthStatsComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,891) /* FMulticastInlineDelegate */ __um(OnChangeHealth);                                     // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,892) /* FMulticastInlineDelegate */ __um(OnHealthProtection);                                 // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,893) /* FMulticastInlineDelegate */ __um(OnIsAlive);                                          // 0x00C0   (0x0010)  
	char                                               Health;                                                     // 0x00D0   (0x0001)  
	bool                                               bIsAlive;                                                   // 0x00D1   (0x0001)  
	bool                                               bHealthProtection;                                          // 0x00D2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00D3   (0x0001)  MISSED
	float                                              LastTimeTakeDamage;                                         // 0x00D4   (0x0004)  
	float                                              Stamina;                                                    // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00DC   (0x0004)  MISSED
	TArray<FPlayerAssist>                              KillAssists;                                                // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x00F0   (0x0020)  MISSED


	/// Functions
	// Function /Script/POLYGON.HealthStatsComponent.OnRep_HealthProtection
	// void OnRep_HealthProtection();                                                                                           // [0x291e150] Final|Native|Private 
	// Function /Script/POLYGON.HealthStatsComponent.OnRep_Health
	// void OnRep_Health(char previousHealth);                                                                                  // [0x291e0d0] Final|Native|Private 
	// Function /Script/POLYGON.HealthStatsComponent.KillSelf_server
	// void KillSelf_server();                                                                                                  // [0x291e080] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/POLYGON.HealthStatsComponent.GetStamina
	// int32_t GetStamina();                                                                                                    // [0x291e050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.HealthStatsComponent.GetHealthProtection
	// bool GetHealthProtection();                                                                                              // [0x291e030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.HealthStatsComponent.GetHealth
	// int32_t GetHealth();                                                                                                     // [0x291e010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/POLYGON.InspectManagerComponent
/// Size: 0x00C8 (200 bytes) (0x0000A0 - 0x0000C8) align 8 MaxSize: 0x00C8
class UInspectManagerComponent : public UActorComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x00A0   (0x0028)  MISSED


	/// Functions
	// Function /Script/POLYGON.InspectManagerComponent.SetPivotOffset
	// void SetPivotOffset(FVector2D Offset);                                                                                   // [0x291e430] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/POLYGON.InspectManagerComponent.ResetRotation
	// void ResetRotation();                                                                                                    // [0x291e410] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.InspectManagerComponent.EnableInspect
	// void EnableInspect();                                                                                                    // [0x291e3f0] Final|Native|Private|BlueprintCallable 
	// Function /Script/POLYGON.InspectManagerComponent.DisableInspect
	// void DisableInspect();                                                                                                   // [0x291e3d0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/POLYGON.InteractInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInteractInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/POLYGON.InteractInterface.StopInteract
	// void StopInteract(class APG_Game_Character* Character);                                                                  // [0x1e03f20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/POLYGON.InteractInterface.StartInteract
	// void StartInteract(class APG_Game_Character* Character);                                                                 // [0x291e8d0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/POLYGON.InteractInterface.SetPlayerLooks
	// void SetPlayerLooks(class APG_Game_Character* Character, bool bIsLooks);                                                 // [0x291e800] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/POLYGON.InventoryComponent_Base
/// Size: 0x00F8 (248 bytes) (0x0000A0 - 0x0000F8) align 8 MaxSize: 0x00F8
class UInventoryComponent_Base : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,894) /* FMulticastInlineDelegate */ __um(OnSetPrimaryGun);                                    // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,895) /* FMulticastInlineDelegate */ __um(OnSetSecondaryGun);                                  // 0x00B0   (0x0010)  
	class AItem_Gun_General*                           PrimaryGun;                                                 // 0x00C0   (0x0008)  
	class AItem_Gun_General*                           SecondaryGun;                                               // 0x00C8   (0x0008)  
	class UClass*                                      SkinClass;                                                  // 0x00D0   (0x0008)  
	class UClass*                                      WatchClass;                                                 // 0x00D8   (0x0008)  
	class UClass*                                      PatchClass;                                                 // 0x00E0   (0x0008)  
	TArray<class UStaticMeshComponent*>                PatchRefs;                                                  // 0x00E8   (0x0010)  


	/// Functions
	// Function /Script/POLYGON.InventoryComponent_Base.UpdatePlayerCombinedInfo
	// void UpdatePlayerCombinedInfo(TArray<EModifiedData>& ModifiedData, FString customDelegateString);                        // [0x291f0c0] Native|Protected|HasOutParms 
	// Function /Script/POLYGON.InventoryComponent_Base.OnRep_SecondaryGun
	// void OnRep_SecondaryGun(class AItem_Gun_General* oldGun);                                                                // [0x291f030] Native|Protected     
	// Function /Script/POLYGON.InventoryComponent_Base.OnRep_PrimaryGun
	// void OnRep_PrimaryGun(class AItem_Gun_General* oldGun);                                                                  // [0x291efa0] Native|Protected     
	// Function /Script/POLYGON.InventoryComponent_Base.GetSkinClass
	// class UClass* GetSkinClass();                                                                                            // [0x291ef80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.InventoryComponent_Base.GetPatchClass
	// class UClass* GetPatchClass();                                                                                           // [0x291ef60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.InventoryComponent_Base.GetGunBySlot
	// class AItem_Gun_General* GetGunBySlot(EGunSlot gunSlot);                                                                 // [0x291eed0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/POLYGON.InventoryComponent_Game
/// Size: 0x0130 (304 bytes) (0x0000F8 - 0x000130) align 8 MaxSize: 0x0130
class UInventoryComponent_Game : public UInventoryComponent_Base
{ 
public:
	SDK_UNDEFINED(16,896) /* FMulticastInlineDelegate */ __um(OnSetCurrentGun);                                    // 0x00F8   (0x0010)  
	SDK_UNDEFINED(16,897) /* FMulticastInlineDelegate */ __um(OnChangeNumberGrenades);                             // 0x0108   (0x0010)  
	class AItem_Gun_General*                           CurrentGun;                                                 // 0x0118   (0x0008)  
	char                                               GrenadesNumber;                                             // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0121   (0x000F)  MISSED


	/// Functions
	// Function /Script/POLYGON.InventoryComponent_Game.RequestSetGunModules_server
	// void RequestSetGunModules_server(class AItem_Gun_General* gunRef, FString moduleId, EGunModuleType moduleType);          // [0x291fa50] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/POLYGON.InventoryComponent_Game.RequestEquipItems_server
	// void RequestEquipItems_server(TArray<FString> itemsInstanceId);                                                          // [0x291f960] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/POLYGON.InventoryComponent_Game.OnRep_GrenadesNumber
	// void OnRep_GrenadesNumber();                                                                                             // [0x291f940] Final|Native|Private 
	// Function /Script/POLYGON.InventoryComponent_Game.OnRep_CurrentGun
	// void OnRep_CurrentGun(class AItem_Gun_General* previousGun);                                                             // [0x291f8b0] Final|Native|Private 
	// Function /Script/POLYGON.InventoryComponent_Game.EquipItems
	// TArray<FString> EquipItems(TArray<FString>& itemsInstanceId, bool callUpdate);                                           // [0x291f6e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/POLYGON.InventoryComponent_Game.AddGrenate_server
	// void AddGrenate_server(char Number);                                                                                     // [0x291f630] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
};

/// Class /Script/POLYGON.InventoryComponent_Menu
/// Size: 0x00F8 (248 bytes) (0x0000F8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UInventoryComponent_Menu : public UInventoryComponent_Base
{ 
public:
};

/// Class /Script/POLYGON.Item_General
/// Size: 0x0300 (768 bytes) (0x000290 - 0x000300) align 8 MaxSize: 0x0300
class AItem_General : public AActor
{ 
public:
	FString                                            ItemId;                                                     // 0x0290   (0x0010)  
	EItemType                                          ItemType;                                                   // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02A1   (0x0007)  MISSED
	FText                                              ItemName;                                                   // 0x02A8   (0x0018)  
	TWeakObjectPtr<class UTexture2D*>                  ItemIcon;                                                   // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x02C8   (0x0028)  MISSED
	EItemRareType                                      Rare;                                                       // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x02F1   (0x0007)  MISSED
	FDataContainerObjectWrapper                        customData;                                                 // 0x02F8   (0x0008)  
};

/// Class /Script/POLYGON.Item_Gear_General
/// Size: 0x0340 (832 bytes) (0x000300 - 0x000340) align 8 MaxSize: 0x0340
class AItem_Gear_General : public AItem_General
{ 
public:
	EGearType                                          GearType;                                                   // 0x0300   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0301   (0x0007)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  WhiteIcon;                                                  // 0x0308   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0310   (0x0028)  MISSED
	bool                                               bIsDefault;                                                 // 0x0338   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0339   (0x0007)  MISSED
};

/// Class /Script/POLYGON.Item_Gear_Patch
/// Size: 0x0350 (848 bytes) (0x000340 - 0x000350) align 8 MaxSize: 0x0350
class AItem_Gear_Patch : public AItem_Gear_General
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0340   (0x0008)  MISSED
	class UStaticMeshComponent*                        Mesh;                                                       // 0x0348   (0x0008)  
};

/// Class /Script/POLYGON.Item_Gear_Skin
/// Size: 0x0358 (856 bytes) (0x000340 - 0x000358) align 8 MaxSize: 0x0358
class AItem_Gear_Skin : public AItem_Gear_General
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0340   (0x0008)  MISSED
	class UMaterialInstance*                           SkinMaterial;                                               // 0x0348   (0x0008)  
	class UMaterialInstance*                           SkinMaterialCorrectFOV;                                     // 0x0350   (0x0008)  
};

/// Class /Script/POLYGON.Item_Grenade_General
/// Size: 0x0360 (864 bytes) (0x000300 - 0x000360) align 8 MaxSize: 0x0360
class AItem_Grenade_General : public AItem_General
{ 
public:
	float                                              GrenadeDamage;                                              // 0x0300   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0304   (0x0004)  MISSED
	FVector_NetQuantize                                ReplicatedPosition;                                         // 0x0308   (0x0018)  
	class UParticleSystem*                             ExplosionFX;                                                // 0x0320   (0x0008)  
	class USoundBase*                                  SoundExplosion;                                             // 0x0328   (0x0008)  
	class UClass*                                      ExplosionCameraShakeFirst;                                  // 0x0330   (0x0008)  
	class UClass*                                      ExplosionCameraShakeSecond;                                 // 0x0338   (0x0008)  
	class UClass*                                      GrenadeThrowCameraShake;                                    // 0x0340   (0x0008)  
	class UStaticMeshComponent*                        Mesh;                                                       // 0x0348   (0x0008)  
	class URadialForceComponent*                       RadialForce;                                                // 0x0350   (0x0008)  
	class USphereComponent*                            GrenadeSphereRadius;                                        // 0x0358   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.Item_Grenade_General.OnRep_ReplicatedPosition
	// void OnRep_ReplicatedPosition();                                                                                         // [0x2920cb0] Final|Native|Private 
	// Function /Script/POLYGON.Item_Grenade_General.OnMeshHit
	// void OnMeshHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x2920a90] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/POLYGON.Item_Grenade_General.OnGrenadeThrow
	// void OnGrenadeThrow();                                                                                                   // [0x2c97800] Event|Public|BlueprintEvent 
	// Function /Script/POLYGON.Item_Grenade_General.NotifyThrow_server
	// void NotifyThrow_server(FVector_NetQuantize StartPosition, FVector_NetQuantize Impulse);                                 // [0x29209a0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
};

/// Struct /Script/POLYGON.GunShot
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGunShot
{ 
	FVector_NetQuantizeNormal                          ShotDirection;                                              // 0x0000   (0x0018)  
	char                                               RandomSeed;                                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Class /Script/POLYGON.Item_Gun_General
/// Size: 0x0770 (1904 bytes) (0x000300 - 0x000770) align 16 MaxSize: 0x0770
class AItem_Gun_General : public AItem_General
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0300   (0x0008)  MISSED
	SDK_UNDEFINED(16,898) /* FMulticastInlineDelegate */ __um(OnChangeCurrentNumberAmmo);                          // 0x0308   (0x0010)  
	SDK_UNDEFINED(16,899) /* FMulticastInlineDelegate */ __um(OnChangeStockAmmo);                                  // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,900) /* FMulticastInlineDelegate */ __um(OnSetGunModules);                                    // 0x0328   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0338   (0x0008)  MISSED
	SDK_UNDEFINED(16,901) /* FMulticastInlineDelegate */ __um(OnApplyGunDamage);                                   // 0x0340   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0350   (0x0018)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  GunWhileIcon;                                               // 0x0368   (0x0008)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x0370   (0x0028)  MISSED
	int32_t                                            LevelRequired;                                              // 0x0398   (0x0004)  
	bool                                               bIsAvailable;                                               // 0x039C   (0x0001)  
	EGunClass                                          GunClass;                                                   // 0x039D   (0x0001)  
	EGunSlot                                           gunSlot;                                                    // 0x039E   (0x0001)  
	EGunShootingType                                   GunShootingType;                                            // 0x039F   (0x0001)  
	TSoftObjectPtr<class UClass*>                      ProjectileClass;                                            // 0x03A0   (0x0030)  
	float                                              BulletVelocityMultiplier;                                   // 0x03D0   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x03D4   (0x0004)  MISSED
	TArray<int32_t>                                    Levels;                                                     // 0x03D8   (0x0010)  
	int32_t                                            GunDamage;                                                  // 0x03E8   (0x0004)  
	float                                              DamageMultiplierHead;                                       // 0x03EC   (0x0004)  
	int32_t                                            MaxMagazineAmmo;                                            // 0x03F0   (0x0004)  
	int32_t                                            MaxStockAmmo;                                               // 0x03F4   (0x0004)  
	float                                              TimeBetweenShots;                                           // 0x03F8   (0x0004)  
	float                                              GunUpRecoil;                                                // 0x03FC   (0x0004)  
	float                                              GunBackwardRecoil;                                          // 0x0400   (0x0004)  
	float                                              GunRecoilAlphaPerShot;                                      // 0x0404   (0x0004)  
	float                                              GunRecoilLift;                                              // 0x0408   (0x0004)  
	float                                              GunRecoilControlMultiplier;                                 // 0x040C   (0x0004)  
	float                                              FirstShotKickMultiplier;                                    // 0x0410   (0x0004)  
	float                                              AccuracyHip;                                                // 0x0414   (0x0004)  
	float                                              SpreadShot;                                                 // 0x0418   (0x0004)  
	float                                              Mobility;                                                   // 0x041C   (0x0004)  
	float                                              AimDownTimeMultiplier;                                      // 0x0420   (0x0004)  
	float                                              ReloadTimeMultiplier;                                       // 0x0424   (0x0004)  
	float                                              DrawTimeMultiplier;                                         // 0x0428   (0x0004)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x042C   (0x0004)  MISSED
	SDK_UNDEFINED(16,902) /* TArray<TWeakObjectPtr<UGunModulesInfo*>> */ __um(RelatedModulesInfo);                 // 0x0430   (0x0010)  
	TSoftObjectPtr<class UClass*>                      ProgressWidget;                                             // 0x0440   (0x0030)  
	class UParticleSystem*                             SleeveFX;                                                   // 0x0470   (0x0008)  
	class USoundBase*                                  SoundBulletCasingDrop;                                      // 0x0478   (0x0008)  
	class UClass*                                      ShotCameraShake;                                            // 0x0480   (0x0008)  
	class UAnimSequence*                               IdleCharacterAnimation;                                     // 0x0488   (0x0008)  
	class UAnimMontage*                                ReloadCharacterAnimation;                                   // 0x0490   (0x0008)  
	float                                              ReloadCharacterAnimationAimingStartTime;                    // 0x0498   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x049C   (0x0004)  MISSED
	class UAnimMontage*                                ReloadFullCharacterAnimation;                               // 0x04A0   (0x0008)  
	float                                              ReloadFullCharacterAnimationAimingStartTime;                // 0x04A8   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x04AC   (0x0004)  MISSED
	class UAnimMontage*                                ShotCharacterAnimation;                                     // 0x04B0   (0x0008)  
	class UAnimMontage*                                EndShotCharacterAnimation;                                  // 0x04B8   (0x0008)  
	class UAnimMontage*                                BoltCharacterAnimation;                                     // 0x04C0   (0x0008)  
	class UAnimMontage*                                GrenadeThrowAdditiveAnimation;                              // 0x04C8   (0x0008)  
	class UAnimMontage*                                EquipAnimation;                                             // 0x04D0   (0x0008)  
	class UAnimMontage*                                AimingEquipAnimation;                                       // 0x04D8   (0x0008)  
	class UAnimMontage*                                HolsterAnimation;                                           // 0x04E0   (0x0008)  
	class UAnimMontage*                                AimingAnimation;                                            // 0x04E8   (0x0008)  
	class UAnimSequenceBase*                           ShotGunAnimation;                                           // 0x04F0   (0x0008)  
	class UAnimSequence*                               BoltGunAnimation;                                           // 0x04F8   (0x0008)  
	class UAnimSequenceBase*                           ReloadGunAnimation;                                         // 0x0500   (0x0008)  
	class UAnimSequenceBase*                           ReloadFullGunAnimation;                                     // 0x0508   (0x0008)  
	class UAnimSequenceBase*                           NoAmmoGunAnimation;                                         // 0x0510   (0x0008)  
	FVector                                            FirstPersonGunPosition;                                     // 0x0518   (0x0018)  
	FVector                                            ThirdPersonGunPosition;                                     // 0x0530   (0x0018)  
	unsigned char                                      UnknownData08_6[0x8];                                       // 0x0548   (0x0008)  MISSED
	FTransform                                         LeftHandOffset;                                             // 0x0550   (0x0060)  
	FVector                                            SprintLiftGun;                                              // 0x05B0   (0x0018)  
	unsigned char                                      UnknownData09_6[0x8];                                       // 0x05C8   (0x0008)  MISSED
	FTransform                                         WatchOffset;                                                // 0x05D0   (0x0060)  
	TWeakObjectPtr<class USoundBase*>                  SoundShot_FP;                                               // 0x0630   (0x0008)  
	unsigned char                                      UnknownData10_6[0x28];                                      // 0x0638   (0x0028)  MISSED
	TWeakObjectPtr<class USoundBase*>                  SoundShot_TP;                                               // 0x0660   (0x0008)  
	unsigned char                                      UnknownData11_6[0x28];                                      // 0x0668   (0x0028)  MISSED
	class USoundBase*                                  SoundBlankShot;                                             // 0x0690   (0x0008)  
	class USoundBase*                                  SoundAiming;                                                // 0x0698   (0x0008)  
	SDK_UNDEFINED(16,903) /* TArray<TWeakObjectPtr<USoundBase*>> */ __um(CustomSounds);                            // 0x06A0   (0x0010)  
	char                                               CallHardReset;                                              // 0x06B0   (0x0001)  
	unsigned char                                      UnknownData12_6[0x3];                                       // 0x06B1   (0x0003)  MISSED
	int32_t                                            CurrentMagazineAmmo;                                        // 0x06B4   (0x0004)  
	uint16_t                                           CurrentStockAmmo;                                           // 0x06B8   (0x0002)  
	char                                               ReloadCaller;                                               // 0x06BA   (0x0001)  
	unsigned char                                      UnknownData13_6[0x5];                                       // 0x06BB   (0x0005)  MISSED
	SDK_UNDEFINED(16,904) /* TArray<TWeakObjectPtr<ATraceProjectile*>> */ __um(PoolProjectiles);                   // 0x06C0   (0x0010)  
	SDK_UNDEFINED(16,905) /* TArray<TWeakObjectPtr<ABullet_Casing_General*>> */ __um(PoolBulletCasings);           // 0x06D0   (0x0010)  
	unsigned char                                      UnknownData14_6[0x4];                                       // 0x06E0   (0x0004)  MISSED
	float                                              CurrentSpread;                                              // 0x06E4   (0x0004)  
	TArray<class UClass*>                              CurrentGunModuleClasses;                                    // 0x06E8   (0x0010)  
	TArray<class AItem_Module_General*>                CurrentGunModuleReferences;                                 // 0x06F8   (0x0010)  
	FGunShot                                           GunShot;                                                    // 0x0708   (0x0020)  
	FVector_NetQuantize                                GunHitOfShortShot;                                          // 0x0728   (0x0018)  
	unsigned char                                      UnknownData15_6[0x8];                                       // 0x0740   (0x0008)  MISSED
	class UAudioComponent*                             ActiveSoundShot;                                            // 0x0748   (0x0008)  
	class UPlayFabJsonObject*                          ItemReference;                                              // 0x0750   (0x0008)  
	class USkeletalMeshComponent*                      GunMesh;                                                    // 0x0758   (0x0008)  
	class UStaticMeshComponent*                        Magazine;                                                   // 0x0760   (0x0008)  
	unsigned char                                      UnknownData16_7[0x8];                                       // 0x0768   (0x0008)  MISSED


	/// Functions
	// Function /Script/POLYGON.Item_Gun_General.UpdatePlayerCombinedInfo
	// void UpdatePlayerCombinedInfo(TArray<EModifiedData>& ModifiedData, FString customDelegateString);                        // [0x2922940] Final|Native|Private|HasOutParms 
	// Function /Script/POLYGON.Item_Gun_General.UpdateAmmoCount_server
	// void UpdateAmmoCount_server(char currentNumberAmmo);                                                                     // [0x2922890] Final|Net|Native|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.Item_Gun_General.SetGunModules
	// void SetGunModules(class UPlayFabJsonObject* Modules);                                                                   // [0x2922800] Final|Native|Private|BlueprintCallable 
	// Function /Script/POLYGON.Item_Gun_General.RequestReload_server
	// void RequestReload_server(char currentNumberAmmo);                                                                       // [0x2922750] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.Item_Gun_General.OnSetPlayerState
	// void OnSetPlayerState();                                                                                                 // [0x2922730] Final|Native|Private 
	// Function /Script/POLYGON.Item_Gun_General.OnRep_ReloadCaller
	// void OnRep_ReloadCaller(char PreviousValue);                                                                             // [0x29226b0] Final|Native|Private 
	// Function /Script/POLYGON.Item_Gun_General.OnRep_GunShot
	// void OnRep_GunShot(FGunShot previousShot);                                                                               // [0x2922600] Final|Native|Private 
	// Function /Script/POLYGON.Item_Gun_General.OnRep_GunHitOfShortShot
	// void OnRep_GunHitOfShortShot(FVector_NetQuantize PreviousValue);                                                         // [0x2922570] Final|Native|Private 
	// Function /Script/POLYGON.Item_Gun_General.OnRep_CurrentStockAmmo
	// void OnRep_CurrentStockAmmo();                                                                                           // [0x2922550] Final|Native|Private 
	// Function /Script/POLYGON.Item_Gun_General.OnRep_CurrentGunModuleClasses
	// void OnRep_CurrentGunModuleClasses();                                                                                    // [0x2922530] Final|Native|Private 
	// Function /Script/POLYGON.Item_Gun_General.OnRep_CallHardReset
	// void OnRep_CallHardReset(char PreviousValue);                                                                            // [0x29224b0] Final|Native|Private 
	// Function /Script/POLYGON.Item_Gun_General.NotifyServerTraceHit
	// void NotifyServerTraceHit(FGunHitOnCharacter hitOnCharacter);                                                            // [0x29223c0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.Item_Gun_General.NotifyServerOfShot
	// void NotifyServerOfShot(FGunShot GunShot);                                                                               // [0x29222f0] Final|Net|Native|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.Item_Gun_General.NotifyServerHitWithEnergy
	// void NotifyServerHitWithEnergy(FGunHitOnCharacter hitOnCharacter, char energy);                                          // [0x29221b0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.Item_Gun_General.NotifyServerHit
	// void NotifyServerHit(FGunHitOnCharacter hitOnCharacter);                                                                 // [0x29220c0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.Item_Gun_General.NotifyGrantedProgressDataContainer_client
	// void NotifyGrantedProgressDataContainer_client(FString ItemInstanceId);                                                  // [0x2922010] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/POLYGON.Item_Gun_General.NotifyGrantedModulesDataContainer_client
	// void NotifyGrantedModulesDataContainer_client(FString ItemInstanceId);                                                   // [0x2921f60] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/POLYGON.Item_Gun_General.GetItemReference
	// class UPlayFabJsonObject* GetItemReference();                                                                            // [0x2921f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.Item_Gun_General.GetForwardShot
	// FVector GetForwardShot();                                                                                                // [0x2921f00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/POLYGON.Item_Gun_General.GetCurrentStockAmmo
	// int32_t GetCurrentStockAmmo();                                                                                           // [0x2921ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.Item_Gun_General.CockBolt_server
	// void CockBolt_server();                                                                                                  // [0x2921e90] Final|Net|Native|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.Item_Gun_General.CockBolt_multicast
	// void CockBolt_multicast();                                                                                               // [0x2921e70] Final|Net|Native|Event|NetMulticast|Private 
	// Function /Script/POLYGON.Item_Gun_General.AddStockAmmo_server
	// void AddStockAmmo_server(int8_t addAmmo);                                                                                // [0x2921dc0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
};

/// Class /Script/POLYGON.Item_Gun_Pistol
/// Size: 0x0770 (1904 bytes) (0x000770 - 0x000770) align 16 MaxSize: 0x0770
class AItem_Gun_Pistol : public AItem_Gun_General
{ 
public:
};

/// Class /Script/POLYGON.Item_Gun_Rifle
/// Size: 0x0770 (1904 bytes) (0x000770 - 0x000770) align 16 MaxSize: 0x0770
class AItem_Gun_Rifle : public AItem_Gun_General
{ 
public:
};

/// Class /Script/POLYGON.Item_Gun_Sniper
/// Size: 0x0770 (1904 bytes) (0x000770 - 0x000770) align 16 MaxSize: 0x0770
class AItem_Gun_Sniper : public AItem_Gun_General
{ 
public:
};

/// Class /Script/POLYGON.Item_Module_General
/// Size: 0x0348 (840 bytes) (0x000300 - 0x000348) align 8 MaxSize: 0x0348
class AItem_Module_General : public AItem_General
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0300   (0x0008)  MISSED
	EGunModuleType                                     GunModuleType;                                              // 0x0308   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0309   (0x0007)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  ModuleWhiteIcon;                                            // 0x0310   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0318   (0x0028)  MISSED
	bool                                               bIsDefault;                                                 // 0x0340   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0341   (0x0007)  MISSED
};

/// Class /Script/POLYGON.Item_Module_Accessory
/// Size: 0x0350 (848 bytes) (0x000348 - 0x000350) align 8 MaxSize: 0x0350
class AItem_Module_Accessory : public AItem_Module_General
{ 
public:
	FName                                              MountingSocket;                                             // 0x0348   (0x0008)  
};

/// Class /Script/POLYGON.Item_Module_Barrel
/// Size: 0x0350 (848 bytes) (0x000348 - 0x000350) align 8 MaxSize: 0x0350
class AItem_Module_Barrel : public AItem_Module_General
{ 
public:
	class UStaticMeshComponent*                        ModuleMesh;                                                 // 0x0348   (0x0008)  
};

/// Class /Script/POLYGON.Item_Module_Charm
/// Size: 0x0350 (848 bytes) (0x000348 - 0x000350) align 8 MaxSize: 0x0350
class AItem_Module_Charm : public AItem_Module_General
{ 
public:
	class USkeletalMeshComponent*                      BaseMesh;                                                   // 0x0348   (0x0008)  
};

/// Class /Script/POLYGON.Item_Module_Flashlight
/// Size: 0x0370 (880 bytes) (0x000350 - 0x000370) align 8 MaxSize: 0x0370
class AItem_Module_Flashlight : public AItem_Module_Accessory
{ 
public:
	SDK_UNDEFINED(16,906) /* FMulticastInlineDelegate */ __um(OnEnable);                                           // 0x0350   (0x0010)  
	bool                                               bIsEnable;                                                  // 0x0360   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0361   (0x0007)  MISSED
	class UStaticMeshComponent*                        ModuleMesh;                                                 // 0x0368   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.Item_Module_Flashlight.SetFlashlightEnable_server
	// void SetFlashlightEnable_server(bool isEnable);                                                                          // [0x29237f0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.Item_Module_Flashlight.SetFlashlightEnable
	// void SetFlashlightEnable(bool isEnable, bool bCallOnServer);                                                             // [0x2923720] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.Item_Module_Flashlight.OnSetCurrentGun
	// void OnSetCurrentGun(class AItem_Gun_General* previousGun);                                                              // [0x2923690] Final|Native|Private 
	// Function /Script/POLYGON.Item_Module_Flashlight.OnRep_IsEnable
	// void OnRep_IsEnable(bool oldState);                                                                                      // [0x2923600] Final|Native|Protected 
	// Function /Script/POLYGON.Item_Module_Flashlight.OnChangeEnableState
	// void OnChangeEnableState(bool bPlaySound);                                                                               // [0x2c97800] Event|Public|BlueprintEvent 
};

/// Class /Script/POLYGON.Item_Module_Optic
/// Size: 0x0390 (912 bytes) (0x000348 - 0x000390) align 8 MaxSize: 0x0390
class AItem_Module_Optic : public AItem_Module_General
{ 
public:
	FName                                              MountingSocket;                                             // 0x0348   (0x0008)  
	float                                              FOV;                                                        // 0x0350   (0x0004)  
	float                                              StepsImpact;                                                // 0x0354   (0x0004)  
	float                                              BackwardRecoilMultiplier;                                   // 0x0358   (0x0004)  
	float                                              BlurPower;                                                  // 0x035C   (0x0004)  
	float                                              BlurRadius;                                                 // 0x0360   (0x0004)  
	float                                              BlurDensity;                                                // 0x0364   (0x0004)  
	float                                              BlurBlackout;                                               // 0x0368   (0x0004)  
	bool                                               bIsScope;                                                   // 0x036C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x036D   (0x0003)  MISSED
	class UStaticMesh*                                 AimingMesh;                                                 // 0x0370   (0x0008)  
	float                                              ActivateAimingMeshFovAlpha;                                 // 0x0378   (0x0004)  
	float                                              DeactivateAimingMeshFovAlpha;                               // 0x037C   (0x0004)  
	class UMaterialInstance*                           AimingMaterial;                                             // 0x0380   (0x0008)  
	class UStaticMeshComponent*                        ModuleMesh;                                                 // 0x0388   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.Item_Module_Optic.ToggleAiming
	// void ToggleAiming(bool IsAiming);                                                                                        // [0x2923ce0] BlueprintCosmetic|Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/POLYGON.Item_Module_Skin
/// Size: 0x0358 (856 bytes) (0x000348 - 0x000358) align 8 MaxSize: 0x0358
class AItem_Module_Skin : public AItem_Module_General
{ 
public:
	class UMaterialInstance*                           SkinMaterial;                                               // 0x0348   (0x0008)  
	class UMaterialInstance*                           SkinMaterialCorrectFOV;                                     // 0x0350   (0x0008)  
};

/// Class /Script/POLYGON.Item_Module_Strap
/// Size: 0x0350 (848 bytes) (0x000348 - 0x000350) align 8 MaxSize: 0x0350
class AItem_Module_Strap : public AItem_Module_General
{ 
public:
	class UStaticMeshComponent*                        ModuleMesh;                                                 // 0x0348   (0x0008)  
};

/// Class /Script/POLYGON.Item_Module_Underbarrel
/// Size: 0x0350 (848 bytes) (0x000348 - 0x000350) align 8 MaxSize: 0x0350
class AItem_Module_Underbarrel : public AItem_Module_General
{ 
public:
	class UStaticMeshComponent*                        ModuleMesh;                                                 // 0x0348   (0x0008)  
};

/// Class /Script/POLYGON.Item_Module_Underbarrel_Grip
/// Size: 0x03C0 (960 bytes) (0x000350 - 0x0003C0) align 16 MaxSize: 0x03C0
class AItem_Module_Underbarrel_Grip : public AItem_Module_Underbarrel
{ 
public:
	FTransform                                         WatchOffset;                                                // 0x0350   (0x0060)  
	class UAnimSequence*                               GripHandPose;                                               // 0x03B0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x03B8   (0x0008)  MISSED
};

/// Class /Script/POLYGON.Item_Watch_General
/// Size: 0x0310 (784 bytes) (0x000300 - 0x000310) align 8 MaxSize: 0x0310
class AItem_Watch_General : public AItem_General
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0300   (0x0008)  MISSED
	class UStaticMeshComponent*                        WatchMesh;                                                  // 0x0308   (0x0008)  
};

/// Class /Script/POLYGON.PG_AnimInstance
/// Size: 0x0350 (848 bytes) (0x000348 - 0x000350) align 16 MaxSize: 0x0350
class UPG_AnimInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0348   (0x0008)  MISSED
};

/// Class /Script/POLYGON.PG_CharacterMovementComponent
/// Size: 0x0F00 (3840 bytes) (0x000F00 - 0x000F00) align 16 MaxSize: 0x0F00
class UPG_CharacterMovementComponent : public UCharacterMovementComponent
{ 
public:
};

/// Class /Script/POLYGON.PG_FunctionLibraryKit
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPG_FunctionLibraryKit : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/POLYGON.PG_FunctionLibraryKit.StartSessionGameAnalytics
	// void StartSessionGameAnalytics();                                                                                        // [0x29259d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/POLYGON.PG_FunctionLibraryKit.ParseOption
	// FString ParseOption(FString Options, FString Key, FString Separator);                                                    // [0x29257f0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/POLYGON.PG_FunctionLibraryKit.GetRegionEnum
	// EAzureRegion GetRegionEnum(FString regionName);                                                                          // [0x2925740] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/POLYGON.PG_FunctionLibraryKit.GetRateScale
	// float GetRateScale(class UAnimSequenceBase* AnimationSequenceBase);                                                      // [0x29256b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/POLYGON.PG_FunctionLibraryKit.GetProjectVersion
	// FString GetProjectVersion();                                                                                             // [0x2925630] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/POLYGON.PG_FunctionLibraryKit.GetBuildNumber
	// int32_t GetBuildNumber();                                                                                                // [0x2925600] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/POLYGON.PG_FunctionLibraryKit.ExitGame
	// void ExitGame();                                                                                                         // [0x29255e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/POLYGON.PG_FunctionLibraryKit.CopyStringToBuffer
	// void CopyStringToBuffer(FString String);                                                                                 // [0x2925540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/POLYGON.PG_FunctionLibraryKit.ConfigureGameAnalyticsUserId
	// void ConfigureGameAnalyticsUserId(FString UserId);                                                                       // [0x29254a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/POLYGON.PG_GameInstance
/// Size: 0x01D0 (464 bytes) (0x0001C0 - 0x0001D0) align 8 MaxSize: 0x01D0
class UPG_GameInstance : public UGameInstance
{ 
public:
	class UServerGameInstance*                         ServerGameInstance;                                         // 0x01C0   (0x0008)  
	class UClientGameInstance*                         ClientGameInstance;                                         // 0x01C8   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.PG_GameInstance.GetServerGameInstance
	// class UServerGameInstance* GetServerGameInstance();                                                                      // [0x2925c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.PG_GameInstance.GetClientGameInstance
	// class UClientGameInstance* GetClientGameInstance();                                                                      // [0x2925bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/POLYGON.PG_GameMode_Base
/// Size: 0x0378 (888 bytes) (0x000378 - 0x000378) align 8 MaxSize: 0x0378
class APG_GameMode_Base : public AGameMode
{ 
public:
};

/// Struct /Script/POLYGON.BeaconSlotRequest
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FBeaconSlotRequest
{ 
	class APG_BeaconClient*                            BeaconClient;                                               // 0x0000   (0x0008)  
	TArray<FUniqueNetIdRepl>                           UserIds;                                                    // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0018   (0x0008)  MISSED
};

/// Class /Script/POLYGON.PG_GameMode_Game
/// Size: 0x03D0 (976 bytes) (0x000378 - 0x0003D0) align 8 MaxSize: 0x03D0
class APG_GameMode_Game : public APG_GameMode_Base
{ 
public:
	class AOnlineBeaconHost*                           Beacon;                                                     // 0x0378   (0x0008)  
	TArray<FBeaconSlotRequest>                         PlayersQueue;                                               // 0x0380   (0x0010)  
	TArray<class UReservedSlot*>                       ReservedSlots;                                              // 0x0390   (0x0010)  
	TArray<FString>                                    BlackListPlayersID;                                         // 0x03A0   (0x0010)  
	int32_t                                            TotalGameTime;                                              // 0x03B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x03B4   (0x0004)  MISSED
	class UPlayFabJsonObject*                          ServerData;                                                 // 0x03B8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03C0   (0x0008)  MISSED
	class UServerBackendComponent*                     ServerBackendComponent;                                     // 0x03C8   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.PG_GameMode_Game.LoginPlayer
	// void LoginPlayer(class APG_PlayerController_Game* PlayerController, FString PlayerMasterId);                             // [0x2926060] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/POLYGON.PG_GameMode_Game_StandBy
/// Size: 0x0378 (888 bytes) (0x000378 - 0x000378) align 8 MaxSize: 0x0378
class APG_GameMode_Game_StandBy : public AGameMode
{ 
public:
};

/// Class /Script/POLYGON.PG_GameMode_Menu
/// Size: 0x0378 (888 bytes) (0x000378 - 0x000378) align 8 MaxSize: 0x0378
class APG_GameMode_Menu : public APG_GameMode_Base
{ 
public:
};

/// Struct /Script/POLYGON.MapInfo
/// Size: 0x00E8 (232 bytes) (0x000008 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FMapInfo : FTableRowBase
{ 
	FName                                              MapRowName;                                                 // 0x0008   (0x0008)  
	FString                                            MapName;                                                    // 0x0010   (0x0010)  
	FText                                              MapDisplayName;                                             // 0x0020   (0x0018)  
	TArray<EGameMode>                                  GameModes;                                                  // 0x0038   (0x0010)  
	int32_t                                            MaxPlayers;                                                 // 0x0048   (0x0004)  
	int32_t                                            MaxScoreForWin;                                             // 0x004C   (0x0004)  
	float                                              HealthProtectionDuration;                                   // 0x0050   (0x0004)  
	float                                              GrenadeDamageRadiusMultiplier;                              // 0x0054   (0x0004)  
	int32_t                                            CapturePointsPerBeat;                                       // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  MapPreview;                                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0068   (0x0028)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  MinimapImage;                                               // 0x0090   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0098   (0x0028)  MISSED
	float                                              Dimension;                                                  // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	FVector                                            CameraPosition;                                             // 0x00C8   (0x0018)  
	float                                              CameraRotate;                                               // 0x00E0   (0x0004)  
	bool                                               bIsNew;                                                     // 0x00E4   (0x0001)  
	bool                                               IsDevelopment;                                              // 0x00E5   (0x0001)  
	unsigned char                                      UnknownData04_7[0x2];                                       // 0x00E6   (0x0002)  MISSED
};

/// Class /Script/POLYGON.PG_GameState_Game
/// Size: 0x0500 (1280 bytes) (0x000308 - 0x000500) align 8 MaxSize: 0x0500
class APG_GameState_Game : public AGameState
{ 
public:
	SDK_UNDEFINED(16,907) /* FMulticastInlineDelegate */ __um(OnChangeGameState);                                  // 0x0308   (0x0010)  
	SDK_UNDEFINED(16,908) /* FMulticastInlineDelegate */ __um(OnGameTimer);                                        // 0x0318   (0x0010)  
	SDK_UNDEFINED(16,909) /* FMulticastInlineDelegate */ __um(OnCanMovePlayers);                                   // 0x0328   (0x0010)  
	SDK_UNDEFINED(16,910) /* FMulticastInlineDelegate */ __um(OnTeamWon);                                          // 0x0338   (0x0010)  
	SDK_UNDEFINED(16,911) /* FMulticastInlineDelegate */ __um(OnChangePlayersArray);                               // 0x0348   (0x0010)  
	SDK_UNDEFINED(16,912) /* FMulticastInlineDelegate */ __um(OnChangeTeamAlphaArray);                             // 0x0358   (0x0010)  
	SDK_UNDEFINED(16,913) /* FMulticastInlineDelegate */ __um(OnChangeTeamBravoArray);                             // 0x0368   (0x0010)  
	SDK_UNDEFINED(16,914) /* FMulticastInlineDelegate */ __um(OnChangeTotalScore);                                 // 0x0378   (0x0010)  
	SDK_UNDEFINED(16,915) /* FMulticastInlineDelegate */ __um(OnServerFps);                                        // 0x0388   (0x0010)  
	EPG_GameState                                      GameState;                                                  // 0x0398   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0399   (0x0007)  MISSED
	FMapInfo                                           CurrentMapInfo;                                             // 0x03A0   (0x00E8)  
	uint16_t                                           GameTimer;                                                  // 0x0488   (0x0002)  
	bool                                               bCanMovePlayers;                                            // 0x048A   (0x0001)  
	ETeam                                              WinningTeam;                                                // 0x048B   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x048C   (0x0004)  MISSED
	TArray<class APG_PlayerState_Game*>                Players;                                                    // 0x0490   (0x0010)  
	TArray<class APG_PlayerState_Game*>                TeamAlpha;                                                  // 0x04A0   (0x0010)  
	TArray<class APG_PlayerState_Game*>                TeamBravo;                                                  // 0x04B0   (0x0010)  
	TArray<class ATeamBase*>                           AllTeamBases;                                               // 0x04C0   (0x0010)  
	TArray<class AControlPoint*>                       AllControlPoints;                                           // 0x04D0   (0x0010)  
	TArray<class APlayerStart*>                        PlayerStarts;                                               // 0x04E0   (0x0010)  
	uint16_t                                           ScoreAlphaTeam;                                             // 0x04F0   (0x0002)  
	uint16_t                                           ScoreBravoTeam;                                             // 0x04F2   (0x0002)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x04F4   (0x0002)  MISSED
	char                                               ServerFps;                                                  // 0x04F6   (0x0001)  
	unsigned char                                      UnknownData03_7[0x9];                                       // 0x04F7   (0x0009)  MISSED


	/// Functions
	// Function /Script/POLYGON.PG_GameState_Game.SetCanMovePlayers
	// void SetCanMovePlayers(bool newMoveState);                                                                               // [0x29272d0] Final|Native|Public  
	// Function /Script/POLYGON.PG_GameState_Game.OnRep_WinningTeam
	// void OnRep_WinningTeam();                                                                                                // [0x29272b0] Final|Native|Private|Const 
	// Function /Script/POLYGON.PG_GameState_Game.OnRep_TeamBravo
	// void OnRep_TeamBravo();                                                                                                  // [0x2927290] Final|Native|Private|Const 
	// Function /Script/POLYGON.PG_GameState_Game.OnRep_TeamAlpha
	// void OnRep_TeamAlpha();                                                                                                  // [0x2927270] Final|Native|Private|Const 
	// Function /Script/POLYGON.PG_GameState_Game.OnRep_ServerFps
	// void OnRep_ServerFps();                                                                                                  // [0x2927250] Final|Native|Private|Const 
	// Function /Script/POLYGON.PG_GameState_Game.OnRep_ScoreBravoTeam
	// void OnRep_ScoreBravoTeam();                                                                                             // [0x2927230] Final|Native|Private|Const 
	// Function /Script/POLYGON.PG_GameState_Game.OnRep_ScoreAlphaTeam
	// void OnRep_ScoreAlphaTeam();                                                                                             // [0x2927230] Final|Native|Private|Const 
	// Function /Script/POLYGON.PG_GameState_Game.OnRep_Players
	// void OnRep_Players();                                                                                                    // [0x2927210] Final|Native|Private|Const 
	// Function /Script/POLYGON.PG_GameState_Game.OnRep_GameTimer
	// void OnRep_GameTimer();                                                                                                  // [0x2922550] Final|Native|Private|Const 
	// Function /Script/POLYGON.PG_GameState_Game.OnRep_GameState
	// void OnRep_GameState();                                                                                                  // [0x29271f0] Final|Native|Private|Const 
	// Function /Script/POLYGON.PG_GameState_Game.OnRep_CanMovePlayers
	// void OnRep_CanMovePlayers();                                                                                             // [0x29271d0] Final|Native|Private|Const 
	// Function /Script/POLYGON.PG_GameState_Game.NotifyPlayerWasKicked
	// void NotifyPlayerWasKicked(FString badGuyName, bool bNameWasOptimized);                                                  // [0x29270e0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/POLYGON.PG_GameState_Game.GetScoreBravoTeam
	// int32_t GetScoreBravoTeam();                                                                                             // [0x29270c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.PG_GameState_Game.GetScoreAlphaTeam
	// int32_t GetScoreAlphaTeam();                                                                                             // [0x29270a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.PG_GameState_Game.GetMaxScoreForWin
	// int32_t GetMaxScoreForWin();                                                                                             // [0x2927080] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.PG_GameState_Game.GetGameTimer
	// int32_t GetGameTimer();                                                                                                  // [0x2927060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/POLYGON.PG_Game_Character
/// Size: 0x0740 (1856 bytes) (0x000628 - 0x000740) align 16 MaxSize: 0x0740
class APG_Game_Character : public ACharacter
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0628   (0x0018)  MISSED
	SDK_UNDEFINED(16,916) /* FMulticastInlineDelegate */ __um(OnSetPlayerState);                                   // 0x0640   (0x0010)  
	SDK_UNDEFINED(16,917) /* FMulticastInlineDelegate */ __um(OnSetActorHiddenInGame);                             // 0x0650   (0x0010)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0660   (0x0001)  MISSED
	EPlayerAction                                      PlayerAction;                                               // 0x0661   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0662   (0x0002)  MISSED
	float                                              leanBodyAlpha;                                              // 0x0664   (0x0004)  
	char                                               RespawnCounter;                                             // 0x0668   (0x0001)  
	unsigned char                                      UnknownData03_6[0xB];                                       // 0x0669   (0x000B)  MISSED
	float                                              ControllerPitchRotation;                                    // 0x0674   (0x0004)  
	float                                              ControllerYawRotation;                                      // 0x0678   (0x0004)  
	unsigned char                                      UnknownData04_6[0xC];                                       // 0x067C   (0x000C)  MISSED
	class AActor*                                      FocusActor;                                                 // 0x0688   (0x0008)  
	unsigned char                                      UnknownData05_6[0x8];                                       // 0x0690   (0x0008)  MISSED
	class AActor*                                      CurrentInteractActor;                                       // 0x0698   (0x0008)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x06A0   (0x0008)  MISSED
	class UParticleSystem*                             ParticleDamageBlood;                                        // 0x06A8   (0x0008)  
	class USoundBase*                                  SoundBullet;                                                // 0x06B0   (0x0008)  
	class UClass*                                      FirstPersonAnimInstanceClass;                               // 0x06B8   (0x0008)  
	class USkeletalMesh*                               FirstPersonCharacterMesh;                                   // 0x06C0   (0x0008)  
	class USkeletalMesh*                               ThirdPersonCharacterMesh;                                   // 0x06C8   (0x0008)  
	class UArrowComponent*                             ViewArrow;                                                  // 0x06D0   (0x0008)  
	class UCameraComponent*                            FirstPersonCamera;                                          // 0x06D8   (0x0008)  
	class USpringArmComponent*                         ThirdPersonCameraBoom;                                      // 0x06E0   (0x0008)  
	class UCameraComponent*                            ThirdPersonCamera;                                          // 0x06E8   (0x0008)  
	class UInputComponent*                             PlayerInputComponent;                                       // 0x06F0   (0x0008)  
	class UWidgetComponent*                            WidgetPlayerMarker;                                         // 0x06F8   (0x0008)  
	class USpringArmComponent*                         SpectatorCameraBoom;                                        // 0x0700   (0x0008)  
	class USceneCaptureComponent2D*                    SpectatorCameraCapture;                                     // 0x0708   (0x0008)  
	class USkeletalMeshComponent*                      Armor;                                                      // 0x0710   (0x0008)  
	class UStaticMeshComponent*                        HeadGear;                                                   // 0x0718   (0x0008)  
	class UStaticMeshComponent*                        Backpack;                                                   // 0x0720   (0x0008)  
	class AItem_Watch_General*                         Watch;                                                      // 0x0728   (0x0008)  
	class UHealthStatsComponent*                       HealthStatsComponent;                                       // 0x0730   (0x0008)  
	class UWeaponComponent*                            WeaponComponent;                                            // 0x0738   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.PG_Game_Character.StopInteractWithObject_server
	// void StopInteractWithObject_server();                                                                                    // [0x29289d0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/POLYGON.PG_Game_Character.StopInteractWithObject
	// void StopInteractWithObject();                                                                                           // [0x29289b0] Final|Native|Protected 
	// Function /Script/POLYGON.PG_Game_Character.StartShooting
	// void StartShooting();                                                                                                    // [0x2c97800] Event|Public|BlueprintEvent 
	// Function /Script/POLYGON.PG_Game_Character.StartInteractWithObject_server
	// void StartInteractWithObject_server(class AActor* interactActor);                                                        // [0x29288f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/POLYGON.PG_Game_Character.StartInteractWithObject
	// void StartInteractWithObject();                                                                                          // [0x29288d0] Final|Native|Protected 
	// Function /Script/POLYGON.PG_Game_Character.SetNeutralizationVignetteImpact
	// void SetNeutralizationVignetteImpact(float newNeutralizationVignetteImpact);                                             // [0x2928850] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.PG_Game_Character.SetIsSprinting_server
	// void SetIsSprinting_server(bool NewState);                                                                               // [0x2928790] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.PG_Game_Character.Respawn_client
	// void Respawn_client(FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal newRotator);                              // [0x29286d0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/POLYGON.PG_Game_Character.Respawn
	// void Respawn();                                                                                                          // [0x29286b0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/POLYGON.PG_Game_Character.PlayerLooks
	// void PlayerLooks();                                                                                                      // [0x2928690] Final|BlueprintAuthorityOnly|Native|Private 
	// Function /Script/POLYGON.PG_Game_Character.OnRep_RespawnCounter
	// void OnRep_RespawnCounter(char PreviousValue);                                                                           // [0x2928610] Final|Native|Private 
	// Function /Script/POLYGON.PG_Game_Character.OnRep_PlayerAction
	// void OnRep_PlayerAction(EPlayerAction previousAction);                                                                   // [0x2928590] Final|Native|Private 
	// Function /Script/POLYGON.PG_Game_Character.NotifyDeathWithImpulse_multicast
	// void NotifyDeathWithImpulse_multicast(class APG_PlayerState_Game* killer, EPlayerDeathType deathType, FVector_NetQuantize Impulse, char BoneIndex); // [0x2928360] Net|Native|Event|NetMulticast|Public 
	// Function /Script/POLYGON.PG_Game_Character.NotifyDeath_multicast
	// void NotifyDeath_multicast(class APG_PlayerState_Game* killer, EPlayerDeathType deathType);                              // [0x29284c0] Net|Native|Event|NetMulticast|Public 
	// Function /Script/POLYGON.PG_Game_Character.LeanBody_server
	// void LeanBody_server(int8_t leanBodyAlpha);                                                                              // [0x29282b0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/POLYGON.PG_Game_Character.HitAtProtectedCharacter
	// void HitAtProtectedCharacter();                                                                                          // [0x2c97800] Event|Public|BlueprintEvent 
	// Function /Script/POLYGON.PG_Game_Character.GetTeam
	// ETeam GetTeam();                                                                                                         // [0x2928280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.PG_Game_Character.GetPlayerAction
	// EPlayerAction GetPlayerAction();                                                                                         // [0x2928260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.PG_Game_Character.GetNeutralizationVignetteImpact
	// float GetNeutralizationVignetteImpact();                                                                                 // [0x2928240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.PG_Game_Character.GetIsSprinting
	// bool GetIsSprinting();                                                                                                   // [0x2928220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.PG_Game_Character.GetActiveCamera
	// class UCameraComponent* GetActiveCamera();                                                                               // [0x29281f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.PG_Game_Character.EventTakeDamage
	// void EventTakeDamage(FVector& Origin);                                                                                   // [0x2c97800] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/POLYGON.PG_Game_Character.DeathEvent
	// void DeathEvent(class APG_PlayerState_Game* killer, EPlayerDeathType deathType);                                         // [0x2c97800] Event|Public|BlueprintEvent 
	// Function /Script/POLYGON.PG_Game_Character.ChangeIsAlive
	// void ChangeIsAlive();                                                                                                    // [0x29281d0] Final|Native|Public  
	// Function /Script/POLYGON.PG_Game_Character.CameraNeutralizationEffectEvent
	// void CameraNeutralizationEffectEvent(float Damage);                                                                      // [0x2c97800] Event|Public|BlueprintEvent 
	// Function /Script/POLYGON.PG_Game_Character.ActionWhenTakeDamage_client
	// void ActionWhenTakeDamage_client(class AActor* DamageCauser);                                                            // [0x2928140] Final|Net|Native|Event|Private|NetClient 
	// Function /Script/POLYGON.PG_Game_Character.ActionWhenGunHit_client
	// void ActionWhenGunHit_client(class APG_Game_Character* characterInstigator, char hitBoneIndex);                          // [0x2928070] Final|Net|Native|Event|Private|NetClient 
};

/// Class /Script/POLYGON.PG_Menu_Character
/// Size: 0x02B8 (696 bytes) (0x000290 - 0x0002B8) align 8 MaxSize: 0x02B8
class APG_Menu_Character : public AActor
{ 
public:
	TWeakObjectPtr<class APG_Menu_Character*>          Instance;                                                   // 0x0290   (0x0008)  
	class USkeletalMeshComponent*                      Mesh;                                                       // 0x0298   (0x0008)  
	class USkeletalMeshComponent*                      Armor;                                                      // 0x02A0   (0x0008)  
	class UStaticMeshComponent*                        HeadGear;                                                   // 0x02A8   (0x0008)  
	class UStaticMeshComponent*                        Backpack;                                                   // 0x02B0   (0x0008)  
};

/// Class /Script/POLYGON.PG_BeaconHostObject
/// Size: 0x02B8 (696 bytes) (0x0002B8 - 0x0002B8) align 8 MaxSize: 0x02B8
class APG_BeaconHostObject : public AOnlineBeaconHostObject
{ 
public:
};

/// Class /Script/POLYGON.PG_BeaconClient
/// Size: 0x0350 (848 bytes) (0x000320 - 0x000350) align 8 MaxSize: 0x0350
class APG_BeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0320   (0x0030)  MISSED


	/// Functions
	// Function /Script/POLYGON.PG_BeaconClient.SendNumberInQueue_client
	// void SendNumberInQueue_client(char Number);                                                                              // [0x29297e0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/POLYGON.PG_BeaconClient.ResponseReserveSlot_client
	// void ResponseReserveSlot_client(char Payload);                                                                           // [0x2929760] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/POLYGON.PG_BeaconClient.RequestReserveSlot_server
	// void RequestReserveSlot_server(TArray<FUniqueNetIdRepl> unequeIds, bool isUsedMatchmaker);                               // [0x29295f0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.PG_BeaconClient.RequestReserveSlot
	// void RequestReserveSlot(TArray<FUniqueNetIdRepl>& unequeIds, bool isUsedMatchmaker, FDelegateProperty onResponseReserveSlot, FDelegateProperty onPutInQueue); // [0x29293f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/POLYGON.PG_BeaconClient.LeaveQueue
	// void LeaveQueue();                                                                                                       // [0x29293d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.PG_BeaconClient.ConnectToServer
	// bool ConnectToServer(FString IP, int32_t BeaconPort, FDelegateProperty onConnectedStateChange);                          // [0x2929280] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/POLYGON.PG_PlayerController_Base
/// Size: 0x0888 (2184 bytes) (0x000850 - 0x000888) align 8 MaxSize: 0x0888
class APG_PlayerController_Base : public APlayerController
{ 
public:
	SDK_UNDEFINED(16,918) /* FMulticastInlineDelegate */ __um(OnSetPlayerState);                                   // 0x0850   (0x0010)  
	SDK_UNDEFINED(16,919) /* FMulticastInlineDelegate */ __um(OnClientReset);                                      // 0x0860   (0x0010)  
	int32_t                                            AimMode;                                                    // 0x0870   (0x0004)  
	int32_t                                            CrouchMode;                                                 // 0x0874   (0x0004)  
	int32_t                                            LeanMode;                                                   // 0x0878   (0x0004)  
	int32_t                                            SprintMode;                                                 // 0x087C   (0x0004)  
	bool                                               bSprintCancelReload;                                        // 0x0880   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0881   (0x0007)  MISSED


	/// Functions
	// Function /Script/POLYGON.PG_PlayerController_Base.ShowError
	// void ShowError(FText& ErrorMessage, FText& ErrorDetails);                                                                // [0x2c97800] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/POLYGON.PG_PlayerController_Base.IsInvertMouse
	// bool IsInvertMouse();                                                                                                    // [0x2929ce0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/POLYGON.PG_PlayerController_Base.GetMouseSensitivityValue
	// float GetMouseSensitivityValue();                                                                                        // [0x2929cb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/POLYGON.PG_PlayerController_Base.GetMouseSensitivityAimingValue
	// float GetMouseSensitivityAimingValue();                                                                                  // [0x2929c80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/POLYGON.PG_PlayerController_Game
/// Size: 0x08B8 (2232 bytes) (0x000888 - 0x0008B8) align 8 MaxSize: 0x08B8
class APG_PlayerController_Game : public APG_PlayerController_Base
{ 
public:
	SDK_UNDEFINED(16,920) /* FMulticastInlineDelegate */ __um(OnDeployIsAvailable);                                // 0x0888   (0x0010)  
	float                                              TimeVoteKick;                                               // 0x0898   (0x0004)  
	bool                                               bDeployIsAvailable;                                         // 0x089C   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x089D   (0x000B)  MISSED
	class UEventManagerComponent*                      EventManagerComponent;                                      // 0x08A8   (0x0008)  
	class UFOVManagerComponent*                        FOVManagerComponent;                                        // 0x08B0   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.PG_PlayerController_Game.VoteKick
	// void VoteKick(class APG_PlayerState_Game* badGuy);                                                                       // [0x292a860] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/POLYGON.PG_PlayerController_Game.StopInteractionEvent
	// void StopInteractionEvent();                                                                                             // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/POLYGON.PG_PlayerController_Game.StopInteraction_Client
	// void StopInteraction_Client();                                                                                           // [0x292a840] Net|Native|Event|Public|NetClient 
	// Function /Script/POLYGON.PG_PlayerController_Game.StartInteractionEvent
	// void StartInteractionEvent(float interactionTime);                                                                       // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/POLYGON.PG_PlayerController_Game.StartInteraction_Client
	// void StartInteraction_Client(float interactionTime);                                                                     // [0x292a7b0] Net|Native|Event|Public|NetClient 
	// Function /Script/POLYGON.PG_PlayerController_Game.SetVisibleLoadingScreen
	// void SetVisibleLoadingScreen(bool IsVisible);                                                                            // [0x2c97800] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/POLYGON.PG_PlayerController_Game.SetCameraFOV
	// void SetCameraFOV(float newCameraFOV);                                                                                   // [0x292a730] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.PG_PlayerController_Game.SetAsSpectator_Client
	// void SetAsSpectator_Client();                                                                                            // [0x292a710] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/POLYGON.PG_PlayerController_Game.RequestSpawnOnSquadMember_server
	// void RequestSpawnOnSquadMember_server(class APG_PlayerState_Game* squadMember);                                          // [0x292a650] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/POLYGON.PG_PlayerController_Game.RequestSpawnOnControlPoint_server
	// void RequestSpawnOnControlPoint_server(EControlPoint spawnToControlPoint);                                               // [0x292a5a0] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/POLYGON.PG_PlayerController_Game.RequestSpawnOnBase_server
	// void RequestSpawnOnBase_server();                                                                                        // [0x292a550] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/POLYGON.PG_PlayerController_Game.OnRep_DeployIsAvailable
	// void OnRep_DeployIsAvailable();                                                                                          // [0x292a530] Final|Native|Private 
	// Function /Script/POLYGON.PG_PlayerController_Game.LoginPlayer_server
	// void LoginPlayer_server(FString PlayerMasterId);                                                                         // [0x292a460] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.PG_PlayerController_Game.DisplayMessageToChatEvent
	// void DisplayMessageToChatEvent(FGameChatMessage Message);                                                                // [0x2c97800] Event|Public|BlueprintEvent 
};

/// Class /Script/POLYGON.PG_PlayerController_Menu
/// Size: 0x0888 (2184 bytes) (0x000888 - 0x000888) align 8 MaxSize: 0x0888
class APG_PlayerController_Menu : public APG_PlayerController_Base
{ 
public:
};

/// Class /Script/POLYGON.PG_PlayerState_Base
/// Size: 0x03C0 (960 bytes) (0x0003A8 - 0x0003C0) align 8 MaxSize: 0x03C0
class APG_PlayerState_Base : public APlayerState
{ 
public:
	SDK_UNDEFINED(16,921) /* FMulticastInlineDelegate */ __um(OnPlayerNameChanged);                                // 0x03A8   (0x0010)  
	class UClientBackendComponent*                     ClientBackendComponent;                                     // 0x03B8   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.PG_PlayerState_Base.UpdatePlayerCombinedInfo
	// void UpdatePlayerCombinedInfo(TArray<EModifiedData>& ModifiedData, FString customDelegateString);                        // [0x292af00] Native|Protected|HasOutParms 
	// Function /Script/POLYGON.PG_PlayerState_Base.SetPlayerName
	// void SetPlayerName(FString PlayerName);                                                                                  // [0x292ae50] Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.PG_PlayerState_Base.GetUniqueNetId
	// FUniqueNetIdRepl GetUniqueNetId();                                                                                       // [0x292ad40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/POLYGON.PG_PlayerState_Game
/// Size: 0x0470 (1136 bytes) (0x0003C0 - 0x000470) align 8 MaxSize: 0x0470
class APG_PlayerState_Game : public APG_PlayerState_Base
{ 
public:
	SDK_UNDEFINED(16,922) /* FMulticastInlineDelegate */ __um(OnSetTeam);                                          // 0x03C0   (0x0010)  
	SDK_UNDEFINED(16,923) /* FMulticastInlineDelegate */ __um(OnChangeNumberKills);                                // 0x03D0   (0x0010)  
	SDK_UNDEFINED(16,924) /* FMulticastInlineDelegate */ __um(OnChangeNumberDeaths);                               // 0x03E0   (0x0010)  
	SDK_UNDEFINED(16,925) /* FMulticastInlineDelegate */ __um(OnChangeNumberAssists);                              // 0x03F0   (0x0010)  
	SDK_UNDEFINED(16,926) /* FMulticastInlineDelegate */ __um(OnVoteKick);                                         // 0x0400   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0410   (0x0008)  MISSED
	TArray<class APG_PlayerState_Game*>                VoteKickPlayers;                                            // 0x0418   (0x0010)  
	ETeam                                              Team;                                                       // 0x0428   (0x0001)  
	char                                               NumberKills;                                                // 0x0429   (0x0001)  
	char                                               NumberDeaths;                                               // 0x042A   (0x0001)  
	char                                               NumberAssists;                                              // 0x042B   (0x0001)  
	char                                               NumberKillsByMe;                                            // 0x042C   (0x0001)  
	char                                               NumberKillsOfMe;                                            // 0x042D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x042E   (0x0006)  MISSED
	bool                                               bIsAdmin;                                                   // 0x0434   (0x0001)  
	bool                                               bIsPatron;                                                  // 0x0435   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1A];                                      // 0x0436   (0x001A)  MISSED
	class UPlayerCoreComponent*                        PlayerCoreComponent;                                        // 0x0450   (0x0008)  
	class UInventoryComponent_Game*                    InventoryComponent;                                         // 0x0458   (0x0008)  
	class USquadComponent*                             SquadComponent;                                             // 0x0460   (0x0008)  
	class UChatSystemComponent*                        ChatSystemComponent;                                        // 0x0468   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.PG_PlayerState_Game.SetTeam
	// void SetTeam(ETeam newTeam);                                                                                             // [0x292b7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.PG_PlayerState_Game.OnRep_VoteKickPlayers
	// void OnRep_VoteKickPlayers();                                                                                            // [0x292b7b0] Final|Native|Private 
	// Function /Script/POLYGON.PG_PlayerState_Game.OnRep_Team
	// void OnRep_Team();                                                                                                       // [0x292b790] Final|Native|Private 
	// Function /Script/POLYGON.PG_PlayerState_Game.OnRep_NumberKills
	// void OnRep_NumberKills();                                                                                                // [0x292b770] Final|Native|Private 
	// Function /Script/POLYGON.PG_PlayerState_Game.OnRep_NumberDeaths
	// void OnRep_NumberDeaths();                                                                                               // [0x292b750] Final|Native|Private 
	// Function /Script/POLYGON.PG_PlayerState_Game.OnRep_NumberAssists
	// void OnRep_NumberAssists();                                                                                              // [0x292b730] Final|Native|Private 
	// Function /Script/POLYGON.PG_PlayerState_Game.CustomIsInactive
	// bool CustomIsInactive();                                                                                                 // [0x292b700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/POLYGON.PG_PlayerState_Menu
/// Size: 0x03C8 (968 bytes) (0x0003C0 - 0x0003C8) align 8 MaxSize: 0x03C8
class APG_PlayerState_Menu : public APG_PlayerState_Base
{ 
public:
	class UInventoryComponent_Menu*                    InventoryComponent;                                         // 0x03C0   (0x0008)  
};

/// Class /Script/POLYGON.PG_SpectatorPawn
/// Size: 0x0348 (840 bytes) (0x000340 - 0x000348) align 8 MaxSize: 0x0348
class APG_SpectatorPawn : public ASpectatorPawn
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0340   (0x0008)  MISSED


	/// Functions
	// Function /Script/POLYGON.PG_SpectatorPawn.SetMovementSpeed
	// void SetMovementSpeed(float newSpeed);                                                                                   // [0x292bd60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/POLYGON.PG_SpectatorPawn.SetIsAiming
	// void SetIsAiming(bool IsAiming);                                                                                         // [0x292bcd0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/POLYGON.PG_SpectatorPawn.ChangeMovementSpeed
	// void ChangeMovementSpeed(float Delta);                                                                                   // [0x292bc50] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/POLYGON.PlayerCoreComponent
/// Size: 0x0198 (408 bytes) (0x0000A0 - 0x000198) align 8 MaxSize: 0x0198
class UPlayerCoreComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,927) /* FMulticastInlineDelegate */ __um(OnTotalProgress);                                    // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,928) /* FMulticastInlineDelegate */ __um(OnNewLevelReceived);                                 // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,929) /* FMulticastInlineDelegate */ __um(OnAddedGameScore);                                   // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,930) /* FMulticastInlineDelegate */ __um(OnNotifyPossibilityUnlockModule);                    // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00E0   (0x0008)  MISSED
	int32_t                                            InitialTotalProgress;                                       // 0x00E8   (0x0004)  
	int32_t                                            TotalProgress;                                              // 0x00EC   (0x0004)  
	bool                                               bHasVipStatus;                                              // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xA7];                                      // 0x00F1   (0x00A7)  MISSED


	/// Functions
	// Function /Script/POLYGON.PlayerCoreComponent.UpdatePlayerCombinedInfo
	// void UpdatePlayerCombinedInfo(TArray<EModifiedData>& ModifiedData, FString customDelegateString);                        // [0x292caf0] Final|Native|Private|HasOutParms 
	// Function /Script/POLYGON.PlayerCoreComponent.Reset
	// void Reset();                                                                                                            // [0x292cad0] Final|Native|Public  
	// Function /Script/POLYGON.PlayerCoreComponent.OnRep_TotalProgress
	// void OnRep_TotalProgress();                                                                                              // [0x292cab0] Final|Native|Private 
	// Function /Script/POLYGON.PlayerCoreComponent.NotifyAddedGameScore_client
	// void NotifyAddedGameScore_client(TArray<FScoreInfo> ScoreInfos);                                                         // [0x292ca10] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/POLYGON.PlayerCoreComponent.GetNextLevelInfo
	// FLevelInfo GetNextLevelInfo();                                                                                           // [0x292c900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.PlayerCoreComponent.GetNextLevelByLevelID
	// FLevelInfo GetNextLevelByLevelID(FName LevelID);                                                                         // [0x292c820] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/POLYGON.PlayerCoreComponent.GetLevelByProgress
	// FLevelInfo GetLevelByProgress(int32_t Progress);                                                                         // [0x292c740] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/POLYGON.PlayerCoreComponent.GetCurrentLevelInfo
	// FLevelInfo GetCurrentLevelInfo();                                                                                        // [0x292c630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.PlayerCoreComponent.AddCredits
	// void AddCredits(int32_t AddCredits);                                                                                     // [0x292c5a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/POLYGON.ReservedSlot
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UReservedSlot : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0028   (0x0050)  MISSED
};

/// Class /Script/POLYGON.ServerBackendComponent
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UServerBackendComponent : public UGeneralBackendComponent
{ 
public:
};

/// Class /Script/POLYGON.ServerGameInstance
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UServerGameInstance : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/POLYGON.ServerGameInstance.OnGSDKShutdown
	// void OnGSDKShutdown();                                                                                                   // [0x292d540] Final|Native|Protected 
	// Function /Script/POLYGON.ServerGameInstance.OnGSDKServerActive
	// void OnGSDKServerActive();                                                                                               // [0x292d520] Final|Native|Protected 
	// Function /Script/POLYGON.ServerGameInstance.OnGSDKReadyForPlayers
	// void OnGSDKReadyForPlayers();                                                                                            // [0x13b6180] Final|Native|Protected 
	// Function /Script/POLYGON.ServerGameInstance.OnGSDKHealthCheck
	// bool OnGSDKHealthCheck();                                                                                                // [0x292d4f0] Final|Native|Protected 
};

/// Class /Script/POLYGON.SquadComponent
/// Size: 0x00F0 (240 bytes) (0x0000A0 - 0x0000F0) align 8 MaxSize: 0x00F0
class USquadComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,931) /* FMulticastInlineDelegate */ __um(OnMembersUpdate);                                    // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,932) /* FMulticastInlineDelegate */ __um(OnIsMemberMySquad);                                  // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,933) /* FMulticastInlineDelegate */ __um(OnCooldownStarted);                                  // 0x00C0   (0x0010)  
	bool                                               bIsMemberMySquad;                                           // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
	TArray<class APG_PlayerState_Game*>                Members;                                                    // 0x00D8   (0x0010)  
	char                                               CooldownCounter;                                            // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00E9   (0x0003)  MISSED
	float                                              CooldownStartTime;                                          // 0x00EC   (0x0004)  


	/// Functions
	// Function /Script/POLYGON.SquadComponent.OnRep_Members
	// void OnRep_Members();                                                                                                    // [0x292d920] Final|Native|Private 
	// Function /Script/POLYGON.SquadComponent.OnRep_CooldownCounter
	// void OnRep_CooldownCounter();                                                                                            // [0x292d900] Final|Native|Private 
};

/// Class /Script/POLYGON.SupportBox
/// Size: 0x02B8 (696 bytes) (0x000290 - 0x0002B8) align 8 MaxSize: 0x02B8
class ASupportBox : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0290   (0x0008)  MISSED
	TArray<class APG_Game_Character*>                  CoverageCharacters;                                         // 0x0298   (0x0010)  
	class UStaticMeshComponent*                        BoxMesh;                                                    // 0x02A8   (0x0008)  
	class UWidgetComponent*                            WidgetTypeSupportBox;                                       // 0x02B0   (0x0008)  


	/// Functions
	// Function /Script/POLYGON.SupportBox.OnCoverageEndOverlap
	// void OnCoverageEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x292ddd0] Final|Native|Private 
	// Function /Script/POLYGON.SupportBox.OnCoverageBeginOverlap
	// void OnCoverageBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool fromSweep, FHitResult& SweepResult); // [0x292db70] Final|Native|Private|HasOutParms 
};

/// Class /Script/POLYGON.SupportBox_Ammo
/// Size: 0x02C0 (704 bytes) (0x0002B8 - 0x0002C0) align 8 MaxSize: 0x02C0
class ASupportBox_Ammo : public ASupportBox
{ 
public:
	class USoundBase*                                  ActionSound;                                                // 0x02B8   (0x0008)  
};

/// Class /Script/POLYGON.SupportBox_Health
/// Size: 0x02B8 (696 bytes) (0x0002B8 - 0x0002B8) align 8 MaxSize: 0x02B8
class ASupportBox_Health : public ASupportBox
{ 
public:
};

/// Class /Script/POLYGON.TeamBase
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class ATeamBase : public AActor
{ 
public:
	ETeam                                              Team;                                                       // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0291   (0x0007)  MISSED
};

/// Class /Script/POLYGON.UserEntry
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UUserEntry : public UObject
{ 
public:
};

/// Class /Script/POLYGON.WeaponComponent
/// Size: 0x0150 (336 bytes) (0x0000A0 - 0x000150) align 8 MaxSize: 0x0150
class UWeaponComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,934) /* FMulticastInlineDelegate */ __um(OnAiming);                                           // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x1D];                                      // 0x00B0   (0x001D)  MISSED
	bool                                               bIsAiming;                                                  // 0x00CD   (0x0001)  
	bool                                               bGunIsDown;                                                 // 0x00CE   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00CF   (0x0001)  MISSED
	class UParticleSystem*                             FireFXLocal;                                                // 0x00D0   (0x0008)  
	class UParticleSystem*                             FireFXSimulate;                                             // 0x00D8   (0x0008)  
	class UParticleSystem*                             HitFX_Metal;                                                // 0x00E0   (0x0008)  
	class UParticleSystem*                             HitFX_Stone;                                                // 0x00E8   (0x0008)  
	class UParticleSystem*                             HitFX_Dirt;                                                 // 0x00F0   (0x0008)  
	class UParticleSystem*                             HitFX_Wood;                                                 // 0x00F8   (0x0008)  
	class UParticleSystem*                             HitFX_Water;                                                // 0x0100   (0x0008)  
	class UParticleSystem*                             HitFX_Glass;                                                // 0x0108   (0x0008)  
	class UParticleSystem*                             HitFX_Blood;                                                // 0x0110   (0x0008)  
	class UMaterialInterface*                          DecalImpact;                                                // 0x0118   (0x0008)  
	class USoundBase*                                  SoundCharacterHit;                                          // 0x0120   (0x0008)  
	class USoundBase*                                  SoundCharacterHit_Protection;                               // 0x0128   (0x0008)  
	class USoundBase*                                  SoundRicochetHit;                                           // 0x0130   (0x0008)  
	class USoundBase*                                  SoundBodyHit;                                               // 0x0138   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/POLYGON.WeaponComponent.ToggleAiming_server
	// void ToggleAiming_server();                                                                                              // [0x292f2d0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.WeaponComponent.SetWantsToAiming_server
	// void SetWantsToAiming_server(bool NewState);                                                                             // [0x292f210] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.WeaponComponent.SetStrivingGunRecoilAlpha_Pitch
	// void SetStrivingGunRecoilAlpha_Pitch(float newStrivingPitchRecoil);                                                      // [0x292f190] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.WeaponComponent.SetGunRecoilIsActive_Backward
	// void SetGunRecoilIsActive_Backward();                                                                                    // [0x292f170] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.WeaponComponent.SetGunRecoilAlpha_Yaw
	// void SetGunRecoilAlpha_Yaw(float newYawRecoil);                                                                          // [0x292f0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.WeaponComponent.SetGunRecoilAlpha_Roll
	// void SetGunRecoilAlpha_Roll(float newRollRecoil);                                                                        // [0x292f070] Final|Native|Public|BlueprintCallable 
	// Function /Script/POLYGON.WeaponComponent.SelectGunSlot_server
	// void SelectGunSlot_server(char Slot);                                                                                    // [0x292efc0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.WeaponComponent.OnSetSecondaryGun
	// void OnSetSecondaryGun(class AItem_Gun_General* oldGun);                                                                 // [0x292ef30] Final|Native|Private 
	// Function /Script/POLYGON.WeaponComponent.OnSetPrimaryGun
	// void OnSetPrimaryGun(class AItem_Gun_General* oldGun);                                                                   // [0x292eea0] Final|Native|Private 
	// Function /Script/POLYGON.WeaponComponent.OnSetPlayerState
	// void OnSetPlayerState();                                                                                                 // [0x292ee80] Final|Native|Private 
	// Function /Script/POLYGON.WeaponComponent.OnSetCurrentGun
	// void OnSetCurrentGun(class AItem_Gun_General* OldCurrentGun);                                                            // [0x292edf0] Final|Native|Private 
	// Function /Script/POLYGON.WeaponComponent.OnRep_IsAiming
	// void OnRep_IsAiming();                                                                                                   // [0x292edd0] Final|Native|Private 
	// Function /Script/POLYGON.WeaponComponent.NotifyServerThrowGrenade
	// void NotifyServerThrowGrenade();                                                                                         // [0x292ed80] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/POLYGON.WeaponComponent.IsWantsToAiming
	// bool IsWantsToAiming();                                                                                                  // [0x292ed60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.WeaponComponent.IsAiming
	// bool IsAiming();                                                                                                         // [0x292ed40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.WeaponComponent.GetIsShooting
	// bool GetIsShooting();                                                                                                    // [0x292ed20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.WeaponComponent.GetGunRecoilAlpha_Yaw
	// float GetGunRecoilAlpha_Yaw();                                                                                           // [0x292ed00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.WeaponComponent.GetGunRecoilAlpha_Roll
	// float GetGunRecoilAlpha_Roll();                                                                                          // [0x292ece0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.WeaponComponent.GetGunRecoilAlpha_Pitch
	// float GetGunRecoilAlpha_Pitch();                                                                                         // [0x292ecc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.WeaponComponent.GetGunRecoilAlpha_Backward
	// float GetGunRecoilAlpha_Backward();                                                                                      // [0x292eca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/POLYGON.WeaponComponent.GetCurrentGun
	// class AItem_Gun_General* GetCurrentGun();                                                                                // [0x292ec70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/POLYGON.ScoreInfoBlueprint
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FScoreInfoBlueprint
{ 
	int32_t                                            Score;                                                      // 0x0000   (0x0004)  
	EAccrualTypeGameScore                              ScoreType;                                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	class UObject*                                     Giver;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/POLYGON.BattlePassReward
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FBattlePassReward : FTableRowBase
{ 
	int32_t                                            Level;                                                      // 0x0008   (0x0004)  
	int32_t                                            RequiredExperience;                                         // 0x000C   (0x0004)  
	bool                                               bIsFree;                                                    // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              ID;                                                         // 0x0014   (0x0008)  
	FName                                              Class;                                                      // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FText                                              Name;                                                       // 0x0028   (0x0018)  
	int32_t                                            Number;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  Image;                                                      // 0x0048   (0x0008)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x0050   (0x0028)  MISSED
	TWeakObjectPtr<class UTexture2D*>                  Icon;                                                       // 0x0078   (0x0008)  
	unsigned char                                      UnknownData04_6[0x28];                                      // 0x0080   (0x0028)  MISSED
	FLinearColor                                       Color;                                                      // 0x00A8   (0x0010)  
	EItemRareType                                      Rare;                                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Struct /Script/POLYGON.DataTableReference
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FDataTableReference : FTableRowBase
{ 
	class UDataTable*                                  DataTable;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/POLYGON.ItemEntry
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FItemEntry : FTableRowBase
{ 
	class UClass*                                      Item;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/POLYGON.GunHitOnCharacter
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FGunHitOnCharacter
{ 
	FVector_NetQuantize                                Location;                                                   // 0x0000   (0x0018)  
	TWeakObjectPtr<class AActor*>                      Actor;                                                      // 0x0018   (0x0008)  
	char                                               BoneIndex;                                                  // 0x0020   (0x0001)  
	TEnumAsByte<EPhysicalSurface>                      PhysSurfaceType;                                            // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0022   (0x0006)  MISSED
};

/// Struct /Script/POLYGON.LevelInfo
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FLevelInfo : FTableRowBase
{ 
	FName                                              LevelID;                                                    // 0x0008   (0x0008)  
	int32_t                                            Level;                                                      // 0x0010   (0x0004)  
	int32_t                                            ProgressRequired;                                           // 0x0014   (0x0004)  
	TWeakObjectPtr<class UTexture2D*>                  LevelIcon;                                                  // 0x0018   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0020   (0x0028)  MISSED
};

/// Struct /Script/POLYGON.PlayerId
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPlayerId
{ 
	FString                                            PlayerMasterId;                                             // 0x0000   (0x0010)  
	FString                                            PlayerTitleId;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/POLYGON.ScoreInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FScoreInfo
{ 
	uint16_t                                           Score;                                                      // 0x0000   (0x0002)  
	EAccrualTypeGameScore                              ScoreType;                                                  // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0003   (0x0005)  MISSED
	class UObject*                                     Giver;                                                      // 0x0008   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(UAnimNotify_PlaySoundLocal) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(FBallisticMaterialResponseMapEntry) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(UBallisticMaterialResponseMap) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(ATraceProjectile) == 0x04A0); // 1184 bytes (0x000290 - 0x0004A0)
static_assert(sizeof(ABullet_Casing_General) == 0x02A8); // 680 bytes (0x000290 - 0x0002A8)
static_assert(sizeof(FGameChatMessage) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UChatSystemComponent) == 0x00B0); // 176 bytes (0x0000A0 - 0x0000B0)
static_assert(sizeof(UGeneralBackendComponent) == 0x00D0); // 208 bytes (0x0000A0 - 0x0000D0)
static_assert(sizeof(UClientBackendComponent) == 0x0110); // 272 bytes (0x0000D0 - 0x000110)
static_assert(sizeof(UClientGameInstance) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(AControlPoint) == 0x0300); // 768 bytes (0x000290 - 0x000300)
static_assert(sizeof(UDataManagerLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEOSPartyId) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEOSPartyMemberId) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEOSSubsystemAvanced) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UEventManagerComponent) == 0x00A0); // 160 bytes (0x0000A0 - 0x0000A0)
static_assert(sizeof(UFOVManagerComponent) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UFOVManagerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGameSettings) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FGunModuleInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UGunModulesInfo) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(AHalloweenPumpkin) == 0x02A0); // 672 bytes (0x000290 - 0x0002A0)
static_assert(sizeof(FPlayerAssist) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UHealthStatsComponent) == 0x0110); // 272 bytes (0x0000A0 - 0x000110)
static_assert(sizeof(UInspectManagerComponent) == 0x00C8); // 200 bytes (0x0000A0 - 0x0000C8)
static_assert(sizeof(UInteractInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInventoryComponent_Base) == 0x00F8); // 248 bytes (0x0000A0 - 0x0000F8)
static_assert(sizeof(UInventoryComponent_Game) == 0x0130); // 304 bytes (0x0000F8 - 0x000130)
static_assert(sizeof(UInventoryComponent_Menu) == 0x00F8); // 248 bytes (0x0000F8 - 0x0000F8)
static_assert(sizeof(AItem_General) == 0x0300); // 768 bytes (0x000290 - 0x000300)
static_assert(sizeof(AItem_Gear_General) == 0x0340); // 832 bytes (0x000300 - 0x000340)
static_assert(sizeof(AItem_Gear_Patch) == 0x0350); // 848 bytes (0x000340 - 0x000350)
static_assert(sizeof(AItem_Gear_Skin) == 0x0358); // 856 bytes (0x000340 - 0x000358)
static_assert(sizeof(AItem_Grenade_General) == 0x0360); // 864 bytes (0x000300 - 0x000360)
static_assert(sizeof(FGunShot) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(AItem_Gun_General) == 0x0770); // 1904 bytes (0x000300 - 0x000770)
static_assert(sizeof(AItem_Gun_Pistol) == 0x0770); // 1904 bytes (0x000770 - 0x000770)
static_assert(sizeof(AItem_Gun_Rifle) == 0x0770); // 1904 bytes (0x000770 - 0x000770)
static_assert(sizeof(AItem_Gun_Sniper) == 0x0770); // 1904 bytes (0x000770 - 0x000770)
static_assert(sizeof(AItem_Module_General) == 0x0348); // 840 bytes (0x000300 - 0x000348)
static_assert(sizeof(AItem_Module_Accessory) == 0x0350); // 848 bytes (0x000348 - 0x000350)
static_assert(sizeof(AItem_Module_Barrel) == 0x0350); // 848 bytes (0x000348 - 0x000350)
static_assert(sizeof(AItem_Module_Charm) == 0x0350); // 848 bytes (0x000348 - 0x000350)
static_assert(sizeof(AItem_Module_Flashlight) == 0x0370); // 880 bytes (0x000350 - 0x000370)
static_assert(sizeof(AItem_Module_Optic) == 0x0390); // 912 bytes (0x000348 - 0x000390)
static_assert(sizeof(AItem_Module_Skin) == 0x0358); // 856 bytes (0x000348 - 0x000358)
static_assert(sizeof(AItem_Module_Strap) == 0x0350); // 848 bytes (0x000348 - 0x000350)
static_assert(sizeof(AItem_Module_Underbarrel) == 0x0350); // 848 bytes (0x000348 - 0x000350)
static_assert(sizeof(AItem_Module_Underbarrel_Grip) == 0x03C0); // 960 bytes (0x000350 - 0x0003C0)
static_assert(sizeof(AItem_Watch_General) == 0x0310); // 784 bytes (0x000300 - 0x000310)
static_assert(sizeof(UPG_AnimInstance) == 0x0350); // 848 bytes (0x000348 - 0x000350)
static_assert(sizeof(UPG_CharacterMovementComponent) == 0x0F00); // 3840 bytes (0x000F00 - 0x000F00)
static_assert(sizeof(UPG_FunctionLibraryKit) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPG_GameInstance) == 0x01D0); // 464 bytes (0x0001C0 - 0x0001D0)
static_assert(sizeof(APG_GameMode_Base) == 0x0378); // 888 bytes (0x000378 - 0x000378)
static_assert(sizeof(FBeaconSlotRequest) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(APG_GameMode_Game) == 0x03D0); // 976 bytes (0x000378 - 0x0003D0)
static_assert(sizeof(APG_GameMode_Game_StandBy) == 0x0378); // 888 bytes (0x000378 - 0x000378)
static_assert(sizeof(APG_GameMode_Menu) == 0x0378); // 888 bytes (0x000378 - 0x000378)
static_assert(sizeof(FMapInfo) == 0x00E8); // 232 bytes (0x000008 - 0x0000E8)
static_assert(sizeof(APG_GameState_Game) == 0x0500); // 1280 bytes (0x000308 - 0x000500)
static_assert(sizeof(APG_Game_Character) == 0x0740); // 1856 bytes (0x000628 - 0x000740)
static_assert(sizeof(APG_Menu_Character) == 0x02B8); // 696 bytes (0x000290 - 0x0002B8)
static_assert(sizeof(APG_BeaconHostObject) == 0x02B8); // 696 bytes (0x0002B8 - 0x0002B8)
static_assert(sizeof(APG_BeaconClient) == 0x0350); // 848 bytes (0x000320 - 0x000350)
static_assert(sizeof(APG_PlayerController_Base) == 0x0888); // 2184 bytes (0x000850 - 0x000888)
static_assert(sizeof(APG_PlayerController_Game) == 0x08B8); // 2232 bytes (0x000888 - 0x0008B8)
static_assert(sizeof(APG_PlayerController_Menu) == 0x0888); // 2184 bytes (0x000888 - 0x000888)
static_assert(sizeof(APG_PlayerState_Base) == 0x03C0); // 960 bytes (0x0003A8 - 0x0003C0)
static_assert(sizeof(APG_PlayerState_Game) == 0x0470); // 1136 bytes (0x0003C0 - 0x000470)
static_assert(sizeof(APG_PlayerState_Menu) == 0x03C8); // 968 bytes (0x0003C0 - 0x0003C8)
static_assert(sizeof(APG_SpectatorPawn) == 0x0348); // 840 bytes (0x000340 - 0x000348)
static_assert(sizeof(UPlayerCoreComponent) == 0x0198); // 408 bytes (0x0000A0 - 0x000198)
static_assert(sizeof(UReservedSlot) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UServerBackendComponent) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(UServerGameInstance) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(USquadComponent) == 0x00F0); // 240 bytes (0x0000A0 - 0x0000F0)
static_assert(sizeof(ASupportBox) == 0x02B8); // 696 bytes (0x000290 - 0x0002B8)
static_assert(sizeof(ASupportBox_Ammo) == 0x02C0); // 704 bytes (0x0002B8 - 0x0002C0)
static_assert(sizeof(ASupportBox_Health) == 0x02B8); // 696 bytes (0x0002B8 - 0x0002B8)
static_assert(sizeof(ATeamBase) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UUserEntry) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWeaponComponent) == 0x0150); // 336 bytes (0x0000A0 - 0x000150)
static_assert(sizeof(FScoreInfoBlueprint) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBattlePassReward) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FDataTableReference) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FItemEntry) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FGunHitOnCharacter) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FLevelInfo) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FPlayerId) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FScoreInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UAnimNotify_PlaySoundLocal, Sound) == 0x0038);
static_assert(offsetof(UAnimNotify_PlaySoundLocal, AttachName) == 0x0048);
static_assert(offsetof(FBallisticMaterialResponseMapEntry, PenTraceType) == 0x0000);
static_assert(offsetof(UBallisticMaterialResponseMap, List) == 0x0030);
static_assert(offsetof(ATraceProjectile, Velocity) == 0x0290);
static_assert(offsetof(ATraceProjectile, RandomStream) == 0x02A8);
static_assert(offsetof(ATraceProjectile, ActiveTraceComponent) == 0x0318);
static_assert(offsetof(ATraceProjectile, DebugTrailColorFast) == 0x032C);
static_assert(offsetof(ATraceProjectile, DebugTrailColorSlow) == 0x033C);
static_assert(offsetof(ATraceProjectile, Wind) == 0x0350);
static_assert(offsetof(ATraceProjectile, AtmosphereType) == 0x0368);
static_assert(offsetof(ATraceProjectile, AirDensityCurve) == 0x0378);
static_assert(offsetof(ATraceProjectile, SpeedOfSoundCurve) == 0x0388);
static_assert(offsetof(ATraceProjectile, WorldCenterLocation) == 0x03A8);
static_assert(offsetof(ATraceProjectile, Gravity) == 0x03D0);
static_assert(offsetof(ATraceProjectile, SafeLaunchIgnoredActors) == 0x03F0);
static_assert(offsetof(ATraceProjectile, MachDragCurve) == 0x0418);
static_assert(offsetof(ATraceProjectile, DefaultPenTraceType) == 0x0458);
static_assert(offsetof(ATraceProjectile, MaterialResponseMap) == 0x0460);
static_assert(offsetof(ATraceProjectile, TraceChannel) == 0x046B);
static_assert(offsetof(ATraceProjectile, IgnoredActors) == 0x0478);
static_assert(offsetof(ATraceProjectile, RetraceChannel) == 0x0492);
static_assert(offsetof(ATraceProjectile, TraceFX) == 0x0498);
static_assert(offsetof(ABullet_Casing_General, SoundDrop) == 0x0290);
static_assert(offsetof(ABullet_Casing_General, Mesh) == 0x0298);
static_assert(offsetof(ABullet_Casing_General, ProjectileMovementComponent) == 0x02A0);
static_assert(offsetof(FGameChatMessage, Sender) == 0x0000);
static_assert(offsetof(FGameChatMessage, MessageType) == 0x0008);
static_assert(offsetof(FGameChatMessage, Message) == 0x0010);
static_assert(offsetof(UChatSystemComponent, ChatHistory) == 0x00A0);
static_assert(offsetof(UClientBackendComponent, PlayerMasterId) == 0x00F0);
static_assert(offsetof(UClientBackendComponent, PlayerCombinedInfo) == 0x0100);
static_assert(offsetof(UClientBackendComponent, PlayerExperiments) == 0x0108);
static_assert(offsetof(UClientGameInstance, KickReason) == 0x0038);
static_assert(offsetof(UClientGameInstance, PlayerCombinedInfo) == 0x0060);
static_assert(offsetof(UClientGameInstance, UsersCache) == 0x0068);
static_assert(offsetof(AControlPoint, ControlPointName) == 0x02C0);
static_assert(offsetof(AControlPoint, CapturedTeam) == 0x02C1);
static_assert(offsetof(AControlPoint, CapturePlayersAlphaTeam) == 0x02D0);
static_assert(offsetof(AControlPoint, CapturePlayersBravoTeam) == 0x02E0);
static_assert(offsetof(AControlPoint, Root) == 0x02F8);
static_assert(offsetof(UFOVManagerComponent, MaterialCollection_CorrectFOV) == 0x00B8);
static_assert(offsetof(FGunModuleInfo, ModuleClass) == 0x0000);
static_assert(offsetof(FGunModuleInfo, Parents) == 0x0008);
static_assert(offsetof(FGunModuleInfo, Children) == 0x0018);
static_assert(offsetof(FGunModuleInfo, customData) == 0x0038);
static_assert(offsetof(UGunModulesInfo, Modules) == 0x0030);
static_assert(offsetof(FPlayerAssist, PlayerAssist) == 0x0000);
static_assert(offsetof(FPlayerAssist, DamageCausers) == 0x0008);
static_assert(offsetof(FPlayerAssist, TimerResetAssist) == 0x0058);
static_assert(offsetof(UHealthStatsComponent, KillAssists) == 0x00E0);
static_assert(offsetof(UInventoryComponent_Base, PrimaryGun) == 0x00C0);
static_assert(offsetof(UInventoryComponent_Base, SecondaryGun) == 0x00C8);
static_assert(offsetof(UInventoryComponent_Base, SkinClass) == 0x00D0);
static_assert(offsetof(UInventoryComponent_Base, WatchClass) == 0x00D8);
static_assert(offsetof(UInventoryComponent_Base, PatchClass) == 0x00E0);
static_assert(offsetof(UInventoryComponent_Base, PatchRefs) == 0x00E8);
static_assert(offsetof(UInventoryComponent_Game, CurrentGun) == 0x0118);
static_assert(offsetof(AItem_General, ItemId) == 0x0290);
static_assert(offsetof(AItem_General, ItemType) == 0x02A0);
static_assert(offsetof(AItem_General, ItemName) == 0x02A8);
static_assert(offsetof(AItem_General, ItemIcon) == 0x02C0);
static_assert(offsetof(AItem_General, Rare) == 0x02F0);
static_assert(offsetof(AItem_General, customData) == 0x02F8);
static_assert(offsetof(AItem_Gear_General, GearType) == 0x0300);
static_assert(offsetof(AItem_Gear_General, WhiteIcon) == 0x0308);
static_assert(offsetof(AItem_Gear_Patch, Mesh) == 0x0348);
static_assert(offsetof(AItem_Gear_Skin, SkinMaterial) == 0x0348);
static_assert(offsetof(AItem_Gear_Skin, SkinMaterialCorrectFOV) == 0x0350);
static_assert(offsetof(AItem_Grenade_General, ReplicatedPosition) == 0x0308);
static_assert(offsetof(AItem_Grenade_General, ExplosionFX) == 0x0320);
static_assert(offsetof(AItem_Grenade_General, SoundExplosion) == 0x0328);
static_assert(offsetof(AItem_Grenade_General, ExplosionCameraShakeFirst) == 0x0330);
static_assert(offsetof(AItem_Grenade_General, ExplosionCameraShakeSecond) == 0x0338);
static_assert(offsetof(AItem_Grenade_General, GrenadeThrowCameraShake) == 0x0340);
static_assert(offsetof(AItem_Grenade_General, Mesh) == 0x0348);
static_assert(offsetof(AItem_Grenade_General, RadialForce) == 0x0350);
static_assert(offsetof(AItem_Grenade_General, GrenadeSphereRadius) == 0x0358);
static_assert(offsetof(FGunShot, ShotDirection) == 0x0000);
static_assert(offsetof(AItem_Gun_General, GunWhileIcon) == 0x0368);
static_assert(offsetof(AItem_Gun_General, GunClass) == 0x039D);
static_assert(offsetof(AItem_Gun_General, gunSlot) == 0x039E);
static_assert(offsetof(AItem_Gun_General, GunShootingType) == 0x039F);
static_assert(offsetof(AItem_Gun_General, ProjectileClass) == 0x03A0);
static_assert(offsetof(AItem_Gun_General, Levels) == 0x03D8);
static_assert(offsetof(AItem_Gun_General, ProgressWidget) == 0x0440);
static_assert(offsetof(AItem_Gun_General, SleeveFX) == 0x0470);
static_assert(offsetof(AItem_Gun_General, SoundBulletCasingDrop) == 0x0478);
static_assert(offsetof(AItem_Gun_General, ShotCameraShake) == 0x0480);
static_assert(offsetof(AItem_Gun_General, IdleCharacterAnimation) == 0x0488);
static_assert(offsetof(AItem_Gun_General, ReloadCharacterAnimation) == 0x0490);
static_assert(offsetof(AItem_Gun_General, ReloadFullCharacterAnimation) == 0x04A0);
static_assert(offsetof(AItem_Gun_General, ShotCharacterAnimation) == 0x04B0);
static_assert(offsetof(AItem_Gun_General, EndShotCharacterAnimation) == 0x04B8);
static_assert(offsetof(AItem_Gun_General, BoltCharacterAnimation) == 0x04C0);
static_assert(offsetof(AItem_Gun_General, GrenadeThrowAdditiveAnimation) == 0x04C8);
static_assert(offsetof(AItem_Gun_General, EquipAnimation) == 0x04D0);
static_assert(offsetof(AItem_Gun_General, AimingEquipAnimation) == 0x04D8);
static_assert(offsetof(AItem_Gun_General, HolsterAnimation) == 0x04E0);
static_assert(offsetof(AItem_Gun_General, AimingAnimation) == 0x04E8);
static_assert(offsetof(AItem_Gun_General, ShotGunAnimation) == 0x04F0);
static_assert(offsetof(AItem_Gun_General, BoltGunAnimation) == 0x04F8);
static_assert(offsetof(AItem_Gun_General, ReloadGunAnimation) == 0x0500);
static_assert(offsetof(AItem_Gun_General, ReloadFullGunAnimation) == 0x0508);
static_assert(offsetof(AItem_Gun_General, NoAmmoGunAnimation) == 0x0510);
static_assert(offsetof(AItem_Gun_General, FirstPersonGunPosition) == 0x0518);
static_assert(offsetof(AItem_Gun_General, ThirdPersonGunPosition) == 0x0530);
static_assert(offsetof(AItem_Gun_General, LeftHandOffset) == 0x0550);
static_assert(offsetof(AItem_Gun_General, SprintLiftGun) == 0x05B0);
static_assert(offsetof(AItem_Gun_General, WatchOffset) == 0x05D0);
static_assert(offsetof(AItem_Gun_General, SoundShot_FP) == 0x0630);
static_assert(offsetof(AItem_Gun_General, SoundShot_TP) == 0x0660);
static_assert(offsetof(AItem_Gun_General, SoundBlankShot) == 0x0690);
static_assert(offsetof(AItem_Gun_General, SoundAiming) == 0x0698);
static_assert(offsetof(AItem_Gun_General, CurrentGunModuleClasses) == 0x06E8);
static_assert(offsetof(AItem_Gun_General, CurrentGunModuleReferences) == 0x06F8);
static_assert(offsetof(AItem_Gun_General, GunShot) == 0x0708);
static_assert(offsetof(AItem_Gun_General, GunHitOfShortShot) == 0x0728);
static_assert(offsetof(AItem_Gun_General, ActiveSoundShot) == 0x0748);
static_assert(offsetof(AItem_Gun_General, ItemReference) == 0x0750);
static_assert(offsetof(AItem_Gun_General, GunMesh) == 0x0758);
static_assert(offsetof(AItem_Gun_General, Magazine) == 0x0760);
static_assert(offsetof(AItem_Module_General, GunModuleType) == 0x0308);
static_assert(offsetof(AItem_Module_General, ModuleWhiteIcon) == 0x0310);
static_assert(offsetof(AItem_Module_Accessory, MountingSocket) == 0x0348);
static_assert(offsetof(AItem_Module_Barrel, ModuleMesh) == 0x0348);
static_assert(offsetof(AItem_Module_Charm, BaseMesh) == 0x0348);
static_assert(offsetof(AItem_Module_Flashlight, ModuleMesh) == 0x0368);
static_assert(offsetof(AItem_Module_Optic, MountingSocket) == 0x0348);
static_assert(offsetof(AItem_Module_Optic, AimingMesh) == 0x0370);
static_assert(offsetof(AItem_Module_Optic, AimingMaterial) == 0x0380);
static_assert(offsetof(AItem_Module_Optic, ModuleMesh) == 0x0388);
static_assert(offsetof(AItem_Module_Skin, SkinMaterial) == 0x0348);
static_assert(offsetof(AItem_Module_Skin, SkinMaterialCorrectFOV) == 0x0350);
static_assert(offsetof(AItem_Module_Strap, ModuleMesh) == 0x0348);
static_assert(offsetof(AItem_Module_Underbarrel, ModuleMesh) == 0x0348);
static_assert(offsetof(AItem_Module_Underbarrel_Grip, WatchOffset) == 0x0350);
static_assert(offsetof(AItem_Module_Underbarrel_Grip, GripHandPose) == 0x03B0);
static_assert(offsetof(AItem_Watch_General, WatchMesh) == 0x0308);
static_assert(offsetof(UPG_GameInstance, ServerGameInstance) == 0x01C0);
static_assert(offsetof(UPG_GameInstance, ClientGameInstance) == 0x01C8);
static_assert(offsetof(FBeaconSlotRequest, BeaconClient) == 0x0000);
static_assert(offsetof(FBeaconSlotRequest, UserIds) == 0x0008);
static_assert(offsetof(APG_GameMode_Game, Beacon) == 0x0378);
static_assert(offsetof(APG_GameMode_Game, PlayersQueue) == 0x0380);
static_assert(offsetof(APG_GameMode_Game, ReservedSlots) == 0x0390);
static_assert(offsetof(APG_GameMode_Game, BlackListPlayersID) == 0x03A0);
static_assert(offsetof(APG_GameMode_Game, ServerData) == 0x03B8);
static_assert(offsetof(APG_GameMode_Game, ServerBackendComponent) == 0x03C8);
static_assert(offsetof(FMapInfo, MapRowName) == 0x0008);
static_assert(offsetof(FMapInfo, MapName) == 0x0010);
static_assert(offsetof(FMapInfo, MapDisplayName) == 0x0020);
static_assert(offsetof(FMapInfo, GameModes) == 0x0038);
static_assert(offsetof(FMapInfo, MapPreview) == 0x0060);
static_assert(offsetof(FMapInfo, MinimapImage) == 0x0090);
static_assert(offsetof(FMapInfo, CameraPosition) == 0x00C8);
static_assert(offsetof(APG_GameState_Game, GameState) == 0x0398);
static_assert(offsetof(APG_GameState_Game, CurrentMapInfo) == 0x03A0);
static_assert(offsetof(APG_GameState_Game, WinningTeam) == 0x048B);
static_assert(offsetof(APG_GameState_Game, Players) == 0x0490);
static_assert(offsetof(APG_GameState_Game, TeamAlpha) == 0x04A0);
static_assert(offsetof(APG_GameState_Game, TeamBravo) == 0x04B0);
static_assert(offsetof(APG_GameState_Game, AllTeamBases) == 0x04C0);
static_assert(offsetof(APG_GameState_Game, AllControlPoints) == 0x04D0);
static_assert(offsetof(APG_GameState_Game, PlayerStarts) == 0x04E0);
static_assert(offsetof(APG_Game_Character, PlayerAction) == 0x0661);
static_assert(offsetof(APG_Game_Character, FocusActor) == 0x0688);
static_assert(offsetof(APG_Game_Character, CurrentInteractActor) == 0x0698);
static_assert(offsetof(APG_Game_Character, ParticleDamageBlood) == 0x06A8);
static_assert(offsetof(APG_Game_Character, SoundBullet) == 0x06B0);
static_assert(offsetof(APG_Game_Character, FirstPersonAnimInstanceClass) == 0x06B8);
static_assert(offsetof(APG_Game_Character, FirstPersonCharacterMesh) == 0x06C0);
static_assert(offsetof(APG_Game_Character, ThirdPersonCharacterMesh) == 0x06C8);
static_assert(offsetof(APG_Game_Character, ViewArrow) == 0x06D0);
static_assert(offsetof(APG_Game_Character, FirstPersonCamera) == 0x06D8);
static_assert(offsetof(APG_Game_Character, ThirdPersonCameraBoom) == 0x06E0);
static_assert(offsetof(APG_Game_Character, ThirdPersonCamera) == 0x06E8);
static_assert(offsetof(APG_Game_Character, PlayerInputComponent) == 0x06F0);
static_assert(offsetof(APG_Game_Character, WidgetPlayerMarker) == 0x06F8);
static_assert(offsetof(APG_Game_Character, SpectatorCameraBoom) == 0x0700);
static_assert(offsetof(APG_Game_Character, SpectatorCameraCapture) == 0x0708);
static_assert(offsetof(APG_Game_Character, Armor) == 0x0710);
static_assert(offsetof(APG_Game_Character, HeadGear) == 0x0718);
static_assert(offsetof(APG_Game_Character, Backpack) == 0x0720);
static_assert(offsetof(APG_Game_Character, Watch) == 0x0728);
static_assert(offsetof(APG_Game_Character, HealthStatsComponent) == 0x0730);
static_assert(offsetof(APG_Game_Character, WeaponComponent) == 0x0738);
static_assert(offsetof(APG_Menu_Character, Instance) == 0x0290);
static_assert(offsetof(APG_Menu_Character, Mesh) == 0x0298);
static_assert(offsetof(APG_Menu_Character, Armor) == 0x02A0);
static_assert(offsetof(APG_Menu_Character, HeadGear) == 0x02A8);
static_assert(offsetof(APG_Menu_Character, Backpack) == 0x02B0);
static_assert(offsetof(APG_PlayerController_Game, EventManagerComponent) == 0x08A8);
static_assert(offsetof(APG_PlayerController_Game, FOVManagerComponent) == 0x08B0);
static_assert(offsetof(APG_PlayerState_Base, ClientBackendComponent) == 0x03B8);
static_assert(offsetof(APG_PlayerState_Game, VoteKickPlayers) == 0x0418);
static_assert(offsetof(APG_PlayerState_Game, Team) == 0x0428);
static_assert(offsetof(APG_PlayerState_Game, PlayerCoreComponent) == 0x0450);
static_assert(offsetof(APG_PlayerState_Game, InventoryComponent) == 0x0458);
static_assert(offsetof(APG_PlayerState_Game, SquadComponent) == 0x0460);
static_assert(offsetof(APG_PlayerState_Game, ChatSystemComponent) == 0x0468);
static_assert(offsetof(APG_PlayerState_Menu, InventoryComponent) == 0x03C0);
static_assert(offsetof(USquadComponent, Members) == 0x00D8);
static_assert(offsetof(ASupportBox, CoverageCharacters) == 0x0298);
static_assert(offsetof(ASupportBox, BoxMesh) == 0x02A8);
static_assert(offsetof(ASupportBox, WidgetTypeSupportBox) == 0x02B0);
static_assert(offsetof(ASupportBox_Ammo, ActionSound) == 0x02B8);
static_assert(offsetof(ATeamBase, Team) == 0x0290);
static_assert(offsetof(UWeaponComponent, FireFXLocal) == 0x00D0);
static_assert(offsetof(UWeaponComponent, FireFXSimulate) == 0x00D8);
static_assert(offsetof(UWeaponComponent, HitFX_Metal) == 0x00E0);
static_assert(offsetof(UWeaponComponent, HitFX_Stone) == 0x00E8);
static_assert(offsetof(UWeaponComponent, HitFX_Dirt) == 0x00F0);
static_assert(offsetof(UWeaponComponent, HitFX_Wood) == 0x00F8);
static_assert(offsetof(UWeaponComponent, HitFX_Water) == 0x0100);
static_assert(offsetof(UWeaponComponent, HitFX_Glass) == 0x0108);
static_assert(offsetof(UWeaponComponent, HitFX_Blood) == 0x0110);
static_assert(offsetof(UWeaponComponent, DecalImpact) == 0x0118);
static_assert(offsetof(UWeaponComponent, SoundCharacterHit) == 0x0120);
static_assert(offsetof(UWeaponComponent, SoundCharacterHit_Protection) == 0x0128);
static_assert(offsetof(UWeaponComponent, SoundRicochetHit) == 0x0130);
static_assert(offsetof(UWeaponComponent, SoundBodyHit) == 0x0138);
static_assert(offsetof(FScoreInfoBlueprint, ScoreType) == 0x0004);
static_assert(offsetof(FScoreInfoBlueprint, Giver) == 0x0008);
static_assert(offsetof(FBattlePassReward, ID) == 0x0014);
static_assert(offsetof(FBattlePassReward, Class) == 0x001C);
static_assert(offsetof(FBattlePassReward, Name) == 0x0028);
static_assert(offsetof(FBattlePassReward, Image) == 0x0048);
static_assert(offsetof(FBattlePassReward, Icon) == 0x0078);
static_assert(offsetof(FBattlePassReward, Color) == 0x00A8);
static_assert(offsetof(FBattlePassReward, Rare) == 0x00B8);
static_assert(offsetof(FDataTableReference, DataTable) == 0x0008);
static_assert(offsetof(FItemEntry, Item) == 0x0008);
static_assert(offsetof(FGunHitOnCharacter, Location) == 0x0000);
static_assert(offsetof(FGunHitOnCharacter, Actor) == 0x0018);
static_assert(offsetof(FGunHitOnCharacter, PhysSurfaceType) == 0x0021);
static_assert(offsetof(FLevelInfo, LevelID) == 0x0008);
static_assert(offsetof(FLevelInfo, LevelIcon) == 0x0018);
static_assert(offsetof(FPlayerId, PlayerMasterId) == 0x0000);
static_assert(offsetof(FPlayerId, PlayerTitleId) == 0x0010);
static_assert(offsetof(FScoreInfo, ScoreType) == 0x0002);
static_assert(offsetof(FScoreInfo, Giver) == 0x0008);
