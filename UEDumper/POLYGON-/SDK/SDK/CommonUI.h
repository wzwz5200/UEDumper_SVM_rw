
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CommonInput
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EnhancedInput
/// dependency: GameplayTags
/// dependency: InputCore
/// dependency: MediaAssets
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/CommonUI.ECommonNumericType
/// Size: 0x01 (1 bytes)
enum class ECommonNumericType : uint8_t
{
	ECommonNumericType__Number                                                       = 0,
	ECommonNumericType__Percentage                                                   = 1,
	ECommonNumericType__Seconds                                                      = 2,
	ECommonNumericType__Distance                                                     = 3
};

/// Enum /Script/CommonUI.ERichTextInlineIconDisplayMode
/// Size: 0x01 (1 bytes)
enum class ERichTextInlineIconDisplayMode : uint8_t
{
	ERichTextInlineIconDisplayMode__IconOnly                                         = 0,
	ERichTextInlineIconDisplayMode__TextOnly                                         = 1,
	ERichTextInlineIconDisplayMode__IconAndText                                      = 2
};

/// Enum /Script/CommonUI.EInputActionState
/// Size: 0x01 (1 bytes)
enum class EInputActionState : uint8_t
{
	EInputActionState__Enabled                                                       = 0,
	EInputActionState__Disabled                                                      = 1,
	EInputActionState__Hidden                                                        = 2,
	EInputActionState__HiddenAndDisabled                                             = 3
};

/// Enum /Script/CommonUI.ECommonSwitcherTransition
/// Size: 0x01 (1 bytes)
enum class ECommonSwitcherTransition : uint8_t
{
	ECommonSwitcherTransition__FadeOnly                                              = 0,
	ECommonSwitcherTransition__Horizontal                                            = 1,
	ECommonSwitcherTransition__Vertical                                              = 2,
	ECommonSwitcherTransition__Zoom                                                  = 3
};

/// Enum /Script/CommonUI.ETransitionCurve
/// Size: 0x01 (1 bytes)
enum class ETransitionCurve : uint8_t
{
	ETransitionCurve__Linear                                                         = 0,
	ETransitionCurve__QuadIn                                                         = 1,
	ETransitionCurve__QuadOut                                                        = 2,
	ETransitionCurve__QuadInOut                                                      = 3,
	ETransitionCurve__CubicIn                                                        = 4,
	ETransitionCurve__CubicOut                                                       = 5,
	ETransitionCurve__CubicInOut                                                     = 6
};

