
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Paper2D
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/HorizonUI.EHorizonDialogueTextOverflowWrapMethod
/// Size: 0x01 (1 bytes)
enum class EHorizonDialogueTextOverflowWrapMethod : uint8_t
{
	EHorizonDialogueTextOverflowWrapMethod__Normal                                   = 0,
	EHorizonDialogueTextOverflowWrapMethod__BreakAll                                 = 1
};

/// Enum /Script/HorizonUI.EHorizonDialogueTextOverflowWarpMethod_DEPRECATED
/// Size: 0x01 (1 bytes)
enum class EHorizonDialogueTextOverflowWarpMethod_DEPRECATED : uint8_t
{
	EHorizonDialogueTextOverflowWarpMethod_DEPRECATED__Normal                        = 0,
	EHorizonDialogueTextOverflowWarpMethod_DEPRECATED__BreakAll                      = 1,
	EHorizonDialogueTextOverflowWarpMethod_DEPRECATED__Invalidated                   = 2
};

/// Enum /Script/HorizonUI.EHorizonDialogueSegmentType
/// Size: 0x01 (1 bytes)
enum class EHorizonDialogueSegmentType : uint8_t
{
	EHorizonDialogueSegmentType__Invalidated                                         = 0,
	EHorizonDialogueSegmentType__Text                                                = 1,
	EHorizonDialogueSegmentType__NewLine                                             = 2,
	EHorizonDialogueSegmentType__NewPage                                             = 3,
	EHorizonDialogueSegmentType__Image                                               = 4,
	EHorizonDialogueSegmentType__PaperFlipbook                                       = 5,
	EHorizonDialogueSegmentType__Material                                            = 6,
	EHorizonDialogueSegmentType__HyperText                                           = 7,
	EHorizonDialogueSegmentType__Custom                                              = 8
};

/// Enum /Script/HorizonUI.EHorizonUIInputMode
/// Size: 0x01 (1 bytes)
enum class EHorizonUIInputMode : uint8_t
{
	EHorizonUIInputMode__Invalidated                                                 = 0,
	EHorizonUIInputMode__GameAndUI                                                   = 1,
	EHorizonUIInputMode__UIOnly                                                      = 2,
	EHorizonUIInputMode__GameOnly                                                    = 3
};

/// Class /Script/HorizonUI.HorizonButton
/// Size: 0x06B0 (1712 bytes) (0x0005E8 - 0x0006B0) align 16 MaxSize: 0x06B0
class UHorizonButton : public UButton
{ 
public:
	SDK_UNDEFINED(16,429) /* FMulticastInlineDelegate */ __um(OnClickedDelegate);                                  // 0x05E8   (0x0010)  
	SDK_UNDEFINED(16,430) /* FMulticastInlineDelegate */ __um(OnPressedDelegate);                                  // 0x05F8   (0x0010)  
	SDK_UNDEFINED(16,431) /* FMulticastInlineDelegate */ __um(OnReleasedDelegate);                                 // 0x0608   (0x0010)  
	SDK_UNDEFINED(16,432) /* FMulticastInlineDelegate */ __um(OnHoveredDelegate);                                  // 0x0618   (0x0010)  
	SDK_UNDEFINED(16,433) /* FMulticastInlineDelegate */ __um(OnUnhoveredDelegate);                                // 0x0628   (0x0010)  
	unsigned char                                      UnknownData00_7[0x78];                                      // 0x0638   (0x0078)  MISSED


	/// Functions
	// Function /Script/HorizonUI.HorizonButton.OnUnhoveredButton
	// void OnUnhoveredButton();                                                                                                // [0xa52db0] Native|Protected     
	// Function /Script/HorizonUI.HorizonButton.OnReleasedButton
	// void OnReleasedButton();                                                                                                 // [0xa52d90] Native|Protected     
	// Function /Script/HorizonUI.HorizonButton.OnPressedButton
	// void OnPressedButton();                                                                                                  // [0xa52d70] Native|Protected     
	// Function /Script/HorizonUI.HorizonButton.OnHoveredButton
	// void OnHoveredButton();                                                                                                  // [0xa52d50] Native|Protected     
	// Function /Script/HorizonUI.HorizonButton.OnHorizonButtonEvent__DelegateSignature
	// void OnHorizonButtonEvent__DelegateSignature(class UHorizonButton* Button);                                              // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/HorizonUI.HorizonButton.OnClickedButton
	// void OnClickedButton();                                                                                                  // [0xa52d30] Native|Protected     
};

/// Class /Script/HorizonUI.HorizonUserWidget
/// Size: 0x0280 (640 bytes) (0x000280 - 0x000280) align 8 MaxSize: 0x0280
class UHorizonUserWidget : public UUserWidget
{ 
public:
};

/// Class /Script/HorizonUI.HorizonDesignableUserWidget
/// Size: 0x0280 (640 bytes) (0x000280 - 0x000280) align 8 MaxSize: 0x0280
class UHorizonDesignableUserWidget : public UHorizonUserWidget
{ 
public:


	/// Functions
	// Function /Script/HorizonUI.HorizonDesignableUserWidget.SynchronizeProperties
	// void SynchronizeProperties();                                                                                            // [0xa54090] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDesignableUserWidget.OnSynchronizeProperties
	// void OnSynchronizeProperties();                                                                                          // [0x9de0f0] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/HorizonUI.HorizonButtonUserWidget
/// Size: 0x04B0 (1200 bytes) (0x000280 - 0x0004B0) align 16 MaxSize: 0x04B0
class UHorizonButtonUserWidget : public UHorizonDesignableUserWidget
{ 
public:
	SDK_UNDEFINED(16,434) /* FMulticastInlineDelegate */ __um(OnButtonClickedDelegate);                            // 0x0280   (0x0010)  
	SDK_UNDEFINED(16,435) /* FMulticastInlineDelegate */ __um(OnButtonPressedDelegate);                            // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,436) /* FMulticastInlineDelegate */ __um(OnButtonReleasedDelegate);                           // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,437) /* FMulticastInlineDelegate */ __um(OnButtonHoveredDelegate);                            // 0x02B0   (0x0010)  
	SDK_UNDEFINED(16,438) /* FMulticastInlineDelegate */ __um(OnButtonUnhoveredDelegate);                          // 0x02C0   (0x0010)  
	SDK_UNDEFINED(16,439) /* FMulticastInlineDelegate */ __um(OnButtonFocusDelegate);                              // 0x02D0   (0x0010)  
	SDK_UNDEFINED(16,440) /* FMulticastInlineDelegate */ __um(OnButtonFocusLostDelegate);                          // 0x02E0   (0x0010)  
	unsigned char                                      UnknownData00_6[0xA8];                                      // 0x02F0   (0x00A8)  MISSED
	class UButton*                                     Button_Main;                                                // 0x0398   (0x0008)  
	class UTextBlock*                                  TextBlock_Main;                                             // 0x03A0   (0x0008)  
	class UImage*                                      Image_Main;                                                 // 0x03A8   (0x0008)  
	FText                                              Text_Main;                                                  // 0x03B0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x03C8   (0x0008)  MISSED
	FSlateBrush                                        SlateBrush_ImageMain;                                       // 0x03D0   (0x00D0)  
	bool                                               bFocusOnHovered;                                            // 0x04A0   (0x0001)  
	bool                                               bButtonFocused;                                             // 0x04A1   (0x0001)  
	unsigned char                                      UnknownData02_7[0xE];                                       // 0x04A2   (0x000E)  MISSED


