
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/DataflowEnginePlugin.DataflowActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class ADataflowActor : public AActor
{ 
public:
	class UDataflowComponent*                          DataflowComponent;                                          // 0x0290   (0x0008)  
};

/// Class /Script/DataflowEnginePlugin.DataflowComponent
/// Size: 0x06B0 (1712 bytes) (0x000568 - 0x0006B0) align 16 MaxSize: 0x06B0
class UDataflowComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x148];                                     // 0x0568   (0x0148)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(ADataflowActor) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UDataflowComponent) == 0x06B0); // 1712 bytes (0x000568 - 0x0006B0)
static_assert(offsetof(ADataflowActor, DataflowComponent) == 0x0290);
