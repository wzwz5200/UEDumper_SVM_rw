
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/AudioWidgets.EAudioRadialSliderLayout
/// Size: 0x01 (1 bytes)
enum class EAudioRadialSliderLayout : uint8_t
{
	Layout_LabelTop                                                                  = 0,
	Layout_LabelCenter                                                               = 1,
	Layout_LabelBottom                                                               = 2
};

/// Struct /Script/AudioWidgets.MeterChannelInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FMeterChannelInfo
{ 
	float                                              MeterValue;                                                 // 0x0000   (0x0004)  
	float                                              PeakValue;                                                  // 0x0004   (0x0004)  
	float                                              ClippingValue;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/AudioWidgets.AudioMeterStyle
/// Size: 0x04D0 (1232 bytes) (0x000008 - 0x0004D0) align 16 MaxSize: 0x04D0
struct FAudioMeterStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        MeterValueImage;                                            // 0x0010   (0x00D0)  
	FSlateBrush                                        BackgroundImage;                                            // 0x00E0   (0x00D0)  
	FSlateBrush                                        MeterBackgroundImage;                                       // 0x01B0   (0x00D0)  
	FSlateBrush                                        MeterValueBackgroundImage;                                  // 0x0280   (0x00D0)  
	FSlateBrush                                        MeterPeakImage;                                             // 0x0350   (0x00D0)  
	FVector2D                                          MeterSize;                                                  // 0x0420   (0x0010)  
	FVector2D                                          MeterPadding;                                               // 0x0430   (0x0010)  
	float                                              MeterValuePadding;                                          // 0x0440   (0x0004)  
	float                                              PeakValueWidth;                                             // 0x0444   (0x0004)  
	FVector2D                                          ValueRangeDb;                                               // 0x0448   (0x0010)  
	bool                                               bShowScale;                                                 // 0x0458   (0x0001)  
	bool                                               bScaleSide;                                                 // 0x0459   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x045A   (0x0002)  MISSED
	float                                              ScaleHashOffset;                                            // 0x045C   (0x0004)  
	float                                              ScaleHashWidth;                                             // 0x0460   (0x0004)  
	float                                              ScaleHashHeight;                                            // 0x0464   (0x0004)  
	int32_t                                            DecibelsPerHash;                                            // 0x0468   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x046C   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0470   (0x0058)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x04C8   (0x0008)  MISSED
};