	/// Functions
	// Function /Script/HorizonUI.HorizonButtonUserWidget.ReceiveOnOnButtonFocusLost
	// void ReceiveOnOnButtonFocusLost(FFocusEvent& InFocusEvent);                                                              // [0x2c97800] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonUnhovered
	// void ReceiveOnButtonUnhovered();                                                                                         // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonReleased
	// void ReceiveOnButtonReleased();                                                                                          // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonPressed
	// void ReceiveOnButtonPressed();                                                                                           // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonHovered
	// void ReceiveOnButtonHovered();                                                                                           // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonFocus
	// void ReceiveOnButtonFocus(FFocusEvent& InFocusEvent);                                                                    // [0x2c97800] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonButtonUserWidget.ReceiveOnButtonClicked
	// void ReceiveOnButtonClicked();                                                                                           // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonButtonUserWidget.OnHorizonButtonFocusEvent__DelegateSignature
	// void OnHorizonButtonFocusEvent__DelegateSignature(class UHorizonButtonUserWidget* InButton, FFocusEvent& InFocusEvent);  // [0x2c97800] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/HorizonUI.HorizonButtonUserWidget.OnHorizonButtonEvent__DelegateSignature
	// void OnHorizonButtonEvent__DelegateSignature(class UHorizonButtonUserWidget* InButton);                                  // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/HorizonUI.HorizonButtonUserWidget.NativeOnButtonUnhovered
	// void NativeOnButtonUnhovered();                                                                                          // [0xa52c80] Native|Protected     
	// Function /Script/HorizonUI.HorizonButtonUserWidget.NativeOnButtonReleased
	// void NativeOnButtonReleased();                                                                                           // [0xa52c60] Native|Protected     
	// Function /Script/HorizonUI.HorizonButtonUserWidget.NativeOnButtonPressed
	// void NativeOnButtonPressed();                                                                                            // [0x9de110] Native|Protected     
	// Function /Script/HorizonUI.HorizonButtonUserWidget.NativeOnButtonHovered
	// void NativeOnButtonHovered();                                                                                            // [0xa52c40] Native|Protected     
	// Function /Script/HorizonUI.HorizonButtonUserWidget.NativeOnButtonClicked
	// void NativeOnButtonClicked();                                                                                            // [0xa52c20] Native|Protected     
};

/// Class /Script/HorizonUI.HorizonDialogueMsgDecorator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHorizonDialogueMsgDecorator : public UObject
{ 
public:


	/// Functions
	// Function /Script/HorizonUI.HorizonDialogueMsgDecorator.Run
	// bool Run(class UHorizonDialogueMsgTextBlock* InMsgTextBlock, FHorizonDialogueBlockInfo& InDialogueBlockInfo, FHorizonDialogueSegmentInfo& InSegInfo); // [0xa530b0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonDialogueMsgDecorator.PreRun
	// bool PreRun(class UHorizonDialogueMsgTextBlock* InMsgTextBlock, FHorizonDialogueBlockInfo& InDialogueBlockInfo, FHorizonDialogueSegmentInfo& InSegInfo); // [0xa52df0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonDialogueMsgDecorator.BuildSegment
	// bool BuildSegment(class UHorizonDialogueMsgTextBlock* InMsgTextBlock, int32_t InCurrentSegInfoIndex, FHorizonDialogueSegmentInfo& InCurrentSegInfo, TArray<FHorizonDialogueSegmentInfo>& InSegInfos); // [0xa525c0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/HorizonUI.HorizonDialogueMsgSpaceDecorator
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UHorizonDialogueMsgSpaceDecorator : public UHorizonDialogueMsgDecorator
{ 
public:
	FText                                              FirstLineSpaceL;                                            // 0x0028   (0x0018)  
	FText                                              Space;                                                      // 0x0040   (0x0018)  
	bool                                               bDefaultWithSpaceL_AlphabeticOnly;                          // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0059   (0x0007)  MISSED
};

/// Struct /Script/HorizonUI.HorizonDialogueBlinkingCursorInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FHorizonDialogueBlinkingCursorInfo
{ 
	TWeakObjectPtr<class UPaperFlipbook*>              Flipbook;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0008   (0x0028)  MISSED
	FSlateColor                                        ColorAndOpacity;                                            // 0x0030   (0x0014)  
	bool                                               bUseSize;                                                   // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	FVector2D                                          Size;                                                       // 0x0048   (0x0010)  
	FVector2D                                          PaddingPos;                                                 // 0x0058   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Struct /Script/HorizonUI.HorizonDialogueSegmentInfoRubyTextStyle
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FHorizonDialogueSegmentInfoRubyTextStyle
{ 
	TArray<FString>                                    Text;                                                       // 0x0000   (0x0010)  
	TArray<FSlateColor>                                ColorAndOpacity;                                            // 0x0010   (0x0010)  
	TArray<FSlateFontInfo>                             Font;                                                       // 0x0020   (0x0010)  
	TArray<FVector2D>                                  ShadowOffset;                                               // 0x0030   (0x0010)  
	TArray<FSlateColor>                                ShadowColorAndOpacity;                                      // 0x0040   (0x0010)  
	TArray<FMargin>                                    PaddingMargin;                                              // 0x0050   (0x0010)  
};

/// Struct /Script/HorizonUI.HorizonDialogueSegmentInfoStyle
/// Size: 0x0278 (632 bytes) (0x000000 - 0x000278) align 8 MaxSize: 0x0278
struct FHorizonDialogueSegmentInfoStyle
{ 
	FName                                              StyleName;                                                  // 0x0000   (0x0008)  
	TArray<FString>                                    Text;                                                       // 0x0008   (0x0010)  
	TArray<FSlateColor>                                ColorAndOpacity;                                            // 0x0018   (0x0010)  
	TArray<FSlateFontInfo>                             Font;                                                       // 0x0028   (0x0010)  
	TArray<int32_t>                                    FontSize;                                                   // 0x0038   (0x0010)  
	TArray<FName>                                      TypefaceFontName;                                           // 0x0048   (0x0010)  
	TArray<FVector2D>                                  ShadowOffset;                                               // 0x0058   (0x0010)  
	TArray<FSlateColor>                                ShadowColorAndOpacity;                                      // 0x0068   (0x0010)  
	TArray<float>                                      DialogueMsgSpeed;                                           // 0x0078   (0x0010)  
	TArray<float>                                      DialogueMsgWait;                                            // 0x0088   (0x0010)  
	TArray<FMargin>                                    PaddingMargin;                                              // 0x0098   (0x0010)  
	TArray<FString>                                    HypertextReference;                                         // 0x00A8   (0x0010)  
	TArray<FSlateColor>                                HypertextHoveredColor;                                      // 0x00B8   (0x0010)  
	TArray<FSlateColor>                                HypertextVisitedColor;                                      // 0x00C8   (0x0010)  
	TArray<class UClass*>                              BackgroundButtonClass;                                      // 0x00D8   (0x0010)  
	TWeakObjectPtr<class UTexture2D*>                  Texture2D;                                                  // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x00F0   (0x0028)  MISSED
	TWeakObjectPtr<class UMaterial*>                   Material;                                                   // 0x0118   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0120   (0x0028)  MISSED
	TWeakObjectPtr<class UPaperSprite*>                PaperSprite;                                                // 0x0148   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0150   (0x0028)  MISSED
	TWeakObjectPtr<class USoundBase*>                  DialogueSound;                                              // 0x0178   (0x0008)  
	unsigned char                                      UnknownData03_6[0x28];                                      // 0x0180   (0x0028)  MISSED
	TArray<float>                                      DialogueSoundVolumeMultiplier;                              // 0x01A8   (0x0010)  
	TArray<float>                                      DialogueSoundPitchMultiplier;                               // 0x01B8   (0x0010)  
	TArray<float>                                      DialogueSoundStartTime;                                     // 0x01C8   (0x0010)  
	TWeakObjectPtr<class UPaperFlipbook*>              PaperFlipbook;                                              // 0x01D8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x28];                                      // 0x01E0   (0x0028)  MISSED
	TArray<FVector2D>                                  ImageSize;                                                  // 0x0208   (0x0010)  
	FHorizonDialogueSegmentInfoRubyTextStyle           RubyTextStyleInfo;                                          // 0x0218   (0x0060)  
};

/// Class /Script/HorizonUI.HorizonDialogueMsgTextBlock
/// Size: 0x0568 (1384 bytes) (0x000178 - 0x000568) align 8 MaxSize: 0x0568
class UHorizonDialogueMsgTextBlock : public UCanvasPanel
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0178   (0x0008)  MISSED
	SDK_UNDEFINED(16,441) /* FMulticastInlineDelegate */ __um(OnHypertextClickedDelegate);                         // 0x0180   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0190   (0x0018)  MISSED
	SDK_UNDEFINED(16,442) /* FMulticastInlineDelegate */ __um(OnHypertextPressedDelegate);                         // 0x01A8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x01B8   (0x0018)  MISSED
	SDK_UNDEFINED(16,443) /* FMulticastInlineDelegate */ __um(OnHypertextReleasedDelegate);                        // 0x01D0   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x01E0   (0x0018)  MISSED
	SDK_UNDEFINED(16,444) /* FMulticastInlineDelegate */ __um(OnHypertextHoveredDelegate);                         // 0x01F8   (0x0010)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x0208   (0x0018)  MISSED
	SDK_UNDEFINED(16,445) /* FMulticastInlineDelegate */ __um(OnHypertextUnhoveredDelegate);                       // 0x0220   (0x0010)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x0230   (0x0018)  MISSED
	SDK_UNDEFINED(16,446) /* FMulticastInlineDelegate */ __um(OnDialogueMsgLoopFunction);                          // 0x0248   (0x0010)  
	unsigned char                                      UnknownData06_6[0x18];                                      // 0x0258   (0x0018)  MISSED
	SDK_UNDEFINED(16,447) /* FMulticastInlineDelegate */ __um(OnDialogueMsgCompleteFunction);                      // 0x0270   (0x0010)  
	unsigned char                                      UnknownData07_6[0x18];                                      // 0x0280   (0x0018)  MISSED
	SDK_UNDEFINED(16,448) /* FMulticastInlineDelegate */ __um(OnSetDialoguePageFunction);                          // 0x0298   (0x0010)  
	unsigned char                                      UnknownData08_6[0x18];                                      // 0x02A8   (0x0018)  MISSED
	SDK_UNDEFINED(16,449) /* FMulticastInlineDelegate */ __um(OnDialoguePageEndFunction);                          // 0x02C0   (0x0010)  
	unsigned char                                      UnknownData09_6[0x18];                                      // 0x02D0   (0x0018)  MISSED
	SDK_UNDEFINED(16,450) /* FMulticastInlineDelegate */ __um(OnRebuildDialogueDelegate);                          // 0x02E8   (0x0010)  
	unsigned char                                      UnknownData10_6[0x18];                                      // 0x02F8   (0x0018)  MISSED
	SDK_UNDEFINED(16,451) /* FMulticastInlineDelegate */ __um(OnCustomEventDelegate);                              // 0x0310   (0x0010)  
	unsigned char                                      UnknownData11_6[0x18];                                      // 0x0320   (0x0018)  MISSED
	SDK_UNDEFINED(16,452) /* FMulticastInlineDelegate */ __um(OnCharAdvancedDelegate);                             // 0x0338   (0x0010)  
	unsigned char                                      UnknownData12_6[0x18];                                      // 0x0348   (0x0018)  MISSED
	FText                                              Text;                                                       // 0x0360   (0x0018)  
	EHorizonDialogueTextOverflowWrapMethod             TextOverFlowWrapMethod;                                     // 0x0378   (0x0001)  
	EHorizonDialogueTextOverflowWarpMethod_DEPRECATED  TextOverFlowWarpMethod;                                     // 0x0379   (0x0001)  
	unsigned char                                      UnknownData13_6[0x2];                                       // 0x037A   (0x0002)  MISSED
	float                                              DialogueMsgSpeed;                                           // 0x037C   (0x0004)  
	bool                                               bIsStartTickDialogueMsg;                                    // 0x0380   (0x0001)  
	bool                                               bIsRepeatDialogueMsg;                                       // 0x0381   (0x0001)  
	unsigned char                                      UnknownData14_6[0x2];                                       // 0x0382   (0x0002)  MISSED
	float                                              RepeatDialogueMsgInterval;                                  // 0x0384   (0x0004)  
	bool                                               bIsDialogueMsgText;                                         // 0x0388   (0x0001)  
	bool                                               bIsAutoNextDialogueMsgPage;                                 // 0x0389   (0x0001)  
	unsigned char                                      UnknownData15_6[0x2];                                       // 0x038A   (0x0002)  MISSED
	float                                              AutoNextDialogueMsgPageIntervalRate;                        // 0x038C   (0x0004)  
	float                                              AutoNextDialogueMsgPageIntervalMin;                         // 0x0390   (0x0004)  
	float                                              AutoNextDialogueMsgPageIntervalMax;                         // 0x0394   (0x0004)  
	bool                                               bIgnoreTimeDilation;                                        // 0x0398   (0x0001)  
	unsigned char                                      UnknownData16_6[0x3];                                       // 0x0399   (0x0003)  MISSED
	float                                              CustomTimeDilation;                                         // 0x039C   (0x0004)  
	bool                                               bForceRebuildDialogueMsgText;                               // 0x03A0   (0x0001)  
	bool                                               bEnableBlinkingCursor;                                      // 0x03A1   (0x0001)  
	unsigned char                                      UnknownData17_6[0x6];                                       // 0x03A2   (0x0006)  MISSED
	FHorizonDialogueBlinkingCursorInfo                 BlinkCursorInfo;                                            // 0x03A8   (0x0070)  
	TArray<class UClass*>                              StyleInfoClassList;                                         // 0x0418   (0x0010)  
	TArray<FHorizonDialogueSegmentInfoStyle>           SegmentStyleList;                                           // 0x0428   (0x0010)  
	bool                                               bIsRichText;                                                // 0x0438   (0x0001)  
	unsigned char                                      UnknownData18_6[0x3];                                       // 0x0439   (0x0003)  MISSED
	FSlateColor                                        ColorAndOpacity;                                            // 0x043C   (0x0014)  
	FSlateFontInfo                                     Font;                                                       // 0x0450   (0x0058)  
	FVector2D                                          ShadowOffset;                                               // 0x04A8   (0x0010)  
	FLinearColor                                       ShadowColorAndOpacity;                                      // 0x04B8   (0x0010)  
	TEnumAsByte<ETextJustify>                          Justification;                                              // 0x04C8   (0x0001)  
	unsigned char                                      UnknownData19_6[0x3];                                       // 0x04C9   (0x0003)  MISSED
	FMargin                                            LineMargin;                                                 // 0x04CC   (0x0010)  
	unsigned char                                      UnknownData20_6[0x4];                                       // 0x04DC   (0x0004)  MISSED
	class UClass*                                      DefaultButtonStyleWidgetClass;                              // 0x04E0   (0x0008)  
	TArray<class UClass*>                              DecoratorClasses;                                           // 0x04E8   (0x0010)  
	unsigned char                                      UnknownData21_6[0x50];                                      // 0x04F8   (0x0050)  MISSED
	TArray<class UHorizonDialogueStyleInfo*>           StyleInfoList;                                              // 0x0548   (0x0010)  
	unsigned char                                      UnknownData22_7[0x10];                                      // 0x0558   (0x0010)  MISSED


	/// Functions
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.StopDialogue
	// void StopDialogue();                                                                                                     // [0xa54070] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.StartDialogue
	// void StartDialogue();                                                                                                    // [0xa54050] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SkipDialogue
	// void SkipDialogue();                                                                                                     // [0xa54030] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SkipCurrentDialoguePage
	// void SkipCurrentDialoguePage();                                                                                          // [0xa54010] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SkipCurrentDialogueMsgPageTick
	// void SkipCurrentDialogueMsgPageTick();                                                                                   // [0xa53ff0] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetTextOverflowWrapMethod
	// void SetTextOverflowWrapMethod(EHorizonDialogueTextOverflowWrapMethod InOverflowWrapMethod);                             // [0xa53f70] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetTextAndRebuildDialogueImmediately
	// void SetTextAndRebuildDialogueImmediately(FText& InText);                                                                // [0xa53e90] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetTextAndRebuildDialogue
	// void SetTextAndRebuildDialogue(FText& InText);                                                                           // [0xa53db0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetShadowOffset
	// void SetShadowOffset(FVector2D InShadowOffset, bool bForce);                                                             // [0xa53cd0] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetShadowColorAndOpacity
	// void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity, bool bForce);                                        // [0xa53bf0] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetRepeatDialogueMsgInterval
	// void SetRepeatDialogueMsgInterval(float interval);                                                                       // [0xa53b60] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                        // [0xa53ad0] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification, bool bForce);                                           // [0xa539f0] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetIsStartTickDialogueMsg
	// void SetIsStartTickDialogueMsg(bool bShouldStartTick, bool bShouldResetDialogue);                                        // [0xa53920] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetIsRepeatDialogueMsg
	// void SetIsRepeatDialogueMsg(bool B);                                                                                     // [0xa53890] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetIsDialogueMsgText
	// void SetIsDialogueMsgText(bool B);                                                                                       // [0xa53800] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetIsAutoNextDialogueMsgPage
	// void SetIsAutoNextDialogueMsgPage(bool B);                                                                               // [0xa53770] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetFontSize
	// void SetFontSize(int32_t FontSize);                                                                                      // [0xa536e0] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetFont
	// void SetFont(FSlateFontInfo InFontInfo, bool bForce);                                                                    // [0xa53560] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetDialogueMsgSpeed
	// void SetDialogueMsgSpeed(float Speed, bool bForce);                                                                      // [0xa53480] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetDialogueMsgPage
	// void SetDialogueMsgPage(int32_t InPageIndex, bool bShouldStartTick);                                                     // [0xa533b0] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetColorAndOpacity
	// void SetColorAndOpacity(FSlateColor InColorAndOpacity);                                                                  // [0xa53310] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.SetAutoNextDialogueMsgPageIntervalRate
	// void SetAutoNextDialogueMsgPageIntervalRate(float InAutoNextDialogueMsgPageIntervalRate);                                // [0xa53280] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.ResumeDialogue
	// void ResumeDialogue();                                                                                                   // [0xa53090] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.RequestRebuildDialogue
	// void RequestRebuildDialogue();                                                                                           // [0xa53070] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.RebuildDialogueMsgTextBlock
	// void RebuildDialogueMsgTextBlock();                                                                                      // [0xa53050] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.PrevDialogueMsgPage
	// void PrevDialogueMsgPage(bool bShouldStartTick);                                                                         // [0xa52fc0] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.PauseDialogue
	// void PauseDialogue();                                                                                                    // [0xa52dd0] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonHypertextEvent__DelegateSignature
	// void OnHorizonHypertextEvent__DelegateSignature(FHorizonDialogueHypertextResult& InResult);                              // [0x2c97800] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialoguePageEvent__DelegateSignature
	// void OnHorizonDialoguePageEvent__DelegateSignature(FHorizonDialogueDialoguePageResult& InResult);                        // [0x2c97800] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialogueMsgEvent__DelegateSignature
	// void OnHorizonDialogueMsgEvent__DelegateSignature();                                                                     // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialogueCustomEvent__DelegateSignature
	// void OnHorizonDialogueCustomEvent__DelegateSignature(FString InEventName, FHorizonDialogueSegmentInfo& InSegInfo);       // [0x2c97800] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.OnHorizonDialogueCharAdvancedEvent__DelegateSignature
	// void OnHorizonDialogueCharAdvancedEvent__DelegateSignature(FHorizonDialogueBlockInfo& InCurrentBlockInfo);               // [0x2c97800] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.NextDialogueMsgPage
	// void NextDialogueMsgPage(bool bShouldStartTick);                                                                         // [0xa52ca0] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.IsDialogueMsgPageEnd
	// bool IsDialogueMsgPageEnd();                                                                                             // [0xa52bf0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.IsDialogueMsgCompleted
	// bool IsDialogueMsgCompleted();                                                                                           // [0xa52bc0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.GetTextOverflowWrapMethod
	// EHorizonDialogueTextOverflowWrapMethod GetTextOverflowWrapMethod();                                                      // [0xa52b90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.GetTextLength
	// int32_t GetTextLength();                                                                                                 // [0xa52b60] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.GetText
	// FText GetText();                                                                                                         // [0xa52ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.GetPageTextByIndex
	// FText GetPageTextByIndex(int32_t PageIndex);                                                                             // [0xa529c0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.GetNumPage
	// int32_t GetNumPage();                                                                                                    // [0xa52990] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.GetNumLine
	// int32_t GetNumLine();                                                                                                    // [0xa52960] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.GetJustification
	// TEnumAsByte<ETextJustify> GetJustification();                                                                            // [0xa52940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.GetCurrentPageTextLength
	// int32_t GetCurrentPageTextLength();                                                                                      // [0xa52910] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.GetCurrentPageIndex
	// int32_t GetCurrentPageIndex();                                                                                           // [0xa528f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HorizonUI.HorizonDialogueMsgTextBlock.GetBlinkCursorWidget
	// class UHorizonFlipbookWidget* GetBlinkCursorWidget();                                                                    // [0xa528c0] Native|Public|Const  
};

/// Class /Script/HorizonUI.HorizonDialogueStyleInfo
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UHorizonDialogueStyleInfo : public UObject
{ 
public:
	TArray<FHorizonDialogueSegmentInfoStyle>           SegmentStyleList;                                           // 0x0028   (0x0010)  
};

/// Class /Script/HorizonUI.HorizonFileSystem
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UHorizonFileSystem : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED


	/// Functions
	// Function /Script/HorizonUI.HorizonFileSystem.LoadUAsset
	// class UObject* LoadUAsset(FString InPackageFilePath);                                                                    // [0xa58ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFileSystem.LoadTexture2D
	// class UTexture2D* LoadTexture2D(FString InPackageFilePath, int32_t& OutWidth, int32_t& OutHeight);                       // [0xa58990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFileSystem.LoadSound
	// class USoundBase* LoadSound(FString InPackageFilePath);                                                                  // [0xa588e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFileSystem.LoadPaperFlipbook
	// class UPaperFlipbook* LoadPaperFlipbook(FString InPackageFilePath);                                                      // [0xa58830] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFileSystem.LoadMaterial
	// class UMaterial* LoadMaterial(FString InPackageFilePath);                                                                // [0xa58780] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFileSystem.LoadFont
	// class UFont* LoadFont(FString InPackageFilePath);                                                                        // [0xa586d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFileSystem.GetInstance
	// class UHorizonFileSystem* GetInstance();                                                                                 // [0xa58140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFileSystem.DestroyInstance
	// void DestroyInstance();                                                                                                  // [0xa58030] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFileSystem.CreateDirectoryRecursively
	// void CreateDirectoryRecursively(FString InFolderToMake);                                                                 // [0xa57f40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HorizonUI.HorizonFlipbookWidget
/// Size: 0x0330 (816 bytes) (0x0002A8 - 0x000330) align 16 MaxSize: 0x0330
class UHorizonFlipbookWidget : public UImage
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02A8   (0x0008)  MISSED
	bool                                               bIsStartTick;                                               // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x02B1   (0x0003)  MISSED
	int32_t                                            NumOfLoop;                                                  // 0x02B4   (0x0004)  
	bool                                               bAnimationFinished;                                         // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x02B9   (0x0007)  MISSED
	class UPaperFlipbook*                              PaperFlipbook;                                              // 0x02C0   (0x0008)  
	SDK_UNDEFINED(16,453) /* FMulticastInlineDelegate */ __um(OnAnimationStart);                                   // 0x02C8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x02D8   (0x0018)  MISSED
	SDK_UNDEFINED(16,454) /* FMulticastInlineDelegate */ __um(OnAnimationFinished);                                // 0x02F0   (0x0010)  
	unsigned char                                      UnknownData04_7[0x30];                                      // 0x0300   (0x0030)  MISSED


	/// Functions
	// Function /Script/HorizonUI.HorizonFlipbookWidget.StopAnimation
	// void StopAnimation();                                                                                                    // [0xa59580] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFlipbookWidget.SetFlipbook
	// void SetFlipbook(class UPaperFlipbook* InFlipbook);                                                                      // [0xa591d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFlipbookWidget.SetCurrentAnimationDuration
	// void SetCurrentAnimationDuration(float InDuration);                                                                      // [0xa590c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFlipbookWidget.ResumeAnimation
	// void ResumeAnimation();                                                                                                  // [0xa590a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFlipbookWidget.ResetAnimation
	// void ResetAnimation();                                                                                                   // [0xa59080] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFlipbookWidget.PlayAnimation
	// void PlayAnimation();                                                                                                    // [0xa58d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFlipbookWidget.PauseAnimation
	// void PauseAnimation();                                                                                                   // [0xa58d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonFlipbookWidget.OnHorizonFlipbookStartEvent__DelegateSignature
	// void OnHorizonFlipbookStartEvent__DelegateSignature(int32_t InCurrentNumOfLoop);                                         // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/HorizonUI.HorizonFlipbookWidget.OnHorizonFlipbookEvent__DelegateSignature
	// void OnHorizonFlipbookEvent__DelegateSignature();                                                                        // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/HorizonUI.HorizonFlipbookWidget.GetCurrentAnimationDuration
	// float GetCurrentAnimationDuration();                                                                                     // [0xa58050] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HorizonUI.HorizonImage
/// Size: 0x02D0 (720 bytes) (0x0002A8 - 0x0002D0) align 16 MaxSize: 0x02D0
class UHorizonImage : public UImage
{ 
public:
	FBox2D                                             UVRegion;                                                   // 0x02A8   (0x0028)  
};

/// Class /Script/HorizonUI.HorizonListViewItemObject
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHorizonListViewItemObject : public UObject
{ 
public:
};

/// Class /Script/HorizonUI.HorizonListViewItemWidget
/// Size: 0x0290 (656 bytes) (0x000280 - 0x000290) align 8 MaxSize: 0x0290
class UHorizonListViewItemWidget : public UUserWidget
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0280   (0x0008)  MISSED
	class UButton*                                     Button_ClickArea;                                           // 0x0288   (0x0008)  


	/// Functions
	// Function /Script/HorizonUI.HorizonListViewItemWidget.SynchronizeProperties
	// void SynchronizeProperties();                                                                                            // [0xa54090] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonListViewItemWidget.OnSynchronizeProperties
	// void OnSynchronizeProperties();                                                                                          // [0xa52c80] Native|Event|Public|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonListViewItemWidget.OnListItemObjectUnhovered
	// void OnListItemObjectUnhovered();                                                                                        // [0xa52c20] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonListViewItemWidget.OnListItemObjectReleased
	// void OnListItemObjectReleased();                                                                                         // [0x9de110] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonListViewItemWidget.OnListItemObjectPressed
	// void OnListItemObjectPressed();                                                                                          // [0xa52c60] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonListViewItemWidget.OnListItemObjectHovered
	// void OnListItemObjectHovered();                                                                                          // [0xa52c40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonListViewItemWidget.OnListItemObjectClicked
	// void OnListItemObjectClicked();                                                                                          // [0x9de0f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonUnhovered
	// void OnListItemObjectButtonUnhovered();                                                                                  // [0xa58d30] Native|Protected     
	// Function /Script/HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonReleased
	// void OnListItemObjectButtonReleased();                                                                                   // [0xa58d10] Native|Protected     
	// Function /Script/HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonPressed
	// void OnListItemObjectButtonPressed();                                                                                    // [0xa58cf0] Native|Protected     
	// Function /Script/HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonHovered
	// void OnListItemObjectButtonHovered();                                                                                    // [0xa58cd0] Native|Protected     
	// Function /Script/HorizonUI.HorizonListViewItemWidget.OnListItemObjectButtonClicked
	// void OnListItemObjectButtonClicked();                                                                                    // [0xa58cb0] Native|Protected     
};

/// Struct /Script/HorizonUI.HorizonMultiToggleButtonState
/// Size: 0x0100 (256 bytes) (0x000000 - 0x000100) align 16 MaxSize: 0x0100
struct FHorizonMultiToggleButtonState
{ 
	FText                                              Text;                                                       // 0x0000   (0x0018)  
	FLinearColor                                       TextColor;                                                  // 0x0018   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	FSlateBrush                                        Brush;                                                      // 0x0030   (0x00D0)  
};

/// Class /Script/HorizonUI.HorizonMultiToggleButtonWidget
/// Size: 0x0308 (776 bytes) (0x000280 - 0x000308) align 8 MaxSize: 0x0308
class UHorizonMultiToggleButtonWidget : public UHorizonDesignableUserWidget
{ 
public:
	SDK_UNDEFINED(16,455) /* FMulticastInlineDelegate */ __um(OnStateSyncDelegate);                                // 0x0280   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0290   (0x0018)  MISSED
	SDK_UNDEFINED(16,456) /* FMulticastInlineDelegate */ __um(OnStateChangedDelegate);                             // 0x02A8   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x02B8   (0x0018)  MISSED
	class UButton*                                     Button_ToggleState_Prev;                                    // 0x02D0   (0x0008)  
	class UButton*                                     Button_ToggleState_Next;                                    // 0x02D8   (0x0008)  
	class UTextBlock*                                  TextBlock_CurrentState;                                     // 0x02E0   (0x0008)  
	class UImage*                                      Image_CurrentState;                                         // 0x02E8   (0x0008)  
	TArray<FHorizonMultiToggleButtonState>             StateList;                                                  // 0x02F0   (0x0010)  
	bool                                               bLoopToggleState;                                           // 0x0300   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0301   (0x0003)  MISSED
	int32_t                                            CurrentStateIndex;                                          // 0x0304   (0x0004)  


