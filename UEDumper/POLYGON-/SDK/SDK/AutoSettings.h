
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
/// dependency: UMG

#pragma pack(push, 0x1)

/// Class /Script/AutoSettings.AutoSettingsConfig
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UAutoSettingsConfig : public UDeveloperSettings
{ 
public:
	FString                                            SettingsIniName;                                            // 0x0038   (0x0010)  
	FString                                            SettingsSectionName;                                        // 0x0048   (0x0010)  
};

/// Class /Script/AutoSettings.AutoSettingWidget
/// Size: 0x02D0 (720 bytes) (0x000280 - 0x0002D0) align 8 MaxSize: 0x02D0
class UAutoSettingWidget : public UUserWidget
{ 
public:
	FName                                              CVarName;                                                   // 0x0280   (0x0008)  
	class UClass*                                      ValueMask;                                                  // 0x0288   (0x0008)  
	bool                                               bAutoSave;                                                  // 0x0290   (0x0001)  
	bool                                               bAutoApply;                                                 // 0x0291   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0292   (0x0006)  MISSED
	FGameplayTagContainer                              SettingTags;                                                // 0x0298   (0x0020)  
	FString                                            CurrentValue;                                               // 0x02B8   (0x0010)  
	bool                                               bHasUnappliedChange;                                        // 0x02C8   (0x0001)  
	bool                                               bHasUnsavedChange;                                          // 0x02C9   (0x0001)  
	bool                                               bUpdatingSettingSelection;                                  // 0x02CA   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x02CB   (0x0005)  MISSED


	/// Functions
	// Function /Script/AutoSettings.AutoSettingWidget.UpdateSelection
	// void UpdateSelection(FString Value);                                                                                     // [0x9bdbd0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AutoSettings.AutoSettingWidget.Save
	// void Save();                                                                                                             // [0x9bc810] Final|Native|Public|BlueprintCallable 
	// Function /Script/AutoSettings.AutoSettingWidget.HasUnsavedChange
	// bool HasUnsavedChange();                                                                                                 // [0x9bb2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettings.AutoSettingWidget.HasUnappliedChange
	// bool HasUnappliedChange();                                                                                               // [0x9bb2d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettings.AutoSettingWidget.Cancel
	// void Cancel();                                                                                                           // [0x9b9d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/AutoSettings.AutoSettingWidget.ApplySettingValue
	// void ApplySettingValue(FString Value, bool bSaveIfPossible);                                                             // [0x9b9a40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AutoSettings.AutoSettingWidget.Apply
	// void Apply();                                                                                                            // [0x9b96a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AutoSettings.ToggleSetting
/// Size: 0x02D0 (720 bytes) (0x0002D0 - 0x0002D0) align 8 MaxSize: 0x02D0
class UToggleSetting : public UAutoSettingWidget
{ 
public:


	/// Functions
	// Function /Script/AutoSettings.ToggleSetting.UpdateToggleState
	// void UpdateToggleState(bool State);                                                                                      // [0x9bdd40] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AutoSettings.ToggleSetting.ToggleStateUpdated
	// void ToggleStateUpdated(bool State);                                                                                     // [0x9b9f90] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/AutoSettings.CheckBoxSetting
/// Size: 0x02D8 (728 bytes) (0x0002D0 - 0x0002D8) align 8 MaxSize: 0x02D8
class UCheckBoxSetting : public UToggleSetting
{ 
public:
	class UCheckBox*                                   CheckBox;                                                   // 0x02D0   (0x0008)  


	/// Functions
	// Function /Script/AutoSettings.CheckBoxSetting.CheckBoxStateChanged
	// void CheckBoxStateChanged(bool IsChecked);                                                                               // [0x9b9f90] Final|Native|Private 
};

/// Struct /Script/AutoSettings.SettingOption
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSettingOption
{ 
	FText                                              Label;                                                      // 0x0000   (0x0018)  
	FString                                            Value;                                                      // 0x0018   (0x0010)  
};

/// Class /Script/AutoSettings.SelectSetting
/// Size: 0x02F0 (752 bytes) (0x0002D0 - 0x0002F0) align 8 MaxSize: 0x02F0
class USelectSetting : public UAutoSettingWidget
{ 
public:
	TArray<FSettingOption>                             Options;                                                    // 0x02D0   (0x0010)  
	class UClass*                                      OptionFactory;                                              // 0x02E0   (0x0008)  
	bool                                               bUpdatingSettingOptions;                                    // 0x02E8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02E9   (0x0007)  MISSED