/// Class /Script/AudioWidgets.AudioMeter
/// Size: 0x06D0 (1744 bytes) (0x000150 - 0x0006D0) align 16 MaxSize: 0x06D0
class UAudioMeter : public UWidget
{ 
public:
	TArray<FMeterChannelInfo>                          MeterChannelInfo;                                           // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,372) /* FDelegateProperty */      __um(MeterChannelInfoDelegate);                             // 0x0160   (0x0010)  
	FAudioMeterStyle                                   WidgetStyle;                                                // 0x0170   (0x04D0)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0640   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0641   (0x0003)  MISSED
	FLinearColor                                       BackgroundColor;                                            // 0x0644   (0x0010)  
	FLinearColor                                       MeterBackgroundColor;                                       // 0x0654   (0x0010)  
	FLinearColor                                       MeterValueColor;                                            // 0x0664   (0x0010)  
	FLinearColor                                       MeterPeakColor;                                             // 0x0674   (0x0010)  
	FLinearColor                                       MeterClippingColor;                                         // 0x0684   (0x0010)  
	FLinearColor                                       MeterScaleColor;                                            // 0x0694   (0x0010)  
	FLinearColor                                       MeterScaleLabelColor;                                       // 0x06A4   (0x0010)  
	unsigned char                                      UnknownData01_7[0x1C];                                      // 0x06B4   (0x001C)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioMeter.SetMeterValueColor
	// void SetMeterValueColor(FLinearColor InValue);                                                                           // [0x28cd6e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleLabelColor
	// void SetMeterScaleLabelColor(FLinearColor InValue);                                                                      // [0x28cd5e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleColor
	// void SetMeterScaleColor(FLinearColor InValue);                                                                           // [0x28cd4e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterPeakColor
	// void SetMeterPeakColor(FLinearColor InValue);                                                                            // [0x28cd3e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterClippingColor
	// void SetMeterClippingColor(FLinearColor InValue);                                                                        // [0x28cd2e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterChannelInfo
	// void SetMeterChannelInfo(TArray<FMeterChannelInfo>& InMeterChannelInfo);                                                 // [0x28cd230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterBackgroundColor
	// void SetMeterBackgroundColor(FLinearColor InValue);                                                                      // [0x28cd130] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InValue);                                                                           // [0x28ccef0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
	// TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();                                                      // [0x2c97800] Public|Delegate      
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo
	// TArray<FMeterChannelInfo> GetMeterChannelInfo();                                                                         // [0x28ccc10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioWidgets.AudioRadialSlider
/// Size: 0x0370 (880 bytes) (0x000150 - 0x000370) align 16 MaxSize: 0x0370
class UAudioRadialSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0150   (0x0004)  
	SDK_UNDEFINED(16,373) /* FDelegateProperty */      __um(ValueDelegate);                                        // 0x0154   (0x0010)  
	TEnumAsByte<EAudioRadialSliderLayout>              WidgetLayout;                                               // 0x0164   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0165   (0x0003)  MISSED
	FLinearColor                                       CenterBackgroundColor;                                      // 0x0168   (0x0010)  
	FLinearColor                                       SliderProgressColor;                                        // 0x0178   (0x0010)  
	FLinearColor                                       SliderBarColor;                                             // 0x0188   (0x0010)  
	FVector2D                                          HandStartEndRatio;                                          // 0x0198   (0x0010)  
	FText                                              UnitsText;                                                  // 0x01A8   (0x0018)  
	FLinearColor                                       TextLabelBackgroundColor;                                   // 0x01C0   (0x0010)  
	bool                                               ShowLabelOnlyOnHover;                                       // 0x01D0   (0x0001)  
	bool                                               ShowUnitsText;                                              // 0x01D1   (0x0001)  
	bool                                               IsUnitsTextReadOnly;                                        // 0x01D2   (0x0001)  
	bool                                               IsValueTextReadOnly;                                        // 0x01D3   (0x0001)  
	float                                              SliderThickness;                                            // 0x01D4   (0x0004)  
	FVector2D                                          OutputRange;                                                // 0x01D8   (0x0010)  
	SDK_UNDEFINED(16,374) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                     // 0x01E8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x178];                                     // 0x01F8   (0x0178)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioRadialSlider.SetWidgetLayout
	// void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);                                                    // [0x28ce5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0x28ce390] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0x28ce250] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0x28ce090] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0x28cded0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderThickness
	// void SetSliderThickness(float InThickness);                                                                              // [0x28cdd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0x28cdce0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x28cdba0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0x28cd9c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0x28cd880] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetOutputRange
	// void SetOutputRange(FVector2D InOutputRange);                                                                            // [0x28cd7e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InHandStartEndRatio);                                                                // [0x28cd090] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0x28ccff0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0x28cce50] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0x28ccd10] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioVolumeRadialSlider
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 16 MaxSize: 0x0370
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioFrequencyRadialSlider
/// Size: 0x0370 (880 bytes) (0x000370 - 0x000370) align 16 MaxSize: 0x0370
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioSliderBase
/// Size: 0x09A0 (2464 bytes) (0x000150 - 0x0009A0) align 16 MaxSize: 0x09A0
class UAudioSliderBase : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	FText                                              UnitsText;                                                  // 0x0158   (0x0018)  
	FLinearColor                                       TextLabelBackgroundColor;                                   // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,375) /* FDelegateProperty */      __um(TextLabelBackgroundColorDelegate);                     // 0x0180   (0x0010)  
	bool                                               ShowLabelOnlyOnHover;                                       // 0x0190   (0x0001)  
	bool                                               ShowUnitsText;                                              // 0x0191   (0x0001)  
	bool                                               IsUnitsTextReadOnly;                                        // 0x0192   (0x0001)  
	bool                                               IsValueTextReadOnly;                                        // 0x0193   (0x0001)  
	SDK_UNDEFINED(16,376) /* FDelegateProperty */      __um(ValueDelegate);                                        // 0x0194   (0x0010)  
	FLinearColor                                       SliderBackgroundColor;                                      // 0x01A4   (0x0010)  
	SDK_UNDEFINED(16,377) /* FDelegateProperty */      __um(SliderBackgroundColorDelegate);                        // 0x01B4   (0x0010)  
	FLinearColor                                       SliderBarColor;                                             // 0x01C4   (0x0010)  
	SDK_UNDEFINED(16,378) /* FDelegateProperty */      __um(SliderBarColorDelegate);                               // 0x01D4   (0x0010)  
	FLinearColor                                       SliderThumbColor;                                           // 0x01E4   (0x0010)  
	SDK_UNDEFINED(16,379) /* FDelegateProperty */      __um(SliderThumbColorDelegate);                             // 0x01F4   (0x0010)  
	FLinearColor                                       WidgetBackgroundColor;                                      // 0x0204   (0x0010)  
	SDK_UNDEFINED(16,380) /* FDelegateProperty */      __um(WidgetBackgroundColorDelegate);                        // 0x0214   (0x0010)  
	TEnumAsByte<EOrientation>                          Orientation;                                                // 0x0224   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0225   (0x0003)  MISSED
	SDK_UNDEFINED(16,381) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                     // 0x0228   (0x0010)  
	unsigned char                                      UnknownData02_7[0x768];                                     // 0x0238   (0x0768)  MISSED


