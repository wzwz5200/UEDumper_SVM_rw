
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

/// Struct /Script/SoundUtilities.SoundVariation
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSoundVariation
{ 
	class USoundWave*                                  SoundWave;                                                  // 0x0000   (0x0008)  
	float                                              ProbabilityWeight;                                          // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector2D                                          VolumeRange;                                                // 0x0010   (0x0010)  
	FVector2D                                          PitchRange;                                                 // 0x0020   (0x0010)  
};

/// Class /Script/SoundUtilities.SoundSimple
/// Size: 0x0180 (384 bytes) (0x000168 - 0x000180) align 8 MaxSize: 0x0180
class USoundSimple : public USoundBase
{ 
public:
	TArray<FSoundVariation>                            Variations;                                                 // 0x0168   (0x0010)  
	class USoundWave*                                  SoundWave;                                                  // 0x0178   (0x0008)  
};

/// Class /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetQFromBandwidth
	// float GetQFromBandwidth(float InBandwidth);                                                                              // [0xa4c710] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetPitchScaleFromMIDIPitch
	// float GetPitchScaleFromMIDIPitch(int32_t BaseMidiNote, int32_t TargetMidiNote);                                          // [0xa4c5d0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetMIDIPitchFromFrequency
	// int32_t GetMIDIPitchFromFrequency(float Frequency);                                                                      // [0xa4c510] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLogFrequencyClamped
	// float GetLogFrequencyClamped(float InValue, FVector2D& InDomain, FVector2D& InRange);                                    // [0xa4c2c0] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetLinearFrequencyClamped
	// float GetLinearFrequencyClamped(float InValue, FVector2D& InDomain, FVector2D& InRange);                                 // [0xa4c0c0] Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetGainFromMidiVelocity
	// float GetGainFromMidiVelocity(int32_t InVelocity);                                                                       // [0xa4c000] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyMultiplierFromSemitones
	// float GetFrequencyMultiplierFromSemitones(float InPitchSemitones);                                                       // [0xa4bf50] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetFrequencyFromMIDIPitch
	// float GetFrequencyFromMIDIPitch(int32_t MidiNote);                                                                       // [0xa4be90] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBeatTempo
	// float GetBeatTempo(float BeatsPerMinute, int32_t BeatMultiplier, int32_t DivisionsOfWholeNote);                          // [0xa4bd60] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.GetBandwidthFromQ
	// float GetBandwidthFromQ(float InQ);                                                                                      // [0xa4bc90] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertLinearToDecibels
	// float ConvertLinearToDecibels(float InLinear, float InFloor);                                                            // [0xa4bbb0] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/SoundUtilities.SoundUtilitiesBPFunctionLibrary.ConvertDecibelsToLinear
	// float ConvertDecibelsToLinear(float InDecibels);                                                                         // [0xa4bb20] Final|Native|Static|Private|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(FSoundVariation) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(USoundSimple) == 0x0180); // 384 bytes (0x000168 - 0x000180)
static_assert(sizeof(USoundUtilitiesBPFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(offsetof(FSoundVariation, SoundWave) == 0x0000);
static_assert(offsetof(FSoundVariation, VolumeRange) == 0x0010);
static_assert(offsetof(FSoundVariation, PitchRange) == 0x0020);
static_assert(offsetof(USoundSimple, Variations) == 0x0168);
static_assert(offsetof(USoundSimple, SoundWave) == 0x0178);
