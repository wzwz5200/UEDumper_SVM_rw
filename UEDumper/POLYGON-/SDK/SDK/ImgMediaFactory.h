
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/ImgMediaFactory.ImgMediaSettings
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UImgMediaSettings : public UObject
{ 
public:
	FFrameRate                                         DefaultFrameRate;                                           // 0x0028   (0x0008)  
	bool                                               BandwidthThrottlingEnabled;                                 // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              CacheBehindPercentage;                                      // 0x0034   (0x0004)  
	float                                              CacheSizeGB;                                                // 0x0038   (0x0004)  
	int32_t                                            CacheThreads;                                               // 0x003C   (0x0004)  
	int32_t                                            CacheThreadStackSizeKB;                                     // 0x0040   (0x0004)  
	float                                              GlobalCacheSizeGB;                                          // 0x0044   (0x0004)  
	bool                                               UseGlobalCache;                                             // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	uint32_t                                           ExrDecoderThreads;                                          // 0x004C   (0x0004)  
	FString                                            DefaultProxy;                                               // 0x0050   (0x0010)  
	bool                                               UseDefaultProxy;                                            // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UImgMediaSettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(offsetof(UImgMediaSettings, DefaultFrameRate) == 0x0028);
static_assert(offsetof(UImgMediaSettings, DefaultProxy) == 0x0050);
