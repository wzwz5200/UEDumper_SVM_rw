
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/SlateCore.ECheckBoxState
/// Size: 0x01 (1 bytes)
enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked                                                        = 0,
	ECheckBoxState__Checked                                                          = 1,
	ECheckBoxState__Undetermined                                                     = 2
};

/// Enum /Script/SlateCore.EWidgetClipping
/// Size: 0x01 (1 bytes)
enum class EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit                                                         = 0,
	EWidgetClipping__ClipToBounds                                                    = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting                                 = 2,
	EWidgetClipping__ClipToBoundsAlways                                              = 3,
	EWidgetClipping__OnDemand                                                        = 4
};

/// Enum /Script/SlateCore.ESlateBrushRoundingType
/// Size: 0x01 (1 bytes)
enum class ESlateBrushRoundingType : uint8_t
{
	ESlateBrushRoundingType__FixedRadius                                             = 0,
	ESlateBrushRoundingType__HalfHeightRadius                                        = 1
};

/// Enum /Script/SlateCore.ESlateColorStylingMode
/// Size: 0x01 (1 bytes)
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified                                       = 0,
	ESlateColorStylingMode__UseColor_ColorTable                                      = 1,
	ESlateColorStylingMode__UseColor_Foreground                                      = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued                              = 3,
	ESlateColorStylingMode__UseColor_UseStyle                                        = 4
};

/// Enum /Script/SlateCore.ESlateBrushImageType
/// Size: 0x01 (1 bytes)
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage                                                    = 0,
	ESlateBrushImageType__FullColor                                                  = 1,
	ESlateBrushImageType__Linear                                                     = 2,
	ESlateBrushImageType__Vector                                                     = 3
};

/// Enum /Script/SlateCore.ESlateBrushMirrorType
/// Size: 0x01 (1 bytes)
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror                                                  = 0,
	ESlateBrushMirrorType__Horizontal                                                = 1,
	ESlateBrushMirrorType__Vertical                                                  = 2,
	ESlateBrushMirrorType__Both                                                      = 3
};

/// Enum /Script/SlateCore.ESlateBrushTileType
/// Size: 0x01 (1 bytes)
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile                                                      = 0,
	ESlateBrushTileType__Horizontal                                                  = 1,
	ESlateBrushTileType__Vertical                                                    = 2,
	ESlateBrushTileType__Both                                                        = 3
};

/// Enum /Script/SlateCore.ESlateBrushDrawType
/// Size: 0x01 (1 bytes)
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType                                                  = 0,
	ESlateBrushDrawType__Box                                                         = 1,
	ESlateBrushDrawType__Border                                                      = 2,
	ESlateBrushDrawType__Image                                                       = 3,
	ESlateBrushDrawType__RoundedBox                                                  = 4
};

/// Enum /Script/SlateCore.EUINavigationRule
/// Size: 0x01 (1 bytes)
enum class EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape                                                        = 0,
	EUINavigationRule__Explicit                                                      = 1,
	EUINavigationRule__Wrap                                                          = 2,
	EUINavigationRule__Stop                                                          = 3,
	EUINavigationRule__Custom                                                        = 4,
	EUINavigationRule__CustomBoundary                                                = 5,
	EUINavigationRule__Invalid                                                       = 6
};

/// Enum /Script/SlateCore.EUINavigation
/// Size: 0x01 (1 bytes)
enum class EUINavigation : uint8_t
{
	EUINavigation__Left                                                              = 0,
	EUINavigation__Right                                                             = 1,
	EUINavigation__Up                                                                = 2,
	EUINavigation__Down                                                              = 3,
	EUINavigation__Next                                                              = 4,
	EUINavigation__Previous                                                          = 5,
	EUINavigation__Num                                                               = 6,
	EUINavigation__Invalid                                                           = 7
};

/// Enum /Script/SlateCore.EFlowDirectionPreference
/// Size: 0x01 (1 bytes)
enum class EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit                                                = 0,
	EFlowDirectionPreference__Culture                                                = 1,
	EFlowDirectionPreference__LeftToRight                                            = 2,
	EFlowDirectionPreference__RightToLeft                                            = 3
};

/// Enum /Script/SlateCore.ESelectInfo
/// Size: 0x01 (1 bytes)
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress                                                          = 0,
	ESelectInfo__OnNavigation                                                        = 1,
	ESelectInfo__OnMouseClick                                                        = 2,
	ESelectInfo__Direct                                                              = 3
};

/// Enum /Script/SlateCore.EVerticalAlignment
/// Size: 0x01 (1 bytes)
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                                                                      = 0,
	VAlign_Top                                                                       = 1,
	VAlign_Center                                                                    = 2,
	VAlign_Bottom                                                                    = 3
};

/// Enum /Script/SlateCore.ETextCommit
/// Size: 0x01 (1 bytes)
enum class ETextCommit : uint8_t
{
	ETextCommit__Default                                                             = 0,
	ETextCommit__OnEnter                                                             = 1,
	ETextCommit__OnUserMovedFocus                                                    = 2,
	ETextCommit__OnCleared                                                           = 3
};

/// Enum /Script/SlateCore.ETextOverflowPolicy
/// Size: 0x01 (1 bytes)
enum class ETextOverflowPolicy : uint8_t
{
	ETextOverflowPolicy__Clip                                                        = 0,
	ETextOverflowPolicy__Ellipsis                                                    = 1
};

/// Enum /Script/SlateCore.ETextShapingMethod
/// Size: 0x01 (1 bytes)
enum class ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto                                                         = 0,
	ETextShapingMethod__KerningOnly                                                  = 1,
	ETextShapingMethod__FullShaping                                                  = 2
};

/// Enum /Script/SlateCore.ETextTransformPolicy
/// Size: 0x01 (1 bytes)
enum class ETextTransformPolicy : uint8_t
{
	ETextTransformPolicy__None                                                       = 0,
	ETextTransformPolicy__ToLower                                                    = 1,
	ETextTransformPolicy__ToUpper                                                    = 2
};

/// Enum /Script/SlateCore.EMenuPlacement
/// Size: 0x01 (1 bytes)
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor                                                        = 0,
	MenuPlacement_CenteredBelowAnchor                                                = 1,
	MenuPlacement_BelowRightAnchor                                                   = 2,
	MenuPlacement_ComboBox                                                           = 3,
	MenuPlacement_ComboBoxRight                                                      = 4,
	MenuPlacement_MenuRight                                                          = 5,
	MenuPlacement_AboveAnchor                                                        = 6,
	MenuPlacement_CenteredAboveAnchor                                                = 7,
	MenuPlacement_AboveRightAnchor                                                   = 8,
	MenuPlacement_MenuLeft                                                           = 9,
	MenuPlacement_Center                                                             = 10,
	MenuPlacement_RightLeftCenter                                                    = 11,
	MenuPlacement_MatchBottomLeft                                                    = 12
};

/// Enum /Script/SlateCore.EColorVisionDeficiency
/// Size: 0x01 (1 bytes)
enum class EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision                                             = 0,
	EColorVisionDeficiency__Deuteranope                                              = 1,
	EColorVisionDeficiency__Protanope                                                = 2,
	EColorVisionDeficiency__Tritanope                                                = 3
};

/// Enum /Script/SlateCore.EButtonClickMethod
/// Size: 0x01 (1 bytes)
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp                                                    = 0,
	EButtonClickMethod__MouseDown                                                    = 1,
	EButtonClickMethod__MouseUp                                                      = 2,
	EButtonClickMethod__PreciseClick                                                 = 3
};

/// Enum /Script/SlateCore.EButtonPressMethod
/// Size: 0x01 (1 bytes)
enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp                                                    = 0,
	EButtonPressMethod__ButtonPress                                                  = 1,
	EButtonPressMethod__ButtonRelease                                                = 2
};

/// Enum /Script/SlateCore.EButtonTouchMethod
/// Size: 0x01 (1 bytes)
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp                                                    = 0,
	EButtonTouchMethod__Down                                                         = 1,
	EButtonTouchMethod__PreciseTap                                                   = 2
};

/// Enum /Script/SlateCore.EConsumeMouseWheel
/// Size: 0x01 (1 bytes)
enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible                                        = 0,
	EConsumeMouseWheel__Always                                                       = 1,
	EConsumeMouseWheel__Never                                                        = 2
};

/// Enum /Script/SlateCore.EOrientation
/// Size: 0x01 (1 bytes)
enum class EOrientation : uint8_t
{
	Orient_Horizontal                                                                = 0,
	Orient_Vertical                                                                  = 1
};

/// Enum /Script/SlateCore.EHorizontalAlignment
/// Size: 0x01 (1 bytes)
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                                                                      = 0,
	HAlign_Left                                                                      = 1,
	HAlign_Center                                                                    = 2,
	HAlign_Right                                                                     = 3
};

/// Enum /Script/SlateCore.EUINavigationAction
/// Size: 0x01 (1 bytes)
enum class EUINavigationAction : uint8_t
{
	EUINavigationAction__Accept                                                      = 0,
	EUINavigationAction__Back                                                        = 1,
	EUINavigationAction__Num                                                         = 2,
	EUINavigationAction__Invalid                                                     = 3
};

/// Enum /Script/SlateCore.ENavigationSource
/// Size: 0x01 (1 bytes)
enum class ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget                                                 = 0,
	ENavigationSource__WidgetUnderCursor                                             = 1
};

/// Enum /Script/SlateCore.ENavigationGenesis
/// Size: 0x01 (1 bytes)
enum class ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard                                                     = 0,
	ENavigationGenesis__Controller                                                   = 1,
	ENavigationGenesis__User                                                         = 2
};

/// Enum /Script/SlateCore.EScrollDirection
/// Size: 0x01 (1 bytes)
enum class EScrollDirection : uint8_t
{
	Scroll_Down                                                                      = 0,
	Scroll_Up                                                                        = 1
};

