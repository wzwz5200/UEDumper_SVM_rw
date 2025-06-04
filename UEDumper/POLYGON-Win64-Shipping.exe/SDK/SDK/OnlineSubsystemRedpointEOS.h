
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

#pragma pack(push, 0x1)

/// Class /Script/OnlineSubsystemRedpointEOS.EOSControlChannel
/// Size: 0x02A0 (672 bytes) (0x000080 - 0x0002A0) align 8 MaxSize: 0x02A0
class UEOSControlChannel : public UControlChannel
{ 
public:
	unsigned char                                      UnknownData00_1[0x220];                                     // 0x0080   (0x0220)  MISSED
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSIpNetConnection
/// Size: 0x1E48 (7752 bytes) (0x001E48 - 0x001E48) align 8 MaxSize: 0x1E48
class UEOSIpNetConnection : public UIpConnection
{ 
public:
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSNetConnection
/// Size: 0x1DC8 (7624 bytes) (0x001DB8 - 0x001DC8) align 8 MaxSize: 0x1DC8
class UEOSNetConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1DB8   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSNetDriver
/// Size: 0x08D0 (2256 bytes) (0x000858 - 0x0008D0) align 8 MaxSize: 0x08D0
class UEOSNetDriver : public UIpNetDriver
{ 
public:
	unsigned char                                      UnknownData00_8[0x68];                                      // 0x0858   (0x0068)  MISSED
	TArray<class UEOSNetConnection*>                   PendingConnectionClose;                                     // 0x08C0   (0x0010)  
};

/// Class /Script/OnlineSubsystemRedpointEOS.EOSSubsystem
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UEOSSubsystem : public UGameInstanceSubsystem
{ 
public:
	SDK_UNDEFINED(16,1277) /* FMulticastInlineDelegate */ __um(OnAddWidgetToViewport);                             // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1278) /* FMulticastInlineDelegate */ __um(OnRemoveWidgetFromViewport);                        // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystemRedpointEOS.RecentPlayersWorldSubsystem
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class URecentPlayersWorldSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0030   (0x0060)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UEOSControlChannel) == 0x02A0); // 672 bytes (0x000080 - 0x0002A0)
static_assert(sizeof(UEOSIpNetConnection) == 0x1E48); // 7752 bytes (0x001E48 - 0x001E48)
static_assert(sizeof(UEOSNetConnection) == 0x1DC8); // 7624 bytes (0x001DB8 - 0x001DC8)
static_assert(sizeof(UEOSNetDriver) == 0x08D0); // 2256 bytes (0x000858 - 0x0008D0)
static_assert(sizeof(UEOSSubsystem) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(URecentPlayersWorldSubsystem) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(offsetof(UEOSNetDriver, PendingConnectionClose) == 0x08C0);
