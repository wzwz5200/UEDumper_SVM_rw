
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AudioExtensions
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/SoundFields.AmbisonicsEncodingSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UAmbisonicsEncodingSettings : public USoundfieldEncodingSettingsBase
{ 
public:
	int32_t                                            AmbisonicsOrder;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAmbisonicsEncodingSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