	/// Functions
	// Function /Script/HorizonUI.HorizonMultiToggleButtonWidget.ToggleState_Prev
	// void ToggleState_Prev();                                                                                                 // [0x9de110] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonMultiToggleButtonWidget.ToggleState_Next
	// void ToggleState_Next();                                                                                                 // [0xa52c60] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonMultiToggleButtonWidget.SetLoopToggleState
	// void SetLoopToggleState(bool InLoopToggleState);                                                                         // [0xa593f0] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonMultiToggleButtonWidget.SetCurrentStateIndex
	// void SetCurrentStateIndex(int32_t InStateIndex);                                                                         // [0xa59140] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonMultiToggleButtonWidget.OnHorizonMultiToggleButtonSyncEvent__DelegateSignature
	// void OnHorizonMultiToggleButtonSyncEvent__DelegateSignature(int32_t InCurrentStateIndex);                                // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/HorizonUI.HorizonMultiToggleButtonWidget.OnHorizonMultiToggleButtonEvent__DelegateSignature
	// void OnHorizonMultiToggleButtonEvent__DelegateSignature(int32_t InCurrentStateIndex, int32_t InToStateIndex);            // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/HorizonUI.HorizonMultiToggleButtonWidget.GetToggleState_PrevIndex
	// int32_t GetToggleState_PrevIndex();                                                                                      // [0xa582b0] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HorizonUI.HorizonMultiToggleButtonWidget.GetToggleState_NextIndex
	// int32_t GetToggleState_NextIndex();                                                                                      // [0xa58280] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HorizonUI.HorizonMultiToggleButtonWidget.GetLoopToggleState
	// bool GetLoopToggleState();                                                                                               // [0xa58190] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HorizonUI.HorizonMultiToggleButtonWidget.GetCurrentStateIndex
	// int32_t GetCurrentStateIndex();                                                                                          // [0xa58080] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HorizonUI.HorizonRadioButtonUserWidget
/// Size: 0x0310 (784 bytes) (0x000280 - 0x000310) align 8 MaxSize: 0x0310
class UHorizonRadioButtonUserWidget : public UHorizonDesignableUserWidget
{ 
public:
	SDK_UNDEFINED(16,457) /* FMulticastInlineDelegate */ __um(OnCheckedDelegate);                                  // 0x0280   (0x0010)  
	SDK_UNDEFINED(16,458) /* FMulticastInlineDelegate */ __um(OnUnCheckedDelegate);                                // 0x0290   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x02A0   (0x0030)  MISSED
	class UCheckBox*                                   CheckBox_Main;                                              // 0x02D0   (0x0008)  
	class UTextBlock*                                  TextBlock_Main;                                             // 0x02D8   (0x0008)  
	FText                                              Text_Main;                                                  // 0x02E0   (0x0018)  
	bool                                               bCheckedByDefault;                                          // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x17];                                      // 0x02F9   (0x0017)  MISSED