/// Enum /Script/SlateCore.ESlateDebuggingInputEvent
/// Size: 0x01 (1 bytes)
enum class ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove                                             = 0,
	ESlateDebuggingInputEvent__MouseEnter                                            = 1,
	ESlateDebuggingInputEvent__MouseLeave                                            = 2,
	ESlateDebuggingInputEvent__PreviewMouseButtonDown                                = 3,
	ESlateDebuggingInputEvent__MouseButtonDown                                       = 4,
	ESlateDebuggingInputEvent__MouseButtonUp                                         = 5,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick                                = 6,
	ESlateDebuggingInputEvent__MouseWheel                                            = 7,
	ESlateDebuggingInputEvent__TouchStart                                            = 8,
	ESlateDebuggingInputEvent__TouchEnd                                              = 9,
	ESlateDebuggingInputEvent__TouchForceChanged                                     = 10,
	ESlateDebuggingInputEvent__TouchFirstMove                                        = 11,
	ESlateDebuggingInputEvent__TouchMoved                                            = 12,
	ESlateDebuggingInputEvent__DragDetected                                          = 13,
	ESlateDebuggingInputEvent__DragEnter                                             = 14,
	ESlateDebuggingInputEvent__DragLeave                                             = 15,
	ESlateDebuggingInputEvent__DragOver                                              = 16,
	ESlateDebuggingInputEvent__DragDrop                                              = 17,
	ESlateDebuggingInputEvent__DropMessage                                           = 18,
	ESlateDebuggingInputEvent__PreviewKeyDown                                        = 19,
	ESlateDebuggingInputEvent__KeyDown                                               = 20,
	ESlateDebuggingInputEvent__KeyUp                                                 = 21,
	ESlateDebuggingInputEvent__KeyChar                                               = 22,
	ESlateDebuggingInputEvent__AnalogInput                                           = 23,
	ESlateDebuggingInputEvent__TouchGesture                                          = 24,
	ESlateDebuggingInputEvent__MotionDetected                                        = 25
};

/// Enum /Script/SlateCore.ESlateDebuggingStateChangeEvent
/// Size: 0x01 (1 bytes)
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained                              = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost                                = 1
};

/// Enum /Script/SlateCore.ESlateDebuggingNavigationMethod
/// Size: 0x01 (1 bytes)
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown                                         = 0,
	ESlateDebuggingNavigationMethod__Explicit                                        = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound                             = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound                           = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious                                  = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid                                     = 5
};

/// Enum /Script/SlateCore.ESlateDebuggingFocusEvent
/// Size: 0x01 (1 bytes)
enum class ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging                                         = 0,
	ESlateDebuggingFocusEvent__FocusLost                                             = 1,
	ESlateDebuggingFocusEvent__FocusReceived                                         = 2
};

/// Enum /Script/SlateCore.EFontHinting
/// Size: 0x01 (1 bytes)
enum class EFontHinting : uint8_t
{
	EFontHinting__Default                                                            = 0,
	EFontHinting__Auto                                                               = 1,
	EFontHinting__AutoLight                                                          = 2,
	EFontHinting__Monochrome                                                         = 3,
	EFontHinting__None                                                               = 4
};

/// Enum /Script/SlateCore.EFontLoadingPolicy
/// Size: 0x01 (1 bytes)
enum class EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad                                                     = 0,
	EFontLoadingPolicy__Stream                                                       = 1,
	EFontLoadingPolicy__Inline                                                       = 2
};

/// Enum /Script/SlateCore.EFontLayoutMethod
/// Size: 0x01 (1 bytes)
enum class EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics                                                       = 0,
	EFontLayoutMethod__BoundingBox                                                   = 1
};

/// Enum /Script/SlateCore.EFocusCause
/// Size: 0x01 (1 bytes)
enum class EFocusCause : uint8_t
{
	EFocusCause__Mouse                                                               = 0,
	EFocusCause__Navigation                                                          = 1,
	EFocusCause__SetDirectly                                                         = 2,
	EFocusCause__Cleared                                                             = 3,
	EFocusCause__OtherWidgetLostFocus                                                = 4,
	EFocusCause__WindowActivate                                                      = 5
};

/// Enum /Script/SlateCore.ESlateParentWindowSearchMethod
/// Size: 0x01 (1 bytes)
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow                                     = 0,
	ESlateParentWindowSearchMethod__MainWindow                                       = 1
};

/// Enum /Script/SlateCore.ESlateCheckBoxType
/// Size: 0x01 (1 bytes)
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox                                                     = 0,
	ESlateCheckBoxType__ToggleButton                                                 = 1
};

/// Enum /Script/SlateCore.EStyleColor
/// Size: 0x01 (1 bytes)
enum class EStyleColor : uint8_t
{
	EStyleColor__Black                                                               = 0,
	EStyleColor__Background                                                          = 1,
	EStyleColor__Title                                                               = 2,
	EStyleColor__WindowBorder                                                        = 3,
	EStyleColor__Foldout                                                             = 4,
	EStyleColor__Input                                                               = 5,
	EStyleColor__InputOutline                                                        = 6,
	EStyleColor__Recessed                                                            = 7,
	EStyleColor__Panel                                                               = 8,
	EStyleColor__Header                                                              = 9,
	EStyleColor__Dropdown                                                            = 10,
	EStyleColor__DropdownOutline                                                     = 11,
	EStyleColor__Hover                                                               = 12,
	EStyleColor__Hover2                                                              = 13,
	EStyleColor__White                                                               = 14,
	EStyleColor__White25                                                             = 15,
	EStyleColor__Highlight                                                           = 16,
	EStyleColor__Primary                                                             = 17,
	EStyleColor__PrimaryHover                                                        = 18,
	EStyleColor__PrimaryPress                                                        = 19,
	EStyleColor__Secondary                                                           = 20,
	EStyleColor__Foreground                                                          = 21,
	EStyleColor__ForegroundHover                                                     = 22,
	EStyleColor__ForegroundInverted                                                  = 23,
	EStyleColor__ForegroundHeader                                                    = 24,
	EStyleColor__Select                                                              = 25,
	EStyleColor__SelectInactive                                                      = 26,
	EStyleColor__SelectParent                                                        = 27,
	EStyleColor__SelectHover                                                         = 28,
	EStyleColor__Notifications                                                       = 29,
	EStyleColor__AccentBlue                                                          = 30,
	EStyleColor__AccentPurple                                                        = 31,
	EStyleColor__AccentPink                                                          = 32,
	EStyleColor__AccentRed                                                           = 33,
	EStyleColor__AccentOrange                                                        = 34,
	EStyleColor__AccentYellow                                                        = 35,
	EStyleColor__AccentGreen                                                         = 36,
	EStyleColor__AccentBrown                                                         = 37,
	EStyleColor__AccentBlack                                                         = 38,
	EStyleColor__AccentGray                                                          = 39,
	EStyleColor__AccentWhite                                                         = 40,
	EStyleColor__AccentFolder                                                        = 41,
	EStyleColor__Warning                                                             = 42,
	EStyleColor__Error                                                               = 43,
	EStyleColor__Success                                                             = 44,
	EStyleColor__User1                                                               = 45,
	EStyleColor__User2                                                               = 46,
	EStyleColor__User3                                                               = 47,
	EStyleColor__User4                                                               = 48,
	EStyleColor__User5                                                               = 49,
	EStyleColor__User6                                                               = 50,
	EStyleColor__User7                                                               = 51,
	EStyleColor__User8                                                               = 52,
	EStyleColor__User9                                                               = 53,
	EStyleColor__User10                                                              = 54,
	EStyleColor__User11                                                              = 55,
	EStyleColor__User12                                                              = 56,
	EStyleColor__User13                                                              = 57,
	EStyleColor__User14                                                              = 58,
	EStyleColor__User15                                                              = 59,
	EStyleColor__User16                                                              = 60
};

/// Class /Script/SlateCore.SlateWidgetStyleAsset
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class USlateWidgetStyleAsset : public UObject
{ 
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                                // 0x0028   (0x0008)  
};

/// Class /Script/SlateCore.FontBulkData
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UFontBulkData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0028   (0x0050)  MISSED
};

/// Class /Script/SlateCore.FontFaceInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFontFaceInterface : public UInterface
{ 
public:
};

/// Class /Script/SlateCore.FontProviderInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UFontProviderInterface : public UInterface
{ 
public:
};

