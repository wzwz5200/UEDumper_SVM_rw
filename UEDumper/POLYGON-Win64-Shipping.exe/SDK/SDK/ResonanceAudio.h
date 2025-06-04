
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/ResonanceAudio.ERaQualityMode
/// Size: 0x01 (1 bytes)
enum class ERaQualityMode : uint8_t
{
	ERaQualityMode__STEREO_PANNING                                                   = 0,
	ERaQualityMode__BINAURAL_LOW                                                     = 1,
	ERaQualityMode__BINAURAL_MEDIUM                                                  = 2,
	ERaQualityMode__BINAURAL_HIGH                                                    = 3
};

/// Enum /Script/ResonanceAudio.ERaSpatializationMethod
/// Size: 0x01 (1 bytes)
enum class ERaSpatializationMethod : uint8_t
{
	ERaSpatializationMethod__STEREO_PANNING                                          = 0,
	ERaSpatializationMethod__HRTF                                                    = 1
};

/// Enum /Script/ResonanceAudio.ERaDistanceRolloffModel
/// Size: 0x01 (1 bytes)
enum class ERaDistanceRolloffModel : uint8_t
{
	ERaDistanceRolloffModel__LOGARITHMIC                                             = 0,
	ERaDistanceRolloffModel__LINEAR                                                  = 1,
	ERaDistanceRolloffModel__NONE                                                    = 2
};

/// Enum /Script/ResonanceAudio.ERaMaterialName
/// Size: 0x01 (1 bytes)
enum class ERaMaterialName : uint8_t
{
	ERaMaterialName__TRANSPARENT                                                     = 0,
	ERaMaterialName__ACOUSTIC_CEILING_TILES                                          = 1,
	ERaMaterialName__BRICK_BARE                                                      = 2,
	ERaMaterialName__BRICK_PAINTED                                                   = 3,
	ERaMaterialName__CONCRETE_BLOCK_COARSE                                           = 4,
	ERaMaterialName__CONCRETE_BLOCK_PAINTED                                          = 5,
	ERaMaterialName__CURTAIN_HEAVY                                                   = 6,
	ERaMaterialName__FIBER_GLASS_INSULATION                                          = 7,
	ERaMaterialName__GLASS_THIN                                                      = 8,
	ERaMaterialName__GLASS_THICK                                                     = 9,
	ERaMaterialName__GRASS                                                           = 10,
	ERaMaterialName__LINOLEUM_ON_CONCRETE                                            = 11,
	ERaMaterialName__MARBLE                                                          = 12,
	ERaMaterialName__METAL                                                           = 13,
	ERaMaterialName__PARQUET_ONCONCRETE                                              = 14,
	ERaMaterialName__PLASTER_ROUGH                                                   = 15,
	ERaMaterialName__PLASTER_SMOOTH                                                  = 16,
	ERaMaterialName__PLYWOOD_PANEL                                                   = 17,
	ERaMaterialName__POLISHED_CONCRETE_OR_TILE                                       = 18,
	ERaMaterialName__SHEETROCK                                                       = 19,
	ERaMaterialName__WATER_OR_ICE_SURFACE                                            = 20,
	ERaMaterialName__WOOD_CEILING                                                    = 21,
	ERaMaterialName__WOOD_PANEL                                                      = 22,
	ERaMaterialName__UNIFORM                                                         = 23
};

/// Enum /Script/ResonanceAudio.EResonanceRenderMode
/// Size: 0x01 (1 bytes)
enum class EResonanceRenderMode : uint8_t
{
	EResonanceRenderMode__StereoPanning                                              = 0,
	EResonanceRenderMode__BinauralLowQuality                                         = 1,
	EResonanceRenderMode__BinauralMediumQuality                                      = 2,
	EResonanceRenderMode__BinauralHighQuality                                        = 3,
	EResonanceRenderMode__RoomEffectsOnly                                            = 4
};

/// Class /Script/ResonanceAudio.ResonanceAudioSoundfieldSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase
{ 
public:
	EResonanceRenderMode                               RenderMode;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.SetGlobalReverbPreset
	// void SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);                                           // [0x28eb840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary.GetGlobalReverbPreset
	// class UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset();                                                        // [0x28eb700] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ResonanceAudio.ResonanceAudioDirectivityVisualizer
/// Size: 0x0310 (784 bytes) (0x000290 - 0x000310) align 8 MaxSize: 0x0310
class AResonanceAudioDirectivityVisualizer : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x70];                                      // 0x0290   (0x0070)  MISSED
	class UMaterial*                                   Material;                                                   // 0x0300   (0x0008)  
	class UResonanceAudioSpatializationSourceSettings* Settings;                                                   // 0x0308   (0x0008)  
};

/// Struct /Script/ResonanceAudio.ResonanceAudioReverbPluginSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FResonanceAudioReverbPluginSettings
{ 
	bool                                               bEnableRoomEffects;                                         // 0x0000   (0x0001)  
	bool                                               bGetTransformFromAudioVolume;                               // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FVector                                            RoomPosition;                                               // 0x0008   (0x0018)  
	FQuat                                              RoomRotation;                                               // 0x0020   (0x0020)  
	FVector                                            RoomDimensions;                                             // 0x0040   (0x0018)  
	ERaMaterialName                                    LeftWallMaterial;                                           // 0x0058   (0x0001)  
	ERaMaterialName                                    RightWallMaterial;                                          // 0x0059   (0x0001)  
	ERaMaterialName                                    FloorMaterial;                                              // 0x005A   (0x0001)  
	ERaMaterialName                                    CeilingMaterial;                                            // 0x005B   (0x0001)  
	ERaMaterialName                                    FrontWallMaterial;                                          // 0x005C   (0x0001)  
	ERaMaterialName                                    BackWallMaterial;                                           // 0x005D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x005E   (0x0002)  MISSED
	float                                              ReflectionScalar;                                           // 0x0060   (0x0004)  
	float                                              ReverbGain;                                                 // 0x0064   (0x0004)  
	float                                              ReverbTimeModifier;                                         // 0x0068   (0x0004)  
	float                                              ReverbBrightness;                                           // 0x006C   (0x0004)  
};