	/// Functions
	// Function /Script/HorizonUI.HorizonRadioButtonUserWidget.SetChecked
	// void SetChecked();                                                                                                       // [0x9de110] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonRadioButtonUserWidget.OnHorizonRadioButtonEvent__DelegateSignature
	// void OnHorizonRadioButtonEvent__DelegateSignature();                                                                     // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/HorizonUI.HorizonRadioButtonUserWidget.NativeOnCheckStateChanged
	// void NativeOnCheckStateChanged(bool bIsChecked);                                                                         // [0xa58b90] Native|Protected     
	// Function /Script/HorizonUI.HorizonRadioButtonUserWidget.BP_OnCheckStateChanged
	// void BP_OnCheckStateChanged(bool bIsChecked);                                                                            // [0x2c97800] Event|Protected|BlueprintEvent 
};

/// Class /Script/HorizonUI.HorizonTextBlock
/// Size: 0x0340 (832 bytes) (0x000338 - 0x000340) align 16 MaxSize: 0x0340
class UHorizonTextBlock : public UTextBlock
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0338   (0x0008)  MISSED


	/// Functions
	// Function /Script/HorizonUI.HorizonTextBlock.GetJustification
	// TEnumAsByte<ETextJustify> GetJustification();                                                                            // [0xa58170] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HorizonUI.HorizonTileView
/// Size: 0x0D60 (3424 bytes) (0x000C50 - 0x000D60) align 16 MaxSize: 0x0D60
class UHorizonTileView : public UTileView
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0C50   (0x0008)  MISSED
	SDK_UNDEFINED(16,459) /* FMulticastInlineDelegate */ __um(OnInitListItemEvent);                                // 0x0C58   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0C68   (0x0018)  MISSED
	SDK_UNDEFINED(16,460) /* FMulticastInlineDelegate */ __um(OnItemPressedEvent);                                 // 0x0C80   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0C90   (0x0018)  MISSED
	SDK_UNDEFINED(16,461) /* FMulticastInlineDelegate */ __um(OnItemReleasedEvent);                                // 0x0CA8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x18];                                      // 0x0CB8   (0x0018)  MISSED
	SDK_UNDEFINED(16,462) /* FMulticastInlineDelegate */ __um(OnItemHoveredEvent);                                 // 0x0CD0   (0x0010)  
	unsigned char                                      UnknownData04_6[0x18];                                      // 0x0CE0   (0x0018)  MISSED
	SDK_UNDEFINED(16,463) /* FMulticastInlineDelegate */ __um(OnItemUnhoveredEvent);                               // 0x0CF8   (0x0010)  
	unsigned char                                      UnknownData05_6[0x18];                                      // 0x0D08   (0x0018)  MISSED
	SDK_UNDEFINED(16,464) /* FMulticastInlineDelegate */ __um(OnItemClickedEvent);                                 // 0x0D20   (0x0010)  
	unsigned char                                      UnknownData06_7[0x30];                                      // 0x0D30   (0x0030)  MISSED