/// Class /Script/SlateCore.SlateTypes
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USlateTypes : public UObject
{ 
public:
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerBase
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class USlateWidgetStyleContainerBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USlateWidgetStyleContainerInterface : public UInterface
{ 
public:
};

/// Struct /Script/SlateCore.StyleColorList
/// Size: 0x0988 (2440 bytes) (0x000000 - 0x000988) align 8 MaxSize: 0x0988
struct FStyleColorList
{ 
	FLinearColor                                       StyleColors[61];                                            // 0x0000   (0x03D0)  
	unsigned char                                      UnknownData00_7[0x5B8];                                     // 0x03D0   (0x05B8)  MISSED
};

/// Class /Script/SlateCore.SlateThemeManager
/// Size: 0x09C0 (2496 bytes) (0x000028 - 0x0009C0) align 8 MaxSize: 0x09C0
class USlateThemeManager : public UObject
{ 
public:
	FGuid                                              CurrentThemeId;                                             // 0x0028   (0x0010)  
	FStyleColorList                                    ActiveColors;                                               // 0x0038   (0x0988)  
};

/// Struct /Script/SlateCore.Geometry
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FGeometry
{ 
	unsigned char                                      UnknownData00_2[0x38];                                      // 0x0000   (0x0038)  MISSED
};

/// Struct /Script/SlateCore.DeprecateSlateVector2D
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 4 MaxSize: 0x0008
struct FDeprecateSlateVector2D : FVector2f
{ 
};

/// Struct /Script/SlateCore.Margin
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMargin
{ 
	float                                              Left;                                                       // 0x0000   (0x0004)  
	float                                              Top;                                                        // 0x0004   (0x0004)  
	float                                              Right;                                                      // 0x0008   (0x0004)  
	float                                              Bottom;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/SlateCore.SlateColor
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FSlateColor
{ 
	FLinearColor                                       SpecifiedColor;                                             // 0x0000   (0x0010)  
	ESlateColorStylingMode                             ColorUseRule;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/SlateCore.SlateBrushOutlineSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FSlateBrushOutlineSettings
{ 
	FVector4                                           CornerRadii;                                                // 0x0000   (0x0020)  
	FSlateColor                                        Color;                                                      // 0x0020   (0x0014)  
	float                                              Width;                                                      // 0x0034   (0x0004)  
	TEnumAsByte<ESlateBrushRoundingType>               RoundingType;                                               // 0x0038   (0x0001)  
	bool                                               bUseBrushTransparency;                                      // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x003A   (0x0006)  MISSED
};

/// Struct /Script/SlateCore.SlateBrush
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FSlateBrush
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	bool                                               bIsDynamicallyLoaded : 1;                                   // 0x0010:0 (0x0001)  
	bool                                               bHasUObject : 1;                                            // 0x0010:1 (0x0001)  
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                     // 0x0011   (0x0001)  
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                     // 0x0012   (0x0001)  
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                  // 0x0013   (0x0001)  
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FDeprecateSlateVector2D                            ImageSize;                                                  // 0x0018   (0x0008)  
	FMargin                                            Margin;                                                     // 0x0020   (0x0010)  
	FSlateColor                                        TintColor;                                                  // 0x0030   (0x0014)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0044   (0x000C)  MISSED
	FSlateBrushOutlineSettings                         OutlineSettings;                                            // 0x0050   (0x0040)  
	class UObject*                                     ResourceObject;                                             // 0x0090   (0x0008)  
	FName                                              ResourceName;                                               // 0x0098   (0x0008)  
	FBox2f                                             UVRegion;                                                   // 0x00A0   (0x0014)  
	unsigned char                                      UnknownData03_7[0x1C];                                      // 0x00B4   (0x001C)  MISSED
};

/// Struct /Script/SlateCore.InputEvent
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInputEvent
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Struct /Script/SlateCore.PointerEvent
/// Size: 0x0078 (120 bytes) (0x000020 - 0x000078) align 8 MaxSize: 0x0078
struct FPointerEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0020   (0x0058)  MISSED
};

/// Struct /Script/SlateCore.SlateWidgetStyle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.ScrollBarStyle
/// Size: 0x0770 (1904 bytes) (0x000008 - 0x000770) align 16 MaxSize: 0x0770
struct FScrollBarStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        HorizontalBackgroundImage;                                  // 0x0010   (0x00D0)  
	FSlateBrush                                        VerticalBackgroundImage;                                    // 0x00E0   (0x00D0)  
	FSlateBrush                                        VerticalTopSlotImage;                                       // 0x01B0   (0x00D0)  
	FSlateBrush                                        HorizontalTopSlotImage;                                     // 0x0280   (0x00D0)  
	FSlateBrush                                        VerticalBottomSlotImage;                                    // 0x0350   (0x00D0)  
	FSlateBrush                                        HorizontalBottomSlotImage;                                  // 0x0420   (0x00D0)  
	FSlateBrush                                        NormalThumbImage;                                           // 0x04F0   (0x00D0)  
	FSlateBrush                                        HoveredThumbImage;                                          // 0x05C0   (0x00D0)  
	FSlateBrush                                        DraggedThumbImage;                                          // 0x0690   (0x00D0)  
	float                                              Thickness;                                                  // 0x0760   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0764   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.TableRowStyle
/// Size: 0x0D50 (3408 bytes) (0x000008 - 0x000D50) align 16 MaxSize: 0x0D50
struct FTableRowStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        SelectorFocusedBrush;                                       // 0x0010   (0x00D0)  
	FSlateBrush                                        ActiveHoveredBrush;                                         // 0x00E0   (0x00D0)  
	FSlateBrush                                        ActiveBrush;                                                // 0x01B0   (0x00D0)  
	FSlateBrush                                        InactiveHoveredBrush;                                       // 0x0280   (0x00D0)  
	FSlateBrush                                        InactiveBrush;                                              // 0x0350   (0x00D0)  
	bool                                               bUseParentRowBrush;                                         // 0x0420   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0421   (0x000F)  MISSED
	FSlateBrush                                        ParentRowBackgroundBrush;                                   // 0x0430   (0x00D0)  
	FSlateBrush                                        ParentRowBackgroundHoveredBrush;                            // 0x0500   (0x00D0)  
	FSlateBrush                                        EvenRowBackgroundHoveredBrush;                              // 0x05D0   (0x00D0)  
	FSlateBrush                                        EvenRowBackgroundBrush;                                     // 0x06A0   (0x00D0)  
	FSlateBrush                                        OddRowBackgroundHoveredBrush;                               // 0x0770   (0x00D0)  
	FSlateBrush                                        OddRowBackgroundBrush;                                      // 0x0840   (0x00D0)  
	FSlateColor                                        TextColor;                                                  // 0x0910   (0x0014)  
	FSlateColor                                        SelectedTextColor;                                          // 0x0924   (0x0014)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0938   (0x0008)  MISSED
	FSlateBrush                                        DropIndicator_Above;                                        // 0x0940   (0x00D0)  
	FSlateBrush                                        DropIndicator_Onto;                                         // 0x0A10   (0x00D0)  
	FSlateBrush                                        DropIndicator_Below;                                        // 0x0AE0   (0x00D0)  
	FSlateBrush                                        ActiveHighlightedBrush;                                     // 0x0BB0   (0x00D0)  
	FSlateBrush                                        InactiveHighlightedBrush;                                   // 0x0C80   (0x00D0)  
};

/// Struct /Script/SlateCore.SlateSound
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FSlateSound
{ 
	class UObject*                                     ResourceObject;                                             // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0008   (0x0010)  MISSED
};

/// Struct /Script/SlateCore.ButtonStyle
/// Size: 0x03F0 (1008 bytes) (0x000008 - 0x0003F0) align 16 MaxSize: 0x03F0
struct FButtonStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        Normal;                                                     // 0x0010   (0x00D0)  
	FSlateBrush                                        Hovered;                                                    // 0x00E0   (0x00D0)  
	FSlateBrush                                        Pressed;                                                    // 0x01B0   (0x00D0)  
	FSlateBrush                                        Disabled;                                                   // 0x0280   (0x00D0)  
	FSlateColor                                        NormalForeground;                                           // 0x0350   (0x0014)  
	FSlateColor                                        HoveredForeground;                                          // 0x0364   (0x0014)  
	FSlateColor                                        PressedForeground;                                          // 0x0378   (0x0014)  
	FSlateColor                                        DisabledForeground;                                         // 0x038C   (0x0014)  
	FMargin                                            NormalPadding;                                              // 0x03A0   (0x0010)  
	FMargin                                            PressedPadding;                                             // 0x03B0   (0x0010)  
	FSlateSound                                        PressedSlateSound;                                          // 0x03C0   (0x0018)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x03D8   (0x0018)  
};

/// Struct /Script/SlateCore.ComboButtonStyle
/// Size: 0x0600 (1536 bytes) (0x000008 - 0x000600) align 16 MaxSize: 0x0600
struct FComboButtonStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       ButtonStyle;                                                // 0x0010   (0x03F0)  
	FSlateBrush                                        DownArrowImage;                                             // 0x0400   (0x00D0)  
	FDeprecateSlateVector2D                            ShadowOffset;                                               // 0x04D0   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x04D8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x04E8   (0x0008)  MISSED
	FSlateBrush                                        MenuBorderBrush;                                            // 0x04F0   (0x00D0)  
	FMargin                                            MenuBorderPadding;                                          // 0x05C0   (0x0010)  
	FMargin                                            ContentPadding;                                             // 0x05D0   (0x0010)  
	FMargin                                            DownArrowPadding;                                           // 0x05E0   (0x0010)  
	TEnumAsByte<EVerticalAlignment>                    DownArrowAlign;                                             // 0x05F0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x05F1   (0x000F)  MISSED
};

/// Struct /Script/SlateCore.ComboBoxStyle
/// Size: 0x0660 (1632 bytes) (0x000008 - 0x000660) align 16 MaxSize: 0x0660
struct FComboBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x0010   (0x0600)  
	FSlateSound                                        PressedSlateSound;                                          // 0x0610   (0x0018)  
	FSlateSound                                        SelectionChangeSlateSound;                                  // 0x0628   (0x0018)  
	FMargin                                            ContentPadding;                                             // 0x0640   (0x0010)  
	FMargin                                            MenuRowPadding;                                             // 0x0650   (0x0010)  
};

/// Struct /Script/SlateCore.FontOutlineSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FFontOutlineSettings
{ 
	int32_t                                            OutlineSize;                                                // 0x0000   (0x0004)  
	bool                                               bSeparateFillAlpha;                                         // 0x0004   (0x0001)  
	bool                                               bApplyOutlineToDropShadows;                                 // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	class UObject*                                     OutlineMaterial;                                            // 0x0008   (0x0008)  
	FLinearColor                                       OutlineColor;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/SlateCore.SlateFontInfo
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FSlateFontInfo
{ 
	class UObject*                                     FontObject;                                                 // 0x0000   (0x0008)  
	class UObject*                                     FontMaterial;                                               // 0x0008   (0x0008)  
	FFontOutlineSettings                               OutlineSettings;                                            // 0x0010   (0x0020)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0030   (0x0010)  MISSED
	FName                                              TypefaceFontName;                                           // 0x0040   (0x0008)  
	int32_t                                            Size;                                                       // 0x0048   (0x0004)  
	int32_t                                            LetterSpacing;                                              // 0x004C   (0x0004)  
	float                                              SkewAmount;                                                 // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.EditableTextStyle
/// Size: 0x02F0 (752 bytes) (0x000008 - 0x0002F0) align 16 MaxSize: 0x02F0
struct FEditableTextStyle : FSlateWidgetStyle
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0058)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0060   (0x0014)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0074   (0x000C)  MISSED
	FSlateBrush                                        BackgroundImageSelected;                                    // 0x0080   (0x00D0)  
	FSlateBrush                                        BackgroundImageComposing;                                   // 0x0150   (0x00D0)  
	FSlateBrush                                        CaretImage;                                                 // 0x0220   (0x00D0)  
};

/// Struct /Script/SlateCore.TextBlockStyle
/// Size: 0x0340 (832 bytes) (0x000008 - 0x000340) align 16 MaxSize: 0x0340
struct FTextBlockStyle : FSlateWidgetStyle
{ 
	FSlateFontInfo                                     Font;                                                       // 0x0008   (0x0058)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0060   (0x0014)  
	FDeprecateSlateVector2D                            ShadowOffset;                                               // 0x0074   (0x0008)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x007C   (0x0010)  
	FSlateColor                                        SelectedBackgroundColor;                                    // 0x008C   (0x0014)  
	FSlateColor                                        HighlightColor;                                             // 0x00A0   (0x0014)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00B4   (0x000C)  MISSED
	FSlateBrush                                        HighlightShape;                                             // 0x00C0   (0x00D0)  
	FSlateBrush                                        StrikeBrush;                                                // 0x0190   (0x00D0)  
	FSlateBrush                                        UnderlineBrush;                                             // 0x0260   (0x00D0)  
	ETextTransformPolicy                               TransformPolicy;                                            // 0x0330   (0x0001)  
	ETextOverflowPolicy                                OverflowPolicy;                                             // 0x0331   (0x0001)  
	unsigned char                                      UnknownData01_7[0xE];                                       // 0x0332   (0x000E)  MISSED
};

