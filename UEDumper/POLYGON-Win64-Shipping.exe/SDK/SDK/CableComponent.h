
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

/// Class /Script/CableComponent.CableActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class ACableActor : public AActor
{ 
public:
	class UCableComponent*                             CableComponent;                                             // 0x0290   (0x0008)  
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0650 (1616 bytes) (0x0005A0 - 0x000650) align 16 MaxSize: 0x0650
class UCableComponent : public UMeshComponent
{ 
public:
	bool                                               bAttachStart;                                               // 0x05A0   (0x0001)  
	bool                                               bAttachEnd;                                                 // 0x05A1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x05A2   (0x0006)  MISSED
	FComponentReference                                AttachEndTo;                                                // 0x05A8   (0x0028)  
	FName                                              AttachEndToSocketName;                                      // 0x05D0   (0x0008)  
	FVector                                            EndLocation;                                                // 0x05D8   (0x0018)  
	float                                              CableLength;                                                // 0x05F0   (0x0004)  
	int32_t                                            NumSegments;                                                // 0x05F4   (0x0004)  
	float                                              SubstepTime;                                                // 0x05F8   (0x0004)  
	int32_t                                            SolverIterations;                                           // 0x05FC   (0x0004)  
	bool                                               bEnableStiffness;                                           // 0x0600   (0x0001)  
	bool                                               bUseSubstepping;                                            // 0x0601   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotVisible;                             // 0x0602   (0x0001)  
	bool                                               bSkipCableUpdateWhenNotOwnerRecentlyRendered;               // 0x0603   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x0604   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0605   (0x0003)  MISSED
	float                                              CollisionFriction;                                          // 0x0608   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x060C   (0x0004)  MISSED
	FVector                                            CableForce;                                                 // 0x0610   (0x0018)  
	float                                              CableGravityScale;                                          // 0x0628   (0x0004)  
	float                                              CableWidth;                                                 // 0x062C   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0630   (0x0004)  
	float                                              TileMaterial;                                               // 0x0634   (0x0004)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x0638   (0x0018)  MISSED


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);                                        // [0x2420290] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);                                     // [0x2420180] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x2420050] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// class USceneComponent* GetAttachedComponent();                                                                           // [0x241ffc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// class AActor* GetAttachedActor();                                                                                        // [0x241ff80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(ACableActor) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UCableComponent) == 0x0650); // 1616 bytes (0x0005A0 - 0x000650)
static_assert(offsetof(ACableActor, CableComponent) == 0x0290);
static_assert(offsetof(UCableComponent, AttachEndTo) == 0x05A8);
static_assert(offsetof(UCableComponent, AttachEndToSocketName) == 0x05D0);
static_assert(offsetof(UCableComponent, EndLocation) == 0x05D8);
static_assert(offsetof(UCableComponent, CableForce) == 0x0610);
