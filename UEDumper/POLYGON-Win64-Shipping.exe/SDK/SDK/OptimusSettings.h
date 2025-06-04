
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

#pragma pack(push, 0x1)

/// Enum /Script/OptimusSettings.EOptimusDefaultDeformerMode
/// Size: 0x01 (1 bytes)
enum class EOptimusDefaultDeformerMode : uint8_t
{
	EOptimusDefaultDeformerMode__Never                                               = 0,
	EOptimusDefaultDeformerMode__SkinCacheOnly                                       = 1,
	EOptimusDefaultDeformerMode__Always                                              = 2
};

/// Class /Script/OptimusSettings.OptimusSettings
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOptimusSettings : public UDeveloperSettings
{ 
public:
	EOptimusDefaultDeformerMode                        DefaultMode;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TWeakObjectPtr<class UMeshDeformer*>               DefaultDeformer;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0048   (0x0028)  MISSED
	TWeakObjectPtr<class UMeshDeformer*>               DefaultRecomputeTangentDeformer;                            // 0x0070   (0x0008)  
	unsigned char                                      UnknownData02_7[0x28];                                      // 0x0078   (0x0028)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UOptimusSettings) == 0x00A0); // 160 bytes (0x000038 - 0x0000A0)
static_assert(offsetof(UOptimusSettings, DefaultMode) == 0x0038);
static_assert(offsetof(UOptimusSettings, DefaultDeformer) == 0x0040);
static_assert(offsetof(UOptimusSettings, DefaultRecomputeTangentDeformer) == 0x0070);