	/// Functions
	// Function /Script/AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
	// void SetWidgetBackgroundColor(FLinearColor InValue);                                                                     // [0x28ce510] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0x28ce450] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0x28ce2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0x28ce170] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0x28cdfb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderThumbColor
	// void SetSliderThumbColor(FLinearColor InValue);                                                                          // [0x28cde30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x28cdc40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
	// void SetSliderBackgroundColor(FLinearColor InValue);                                                                     // [0x28cdb00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0x28cda60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0x28cd920] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0x28ccb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0x28ccdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetLinValue
	// float GetLinValue(float OutputValue);                                                                                    // [0x28ccb70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioWidgets.AudioSlider
/// Size: 0x09B0 (2480 bytes) (0x0009A0 - 0x0009B0) align 16 MaxSize: 0x09B0
class UAudioSlider : public UAudioSliderBase
{ 
public:
	TWeakObjectPtr<class UCurveFloat*>                 LinToOutputCurve;                                           // 0x09A0   (0x0008)  
	TWeakObjectPtr<class UCurveFloat*>                 OutputToLinCurve;                                           // 0x09A8   (0x0008)  
};

/// Class /Script/AudioWidgets.AudioVolumeSlider
/// Size: 0x09B0 (2480 bytes) (0x0009B0 - 0x0009B0) align 16 MaxSize: 0x09B0
class UAudioVolumeSlider : public UAudioSlider
{ 
public:
};

/// Class /Script/AudioWidgets.AudioFrequencySlider
/// Size: 0x09B0 (2480 bytes) (0x0009A0 - 0x0009B0) align 16 MaxSize: 0x09B0
class UAudioFrequencySlider : public UAudioSliderBase
{ 
public:
	FVector2D                                          OutputRange;                                                // 0x09A0   (0x0010)  
};

/// Struct /Script/AudioWidgets.AudioTextBoxStyle
/// Size: 0x0100 (256 bytes) (0x000008 - 0x000100) align 16 MaxSize: 0x0100
struct FAudioTextBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundImage;                                            // 0x0010   (0x00D0)  
	FSlateColor                                        BackgroundColor;                                            // 0x00E0   (0x0014)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x00F4   (0x000C)  MISSED
};

