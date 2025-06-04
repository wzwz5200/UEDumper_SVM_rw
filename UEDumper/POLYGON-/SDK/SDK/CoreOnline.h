
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType

#pragma pack(push, 0x1)

/// Enum /Script/CoreOnline.ECoreOnlineDummy
/// Size: 0x01 (1 bytes)
enum class ECoreOnlineDummy : uint8_t
{
	ECoreOnlineDummy__Dummy                                                          = 0
};

/// Struct /Script/CoreOnline.JoinabilitySettings
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FJoinabilitySettings
{ 
	FName                                              SessionName;                                                // 0x0000   (0x0008)  
	bool                                               bPublicSearchable;                                          // 0x0008   (0x0001)  
	bool                                               bAllowInvites;                                              // 0x0009   (0x0001)  
	bool                                               bJoinViaPresence;                                           // 0x000A   (0x0001)  
	bool                                               bJoinViaPresenceFriendsOnly;                                // 0x000B   (0x0001)  
	int32_t                                            MaxPlayers;                                                 // 0x000C   (0x0004)  
	int32_t                                            MaxPartySize;                                               // 0x0010   (0x0004)  
};

/// Struct /Script/CoreOnline.UniqueNetIdWrapper
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FUniqueNetIdWrapper
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FJoinabilitySettings) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FUniqueNetIdWrapper) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(FJoinabilitySettings, SessionName) == 0x0000);
