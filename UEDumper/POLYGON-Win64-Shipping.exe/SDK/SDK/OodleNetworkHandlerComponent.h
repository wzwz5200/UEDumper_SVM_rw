
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/OodleNetworkHandlerComponent.EOodleNetworkEnableMode
/// Size: 0x01 (1 bytes)
enum class EOodleNetworkEnableMode : uint8_t
{
	EOodleNetworkEnableMode__AlwaysEnabled                                           = 0,
	EOodleNetworkEnableMode__WhenCompressedPacketReceived                            = 1
};

/// Enum /Script/OodleNetworkHandlerComponent.EOodleNetResult
/// Size: 0x01 (1 bytes)
enum class EOodleNetResult : uint8_t
{
	EOodleNetResult__Unknown                                                         = 0,
	EOodleNetResult__Success                                                         = 1,
	EOodleNetResult__OodleDecodeFailed                                               = 2,
	EOodleNetResult__OodleSerializePayloadFail                                       = 3,
	EOodleNetResult__OodleBadDecompressedLength                                      = 4,
	EOodleNetResult__OodleNoDictionary                                               = 5
};

/// Class /Script/OodleNetworkHandlerComponent.OodleNetworkTrainerCommandlet
/// Size: 0x00A0 (160 bytes) (0x000080 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOodleNetworkTrainerCommandlet : public UCommandlet
{ 
public:
	bool                                               bCompressionTest;                                           // 0x0080   (0x0001)  
	bool                                               bWriteV5Dictionaries;                                       // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0082   (0x0002)  MISSED
	int32_t                                            HashTableSize;                                              // 0x0084   (0x0004)  
	int32_t                                            DictionarySize;                                             // 0x0088   (0x0004)  
	int32_t                                            DictionaryTrials;                                           // 0x008C   (0x0004)  
	int32_t                                            TrialRandomness;                                            // 0x0090   (0x0004)  
	int32_t                                            TrialGenerations;                                           // 0x0094   (0x0004)  
	bool                                               bNoTrials;                                                  // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UOodleNetworkTrainerCommandlet) == 0x00A0); // 160 bytes (0x000080 - 0x0000A0)