/// Struct /Script/AudioWidgets.AudioSliderStyle
/// Size: 0x0750 (1872 bytes) (0x000008 - 0x000750) align 16 MaxSize: 0x0750
struct FAudioSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSliderStyle                                       SliderStyle;                                                // 0x0010   (0x0500)  
	FAudioTextBoxStyle                                 TextBoxStyle;                                               // 0x0510   (0x0100)  
	FSlateBrush                                        WidgetBackgroundImage;                                      // 0x0610   (0x00D0)  
	FSlateColor                                        SliderBackgroundColor;                                      // 0x06E0   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x06F4   (0x0004)  MISSED
	FVector2D                                          SliderBackgroundSize;                                       // 0x06F8   (0x0010)  
	float                                              LabelPadding;                                               // 0x0708   (0x0004)  
	FSlateColor                                        SliderBarColor;                                             // 0x070C   (0x0014)  
	FSlateColor                                        SliderThumbColor;                                           // 0x0720   (0x0014)  
	FSlateColor                                        WidgetBackgroundColor;                                      // 0x0734   (0x0014)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0748   (0x0008)  MISSED
};

/// Struct /Script/AudioWidgets.AudioRadialSliderStyle
/// Size: 0x0160 (352 bytes) (0x000008 - 0x000160) align 16 MaxSize: 0x0160
struct FAudioRadialSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FAudioTextBoxStyle                                 TextBoxStyle;                                               // 0x0010   (0x0100)  
	FSlateColor                                        CenterBackgroundColor;                                      // 0x0110   (0x0014)  
	FSlateColor                                        SliderBarColor;                                             // 0x0124   (0x0014)  
	FSlateColor                                        SliderProgressColor;                                        // 0x0138   (0x0014)  
	float                                              LabelPadding;                                               // 0x014C   (0x0004)  
	float                                              DefaultSliderRadius;                                        // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0154   (0x000C)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FMeterChannelInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FAudioMeterStyle) == 0x04D0); // 1232 bytes (0x000008 - 0x0004D0)