	/// Functions
	// Function /Script/HorizonUI.HorizonTileView.SynchronizeProperties
	// void SynchronizeProperties();                                                                                            // [0xa54090] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonTileView.RerouteItemUnhovered
	// void RerouteItemUnhovered(class UObject* InItem);                                                                        // [0xa58ff0] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonTileView.RerouteItemReleased
	// void RerouteItemReleased(class UObject* InItem);                                                                         // [0xa58f60] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonTileView.RerouteItemPressed
	// void RerouteItemPressed(class UObject* InItem);                                                                          // [0xa58ed0] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonTileView.RerouteItemHovered
	// void RerouteItemHovered(class UObject* InItem);                                                                          // [0xa58e40] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonTileView.RerouteItemClicked
	// void RerouteItemClicked(class UObject* InItem);                                                                          // [0xa58db0] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonTileView.RequestListRefresh
	// void RequestListRefresh();                                                                                               // [0xa58d90] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonTileView.OnItemEvent__DelegateSignature
	// void OnItemEvent__DelegateSignature(class UObject* InItem);                                                              // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/HorizonUI.HorizonTileView.OnInitListItemEvent__DelegateSignature
	// void OnInitListItemEvent__DelegateSignature(class UHorizonTileView* InTileView);                                         // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/HorizonUI.HorizonTileView.NavigateToAndSelectIndex
	// void NavigateToAndSelectIndex(int32_t InIndex);                                                                          // [0xa58c20] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonTileView.IsPendingRefresh
	// bool IsPendingRefresh();                                                                                                 // [0xa586a0] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HorizonUI.HorizonTileView.IsFocusable
	// bool IsFocusable();                                                                                                      // [0xa585e0] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HorizonUI.HorizonTileView.InitListItem
	// void InitListItem();                                                                                                     // [0xa58530] Native|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonTileView.GetNumGeneratedChildren
	// int32_t GetNumGeneratedChildren();                                                                                       // [0xa581c0] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HorizonUI.HorizonTileView.BP_GetEntryWidgetFromItem
	// class UHorizonListViewItemWidget* BP_GetEntryWidgetFromItem(class UObject* InItem);                                      // [0xa57ea0] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/HorizonUI.HorizonWidgetFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHorizonWidgetFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/HorizonUI.HorizonWidgetFunctionLibrary.SetWidgetVisibility
	// class UWidget* SetWidgetVisibility(class UUserWidget* UserWidget, FName WidgetName, ESlateVisibility eVisiblity);        // [0xa59480] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonWidgetFunctionLibrary.SetInputMode
	// void SetInputMode(class APlayerController* InPC, EHorizonUIInputMode InInputMode, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bInHideCursorDuringCapture); // [0xa59260] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonWidgetFunctionLibrary.IsIdeographic
	// bool IsIdeographic(int32_t InCodePoint);                                                                                 // [0xa58610] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HorizonUI.HorizonWidgetFunctionLibrary.IsAlphabetic
	// bool IsAlphabetic(int32_t InCodePoint);                                                                                  // [0xa58550] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HorizonUI.HorizonWidgetFunctionLibrary.GetWidgetFromNameRecursively
	// class UWidget* GetWidgetFromNameRecursively(class UUserWidget* pUserWidget, FName& InWidgetName);                        // [0xa58450] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonWidgetFunctionLibrary.GetUserWidgetAnimation
	// class UWidgetAnimation* GetUserWidgetAnimation(class UUserWidget* pUserWidget, FName& animeName);                        // [0xa58370] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonWidgetFunctionLibrary.GetUserIndex
	// int32_t GetUserIndex(class UWidget* InWidget);                                                                           // [0xa582e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HorizonUI.HorizonWidgetFunctionLibrary.GetParentCanvasPanelSlot
	// class UCanvasPanelSlot* GetParentCanvasPanelSlot(class UWidget* pWidget);                                                // [0xa581f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HorizonUI.HorizonWidgetFunctionLibrary.GetInputMode
	// EHorizonUIInputMode GetInputMode(class APlayerController* InPC);                                                         // [0xa580b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/HorizonUI.HorizonDialogueBlockInfo
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FHorizonDialogueBlockInfo
{ 
	FString                                            MsgText;                                                    // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x0010   (0x0010)  MISSED
	FString                                            RubyText;                                                   // 0x0020   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0030   (0x0008)  MISSED
	int32_t                                            CurrentCharIndex;                                           // 0x0038   (0x0004)  
	int32_t                                            SegmentReferenceIndex;                                      // 0x003C   (0x0004)  
	FName                                              Name;                                                       // 0x0040   (0x0008)  
	FVector2D                                          BlockSize;                                                  // 0x0048   (0x0010)  
	FVector2D                                          RubyTextBlockSize;                                          // 0x0058   (0x0010)  
};

/// Struct /Script/HorizonUI.HorizonDialogueRubyTextInfo
/// Size: 0x00C0 (192 bytes) (0x000000 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FHorizonDialogueRubyTextInfo
{ 
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0000   (0x0018)  MISSED
	FSlateColor                                        ColorAndOpacity;                                            // 0x0018   (0x0014)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0030   (0x0058)  
	FVector2D                                          ShadowOffset;                                               // 0x0088   (0x0010)  
	FSlateColor                                        ShadowColorAndOpacity;                                      // 0x0098   (0x0014)  
	FMargin                                            PaddingMargin;                                              // 0x00AC   (0x0010)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Struct /Script/HorizonUI.HorizonDialogueSegmentInfo
/// Size: 0x0270 (624 bytes) (0x000000 - 0x000270) align 8 MaxSize: 0x0270
struct FHorizonDialogueSegmentInfo
{ 
	FString                                            Text;                                                       // 0x0000   (0x0010)  
	FSlateColor                                        ColorAndOpacity;                                            // 0x0010   (0x0014)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FSlateFontInfo                                     Font;                                                       // 0x0028   (0x0058)  
	FVector2D                                          ShadowOffset;                                               // 0x0080   (0x0010)  
	FSlateColor                                        ShadowColorAndOpacity;                                      // 0x0090   (0x0014)  
	float                                              DialogueMsgSpeed;                                           // 0x00A4   (0x0004)  
	float                                              DialogueMsgWait;                                            // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FMargin                                            PaddingMargin;                                              // 0x00B0   (0x0010)  
	FSlateColor                                        HypertextHoveredColor;                                      // 0x00C0   (0x0014)  
	FSlateColor                                        HypertextVisitedColor;                                      // 0x00D4   (0x0014)  
	class UClass*                                      BackgroundButtonClass;                                      // 0x00E8   (0x0008)  
	float                                              DialogueSoundVolumeMultiplier;                              // 0x00F0   (0x0004)  
	float                                              DialogueSoundPitchMultiplier;                               // 0x00F4   (0x0004)  
	float                                              DialogueSoundStartTime;                                     // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	class USoundBase*                                  DialogueSound;                                              // 0x0100   (0x0008)  
	unsigned char                                      UnknownData03_6[0x88];                                      // 0x0108   (0x0088)  MISSED
	FString                                            EventPayload;                                               // 0x0190   (0x0010)  
	TArray<FString>                                    Tags;                                                       // 0x01A0   (0x0010)  
	FHorizonDialogueRubyTextInfo                       RubyTextInfo;                                               // 0x01B0   (0x00C0)  
};

/// Struct /Script/HorizonUI.HorizonDialogueDialoguePageResult
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FHorizonDialogueDialoguePageResult
{ 
	int32_t                                            PageIndex;                                                  // 0x0000   (0x0004)  
};

/// Struct /Script/HorizonUI.HorizonDialogueHypertextResult
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FHorizonDialogueHypertextResult
{ 
	class UHorizonDialogueMsgTextBlock*                DialogueMsgTextBlock;                                       // 0x0000   (0x0008)  
	int32_t                                            SegmentIndex;                                               // 0x0008   (0x0004)  
	int32_t                                            LineIndex;                                                  // 0x000C   (0x0004)  
	int32_t                                            BlockIndex;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            HypertextReference;                                         // 0x0018   (0x0010)  
	TMap<FString, FString>                             UrlEncodeMap;                                               // 0x0028   (0x0050)  
};

/// Struct /Script/HorizonUI.HorizonDialogueLineInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FHorizonDialogueLineInfo
{ 
	int32_t                                            CurrentDialogueBlockIndex;                                  // 0x0000   (0x0004)  
	int32_t                                            MaxLineHeight;                                              // 0x0004   (0x0004)  
	int32_t                                            LineWidth;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FHorizonDialogueBlockInfo>                  DialogueBlockInfoList;                                      // 0x0010   (0x0010)  
	FVector2D                                          position;                                                   // 0x0020   (0x0010)  
	bool                                               bNewPage;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/HorizonUI.HorizonDialoguePageInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FHorizonDialoguePageInfo
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UHorizonButton) == 0x06B0); // 1712 bytes (0x0005E8 - 0x0006B0)
static_assert(sizeof(UHorizonUserWidget) == 0x0280); // 640 bytes (0x000280 - 0x000280)
static_assert(sizeof(UHorizonDesignableUserWidget) == 0x0280); // 640 bytes (0x000280 - 0x000280)
static_assert(sizeof(UHorizonButtonUserWidget) == 0x04B0); // 1200 bytes (0x000280 - 0x0004B0)
static_assert(sizeof(UHorizonDialogueMsgDecorator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHorizonDialogueMsgSpaceDecorator) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(FHorizonDialogueBlinkingCursorInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FHorizonDialogueSegmentInfoRubyTextStyle) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FHorizonDialogueSegmentInfoStyle) == 0x0278); // 632 bytes (0x000000 - 0x000278)
static_assert(sizeof(UHorizonDialogueMsgTextBlock) == 0x0568); // 1384 bytes (0x000178 - 0x000568)
static_assert(sizeof(UHorizonDialogueStyleInfo) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UHorizonFileSystem) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UHorizonFlipbookWidget) == 0x0330); // 816 bytes (0x0002A8 - 0x000330)
static_assert(sizeof(UHorizonImage) == 0x02D0); // 720 bytes (0x0002A8 - 0x0002D0)
static_assert(sizeof(UHorizonListViewItemObject) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UHorizonListViewItemWidget) == 0x0290); // 656 bytes (0x000280 - 0x000290)
static_assert(sizeof(FHorizonMultiToggleButtonState) == 0x0100); // 256 bytes (0x000000 - 0x000100)
static_assert(sizeof(UHorizonMultiToggleButtonWidget) == 0x0308); // 776 bytes (0x000280 - 0x000308)
static_assert(sizeof(UHorizonRadioButtonUserWidget) == 0x0310); // 784 bytes (0x000280 - 0x000310)
static_assert(sizeof(UHorizonTextBlock) == 0x0340); // 832 bytes (0x000338 - 0x000340)
static_assert(sizeof(UHorizonTileView) == 0x0D60); // 3424 bytes (0x000C50 - 0x000D60)
static_assert(sizeof(UHorizonWidgetFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FHorizonDialogueBlockInfo) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FHorizonDialogueRubyTextInfo) == 0x00C0); // 192 bytes (0x000000 - 0x0000C0)
static_assert(sizeof(FHorizonDialogueSegmentInfo) == 0x0270); // 624 bytes (0x000000 - 0x000270)
static_assert(sizeof(FHorizonDialogueDialoguePageResult) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FHorizonDialogueHypertextResult) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FHorizonDialogueLineInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FHorizonDialoguePageInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(offsetof(UHorizonButtonUserWidget, Button_Main) == 0x0398);
static_assert(offsetof(UHorizonButtonUserWidget, TextBlock_Main) == 0x03A0);
static_assert(offsetof(UHorizonButtonUserWidget, Image_Main) == 0x03A8);
static_assert(offsetof(UHorizonButtonUserWidget, Text_Main) == 0x03B0);
static_assert(offsetof(UHorizonButtonUserWidget, SlateBrush_ImageMain) == 0x03D0);
static_assert(offsetof(UHorizonDialogueMsgSpaceDecorator, FirstLineSpaceL) == 0x0028);
static_assert(offsetof(UHorizonDialogueMsgSpaceDecorator, Space) == 0x0040);
static_assert(offsetof(FHorizonDialogueBlinkingCursorInfo, Flipbook) == 0x0000);
static_assert(offsetof(FHorizonDialogueBlinkingCursorInfo, ColorAndOpacity) == 0x0030);
static_assert(offsetof(FHorizonDialogueBlinkingCursorInfo, Size) == 0x0048);
static_assert(offsetof(FHorizonDialogueBlinkingCursorInfo, PaddingPos) == 0x0058);
static_assert(offsetof(FHorizonDialogueSegmentInfoRubyTextStyle, Text) == 0x0000);
static_assert(offsetof(FHorizonDialogueSegmentInfoRubyTextStyle, ColorAndOpacity) == 0x0010);
static_assert(offsetof(FHorizonDialogueSegmentInfoRubyTextStyle, Font) == 0x0020);
static_assert(offsetof(FHorizonDialogueSegmentInfoRubyTextStyle, ShadowOffset) == 0x0030);
static_assert(offsetof(FHorizonDialogueSegmentInfoRubyTextStyle, ShadowColorAndOpacity) == 0x0040);
static_assert(offsetof(FHorizonDialogueSegmentInfoRubyTextStyle, PaddingMargin) == 0x0050);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, StyleName) == 0x0000);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, Text) == 0x0008);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, ColorAndOpacity) == 0x0018);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, Font) == 0x0028);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, FontSize) == 0x0038);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, TypefaceFontName) == 0x0048);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, ShadowOffset) == 0x0058);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, ShadowColorAndOpacity) == 0x0068);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, DialogueMsgSpeed) == 0x0078);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, DialogueMsgWait) == 0x0088);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, PaddingMargin) == 0x0098);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, HypertextReference) == 0x00A8);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, HypertextHoveredColor) == 0x00B8);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, HypertextVisitedColor) == 0x00C8);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, BackgroundButtonClass) == 0x00D8);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, Texture2D) == 0x00E8);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, Material) == 0x0118);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, PaperSprite) == 0x0148);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, DialogueSound) == 0x0178);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, DialogueSoundVolumeMultiplier) == 0x01A8);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, DialogueSoundPitchMultiplier) == 0x01B8);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, DialogueSoundStartTime) == 0x01C8);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, PaperFlipbook) == 0x01D8);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, ImageSize) == 0x0208);
static_assert(offsetof(FHorizonDialogueSegmentInfoStyle, RubyTextStyleInfo) == 0x0218);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, Text) == 0x0360);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, TextOverFlowWrapMethod) == 0x0378);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, TextOverFlowWarpMethod) == 0x0379);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, BlinkCursorInfo) == 0x03A8);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, StyleInfoClassList) == 0x0418);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, SegmentStyleList) == 0x0428);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, ColorAndOpacity) == 0x043C);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, Font) == 0x0450);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, ShadowOffset) == 0x04A8);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, ShadowColorAndOpacity) == 0x04B8);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, Justification) == 0x04C8);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, LineMargin) == 0x04CC);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, DefaultButtonStyleWidgetClass) == 0x04E0);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, DecoratorClasses) == 0x04E8);
static_assert(offsetof(UHorizonDialogueMsgTextBlock, StyleInfoList) == 0x0548);
static_assert(offsetof(UHorizonDialogueStyleInfo, SegmentStyleList) == 0x0028);
static_assert(offsetof(UHorizonFlipbookWidget, PaperFlipbook) == 0x02C0);
static_assert(offsetof(UHorizonImage, UVRegion) == 0x02A8);
static_assert(offsetof(UHorizonListViewItemWidget, Button_ClickArea) == 0x0288);
static_assert(offsetof(FHorizonMultiToggleButtonState, Text) == 0x0000);
static_assert(offsetof(FHorizonMultiToggleButtonState, TextColor) == 0x0018);
static_assert(offsetof(FHorizonMultiToggleButtonState, Brush) == 0x0030);
static_assert(offsetof(UHorizonMultiToggleButtonWidget, Button_ToggleState_Prev) == 0x02D0);
static_assert(offsetof(UHorizonMultiToggleButtonWidget, Button_ToggleState_Next) == 0x02D8);
static_assert(offsetof(UHorizonMultiToggleButtonWidget, TextBlock_CurrentState) == 0x02E0);
static_assert(offsetof(UHorizonMultiToggleButtonWidget, Image_CurrentState) == 0x02E8);
static_assert(offsetof(UHorizonMultiToggleButtonWidget, StateList) == 0x02F0);
static_assert(offsetof(UHorizonRadioButtonUserWidget, CheckBox_Main) == 0x02D0);
static_assert(offsetof(UHorizonRadioButtonUserWidget, TextBlock_Main) == 0x02D8);
static_assert(offsetof(UHorizonRadioButtonUserWidget, Text_Main) == 0x02E0);
static_assert(offsetof(FHorizonDialogueBlockInfo, MsgText) == 0x0000);
static_assert(offsetof(FHorizonDialogueBlockInfo, RubyText) == 0x0020);
static_assert(offsetof(FHorizonDialogueBlockInfo, Name) == 0x0040);
static_assert(offsetof(FHorizonDialogueBlockInfo, BlockSize) == 0x0048);
static_assert(offsetof(FHorizonDialogueBlockInfo, RubyTextBlockSize) == 0x0058);
static_assert(offsetof(FHorizonDialogueRubyTextInfo, ColorAndOpacity) == 0x0018);
static_assert(offsetof(FHorizonDialogueRubyTextInfo, Font) == 0x0030);
static_assert(offsetof(FHorizonDialogueRubyTextInfo, ShadowOffset) == 0x0088);
static_assert(offsetof(FHorizonDialogueRubyTextInfo, ShadowColorAndOpacity) == 0x0098);
static_assert(offsetof(FHorizonDialogueRubyTextInfo, PaddingMargin) == 0x00AC);
static_assert(offsetof(FHorizonDialogueSegmentInfo, Text) == 0x0000);
static_assert(offsetof(FHorizonDialogueSegmentInfo, ColorAndOpacity) == 0x0010);
static_assert(offsetof(FHorizonDialogueSegmentInfo, Font) == 0x0028);
static_assert(offsetof(FHorizonDialogueSegmentInfo, ShadowOffset) == 0x0080);
static_assert(offsetof(FHorizonDialogueSegmentInfo, ShadowColorAndOpacity) == 0x0090);
static_assert(offsetof(FHorizonDialogueSegmentInfo, PaddingMargin) == 0x00B0);
static_assert(offsetof(FHorizonDialogueSegmentInfo, HypertextHoveredColor) == 0x00C0);
static_assert(offsetof(FHorizonDialogueSegmentInfo, HypertextVisitedColor) == 0x00D4);
static_assert(offsetof(FHorizonDialogueSegmentInfo, BackgroundButtonClass) == 0x00E8);
static_assert(offsetof(FHorizonDialogueSegmentInfo, DialogueSound) == 0x0100);
static_assert(offsetof(FHorizonDialogueSegmentInfo, EventPayload) == 0x0190);
static_assert(offsetof(FHorizonDialogueSegmentInfo, Tags) == 0x01A0);
static_assert(offsetof(FHorizonDialogueSegmentInfo, RubyTextInfo) == 0x01B0);
static_assert(offsetof(FHorizonDialogueHypertextResult, DialogueMsgTextBlock) == 0x0000);
static_assert(offsetof(FHorizonDialogueHypertextResult, HypertextReference) == 0x0018);
static_assert(offsetof(FHorizonDialogueHypertextResult, UrlEncodeMap) == 0x0028);
static_assert(offsetof(FHorizonDialogueLineInfo, DialogueBlockInfoList) == 0x0010);
static_assert(offsetof(FHorizonDialogueLineInfo, position) == 0x0020);