/// Struct /Script/SlateCore.EditableTextBoxStyle
/// Size: 0x0E80 (3712 bytes) (0x000008 - 0x000E80) align 16 MaxSize: 0x0E80
struct FEditableTextBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundImageNormal;                                      // 0x0010   (0x00D0)  
	FSlateBrush                                        BackgroundImageHovered;                                     // 0x00E0   (0x00D0)  
	FSlateBrush                                        BackgroundImageFocused;                                     // 0x01B0   (0x00D0)  
	FSlateBrush                                        BackgroundImageReadOnly;                                    // 0x0280   (0x00D0)  
	FMargin                                            Padding;                                                    // 0x0350   (0x0010)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0360   (0x0340)  
	FSlateColor                                        ForegroundColor;                                            // 0x06A0   (0x0014)  
	FSlateColor                                        BackgroundColor;                                            // 0x06B4   (0x0014)  
	FSlateColor                                        ReadOnlyForegroundColor;                                    // 0x06C8   (0x0014)  
	FSlateColor                                        FocusedForegroundColor;                                     // 0x06DC   (0x0014)  
	FMargin                                            HScrollBarPadding;                                          // 0x06F0   (0x0010)  
	FMargin                                            VScrollBarPadding;                                          // 0x0700   (0x0010)  
	FScrollBarStyle                                    ScrollBarStyle;                                             // 0x0710   (0x0770)  
};

/// Struct /Script/SlateCore.SpinBoxStyle
/// Size: 0x0600 (1536 bytes) (0x000008 - 0x000600) align 16 MaxSize: 0x0600
struct FSpinBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0010   (0x00D0)  
	FSlateBrush                                        ActiveBackgroundBrush;                                      // 0x00E0   (0x00D0)  
	FSlateBrush                                        HoveredBackgroundBrush;                                     // 0x01B0   (0x00D0)  
	FSlateBrush                                        ActiveFillBrush;                                            // 0x0280   (0x00D0)  
	FSlateBrush                                        HoveredFillBrush;                                           // 0x0350   (0x00D0)  
	FSlateBrush                                        InactiveFillBrush;                                          // 0x0420   (0x00D0)  
	FSlateBrush                                        ArrowsImage;                                                // 0x04F0   (0x00D0)  
	FSlateColor                                        ForegroundColor;                                            // 0x05C0   (0x0014)  
	FMargin                                            TextPadding;                                                // 0x05D4   (0x0010)  
	FMargin                                            InsetPadding;                                               // 0x05E4   (0x0010)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x05F4   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.CharacterEvent
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FCharacterEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.KeyEvent
/// Size: 0x0040 (64 bytes) (0x000020 - 0x000040) align 8 MaxSize: 0x0040
struct FKeyEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0020   (0x0020)  MISSED
};

/// Struct /Script/SlateCore.NavigationEvent
/// Size: 0x0028 (40 bytes) (0x000020 - 0x000028) align 8 MaxSize: 0x0028
struct FNavigationEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.AnalogInputEvent
/// Size: 0x0048 (72 bytes) (0x000040 - 0x000048) align 8 MaxSize: 0x0048
struct FAnalogInputEvent : FKeyEvent
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0040   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.FocusEvent
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFocusEvent
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.MotionEvent
/// Size: 0x0080 (128 bytes) (0x000020 - 0x000080) align 8 MaxSize: 0x0080
struct FMotionEvent : FInputEvent
{ 
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0020   (0x0060)  MISSED
};

/// Struct /Script/SlateCore.TableViewStyle
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FTableViewStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0010   (0x00D0)  
};

/// Struct /Script/SlateCore.SliderStyle
/// Size: 0x0500 (1280 bytes) (0x000008 - 0x000500) align 16 MaxSize: 0x0500
struct FSliderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        NormalBarImage;                                             // 0x0010   (0x00D0)  
	FSlateBrush                                        HoveredBarImage;                                            // 0x00E0   (0x00D0)  
	FSlateBrush                                        DisabledBarImage;                                           // 0x01B0   (0x00D0)  
	FSlateBrush                                        NormalThumbImage;                                           // 0x0280   (0x00D0)  
	FSlateBrush                                        HoveredThumbImage;                                          // 0x0350   (0x00D0)  
	FSlateBrush                                        DisabledThumbImage;                                         // 0x0420   (0x00D0)  
	float                                              BarThickness;                                               // 0x04F0   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x04F4   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.FontData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FFontData
{ 
	FString                                            FontFilename;                                               // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0010   (0x0004)  MISSED
	EFontHinting                                       Hinting;                                                    // 0x0014   (0x0001)  
	EFontLoadingPolicy                                 LoadingPolicy;                                              // 0x0015   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	int32_t                                            SubFaceIndex;                                               // 0x0018   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UObject*                                     FontFaceAsset;                                              // 0x0020   (0x0008)  
};

/// Struct /Script/SlateCore.TypefaceEntry
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FTypefaceEntry
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FFontData                                          Font;                                                       // 0x0008   (0x0028)  
};

/// Struct /Script/SlateCore.Typeface
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FTypeface
{ 
	TArray<FTypefaceEntry>                             Fonts;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/SlateCore.CompositeFallbackFont
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FCompositeFallbackFont
{ 
	FTypeface                                          Typeface;                                                   // 0x0000   (0x0010)  
	float                                              ScalingFactor;                                              // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/SlateCore.CompositeSubFont
/// Size: 0x0038 (56 bytes) (0x000018 - 0x000038) align 8 MaxSize: 0x0038
struct FCompositeSubFont : FCompositeFallbackFont
{ 
	TArray<FInt32Range>                                CharacterRanges;                                            // 0x0018   (0x0010)  
	FString                                            Cultures;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/SlateCore.CompositeFont
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FCompositeFont
{ 
	FTypeface                                          DefaultTypeface;                                            // 0x0000   (0x0010)  
	FCompositeFallbackFont                             FallbackTypeface;                                           // 0x0010   (0x0018)  
	TArray<FCompositeSubFont>                          SubTypefaces;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/SlateCore.CaptureLostEvent
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FCaptureLostEvent
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.CheckBoxStyle
/// Size: 0x0AD0 (2768 bytes) (0x000008 - 0x000AD0) align 16 MaxSize: 0x0AD0
struct FCheckBoxStyle : FSlateWidgetStyle
{ 
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FSlateBrush                                        UncheckedImage;                                             // 0x0010   (0x00D0)  
	FSlateBrush                                        UncheckedHoveredImage;                                      // 0x00E0   (0x00D0)  
	FSlateBrush                                        UncheckedPressedImage;                                      // 0x01B0   (0x00D0)  
	FSlateBrush                                        CheckedImage;                                               // 0x0280   (0x00D0)  
	FSlateBrush                                        CheckedHoveredImage;                                        // 0x0350   (0x00D0)  
	FSlateBrush                                        CheckedPressedImage;                                        // 0x0420   (0x00D0)  
	FSlateBrush                                        UndeterminedImage;                                          // 0x04F0   (0x00D0)  
	FSlateBrush                                        UndeterminedHoveredImage;                                   // 0x05C0   (0x00D0)  
	FSlateBrush                                        UndeterminedPressedImage;                                   // 0x0690   (0x00D0)  
	FMargin                                            Padding;                                                    // 0x0760   (0x0010)  
	FSlateBrush                                        BackgroundImage;                                            // 0x0770   (0x00D0)  
	FSlateBrush                                        BackgroundHoveredImage;                                     // 0x0840   (0x00D0)  
	FSlateBrush                                        BackgroundPressedImage;                                     // 0x0910   (0x00D0)  
	FSlateColor                                        ForegroundColor;                                            // 0x09E0   (0x0014)  
	FSlateColor                                        HoveredForeground;                                          // 0x09F4   (0x0014)  
	FSlateColor                                        PressedForeground;                                          // 0x0A08   (0x0014)  
	FSlateColor                                        CheckedForeground;                                          // 0x0A1C   (0x0014)  
	FSlateColor                                        CheckedHoveredForeground;                                   // 0x0A30   (0x0014)  
	FSlateColor                                        CheckedPressedForeground;                                   // 0x0A44   (0x0014)  
	FSlateColor                                        UndeterminedForeground;                                     // 0x0A58   (0x0014)  
	FSlateColor                                        BorderBackgroundColor;                                      // 0x0A6C   (0x0014)  
	FSlateSound                                        CheckedSlateSound;                                          // 0x0A80   (0x0018)  
	FSlateSound                                        UncheckedSlateSound;                                        // 0x0A98   (0x0018)  
	FSlateSound                                        HoveredSlateSound;                                          // 0x0AB0   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0AC8   (0x0008)  MISSED
};

/// Struct /Script/SlateCore.SegmentedControlStyle
/// Size: 0x2160 (8544 bytes) (0x000008 - 0x002160) align 16 MaxSize: 0x2160
struct FSegmentedControlStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FCheckBoxStyle                                     ControlStyle;                                               // 0x0010   (0x0AD0)  
	FCheckBoxStyle                                     FirstControlStyle;                                          // 0x0AE0   (0x0AD0)  
	FCheckBoxStyle                                     LastControlStyle;                                           // 0x15B0   (0x0AD0)  
	FSlateBrush                                        BackgroundBrush;                                            // 0x2080   (0x00D0)  
	FMargin                                            UniformPadding;                                             // 0x2150   (0x0010)  
};

/// Struct /Script/SlateCore.HyperlinkStyle
/// Size: 0x0750 (1872 bytes) (0x000008 - 0x000750) align 16 MaxSize: 0x0750
struct FHyperlinkStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       UnderlineStyle;                                             // 0x0010   (0x03F0)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0400   (0x0340)  
	FMargin                                            Padding;                                                    // 0x0740   (0x0010)  
};

/// Struct /Script/SlateCore.InlineEditableTextBlockStyle
/// Size: 0x11D0 (4560 bytes) (0x000008 - 0x0011D0) align 16 MaxSize: 0x11D0
struct FInlineEditableTextBlockStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FEditableTextBoxStyle                              EditableTextBoxStyle;                                       // 0x0010   (0x0E80)  
	FTextBlockStyle                                    TextStyle;                                                  // 0x0E90   (0x0340)  
};

/// Struct /Script/SlateCore.ProgressBarStyle
/// Size: 0x0290 (656 bytes) (0x000008 - 0x000290) align 16 MaxSize: 0x0290
struct FProgressBarStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundImage;                                            // 0x0010   (0x00D0)  
	FSlateBrush                                        FillImage;                                                  // 0x00E0   (0x00D0)  
	FSlateBrush                                        MarqueeImage;                                               // 0x01B0   (0x00D0)  
	bool                                               EnableFillAnimation;                                        // 0x0280   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0281   (0x000F)  MISSED
};