	/// Functions
	// Function /Script/AutoSettings.SelectSetting.UpdateOptions
	// void UpdateOptions(TArray<FSettingOption>& InOptions);                                                                   // [0x9bdab0] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/AutoSettings.SelectSetting.RegenerateOptions
	// void RegenerateOptions();                                                                                                // [0x9bbc00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AutoSettings.ComboBoxSetting
/// Size: 0x02F8 (760 bytes) (0x0002F0 - 0x0002F8) align 8 MaxSize: 0x02F8
class UComboBoxSetting : public USelectSetting
{ 
public:
	class UComboBoxString*                             ComboBox;                                                   // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/AutoSettings.ComboBoxSetting.ComboBoxSelectionChanged
	// void ComboBoxSelectionChanged(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);                             // [0x9ba110] Final|Native|Private 
};

/// Class /Script/AutoSettings.ConsoleUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UConsoleUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AutoSettings.ConsoleUtils.SetStringCVar
	// void SetStringCVar(FName Name, FString Value);                                                                           // [0x9bd690] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.ConsoleUtils.SetIntCVar
	// void SetIntCVar(FName Name, int32_t Value);                                                                              // [0x9bd140] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.ConsoleUtils.SetFloatCVar
	// void SetFloatCVar(FName Name, float Value);                                                                              // [0x9bcf90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.ConsoleUtils.SetBoolCVar
	// void SetBoolCVar(FName Name, bool Value);                                                                                // [0x9bce20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.ConsoleUtils.IsCVarRegistered
	// bool IsCVarRegistered(FName Name);                                                                                       // [0x9bb390] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettings.ConsoleUtils.GetStringCVar
	// FString GetStringCVar(FName Name);                                                                                       // [0x9bafb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettings.ConsoleUtils.GetIntCVar
	// int32_t GetIntCVar(FName Name);                                                                                          // [0x9babb0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettings.ConsoleUtils.GetFloatCVar
	// float GetFloatCVar(FName Name);                                                                                          // [0x9baad0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettings.ConsoleUtils.GetBoolCVar
	// bool GetBoolCVar(FName Name);                                                                                            // [0x9ba690] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AutoSettings.CVarChangeListener
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UCVarChangeListener : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0028   (0x0058)  MISSED
};

/// Class /Script/AutoSettings.CVarChangeListenerManager
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UCVarChangeListenerManager : public UObject
{ 
public:
	TMap<FName, class UCVarChangeListener*>            Listeners;                                                  // 0x0028   (0x0050)  


	/// Functions
	// Function /Script/AutoSettings.CVarChangeListenerManager.AddStringCVarCallbackStatic
	// void AddStringCVarCallbackStatic(FName Name, FDelegateProperty ChangedCallback, bool CallbackImmediately);               // [0x9b9560] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.CVarChangeListenerManager.AddIntCVarCallbackStatic
	// void AddIntCVarCallbackStatic(FName Name, FDelegateProperty ChangedCallback, bool CallbackImmediately);                  // [0x9b9450] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.CVarChangeListenerManager.AddFloatCVarCallbackStatic
	// void AddFloatCVarCallbackStatic(FName Name, FDelegateProperty ChangedCallback, bool CallbackImmediately);                // [0x9b9340] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.CVarChangeListenerManager.AddBoolCVarCallbackStatic
	// void AddBoolCVarCallbackStatic(FName Name, FDelegateProperty ChangedCallback, bool CallbackImmediately);                 // [0x9b9230] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AutoSettings.SliderSetting
/// Size: 0x02D8 (728 bytes) (0x0002D0 - 0x0002D8) align 8 MaxSize: 0x02D8
class USliderSetting : public UAutoSettingWidget
{ 
public:
	float                                              LeftValue;                                                  // 0x02D0   (0x0004)  
	float                                              RightValue;                                                 // 0x02D4   (0x0004)  


	/// Functions
	// Function /Script/AutoSettings.SliderSetting.UpdateSliderValue
	// void UpdateSliderValue(float NormalizedValue, float RawValue);                                                           // [0x9bdc70] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AutoSettings.SliderSetting.SliderValueUpdated
	// void SliderValueUpdated(float NormalizedValue);                                                                          // [0x9bd9e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AutoSettings.SliderSetting.ShouldSaveCurrentValue
	// bool ShouldSaveCurrentValue();                                                                                           // [0x9bd940] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/AutoSettings.SliderSetting.RawValueToNormalized
	// float RawValueToNormalized(float RawValue);                                                                              // [0x9bb9c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettings.SliderSetting.OnSliderValueUpdated
	// void OnSliderValueUpdated(float NormalizedValue, float RawValue);                                                        // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/AutoSettings.SliderSetting.NormalizedValueToRaw
	// float NormalizedValueToRaw(float NormalizedValue);                                                                       // [0x9bb570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettings.SliderSetting.ClampRawValue
	// float ClampRawValue(float RawValue);                                                                                     // [0x9ba040] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AutoSettings.NativeSliderSetting
/// Size: 0x02E8 (744 bytes) (0x0002D8 - 0x0002E8) align 8 MaxSize: 0x02E8
class UNativeSliderSetting : public USliderSetting
{ 
public:
	class USlider*                                     Slider;                                                     // 0x02D8   (0x0008)  
	bool                                               bMouseCaptureInProgress;                                    // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02E1   (0x0007)  MISSED


	/// Functions
	// Function /Script/AutoSettings.NativeSliderSetting.SliderValueChanged
	// void SliderValueChanged(float NewValue);                                                                                 // [0x9bd9e0] Final|Native|Private 
	// Function /Script/AutoSettings.NativeSliderSetting.SliderMouseCaptureEnd
	// void SliderMouseCaptureEnd();                                                                                            // [0x9bd990] Final|Native|Private 
	// Function /Script/AutoSettings.NativeSliderSetting.SliderMouseCaptureBegin
	// void SliderMouseCaptureBegin();                                                                                          // [0x9bd970] Final|Native|Private 
};

/// Class /Script/AutoSettings.RadioButton
/// Size: 0x02C0 (704 bytes) (0x000280 - 0x0002C0) align 8 MaxSize: 0x02C0
class URadioButton : public UUserWidget
{ 
public:
	SDK_UNDEFINED(16,416) /* FMulticastInlineDelegate */ __um(OnSelected);                                         // 0x0280   (0x0010)  
	FText                                              Label;                                                      // 0x0290   (0x0018)  
	FString                                            Value;                                                      // 0x02A8   (0x0010)  
	bool                                               Selected;                                                   // 0x02B8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02B9   (0x0007)  MISSED


	/// Functions
	// Function /Script/AutoSettings.RadioButton.UpdateSelected
	// void UpdateSelected(bool InSelected);                                                                                    // [0x2c97800] Event|Protected|BlueprintEvent 
	// Function /Script/AutoSettings.RadioButton.UpdateLabel
	// void UpdateLabel(FText& InLabel);                                                                                        // [0x2c97800] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/AutoSettings.RadioButton.TriggerSelection
	// void TriggerSelection();                                                                                                 // [0x9bda60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AutoSettings.RadioButton.SetValue
	// void SetValue(FString InValue);                                                                                          // [0x9bd830] Final|Native|Public|BlueprintCallable 
	// Function /Script/AutoSettings.RadioButton.SetSelected
	// void SetSelected(bool InSelected);                                                                                       // [0x9bd5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AutoSettings.RadioButton.SetLabel
	// void SetLabel(FText InLabel);                                                                                            // [0x9bd2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AutoSettings.RadioButton.GetValue
	// FString GetValue();                                                                                                      // [0x9bb100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettings.RadioButton.GetSelected
	// bool GetSelected();                                                                                                      // [0x9baf90] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettings.RadioButton.GetLabel
	// FText GetLabel();                                                                                                        // [0x9baca0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AutoSettings.RadioSelect
/// Size: 0x02C0 (704 bytes) (0x000280 - 0x0002C0) align 8 MaxSize: 0x02C0
class URadioSelect : public UUserWidget
{ 
public:
	TArray<FSettingOption>                             Options;                                                    // 0x0280   (0x0010)  
	class UClass*                                      RadioButtonClass;                                           // 0x0290   (0x0008)  
	SDK_UNDEFINED(16,417) /* FMulticastInlineDelegate */ __um(SelectionChangedEvent);                              // 0x0298   (0x0010)  
	class UPanelWidget*                                ButtonContainer;                                            // 0x02A8   (0x0008)  
	TArray<class URadioButton*>                        RadioButtons;                                               // 0x02B0   (0x0010)  


	/// Functions
	// Function /Script/AutoSettings.RadioSelect.SetOptions
	// void SetOptions(TArray<FSettingOption> InOptions);                                                                       // [0x9bd3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AutoSettings.RadioSelect.Select
	// void Select(FString Value);                                                                                              // [0x9bcbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AutoSettings.RadioSelect.OnButtonCreated
	// void OnButtonCreated(class URadioButton* Button, class UPanelSlot* NewSlot);                                             // [0x9bb630] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AutoSettings.RadioSelect.GetRadioButtonWidgets
	// TArray<URadioButton*> GetRadioButtonWidgets();                                                                           // [0x9baed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettings.RadioSelect.GetOptions
	// TArray<FSettingOption> GetOptions();                                                                                     // [0x9bad30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettings.RadioSelect.ButtonSelected
	// void ButtonSelected(FString Value);                                                                                      // [0x9b9c90] Final|Native|Private 
};

/// Class /Script/AutoSettings.RadioSelectSetting
/// Size: 0x0300 (768 bytes) (0x0002F0 - 0x000300) align 8 MaxSize: 0x0300
class URadioSelectSetting : public USelectSetting
{ 
public:
	class UClass*                                      RadioButtonClass;                                           // 0x02F0   (0x0008)  
	class URadioSelect*                                RadioSelect;                                                // 0x02F8   (0x0008)  


	/// Functions
	// Function /Script/AutoSettings.RadioSelectSetting.RadioSelectionChanged
	// void RadioSelectionChanged(FString Value);                                                                               // [0x9bb8b0] Final|Native|Private 
};

/// Class /Script/AutoSettings.SettingOptionFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USettingOptionFactory : public UObject
{ 
public:


	/// Functions
	// Function /Script/AutoSettings.SettingOptionFactory.ConstructOptions
	// TArray<FSettingOption> ConstructOptions();                                                                               // [0x9ba240] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/AutoSettings.ResolutionOptionFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UResolutionOptionFactory : public USettingOptionFactory
{ 
public:
};

/// Class /Script/AutoSettings.ResolutionStringUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UResolutionStringUtils : public UBlueprintFunctionLibrary
{ 
public:
};

/// Class /Script/AutoSettings.SettingValueMask
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USettingValueMask : public UObject
{ 
public:


	/// Functions
	// Function /Script/AutoSettings.SettingValueMask.RecombineValues
	// FString RecombineValues(FString SettingValue, FString ConsoleValue);                                                     // [0x9bbab0] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/AutoSettings.SettingValueMask.MaskValue
	// FString MaskValue(FString ConsoleValue);                                                                                 // [0x9bb420] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/AutoSettings.ResolutionValueMask
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UResolutionValueMask : public USettingValueMask
{ 
public:
};

/// Class /Script/AutoSettings.SettingContainerUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USettingContainerUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AutoSettings.SettingContainerUtils.SaveChildSettings
	// void SaveChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);                                            // [0x9bc830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.SettingContainerUtils.GetChildSettings
	// TArray<UAutoSettingWidget*> GetChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);                      // [0x9ba780] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnsavedChange
	// bool DoesAnyChildSettingHaveUnsavedChange(class UUserWidget* UserWidget, class UWidget* Parent);                         // [0x9ba490] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettings.SettingContainerUtils.DoesAnyChildSettingHaveUnappliedChange
	// bool DoesAnyChildSettingHaveUnappliedChange(class UUserWidget* UserWidget, class UWidget* Parent);                       // [0x9ba290] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettings.SettingContainerUtils.CancelChildSettings
	// void CancelChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);                                          // [0x9b9db0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.SettingContainerUtils.ApplyChildSettings
	// void ApplyChildSettings(class UUserWidget* UserWidget, class UWidget* Parent);                                           // [0x9b96c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AutoSettings.SettingsManager
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class USettingsManager : public UEngineSubsystem
{ 
public:
	SDK_UNDEFINED(16,418) /* FMulticastInlineDelegate */ __um(OnSettingSaved);                                     // 0x0030   (0x0010)  
	FString                                            IniFilename;                                                // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/AutoSettings.SettingsManager.SaveSettingStatic
	// void SaveSettingStatic(FAutoSettingData SettingData);                                                                    // [0x9bca10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.SettingsManager.RegisterStringCVarSettingWithCallback
	// void RegisterStringCVarSettingWithCallback(FName Name, FString DefaultValue, FString Help, FDelegateProperty ChangedCallback, bool CallbackImmediately); // [0x9bc640] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.SettingsManager.RegisterStringCVarSetting
	// void RegisterStringCVarSetting(FName Name, FString DefaultValue, FString Help);                                          // [0x9bc510] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.SettingsManager.RegisterIntCVarSettingWithCallback
	// void RegisterIntCVarSettingWithCallback(FName Name, int32_t DefaultValue, FString Help, FDelegateProperty ChangedCallback, bool CallbackImmediately); // [0x9bc350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.SettingsManager.RegisterIntCVarSetting
	// void RegisterIntCVarSetting(FName Name, int32_t DefaultValue, FString Help);                                             // [0x9bc240] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.SettingsManager.RegisterFloatCVarSettingWithCallback
	// void RegisterFloatCVarSettingWithCallback(FName Name, float DefaultValue, FString Help, FDelegateProperty ChangedCallback, bool CallbackImmediately); // [0x9bc080] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.SettingsManager.RegisterFloatCVarSetting
	// void RegisterFloatCVarSetting(FName Name, float DefaultValue, FString Help);                                             // [0x9bbf60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.SettingsManager.RegisterBoolCVarSettingWithCallback
	// void RegisterBoolCVarSettingWithCallback(FName Name, bool DefaultValue, FString Help, FDelegateProperty ChangedCallback, bool CallbackImmediately); // [0x9bbd90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.SettingsManager.RegisterBoolCVarSetting
	// void RegisterBoolCVarSetting(FName Name, bool DefaultValue, FString Help);                                               // [0x9bbc60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.SettingsManager.GetValue
	// FString GetValue(FName Key, bool bPreferConfigValue);                                                                    // [0x9bb1c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AutoSettings.SettingsManager.AutoDetectSettingsStatic
	// void AutoDetectSettingsStatic(int32_t WorkScale, float CPUMultiplier, float GPUMultiplier);                              // [0x9b9b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AutoSettings.SettingsManager.ApplySettingStatic
	// void ApplySettingStatic(FAutoSettingData SettingData);                                                                   // [0x9b98a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AutoSettings.Spinner
/// Size: 0x02B0 (688 bytes) (0x000280 - 0x0002B0) align 8 MaxSize: 0x02B0
class USpinner : public UUserWidget
{ 
public:
	TArray<FSettingOption>                             Options;                                                    // 0x0280   (0x0010)  
	bool                                               bAllowWrapping;                                             // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0291   (0x0007)  MISSED
	SDK_UNDEFINED(16,419) /* FMulticastInlineDelegate */ __um(SelectionChangedEvent);                              // 0x0298   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x02A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AutoSettings.Spinner.SelectValue
	// void SelectValue(FString Value);                                                                                         // [0x9bcd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AutoSettings.Spinner.SelectIndex
	// void SelectIndex(int32_t Index);                                                                                         // [0x9bcca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AutoSettings.Spinner.Previous
	// void Previous();                                                                                                         // [0x9bb860] Final|Native|Public|BlueprintCallable 
	// Function /Script/AutoSettings.Spinner.OnSelectionChanged
	// void OnSelectionChanged(FSettingOption SelectedOption);                                                                  // [0x9bb700] Native|Event|Public|BlueprintEvent 
	// Function /Script/AutoSettings.Spinner.Next
	// void Next();                                                                                                             // [0x9bb510] Final|Native|Public|BlueprintCallable 
	// Function /Script/AutoSettings.Spinner.HasValidPrevious
	// bool HasValidPrevious();                                                                                                 // [0x9bb350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettings.Spinner.HasValidNext
	// bool HasValidNext();                                                                                                     // [0x9bb310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettings.Spinner.GetCurrentOption
	// FSettingOption GetCurrentOption();                                                                                       // [0x9ba970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AutoSettings.Spinner.GetCurrentIndex
	// int32_t GetCurrentIndex();                                                                                               // [0x9ba950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AutoSettings.SpinnerSetting
/// Size: 0x02F8 (760 bytes) (0x0002F0 - 0x0002F8) align 8 MaxSize: 0x02F8
class USpinnerSetting : public USelectSetting
{ 
public:
	class USpinner*                                    Spinner;                                                    // 0x02F0   (0x0008)  


	/// Functions
	// Function /Script/AutoSettings.SpinnerSetting.SpinnerSelectionChanged
	// void SpinnerSelectionChanged(FString Value);                                                                             // [0x9bb8b0] Final|Native|Private 
};

/// Class /Script/AutoSettings.WindowModeValueMask
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWindowModeValueMask : public USettingValueMask
{ 
public:
};

/// Struct /Script/AutoSettings.AutoSettingData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAutoSettingData
{ 
	FName                                              Key;                                                        // 0x0000   (0x0008)  
	FString                                            Value;                                                      // 0x0008   (0x0010)  
	FGameplayTagContainer                              Tags;                                                       // 0x0018   (0x0020)  
};

#pragma pack(pop)


static_assert(sizeof(UAutoSettingsConfig) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UAutoSettingWidget) == 0x02D0); // 720 bytes (0x000280 - 0x0002D0)
static_assert(sizeof(UToggleSetting) == 0x02D0); // 720 bytes (0x0002D0 - 0x0002D0)
static_assert(sizeof(UCheckBoxSetting) == 0x02D8); // 728 bytes (0x0002D0 - 0x0002D8)
static_assert(sizeof(FSettingOption) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(USelectSetting) == 0x02F0); // 752 bytes (0x0002D0 - 0x0002F0)
static_assert(sizeof(UComboBoxSetting) == 0x02F8); // 760 bytes (0x0002F0 - 0x0002F8)
static_assert(sizeof(UConsoleUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCVarChangeListener) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UCVarChangeListenerManager) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(USliderSetting) == 0x02D8); // 728 bytes (0x0002D0 - 0x0002D8)
static_assert(sizeof(UNativeSliderSetting) == 0x02E8); // 744 bytes (0x0002D8 - 0x0002E8)
static_assert(sizeof(URadioButton) == 0x02C0); // 704 bytes (0x000280 - 0x0002C0)
static_assert(sizeof(URadioSelect) == 0x02C0); // 704 bytes (0x000280 - 0x0002C0)
static_assert(sizeof(URadioSelectSetting) == 0x0300); // 768 bytes (0x0002F0 - 0x000300)
static_assert(sizeof(USettingOptionFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UResolutionOptionFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UResolutionStringUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USettingValueMask) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UResolutionValueMask) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USettingContainerUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USettingsManager) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(USpinner) == 0x02B0); // 688 bytes (0x000280 - 0x0002B0)
static_assert(sizeof(USpinnerSetting) == 0x02F8); // 760 bytes (0x0002F0 - 0x0002F8)
static_assert(sizeof(UWindowModeValueMask) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FAutoSettingData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(offsetof(UAutoSettingsConfig, SettingsIniName) == 0x0038);
static_assert(offsetof(UAutoSettingsConfig, SettingsSectionName) == 0x0048);
static_assert(offsetof(UAutoSettingWidget, CVarName) == 0x0280);
static_assert(offsetof(UAutoSettingWidget, ValueMask) == 0x0288);
static_assert(offsetof(UAutoSettingWidget, SettingTags) == 0x0298);
static_assert(offsetof(UAutoSettingWidget, CurrentValue) == 0x02B8);
static_assert(offsetof(UCheckBoxSetting, CheckBox) == 0x02D0);
static_assert(offsetof(FSettingOption, Label) == 0x0000);
static_assert(offsetof(FSettingOption, Value) == 0x0018);
static_assert(offsetof(USelectSetting, Options) == 0x02D0);
static_assert(offsetof(USelectSetting, OptionFactory) == 0x02E0);
static_assert(offsetof(UComboBoxSetting, ComboBox) == 0x02F0);
static_assert(offsetof(UCVarChangeListenerManager, Listeners) == 0x0028);
static_assert(offsetof(UNativeSliderSetting, Slider) == 0x02D8);
static_assert(offsetof(URadioButton, Label) == 0x0290);
static_assert(offsetof(URadioButton, Value) == 0x02A8);
static_assert(offsetof(URadioSelect, Options) == 0x0280);
static_assert(offsetof(URadioSelect, RadioButtonClass) == 0x0290);
static_assert(offsetof(URadioSelect, ButtonContainer) == 0x02A8);
static_assert(offsetof(URadioSelect, RadioButtons) == 0x02B0);
static_assert(offsetof(URadioSelectSetting, RadioButtonClass) == 0x02F0);
static_assert(offsetof(URadioSelectSetting, RadioSelect) == 0x02F8);
static_assert(offsetof(USettingsManager, IniFilename) == 0x0040);
static_assert(offsetof(USpinner, Options) == 0x0280);
static_assert(offsetof(USpinnerSetting, Spinner) == 0x02F0);
static_assert(offsetof(FAutoSettingData, Key) == 0x0000);
static_assert(offsetof(FAutoSettingData, Value) == 0x0008);
static_assert(offsetof(FAutoSettingData, Tags) == 0x0018);
