
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameplayTags
/// dependency: InputCore
/// dependency: Slate
/// dependency: SlateCore
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/AutoSettingsInput.EBindingCaptureMode
/// Size: 0x01 (1 bytes)
enum class EBindingCaptureMode : uint8_t
{
	EBindingCaptureMode__OnReleased                                                  = 0,
	EBindingCaptureMode__OnPressed                                                   = 1
};

/// Class /Script/AutoSettingsInput.InputLabel
/// Size: 0x02B0 (688 bytes) (0x000280 - 0x0002B0) align 8 MaxSize: 0x02B0
class UInputLabel : public UUserWidget
{ 
public:
	int32_t                                            MappingGroup;                                               // 0x0280   (0x0004)  
	FGameplayTag                                       KeyGroup;                                                   // 0x0284   (0x0008)  
	bool                                               bUsePlayerKeyGroup;                                         // 0x028C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x028D   (0x0003)  MISSED
	FGameplayTagContainer                              IconTags;                                                   // 0x0290   (0x0020)  


	/// Functions
	// Function /Script/AutoSettingsInput.InputLabel.UpdateLabel
	// void UpdateLabel();                                                                                                      // [0x9de0f0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/AutoSettingsInput.InputLabel.MappingsChanged
	// void MappingsChanged(class APlayerController* Player);                                                                   // [0x9dd1b0] Final|Native|Private 
};

/// Class /Script/AutoSettingsInput.ActionLabel
/// Size: 0x0318 (792 bytes) (0x0002B0 - 0x000318) align 8 MaxSize: 0x0318
class UActionLabel : public UInputLabel
{ 
public:
	FName                                              ActionName;                                                 // 0x02B0   (0x0008)  
	class UClass*                                      KeyLabelWidgetClass;                                        // 0x02B8   (0x0008)  
	class UClass*                                      KeySeparatorWidgetClass;                                    // 0x02C0   (0x0008)  
	class UPanelWidget*                                KeyContainer;                                               // 0x02C8   (0x0008)  
	class UKeyLabel*                                   PrimaryKeyLabel;                                            // 0x02D0   (0x0008)  
	class UKeyLabel*                                   ShiftLabel;                                                 // 0x02D8   (0x0008)  
	class UKeyLabel*                                   CtrlLabel;                                                  // 0x02E0   (0x0008)  
	class UKeyLabel*                                   AltLabel;                                                   // 0x02E8   (0x0008)  
	class UKeyLabel*                                   CmdLabel;                                                   // 0x02F0   (0x0008)  
	class UWidget*                                     ShiftSeparator;                                             // 0x02F8   (0x0008)  
	class UWidget*                                     CtrlSeparator;                                              // 0x0300   (0x0008)  
	class UWidget*                                     AltSeparator;                                               // 0x0308   (0x0008)  
	class UWidget*                                     CmdSeparator;                                               // 0x0310   (0x0008)  
};

/// Class /Script/AutoSettingsInput.InputMapping
/// Size: 0x02B8 (696 bytes) (0x000280 - 0x0002B8) align 8 MaxSize: 0x02B8
class UInputMapping : public UUserWidget
{ 
public:
	int32_t                                            MappingGroup;                                               // 0x0280   (0x0004)  
	FGameplayTag                                       KeyGroup;                                                   // 0x0284   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x028C   (0x0004)  MISSED
	FGameplayTagContainer                              IconTags;                                                   // 0x0290   (0x0020)  
	class UBindCaptureButton*                          BindCaptureButton;                                          // 0x02B0   (0x0008)  


	/// Functions
	// Function /Script/AutoSettingsInput.InputMapping.UpdateMapping
	// void UpdateMapping();                                                                                                    // [0x9de110] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/AutoSettingsInput.InputMapping.UpdateLabel
	// void UpdateLabel();                                                                                                      // [0x9de0f0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AutoSettingsInput.InputMapping.ChordCaptured
	// void ChordCaptured(FCapturedInput CapturedInput);                                                                        // [0x9da8a0] Final|Native|Private 
	// Function /Script/AutoSettingsInput.InputMapping.BindChord
	// void BindChord(FCapturedInput CapturedInput);                                                                            // [0x9da5d0] Native|Public|BlueprintCallable 
};