/// Struct /Script/SlateCore.ExpandableAreaStyle
/// Size: 0x01C0 (448 bytes) (0x000008 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FExpandableAreaStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        CollapsedImage;                                             // 0x0010   (0x00D0)  
	FSlateBrush                                        ExpandedImage;                                              // 0x00E0   (0x00D0)  
	float                                              RolloutAnimationSeconds;                                    // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x01B4   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.SearchBoxStyle
/// Size: 0x1250 (4688 bytes) (0x000008 - 0x001250) align 16 MaxSize: 0x1250
struct FSearchBoxStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FEditableTextBoxStyle                              TextBoxStyle;                                               // 0x0010   (0x0E80)  
	FSlateFontInfo                                     ActiveFontInfo;                                             // 0x0E90   (0x0058)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0EE8   (0x0008)  MISSED
	FSlateBrush                                        UpArrowImage;                                               // 0x0EF0   (0x00D0)  
	FSlateBrush                                        DownArrowImage;                                             // 0x0FC0   (0x00D0)  
	FSlateBrush                                        GlassImage;                                                 // 0x1090   (0x00D0)  
	FSlateBrush                                        ClearImage;                                                 // 0x1160   (0x00D0)  
	FMargin                                            ImagePadding;                                               // 0x1230   (0x0010)  
	bool                                               bLeftAlignButtons;                                          // 0x1240   (0x0001)  
	bool                                               bLeftAlignSearchResultButtons;                              // 0x1241   (0x0001)  
	bool                                               bLeftAlignGlassImageAndClearButton;                         // 0x1242   (0x0001)  
	unsigned char                                      UnknownData02_7[0xD];                                       // 0x1243   (0x000D)  MISSED
};

/// Struct /Script/SlateCore.VolumeControlStyle
/// Size: 0x0920 (2336 bytes) (0x000008 - 0x000920) align 16 MaxSize: 0x0920
struct FVolumeControlStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSliderStyle                                       SliderStyle;                                                // 0x0010   (0x0500)  
	FSlateBrush                                        HighVolumeImage;                                            // 0x0510   (0x00D0)  
	FSlateBrush                                        MidVolumeImage;                                             // 0x05E0   (0x00D0)  
	FSlateBrush                                        LowVolumeImage;                                             // 0x06B0   (0x00D0)  
	FSlateBrush                                        NoVolumeImage;                                              // 0x0780   (0x00D0)  
	FSlateBrush                                        MutedImage;                                                 // 0x0850   (0x00D0)  
};

/// Struct /Script/SlateCore.InlineTextImageStyle
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FInlineTextImageStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        Image;                                                      // 0x0010   (0x00D0)  
	int16_t                                            Baseline;                                                   // 0x00E0   (0x0002)  
	unsigned char                                      UnknownData01_7[0xE];                                       // 0x00E2   (0x000E)  MISSED
};

/// Struct /Script/SlateCore.SplitterStyle
/// Size: 0x01B0 (432 bytes) (0x000008 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FSplitterStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        HandleNormalBrush;                                          // 0x0010   (0x00D0)  
	FSlateBrush                                        HandleHighlightBrush;                                       // 0x00E0   (0x00D0)  
};

/// Struct /Script/SlateCore.TableColumnHeaderStyle
/// Size: 0x0760 (1888 bytes) (0x000008 - 0x000760) align 16 MaxSize: 0x0760
struct FTableColumnHeaderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        SortPrimaryAscendingImage;                                  // 0x0010   (0x00D0)  
	FSlateBrush                                        SortPrimaryDescendingImage;                                 // 0x00E0   (0x00D0)  
	FSlateBrush                                        SortSecondaryAscendingImage;                                // 0x01B0   (0x00D0)  
	FSlateBrush                                        SortSecondaryDescendingImage;                               // 0x0280   (0x00D0)  
	FSlateBrush                                        NormalBrush;                                                // 0x0350   (0x00D0)  
	FSlateBrush                                        HoveredBrush;                                               // 0x0420   (0x00D0)  
	FSlateBrush                                        MenuDropdownImage;                                          // 0x04F0   (0x00D0)  
	FSlateBrush                                        MenuDropdownNormalBorderBrush;                              // 0x05C0   (0x00D0)  
	FSlateBrush                                        MenuDropdownHoveredBorderBrush;                             // 0x0690   (0x00D0)  
};

/// Struct /Script/SlateCore.HeaderRowStyle
/// Size: 0x1260 (4704 bytes) (0x000008 - 0x001260) align 16 MaxSize: 0x1260
struct FHeaderRowStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTableColumnHeaderStyle                            ColumnStyle;                                                // 0x0010   (0x0760)  
	FTableColumnHeaderStyle                            LastColumnStyle;                                            // 0x0770   (0x0760)  
	FSplitterStyle                                     ColumnSplitterStyle;                                        // 0x0ED0   (0x01B0)  
	float                                              SplitterHandleSize;                                         // 0x1080   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x1084   (0x000C)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x1090   (0x00D0)  
	FSlateColor                                        ForegroundColor;                                            // 0x1160   (0x0014)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x1174   (0x000C)  MISSED
	FSlateBrush                                        HorizontalSeparatorBrush;                                   // 0x1180   (0x00D0)  
	float                                              HorizontalSeparatorThickness;                               // 0x1250   (0x0004)  
	unsigned char                                      UnknownData03_7[0xC];                                       // 0x1254   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.DockTabStyle
/// Size: 0x0D80 (3456 bytes) (0x000008 - 0x000D80) align 16 MaxSize: 0x0D80
struct FDockTabStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       CloseButtonStyle;                                           // 0x0010   (0x03F0)  
	FSlateBrush                                        NormalBrush;                                                // 0x0400   (0x00D0)  
	FSlateBrush                                        ColorOverlayTabBrush;                                       // 0x04D0   (0x00D0)  
	FSlateBrush                                        ColorOverlayIconBrush;                                      // 0x05A0   (0x00D0)  
	FSlateBrush                                        ForegroundBrush;                                            // 0x0670   (0x00D0)  
	FSlateBrush                                        HoveredBrush;                                               // 0x0740   (0x00D0)  
	FSlateBrush                                        ContentAreaBrush;                                           // 0x0810   (0x00D0)  
	FSlateBrush                                        TabWellBrush;                                               // 0x08E0   (0x00D0)  
	FTextBlockStyle                                    TabTextStyle;                                               // 0x09B0   (0x0340)  
	FMargin                                            TabPadding;                                                 // 0x0CF0   (0x0010)  
	FDeprecateSlateVector2D                            IconSize;                                                   // 0x0D00   (0x0008)  
	float                                              OverlapWidth;                                               // 0x0D08   (0x0004)  
	FSlateColor                                        FlashColor;                                                 // 0x0D0C   (0x0014)  
	FSlateColor                                        NormalForegroundColor;                                      // 0x0D20   (0x0014)  
	FSlateColor                                        HoveredForegroundColor;                                     // 0x0D34   (0x0014)  
	FSlateColor                                        ActiveForegroundColor;                                      // 0x0D48   (0x0014)  
	FSlateColor                                        ForegroundForegroundColor;                                  // 0x0D5C   (0x0014)  
	float                                              IconBorderPadding;                                          // 0x0D70   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0D74   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.ScrollBoxStyle
/// Size: 0x0370 (880 bytes) (0x000008 - 0x000370) align 16 MaxSize: 0x0370
struct FScrollBoxStyle : FSlateWidgetStyle
{ 
	float                                              BarThickness;                                               // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FSlateBrush                                        TopShadowBrush;                                             // 0x0010   (0x00D0)  
	FSlateBrush                                        BottomShadowBrush;                                          // 0x00E0   (0x00D0)  
	FSlateBrush                                        LeftShadowBrush;                                            // 0x01B0   (0x00D0)  
	FSlateBrush                                        RightShadowBrush;                                           // 0x0280   (0x00D0)  
	FMargin                                            HorizontalScrolledContentPadding;                           // 0x0350   (0x0010)  
	FMargin                                            VerticalScrolledContentPadding;                             // 0x0360   (0x0010)  
};

/// Struct /Script/SlateCore.ScrollBorderStyle
/// Size: 0x01B0 (432 bytes) (0x000008 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FScrollBorderStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        TopShadowBrush;                                             // 0x0010   (0x00D0)  
	FSlateBrush                                        BottomShadowBrush;                                          // 0x00E0   (0x00D0)  
};

/// Struct /Script/SlateCore.WindowStyle
/// Size: 0x1940 (6464 bytes) (0x000008 - 0x001940) align 16 MaxSize: 0x1940
struct FWindowStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FButtonStyle                                       MinimizeButtonStyle;                                        // 0x0010   (0x03F0)  
	FButtonStyle                                       MaximizeButtonStyle;                                        // 0x0400   (0x03F0)  
	FButtonStyle                                       RestoreButtonStyle;                                         // 0x07F0   (0x03F0)  
	FButtonStyle                                       CloseButtonStyle;                                           // 0x0BE0   (0x03F0)  
	FTextBlockStyle                                    TitleTextStyle;                                             // 0x0FD0   (0x0340)  
	FSlateBrush                                        ActiveTitleBrush;                                           // 0x1310   (0x00D0)  
	FSlateBrush                                        InactiveTitleBrush;                                         // 0x13E0   (0x00D0)  
	FSlateBrush                                        FlashTitleBrush;                                            // 0x14B0   (0x00D0)  
	FSlateColor                                        BackgroundColor;                                            // 0x1580   (0x0014)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x1594   (0x000C)  MISSED
	FSlateBrush                                        OutlineBrush;                                               // 0x15A0   (0x00D0)  
	FSlateColor                                        OutlineColor;                                               // 0x1670   (0x0014)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x1684   (0x000C)  MISSED
	FSlateBrush                                        BorderBrush;                                                // 0x1690   (0x00D0)  
	FSlateColor                                        BorderColor;                                                // 0x1760   (0x0014)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x1774   (0x000C)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x1780   (0x00D0)  
	FSlateBrush                                        ChildBackgroundBrush;                                       // 0x1850   (0x00D0)  
	int32_t                                            WindowCornerRadius;                                         // 0x1920   (0x0004)  
	FMargin                                            BorderPadding;                                              // 0x1924   (0x0010)  
	unsigned char                                      UnknownData04_7[0xC];                                       // 0x1934   (0x000C)  MISSED
};

/// Struct /Script/SlateCore.StyleTheme
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FStyleTheme
{ 
	unsigned char                                      UnknownData00_2[0x48];                                      // 0x0000   (0x0048)  MISSED
};

