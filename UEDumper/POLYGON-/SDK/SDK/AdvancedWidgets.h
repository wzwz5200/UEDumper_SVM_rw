
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/AdvancedWidgets.RadialSlider
/// Size: 0x07E0 (2016 bytes) (0x000150 - 0x0007E0) align 16 MaxSize: 0x07E0
class URadialSlider : public UWidget
{ 
public:
	float                                              Value;                                                      // 0x0150   (0x0004)  
	SDK_UNDEFINED(16,344) /* FDelegateProperty */      __um(ValueDelegate);                                        // 0x0154   (0x0010)  
	bool                                               bUseCustomDefaultValue;                                     // 0x0164   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0165   (0x0003)  MISSED
	float                                              CustomDefaultValue;                                         // 0x0168   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x016C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 SliderRange;                                                // 0x0170   (0x0088)  
	TArray<float>                                      ValueTags;                                                  // 0x01F8   (0x0010)  
	float                                              SliderHandleStartAngle;                                     // 0x0208   (0x0004)  
	float                                              SliderHandleEndAngle;                                       // 0x020C   (0x0004)  
	float                                              AngularOffset;                                              // 0x0210   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0214   (0x0004)  MISSED
	FVector2D                                          HandStartEndRatio;                                          // 0x0218   (0x0010)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0228   (0x0008)  MISSED
	FSliderStyle                                       WidgetStyle;                                                // 0x0230   (0x0500)  
	FLinearColor                                       SliderBarColor;                                             // 0x0730   (0x0010)  
	FLinearColor                                       SliderProgressColor;                                        // 0x0740   (0x0010)  
	FLinearColor                                       SliderHandleColor;                                          // 0x0750   (0x0010)  
	FLinearColor                                       CenterBackgroundColor;                                      // 0x0760   (0x0010)  
	bool                                               Locked;                                                     // 0x0770   (0x0001)  
	bool                                               MouseUsesStep;                                              // 0x0771   (0x0001)  
	bool                                               RequiresControllerLock;                                     // 0x0772   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0773   (0x0001)  MISSED
	float                                              StepSize;                                                   // 0x0774   (0x0004)  
	bool                                               IsFocusable;                                                // 0x0778   (0x0001)  
	bool                                               UseVerticalDrag;                                            // 0x0779   (0x0001)  
	bool                                               ShowSliderHandle;                                           // 0x077A   (0x0001)  
	bool                                               ShowSliderHand;                                             // 0x077B   (0x0001)  
	unsigned char                                      UnknownData05_6[0x4];                                       // 0x077C   (0x0004)  MISSED
	SDK_UNDEFINED(16,345) /* FMulticastInlineDelegate */ __um(OnMouseCaptureBegin);                                // 0x0780   (0x0010)  
	SDK_UNDEFINED(16,346) /* FMulticastInlineDelegate */ __um(OnMouseCaptureEnd);                                  // 0x0790   (0x0010)  
	SDK_UNDEFINED(16,347) /* FMulticastInlineDelegate */ __um(OnControllerCaptureBegin);                           // 0x07A0   (0x0010)  
	SDK_UNDEFINED(16,348) /* FMulticastInlineDelegate */ __um(OnControllerCaptureEnd);                             // 0x07B0   (0x0010)  
	SDK_UNDEFINED(16,349) /* FMulticastInlineDelegate */ __um(OnValueChanged);                                     // 0x07C0   (0x0010)  
	unsigned char                                      UnknownData06_7[0x10];                                      // 0x07D0   (0x0010)  MISSED


	/// Functions
	// Function /Script/AdvancedWidgets.RadialSlider.SetValueTags
	// void SetValueTags(TArray<float>& InValueTags);                                                                           // [0x53f7bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetValue
	// void SetValue(float InValue);                                                                                            // [0x53f7ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetUseVerticalDrag
	// void SetUseVerticalDrag(bool InUseVerticalDrag);                                                                         // [0x53f7a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x53f7950] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderRange
	// void SetSliderRange(FRuntimeFloatCurve& InSliderRange);                                                                  // [0x53f7810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0x53f7710] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
	// void SetSliderHandleStartAngle(float InValue);                                                                           // [0x53f7660] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
	// void SetSliderHandleEndAngle(float InValue);                                                                             // [0x53f75b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x53f74b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x53f73b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHandle
	// void SetShowSliderHandle(bool InShowSliderHandle);                                                                       // [0x53f7310] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHand
	// void SetShowSliderHand(bool InShowSliderHand);                                                                           // [0x53f7270] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x53f7170] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InValue);                                                                            // [0x53f7090] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCustomDefaultValue
	// void SetCustomDefaultValue(float InValue);                                                                               // [0x53f6f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0x53f6e90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetAngularOffset
	// void SetAngularOffset(float InValue);                                                                                    // [0x53f6df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.GetValue
	// float GetValue();                                                                                                        // [0x53f6d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
	// float GetNormalizedSliderHandlePosition();                                                                               // [0x53f6cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetCustomDefaultValue
	// float GetCustomDefaultValue();                                                                                           // [0x53f6c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

#pragma pack(pop)


static_assert(sizeof(URadialSlider) == 0x07E0); // 2016 bytes (0x000150 - 0x0007E0)
static_assert(offsetof(URadialSlider, SliderRange) == 0x0170);
static_assert(offsetof(URadialSlider, ValueTags) == 0x01F8);
static_assert(offsetof(URadialSlider, HandStartEndRatio) == 0x0218);
static_assert(offsetof(URadialSlider, WidgetStyle) == 0x0230);
static_assert(offsetof(URadialSlider, SliderBarColor) == 0x0730);
static_assert(offsetof(URadialSlider, SliderProgressColor) == 0x0740);
static_assert(offsetof(URadialSlider, SliderHandleColor) == 0x0750);
static_assert(offsetof(URadialSlider, CenterBackgroundColor) == 0x0760);
