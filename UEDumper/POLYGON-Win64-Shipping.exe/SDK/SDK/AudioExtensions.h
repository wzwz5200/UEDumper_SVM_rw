
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/AudioExtensions.EAudioParameterType
/// Size: 0x01 (1 bytes)
enum class EAudioParameterType : uint8_t
{
	EAudioParameterType__None                                                        = 0,
	EAudioParameterType__Boolean                                                     = 1,
	EAudioParameterType__Integer                                                     = 2,
	EAudioParameterType__Float                                                       = 3,
	EAudioParameterType__String                                                      = 4,
	EAudioParameterType__Object                                                      = 5,
	EAudioParameterType__NoneArray                                                   = 6,
	EAudioParameterType__BooleanArray                                                = 7,
	EAudioParameterType__IntegerArray                                                = 8,
	EAudioParameterType__FloatArray                                                  = 9,
	EAudioParameterType__StringArray                                                 = 10,
	EAudioParameterType__ObjectArray                                                 = 11,
	EAudioParameterType__Trigger                                                     = 12,
	EAudioParameterType__COUNT                                                       = 13
};

/// Enum /Script/AudioExtensions.EPcmBitDepthConversion
/// Size: 0x01 (1 bytes)
enum class EPcmBitDepthConversion : uint8_t
{
	EPcmBitDepthConversion__SameAsSource                                             = 0,
	EPcmBitDepthConversion__Int16                                                    = 1,
	EPcmBitDepthConversion__Float32                                                  = 2
};

/// Class /Script/AudioExtensions.SoundfieldEncodingSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USoundfieldEncodingSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SpatializationPluginSourceSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USpatializationPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SourceDataOverridePluginSourceSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USourceDataOverridePluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.OcclusionPluginSourceSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOcclusionPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.ReverbPluginSourceSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UReverbPluginSourceSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.AudioParameterControllerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAudioParameterControllerInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetTriggerParameter
	// void SetTriggerParameter(FName InName);                                                                                  // [0x40f4ce0] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringParameter
	// void SetStringParameter(FName InName, FString InValue);                                                                  // [0x40f4c00] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetStringArrayParameter
	// void SetStringArrayParameter(FName InName, TArray<FString>& InValue);                                                    // [0x40f4ae0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetParameters_Blueprint
	// void SetParameters_Blueprint(TArray<FAudioParameter>& InParameters);                                                     // [0x40f4980] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectParameter
	// void SetObjectParameter(FName InName, class UObject* InValue);                                                           // [0x40f48b0] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetObjectArrayParameter
	// void SetObjectArrayParameter(FName InName, TArray<UObject*>& InValue);                                                   // [0x40f47c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntParameter
	// void SetIntParameter(FName InName, int32_t inInt);                                                                       // [0x40f46f0] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetIntArrayParameter
	// void SetIntArrayParameter(FName InName, TArray<int32_t>& InValue);                                                       // [0x40f4600] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatParameter
	// void SetFloatParameter(FName InName, float InFloat);                                                                     // [0x40f4530] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetFloatArrayParameter
	// void SetFloatArrayParameter(FName InName, TArray<float>& InValue);                                                       // [0x40f4440] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolParameter
	// void SetBoolParameter(FName InName, bool InBool);                                                                        // [0x40f4370] Native|Public|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.SetBoolArrayParameter
	// void SetBoolArrayParameter(FName InName, TArray<bool>& InValue);                                                         // [0x40f4280] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioExtensions.AudioParameterControllerInterface.ResetParameters
	// void ResetParameters();                                                                                                  // [0x40f4260] Native|Public|BlueprintCallable 
};

/// Class /Script/AudioExtensions.AudioCodecEncoderSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UAudioCodecEncoderSettings : public UObject
{ 
public:
	int32_t                                            Version;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/AudioExtensions.AudioEndpointSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAudioEndpointSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.DummyEndpointSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{ 
public:
};

/// Class /Script/AudioExtensions.SoundModulatorBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class USoundModulatorBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/AudioExtensions.SoundfieldEndpointSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USoundfieldEndpointSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectSettingsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USoundfieldEffectSettingsBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.SoundfieldEffectBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class USoundfieldEffectBase : public UObject
{ 
public:
	class USoundfieldEffectSettingsBase*               Settings;                                                   // 0x0028   (0x0008)  
};

/// Class /Script/AudioExtensions.WaveformTransformationBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWaveformTransformationBase : public UObject
{ 
public:
};

/// Class /Script/AudioExtensions.WaveformTransformationChain
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UWaveformTransformationChain : public UObject
{ 
public:
	TArray<class UWaveformTransformationBase*>         Transformations;                                            // 0x0028   (0x0010)  
};

/// Class /Script/AudioExtensions.AudioPcmEncoderSettings
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings
{ 
public:
	EPcmBitDepthConversion                             BitDepthConversion;                                         // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/AudioExtensions.AudioParameter
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FAudioParameter
{ 
	FName                                              ParamName;                                                  // 0x0000   (0x0008)  
	float                                              FloatParam;                                                 // 0x0008   (0x0004)  
	bool                                               BoolParam;                                                  // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            IntParam;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UObject*                                     ObjectParam;                                                // 0x0018   (0x0008)  
	FString                                            StringParam;                                                // 0x0020   (0x0010)  
	TArray<float>                                      ArrayFloatParam;                                            // 0x0030   (0x0010)  
	TArray<bool>                                       ArrayBoolParam;                                             // 0x0040   (0x0010)  
	TArray<int32_t>                                    ArrayIntParam;                                              // 0x0050   (0x0010)  
	TArray<class UObject*>                             ArrayObjectParam;                                           // 0x0060   (0x0010)  
	TArray<FString>                                    ArrayStringParam;                                           // 0x0070   (0x0010)  
	EAudioParameterType                                ParamType;                                                  // 0x0080   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	FName                                              TypeName;                                                   // 0x0084   (0x0008)  
	unsigned char                                      UnknownData03_7[0x14];                                      // 0x008C   (0x0014)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(USoundfieldEncodingSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USpatializationPluginSourceSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USourceDataOverridePluginSourceSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOcclusionPluginSourceSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UReverbPluginSourceSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioParameterControllerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAudioCodecEncoderSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAudioEndpointSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDummyEndpointSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USoundModulatorBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USoundfieldEndpointSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USoundfieldEffectSettingsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USoundfieldEffectBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UWaveformTransformationBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWaveformTransformationChain) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UAudioPcmEncoderSettings) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FAudioParameter) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(offsetof(USoundfieldEffectBase, Settings) == 0x0028);
static_assert(offsetof(UWaveformTransformationChain, Transformations) == 0x0028);
static_assert(offsetof(UAudioPcmEncoderSettings, BitDepthConversion) == 0x0030);
static_assert(offsetof(FAudioParameter, ParamName) == 0x0000);
static_assert(offsetof(FAudioParameter, ObjectParam) == 0x0018);
static_assert(offsetof(FAudioParameter, StringParam) == 0x0020);
static_assert(offsetof(FAudioParameter, ArrayFloatParam) == 0x0030);
static_assert(offsetof(FAudioParameter, ArrayBoolParam) == 0x0040);
static_assert(offsetof(FAudioParameter, ArrayIntParam) == 0x0050);
static_assert(offsetof(FAudioParameter, ArrayObjectParam) == 0x0060);
static_assert(offsetof(FAudioParameter, ArrayStringParam) == 0x0070);
static_assert(offsetof(FAudioParameter, ParamType) == 0x0080);
static_assert(offsetof(FAudioParameter, TypeName) == 0x0084);
