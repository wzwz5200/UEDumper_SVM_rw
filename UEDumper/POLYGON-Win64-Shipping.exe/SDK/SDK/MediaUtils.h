
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/MediaUtils.EMediaPlayerOptionBooleanOverride
/// Size: 0x01 (1 bytes)
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
	EMediaPlayerOptionBooleanOverride__UseMediaPlayerSetting                         = 0,
	EMediaPlayerOptionBooleanOverride__Enabled                                       = 1,
	EMediaPlayerOptionBooleanOverride__Disabled                                      = 2
};

/// Struct /Script/MediaUtils.MediaPlayerTrackOptions
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMediaPlayerTrackOptions
{ 
	int32_t                                            Audio;                                                      // 0x0000   (0x0004)  
	int32_t                                            Caption;                                                    // 0x0004   (0x0004)  
	int32_t                                            MetaData;                                                   // 0x0008   (0x0004)  
	int32_t                                            Script;                                                     // 0x000C   (0x0004)  
	int32_t                                            Subtitle;                                                   // 0x0010   (0x0004)  
	int32_t                                            Text;                                                       // 0x0014   (0x0004)  
	int32_t                                            Video;                                                      // 0x0018   (0x0004)  
};

/// Struct /Script/MediaUtils.MediaPlayerOptions
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMediaPlayerOptions
{ 
	FMediaPlayerTrackOptions                           Tracks;                                                     // 0x0000   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FTimespan                                          SeekTime;                                                   // 0x0020   (0x0008)  
	EMediaPlayerOptionBooleanOverride                  PlayOnOpen;                                                 // 0x0028   (0x0001)  
	EMediaPlayerOptionBooleanOverride                  Loop;                                                       // 0x0029   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x002A   (0x0006)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FMediaPlayerTrackOptions) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMediaPlayerOptions) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(offsetof(FMediaPlayerOptions, Tracks) == 0x0000);
static_assert(offsetof(FMediaPlayerOptions, SeekTime) == 0x0020);
static_assert(offsetof(FMediaPlayerOptions, PlayOnOpen) == 0x0028);
static_assert(offsetof(FMediaPlayerOptions, Loop) == 0x0029);
