
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: AutoSettingsInput
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /AutoSettings/InputMapping/DefaultKeySeparator.DefaultKeySeparator_C
/// Size: 0x0280 (640 bytes) (0x000280 - 0x000280) align 8 MaxSize: 0x0280
class UDefaultKeySeparator_C : public UUserWidget
{ 
public:
};

/// Class /AutoSettings/InputMapping/DefaultActionLabel.DefaultActionLabel_C
/// Size: 0x0318 (792 bytes) (0x000318 - 0x000318) align 8 MaxSize: 0x0318
class UDefaultActionLabel_C : public UActionLabel
{ 
public:
};

/// Class /AutoSettings/InputMapping/DefaultKeyLabel.DefaultKeyLabel_C
/// Size: 0x0308 (776 bytes) (0x0002F0 - 0x000308) align 8 MaxSize: 0x0308
class UDefaultKeyLabel_C : public UKeyLabel
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02F0   (0x0008)  
	class UImage*                                      IconImage;                                                  // 0x02F8   (0x0008)  
	class UTextBlock*                                  LabelText;                                                  // 0x0300   (0x0008)  


	/// Functions
	// Function /AutoSettings/InputMapping/DefaultKeyLabel.DefaultKeyLabel_C.UpdateKeyLabel
	// void UpdateKeyLabel();                                                                                                   // [0x2c97800] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /AutoSettings/InputMapping/DefaultKeyLabel.DefaultKeyLabel_C.ExecuteUbergraph_DefaultKeyLabel
	// void ExecuteUbergraph_DefaultKeyLabel(int32_t EntryPoint);                                                               // [0x2c97800] Final|HasDefaults    
};

/// Class /AutoSettings/InputMapping/DefaultBindCapturePrompt.DefaultBindCapturePrompt_C
/// Size: 0x02E8 (744 bytes) (0x0002E8 - 0x0002E8) align 8 MaxSize: 0x02E8
class UDefaultBindCapturePrompt_C : public UBindCapturePrompt
{ 
public:
};

/// Class /AutoSettings/InputMapping/DefaultBindCaptureButton.DefaultBindCaptureButton_C
/// Size: 0x02C8 (712 bytes) (0x0002B0 - 0x0002C8) align 8 MaxSize: 0x02C8
class UDefaultBindCaptureButton_C : public UBindCaptureButton
{ 
public:
	FPointerToUberGraphFrame                           UberGraphFrame;                                             // 0x02B0   (0x0008)  
	class UButton*                                     Button;                                                     // 0x02B8   (0x0008)  
	class UNamedSlot*                                  Content;                                                    // 0x02C0   (0x0008)  


	/// Functions
	// Function /AutoSettings/InputMapping/DefaultBindCaptureButton.DefaultBindCaptureButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                            // [0x2c97800] BlueprintEvent       
	// Function /AutoSettings/InputMapping/DefaultBindCaptureButton.DefaultBindCaptureButton_C.ExecuteUbergraph_DefaultBindCaptureButton
	// void ExecuteUbergraph_DefaultBindCaptureButton(int32_t EntryPoint);                                                      // [0x2c97800] Final                
};

/// Class /AutoSettings/InputMapping/DefaultAxisLabel.DefaultAxisLabel_C
/// Size: 0x02C8 (712 bytes) (0x0002C8 - 0x0002C8) align 8 MaxSize: 0x02C8
class UDefaultAxisLabel_C : public UAxisLabel
{ 
public:
};

/// Class /AutoSettings/InputMapping/DefaultAxisMapping.DefaultAxisMapping_C
/// Size: 0x02D0 (720 bytes) (0x0002D0 - 0x0002D0) align 8 MaxSize: 0x02D0
class UDefaultAxisMapping_C : public UAxisMapping
{ 
public:
};

/// Class /AutoSettings/InputMapping/DefaultActionMapping.DefaultActionMapping_C
/// Size: 0x02C8 (712 bytes) (0x0002C8 - 0x0002C8) align 8 MaxSize: 0x02C8
class UDefaultActionMapping_C : public UActionMapping
{ 
public:
};

#pragma pack(pop)


static_assert(sizeof(UDefaultKeySeparator_C) == 0x0280); // 640 bytes (0x000280 - 0x000280)
static_assert(sizeof(UDefaultActionLabel_C) == 0x0318); // 792 bytes (0x000318 - 0x000318)
static_assert(sizeof(UDefaultKeyLabel_C) == 0x0308); // 776 bytes (0x0002F0 - 0x000308)
static_assert(sizeof(UDefaultBindCapturePrompt_C) == 0x02E8); // 744 bytes (0x0002E8 - 0x0002E8)
static_assert(sizeof(UDefaultBindCaptureButton_C) == 0x02C8); // 712 bytes (0x0002B0 - 0x0002C8)
static_assert(sizeof(UDefaultAxisLabel_C) == 0x02C8); // 712 bytes (0x0002C8 - 0x0002C8)
static_assert(sizeof(UDefaultAxisMapping_C) == 0x02D0); // 720 bytes (0x0002D0 - 0x0002D0)
static_assert(sizeof(UDefaultActionMapping_C) == 0x02C8); // 712 bytes (0x0002C8 - 0x0002C8)
static_assert(offsetof(UDefaultKeyLabel_C, UberGraphFrame) == 0x02F0);
static_assert(offsetof(UDefaultKeyLabel_C, IconImage) == 0x02F8);
static_assert(offsetof(UDefaultKeyLabel_C, LabelText) == 0x0300);
static_assert(offsetof(UDefaultBindCaptureButton_C, UberGraphFrame) == 0x02B0);
static_assert(offsetof(UDefaultBindCaptureButton_C, Button) == 0x02B8);
static_assert(offsetof(UDefaultBindCaptureButton_C, Content) == 0x02C0);