/// Struct /Script/SlateCore.ToolBarStyle
/// Size: 0x3E50 (15952 bytes) (0x000008 - 0x003E50) align 16 MaxSize: 0x3E50
struct FToolBarStyle : FSlateWidgetStyle
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FSlateBrush                                        BackgroundBrush;                                            // 0x0010   (0x00D0)  
	FSlateBrush                                        ExpandBrush;                                                // 0x00E0   (0x00D0)  
	FSlateBrush                                        SeparatorBrush;                                             // 0x01B0   (0x00D0)  
	FTextBlockStyle                                    LabelStyle;                                                 // 0x0280   (0x0340)  
	FEditableTextBoxStyle                              EditableTextStyle;                                          // 0x05C0   (0x0E80)  
	FCheckBoxStyle                                     ToggleButton;                                               // 0x1440   (0x0AD0)  
	FComboButtonStyle                                  ComboButtonStyle;                                           // 0x1F10   (0x0600)  
	FButtonStyle                                       SettingsButtonStyle;                                        // 0x2510   (0x03F0)  
	FComboButtonStyle                                  SettingsComboButton;                                        // 0x2900   (0x0600)  
	FCheckBoxStyle                                     SettingsToggleButton;                                       // 0x2F00   (0x0AD0)  
	FButtonStyle                                       ButtonStyle;                                                // 0x39D0   (0x03F0)  
	FMargin                                            LabelPadding;                                               // 0x3DC0   (0x0010)  
	FMargin                                            SeparatorPadding;                                           // 0x3DD0   (0x0010)  
	FMargin                                            ComboButtonPadding;                                         // 0x3DE0   (0x0010)  
	FMargin                                            ButtonPadding;                                              // 0x3DF0   (0x0010)  
	FMargin                                            CheckBoxPadding;                                            // 0x3E00   (0x0010)  
	FMargin                                            BlockPadding;                                               // 0x3E10   (0x0010)  
	FMargin                                            IndentedBlockPadding;                                       // 0x3E20   (0x0010)  
	FMargin                                            BackgroundPadding;                                          // 0x3E30   (0x0010)  
	FDeprecateSlateVector2D                            IconSize;                                                   // 0x3E40   (0x0008)  
	bool                                               bShowLabels;                                                // 0x3E48   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x3E49   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(USlateWidgetStyleAsset) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UFontBulkData) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UFontFaceInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UFontProviderInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USlateTypes) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USlateWidgetStyleContainerBase) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(USlateWidgetStyleContainerInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FStyleColorList) == 0x0988); // 2440 bytes (0x000000 - 0x000988)
