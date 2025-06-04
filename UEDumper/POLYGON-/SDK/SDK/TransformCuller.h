
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

/// Struct /Script/TransformCuller.ComponentAttachmentData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FComponentAttachmentData
{ 
	class USceneComponent*                             Component;                                                  // 0x0000   (0x0008)  
	class USceneComponent*                             AttachParent;                                               // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_7[0x70];                                      // 0x0010   (0x0070)  MISSED
};

/// Class /Script/TransformCuller.TransformCullerComponent
/// Size: 0x00D0 (208 bytes) (0x0000A0 - 0x0000D0) align 8 MaxSize: 0x00D0
class UTransformCullerComponent : public UActorComponent
{ 
public:
	bool                                               bShouldCacheOwnerComponents;                                // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	TArray<class USceneComponent*>                     CacheOwnerComponents;                                       // 0x00A8   (0x0010)  
	TArray<FComponentAttachmentData>                   DetachedComponents;                                         // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FComponentAttachmentData) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(UTransformCullerComponent) == 0x00D0); // 208 bytes (0x0000A0 - 0x0000D0)
static_assert(offsetof(FComponentAttachmentData, Component) == 0x0000);
static_assert(offsetof(FComponentAttachmentData, AttachParent) == 0x0008);
static_assert(offsetof(UTransformCullerComponent, CacheOwnerComponents) == 0x00A8);
static_assert(offsetof(UTransformCullerComponent, DetachedComponents) == 0x00B8);
