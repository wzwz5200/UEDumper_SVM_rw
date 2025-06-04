
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: PacketHandler

#pragma pack(push, 0x1)

/// Class /Script/OnlineSubsystemSteam.SteamAuthComponentModuleInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{ 
public:
};

/// Class /Script/OnlineSubsystemSteam.SteamNetConnection
/// Size: 0x1E50 (7760 bytes) (0x001E48 - 0x001E50) align 8 MaxSize: 0x1E50
class USteamNetConnection : public UIpConnection
{ 
public:
	bool                                               bIsPassthrough;                                             // 0x1E48   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x1E49   (0x0007)  MISSED
};

/// Class /Script/OnlineSubsystemSteam.SteamNetDriver
/// Size: 0x0860 (2144 bytes) (0x000858 - 0x000860) align 8 MaxSize: 0x0860
class USteamNetDriver : public UIpNetDriver
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0858   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(USteamAuthComponentModuleInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamNetConnection) == 0x1E50); // 7760 bytes (0x001E48 - 0x001E50)
static_assert(sizeof(USteamNetDriver) == 0x0860); // 2144 bytes (0x000858 - 0x000860)