/// Class /Script/AutoSettingsInput.ActionMapping
/// Size: 0x02C8 (712 bytes) (0x0002B8 - 0x0002C8) align 8 MaxSize: 0x02C8
class UActionMapping : public UInputMapping
{ 
public:
	FName                                              ActionName;                                                 // 0x02B8   (0x0008)  
	class UActionLabel*                                ActionLabel;                                                // 0x02C0   (0x0008)  
};

/// Struct /Script/AutoSettingsInput.ConfigActionKeyMapping
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FConfigActionKeyMapping : FInputActionKeyMapping
{ 
	bool                                               bIsDefault;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/AutoSettingsInput.ConfigAxisKeyMapping
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FConfigAxisKeyMapping : FInputAxisKeyMapping
{ 
	bool                                               bIsDefault;                                                 // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/AutoSettingsInput.InputMappingGroup
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FInputMappingGroup
{ 
	TArray<FConfigActionKeyMapping>                    ActionMappings;                                             // 0x0000   (0x0010)  
	TArray<FConfigAxisKeyMapping>                      AxisMappings;                                               // 0x0010   (0x0010)  
	TArray<FConfigActionKeyMapping>                    UnboundActionMappings;                                      // 0x0020   (0x0010)  
	TArray<FConfigAxisKeyMapping>                      UnboundAxisMappings;                                        // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Struct /Script/AutoSettingsInput.InputMappingLayout
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInputMappingLayout
{ 
	TArray<FInputMappingGroup>                         MappingGroups;                                              // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0010   (0x0010)  MISSED
};

/// Struct /Script/AutoSettingsInput.InputMappingPreset
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FInputMappingPreset
{ 
	FGameplayTag                                       PresetTag;                                                  // 0x0000   (0x0008)  
	bool                                               bUseDefaultMappings;                                        // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FInputMappingLayout                                InputLayout;                                                // 0x0010   (0x0020)  
	TArray<FInputMappingGroup>                         MappingGroups;                                              // 0x0030   (0x0010)  
};

/// Struct /Script/AutoSettingsInput.MappingGroupLink
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMappingGroupLink
{ 
	TArray<int32_t>                                    MappingGroups;                                              // 0x0000   (0x0010)  
};

/// Struct /Script/AutoSettingsInput.KeyIconPair
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FKeyIconPair
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	class UTexture*                                    Icon;                                                       // 0x0018   (0x0008)  
};

/// Struct /Script/AutoSettingsInput.KeyIconSet
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FKeyIconSet
{ 
	FGameplayTagContainer                              Tags;                                                       // 0x0000   (0x0020)  
	SDK_UNDEFINED(80,420) /* TMap<FKey, TWeakObjectPtr<UTexture*>> */ __um(IconMap);                               // 0x0020   (0x0050)  
	TArray<FKeyIconPair>                               Icons;                                                      // 0x0070   (0x0010)  
};

/// Struct /Script/AutoSettingsInput.KeyFriendlyName
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FKeyFriendlyName
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	FText                                              FriendlyName;                                               // 0x0018   (0x0018)  
};

/// Struct /Script/AutoSettingsInput.KeyGroup
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FKeyGroup
{ 
	FGameplayTag                                       KeyGroupTag;                                                // 0x0000   (0x0008)  
	bool                                               bUseGamepadKeys;                                            // 0x0008   (0x0001)  
	bool                                               bUseNonGamepadKeys;                                         // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	TArray<FKey>                                       Keys;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/AutoSettingsInput.KeyScale
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FKeyScale
{ 
	FKey                                               Key;                                                        // 0x0000   (0x0018)  
	float                                              Scale;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/AutoSettingsInput.AxisAssociation
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FAxisAssociation
{ 
	FKey                                               AxisKey;                                                    // 0x0000   (0x0018)  
	FKey                                               AnalogKey;                                                  // 0x0018   (0x0018)  
	TArray<FKeyScale>                                  ButtonKeys;                                                 // 0x0030   (0x0010)  
	TArray<FKeyScale>                                  BooleanKeys;                                                // 0x0040   (0x0010)  
};

/// Class /Script/AutoSettingsInput.AutoSettingsInputConfig
/// Size: 0x0188 (392 bytes) (0x000038 - 0x000188) align 8 MaxSize: 0x0188
class UAutoSettingsInputConfig : public UDeveloperSettings
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	bool                                               bAutoInitializePlayerInputOverrides;                        // 0x0040   (0x0001)  
	bool                                               AllowModifierKeys;                                          // 0x0041   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0042   (0x0006)  MISSED
	FText                                              ShiftModifierOverrideText;                                  // 0x0048   (0x0018)  
	FText                                              CtrlModifierOverrideText;                                   // 0x0060   (0x0018)  
	FText                                              AltModifierOverrideText;                                    // 0x0078   (0x0018)  
	FText                                              CmdModifierOverrideText;                                    // 0x0090   (0x0018)  
	TArray<FInputMappingPreset>                        InputPresets;                                               // 0x00A8   (0x0010)  
	bool                                               AllowMultipleBindingsPerKey;                                // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	TArray<FMappingGroupLink>                          MappingGroupLinks;                                          // 0x00C0   (0x0010)  
	TArray<FName>                                      PreservedActions;                                           // 0x00D0   (0x0010)  
	TArray<FName>                                      PreservedAxes;                                              // 0x00E0   (0x0010)  
	TArray<FKeyIconSet>                                KeyIconSets;                                                // 0x00F0   (0x0010)  
	TArray<FKeyFriendlyName>                           KeyFriendlyNames;                                           // 0x0100   (0x0010)  
	TArray<FKeyGroup>                                  KeyGroups;                                                  // 0x0110   (0x0010)  
	TArray<FKey>                                       AllowedKeys;                                                // 0x0120   (0x0010)  
	TArray<FKey>                                       DisallowedKeys;                                             // 0x0130   (0x0010)  
	TArray<FKey>                                       BindingEscapeKeys;                                          // 0x0140   (0x0010)  
	float                                              MouseMoveCaptureDistance;                                   // 0x0150   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	TArray<FAxisAssociation>                           AxisAssociations;                                           // 0x0158   (0x0010)  
	TArray<FName>                                      BlacklistedActions;                                         // 0x0168   (0x0010)  
	TArray<FName>                                      BlacklistedAxes;                                            // 0x0178   (0x0010)  
};

/// Class /Script/AutoSettingsInput.AutoSettingsInputConfigInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAutoSettingsInputConfigInterface : public UInterface
{ 
public:
};

/// Class /Script/AutoSettingsInput.AutoSettingsInputProjectConfig
/// Size: 0x0188 (392 bytes) (0x000188 - 0x000188) align 8 MaxSize: 0x0188
class UAutoSettingsInputProjectConfig : public UAutoSettingsInputConfig
{ 
public:


	/// Functions
	// Function /Script/AutoSettingsInput.AutoSettingsInputProjectConfig.LoadKeyIcons
	// TArray<UTexture*> LoadKeyIcons(FGameplayTagContainer KeyIconTags);                                                       // [0x9dd090] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyGroupStatic
	// FGameplayTag GetKeyGroupStatic(FKey Key);                                                                                // [0x9db620] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettingsInput.AutoSettingsInputProjectConfig.GetKeyFriendlyNameStatic
	// FText GetKeyFriendlyNameStatic(FKey Key);                                                                                // [0x9db390] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AutoSettingsInput.AutoSettingsInputSubsystem
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UAutoSettingsInputSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/AutoSettingsInput.AutoSettingsInputValidationSubsystem
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UAutoSettingsInputValidationSubsystem : public UGameInstanceSubsystem
{ 
public:
};

/// Class /Script/AutoSettingsInput.AutoSettingsPlayer
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAutoSettingsPlayer : public UInterface
{ 
public:


	/// Functions
	// Function /Script/AutoSettingsInput.AutoSettingsPlayer.SaveInputMappings
	// void SaveInputMappings(FPlayerInputMappings InputMappings);                                                              // [0x9dd5e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/AutoSettingsInput.AutoSettingsPlayer.GetUniquePlayerIdentifier
	// FString GetUniquePlayerIdentifier();                                                                                     // [0x9dcd60] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.AutoSettingsPlayer.GetInputMappings
	// bool GetInputMappings(FPlayerInputMappings& InputMappings);                                                              // [0x9db190] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AutoSettingsInput.AutoSettingsPlayer.GetDefaultInputMappingPreset
	// FInputMappingPreset GetDefaultInputMappingPreset();                                                                      // [0x9da9f0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/AutoSettingsInput.AxisLabel
/// Size: 0x02C8 (712 bytes) (0x0002B0 - 0x0002C8) align 8 MaxSize: 0x02C8
class UAxisLabel : public UInputLabel
{ 
public:
	FName                                              AxisName;                                                   // 0x02B0   (0x0008)  
	float                                              Scale;                                                      // 0x02B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02BC   (0x0004)  MISSED
	class UKeyLabel*                                   KeyLabel;                                                   // 0x02C0   (0x0008)  
};

/// Class /Script/AutoSettingsInput.AxisMapping
/// Size: 0x02D0 (720 bytes) (0x0002B8 - 0x0002D0) align 8 MaxSize: 0x02D0
class UAxisMapping : public UInputMapping
{ 
public:
	FName                                              AxisName;                                                   // 0x02B8   (0x0008)  
	float                                              Scale;                                                      // 0x02C0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02C4   (0x0004)  MISSED
	class UAxisLabel*                                  AxisLabel;                                                  // 0x02C8   (0x0008)  
};

/// Class /Script/AutoSettingsInput.BindCaptureButton
/// Size: 0x02B0 (688 bytes) (0x000280 - 0x0002B0) align 8 MaxSize: 0x02B0
class UBindCaptureButton : public UUserWidget
{ 
public:
	FGameplayTag                                       KeyGroup;                                                   // 0x0280   (0x0008)  
	class UClass*                                      BindCapturePromptClass;                                     // 0x0288   (0x0008)  
	int32_t                                            CapturePromptZOrder;                                        // 0x0290   (0x0004)  
	unsigned char                                      UnknownData00_6[0x14];                                      // 0x0294   (0x0014)  MISSED
	class UBindCapturePrompt*                          Prompt;                                                     // 0x02A8   (0x0008)  


	/// Functions
	// Function /Script/AutoSettingsInput.BindCaptureButton.StartCapture
	// class UBindCapturePrompt* StartCapture();                                                                                // [0x9de0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AutoSettingsInput.BindCaptureButton.InitializePrompt
	// void InitializePrompt(class UBindCapturePrompt* PromptWidget);                                                           // [0x9dcef0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AutoSettingsInput.BindCaptureButton.ChordCaptured
	// void ChordCaptured(FCapturedInput CapturedInput);                                                                        // [0x9da750] Final|Native|Private 
};

/// Class /Script/AutoSettingsInput.BindCapturePrompt
/// Size: 0x02E8 (744 bytes) (0x000280 - 0x0002E8) align 8 MaxSize: 0x02E8
class UBindCapturePrompt : public UUserWidget
{ 
public:
	bool                                               bIgnoreGameViewportInputWhileCapturing;                     // 0x0280   (0x0001)  
	bool                                               bRestrictKeyGroup;                                          // 0x0281   (0x0001)  
	EBindingCaptureMode                                CaptureMode;                                                // 0x0282   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0283   (0x0001)  MISSED
	FGameplayTag                                       KeyGroup;                                                   // 0x0284   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x028C   (0x0004)  MISSED
	SDK_UNDEFINED(16,421) /* FMulticastInlineDelegate */ __um(OnChordCaptured);                                    // 0x0290   (0x0010)  
	SDK_UNDEFINED(16,422) /* FMulticastInlineDelegate */ __um(OnChordRejected);                                    // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,423) /* FMulticastInlineDelegate */ __um(OnCapturePromptClosed);                              // 0x02B0   (0x0010)  
	TArray<FKey>                                       KeysDown;                                                   // 0x02C0   (0x0010)  
	bool                                               PreviousIgnoreInput;                                        // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x02D1   (0x0007)  MISSED
	FVector2D                                          AccumulatedMouseDelta;                                      // 0x02D8   (0x0010)  


	/// Functions
	// Function /Script/AutoSettingsInput.BindCapturePrompt.IsKeyAllowed
	// bool IsKeyAllowed(FKey PrimaryKey);                                                                                      // [0x9dcf80] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AutoSettingsInput.BindCapturePrompt.GetKeyGroup
	// FGameplayTag GetKeyGroup();                                                                                              // [0x9db600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.BindCapturePrompt.Cancel
	// void Cancel();                                                                                                           // [0x9da730] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AutoSettingsInput.GlobalKeyIconTagManager
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UGlobalKeyIconTagManager : public UObject
{ 
public:
	SDK_UNDEFINED(16,424) /* FMulticastInlineDelegate */ __um(OnGlobalKeyIconTagsModified);                        // 0x0028   (0x0010)  
	FGameplayTagContainer                              GlobalKeyIconTags;                                          // 0x0038   (0x0020)  


	/// Functions
	// Function /Script/AutoSettingsInput.GlobalKeyIconTagManager.SetGlobalKeyIconTags
	// void SetGlobalKeyIconTags(FGameplayTagContainer InGlobalIconTags);                                                       // [0x9dd880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettingsInput.GlobalKeyIconTagManager.GetIconForKey
	// class UTexture* GetIconForKey(FKey InKey, FGameplayTagContainer IconTags, float AxisScale);                              // [0x9daf00] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AutoSettingsInput.PlayerInputMappings
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FPlayerInputMappings
{ 
	FString                                            PlayerId;                                                   // 0x0000   (0x0010)  
	int32_t                                            PlayerIndex;                                                // 0x0010   (0x0004)  
	FGameplayTag                                       BasePresetTag;                                              // 0x0014   (0x0008)  
	bool                                               bNullBasePreset;                                            // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FInputMappingLayout                                MappingOverrides;                                           // 0x0020   (0x0020)  
	bool                                               Custom;                                                     // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	FInputMappingPreset                                Preset;                                                     // 0x0048   (0x0040)  
	FGameplayTag                                       PlayerKeyGroup;                                             // 0x0088   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Class /Script/AutoSettingsInput.InputMappingManager
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UInputMappingManager : public UEngineSubsystem
{ 
public:
	SDK_UNDEFINED(16,425) /* FMulticastInlineDelegate */ __um(OnMappingsChanged);                                  // 0x0030   (0x0010)  
	TArray<FPlayerInputMappings>                       PlayerInputOverrides;                                       // 0x0040   (0x0010)  
	TArray<class APlayerController*>                   RegisteredPlayerControllers;                                // 0x0050   (0x0010)  


	/// Functions
	// Function /Script/AutoSettingsInput.InputMappingManager.SetPlayerKeyGroupStatic
	// void SetPlayerKeyGroupStatic(class APlayerController* Player, FGameplayTag KeyGroup);                                    // [0x9dde40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettingsInput.InputMappingManager.SetPlayerInputPresetStatic
	// void SetPlayerInputPresetStatic(class APlayerController* Player, FInputMappingPreset Preset);                            // [0x9ddbb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettingsInput.InputMappingManager.SetPlayerInputPresetByTag
	// void SetPlayerInputPresetByTag(class APlayerController* Player, FGameplayTag PresetTag);                                 // [0x9dd9a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettingsInput.InputMappingManager.OnRegisteredPlayerControllerDestroyed
	// void OnRegisteredPlayerControllerDestroyed(class AActor* DestroyedActor);                                                // [0x9dd2d0] Final|Native|Private 
	// Function /Script/AutoSettingsInput.InputMappingManager.InitializePlayerInputOverridesStatic
	// bool InitializePlayerInputOverridesStatic(class APlayerController* Player);                                              // [0x9dce60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettingsInput.InputMappingManager.GetPlayerMappingsByKey
	// void GetPlayerMappingsByKey(class APlayerController* Player, FKey Key, TArray<FInputActionKeyMapping>& Actions, TArray<FInputAxisKeyMapping>& Axes); // [0x9dcac0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.InputMappingManager.GetPlayerInputMappingsStatic
	// FPlayerInputMappings GetPlayerInputMappingsStatic(class APlayerController* Player);                                      // [0x9dc680] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettingsInput.InputMappingManager.GetPlayerAxisMappingStatic
	// FInputAxisKeyMapping GetPlayerAxisMappingStatic(class APlayerController* Player, FName AxisName, float Scale, int32_t MappingGroup); // [0x9dc0b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettingsInput.InputMappingManager.GetPlayerAxisMappings
	// TArray<FInputAxisKeyMapping> GetPlayerAxisMappings(class APlayerController* Player, FName AxisName, float Scale, int32_t MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup); // [0x9dc480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.InputMappingManager.GetPlayerAxisMapping
	// FInputAxisKeyMapping GetPlayerAxisMapping(class APlayerController* Player, FName AxisName, float Scale, int32_t MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup); // [0x9dbe60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.InputMappingManager.GetPlayerActionMappingStatic
	// FInputActionKeyMapping GetPlayerActionMappingStatic(class APlayerController* Player, FName ActionName, int32_t MappingGroup); // [0x9db960] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettingsInput.InputMappingManager.GetPlayerActionMappings
	// TArray<FInputActionKeyMapping> GetPlayerActionMappings(class APlayerController* Player, FName ActionName, int32_t MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup); // [0x9dbca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.InputMappingManager.GetPlayerActionMapping
	// FInputActionKeyMapping GetPlayerActionMapping(class APlayerController* Player, FName ActionName, int32_t MappingGroup, FGameplayTag KeyGroup, bool bUsePlayerKeyGroup); // [0x9db770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.InputMappingManager.GetDefaultInputPresets
	// TArray<FInputMappingPreset> GetDefaultInputPresets();                                                                    // [0x9daa40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettingsInput.InputMappingManager.AddPlayerAxisOverrideStatic
	// void AddPlayerAxisOverrideStatic(class APlayerController* Player, FInputAxisKeyMapping& NewMapping, int32_t MappingGroup, bool bAnyKeyGroup); // [0x9da390] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AutoSettingsInput.InputMappingManager.AddPlayerAxisOverride
	// void AddPlayerAxisOverride(class APlayerController* Player, FInputAxisKeyMapping& NewMapping, int32_t MappingGroup, bool bAnyKeyGroup); // [0x9da170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AutoSettingsInput.InputMappingManager.AddPlayerActionOverrideStatic
	// void AddPlayerActionOverrideStatic(class APlayerController* Player, FInputActionKeyMapping& NewMapping, int32_t MappingGroup, bool bAnyKeyGroup); // [0x9d9f30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AutoSettingsInput.InputMappingManager.AddPlayerActionOverride
	// void AddPlayerActionOverride(class APlayerController* Player, FInputActionKeyMapping& NewMapping, int32_t MappingGroup, bool bAnyKeyGroup); // [0x9d9d10] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AutoSettingsInput.KeyLabel
/// Size: 0x02F0 (752 bytes) (0x000280 - 0x0002F0) align 8 MaxSize: 0x02F0
class UKeyLabel : public UUserWidget
{ 
public:
	FText                                              KeyInvalidText;                                             // 0x0280   (0x0018)  
	FText                                              LabelOverride;                                              // 0x0298   (0x0018)  
	FKey                                               Key;                                                        // 0x02B0   (0x0018)  
	float                                              AxisScale;                                                  // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02CC   (0x0004)  MISSED
	FGameplayTagContainer                              IconTags;                                                   // 0x02D0   (0x0020)  


	/// Functions
	// Function /Script/AutoSettingsInput.KeyLabel.UpdateKeyLabel
	// void UpdateKeyLabel();                                                                                                   // [0x2c97800] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/AutoSettingsInput.KeyLabel.OnGlobalKeyIconTagsModified
	// void OnGlobalKeyIconTagsModified();                                                                                      // [0x9dd270] Final|Native|Private 
	// Function /Script/AutoSettingsInput.KeyLabel.HasValidKey
	// bool HasValidKey();                                                                                                      // [0x9dce20] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.KeyLabel.HasIcon
	// bool HasIcon();                                                                                                          // [0x9dcde0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.KeyLabel.GetIconVisibility
	// ESlateVisibility GetIconVisibility();                                                                                    // [0x9bd940] Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.KeyLabel.GetIconBrush
	// FSlateBrush GetIconBrush();                                                                                              // [0x9dad10] Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.KeyLabel.GetIcon
	// class UTexture* GetIcon();                                                                                               // [0x9dace0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.KeyLabel.GetDisplayNameVisibility
	// ESlateVisibility GetDisplayNameVisibility();                                                                             // [0x9dacb0] Native|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/AutoSettingsInput.KeyLabel.GetDisplayName
	// FText GetDisplayName();                                                                                                  // [0x9dab40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AutoSettingsInput.CapturedInput
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCapturedInput
{ 
	FInputChord                                        Chord;                                                      // 0x0000   (0x0020)  
	float                                              AxisScale;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UInputLabel) == 0x02B0); // 688 bytes (0x000280 - 0x0002B0)
static_assert(sizeof(UActionLabel) == 0x0318); // 792 bytes (0x0002B0 - 0x000318)
static_assert(sizeof(UInputMapping) == 0x02B8); // 696 bytes (0x000280 - 0x0002B8)
static_assert(sizeof(UActionMapping) == 0x02C8); // 712 bytes (0x0002B8 - 0x0002C8)
static_assert(sizeof(FConfigActionKeyMapping) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FConfigAxisKeyMapping) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FInputMappingGroup) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FInputMappingLayout) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FInputMappingPreset) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FMappingGroupLink) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FKeyIconPair) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FKeyIconSet) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FKeyFriendlyName) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FKeyGroup) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FKeyScale) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FAxisAssociation) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UAutoSettingsInputConfig) == 0x0188); // 392 bytes (0x000038 - 0x000188)
static_assert(sizeof(UAutoSettingsInputConfigInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAutoSettingsInputProjectConfig) == 0x0188); // 392 bytes (0x000188 - 0x000188)
static_assert(sizeof(UAutoSettingsInputSubsystem) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UAutoSettingsInputValidationSubsystem) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UAutoSettingsPlayer) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAxisLabel) == 0x02C8); // 712 bytes (0x0002B0 - 0x0002C8)
static_assert(sizeof(UAxisMapping) == 0x02D0); // 720 bytes (0x0002B8 - 0x0002D0)
static_assert(sizeof(UBindCaptureButton) == 0x02B0); // 688 bytes (0x000280 - 0x0002B0)
static_assert(sizeof(UBindCapturePrompt) == 0x02E8); // 744 bytes (0x000280 - 0x0002E8)
static_assert(sizeof(UGlobalKeyIconTagManager) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FPlayerInputMappings) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(UInputMappingManager) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UKeyLabel) == 0x02F0); // 752 bytes (0x000280 - 0x0002F0)
static_assert(sizeof(FCapturedInput) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(UInputLabel, KeyGroup) == 0x0284);
static_assert(offsetof(UInputLabel, IconTags) == 0x0290);
static_assert(offsetof(UActionLabel, ActionName) == 0x02B0);
static_assert(offsetof(UActionLabel, KeyLabelWidgetClass) == 0x02B8);
static_assert(offsetof(UActionLabel, KeySeparatorWidgetClass) == 0x02C0);
static_assert(offsetof(UActionLabel, KeyContainer) == 0x02C8);
static_assert(offsetof(UActionLabel, PrimaryKeyLabel) == 0x02D0);
static_assert(offsetof(UActionLabel, ShiftLabel) == 0x02D8);
static_assert(offsetof(UActionLabel, CtrlLabel) == 0x02E0);
static_assert(offsetof(UActionLabel, AltLabel) == 0x02E8);
static_assert(offsetof(UActionLabel, CmdLabel) == 0x02F0);
static_assert(offsetof(UActionLabel, ShiftSeparator) == 0x02F8);
static_assert(offsetof(UActionLabel, CtrlSeparator) == 0x0300);
static_assert(offsetof(UActionLabel, AltSeparator) == 0x0308);
static_assert(offsetof(UActionLabel, CmdSeparator) == 0x0310);
static_assert(offsetof(UInputMapping, KeyGroup) == 0x0284);
static_assert(offsetof(UInputMapping, IconTags) == 0x0290);
static_assert(offsetof(UInputMapping, BindCaptureButton) == 0x02B0);
static_assert(offsetof(UActionMapping, ActionName) == 0x02B8);
static_assert(offsetof(UActionMapping, ActionLabel) == 0x02C0);
static_assert(offsetof(FInputMappingGroup, ActionMappings) == 0x0000);
static_assert(offsetof(FInputMappingGroup, AxisMappings) == 0x0010);
static_assert(offsetof(FInputMappingGroup, UnboundActionMappings) == 0x0020);
static_assert(offsetof(FInputMappingGroup, UnboundAxisMappings) == 0x0030);
static_assert(offsetof(FInputMappingLayout, MappingGroups) == 0x0000);
static_assert(offsetof(FInputMappingPreset, PresetTag) == 0x0000);
static_assert(offsetof(FInputMappingPreset, InputLayout) == 0x0010);
static_assert(offsetof(FInputMappingPreset, MappingGroups) == 0x0030);
static_assert(offsetof(FMappingGroupLink, MappingGroups) == 0x0000);
static_assert(offsetof(FKeyIconPair, Key) == 0x0000);
static_assert(offsetof(FKeyIconPair, Icon) == 0x0018);
static_assert(offsetof(FKeyIconSet, Tags) == 0x0000);
static_assert(offsetof(FKeyIconSet, Icons) == 0x0070);
static_assert(offsetof(FKeyFriendlyName, Key) == 0x0000);
static_assert(offsetof(FKeyFriendlyName, FriendlyName) == 0x0018);
static_assert(offsetof(FKeyGroup, KeyGroupTag) == 0x0000);
static_assert(offsetof(FKeyGroup, Keys) == 0x0010);
static_assert(offsetof(FKeyScale, Key) == 0x0000);
static_assert(offsetof(FAxisAssociation, AxisKey) == 0x0000);
static_assert(offsetof(FAxisAssociation, AnalogKey) == 0x0018);
static_assert(offsetof(FAxisAssociation, ButtonKeys) == 0x0030);
static_assert(offsetof(FAxisAssociation, BooleanKeys) == 0x0040);
static_assert(offsetof(UAutoSettingsInputConfig, ShiftModifierOverrideText) == 0x0048);
static_assert(offsetof(UAutoSettingsInputConfig, CtrlModifierOverrideText) == 0x0060);
static_assert(offsetof(UAutoSettingsInputConfig, AltModifierOverrideText) == 0x0078);
static_assert(offsetof(UAutoSettingsInputConfig, CmdModifierOverrideText) == 0x0090);
static_assert(offsetof(UAutoSettingsInputConfig, InputPresets) == 0x00A8);
static_assert(offsetof(UAutoSettingsInputConfig, MappingGroupLinks) == 0x00C0);
static_assert(offsetof(UAutoSettingsInputConfig, PreservedActions) == 0x00D0);
static_assert(offsetof(UAutoSettingsInputConfig, PreservedAxes) == 0x00E0);
static_assert(offsetof(UAutoSettingsInputConfig, KeyIconSets) == 0x00F0);
static_assert(offsetof(UAutoSettingsInputConfig, KeyFriendlyNames) == 0x0100);
static_assert(offsetof(UAutoSettingsInputConfig, KeyGroups) == 0x0110);
static_assert(offsetof(UAutoSettingsInputConfig, AllowedKeys) == 0x0120);
static_assert(offsetof(UAutoSettingsInputConfig, DisallowedKeys) == 0x0130);
static_assert(offsetof(UAutoSettingsInputConfig, BindingEscapeKeys) == 0x0140);
static_assert(offsetof(UAutoSettingsInputConfig, AxisAssociations) == 0x0158);
static_assert(offsetof(UAutoSettingsInputConfig, BlacklistedActions) == 0x0168);
static_assert(offsetof(UAutoSettingsInputConfig, BlacklistedAxes) == 0x0178);
static_assert(offsetof(UAxisLabel, AxisName) == 0x02B0);
static_assert(offsetof(UAxisLabel, KeyLabel) == 0x02C0);
static_assert(offsetof(UAxisMapping, AxisName) == 0x02B8);
static_assert(offsetof(UAxisMapping, AxisLabel) == 0x02C8);
static_assert(offsetof(UBindCaptureButton, KeyGroup) == 0x0280);
static_assert(offsetof(UBindCaptureButton, BindCapturePromptClass) == 0x0288);
static_assert(offsetof(UBindCaptureButton, Prompt) == 0x02A8);
static_assert(offsetof(UBindCapturePrompt, CaptureMode) == 0x0282);
static_assert(offsetof(UBindCapturePrompt, KeyGroup) == 0x0284);
static_assert(offsetof(UBindCapturePrompt, KeysDown) == 0x02C0);
static_assert(offsetof(UBindCapturePrompt, AccumulatedMouseDelta) == 0x02D8);
static_assert(offsetof(UGlobalKeyIconTagManager, GlobalKeyIconTags) == 0x0038);
static_assert(offsetof(FPlayerInputMappings, PlayerId) == 0x0000);
static_assert(offsetof(FPlayerInputMappings, BasePresetTag) == 0x0014);
static_assert(offsetof(FPlayerInputMappings, MappingOverrides) == 0x0020);
static_assert(offsetof(FPlayerInputMappings, Preset) == 0x0048);
static_assert(offsetof(FPlayerInputMappings, PlayerKeyGroup) == 0x0088);
static_assert(offsetof(UInputMappingManager, PlayerInputOverrides) == 0x0040);
static_assert(offsetof(UInputMappingManager, RegisteredPlayerControllers) == 0x0050);
static_assert(offsetof(UKeyLabel, KeyInvalidText) == 0x0280);
static_assert(offsetof(UKeyLabel, LabelOverride) == 0x0298);
static_assert(offsetof(UKeyLabel, Key) == 0x02B0);
static_assert(offsetof(UKeyLabel, IconTags) == 0x02D0);
static_assert(offsetof(FCapturedInput, Chord) == 0x0000);
