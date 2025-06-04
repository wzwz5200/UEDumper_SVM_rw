
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/SoundCueTemplates.ESoundContainerType
/// Size: 0x01 (1 bytes)
enum class ESoundContainerType : uint8_t
{
	ESoundContainerType__Concatenate                                                 = 0,
	ESoundContainerType__Randomize                                                   = 1,
	ESoundContainerType__Mix                                                         = 2
};

/// Class /Script/SoundCueTemplates.SoundCueTemplate
/// Size: 0x0558 (1368 bytes) (0x000558 - 0x000558) align 8 MaxSize: 0x0558
class USoundCueTemplate : public USoundCue
{ 
public:
};

/// Class /Script/SoundCueTemplates.SoundCueContainer
/// Size: 0x0558 (1368 bytes) (0x000558 - 0x000558) align 8 MaxSize: 0x0558
class USoundCueContainer : public USoundCueTemplate
{ 
public:
};

/// Class /Script/SoundCueTemplates.SoundCueDistanceCrossfade
/// Size: 0x0558 (1368 bytes) (0x000558 - 0x000558) align 8 MaxSize: 0x0558
class USoundCueDistanceCrossfade : public USoundCueTemplate
{ 
public:
};

/// Class /Script/SoundCueTemplates.SoundCueTemplateSettings
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class USoundCueTemplateSettings : public UDeveloperSettings
{ 
public:
};

/// Struct /Script/SoundCueTemplates.SoundCueCrossfadeInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSoundCueCrossfadeInfo
{ 
	FDistanceDatum                                     DistanceInfo;                                               // 0x0000   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class USoundWave*                                  Sound;                                                      // 0x0018   (0x0008)  
};

/// Struct /Script/SoundCueTemplates.SoundCueTemplateQualitySettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSoundCueTemplateQualitySettings
{ 
	FText                                              DisplayName;                                                // 0x0000   (0x0018)  
	int32_t                                            MaxConcatenatedVariations;                                  // 0x0018   (0x0004)  
	int32_t                                            MaxRandomizedVariations;                                    // 0x001C   (0x0004)  
	int32_t                                            MaxMixVariations;                                           // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(USoundCueTemplate) == 0x0558); // 1368 bytes (0x000558 - 0x000558)
static_assert(sizeof(USoundCueContainer) == 0x0558); // 1368 bytes (0x000558 - 0x000558)
static_assert(sizeof(USoundCueDistanceCrossfade) == 0x0558); // 1368 bytes (0x000558 - 0x000558)
static_assert(sizeof(USoundCueTemplateSettings) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FSoundCueCrossfadeInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSoundCueTemplateQualitySettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(FSoundCueCrossfadeInfo, DistanceInfo) == 0x0000);
static_assert(offsetof(FSoundCueCrossfadeInfo, Sound) == 0x0018);
static_assert(offsetof(FSoundCueTemplateQualitySettings, DisplayName) == 0x0000);