/// Class /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset
/// Size: 0x0170 (368 bytes) (0x000068 - 0x000170) align 16 MaxSize: 0x0170
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{ 
public:
	unsigned char                                      UnknownData00_8[0x98];                                      // 0x0068   (0x0098)  MISSED
	FResonanceAudioReverbPluginSettings                Settings;                                                   // 0x0100   (0x0070)  


	/// Functions
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation
	// void SetRoomRotation(FQuat& InRotation);                                                                                 // [0x28ebe90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition
	// void SetRoomPosition(FVector& InPosition);                                                                               // [0x28ebdb0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials
	// void SetRoomMaterials(TArray<ERaMaterialName>& InMaterials);                                                             // [0x28ebcb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions
	// void SetRoomDimensions(FVector& InDimensions);                                                                           // [0x28ebbd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier
	// void SetReverbTimeModifier(float InReverbTimeModifier);                                                                  // [0x28ebb40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain
	// void SetReverbGain(float InReverbGain);                                                                                  // [0x28ebab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness
	// void SetReverbBrightness(float InReverbBrightness);                                                                      // [0x28eba20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar
	// void SetReflectionScalar(float InReflectionScalar);                                                                      // [0x28eb990] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects
	// void SetEnableRoomEffects(bool bInEnableRoomEffects);                                                                    // [0x28eb7b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ResonanceAudio.ResonanceAudioSettings
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UResonanceAudioSettings : public UObject
{ 
public:
	FSoftObjectPath                                    OutputSubmix;                                               // 0x0028   (0x0020)  
	ERaQualityMode                                     QualityMode;                                                // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0049   (0x0007)  MISSED
	FSoftObjectPath                                    GlobalReverbPreset;                                         // 0x0050   (0x0020)  
	FSoftObjectPath                                    GlobalSourcePreset;                                         // 0x0070   (0x0020)  
};

/// Class /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{ 
public:
	ERaSpatializationMethod                            SpatializationMethod;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              Pattern;                                                    // 0x002C   (0x0004)  
	float                                              Sharpness;                                                  // 0x0030   (0x0004)  
	bool                                               bToggleVisualization;                                       // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	float                                              Spread;                                                     // 0x003C   (0x0004)  
	ERaDistanceRolloffModel                            Rolloff;                                                    // 0x0040   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	float                                              MinDistance;                                                // 0x0044   (0x0004)  
	float                                              MaxDistance;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x004C   (0x0004)  MISSED


	/// Functions
	// Function /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread
	// void SetSoundSourceSpread(float InSpread);                                                                               // [0x28ec040] Final|Native|Public|BlueprintCallable 
	// Function /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity
	// void SetSoundSourceDirectivity(float InPattern, float InSharpness);                                                      // [0x28ebf70] Final|Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UResonanceAudioSoundfieldSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UResonanceAudioBlueprintFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AResonanceAudioDirectivityVisualizer) == 0x0310); // 784 bytes (0x000290 - 0x000310)
static_assert(sizeof(FResonanceAudioReverbPluginSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UResonanceAudioReverbPluginPreset) == 0x0170); // 368 bytes (0x000068 - 0x000170)
static_assert(sizeof(UResonanceAudioSettings) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UResonanceAudioSpatializationSourceSettings) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(offsetof(UResonanceAudioSoundfieldSettings, RenderMode) == 0x0028);
static_assert(offsetof(AResonanceAudioDirectivityVisualizer, Material) == 0x0300);
static_assert(offsetof(AResonanceAudioDirectivityVisualizer, Settings) == 0x0308);
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RoomPosition) == 0x0008);
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RoomRotation) == 0x0020);
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RoomDimensions) == 0x0040);
static_assert(offsetof(FResonanceAudioReverbPluginSettings, LeftWallMaterial) == 0x0058);
static_assert(offsetof(FResonanceAudioReverbPluginSettings, RightWallMaterial) == 0x0059);
static_assert(offsetof(FResonanceAudioReverbPluginSettings, FloorMaterial) == 0x005A);
static_assert(offsetof(FResonanceAudioReverbPluginSettings, CeilingMaterial) == 0x005B);
static_assert(offsetof(FResonanceAudioReverbPluginSettings, FrontWallMaterial) == 0x005C);
static_assert(offsetof(FResonanceAudioReverbPluginSettings, BackWallMaterial) == 0x005D);
static_assert(offsetof(UResonanceAudioReverbPluginPreset, Settings) == 0x0100);
static_assert(offsetof(UResonanceAudioSettings, OutputSubmix) == 0x0028);
static_assert(offsetof(UResonanceAudioSettings, QualityMode) == 0x0048);
static_assert(offsetof(UResonanceAudioSettings, GlobalReverbPreset) == 0x0050);
static_assert(offsetof(UResonanceAudioSettings, GlobalSourcePreset) == 0x0070);
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, SpatializationMethod) == 0x0028);
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Rolloff) == 0x0040);
