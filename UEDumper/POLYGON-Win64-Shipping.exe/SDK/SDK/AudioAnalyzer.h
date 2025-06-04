
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/AudioAnalyzer.AudioAnalyzerAssetBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAudioAnalyzerAssetBase : public UObject
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRTSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{ 
public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRT
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{ 
public:
	class USoundWave*                                  Sound;                                                      // 0x0028   (0x0008)  
	float                                              DurationInSeconds;                                          // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x44];                                      // 0x0034   (0x0044)  MISSED
};

/// Class /Script/AudioAnalyzer.AudioAnalyzer
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UAudioAnalyzer : public UObject
{ 
public:
	class UAudioBus*                                   AudioBus;                                                   // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UAudioAnalyzerSubsystem*                     AudioAnalyzerSubsystem;                                     // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0040   (0x0050)  MISSED


	/// Functions
	// Function /Script/AudioAnalyzer.AudioAnalyzer.StopAnalyzing
	// void StopAnalyzing(class UObject* WorldContextObject);                                                                   // [0x53fa290] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioAnalyzer.AudioAnalyzer.StartAnalyzing
	// void StartAnalyzing(class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze);                              // [0x53f9e40] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerSubsystem
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UAudioAnalyzerSubsystem : public UEngineSubsystem
{ 
public:
	TArray<class UAudioAnalyzer*>                      AudioAnalyzers;                                             // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UAudioAnalyzerAssetBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioAnalyzerSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioAnalyzerNRTSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioAnalyzerNRT) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UAudioAnalyzer) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UAudioAnalyzerSubsystem) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(offsetof(UAudioAnalyzerNRT, Sound) == 0x0028);
static_assert(offsetof(UAudioAnalyzer, AudioBus) == 0x0028);
static_assert(offsetof(UAudioAnalyzer, AudioAnalyzerSubsystem) == 0x0038);
static_assert(offsetof(UAudioAnalyzerSubsystem, AudioAnalyzers) == 0x0030);