static_assert(sizeof(UAudioMeter) == 0x06D0); // 1744 bytes (0x000150 - 0x0006D0)
static_assert(sizeof(UAudioRadialSlider) == 0x0370); // 880 bytes (0x000150 - 0x000370)
static_assert(sizeof(UAudioVolumeRadialSlider) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UAudioFrequencyRadialSlider) == 0x0370); // 880 bytes (0x000370 - 0x000370)
static_assert(sizeof(UAudioSliderBase) == 0x09A0); // 2464 bytes (0x000150 - 0x0009A0)
static_assert(sizeof(UAudioSlider) == 0x09B0); // 2480 bytes (0x0009A0 - 0x0009B0)
static_assert(sizeof(UAudioVolumeSlider) == 0x09B0); // 2480 bytes (0x0009B0 - 0x0009B0)
static_assert(sizeof(UAudioFrequencySlider) == 0x09B0); // 2480 bytes (0x0009A0 - 0x0009B0)
static_assert(sizeof(FAudioTextBoxStyle) == 0x0100); // 256 bytes (0x000008 - 0x000100)
static_assert(sizeof(FAudioSliderStyle) == 0x0750); // 1872 bytes (0x000008 - 0x000750)
static_assert(sizeof(FAudioRadialSliderStyle) == 0x0160); // 352 bytes (0x000008 - 0x000160)
static_assert(offsetof(FAudioMeterStyle, MeterValueImage) == 0x0010);
static_assert(offsetof(FAudioMeterStyle, BackgroundImage) == 0x00E0);
static_assert(offsetof(FAudioMeterStyle, MeterBackgroundImage) == 0x01B0);
static_assert(offsetof(FAudioMeterStyle, MeterValueBackgroundImage) == 0x0280);
static_assert(offsetof(FAudioMeterStyle, MeterPeakImage) == 0x0350);
static_assert(offsetof(FAudioMeterStyle, MeterSize) == 0x0420);
static_assert(offsetof(FAudioMeterStyle, MeterPadding) == 0x0430);
static_assert(offsetof(FAudioMeterStyle, ValueRangeDb) == 0x0448);
static_assert(offsetof(FAudioMeterStyle, Font) == 0x0470);
static_assert(offsetof(UAudioMeter, MeterChannelInfo) == 0x0150);
static_assert(offsetof(UAudioMeter, WidgetStyle) == 0x0170);
static_assert(offsetof(UAudioMeter, Orientation) == 0x0640);
static_assert(offsetof(UAudioMeter, BackgroundColor) == 0x0644);
static_assert(offsetof(UAudioMeter, MeterBackgroundColor) == 0x0654);
static_assert(offsetof(UAudioMeter, MeterValueColor) == 0x0664);
static_assert(offsetof(UAudioMeter, MeterPeakColor) == 0x0674);
static_assert(offsetof(UAudioMeter, MeterClippingColor) == 0x0684);
static_assert(offsetof(UAudioMeter, MeterScaleColor) == 0x0694);
static_assert(offsetof(UAudioMeter, MeterScaleLabelColor) == 0x06A4);
static_assert(offsetof(UAudioRadialSlider, WidgetLayout) == 0x0164);
static_assert(offsetof(UAudioRadialSlider, CenterBackgroundColor) == 0x0168);
static_assert(offsetof(UAudioRadialSlider, SliderProgressColor) == 0x0178);
static_assert(offsetof(UAudioRadialSlider, SliderBarColor) == 0x0188);
static_assert(offsetof(UAudioRadialSlider, HandStartEndRatio) == 0x0198);
static_assert(offsetof(UAudioRadialSlider, UnitsText) == 0x01A8);
static_assert(offsetof(UAudioRadialSlider, TextLabelBackgroundColor) == 0x01C0);
static_assert(offsetof(UAudioRadialSlider, OutputRange) == 0x01D8);
static_assert(offsetof(UAudioSliderBase, UnitsText) == 0x0158);
static_assert(offsetof(UAudioSliderBase, TextLabelBackgroundColor) == 0x0170);
static_assert(offsetof(UAudioSliderBase, SliderBackgroundColor) == 0x01A4);
static_assert(offsetof(UAudioSliderBase, SliderBarColor) == 0x01C4);
static_assert(offsetof(UAudioSliderBase, SliderThumbColor) == 0x01E4);
static_assert(offsetof(UAudioSliderBase, WidgetBackgroundColor) == 0x0204);
static_assert(offsetof(UAudioSliderBase, Orientation) == 0x0224);
static_assert(offsetof(UAudioSlider, LinToOutputCurve) == 0x09A0);
static_assert(offsetof(UAudioSlider, OutputToLinCurve) == 0x09A8);
static_assert(offsetof(UAudioFrequencySlider, OutputRange) == 0x09A0);
static_assert(offsetof(FAudioTextBoxStyle, BackgroundImage) == 0x0010);
static_assert(offsetof(FAudioTextBoxStyle, BackgroundColor) == 0x00E0);
static_assert(offsetof(FAudioSliderStyle, SliderStyle) == 0x0010);
static_assert(offsetof(FAudioSliderStyle, TextBoxStyle) == 0x0510);
static_assert(offsetof(FAudioSliderStyle, WidgetBackgroundImage) == 0x0610);
static_assert(offsetof(FAudioSliderStyle, SliderBackgroundColor) == 0x06E0);
static_assert(offsetof(FAudioSliderStyle, SliderBackgroundSize) == 0x06F8);
static_assert(offsetof(FAudioSliderStyle, SliderBarColor) == 0x070C);
static_assert(offsetof(FAudioSliderStyle, SliderThumbColor) == 0x0720);
static_assert(offsetof(FAudioSliderStyle, WidgetBackgroundColor) == 0x0734);
static_assert(offsetof(FAudioRadialSliderStyle, TextBoxStyle) == 0x0010);
static_assert(offsetof(FAudioRadialSliderStyle, CenterBackgroundColor) == 0x0110);
static_assert(offsetof(FAudioRadialSliderStyle, SliderBarColor) == 0x0124);
static_assert(offsetof(FAudioRadialSliderStyle, SliderProgressColor) == 0x0138);
