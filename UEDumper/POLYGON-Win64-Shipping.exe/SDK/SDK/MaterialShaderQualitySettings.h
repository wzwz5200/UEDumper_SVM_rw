
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/MaterialShaderQualitySettings.EMobileShadowQuality
/// Size: 0x01 (1 bytes)
enum class EMobileShadowQuality : uint8_t
{
	EMobileShadowQuality__NoFiltering                                                = 0,
	EMobileShadowQuality__PCF_1x1                                                    = 1,
	EMobileShadowQuality__PCF_3x3                                                    = 2,
	EMobileShadowQuality__PCF_5x5                                                    = 3
};

/// Struct /Script/MaterialShaderQualitySettings.MaterialQualityOverrides
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 1 MaxSize: 0x0008
struct FMaterialQualityOverrides
{ 
	bool                                               bDiscardQualityDuringCook;                                  // 0x0000   (0x0001)  
	bool                                               bEnableOverride;                                            // 0x0001   (0x0001)  
	bool                                               bForceFullyRough;                                           // 0x0002   (0x0001)  
	bool                                               bForceNonMetal;                                             // 0x0003   (0x0001)  
	bool                                               bForceDisableLMDirectionality;                              // 0x0004   (0x0001)  
	bool                                               bForceDisablePreintegratedGF;                               // 0x0005   (0x0001)  
	bool                                               bDisableMaterialNormalCalculation;                          // 0x0006   (0x0001)  
	EMobileShadowQuality                               MobileShadowQuality;                                        // 0x0007   (0x0001)  
};

/// Class /Script/MaterialShaderQualitySettings.ShaderPlatformQualitySettings
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UShaderPlatformQualitySettings : public UObject
{ 
public:
	FMaterialQualityOverrides                          QualityOverrides[4];                                        // 0x0028   (0x0020)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0048   (0x0010)  MISSED
};

/// Class /Script/MaterialShaderQualitySettings.MaterialShaderQualitySettings
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UMaterialShaderQualitySettings : public UObject
{ 
public:
	TMap<FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                          // 0x0028   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(FMaterialQualityOverrides) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UShaderPlatformQualitySettings) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UMaterialShaderQualitySettings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(offsetof(FMaterialQualityOverrides, MobileShadowQuality) == 0x0007);
static_assert(offsetof(UShaderPlatformQualitySettings, QualityOverrides) == 0x0028);
static_assert(offsetof(UMaterialShaderQualitySettings, ForwardSettingMap) == 0x0028);