static_assert(sizeof(USlateThemeManager) == 0x09C0); // 2496 bytes (0x000028 - 0x0009C0)
static_assert(sizeof(FGeometry) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FDeprecateSlateVector2D) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FMargin) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSlateColor) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FSlateBrushOutlineSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FSlateBrush) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FInputEvent) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FPointerEvent) == 0x0078); // 120 bytes (0x000020 - 0x000078)
static_assert(sizeof(FSlateWidgetStyle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FScrollBarStyle) == 0x0770); // 1904 bytes (0x000008 - 0x000770)
static_assert(sizeof(FTableRowStyle) == 0x0D50); // 3408 bytes (0x000008 - 0x000D50)
static_assert(sizeof(FSlateSound) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FButtonStyle) == 0x03F0); // 1008 bytes (0x000008 - 0x0003F0)
static_assert(sizeof(FComboButtonStyle) == 0x0600); // 1536 bytes (0x000008 - 0x000600)
static_assert(sizeof(FComboBoxStyle) == 0x0660); // 1632 bytes (0x000008 - 0x000660)
static_assert(sizeof(FFontOutlineSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSlateFontInfo) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FEditableTextStyle) == 0x02F0); // 752 bytes (0x000008 - 0x0002F0)
static_assert(sizeof(FTextBlockStyle) == 0x0340); // 832 bytes (0x000008 - 0x000340)
static_assert(sizeof(FEditableTextBoxStyle) == 0x0E80); // 3712 bytes (0x000008 - 0x000E80)
static_assert(sizeof(FSpinBoxStyle) == 0x0600); // 1536 bytes (0x000008 - 0x000600)
static_assert(sizeof(FCharacterEvent) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FKeyEvent) == 0x0040); // 64 bytes (0x000020 - 0x000040)
static_assert(sizeof(FNavigationEvent) == 0x0028); // 40 bytes (0x000020 - 0x000028)
static_assert(sizeof(FAnalogInputEvent) == 0x0048); // 72 bytes (0x000040 - 0x000048)
static_assert(sizeof(FFocusEvent) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMotionEvent) == 0x0080); // 128 bytes (0x000020 - 0x000080)
static_assert(sizeof(FTableViewStyle) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FSliderStyle) == 0x0500); // 1280 bytes (0x000008 - 0x000500)
static_assert(sizeof(FFontData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FTypefaceEntry) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FTypeface) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCompositeFallbackFont) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCompositeSubFont) == 0x0038); // 56 bytes (0x000018 - 0x000038)
static_assert(sizeof(FCompositeFont) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FCaptureLostEvent) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FCheckBoxStyle) == 0x0AD0); // 2768 bytes (0x000008 - 0x000AD0)
static_assert(sizeof(FSegmentedControlStyle) == 0x2160); // 8544 bytes (0x000008 - 0x002160)
static_assert(sizeof(FHyperlinkStyle) == 0x0750); // 1872 bytes (0x000008 - 0x000750)
static_assert(sizeof(FInlineEditableTextBlockStyle) == 0x11D0); // 4560 bytes (0x000008 - 0x0011D0)
static_assert(sizeof(FProgressBarStyle) == 0x0290); // 656 bytes (0x000008 - 0x000290)
static_assert(sizeof(FExpandableAreaStyle) == 0x01C0); // 448 bytes (0x000008 - 0x0001C0)
static_assert(sizeof(FSearchBoxStyle) == 0x1250); // 4688 bytes (0x000008 - 0x001250)
static_assert(sizeof(FVolumeControlStyle) == 0x0920); // 2336 bytes (0x000008 - 0x000920)
static_assert(sizeof(FInlineTextImageStyle) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FSplitterStyle) == 0x01B0); // 432 bytes (0x000008 - 0x0001B0)
static_assert(sizeof(FTableColumnHeaderStyle) == 0x0760); // 1888 bytes (0x000008 - 0x000760)
static_assert(sizeof(FHeaderRowStyle) == 0x1260); // 4704 bytes (0x000008 - 0x001260)
static_assert(sizeof(FDockTabStyle) == 0x0D80); // 3456 bytes (0x000008 - 0x000D80)
static_assert(sizeof(FScrollBoxStyle) == 0x0370); // 880 bytes (0x000008 - 0x000370)
static_assert(sizeof(FScrollBorderStyle) == 0x01B0); // 432 bytes (0x000008 - 0x0001B0)
static_assert(sizeof(FWindowStyle) == 0x1940); // 6464 bytes (0x000008 - 0x001940)
static_assert(sizeof(FStyleTheme) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FToolBarStyle) == 0x3E50); // 15952 bytes (0x000008 - 0x003E50)
static_assert(offsetof(USlateWidgetStyleAsset, CustomStyle) == 0x0028);
static_assert(offsetof(FStyleColorList, StyleColors) == 0x0000);
static_assert(offsetof(USlateThemeManager, CurrentThemeId) == 0x0028);
static_assert(offsetof(USlateThemeManager, ActiveColors) == 0x0038);
static_assert(offsetof(FSlateColor, SpecifiedColor) == 0x0000);
static_assert(offsetof(FSlateColor, ColorUseRule) == 0x0010);
static_assert(offsetof(FSlateBrushOutlineSettings, CornerRadii) == 0x0000);
static_assert(offsetof(FSlateBrushOutlineSettings, Color) == 0x0020);
static_assert(offsetof(FSlateBrushOutlineSettings, RoundingType) == 0x0038);
static_assert(offsetof(FSlateBrush, DrawAs) == 0x0011);
static_assert(offsetof(FSlateBrush, Tiling) == 0x0012);
static_assert(offsetof(FSlateBrush, Mirroring) == 0x0013);
static_assert(offsetof(FSlateBrush, ImageType) == 0x0014);
static_assert(offsetof(FSlateBrush, ImageSize) == 0x0018);
static_assert(offsetof(FSlateBrush, Margin) == 0x0020);
static_assert(offsetof(FSlateBrush, TintColor) == 0x0030);
static_assert(offsetof(FSlateBrush, OutlineSettings) == 0x0050);
static_assert(offsetof(FSlateBrush, ResourceObject) == 0x0090);
static_assert(offsetof(FSlateBrush, ResourceName) == 0x0098);
static_assert(offsetof(FSlateBrush, UVRegion) == 0x00A0);
static_assert(offsetof(FScrollBarStyle, HorizontalBackgroundImage) == 0x0010);
static_assert(offsetof(FScrollBarStyle, VerticalBackgroundImage) == 0x00E0);
static_assert(offsetof(FScrollBarStyle, VerticalTopSlotImage) == 0x01B0);
static_assert(offsetof(FScrollBarStyle, HorizontalTopSlotImage) == 0x0280);
static_assert(offsetof(FScrollBarStyle, VerticalBottomSlotImage) == 0x0350);
static_assert(offsetof(FScrollBarStyle, HorizontalBottomSlotImage) == 0x0420);
static_assert(offsetof(FScrollBarStyle, NormalThumbImage) == 0x04F0);
static_assert(offsetof(FScrollBarStyle, HoveredThumbImage) == 0x05C0);
static_assert(offsetof(FScrollBarStyle, DraggedThumbImage) == 0x0690);
static_assert(offsetof(FTableRowStyle, SelectorFocusedBrush) == 0x0010);
static_assert(offsetof(FTableRowStyle, ActiveHoveredBrush) == 0x00E0);
static_assert(offsetof(FTableRowStyle, ActiveBrush) == 0x01B0);
static_assert(offsetof(FTableRowStyle, InactiveHoveredBrush) == 0x0280);
static_assert(offsetof(FTableRowStyle, InactiveBrush) == 0x0350);
static_assert(offsetof(FTableRowStyle, ParentRowBackgroundBrush) == 0x0430);
static_assert(offsetof(FTableRowStyle, ParentRowBackgroundHoveredBrush) == 0x0500);
static_assert(offsetof(FTableRowStyle, EvenRowBackgroundHoveredBrush) == 0x05D0);
static_assert(offsetof(FTableRowStyle, EvenRowBackgroundBrush) == 0x06A0);
static_assert(offsetof(FTableRowStyle, OddRowBackgroundHoveredBrush) == 0x0770);
static_assert(offsetof(FTableRowStyle, OddRowBackgroundBrush) == 0x0840);
static_assert(offsetof(FTableRowStyle, TextColor) == 0x0910);
static_assert(offsetof(FTableRowStyle, SelectedTextColor) == 0x0924);
static_assert(offsetof(FTableRowStyle, DropIndicator_Above) == 0x0940);
static_assert(offsetof(FTableRowStyle, DropIndicator_Onto) == 0x0A10);
static_assert(offsetof(FTableRowStyle, DropIndicator_Below) == 0x0AE0);
static_assert(offsetof(FTableRowStyle, ActiveHighlightedBrush) == 0x0BB0);
static_assert(offsetof(FTableRowStyle, InactiveHighlightedBrush) == 0x0C80);
static_assert(offsetof(FSlateSound, ResourceObject) == 0x0000);
static_assert(offsetof(FButtonStyle, Normal) == 0x0010);
static_assert(offsetof(FButtonStyle, Hovered) == 0x00E0);
static_assert(offsetof(FButtonStyle, Pressed) == 0x01B0);
static_assert(offsetof(FButtonStyle, Disabled) == 0x0280);
static_assert(offsetof(FButtonStyle, NormalForeground) == 0x0350);
static_assert(offsetof(FButtonStyle, HoveredForeground) == 0x0364);
static_assert(offsetof(FButtonStyle, PressedForeground) == 0x0378);
static_assert(offsetof(FButtonStyle, DisabledForeground) == 0x038C);
static_assert(offsetof(FButtonStyle, NormalPadding) == 0x03A0);
static_assert(offsetof(FButtonStyle, PressedPadding) == 0x03B0);
static_assert(offsetof(FButtonStyle, PressedSlateSound) == 0x03C0);
static_assert(offsetof(FButtonStyle, HoveredSlateSound) == 0x03D8);
static_assert(offsetof(FComboButtonStyle, ButtonStyle) == 0x0010);
static_assert(offsetof(FComboButtonStyle, DownArrowImage) == 0x0400);
static_assert(offsetof(FComboButtonStyle, ShadowOffset) == 0x04D0);
static_assert(offsetof(FComboButtonStyle, ShadowColorAndOpacity) == 0x04D8);
static_assert(offsetof(FComboButtonStyle, MenuBorderBrush) == 0x04F0);
static_assert(offsetof(FComboButtonStyle, MenuBorderPadding) == 0x05C0);
static_assert(offsetof(FComboButtonStyle, ContentPadding) == 0x05D0);
static_assert(offsetof(FComboButtonStyle, DownArrowPadding) == 0x05E0);
static_assert(offsetof(FComboButtonStyle, DownArrowAlign) == 0x05F0);
static_assert(offsetof(FComboBoxStyle, ComboButtonStyle) == 0x0010);
static_assert(offsetof(FComboBoxStyle, PressedSlateSound) == 0x0610);
static_assert(offsetof(FComboBoxStyle, SelectionChangeSlateSound) == 0x0628);
static_assert(offsetof(FComboBoxStyle, ContentPadding) == 0x0640);
static_assert(offsetof(FComboBoxStyle, MenuRowPadding) == 0x0650);
static_assert(offsetof(FFontOutlineSettings, OutlineMaterial) == 0x0008);
static_assert(offsetof(FFontOutlineSettings, OutlineColor) == 0x0010);
static_assert(offsetof(FSlateFontInfo, FontObject) == 0x0000);
static_assert(offsetof(FSlateFontInfo, FontMaterial) == 0x0008);
static_assert(offsetof(FSlateFontInfo, OutlineSettings) == 0x0010);
static_assert(offsetof(FSlateFontInfo, TypefaceFontName) == 0x0040);
static_assert(offsetof(FEditableTextStyle, Font) == 0x0008);
static_assert(offsetof(FEditableTextStyle, ColorAndOpacity) == 0x0060);
static_assert(offsetof(FEditableTextStyle, BackgroundImageSelected) == 0x0080);
static_assert(offsetof(FEditableTextStyle, BackgroundImageComposing) == 0x0150);
static_assert(offsetof(FEditableTextStyle, CaretImage) == 0x0220);
static_assert(offsetof(FTextBlockStyle, Font) == 0x0008);
static_assert(offsetof(FTextBlockStyle, ColorAndOpacity) == 0x0060);
static_assert(offsetof(FTextBlockStyle, ShadowOffset) == 0x0074);
static_assert(offsetof(FTextBlockStyle, ShadowColorAndOpacity) == 0x007C);
static_assert(offsetof(FTextBlockStyle, SelectedBackgroundColor) == 0x008C);
static_assert(offsetof(FTextBlockStyle, HighlightColor) == 0x00A0);
static_assert(offsetof(FTextBlockStyle, HighlightShape) == 0x00C0);
static_assert(offsetof(FTextBlockStyle, StrikeBrush) == 0x0190);
static_assert(offsetof(FTextBlockStyle, UnderlineBrush) == 0x0260);
static_assert(offsetof(FTextBlockStyle, TransformPolicy) == 0x0330);
static_assert(offsetof(FTextBlockStyle, OverflowPolicy) == 0x0331);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageNormal) == 0x0010);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageHovered) == 0x00E0);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageFocused) == 0x01B0);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundImageReadOnly) == 0x0280);
static_assert(offsetof(FEditableTextBoxStyle, Padding) == 0x0350);
static_assert(offsetof(FEditableTextBoxStyle, TextStyle) == 0x0360);
static_assert(offsetof(FEditableTextBoxStyle, ForegroundColor) == 0x06A0);
static_assert(offsetof(FEditableTextBoxStyle, BackgroundColor) == 0x06B4);
static_assert(offsetof(FEditableTextBoxStyle, ReadOnlyForegroundColor) == 0x06C8);
static_assert(offsetof(FEditableTextBoxStyle, FocusedForegroundColor) == 0x06DC);
static_assert(offsetof(FEditableTextBoxStyle, HScrollBarPadding) == 0x06F0);
static_assert(offsetof(FEditableTextBoxStyle, VScrollBarPadding) == 0x0700);
static_assert(offsetof(FEditableTextBoxStyle, ScrollBarStyle) == 0x0710);
static_assert(offsetof(FSpinBoxStyle, BackgroundBrush) == 0x0010);
static_assert(offsetof(FSpinBoxStyle, ActiveBackgroundBrush) == 0x00E0);
static_assert(offsetof(FSpinBoxStyle, HoveredBackgroundBrush) == 0x01B0);
static_assert(offsetof(FSpinBoxStyle, ActiveFillBrush) == 0x0280);
static_assert(offsetof(FSpinBoxStyle, HoveredFillBrush) == 0x0350);
static_assert(offsetof(FSpinBoxStyle, InactiveFillBrush) == 0x0420);
static_assert(offsetof(FSpinBoxStyle, ArrowsImage) == 0x04F0);
static_assert(offsetof(FSpinBoxStyle, ForegroundColor) == 0x05C0);
static_assert(offsetof(FSpinBoxStyle, TextPadding) == 0x05D4);
static_assert(offsetof(FSpinBoxStyle, InsetPadding) == 0x05E4);
static_assert(offsetof(FTableViewStyle, BackgroundBrush) == 0x0010);
static_assert(offsetof(FSliderStyle, NormalBarImage) == 0x0010);
static_assert(offsetof(FSliderStyle, HoveredBarImage) == 0x00E0);
static_assert(offsetof(FSliderStyle, DisabledBarImage) == 0x01B0);
static_assert(offsetof(FSliderStyle, NormalThumbImage) == 0x0280);
static_assert(offsetof(FSliderStyle, HoveredThumbImage) == 0x0350);
static_assert(offsetof(FSliderStyle, DisabledThumbImage) == 0x0420);
static_assert(offsetof(FFontData, FontFilename) == 0x0000);
static_assert(offsetof(FFontData, Hinting) == 0x0014);
static_assert(offsetof(FFontData, LoadingPolicy) == 0x0015);
static_assert(offsetof(FFontData, FontFaceAsset) == 0x0020);
static_assert(offsetof(FTypefaceEntry, Name) == 0x0000);
static_assert(offsetof(FTypefaceEntry, Font) == 0x0008);
static_assert(offsetof(FTypeface, Fonts) == 0x0000);
static_assert(offsetof(FCompositeFallbackFont, Typeface) == 0x0000);
static_assert(offsetof(FCompositeSubFont, CharacterRanges) == 0x0018);
static_assert(offsetof(FCompositeSubFont, Cultures) == 0x0028);
static_assert(offsetof(FCompositeFont, DefaultTypeface) == 0x0000);
static_assert(offsetof(FCompositeFont, FallbackTypeface) == 0x0010);
static_assert(offsetof(FCompositeFont, SubTypefaces) == 0x0028);
static_assert(offsetof(FCheckBoxStyle, CheckBoxType) == 0x0008);
static_assert(offsetof(FCheckBoxStyle, UncheckedImage) == 0x0010);
static_assert(offsetof(FCheckBoxStyle, UncheckedHoveredImage) == 0x00E0);
static_assert(offsetof(FCheckBoxStyle, UncheckedPressedImage) == 0x01B0);
static_assert(offsetof(FCheckBoxStyle, CheckedImage) == 0x0280);
static_assert(offsetof(FCheckBoxStyle, CheckedHoveredImage) == 0x0350);
static_assert(offsetof(FCheckBoxStyle, CheckedPressedImage) == 0x0420);
static_assert(offsetof(FCheckBoxStyle, UndeterminedImage) == 0x04F0);
static_assert(offsetof(FCheckBoxStyle, UndeterminedHoveredImage) == 0x05C0);
static_assert(offsetof(FCheckBoxStyle, UndeterminedPressedImage) == 0x0690);
static_assert(offsetof(FCheckBoxStyle, Padding) == 0x0760);
static_assert(offsetof(FCheckBoxStyle, BackgroundImage) == 0x0770);
static_assert(offsetof(FCheckBoxStyle, BackgroundHoveredImage) == 0x0840);
static_assert(offsetof(FCheckBoxStyle, BackgroundPressedImage) == 0x0910);
static_assert(offsetof(FCheckBoxStyle, ForegroundColor) == 0x09E0);
static_assert(offsetof(FCheckBoxStyle, HoveredForeground) == 0x09F4);
static_assert(offsetof(FCheckBoxStyle, PressedForeground) == 0x0A08);
static_assert(offsetof(FCheckBoxStyle, CheckedForeground) == 0x0A1C);
static_assert(offsetof(FCheckBoxStyle, CheckedHoveredForeground) == 0x0A30);
static_assert(offsetof(FCheckBoxStyle, CheckedPressedForeground) == 0x0A44);
static_assert(offsetof(FCheckBoxStyle, UndeterminedForeground) == 0x0A58);
static_assert(offsetof(FCheckBoxStyle, BorderBackgroundColor) == 0x0A6C);
static_assert(offsetof(FCheckBoxStyle, CheckedSlateSound) == 0x0A80);
static_assert(offsetof(FCheckBoxStyle, UncheckedSlateSound) == 0x0A98);
static_assert(offsetof(FCheckBoxStyle, HoveredSlateSound) == 0x0AB0);
static_assert(offsetof(FSegmentedControlStyle, ControlStyle) == 0x0010);
static_assert(offsetof(FSegmentedControlStyle, FirstControlStyle) == 0x0AE0);
static_assert(offsetof(FSegmentedControlStyle, LastControlStyle) == 0x15B0);
static_assert(offsetof(FSegmentedControlStyle, BackgroundBrush) == 0x2080);
static_assert(offsetof(FSegmentedControlStyle, UniformPadding) == 0x2150);
static_assert(offsetof(FHyperlinkStyle, UnderlineStyle) == 0x0010);
static_assert(offsetof(FHyperlinkStyle, TextStyle) == 0x0400);
static_assert(offsetof(FHyperlinkStyle, Padding) == 0x0740);
static_assert(offsetof(FInlineEditableTextBlockStyle, EditableTextBoxStyle) == 0x0010);
static_assert(offsetof(FInlineEditableTextBlockStyle, TextStyle) == 0x0E90);
static_assert(offsetof(FProgressBarStyle, BackgroundImage) == 0x0010);
static_assert(offsetof(FProgressBarStyle, FillImage) == 0x00E0);
static_assert(offsetof(FProgressBarStyle, MarqueeImage) == 0x01B0);
static_assert(offsetof(FExpandableAreaStyle, CollapsedImage) == 0x0010);
static_assert(offsetof(FExpandableAreaStyle, ExpandedImage) == 0x00E0);
static_assert(offsetof(FSearchBoxStyle, TextBoxStyle) == 0x0010);
static_assert(offsetof(FSearchBoxStyle, ActiveFontInfo) == 0x0E90);
static_assert(offsetof(FSearchBoxStyle, UpArrowImage) == 0x0EF0);
static_assert(offsetof(FSearchBoxStyle, DownArrowImage) == 0x0FC0);
static_assert(offsetof(FSearchBoxStyle, GlassImage) == 0x1090);
static_assert(offsetof(FSearchBoxStyle, ClearImage) == 0x1160);
static_assert(offsetof(FSearchBoxStyle, ImagePadding) == 0x1230);
static_assert(offsetof(FVolumeControlStyle, SliderStyle) == 0x0010);
static_assert(offsetof(FVolumeControlStyle, HighVolumeImage) == 0x0510);
static_assert(offsetof(FVolumeControlStyle, MidVolumeImage) == 0x05E0);
static_assert(offsetof(FVolumeControlStyle, LowVolumeImage) == 0x06B0);
static_assert(offsetof(FVolumeControlStyle, NoVolumeImage) == 0x0780);
static_assert(offsetof(FVolumeControlStyle, MutedImage) == 0x0850);
static_assert(offsetof(FInlineTextImageStyle, Image) == 0x0010);
static_assert(offsetof(FSplitterStyle, HandleNormalBrush) == 0x0010);
static_assert(offsetof(FSplitterStyle, HandleHighlightBrush) == 0x00E0);
static_assert(offsetof(FTableColumnHeaderStyle, SortPrimaryAscendingImage) == 0x0010);
static_assert(offsetof(FTableColumnHeaderStyle, SortPrimaryDescendingImage) == 0x00E0);
static_assert(offsetof(FTableColumnHeaderStyle, SortSecondaryAscendingImage) == 0x01B0);
static_assert(offsetof(FTableColumnHeaderStyle, SortSecondaryDescendingImage) == 0x0280);
static_assert(offsetof(FTableColumnHeaderStyle, NormalBrush) == 0x0350);
static_assert(offsetof(FTableColumnHeaderStyle, HoveredBrush) == 0x0420);
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownImage) == 0x04F0);
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownNormalBorderBrush) == 0x05C0);
static_assert(offsetof(FTableColumnHeaderStyle, MenuDropdownHoveredBorderBrush) == 0x0690);
static_assert(offsetof(FHeaderRowStyle, ColumnStyle) == 0x0010);
static_assert(offsetof(FHeaderRowStyle, LastColumnStyle) == 0x0770);
static_assert(offsetof(FHeaderRowStyle, ColumnSplitterStyle) == 0x0ED0);
static_assert(offsetof(FHeaderRowStyle, BackgroundBrush) == 0x1090);
static_assert(offsetof(FHeaderRowStyle, ForegroundColor) == 0x1160);
static_assert(offsetof(FHeaderRowStyle, HorizontalSeparatorBrush) == 0x1180);
static_assert(offsetof(FDockTabStyle, CloseButtonStyle) == 0x0010);
static_assert(offsetof(FDockTabStyle, NormalBrush) == 0x0400);
static_assert(offsetof(FDockTabStyle, ColorOverlayTabBrush) == 0x04D0);
static_assert(offsetof(FDockTabStyle, ColorOverlayIconBrush) == 0x05A0);
static_assert(offsetof(FDockTabStyle, ForegroundBrush) == 0x0670);
static_assert(offsetof(FDockTabStyle, HoveredBrush) == 0x0740);
static_assert(offsetof(FDockTabStyle, ContentAreaBrush) == 0x0810);
static_assert(offsetof(FDockTabStyle, TabWellBrush) == 0x08E0);
static_assert(offsetof(FDockTabStyle, TabTextStyle) == 0x09B0);
static_assert(offsetof(FDockTabStyle, TabPadding) == 0x0CF0);
static_assert(offsetof(FDockTabStyle, IconSize) == 0x0D00);
static_assert(offsetof(FDockTabStyle, FlashColor) == 0x0D0C);
static_assert(offsetof(FDockTabStyle, NormalForegroundColor) == 0x0D20);
static_assert(offsetof(FDockTabStyle, HoveredForegroundColor) == 0x0D34);
static_assert(offsetof(FDockTabStyle, ActiveForegroundColor) == 0x0D48);
static_assert(offsetof(FDockTabStyle, ForegroundForegroundColor) == 0x0D5C);
static_assert(offsetof(FScrollBoxStyle, TopShadowBrush) == 0x0010);
static_assert(offsetof(FScrollBoxStyle, BottomShadowBrush) == 0x00E0);
static_assert(offsetof(FScrollBoxStyle, LeftShadowBrush) == 0x01B0);
static_assert(offsetof(FScrollBoxStyle, RightShadowBrush) == 0x0280);
static_assert(offsetof(FScrollBoxStyle, HorizontalScrolledContentPadding) == 0x0350);
static_assert(offsetof(FScrollBoxStyle, VerticalScrolledContentPadding) == 0x0360);
static_assert(offsetof(FScrollBorderStyle, TopShadowBrush) == 0x0010);
static_assert(offsetof(FScrollBorderStyle, BottomShadowBrush) == 0x00E0);
static_assert(offsetof(FWindowStyle, MinimizeButtonStyle) == 0x0010);
static_assert(offsetof(FWindowStyle, MaximizeButtonStyle) == 0x0400);
static_assert(offsetof(FWindowStyle, RestoreButtonStyle) == 0x07F0);
static_assert(offsetof(FWindowStyle, CloseButtonStyle) == 0x0BE0);
static_assert(offsetof(FWindowStyle, TitleTextStyle) == 0x0FD0);
static_assert(offsetof(FWindowStyle, ActiveTitleBrush) == 0x1310);
static_assert(offsetof(FWindowStyle, InactiveTitleBrush) == 0x13E0);
static_assert(offsetof(FWindowStyle, FlashTitleBrush) == 0x14B0);
static_assert(offsetof(FWindowStyle, BackgroundColor) == 0x1580);
static_assert(offsetof(FWindowStyle, OutlineBrush) == 0x15A0);
static_assert(offsetof(FWindowStyle, OutlineColor) == 0x1670);
static_assert(offsetof(FWindowStyle, BorderBrush) == 0x1690);
static_assert(offsetof(FWindowStyle, BorderColor) == 0x1760);
static_assert(offsetof(FWindowStyle, BackgroundBrush) == 0x1780);
static_assert(offsetof(FWindowStyle, ChildBackgroundBrush) == 0x1850);
static_assert(offsetof(FWindowStyle, BorderPadding) == 0x1924);
static_assert(offsetof(FToolBarStyle, BackgroundBrush) == 0x0010);
static_assert(offsetof(FToolBarStyle, ExpandBrush) == 0x00E0);
static_assert(offsetof(FToolBarStyle, SeparatorBrush) == 0x01B0);
static_assert(offsetof(FToolBarStyle, LabelStyle) == 0x0280);
static_assert(offsetof(FToolBarStyle, EditableTextStyle) == 0x05C0);
static_assert(offsetof(FToolBarStyle, ToggleButton) == 0x1440);
static_assert(offsetof(FToolBarStyle, ComboButtonStyle) == 0x1F10);
static_assert(offsetof(FToolBarStyle, SettingsButtonStyle) == 0x2510);
static_assert(offsetof(FToolBarStyle, SettingsComboButton) == 0x2900);
static_assert(offsetof(FToolBarStyle, SettingsToggleButton) == 0x2F00);
static_assert(offsetof(FToolBarStyle, ButtonStyle) == 0x39D0);
static_assert(offsetof(FToolBarStyle, LabelPadding) == 0x3DC0);
static_assert(offsetof(FToolBarStyle, SeparatorPadding) == 0x3DD0);
static_assert(offsetof(FToolBarStyle, ComboButtonPadding) == 0x3DE0);
static_assert(offsetof(FToolBarStyle, ButtonPadding) == 0x3DF0);
static_assert(offsetof(FToolBarStyle, CheckBoxPadding) == 0x3E00);
static_assert(offsetof(FToolBarStyle, BlockPadding) == 0x3E10);
static_assert(offsetof(FToolBarStyle, IndentedBlockPadding) == 0x3E20);
static_assert(offsetof(FToolBarStyle, BackgroundPadding) == 0x3E30);
static_assert(offsetof(FToolBarStyle, IconSize) == 0x3E40);
