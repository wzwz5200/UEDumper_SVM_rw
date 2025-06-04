
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/PacketHandler.HandlerComponentFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHandlerComponentFactory : public UObject
{ 
public:
};

/// Class /Script/PacketHandler.PacketHandlerProfileConfig
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPacketHandlerProfileConfig : public UObject
{ 
public:
	TArray<FString>                                    Components;                                                 // 0x0028   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UHandlerComponentFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPacketHandlerProfileConfig) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(offsetof(UPacketHandlerProfileConfig, Components) == 0x0028);