/// Class /Script/CommonUI.CommonBoundActionButtonInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCommonBoundActionButtonInterface : public UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonStyleSheetTypeBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UCommonStyleSheetTypeBase : public UObject
{ 
public:
	bool                                               bIsEnabled;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeColor
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCommonStyleSheetTypeColor : public UCommonStyleSheetTypeBase
{ 
public:
	FLinearColor                                       Color;                                                      // 0x0030   (0x0010)  
};

/// Class /Script/CommonUI.CommonStyleSheetTypeOpacity
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UCommonStyleSheetTypeOpacity : public UCommonStyleSheetTypeBase
{ 
public:
	float                                              Opacity;                                                    // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeLineHeightPercentage
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UCommonStyleSheetTypeLineHeightPercentage : public UCommonStyleSheetTypeBase
{ 
public:
	float                                              LineHeightPercentage;                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeFontTypeface
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UCommonStyleSheetTypeFontTypeface : public UCommonStyleSheetTypeBase
{ 
public:
	FSlateFontInfo                                     Typeface;                                                   // 0x0030   (0x0058)  
};

/// Class /Script/CommonUI.CommonStyleSheetTypeFontSize
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UCommonStyleSheetTypeFontSize : public UCommonStyleSheetTypeBase
{ 
public:
	int32_t                                            Size;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeFontLetterSpacing
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UCommonStyleSheetTypeFontLetterSpacing : public UCommonStyleSheetTypeBase
{ 
public:
	int32_t                                            LetterSpacing;                                              // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeMarginLeft
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UCommonStyleSheetTypeMarginLeft : public UCommonStyleSheetTypeBase
{ 
public:
	float                                              Left;                                                       // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeMarginRight
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UCommonStyleSheetTypeMarginRight : public UCommonStyleSheetTypeBase
{ 
public:
	float                                              Right;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeMarginTop
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UCommonStyleSheetTypeMarginTop : public UCommonStyleSheetTypeBase
{ 
public:
	float                                              Top;                                                        // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheetTypeMarginBottom
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UCommonStyleSheetTypeMarginBottom : public UCommonStyleSheetTypeBase
{ 
public:
	float                                              Bottom;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/CommonUI.AnalogSlider
/// Size: 0x0720 (1824 bytes) (0x000700 - 0x000720) align 16 MaxSize: 0x0720
class UAnalogSlider : public USlider
{ 
public:
	SDK_UNDEFINED(16,1147) /* FMulticastInlineDelegate */ __um(OnAnalogCapture);                                   // 0x0700   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0710   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonActionHandlerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCommonActionHandlerInterface : public UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonActionWidget
/// Size: 0x0460 (1120 bytes) (0x000150 - 0x000460) align 16 MaxSize: 0x0460
class UCommonActionWidget : public UWidget
{ 
public:
	SDK_UNDEFINED(16,1148) /* FMulticastInlineDelegate */ __um(OnInputMethodChanged);                              // 0x0150   (0x0010)  
	FSlateBrush                                        ProgressMaterialBrush;                                      // 0x0160   (0x00D0)  
	FName                                              ProgressMaterialParam;                                      // 0x0230   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0238   (0x0008)  MISSED
	FSlateBrush                                        IconRimBrush;                                               // 0x0240   (0x00D0)  
	TArray<FDataTableRowHandle>                        InputActions;                                               // 0x0310   (0x0010)  
	class UInputAction*                                EnhancedInputAction;                                        // 0x0320   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0328   (0x0008)  MISSED
	class UMaterialInstanceDynamic*                    ProgressDynamicMaterial;                                    // 0x0330   (0x0008)  
	unsigned char                                      UnknownData02_7[0x128];                                     // 0x0338   (0x0128)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActionWidget.SetInputActions
	// void SetInputActions(TArray<FDataTableRowHandle> NewInputActions);                                                       // [0x12ee3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetInputAction
	// void SetInputAction(FDataTableRowHandle InputActionRow);                                                                 // [0x12ee0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetIconRimBrush
	// void SetIconRimBrush(FSlateBrush InIconRimBrush);                                                                        // [0x12ee020] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetEnhancedInputAction
	// void SetEnhancedInputAction(class UInputAction* InInputAction);                                                          // [0x12edd50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	// void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);                                                        // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonActionWidget.IsHeldAction
	// bool IsHeldAction();                                                                                                     // [0x12ebc90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetIcon
	// FSlateBrush GetIcon();                                                                                                   // [0x12ea050] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x12e9c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonUserWidget
/// Size: 0x02A8 (680 bytes) (0x000280 - 0x0002A8) align 8 MaxSize: 0x02A8
class UCommonUserWidget : public UUserWidget
{ 
public:
	bool                                               bDisplayInActionBar;                                        // 0x0280   (0x0001)  
	bool                                               bConsumePointerInput;                                       // 0x0281   (0x0001)  
	unsigned char                                      UnknownData00_7[0x26];                                      // 0x0282   (0x0026)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonUserWidget.SetConsumePointerInput
	// void SetConsumePointerInput(bool bInConsumePointerInput);                                                                // [0x12ed8b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidget
/// Size: 0x03E0 (992 bytes) (0x0002A8 - 0x0003E0) align 8 MaxSize: 0x03E0
class UCommonActivatableWidget : public UCommonUserWidget
{ 
public:
	bool                                               bIsBackHandler;                                             // 0x02A8   (0x0001)  
	bool                                               bIsBackActionDisplayedInActionBar;                          // 0x02A9   (0x0001)  
	bool                                               bAutoActivate;                                              // 0x02AA   (0x0001)  
	bool                                               bSupportsActivationFocus;                                   // 0x02AB   (0x0001)  
	bool                                               bIsModal;                                                   // 0x02AC   (0x0001)  
	bool                                               bAutoRestoreFocus;                                          // 0x02AD   (0x0001)  
	bool                                               bOverrideActionDomain;                                      // 0x02AE   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x02AF   (0x0001)  MISSED
	class UInputMappingContext*                        InputMapping;                                               // 0x02B0   (0x0008)  
	int32_t                                            InputMappingPriority;                                       // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02BC   (0x0004)  MISSED
	TWeakObjectPtr<class UCommonInputActionDomain*>    ActionDomainOverride;                                       // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x02C8   (0x0028)  MISSED
	SDK_UNDEFINED(16,1149) /* FMulticastInlineDelegate */ __um(BP_OnWidgetActivated);                              // 0x02F0   (0x0010)  
	SDK_UNDEFINED(16,1150) /* FMulticastInlineDelegate */ __um(BP_OnWidgetDeactivated);                            // 0x0300   (0x0010)  
	bool                                               bIsActive;                                                  // 0x0310   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0311   (0x0007)  MISSED
	SDK_UNDEFINED(16,1151) /* TArray<TWeakObjectPtr<UCommonActivatableWidget*>> */ __um(VisibilityBoundWidgets);   // 0x0318   (0x0010)  
	unsigned char                                      UnknownData04_6[0xB0];                                      // 0x0328   (0x00B0)  MISSED
	bool                                               bSetVisibilityOnActivated;                                  // 0x03D8   (0x0001)  
	ESlateVisibility                                   ActivatedVisibility;                                        // 0x03D9   (0x0001)  
	bool                                               bSetVisibilityOnDeactivated;                                // 0x03DA   (0x0001)  
	ESlateVisibility                                   DeactivatedVisibility;                                      // 0x03DB   (0x0001)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x03DC   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidget.SetBindVisibilities
	// void SetBindVisibilities(ESlateVisibility OnActivatedVisibility, ESlateVisibility OnDeactivatedVisibility, bool bInAllActive); // [0x12ed200] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.IsActivated
	// bool IsActivated();                                                                                                      // [0x12ebc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
	// class UWidget* GetDesiredFocusTarget();                                                                                  // [0x12e9b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x12e8ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
	// bool BP_OnHandleBackAction();                                                                                            // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                                 // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
	// class UWidget* BP_GetDesiredFocusTarget();                                                                               // [0x2c97800] Event|Protected|BlueprintEvent|Const 
	// Function /Script/CommonUI.CommonActivatableWidget.BindVisibilityToActivation
	// void BindVisibilityToActivation(class UCommonActivatableWidget* ActivatableWidget);                                      // [0x12e8b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidget.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x12e8250] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonAnimatedSwitcher
/// Size: 0x01F0 (496 bytes) (0x000180 - 0x0001F0) align 8 MaxSize: 0x01F0
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0180   (0x0030)  MISSED
	ECommonSwitcherTransition                          TransitionType;                                             // 0x01B0   (0x0001)  
	ETransitionCurve                                   TransitionCurveType;                                        // 0x01B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x01B2   (0x0002)  MISSED
	float                                              TransitionDuration;                                         // 0x01B4   (0x0004)  
	unsigned char                                      UnknownData02_7[0x38];                                      // 0x01B8   (0x0038)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
	// void SetDisableTransitionAnimation(bool bDisableAnimation);                                                              // [0x12edc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying
	// bool IsTransitionPlaying();                                                                                              // [0x12ebec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
	// bool IsCurrentlySwitching();                                                                                             // [0x12ebc70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.HasWidgets
	// bool HasWidgets();                                                                                                       // [0x12eba20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
	// void ActivatePreviousWidget(bool bCanWrap);                                                                              // [0x12e7fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
	// void ActivateNextWidget(bool bCanWrap);                                                                                  // [0x12e7ef0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetSwitcher
/// Size: 0x0200 (512 bytes) (0x0001F0 - 0x000200) align 8 MaxSize: 0x0200
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x01F0   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonBorderStyle
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align 16 MaxSize: 0x0100
class UCommonBorderStyle : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FSlateBrush                                        Background;                                                 // 0x0030   (0x00D0)  


	/// Functions
	// Function /Script/CommonUI.CommonBorderStyle.GetBackgroundBrush
	// void GetBackgroundBrush(FSlateBrush& Brush);                                                                             // [0x12e95a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonBorder
/// Size: 0x0330 (816 bytes) (0x000308 - 0x000330) align 16 MaxSize: 0x0328
class UCommonBorder : public UBorder
{ 
public:
	class UClass*                                      Style;                                                      // 0x0308   (0x0008)  
	bool                                               bReducePaddingBySafezone;                                   // 0x0310   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0311   (0x0003)  MISSED
	FMargin                                            MinimumPadding;                                             // 0x0314   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0324   (0x0004)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBorder.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x12efb20] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/CommonUI.CommonButtonStyleOptionalSlateSound
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FCommonButtonStyleOptionalSlateSound
{ 
	bool                                               bHasSound;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FSlateSound                                        Sound;                                                      // 0x0008   (0x0018)  
};

/// Class /Script/CommonUI.CommonButtonStyle
/// Size: 0x07B0 (1968 bytes) (0x000028 - 0x0007B0) align 16 MaxSize: 0x07B0
class UCommonButtonStyle : public UObject
{ 
public:
	bool                                               bSingleMaterial;                                            // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FSlateBrush                                        SingleMaterialBrush;                                        // 0x0030   (0x00D0)  
	FSlateBrush                                        NormalBase;                                                 // 0x0100   (0x00D0)  
	FSlateBrush                                        NormalHovered;                                              // 0x01D0   (0x00D0)  
	FSlateBrush                                        NormalPressed;                                              // 0x02A0   (0x00D0)  
	FSlateBrush                                        SelectedBase;                                               // 0x0370   (0x00D0)  
	FSlateBrush                                        SelectedHovered;                                            // 0x0440   (0x00D0)  
	FSlateBrush                                        SelectedPressed;                                            // 0x0510   (0x00D0)  
	FSlateBrush                                        Disabled;                                                   // 0x05E0   (0x00D0)  
	FMargin                                            ButtonPadding;                                              // 0x06B0   (0x0010)  
	FMargin                                            CustomPadding;                                              // 0x06C0   (0x0010)  
	int32_t                                            MinWidth;                                                   // 0x06D0   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x06D4   (0x0004)  
	class UClass*                                      NormalTextStyle;                                            // 0x06D8   (0x0008)  
	class UClass*                                      NormalHoveredTextStyle;                                     // 0x06E0   (0x0008)  
	class UClass*                                      SelectedTextStyle;                                          // 0x06E8   (0x0008)  
	class UClass*                                      SelectedHoveredTextStyle;                                   // 0x06F0   (0x0008)  
	class UClass*                                      DisabledTextStyle;                                          // 0x06F8   (0x0008)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0700   (0x0018)  
	FCommonButtonStyleOptionalSlateSound               SelectedPressedSlateSound;                                  // 0x0718   (0x0020)  
	FCommonButtonStyleOptionalSlateSound               LockedPressedSlateSound;                                    // 0x0738   (0x0020)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x0758   (0x0018)  
	FCommonButtonStyleOptionalSlateSound               SelectedHoveredSlateSound;                                  // 0x0770   (0x0020)  
	FCommonButtonStyleOptionalSlateSound               LockedHoveredSlateSound;                                    // 0x0790   (0x0020)  


	/// Functions
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedTextStyle
	// class UCommonTextStyle* GetSelectedTextStyle();                                                                          // [0x12ead30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	// void GetSelectedPressedBrush(FSlateBrush& Brush);                                                                        // [0x12eab90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	// class UCommonTextStyle* GetSelectedHoveredTextStyle();                                                                   // [0x12eab40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	// void GetSelectedHoveredBrush(FSlateBrush& Brush);                                                                        // [0x12eaa80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	// void GetSelectedBaseBrush(FSlateBrush& Brush);                                                                           // [0x12ea940] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalTextStyle
	// class UCommonTextStyle* GetNormalTextStyle();                                                                            // [0x12ea850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalPressedBrush
	// void GetNormalPressedBrush(FSlateBrush& Brush);                                                                          // [0x12ea790] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	// class UCommonTextStyle* GetNormalHoveredTextStyle();                                                                     // [0x12ea760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	// void GetNormalHoveredBrush(FSlateBrush& Brush);                                                                          // [0x12ea6a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalBaseBrush
	// void GetNormalBaseBrush(FSlateBrush& Brush);                                                                             // [0x12ea5e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetMaterialBrush
	// void GetMaterialBrush(FSlateBrush& Brush);                                                                               // [0x12e95a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledTextStyle
	// class UCommonTextStyle* GetDisabledTextStyle();                                                                          // [0x12e9c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledBrush
	// void GetDisabledBrush(FSlateBrush& Brush);                                                                               // [0x12e9b50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetCustomPadding
	// void GetCustomPadding(FMargin& OutCustomPadding);                                                                        // [0x12e9a60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetButtonPadding
	// void GetButtonPadding(FMargin& OutButtonPadding);                                                                        // [0x12e9740] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonButtonInternalBase
/// Size: 0x0660 (1632 bytes) (0x0005E8 - 0x000660) align 16 MaxSize: 0x0660
class UCommonButtonInternalBase : public UButton
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x05E8   (0x0010)  MISSED
	SDK_UNDEFINED(16,1152) /* FMulticastInlineDelegate */ __um(OnDoubleClicked);                                   // 0x05F8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0608   (0x0020)  MISSED
	int32_t                                            MinWidth;                                                   // 0x0628   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x062C   (0x0004)  
	bool                                               bButtonEnabled;                                             // 0x0630   (0x0001)  
	bool                                               bInteractionEnabled;                                        // 0x0631   (0x0001)  
	unsigned char                                      UnknownData02_7[0x2E];                                      // 0x0632   (0x002E)  MISSED
};

/// Class /Script/CommonUI.CommonButtonBase
/// Size: 0x1500 (5376 bytes) (0x0002A8 - 0x001500) align 16 MaxSize: 0x1500
class UCommonButtonBase : public UCommonUserWidget
{ 
public:
	int32_t                                            MinWidth;                                                   // 0x02A8   (0x0004)  
	int32_t                                            MinHeight;                                                  // 0x02AC   (0x0004)  
	class UClass*                                      Style;                                                      // 0x02B0   (0x0008)  
	bool                                               bHideInputAction;                                           // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x02B9   (0x0007)  MISSED
	FSlateSound                                        PressedSlateSoundOverride;                                  // 0x02C0   (0x0018)  
	FSlateSound                                        HoveredSlateSoundOverride;                                  // 0x02D8   (0x0018)  
	FSlateSound                                        SelectedPressedSlateSoundOverride;                          // 0x02F0   (0x0018)  
	FSlateSound                                        SelectedHoveredSlateSoundOverride;                          // 0x0308   (0x0018)  
	FSlateSound                                        LockedPressedSlateSoundOverride;                            // 0x0320   (0x0018)  
	FSlateSound                                        LockedHoveredSlateSoundOverride;                            // 0x0338   (0x0018)  
	bool                                               bApplyAlphaOnDisable : 1;                                   // 0x0350:0 (0x0001)  
	bool                                               Blocked : 1;                                                // 0x0350:1 (0x0001)  
	bool                                               bSelectable : 1;                                            // 0x0350:2 (0x0001)  
	bool                                               bShouldSelectUponReceivingFocus : 1;                        // 0x0350:3 (0x0001)  
	bool                                               bInteractableWhenSelected : 1;                              // 0x0350:4 (0x0001)  
	bool                                               bToggleable : 1;                                            // 0x0350:5 (0x0001)  
	bool                                               bTriggerClickedAfterSelection : 1;                          // 0x0350:6 (0x0001)  
	bool                                               bDisplayInputActionWhenNotInteractable : 1;                 // 0x0350:7 (0x0001)  
	bool                                               bHideInputActionWithKeyboard : 1;                           // 0x0351:0 (0x0001)  
	bool                                               bShouldUseFallbackDefaultInputAction : 1;                   // 0x0351:1 (0x0001)  
	TEnumAsByte<EButtonClickMethod>                    ClickMethod;                                                // 0x0352   (0x0001)  
	TEnumAsByte<EButtonTouchMethod>                    TouchMethod;                                                // 0x0353   (0x0001)  
	TEnumAsByte<EButtonPressMethod>                    PressMethod;                                                // 0x0354   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0355   (0x0003)  MISSED
	int32_t                                            InputPriority;                                              // 0x0358   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x035C   (0x0004)  MISSED
	FDataTableRowHandle                                TriggeringInputAction;                                      // 0x0360   (0x0010)  
	class UInputAction*                                TriggeringEnhancedInputAction;                              // 0x0370   (0x0008)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0378   (0x0010)  MISSED
	SDK_UNDEFINED(16,1153) /* FMulticastInlineDelegate */ __um(OnSelectedChangedBase);                             // 0x0388   (0x0010)  
	SDK_UNDEFINED(16,1154) /* FMulticastInlineDelegate */ __um(OnButtonBaseClicked);                               // 0x0398   (0x0010)  
	SDK_UNDEFINED(16,1155) /* FMulticastInlineDelegate */ __um(OnButtonBaseDoubleClicked);                         // 0x03A8   (0x0010)  
	SDK_UNDEFINED(16,1156) /* FMulticastInlineDelegate */ __um(OnButtonBaseHovered);                               // 0x03B8   (0x0010)  
	SDK_UNDEFINED(16,1157) /* FMulticastInlineDelegate */ __um(OnButtonBaseUnhovered);                             // 0x03C8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x03D8   (0x0004)  MISSED
	bool                                               bIsPersistentBinding;                                       // 0x03DC   (0x0001)  
	ECommonInputMode                                   InputModeOverride;                                          // 0x03DD   (0x0001)  
	unsigned char                                      UnknownData05_6[0x32];                                      // 0x03DE   (0x0032)  MISSED
	class UMaterialInstanceDynamic*                    SingleMaterialStyleMID;                                     // 0x0410   (0x0008)  
	unsigned char                                      UnknownData06_6[0x8];                                       // 0x0418   (0x0008)  MISSED
	FButtonStyle                                       NormalStyle;                                                // 0x0420   (0x03F0)  
	FButtonStyle                                       SelectedStyle;                                              // 0x0810   (0x03F0)  
	FButtonStyle                                       DisabledStyle;                                              // 0x0C00   (0x03F0)  
	FButtonStyle                                       LockedStyle;                                                // 0x0FF0   (0x03F0)  
	bool                                               bStopDoubleClickPropagation : 1;                            // 0x13E0:0 (0x0001)  
	unsigned char                                      UnknownData07_5[0x117];                                     // 0x13E1   (0x0117)  MISSED
	class UCommonActionWidget*                         InputActionWidget;                                          // 0x14F8   (0x0008)  


	/// Functions
	// Function /Script/CommonUI.CommonButtonBase.StopDoubleClickPropagation
	// void StopDoubleClickPropagation();                                                                                       // [0x12f0700] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringInputAction
	// void SetTriggeringInputAction(FDataTableRowHandle& InputActionRow);                                                      // [0x12f0490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeringEnhancedInputAction
	// void SetTriggeringEnhancedInputAction(class UInputAction* InInputAction);                                                // [0x12f03a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTriggeredInputAction
	// void SetTriggeredInputAction(FDataTableRowHandle& InputActionRow);                                                       // [0x12f02a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x12f0160] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x12efbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
	// void SetShouldUseFallbackDefaultInputAction(bool bInShouldUseFallbackDefaultInputAction);                                // [0x12efa80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
	// void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);                                          // [0x12ef9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride
	// void SetSelectedPressedSoundOverride(class USoundBase* Sound);                                                           // [0x12ef8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedInternal
	// void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);                                           // [0x12ef6f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride
	// void SetSelectedHoveredSoundOverride(class USoundBase* Sound);                                                           // [0x12ef650] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressMethod
	// void SetPressMethod(TEnumAsByte<EButtonPressMethod> InPressMethod);                                                      // [0x12ef3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetPressedSoundOverride
	// void SetPressedSoundOverride(class USoundBase* Sound);                                                                   // [0x12ef470] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetMinDimensions
	// void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight);                                                          // [0x12ef120] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetLockedPressedSoundOverride
	// void SetLockedPressedSoundOverride(class USoundBase* Sound);                                                             // [0x12eef20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride
	// void SetLockedHoveredSoundOverride(class USoundBase* Sound);                                                             // [0x12eee80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsToggleable
	// void SetIsToggleable(bool bInIsToggleable);                                                                              // [0x12ee9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelected
	// void SetIsSelected(bool InSelected, bool bGiveClickFeedback);                                                            // [0x12ee910] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsSelectable
	// void SetIsSelectable(bool bInIsSelectable);                                                                              // [0x12ee850] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsLocked
	// void SetIsLocked(bool bInIsLocked);                                                                                      // [0x12ee780] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractionEnabled
	// void SetIsInteractionEnabled(bool bInIsInteractionEnabled);                                                              // [0x12ee650] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
	// void SetIsInteractableWhenSelected(bool bInInteractableWhenSelected);                                                    // [0x12ee590] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetIsFocusable
	// void SetIsFocusable(bool bInIsFocusable);                                                                                // [0x12ee500] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetInputActionProgressMaterial
	// void SetInputActionProgressMaterial(FSlateBrush& InProgressMaterialBrush, FName& InProgressMaterialParam);               // [0x12ee1e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHoveredSoundOverride
	// void SetHoveredSoundOverride(class USoundBase* Sound);                                                                   // [0x12edf80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetHideInputAction
	// void SetHideInputAction(bool bInHideInputAction);                                                                        // [0x12ede70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x12ed800] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringInputActionChanged
	// void OnTriggeringInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                            // [0x2c97800] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeringEnhancedInputActionChanged
	// void OnTriggeringEnhancedInputActionChanged(class UInputAction* InInputAction);                                          // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
	// void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                             // [0x2c97800] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0x12ec2a0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
	// void OnCurrentTextStyleChanged();                                                                                        // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.OnActionComplete
	// void OnActionComplete();                                                                                                 // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionProgress
	// void NativeOnActionProgress(float HeldPercent);                                                                          // [0x12ebf30] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.NativeOnActionComplete
	// void NativeOnActionComplete();                                                                                           // [0x12ebf10] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.IsPressed
	// bool IsPressed();                                                                                                        // [0x12ebe30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.IsInteractionEnabled
	// bool IsInteractionEnabled();                                                                                             // [0x12ebcc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.HandleTriggeringActionCommited
	// void HandleTriggeringActionCommited(bool& bPassThrough);                                                                 // [0x12eb950] Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusReceived
	// void HandleFocusReceived();                                                                                              // [0xa58cb0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleFocusLost
	// void HandleFocusLost();                                                                                                  // [0x12eb4c0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                             // [0x12eb450] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                              // [0x12eb3e0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0x12eb2c0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButtonBase.GetStyle
	// class UCommonButtonStyle* GetStyle();                                                                                    // [0x12eaf90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
	// class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();                                                             // [0x12eaeb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
	// bool GetShouldSelectUponReceivingFocus();                                                                                // [0x12eae80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetSelected
	// bool GetSelected();                                                                                                      // [0x12ea910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetLocked
	// bool GetLocked();                                                                                                        // [0x12ea4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetIsFocusable
	// bool GetIsFocusable();                                                                                                   // [0x12ea450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetInputAction
	// bool GetInputAction(FDataTableRowHandle& InputActionRow);                                                                // [0x12ea0b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetEnhancedInputAction
	// class UInputAction* GetEnhancedInputAction();                                                                            // [0x12e9df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyleClass
	// class UClass* GetCurrentTextStyleClass();                                                                                // [0x12e9a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentTextStyle
	// class UCommonTextStyle* GetCurrentTextStyle();                                                                           // [0x12e99f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentCustomPadding
	// void GetCurrentCustomPadding(FMargin& OutCustomPadding);                                                                 // [0x12e9940] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.GetCurrentButtonPadding
	// void GetCurrentButtonPadding(FMargin& OutButtonPadding);                                                                 // [0x12e9890] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonBase.DisableButtonWithReason
	// void DisableButtonWithReason(FText& DisabledReason);                                                                     // [0x12e8f90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.ClearSelection
	// void ClearSelection();                                                                                                   // [0x12e8cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnReleased
	// void BP_OnReleased();                                                                                                    // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnPressed
	// void BP_OnPressed();                                                                                                     // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockedChanged
	// void BP_OnLockedChanged(bool bIsLocked);                                                                                 // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockDoubleClicked
	// void BP_OnLockDoubleClicked();                                                                                           // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnLockClicked
	// void BP_OnLockClicked();                                                                                                 // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnInputMethodChanged
	// void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusReceived
	// void BP_OnFocusReceived();                                                                                               // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnFocusLost
	// void BP_OnFocusLost();                                                                                                   // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnEnabled
	// void BP_OnEnabled();                                                                                                     // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDoubleClicked
	// void BP_OnDoubleClicked();                                                                                               // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDisabled
	// void BP_OnDisabled();                                                                                                    // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnDeselected
	// void BP_OnDeselected();                                                                                                  // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButtonBase.BP_OnClicked
	// void BP_OnClicked();                                                                                                     // [0x2c97800] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonCustomNavigation
/// Size: 0x0320 (800 bytes) (0x000308 - 0x000320) align 16 MaxSize: 0x0320
class UCommonCustomNavigation : public UBorder
{ 
public:
	SDK_UNDEFINED(16,1158) /* FDelegateProperty */     __um(OnNavigationEvent);                                    // 0x0308   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0318   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonTextBlock
/// Size: 0x0370 (880 bytes) (0x000338 - 0x000370) align 16 MaxSize: 0x0370
class UCommonTextBlock : public UTextBlock
{ 
public:
	float                                              MobileFontSizeMultiplier;                                   // 0x0338   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x033C   (0x0004)  MISSED
	class UClass*                                      Style;                                                      // 0x0340   (0x0008)  
	class UClass*                                      ScrollStyle;                                                // 0x0348   (0x0008)  
	class UCommonStyleSheet*                           StyleSheet;                                                 // 0x0350   (0x0008)  
	bool                                               bIsScrollingEnabled;                                        // 0x0358   (0x0001)  
	bool                                               bDisplayAllCaps;                                            // 0x0359   (0x0001)  
	bool                                               bAutoCollapseWithEmptyText;                                 // 0x035A   (0x0001)  
	unsigned char                                      UnknownData01_7[0x15];                                      // 0x035B   (0x0015)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTextBlock.SetWrapTextWidth
	// void SetWrapTextWidth(int32_t InWrapTextAt);                                                                             // [0x12f0620] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetTextCase
	// void SetTextCase(bool bUseAllCaps);                                                                                      // [0x12f0020] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetStyle
	// void SetStyle(class UClass* InStyle);                                                                                    // [0x12efd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetScrollingEnabled
	// void SetScrollingEnabled(bool bInIsScrollingEnabled);                                                                    // [0x12ef5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetMobileFontSizeMultiplier
	// void SetMobileFontSizeMultiplier(float InMobileFontSizeMultiplier);                                                      // [0x12ef200] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetMargin
	// void SetMargin(FMargin& InMargin);                                                                                       // [0x12eefc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetLineHeightPercentage
	// void SetLineHeightPercentage(float InLineHeightPercentage);                                                              // [0x12eebb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.ResetScrollState
	// void ResetScrollState();                                                                                                 // [0x12ecb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.GetMobileFontSizeMultiplier
	// float GetMobileFontSizeMultiplier();                                                                                     // [0x12ea5c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextBlock.GetMargin
	// FMargin GetMargin();                                                                                                     // [0x12ea4f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonDateTimeTextBlock
/// Size: 0x03D0 (976 bytes) (0x000370 - 0x0003D0) align 16 MaxSize: 0x03D0
class UCommonDateTimeTextBlock : public UCommonTextBlock
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0370   (0x0060)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetTimespanValue
	// void SetTimespanValue(FTimespan InTimespan);                                                                             // [0x12f00c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
	// void SetDateTimeValue(FDateTime InDateTime, bool bShowAsCountdown, float InRefreshDelay);                                // [0x12edb10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
	// void SetCountDownCompletionText(FText InCompletionText);                                                                 // [0x12ed940] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.GetDateTime
	// FDateTime GetDateTime();                                                                                                 // [0x12e9b00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonGameViewportClient
/// Size: 0x03F0 (1008 bytes) (0x0003B0 - 0x0003F0) align 8 MaxSize: 0x03F0
class UCommonGameViewportClient : public UGameViewportClient
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x03B0   (0x0040)  MISSED
};

/// Class /Script/CommonUI.CommonHardwareVisibilityBorder
/// Size: 0x0380 (896 bytes) (0x000328 - 0x000380) align 16 MaxSize: 0x0380
class UCommonHardwareVisibilityBorder : public UCommonBorder
{ 
public:
	FGameplayTagQuery                                  VisibilityQuery;                                            // 0x0328   (0x0048)  
	ESlateVisibility                                   VisibleType;                                                // 0x0370   (0x0001)  
	ESlateVisibility                                   HiddenType;                                                 // 0x0371   (0x0001)  
	unsigned char                                      UnknownData00_7[0xE];                                       // 0x0372   (0x000E)  MISSED
};

/// Class /Script/CommonUI.CommonHierarchicalScrollBox
/// Size: 0x0CC0 (3264 bytes) (0x000CC0 - 0x000CC0) align 16 MaxSize: 0x0CC0
class UCommonHierarchicalScrollBox : public UScrollBox
{ 
public:
};

/// Class /Script/CommonUI.CommonLazyImage
/// Size: 0x03C0 (960 bytes) (0x0002A8 - 0x0003C0) align 16 MaxSize: 0x03C0
class UCommonLazyImage : public UImage
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02A8   (0x0008)  MISSED
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x02B0   (0x00D0)  
	FName                                              MaterialTextureParamName;                                   // 0x0380   (0x0008)  
	SDK_UNDEFINED(16,1159) /* FMulticastInlineDelegate */ __um(BP_OnLoadingStateChanged);                          // 0x0388   (0x0010)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0398   (0x0028)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLazyImage.SetMaterialTextureParamName
	// void SetMaterialTextureParamName(FName TextureParamName);                                                                // [0x12ef060] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	// void SetBrushFromLazyTexture(TWeakObjectPtr<UTexture2D*>& LazyTexture, bool bMatchSize);                                 // [0x12ed680] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	// void SetBrushFromLazyMaterial(TWeakObjectPtr<UMaterialInterface*>& LazyMaterial);                                        // [0x12ed540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	// void SetBrushFromLazyDisplayAsset(TWeakObjectPtr<UObject*>& LazyObject, bool bMatchTextureSize);                         // [0x12ed310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.IsLoading
	// bool IsLoading();                                                                                                        // [0x12ebd70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonLazyWidget
/// Size: 0x02B0 (688 bytes) (0x000150 - 0x0002B0) align 16 MaxSize: 0x02B0
class UCommonLazyWidget : public UWidget
{ 
public:
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0150   (0x00D0)  
	class UUserWidget*                                 Content;                                                    // 0x0220   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0228   (0x0030)  MISSED
	SDK_UNDEFINED(16,1160) /* FMulticastInlineDelegate */ __um(BP_OnLoadingStateChanged);                          // 0x0258   (0x0010)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x0268   (0x0048)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLazyWidget.SetLazyContent
	// void SetLazyContent(TSoftObjectPtr<UClass*> SoftWidget);                                                                 // [0x12eea70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyWidget.IsLoading
	// bool IsLoading();                                                                                                        // [0x12ebdb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLazyWidget.GetContent
	// class UUserWidget* GetContent();                                                                                         // [0x12e9870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonListView
/// Size: 0x0C30 (3120 bytes) (0x000C30 - 0x000C30) align 16 MaxSize: 0x0C30
class UCommonListView : public UListView
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonListView.SetEntrySpacing
	// void SetEntrySpacing(float InEntrySpacing);                                                                              // [0x12eddf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.LoadGuardSlot
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class ULoadGuardSlot : public UPanelSlot
{ 
public:
	FMargin                                            Padding;                                                    // 0x0038   (0x0010)  
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                        // 0x0048   (0x0001)  
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                          // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_7[0x16];                                      // 0x004A   (0x0016)  MISSED


	/// Functions
	// Function /Script/CommonUI.LoadGuardSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x12f05a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x12ef340] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.LoadGuardSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x12edf00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonLoadGuard
/// Size: 0x02D0 (720 bytes) (0x000168 - 0x0002D0) align 16 MaxSize: 0x02D0
class UCommonLoadGuard : public UContentWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0168   (0x0008)  MISSED
	FSlateBrush                                        LoadingBackgroundBrush;                                     // 0x0170   (0x00D0)  
	TEnumAsByte<EHorizontalAlignment>                  ThrobberAlignment;                                          // 0x0240   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0241   (0x0003)  MISSED
	FMargin                                            ThrobberPadding;                                            // 0x0244   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0254   (0x0004)  MISSED
	FText                                              LoadingText;                                                // 0x0258   (0x0018)  
	class UClass*                                      TextStyle;                                                  // 0x0270   (0x0008)  
	SDK_UNDEFINED(16,1161) /* FMulticastInlineDelegate */ __um(BP_OnLoadingStateChanged);                          // 0x0278   (0x0010)  
	FSoftObjectPath                                    SpinnerMaterialPath;                                        // 0x0288   (0x0020)  
	unsigned char                                      UnknownData03_7[0x28];                                      // 0x02A8   (0x0028)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonLoadGuard.SetLoadingText
	// void SetLoadingText(FText& InLoadingText);                                                                               // [0x12eed50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.SetIsLoading
	// void SetIsLoading(bool bInIsLoading);                                                                                    // [0x12ee6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	// void OnAssetLoaded__DelegateSignature(class UObject* Object);                                                            // [0x2c97800] Public|Delegate      
	// Function /Script/CommonUI.CommonLoadGuard.IsLoading
	// bool IsLoading();                                                                                                        // [0x12ebdf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
	// void BP_GuardAndLoadAsset(TWeakObjectPtr<UObject*>& InLazyAsset, FDelegateProperty& OnAssetLoaded);                      // [0x12e8820] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CommonUI.CommonNumberFormattingOptions
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FCommonNumberFormattingOptions
{ 
	TEnumAsByte<ERoundingMode>                         RoundingMode;                                               // 0x0000   (0x0001)  
	bool                                               UseGrouping;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinimumIntegralDigits;                                      // 0x0004   (0x0004)  
	int32_t                                            MaximumIntegralDigits;                                      // 0x0008   (0x0004)  
	int32_t                                            MinimumFractionalDigits;                                    // 0x000C   (0x0004)  
	int32_t                                            MaximumFractionalDigits;                                    // 0x0010   (0x0004)  
};

/// Class /Script/CommonUI.CommonNumericTextBlock
/// Size: 0x0410 (1040 bytes) (0x000370 - 0x000410) align 16 MaxSize: 0x0410
class UCommonNumericTextBlock : public UCommonTextBlock
{ 
public:
	SDK_UNDEFINED(16,1162) /* FMulticastInlineDelegate */ __um(OnInterpolationStartedEvent);                       // 0x0370   (0x0010)  
	SDK_UNDEFINED(16,1163) /* FMulticastInlineDelegate */ __um(OnInterpolationUpdatedEvent);                       // 0x0380   (0x0010)  
	SDK_UNDEFINED(16,1164) /* FMulticastInlineDelegate */ __um(OnOutroEvent);                                      // 0x0390   (0x0010)  
	SDK_UNDEFINED(16,1165) /* FMulticastInlineDelegate */ __um(OnInterpolationEndedEvent);                         // 0x03A0   (0x0010)  
	float                                              CurrentNumericValue;                                        // 0x03B0   (0x0004)  
	ECommonNumericType                                 NumericType;                                                // 0x03B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x03B5   (0x0003)  MISSED
	FCommonNumberFormattingOptions                     FormattingSpecification;                                    // 0x03B8   (0x0014)  
	float                                              EaseOutInterpolationExponent;                               // 0x03CC   (0x0004)  
	float                                              InterpolationUpdateInterval;                                // 0x03D0   (0x0004)  
	float                                              PostInterpolationShrinkDuration;                            // 0x03D4   (0x0004)  
	bool                                               PerformSizeInterpolation;                                   // 0x03D8   (0x0001)  
	bool                                               IsPercentage;                                               // 0x03D9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x36];                                      // 0x03DA   (0x0036)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonNumericTextBlock.SetNumericType
	// void SetNumericType(ECommonNumericType InNumericType);                                                                   // [0x12ef2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.SetCurrentValue
	// void SetCurrentValue(float NewValue);                                                                                    // [0x12eda70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	// void OnOutro__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);                                        // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
	// void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, float LastValue, float NewValue); // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
	// void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock);                         // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	// void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);        // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	// bool IsInterpolatingNumericValue();                                                                                      // [0x12ebd40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonNumericTextBlock.InterpolateToValue
	// void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // [0x12ebaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.GetTargetValue
	// float GetTargetValue();                                                                                                  // [0x12eb1a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonPoolableWidgetInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCommonPoolableWidgetInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
	// void OnReleaseToPool();                                                                                                  // [0x12ec320] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
	// void OnAcquireFromPool();                                                                                                // [0x12ec040] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonRichTextBlock
/// Size: 0x08B0 (2224 bytes) (0x000870 - 0x0008B0) align 16 MaxSize: 0x08B0
class UCommonRichTextBlock : public URichTextBlock
{ 
public:
	ERichTextInlineIconDisplayMode                     InlineIconDisplayMode;                                      // 0x0870   (0x0001)  
	bool                                               bTintInlineIcon;                                            // 0x0871   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0872   (0x0006)  MISSED
	class UClass*                                      DefaultTextStyleOverrideClass;                              // 0x0878   (0x0008)  
	float                                              MobileTextBlockScale;                                       // 0x0880   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0884   (0x0004)  MISSED
	class UClass*                                      ScrollStyle;                                                // 0x0888   (0x0008)  
	bool                                               bIsScrollingEnabled;                                        // 0x0890   (0x0001)  
	bool                                               bDisplayAllCaps;                                            // 0x0891   (0x0001)  
	bool                                               bAutoCollapseWithEmptyText;                                 // 0x0892   (0x0001)  
	unsigned char                                      UnknownData02_7[0x1D];                                      // 0x0893   (0x001D)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonRichTextBlock.SetScrollingEnabled
	// void SetScrollingEnabled(bool bInIsScrollingEnabled);                                                                    // [0x12ef510] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonRotator
/// Size: 0x1560 (5472 bytes) (0x001500 - 0x001560) align 16 MaxSize: 0x1560
class UCommonRotator : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x1500   (0x0010)  MISSED
	SDK_UNDEFINED(16,1166) /* FMulticastInlineDelegate */ __um(OnRotated);                                         // 0x1510   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x1520   (0x0018)  MISSED
	class UCommonTextBlock*                            MyText;                                                     // 0x1538   (0x0008)  
	unsigned char                                      UnknownData02_7[0x20];                                      // 0x1540   (0x0020)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonRotator.ShiftTextRight
	// void ShiftTextRight();                                                                                                   // [0x12f06e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.ShiftTextLeft
	// void ShiftTextLeft();                                                                                                    // [0x12f06c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.SetSelectedItem
	// void SetSelectedItem(int32_t InValue);                                                                                   // [0x12ef820] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.PopulateTextLabels
	// void PopulateTextLabels(TArray<FText> Labels);                                                                           // [0x12ec410] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.GetSelectedText
	// FText GetSelectedText();                                                                                                 // [0x12eac90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                              // [0x12eab70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionsPopulated
	// void BP_OnOptionsPopulated(int32_t Count);                                                                               // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonRotator.BP_OnOptionSelected
	// void BP_OnOptionSelected(int32_t Index);                                                                                 // [0x2c97800] Event|Protected|BlueprintEvent 
};

/// Struct /Script/CommonUI.CommonRegisteredTabInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FCommonRegisteredTabInfo
{ 
	int32_t                                            TabIndex;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UCommonButtonBase*                           TabButton;                                                  // 0x0008   (0x0008)  
	class UWidget*                                     ContentInstance;                                            // 0x0010   (0x0008)  
};

/// Class /Script/CommonUI.CommonTabListWidgetBase
/// Size: 0x03A0 (928 bytes) (0x0002A8 - 0x0003A0) align 8 MaxSize: 0x03A0
class UCommonTabListWidgetBase : public UCommonUserWidget
{ 
public:
	SDK_UNDEFINED(16,1167) /* FMulticastInlineDelegate */ __um(OnTabSelected);                                     // 0x02A8   (0x0010)  
	SDK_UNDEFINED(16,1168) /* FMulticastInlineDelegate */ __um(OnTabButtonCreation);                               // 0x02B8   (0x0010)  
	SDK_UNDEFINED(16,1169) /* FMulticastInlineDelegate */ __um(OnTabButtonRemoval);                                // 0x02C8   (0x0010)  
	SDK_UNDEFINED(16,1170) /* FMulticastInlineDelegate */ __um(OnTabListRebuilt);                                  // 0x02D8   (0x0010)  
	FDataTableRowHandle                                NextTabInputActionData;                                     // 0x02E8   (0x0010)  
	FDataTableRowHandle                                PreviousTabInputActionData;                                 // 0x02F8   (0x0010)  
	class UInputAction*                                NextTabEnhancedInputAction;                                 // 0x0308   (0x0008)  
	class UInputAction*                                PreviousTabEnhancedInputAction;                             // 0x0310   (0x0008)  
	bool                                               bAutoListenForInput;                                        // 0x0318   (0x0001)  
	bool                                               bDeferRebuildingTabList;                                    // 0x0319   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x031A   (0x0002)  MISSED
	TWeakObjectPtr<class UCommonAnimatedSwitcher*>     LinkedSwitcher;                                             // 0x031C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0324   (0x0004)  MISSED
	class UCommonButtonGroupBase*                      TabButtonGroup;                                             // 0x0328   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0330   (0x0008)  MISSED
	TMap<FName, FCommonRegisteredTabInfo>              RegisteredTabsByID;                                         // 0x0338   (0x0050)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x0388   (0x0018)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabVisibility
	// void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);                                                  // [0x12eff50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
	// void SetTabInteractionEnabled(FName TabNameID, bool bEnable);                                                            // [0x12efe80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetTabEnabled
	// void SetTabEnabled(FName TabNameID, bool bEnable);                                                                       // [0x12efdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetListeningForInput
	// void SetListeningForInput(bool bShouldListen);                                                                           // [0xa58b90] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
	// void SetLinkedSwitcher(class UCommonAnimatedSwitcher* CommonSwitcher);                                                   // [0x12eecc0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.SelectTabByID
	// bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);                                                        // [0x12ecdc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveTab
	// bool RemoveTab(FName TabNameID);                                                                                         // [0x12ec830] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RemoveAllTabs
	// void RemoveAllTabs();                                                                                                    // [0x12ec810] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.RegisterTab
	// bool RegisterTab(FName TabNameID, class UClass* ButtonWidgetType, class UWidget* ContentWidget, int32_t TabIndex);       // [0x12ec6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
	// void OnTabSelected__DelegateSignature(FName TabId);                                                                      // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature
	// void OnTabListRebuilt__DelegateSignature();                                                                              // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
	// void OnTabButtonRemoval__DelegateSignature(FName TabId, class UCommonButtonBase* TabButton);                             // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
	// void OnTabButtonCreation__DelegateSignature(FName TabId, class UCommonButtonBase* TabButton);                            // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabRemoval
	// void HandleTabRemoval(FName TabNameID, class UCommonButtonBase* TabButton);                                              // [0x12eb880] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabCreation
	// void HandleTabCreation(FName TabNameID, class UCommonButtonBase* TabButton);                                             // [0x12eb7b0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
	// void HandleTabButtonSelected(class UCommonButtonBase* SelectedTabButton, int32_t ButtonIndex);                           // [0x12eb6e0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
	// void HandlePreviousTabInputAction(bool& bPassThrough);                                                                   // [0x12eb650] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
	// void HandlePreLinkedSwitcherChanged_BP();                                                                                // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
	// void HandlePostLinkedSwitcherChanged_BP();                                                                               // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
	// void HandleNextTabInputAction(bool& bPassThrough);                                                                       // [0x12eb4e0] Final|Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
	// FName GetTabIdAtIndex(int32_t Index);                                                                                    // [0x12eb110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabCount
	// int32_t GetTabCount();                                                                                                   // [0x12eb0e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
	// class UCommonButtonBase* GetTabButtonBaseByID(FName TabNameID);                                                          // [0x12eafc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetSelectedTabId
	// FName GetSelectedTabId();                                                                                                // [0x12eac50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
	// class UCommonAnimatedSwitcher* GetLinkedSwitcher();                                                                      // [0x12ea480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.GetActiveTab
	// FName GetActiveTab();                                                                                                    // [0x12e94b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidgetBase.DisableTabWithReason
	// void DisableTabWithReason(FName TabNameID, FText& Reason);                                                               // [0x12e9080] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonTextStyle
/// Size: 0x01B0 (432 bytes) (0x000028 - 0x0001B0) align 16 MaxSize: 0x01B0
class UCommonTextStyle : public UObject
{ 
public:
	FSlateFontInfo                                     Font;                                                       // 0x0028   (0x0058)  
	FLinearColor                                       Color;                                                      // 0x0080   (0x0010)  
	bool                                               bUsesDropShadow;                                            // 0x0090   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0091   (0x0007)  MISSED
	FVector2D                                          ShadowOffset;                                               // 0x0098   (0x0010)  
	FLinearColor                                       ShadowColor;                                                // 0x00A8   (0x0010)  
	FMargin                                            Margin;                                                     // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FSlateBrush                                        StrikeBrush;                                                // 0x00D0   (0x00D0)  
	float                                              LineHeightPercentage;                                       // 0x01A0   (0x0004)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x01A4   (0x000C)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonTextStyle.GetStrikeBrush
	// void GetStrikeBrush(FSlateBrush& OutStrikeBrush);                                                                        // [0x12eaed0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowOffset
	// void GetShadowOffset(FVector2D& OutShadowOffset);                                                                        // [0x12eadf0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowColor
	// void GetShadowColor(FLinearColor& OutColor);                                                                             // [0x12ead60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetMargin
	// void GetMargin(FMargin& OutMargin);                                                                                      // [0x12ea520] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetLineHeightPercentage
	// float GetLineHeightPercentage();                                                                                         // [0x110e910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetFont
	// void GetFont(FSlateFontInfo& OutFont);                                                                                   // [0x12e9f50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetColor
	// void GetColor(FLinearColor& OutColor);                                                                                   // [0x12e97e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonTextScrollStyle
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UCommonTextScrollStyle : public UObject
{ 
public:
	float                                              Speed;                                                      // 0x0028   (0x0004)  
	float                                              StartDelay;                                                 // 0x002C   (0x0004)  
	float                                              EndDelay;                                                   // 0x0030   (0x0004)  
	float                                              FadeInDelay;                                                // 0x0034   (0x0004)  
	float                                              FadeOutDelay;                                               // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonTileView
/// Size: 0x0C50 (3152 bytes) (0x000C50 - 0x000C50) align 16 MaxSize: 0x0C50
class UCommonTileView : public UTileView
{ 
public:
};

/// Class /Script/CommonUI.CommonTreeView
/// Size: 0x0C90 (3216 bytes) (0x000C90 - 0x000C90) align 16 MaxSize: 0x0C90
class UCommonTreeView : public UTreeView
{ 
public:
};

/// Class /Script/CommonUI.CommonUIEditorSettings
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 8 MaxSize: 0x00C0
class UCommonUIEditorSettings : public UObject
{ 
public:
	TSoftObjectPtr<class UClass*>                      TemplateTextStyle;                                          // 0x0028   (0x0030)  
	TSoftObjectPtr<class UClass*>                      TemplateButtonStyle;                                        // 0x0058   (0x0030)  
	TSoftObjectPtr<class UClass*>                      TemplateBorderStyle;                                        // 0x0088   (0x0030)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonUILibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCommonUILibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonUILibrary.FindParentWidgetOfType
	// class UWidget* FindParentWidgetOfType(class UWidget* StartingWidget, class UClass* Type);                                // [0x12e9260] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonUIRichTextData
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UCommonUIRichTextData : public UObject
{ 
public:
	class UDataTable*                                  InlineIconSet;                                              // 0x0028   (0x0008)  
};

/// Class /Script/CommonUI.CommonUISettings
/// Size: 0x01F0 (496 bytes) (0x000028 - 0x0001F0) align 16 MaxSize: 0x01F0
class UCommonUISettings : public UObject
{ 
public:
	bool                                               bAutoLoadData;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TWeakObjectPtr<class UObject*>                     DefaultImageResourceObject;                                 // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0038   (0x0028)  MISSED
	TWeakObjectPtr<class UMaterialInterface*>          DefaultThrobberMaterial;                                    // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0068   (0x0028)  MISSED
	TSoftObjectPtr<class UClass*>                      DefaultRichTextDataClass;                                   // 0x0090   (0x0030)  
	TArray<FGameplayTag>                               PlatformTraits;                                             // 0x00C0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x00D0   (0x0028)  MISSED
	class UObject*                                     DefaultImageResourceObjectInstance;                         // 0x00F8   (0x0008)  
	class UMaterialInterface*                          DefaultThrobberMaterialInstance;                            // 0x0100   (0x0008)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0108   (0x0008)  MISSED
	FSlateBrush                                        DefaultThrobberBrush;                                       // 0x0110   (0x00D0)  
	class UCommonUIRichTextData*                       RichTextDataInstance;                                       // 0x01E0   (0x0008)  
	unsigned char                                      UnknownData05_7[0x8];                                       // 0x01E8   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonUISubsystemBase
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
class UCommonUISubsystemBase : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0030   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
	// FSlateBrush GetInputActionButtonIcon(FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, FName& GamepadName); // [0x12ea1f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonUISubsystemBase.GetEnhancedInputActionButtonIcon
	// FSlateBrush GetEnhancedInputActionButtonIcon(class UInputAction* InputAction, class ULocalPlayer* LocalPlayer);          // [0x12e9e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonInputMetadata
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UCommonInputMetadata : public UObject
{ 
public:
	int32_t                                            NavBarPriority;                                             // 0x0028   (0x0004)  
	bool                                               bIsGenericInputAction;                                      // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/CommonUI.CommonMappingContextMetadataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCommonMappingContextMetadataInterface : public UInterface
{ 
public:
};

/// Class /Script/CommonUI.CommonMappingContextMetadata
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UCommonMappingContextMetadata : public UDataAsset
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UCommonInputMetadata*                        EnhancedInputMetadata;                                      // 0x0038   (0x0008)  
	TMap<class UInputAction*, class UCommonInputMetadata*> PerActionEnhancedInputMetadata;                         // 0x0040   (0x0050)  
};

/// Class /Script/CommonUI.CommonUIVisibilitySubsystem
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0030   (0x0058)  MISSED
};

/// Class /Script/CommonUI.CommonVideoPlayer
/// Size: 0x02B0 (688 bytes) (0x000150 - 0x0002B0) align 16 MaxSize: 0x02B0
class UCommonVideoPlayer : public UWidget
{ 
public:
	class UMediaSource*                                Video;                                                      // 0x0150   (0x0008)  
	class UMediaPlayer*                                MediaPlayer;                                                // 0x0158   (0x0008)  
	class UMediaTexture*                               MediaTexture;                                               // 0x0160   (0x0008)  
	class UMaterial*                                   VideoMaterial;                                              // 0x0168   (0x0008)  
	class UMediaSoundComponent*                        SoundComponent;                                             // 0x0170   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0178   (0x0008)  MISSED
	FSlateBrush                                        VideoBrush;                                                 // 0x0180   (0x00D0)  
	unsigned char                                      UnknownData01_7[0x60];                                      // 0x0250   (0x0060)  MISSED
};

/// Class /Script/CommonUI.CommonVisibilitySwitcher
/// Size: 0x01A0 (416 bytes) (0x000178 - 0x0001A0) align 8 MaxSize: 0x01A0
class UCommonVisibilitySwitcher : public UOverlay
{ 
public:
	ESlateVisibility                                   ShownVisibility;                                            // 0x0178   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0179   (0x0003)  MISSED
	int32_t                                            ActiveWidgetIndex;                                          // 0x017C   (0x0004)  
	bool                                               bAutoActivateSlot;                                          // 0x0180   (0x0001)  
	bool                                               bActivateFirstSlotOnAdding;                                 // 0x0181   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1E];                                      // 0x0182   (0x001E)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x12ed0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                             // [0x12ece90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
	// void IncrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0x12eba50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x12e9540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.GetActiveWidget
	// class UWidget* GetActiveWidget();                                                                                        // [0x12e9500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
	// void DecrementActiveWidgetIndex(bool bAllowWrapping);                                                                    // [0x12e8ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
	// void DeactivateVisibleSlot();                                                                                            // [0x12e8d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
	// void ActivateVisibleSlot();                                                                                              // [0x12e80b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonVisibilitySwitcherSlot
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0058   (0x0010)  MISSED
};

/// Class /Script/CommonUI.UCommonVisibilityWidgetBase
/// Size: 0x0380 (896 bytes) (0x000328 - 0x000380) align 16 MaxSize: 0x0380
class UUCommonVisibilityWidgetBase : public UCommonBorder
{ 
public:
	TMap<FName, bool>                                  VisibilityControls;                                         // 0x0328   (0x0050)  
	bool                                               bShowForGamepad;                                            // 0x0378   (0x0001)  
	bool                                               bShowForMouseAndKeyboard;                                   // 0x0379   (0x0001)  
	bool                                               bShowForTouch;                                              // 0x037A   (0x0001)  
	ESlateVisibility                                   VisibleType;                                                // 0x037B   (0x0001)  
	ESlateVisibility                                   HiddenType;                                                 // 0x037C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x037D   (0x0003)  MISSED


	/// Functions
	// Function /Script/CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms
	// TArray<FName> GetRegisteredPlatforms();                                                                                  // [0x12ea880] Final|Native|Static|Protected 
};

/// Class /Script/CommonUI.CommonVisualAttachment
/// Size: 0x01C0 (448 bytes) (0x0001A0 - 0x0001C0) align 8 MaxSize: 0x01C0
class UCommonVisualAttachment : public USizeBox
{ 
public:
	FVector2D                                          ContentAnchor;                                              // 0x01A0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x01B0   (0x0010)  MISSED
};

/// Class /Script/CommonUI.CommonWidgetCarousel
/// Size: 0x01B0 (432 bytes) (0x000168 - 0x0001B0) align 8 MaxSize: 0x01B0
class UCommonWidgetCarousel : public UPanelWidget
{ 
public:
	int32_t                                            ActiveWidgetIndex;                                          // 0x0168   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x016C   (0x0004)  MISSED
	SDK_UNDEFINED(16,1171) /* FMulticastInlineDelegate */ __um(OnCurrentPageIndexChanged);                         // 0x0170   (0x0010)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x0180   (0x0030)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x12ed170] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidget
	// void SetActiveWidget(class UWidget* Widget);                                                                             // [0x12ed050] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.PreviousPage
	// void PreviousPage();                                                                                                     // [0x12ec630] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.NextPage
	// void NextPage();                                                                                                         // [0x12ebfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	// class UWidget* GetWidgetAtIndex(int32_t Index);                                                                          // [0x12eb200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x12e9560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.EndAutoScrolling
	// void EndAutoScrolling();                                                                                                 // [0x12e91a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.BeginAutoScrolling
	// void BeginAutoScrolling(float ScrollInterval);                                                                           // [0x12e8ab0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonWidgetCarouselNavBar
/// Size: 0x0198 (408 bytes) (0x000150 - 0x000198) align 8 MaxSize: 0x0198
class UCommonWidgetCarouselNavBar : public UWidget
{ 
public:
	class UClass*                                      ButtonWidgetType;                                           // 0x0150   (0x0008)  
	FMargin                                            ButtonPadding;                                              // 0x0158   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0168   (0x0010)  MISSED
	class UCommonWidgetCarousel*                       LinkedCarousel;                                             // 0x0178   (0x0008)  
	class UCommonButtonGroupBase*                      ButtonGroup;                                                // 0x0180   (0x0008)  
	TArray<class UCommonButtonBase*>                   Buttons;                                                    // 0x0188   (0x0010)  


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
	// void SetLinkedCarousel(class UCommonWidgetCarousel* CommonCarousel);                                                     // [0x12eec30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
	// void HandlePageChanged(class UCommonWidgetCarousel* CommonCarousel, int32_t PageIndex);                                  // [0x12eb570] Final|Native|Protected 
	// Function /Script/CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
	// void HandleButtonClicked(class UCommonButtonBase* AssociatedButton, int32_t ButtonIndex);                                // [0x12eb2e0] Final|Native|Protected 
};

/// Class /Script/CommonUI.CommonWidgetGroupBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCommonWidgetGroupBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveWidget
	// void RemoveWidget(class UWidget* InWidget);                                                                              // [0x12eca60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveAll
	// void RemoveAll();                                                                                                        // [0x10d3bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.AddWidget
	// void AddWidget(class UWidget* InWidget);                                                                                 // [0x12e8280] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonButtonGroupBase
/// Size: 0x0110 (272 bytes) (0x000028 - 0x000110) align 8 MaxSize: 0x0110
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{ 
public:
	SDK_UNDEFINED(16,1172) /* FMulticastInlineDelegate */ __um(OnSelectedButtonBaseChanged);                       // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0038   (0x0018)  MISSED
	SDK_UNDEFINED(16,1173) /* FMulticastInlineDelegate */ __um(OnHoveredButtonBaseChanged);                        // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0060   (0x0018)  MISSED
	SDK_UNDEFINED(16,1174) /* FMulticastInlineDelegate */ __um(OnButtonBaseClicked);                               // 0x0078   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0088   (0x0018)  MISSED
	SDK_UNDEFINED(16,1175) /* FMulticastInlineDelegate */ __um(OnButtonBaseDoubleClicked);                         // 0x00A0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x00B0   (0x0018)  MISSED
	SDK_UNDEFINED(16,1176) /* FMulticastInlineDelegate */ __um(OnSelectionCleared);                                // 0x00C8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x00D8   (0x0018)  MISSED
	bool                                               bSelectionRequired;                                         // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData05_7[0x1F];                                      // 0x00F1   (0x001F)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonButtonGroupBase.SetSelectionRequired
	// void SetSelectionRequired(bool bRequireSelection);                                                                       // [0x12ef950] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectPreviousButton
	// void SelectPreviousButton(bool bAllowWrap);                                                                              // [0x12ecd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectNextButton
	// void SelectNextButton(bool bAllowWrap);                                                                                  // [0x12ecca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
	// void SelectButtonAtIndex(int32_t ButtonIndex, bool bAllowSound);                                                         // [0x12ecbd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
	// void OnSelectionStateChangedBase(class UCommonButtonBase* BaseButton, bool bIsSelected);                                 // [0x12ec340] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
	// void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* BaseButton);                                               // [0x12ec210] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
	// void OnHandleButtonBaseClicked(class UCommonButtonBase* BaseButton);                                                     // [0x12ec180] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
	// void OnButtonBaseUnhovered(class UCommonButtonBase* BaseButton);                                                         // [0x12ec0f0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
	// void OnButtonBaseHovered(class UCommonButtonBase* BaseButton);                                                           // [0x12ec060] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroupBase.HasAnyButtons
	// bool HasAnyButtons();                                                                                                    // [0x12eb9f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
	// int32_t GetSelectedButtonIndex();                                                                                        // [0x12eaa60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
	// class UCommonButtonBase* GetSelectedButtonBase();                                                                        // [0x12eaa00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
	// int32_t GetHoveredButtonIndex();                                                                                         // [0x12ea030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonCount
	// int32_t GetButtonCount();                                                                                                // [0x12e9720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
	// class UCommonButtonBase* GetButtonBaseAtIndex(int32_t Index);                                                            // [0x12e9660] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.FindButtonIndex
	// int32_t FindButtonIndex(class UCommonButtonBase* ButtonToFind);                                                          // [0x12e91c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroupBase.DeselectAll
	// void DeselectAll();                                                                                                      // [0x12e8f70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionBar
/// Size: 0x0248 (584 bytes) (0x000230 - 0x000248) align 8 MaxSize: 0x0248
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0230   (0x0008)  MISSED
	class UClass*                                      ActionButtonClass;                                          // 0x0238   (0x0008)  
	bool                                               bDisplayOwningPlayerActionsOnly;                            // 0x0240   (0x0001)  
	bool                                               bIgnoreDuplicateActions;                                    // 0x0241   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0242   (0x0006)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
	// void SetDisplayOwningPlayerActionsOnly(bool bShouldOnlyDisplayOwningPlayerActions);                                      // [0x12edcb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBoundActionButton
/// Size: 0x1520 (5408 bytes) (0x001500 - 0x001520) align 16 MaxSize: 0x1520
class UCommonBoundActionButton : public UCommonButtonBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x1500   (0x0008)  MISSED
	class UCommonTextBlock*                            Text_ActionName;                                            // 0x1508   (0x0008)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x1510   (0x0010)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonBoundActionButton.OnUpdateInputAction
	// void OnUpdateInputAction();                                                                                              // [0x2c97800] Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonGenericInputActionDataTable
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UCommonGenericInputActionDataTable : public UDataTable
{ 
public:
};

/// Class /Script/CommonUI.CommonInputActionDataProcessor
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UCommonInputActionDataProcessor : public UObject
{ 
public:
};

/// Class /Script/CommonUI.CommonUIActionRouterBase
/// Size: 0x0158 (344 bytes) (0x000030 - 0x000158) align 8 MaxSize: 0x0158
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x128];                                     // 0x0030   (0x0128)  MISSED
};

/// Struct /Script/CommonUI.UITag
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 4 MaxSize: 0x0008
struct FUITag : FGameplayTag
{ 
};

/// Struct /Script/CommonUI.UIActionTag
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 4 MaxSize: 0x0008
struct FUIActionTag : FUITag
{ 
};

/// Struct /Script/CommonUI.UIActionKeyMapping
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FUIActionKeyMapping
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	float                                              HoldTime;                                                   // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CommonUI.UIInputAction
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FUIInputAction
{ 
	FUIActionTag                                       ActionTag;                                                  // 0x0000   (0x0008)  
	FText                                              DefaultDisplayName;                                         // 0x0008   (0x0018)  
	TArray<FUIActionKeyMapping>                        KeyMappings;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/CommonUI.CommonAnalogCursorSettings
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FCommonAnalogCursorSettings
{ 
	int32_t                                            PreprocessorPriority;                                       // 0x0000   (0x0004)  
	bool                                               bEnableCursorAcceleration;                                  // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	float                                              CursorAcceleration;                                         // 0x0008   (0x0004)  
	float                                              CursorMaxSpeed;                                             // 0x000C   (0x0004)  
	float                                              CursorDeadZone;                                             // 0x0010   (0x0004)  
	float                                              HoverSlowdownFactor;                                        // 0x0014   (0x0004)  
	float                                              ScrollDeadZone;                                             // 0x0018   (0x0004)  
	float                                              ScrollUpdatePeriod;                                         // 0x001C   (0x0004)  
	float                                              ScrollMultiplier;                                           // 0x0020   (0x0004)  
};

/// Class /Script/CommonUI.CommonUIInputSettings
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UCommonUIInputSettings : public UObject
{ 
public:
	bool                                               bLinkCursorToGamepadFocus;                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            UIActionProcessingPriority;                                 // 0x002C   (0x0004)  
	TArray<FUIInputAction>                             InputActions;                                               // 0x0030   (0x0010)  
	TArray<FUIInputAction>                             ActionOverrides;                                            // 0x0040   (0x0010)  
	FCommonAnalogCursorSettings                        AnalogCursorSettings;                                       // 0x0050   (0x0024)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/CommonUI.CommonStyleSheet
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UCommonStyleSheet : public UDataAsset
{ 
public:
	TArray<class UCommonStyleSheetTypeBase*>           Properties;                                                 // 0x0030   (0x0010)  
	TArray<class UCommonStyleSheet*>                   ImportedStyleSheets;                                        // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0050   (0x0008)  MISSED
};

/// Class /Script/CommonUI.CommonActivatableWidgetContainerBase
/// Size: 0x0270 (624 bytes) (0x000150 - 0x000270) align 8 MaxSize: 0x0270
class UCommonActivatableWidgetContainerBase : public UWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0150   (0x0018)  MISSED
	ECommonSwitcherTransition                          TransitionType;                                             // 0x0168   (0x0001)  
	ETransitionCurve                                   TransitionCurveType;                                        // 0x0169   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x016A   (0x0002)  MISSED
	float                                              TransitionDuration;                                         // 0x016C   (0x0004)  
	TArray<class UCommonActivatableWidget*>            WidgetList;                                                 // 0x0170   (0x0010)  
	class UCommonActivatableWidget*                    DisplayedWidget;                                            // 0x0180   (0x0008)  
	FUserWidgetPool                                    GeneratedWidgetsPool;                                       // 0x0188   (0x0088)  
	unsigned char                                      UnknownData02_7[0x60];                                      // 0x0210   (0x0060)  MISSED


	/// Functions
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
	// void SetTransitionDuration(float Duration);                                                                              // [0x12f0200] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
	// void RemoveWidget(class UCommonActivatableWidget* WidgetToRemove);                                                       // [0x12ec8d0] Final|Native|Private|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
	// float GetTransitionDuration();                                                                                           // [0x12eb1e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
	// class UCommonActivatableWidget* GetActiveWidget();                                                                       // [0x12e94d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
	// void ClearWidgets();                                                                                                     // [0x12e8ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
	// class UCommonActivatableWidget* BP_AddWidget(class UClass* ActivatableWidgetClass);                                      // [0x12e8380] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatableWidgetStack
/// Size: 0x0280 (640 bytes) (0x000270 - 0x000280) align 8 MaxSize: 0x0280
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{ 
public:
	class UClass*                                      RootContentWidgetClass;                                     // 0x0270   (0x0008)  
	class UCommonActivatableWidget*                    RootContentWidget;                                          // 0x0278   (0x0008)  
};

/// Class /Script/CommonUI.CommonActivatableWidgetQueue
/// Size: 0x0270 (624 bytes) (0x000270 - 0x000270) align 8 MaxSize: 0x0270
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{ 
public:
};

/// Struct /Script/CommonUI.CommonInputActionHandlerData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FCommonInputActionHandlerData
{ 
	FDataTableRowHandle                                InputActionRow;                                             // 0x0000   (0x0010)  
	EInputActionState                                  State;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0011   (0x000F)  MISSED
};

/// Struct /Script/CommonUI.RichTextIconData
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FRichTextIconData : FTableRowBase
{ 
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	TWeakObjectPtr<class UObject*>                     ResourceObject;                                             // 0x0020   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0028   (0x0028)  MISSED
	FVector2D                                          ImageSize;                                                  // 0x0050   (0x0010)  
};

/// Struct /Script/CommonUI.CommonInputTypeInfo
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FCommonInputTypeInfo
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	EInputActionState                                  OverrrideState;                                             // 0x0018   (0x0001)  
	bool                                               bActionRequiresHold;                                        // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001A   (0x0002)  MISSED
	float                                              HoldTime;                                                   // 0x001C   (0x0004)  
	FSlateBrush                                        OverrideBrush;                                              // 0x0020   (0x00D0)  
};

/// Struct /Script/CommonUI.CommonInputActionDataBase
/// Size: 0x0360 (864 bytes) (0x000008 - 0x000360) align 16 MaxSize: 0x0360
struct FCommonInputActionDataBase : FTableRowBase
{ 
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	FText                                              HoldDisplayName;                                            // 0x0020   (0x0018)  
	int32_t                                            NavBarPriority;                                             // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FCommonInputTypeInfo                               KeyboardInputTypeInfo;                                      // 0x0040   (0x00F0)  
	FCommonInputTypeInfo                               DefaultGamepadInputTypeInfo;                                // 0x0130   (0x00F0)  
	TMap<FName, FCommonInputTypeInfo>                  GamepadInputOverrides;                                      // 0x0220   (0x0050)  
	FCommonInputTypeInfo                               TouchInputTypeInfo;                                         // 0x0270   (0x00F0)  
};

#pragma pack(pop)


static_assert(sizeof(UCommonBoundActionButtonInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCommonStyleSheetTypeBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UCommonStyleSheetTypeColor) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCommonStyleSheetTypeOpacity) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UCommonStyleSheetTypeLineHeightPercentage) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UCommonStyleSheetTypeFontTypeface) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UCommonStyleSheetTypeFontSize) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UCommonStyleSheetTypeFontLetterSpacing) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UCommonStyleSheetTypeMarginLeft) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UCommonStyleSheetTypeMarginRight) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UCommonStyleSheetTypeMarginTop) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UCommonStyleSheetTypeMarginBottom) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAnalogSlider) == 0x0720); // 1824 bytes (0x000700 - 0x000720)
static_assert(sizeof(UCommonActionHandlerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCommonActionWidget) == 0x0460); // 1120 bytes (0x000150 - 0x000460)
static_assert(sizeof(UCommonUserWidget) == 0x02A8); // 680 bytes (0x000280 - 0x0002A8)
static_assert(sizeof(UCommonActivatableWidget) == 0x03E0); // 992 bytes (0x0002A8 - 0x0003E0)
static_assert(sizeof(UCommonAnimatedSwitcher) == 0x01F0); // 496 bytes (0x000180 - 0x0001F0)
static_assert(sizeof(UCommonActivatableWidgetSwitcher) == 0x0200); // 512 bytes (0x0001F0 - 0x000200)
static_assert(sizeof(UCommonBorderStyle) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(UCommonBorder) == 0x0328); // 808 bytes (0x000308 - 0x000328)
static_assert(sizeof(FCommonButtonStyleOptionalSlateSound) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UCommonButtonStyle) == 0x07B0); // 1968 bytes (0x000028 - 0x0007B0)
static_assert(sizeof(UCommonButtonInternalBase) == 0x0660); // 1632 bytes (0x0005E8 - 0x000660)
static_assert(sizeof(UCommonButtonBase) == 0x1500); // 5376 bytes (0x0002A8 - 0x001500)
static_assert(sizeof(UCommonCustomNavigation) == 0x0320); // 800 bytes (0x000308 - 0x000320)
static_assert(sizeof(UCommonTextBlock) == 0x0370); // 880 bytes (0x000338 - 0x000370)
static_assert(sizeof(UCommonDateTimeTextBlock) == 0x03D0); // 976 bytes (0x000370 - 0x0003D0)
static_assert(sizeof(UCommonGameViewportClient) == 0x03F0); // 1008 bytes (0x0003B0 - 0x0003F0)
static_assert(sizeof(UCommonHardwareVisibilityBorder) == 0x0380); // 896 bytes (0x000328 - 0x000380)
static_assert(sizeof(UCommonHierarchicalScrollBox) == 0x0CC0); // 3264 bytes (0x000CC0 - 0x000CC0)
static_assert(sizeof(UCommonLazyImage) == 0x03C0); // 960 bytes (0x0002A8 - 0x0003C0)
static_assert(sizeof(UCommonLazyWidget) == 0x02B0); // 688 bytes (0x000150 - 0x0002B0)
static_assert(sizeof(UCommonListView) == 0x0C30); // 3120 bytes (0x000C30 - 0x000C30)
static_assert(sizeof(ULoadGuardSlot) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UCommonLoadGuard) == 0x02D0); // 720 bytes (0x000168 - 0x0002D0)
static_assert(sizeof(FCommonNumberFormattingOptions) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UCommonNumericTextBlock) == 0x0410); // 1040 bytes (0x000370 - 0x000410)
static_assert(sizeof(UCommonPoolableWidgetInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCommonRichTextBlock) == 0x08B0); // 2224 bytes (0x000870 - 0x0008B0)
static_assert(sizeof(UCommonRotator) == 0x1560); // 5472 bytes (0x001500 - 0x001560)
static_assert(sizeof(FCommonRegisteredTabInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UCommonTabListWidgetBase) == 0x03A0); // 928 bytes (0x0002A8 - 0x0003A0)
static_assert(sizeof(UCommonTextStyle) == 0x01B0); // 432 bytes (0x000028 - 0x0001B0)
static_assert(sizeof(UCommonTextScrollStyle) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UCommonTileView) == 0x0C50); // 3152 bytes (0x000C50 - 0x000C50)
static_assert(sizeof(UCommonTreeView) == 0x0C90); // 3216 bytes (0x000C90 - 0x000C90)
static_assert(sizeof(UCommonUIEditorSettings) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(UCommonUILibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCommonUIRichTextData) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UCommonUISettings) == 0x01F0); // 496 bytes (0x000028 - 0x0001F0)
static_assert(sizeof(UCommonUISubsystemBase) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(UCommonInputMetadata) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UCommonMappingContextMetadataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCommonMappingContextMetadata) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UCommonUIVisibilitySubsystem) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UCommonVideoPlayer) == 0x02B0); // 688 bytes (0x000150 - 0x0002B0)
static_assert(sizeof(UCommonVisibilitySwitcher) == 0x01A0); // 416 bytes (0x000178 - 0x0001A0)
static_assert(sizeof(UCommonVisibilitySwitcherSlot) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UUCommonVisibilityWidgetBase) == 0x0380); // 896 bytes (0x000328 - 0x000380)
static_assert(sizeof(UCommonVisualAttachment) == 0x01C0); // 448 bytes (0x0001A0 - 0x0001C0)
static_assert(sizeof(UCommonWidgetCarousel) == 0x01B0); // 432 bytes (0x000168 - 0x0001B0)
static_assert(sizeof(UCommonWidgetCarouselNavBar) == 0x0198); // 408 bytes (0x000150 - 0x000198)
static_assert(sizeof(UCommonWidgetGroupBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCommonButtonGroupBase) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(UCommonBoundActionBar) == 0x0248); // 584 bytes (0x000230 - 0x000248)
static_assert(sizeof(UCommonBoundActionButton) == 0x1520); // 5408 bytes (0x001500 - 0x001520)
static_assert(sizeof(UCommonGenericInputActionDataTable) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UCommonInputActionDataProcessor) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCommonUIActionRouterBase) == 0x0158); // 344 bytes (0x000030 - 0x000158)
static_assert(sizeof(FUITag) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FUIActionTag) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FUIActionKeyMapping) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FUIInputAction) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FCommonAnalogCursorSettings) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(UCommonUIInputSettings) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UCommonStyleSheet) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UCommonActivatableWidgetContainerBase) == 0x0270); // 624 bytes (0x000150 - 0x000270)
static_assert(sizeof(UCommonActivatableWidgetStack) == 0x0280); // 640 bytes (0x000270 - 0x000280)
static_assert(sizeof(UCommonActivatableWidgetQueue) == 0x0270); // 624 bytes (0x000270 - 0x000270)
static_assert(sizeof(FCommonInputActionHandlerData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRichTextIconData) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FCommonInputTypeInfo) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FCommonInputActionDataBase) == 0x0360); // 864 bytes (0x000008 - 0x000360)
static_assert(offsetof(UCommonStyleSheetTypeColor, Color) == 0x0030);
static_assert(offsetof(UCommonStyleSheetTypeFontTypeface, Typeface) == 0x0030);
static_assert(offsetof(UCommonActionWidget, ProgressMaterialBrush) == 0x0160);
static_assert(offsetof(UCommonActionWidget, ProgressMaterialParam) == 0x0230);
static_assert(offsetof(UCommonActionWidget, IconRimBrush) == 0x0240);
static_assert(offsetof(UCommonActionWidget, InputActions) == 0x0310);
static_assert(offsetof(UCommonActionWidget, EnhancedInputAction) == 0x0320);
static_assert(offsetof(UCommonActionWidget, ProgressDynamicMaterial) == 0x0330);
static_assert(offsetof(UCommonActivatableWidget, InputMapping) == 0x02B0);
static_assert(offsetof(UCommonActivatableWidget, ActionDomainOverride) == 0x02C0);
static_assert(offsetof(UCommonActivatableWidget, ActivatedVisibility) == 0x03D9);
static_assert(offsetof(UCommonActivatableWidget, DeactivatedVisibility) == 0x03DB);
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionType) == 0x01B0);
static_assert(offsetof(UCommonAnimatedSwitcher, TransitionCurveType) == 0x01B1);
static_assert(offsetof(UCommonBorderStyle, Background) == 0x0030);
static_assert(offsetof(UCommonBorder, Style) == 0x0308);
static_assert(offsetof(UCommonBorder, MinimumPadding) == 0x0314);
static_assert(offsetof(FCommonButtonStyleOptionalSlateSound, Sound) == 0x0008);
static_assert(offsetof(UCommonButtonStyle, SingleMaterialBrush) == 0x0030);
static_assert(offsetof(UCommonButtonStyle, NormalBase) == 0x0100);
static_assert(offsetof(UCommonButtonStyle, NormalHovered) == 0x01D0);
static_assert(offsetof(UCommonButtonStyle, NormalPressed) == 0x02A0);
static_assert(offsetof(UCommonButtonStyle, SelectedBase) == 0x0370);
static_assert(offsetof(UCommonButtonStyle, SelectedHovered) == 0x0440);
static_assert(offsetof(UCommonButtonStyle, SelectedPressed) == 0x0510);
static_assert(offsetof(UCommonButtonStyle, Disabled) == 0x05E0);
static_assert(offsetof(UCommonButtonStyle, ButtonPadding) == 0x06B0);
static_assert(offsetof(UCommonButtonStyle, CustomPadding) == 0x06C0);
static_assert(offsetof(UCommonButtonStyle, NormalTextStyle) == 0x06D8);
static_assert(offsetof(UCommonButtonStyle, NormalHoveredTextStyle) == 0x06E0);
static_assert(offsetof(UCommonButtonStyle, SelectedTextStyle) == 0x06E8);
static_assert(offsetof(UCommonButtonStyle, SelectedHoveredTextStyle) == 0x06F0);
static_assert(offsetof(UCommonButtonStyle, DisabledTextStyle) == 0x06F8);
static_assert(offsetof(UCommonButtonStyle, PressedSlateSound) == 0x0700);
static_assert(offsetof(UCommonButtonStyle, SelectedPressedSlateSound) == 0x0718);
static_assert(offsetof(UCommonButtonStyle, LockedPressedSlateSound) == 0x0738);
static_assert(offsetof(UCommonButtonStyle, HoveredSlateSound) == 0x0758);
static_assert(offsetof(UCommonButtonStyle, SelectedHoveredSlateSound) == 0x0770);
static_assert(offsetof(UCommonButtonStyle, LockedHoveredSlateSound) == 0x0790);
static_assert(offsetof(UCommonButtonBase, Style) == 0x02B0);
static_assert(offsetof(UCommonButtonBase, PressedSlateSoundOverride) == 0x02C0);
static_assert(offsetof(UCommonButtonBase, HoveredSlateSoundOverride) == 0x02D8);
static_assert(offsetof(UCommonButtonBase, SelectedPressedSlateSoundOverride) == 0x02F0);
static_assert(offsetof(UCommonButtonBase, SelectedHoveredSlateSoundOverride) == 0x0308);
static_assert(offsetof(UCommonButtonBase, LockedPressedSlateSoundOverride) == 0x0320);
static_assert(offsetof(UCommonButtonBase, LockedHoveredSlateSoundOverride) == 0x0338);
static_assert(offsetof(UCommonButtonBase, ClickMethod) == 0x0352);
static_assert(offsetof(UCommonButtonBase, TouchMethod) == 0x0353);
static_assert(offsetof(UCommonButtonBase, PressMethod) == 0x0354);
static_assert(offsetof(UCommonButtonBase, TriggeringInputAction) == 0x0360);
static_assert(offsetof(UCommonButtonBase, TriggeringEnhancedInputAction) == 0x0370);
static_assert(offsetof(UCommonButtonBase, InputModeOverride) == 0x03DD);
static_assert(offsetof(UCommonButtonBase, SingleMaterialStyleMID) == 0x0410);
static_assert(offsetof(UCommonButtonBase, NormalStyle) == 0x0420);
static_assert(offsetof(UCommonButtonBase, SelectedStyle) == 0x0810);
static_assert(offsetof(UCommonButtonBase, DisabledStyle) == 0x0C00);
static_assert(offsetof(UCommonButtonBase, LockedStyle) == 0x0FF0);
static_assert(offsetof(UCommonButtonBase, InputActionWidget) == 0x14F8);
static_assert(offsetof(UCommonTextBlock, Style) == 0x0340);
static_assert(offsetof(UCommonTextBlock, ScrollStyle) == 0x0348);
static_assert(offsetof(UCommonTextBlock, StyleSheet) == 0x0350);
static_assert(offsetof(UCommonHardwareVisibilityBorder, VisibilityQuery) == 0x0328);
static_assert(offsetof(UCommonHardwareVisibilityBorder, VisibleType) == 0x0370);
static_assert(offsetof(UCommonHardwareVisibilityBorder, HiddenType) == 0x0371);
static_assert(offsetof(UCommonLazyImage, LoadingBackgroundBrush) == 0x02B0);
static_assert(offsetof(UCommonLazyImage, MaterialTextureParamName) == 0x0380);
static_assert(offsetof(UCommonLazyWidget, LoadingBackgroundBrush) == 0x0150);
static_assert(offsetof(UCommonLazyWidget, Content) == 0x0220);
static_assert(offsetof(ULoadGuardSlot, Padding) == 0x0038);
static_assert(offsetof(ULoadGuardSlot, HorizontalAlignment) == 0x0048);
static_assert(offsetof(ULoadGuardSlot, VerticalAlignment) == 0x0049);
static_assert(offsetof(UCommonLoadGuard, LoadingBackgroundBrush) == 0x0170);
static_assert(offsetof(UCommonLoadGuard, ThrobberAlignment) == 0x0240);
static_assert(offsetof(UCommonLoadGuard, ThrobberPadding) == 0x0244);
static_assert(offsetof(UCommonLoadGuard, LoadingText) == 0x0258);
static_assert(offsetof(UCommonLoadGuard, TextStyle) == 0x0270);
static_assert(offsetof(UCommonLoadGuard, SpinnerMaterialPath) == 0x0288);
static_assert(offsetof(FCommonNumberFormattingOptions, RoundingMode) == 0x0000);
static_assert(offsetof(UCommonNumericTextBlock, NumericType) == 0x03B4);
static_assert(offsetof(UCommonNumericTextBlock, FormattingSpecification) == 0x03B8);
static_assert(offsetof(UCommonRichTextBlock, InlineIconDisplayMode) == 0x0870);
static_assert(offsetof(UCommonRichTextBlock, DefaultTextStyleOverrideClass) == 0x0878);
static_assert(offsetof(UCommonRichTextBlock, ScrollStyle) == 0x0888);
static_assert(offsetof(UCommonRotator, MyText) == 0x1538);
static_assert(offsetof(FCommonRegisteredTabInfo, TabButton) == 0x0008);
static_assert(offsetof(FCommonRegisteredTabInfo, ContentInstance) == 0x0010);
static_assert(offsetof(UCommonTabListWidgetBase, NextTabInputActionData) == 0x02E8);
static_assert(offsetof(UCommonTabListWidgetBase, PreviousTabInputActionData) == 0x02F8);
static_assert(offsetof(UCommonTabListWidgetBase, NextTabEnhancedInputAction) == 0x0308);
static_assert(offsetof(UCommonTabListWidgetBase, PreviousTabEnhancedInputAction) == 0x0310);
static_assert(offsetof(UCommonTabListWidgetBase, LinkedSwitcher) == 0x031C);
static_assert(offsetof(UCommonTabListWidgetBase, TabButtonGroup) == 0x0328);
static_assert(offsetof(UCommonTabListWidgetBase, RegisteredTabsByID) == 0x0338);
static_assert(offsetof(UCommonTextStyle, Font) == 0x0028);
static_assert(offsetof(UCommonTextStyle, Color) == 0x0080);
static_assert(offsetof(UCommonTextStyle, ShadowOffset) == 0x0098);
static_assert(offsetof(UCommonTextStyle, ShadowColor) == 0x00A8);
static_assert(offsetof(UCommonTextStyle, Margin) == 0x00B8);
static_assert(offsetof(UCommonTextStyle, StrikeBrush) == 0x00D0);
static_assert(offsetof(UCommonUIEditorSettings, TemplateTextStyle) == 0x0028);
static_assert(offsetof(UCommonUIEditorSettings, TemplateButtonStyle) == 0x0058);
static_assert(offsetof(UCommonUIEditorSettings, TemplateBorderStyle) == 0x0088);
static_assert(offsetof(UCommonUIRichTextData, InlineIconSet) == 0x0028);
static_assert(offsetof(UCommonUISettings, DefaultImageResourceObject) == 0x0030);
static_assert(offsetof(UCommonUISettings, DefaultThrobberMaterial) == 0x0060);
static_assert(offsetof(UCommonUISettings, DefaultRichTextDataClass) == 0x0090);
static_assert(offsetof(UCommonUISettings, PlatformTraits) == 0x00C0);
static_assert(offsetof(UCommonUISettings, DefaultImageResourceObjectInstance) == 0x00F8);
static_assert(offsetof(UCommonUISettings, DefaultThrobberMaterialInstance) == 0x0100);
static_assert(offsetof(UCommonUISettings, DefaultThrobberBrush) == 0x0110);
static_assert(offsetof(UCommonUISettings, RichTextDataInstance) == 0x01E0);
static_assert(offsetof(UCommonMappingContextMetadata, EnhancedInputMetadata) == 0x0038);
static_assert(offsetof(UCommonMappingContextMetadata, PerActionEnhancedInputMetadata) == 0x0040);
static_assert(offsetof(UCommonVideoPlayer, Video) == 0x0150);
static_assert(offsetof(UCommonVideoPlayer, MediaPlayer) == 0x0158);
static_assert(offsetof(UCommonVideoPlayer, MediaTexture) == 0x0160);
static_assert(offsetof(UCommonVideoPlayer, VideoMaterial) == 0x0168);
static_assert(offsetof(UCommonVideoPlayer, SoundComponent) == 0x0170);
static_assert(offsetof(UCommonVideoPlayer, VideoBrush) == 0x0180);
static_assert(offsetof(UCommonVisibilitySwitcher, ShownVisibility) == 0x0178);
static_assert(offsetof(UUCommonVisibilityWidgetBase, VisibilityControls) == 0x0328);
static_assert(offsetof(UUCommonVisibilityWidgetBase, VisibleType) == 0x037B);
static_assert(offsetof(UUCommonVisibilityWidgetBase, HiddenType) == 0x037C);
static_assert(offsetof(UCommonVisualAttachment, ContentAnchor) == 0x01A0);
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonWidgetType) == 0x0150);
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonPadding) == 0x0158);
static_assert(offsetof(UCommonWidgetCarouselNavBar, LinkedCarousel) == 0x0178);
static_assert(offsetof(UCommonWidgetCarouselNavBar, ButtonGroup) == 0x0180);
static_assert(offsetof(UCommonWidgetCarouselNavBar, Buttons) == 0x0188);
static_assert(offsetof(UCommonBoundActionBar, ActionButtonClass) == 0x0238);
static_assert(offsetof(UCommonBoundActionButton, Text_ActionName) == 0x1508);
static_assert(offsetof(FUIActionKeyMapping, Key) == 0x0000);
static_assert(offsetof(FUIInputAction, ActionTag) == 0x0000);
static_assert(offsetof(FUIInputAction, DefaultDisplayName) == 0x0008);
static_assert(offsetof(FUIInputAction, KeyMappings) == 0x0020);
static_assert(offsetof(UCommonUIInputSettings, InputActions) == 0x0030);
static_assert(offsetof(UCommonUIInputSettings, ActionOverrides) == 0x0040);
static_assert(offsetof(UCommonUIInputSettings, AnalogCursorSettings) == 0x0050);
static_assert(offsetof(UCommonStyleSheet, Properties) == 0x0030);
static_assert(offsetof(UCommonStyleSheet, ImportedStyleSheets) == 0x0040);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionType) == 0x0168);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, TransitionCurveType) == 0x0169);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, WidgetList) == 0x0170);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, DisplayedWidget) == 0x0180);
static_assert(offsetof(UCommonActivatableWidgetContainerBase, GeneratedWidgetsPool) == 0x0188);
static_assert(offsetof(UCommonActivatableWidgetStack, RootContentWidgetClass) == 0x0270);
static_assert(offsetof(UCommonActivatableWidgetStack, RootContentWidget) == 0x0278);
static_assert(offsetof(FCommonInputActionHandlerData, InputActionRow) == 0x0000);
static_assert(offsetof(FCommonInputActionHandlerData, State) == 0x0010);
static_assert(offsetof(FRichTextIconData, DisplayName) == 0x0008);
static_assert(offsetof(FRichTextIconData, ResourceObject) == 0x0020);
static_assert(offsetof(FRichTextIconData, ImageSize) == 0x0050);
static_assert(offsetof(FCommonInputTypeInfo, Key) == 0x0000);
static_assert(offsetof(FCommonInputTypeInfo, OverrrideState) == 0x0018);
static_assert(offsetof(FCommonInputTypeInfo, OverrideBrush) == 0x0020);
static_assert(offsetof(FCommonInputActionDataBase, DisplayName) == 0x0008);
static_assert(offsetof(FCommonInputActionDataBase, HoldDisplayName) == 0x0020);
static_assert(offsetof(FCommonInputActionDataBase, KeyboardInputTypeInfo) == 0x0040);
static_assert(offsetof(FCommonInputActionDataBase, DefaultGamepadInputTypeInfo) == 0x0130);
static_assert(offsetof(FCommonInputActionDataBase, GamepadInputOverrides) == 0x0220);
static_assert(offsetof(FCommonInputActionDataBase, TouchInputTypeInfo) == 0x0270);
