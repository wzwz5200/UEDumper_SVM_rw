
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
/// dependency: InputCore
/// dependency: Slate

#pragma pack(push, 0x1)

/// Enum /Script/EnhancedInput.EInputActionValueType
/// Size: 0x01 (1 bytes)
enum class EInputActionValueType : uint8_t
{
	EInputActionValueType__Boolean                                                   = 0,
	EInputActionValueType__Axis1D                                                    = 1,
	EInputActionValueType__Axis2D                                                    = 2,
	EInputActionValueType__Axis3D                                                    = 3
};

/// Enum /Script/EnhancedInput.EMappingQueryResult
/// Size: 0x01 (1 bytes)
enum class EMappingQueryResult : uint8_t
{
	EMappingQueryResult__Error_EnhancedInputNotEnabled                               = 0,
	EMappingQueryResult__Error_InputContextNotInActiveContexts                       = 1,
	EMappingQueryResult__Error_InvalidAction                                         = 2,
	EMappingQueryResult__NotMappable                                                 = 3,
	EMappingQueryResult__MappingAvailable                                            = 4
};

/// Enum /Script/EnhancedInput.EMappingQueryIssue
/// Size: 0x01 (1 bytes)
enum class EMappingQueryIssue : uint8_t
{
	EMappingQueryIssue__NoIssue                                                      = 0,
	EMappingQueryIssue__ReservedByAction                                             = 1,
	EMappingQueryIssue__HidesExistingMapping                                         = 2,
	EMappingQueryIssue__HiddenByExistingMapping                                      = 4,
	EMappingQueryIssue__CollisionWithMappingInSameContext                            = 8,
	EMappingQueryIssue__ForcesTypePromotion                                          = 16,
	EMappingQueryIssue__ForcesTypeDemotion                                           = 32
};

/// Enum /Script/EnhancedInput.EPlayerMappableKeySettingBehaviors
/// Size: 0x01 (1 bytes)
enum class EPlayerMappableKeySettingBehaviors : uint8_t
{
	EPlayerMappableKeySettingBehaviors__InheritSettingsFromAction                    = 0,
	EPlayerMappableKeySettingBehaviors__OverrideSettings                             = 1,
	EPlayerMappableKeySettingBehaviors__IgnoreSettings                               = 2
};

/// Enum /Script/EnhancedInput.EInputMappingRebuildType
/// Size: 0x01 (1 bytes)
enum class EInputMappingRebuildType : uint8_t
{
	EInputMappingRebuildType__None                                                   = 0,
	EInputMappingRebuildType__Rebuild                                                = 1,
	EInputMappingRebuildType__RebuildWithFlush                                       = 2
};

/// Enum /Script/EnhancedInput.EDeadZoneType
/// Size: 0x01 (1 bytes)
enum class EDeadZoneType : uint8_t
{
	EDeadZoneType__Axial                                                             = 0,
	EDeadZoneType__Radial                                                            = 1
};

/// Enum /Script/EnhancedInput.EFOVScalingType
/// Size: 0x01 (1 bytes)
enum class EFOVScalingType : uint8_t
{
	EFOVScalingType__Standard                                                        = 0,
	EFOVScalingType__UE4_BackCompat                                                  = 1
};

/// Enum /Script/EnhancedInput.EInputAxisSwizzle
/// Size: 0x01 (1 bytes)
enum class EInputAxisSwizzle : uint8_t
{
	EInputAxisSwizzle__YXZ                                                           = 0,
	EInputAxisSwizzle__ZYX                                                           = 1,
	EInputAxisSwizzle__XZY                                                           = 2,
	EInputAxisSwizzle__YZX                                                           = 3,
	EInputAxisSwizzle__ZXY                                                           = 4
};

/// Enum /Script/EnhancedInput.ETriggerState
/// Size: 0x01 (1 bytes)
enum class ETriggerState : uint8_t
{
	ETriggerState__None                                                              = 0,
	ETriggerState__Ongoing                                                           = 1,
	ETriggerState__Triggered                                                         = 2
};

/// Enum /Script/EnhancedInput.ETriggerEvent
/// Size: 0x01 (1 bytes)
enum class ETriggerEvent : uint8_t
{
	ETriggerEvent__None                                                              = 0,
	ETriggerEvent__Triggered                                                         = 1,
	ETriggerEvent__Started                                                           = 2,
	ETriggerEvent__Ongoing                                                           = 4,
	ETriggerEvent__Canceled                                                          = 8,
	ETriggerEvent__Completed                                                         = 16
};

/// Enum /Script/EnhancedInput.ETriggerType
/// Size: 0x01 (1 bytes)
enum class ETriggerType : uint8_t
{
	ETriggerType__Explicit                                                           = 0,
	ETriggerType__Implicit                                                           = 1,
	ETriggerType__Blocker                                                            = 2
};

/// Enum /Script/EnhancedInput.ETriggerEventsSupported
/// Size: 0x01 (1 bytes)
enum class ETriggerEventsSupported : uint8_t
{
	ETriggerEventsSupported__None                                                    = 0,
	ETriggerEventsSupported__Instant                                                 = 1,
	ETriggerEventsSupported__Uninterruptible                                         = 2,
	ETriggerEventsSupported__Ongoing                                                 = 4,
	ETriggerEventsSupported__All                                                     = 7
};

/// Struct /Script/EnhancedInput.BlueprintEnhancedInputActionBinding
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBlueprintEnhancedInputActionBinding
{ 
	class UInputAction*                                InputAction;                                                // 0x0000   (0x0008)  
	ETriggerEvent                                      TriggerEvent;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	FName                                              FunctionNameToBind;                                         // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputActionDelegateBinding
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{ 
public:
	TArray<FBlueprintEnhancedInputActionBinding>       InputActionDelegateBindings;                                // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.EnhancedInputActionValueBinding
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{ 
public:
	TArray<FBlueprintEnhancedInputActionBinding>       InputActionValueBindings;                                   // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.EnhancedInputComponent
/// Size: 0x0160 (352 bytes) (0x000128 - 0x000160) align 8 MaxSize: 0x0160
class UEnhancedInputComponent : public UInputComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0128   (0x0038)  MISSED


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputComponent.GetBoundActionValue
	// FInputActionValue GetBoundActionValue(class UInputAction* Action);                                                       // [0x11c7f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/EnhancedInput.DefaultContextSetting
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FDefaultContextSetting
{ 
	TWeakObjectPtr<class UInputMappingContext*>        InputMappingContext;                                        // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0008   (0x0028)  MISSED
	int32_t                                            Priority;                                                   // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputDeveloperSettings
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000A0) align 8 MaxSize: 0x00A0
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{ 
public:
	TArray<FDefaultContextSetting>                     DefaultMappingContexts;                                     // 0x0038   (0x0010)  
	TArray<FDefaultContextSetting>                     DefaultWorldSubsystemMappingContexts;                       // 0x0048   (0x0010)  
	TSoftObjectPtr<class UClass*>                      DefaultWorldInputClass;                                     // 0x0058   (0x0030)  
	FPerPlatformSettings                               PlatformSettings;                                           // 0x0088   (0x0010)  
	bool                                               bEnableDefaultMappingContexts : 1;                          // 0x0098:0 (0x0001)  
	bool                                               bShouldOnlyTriggerLastActionInChord : 1;                    // 0x0098:1 (0x0001)  
	bool                                               bEnableWorldSubsystem : 1;                                  // 0x0098:2 (0x0001)  
	bool                                               bShouldLogAllWorldSubsystemInputs : 1;                      // 0x0098:3 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputLibrary.RequestRebuildControlMappingsUsingContext
	// void RequestRebuildControlMappingsUsingContext(class UInputMappingContext* Context, bool bForceImmediately);             // [0x11cab60] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValueOfType
	// FInputActionValue MakeInputActionValueOfType(double X, double Y, double Z, EInputActionValueType ValueType);             // [0x11c9c70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.MakeInputActionValue
	// FInputActionValue MakeInputActionValue(double X, double Y, double Z, FInputActionValue& MatchValueType);                 // [0x11c9ab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.IsActionKeyMappingPlayerMappable
	// bool IsActionKeyMappingPlayerMappable(FEnhancedActionKeyMapping& ActionKeyMapping);                                      // [0x11c9380] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetThirdPlayerMappableKeySlot
	// FPlayerMappableKeySlot GetThirdPlayerMappableKeySlot();                                                                  // [0x11c8d80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetSecondPlayerMappableKeySlot
	// FPlayerMappableKeySlot GetSecondPlayerMappableKeySlot();                                                                 // [0x11c8d60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetPlayerMappableKeySettings
	// class UPlayerMappableKeySettings* GetPlayerMappableKeySettings(FEnhancedActionKeyMapping& ActionKeyMapping);             // [0x11c8af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetMappingName
	// FName GetMappingName(FEnhancedActionKeyMapping& ActionKeyMapping);                                                       // [0x11c8900] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetFourthPlayerMappableKeySlot
	// FPlayerMappableKeySlot GetFourthPlayerMappableKeySlot();                                                                 // [0x11c8430] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetFirstPlayerMappableKeySlot
	// FPlayerMappableKeySlot GetFirstPlayerMappableKeySlot();                                                                  // [0x11c8410] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.GetBoundActionValue
	// FInputActionValue GetBoundActionValue(class AActor* Actor, class UInputAction* Action);                                  // [0x11c8040] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToString
	// FString Conv_InputActionValueToString(FInputActionValue ActionValue);                                                    // [0x11c7c40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToBool
	// bool Conv_InputActionValueToBool(FInputActionValue InValue);                                                             // [0x11c7b80] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis3D
	// FVector Conv_InputActionValueToAxis3D(FInputActionValue ActionValue);                                                    // [0x11c7ae0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis2D
	// FVector2D Conv_InputActionValueToAxis2D(FInputActionValue InValue);                                                      // [0x11c7a50] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.Conv_InputActionValueToAxis1D
	// double Conv_InputActionValueToAxis1D(FInputActionValue InValue);                                                         // [0x11c79b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EnhancedInput.EnhancedInputLibrary.BreakInputActionValue
	// void BreakInputActionValue(FInputActionValue InActionValue, double& X, double& Y, double& Z, EInputActionValueType& Type); // [0x11c7780] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EnhancedInput.EnhancedInputPlatformData
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UEnhancedInputPlatformData : public UObject
{ 
public:
	TMap<class UInputMappingContext*, class UInputMappingContext*> MappingContextRedirects;                        // 0x0028   (0x0050)  


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputPlatformData.GetContextRedirect
	// class UInputMappingContext* GetContextRedirect(class UInputMappingContext* InContext);                                   // [0x11c82b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.EnhancedInputPlatformSettings
/// Size: 0x0068 (104 bytes) (0x000040 - 0x000068) align 8 MaxSize: 0x0068
class UEnhancedInputPlatformSettings : public UPlatformSettings
{ 
public:
	SDK_UNDEFINED(16,1140) /* TArray<TSoftObjectPtr<UClass*>> */ __um(InputData);                                  // 0x0040   (0x0010)  
	TArray<class UClass*>                              InputDataClasses;                                           // 0x0050   (0x0010)  
	bool                                               bShouldLogMappingContextRedirects;                          // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedInputSubsystemInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEnhancedInputSubsystemInterface : public UInterface
{ 
public:


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RequestRebuildControlMappings
	// void RequestRebuildControlMappings(FModifyContextOptions& Options, EInputMappingRebuildType RebuildType);                // [0x11caa80] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemovePlayerMappableConfig
	// void RemovePlayerMappableConfig(class UPlayerMappableInputConfig* Config, FModifyContextOptions& Options);               // [0x11ca990] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveMappingContext
	// void RemoveMappingContext(class UInputMappingContext* MappingContext, FModifyContextOptions& Options);                   // [0x11ca8b0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeysForMapping
	// int32_t RemoveAllPlayerMappedKeysForMapping(FName MappingName, FModifyContextOptions& Options);                          // [0x11ca7c0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.RemoveAllPlayerMappedKeys
	// void RemoveAllPlayerMappedKeys(FModifyContextOptions& Options);                                                          // [0x11ca720] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInContextSet
	// EMappingQueryResult QueryMapKeyInContextSet(TArray<UInputMappingContext*>& PrioritizedActiveContexts, class UInputMappingContext* InputContext, class UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues); // [0x11ca390] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryMapKeyInActiveContextSet
	// EMappingQueryResult QueryMapKeyInActiveContextSet(class UInputMappingContext* InputContext, class UInputAction* Action, FKey Key, TArray<FMappingQueryIssue>& OutIssues, EMappingQueryIssue BlockingIssues); // [0x11ca170] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.QueryKeysMappedToAction
	// TArray<FKey> QueryKeysMappedToAction(class UInputAction* Action);                                                        // [0x11ca0c0] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.K2_RemovePlayerMappedKeyInSlot
	// int32_t K2_RemovePlayerMappedKeyInSlot(FName MappingName, FPlayerMappableKeySlot& KeySlot, FModifyContextOptions& Options); // [0x11c9950] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.K2_GetPlayerMappedKeyInSlot
	// FKey K2_GetPlayerMappedKeyInSlot(FName MappingName, FPlayerMappableKeySlot& KeySlot);                                    // [0x11c97f0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.K2_AddPlayerMappedKeyInSlot
	// int32_t K2_AddPlayerMappedKeyInSlot(FName MappingName, FKey NewKey, FPlayerMappableKeySlot& KeySlot, FModifyContextOptions& Options); // [0x11c95f0] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputVectorForAction
	// void InjectInputVectorForAction(class UInputAction* Action, FVector Value, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x11c91d0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.InjectInputForAction
	// void InjectInputForAction(class UInputAction* Action, FInputActionValue RawValue, TArray<UInputModifier*>& Modifiers, TArray<UInputTrigger*>& Triggers); // [0x11c9000] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.HasMappingContext
	// bool HasMappingContext(class UInputMappingContext* MappingContext, int32_t& OutFoundPriority);                           // [0x11c8f20] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappedKeys
	// TArray<FKey> GetAllPlayerMappedKeys(FName MappingName);                                                                  // [0x11c7e60] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.GetAllPlayerMappableActionKeyMappings
	// TArray<FEnhancedActionKeyMapping> GetAllPlayerMappableActionKeyMappings();                                               // [0x11c7e10] BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.ClearAllMappings
	// void ClearAllMappings();                                                                                                 // [0x11c7990] BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddPlayerMappableConfig
	// void AddPlayerMappableConfig(class UPlayerMappableInputConfig* Config, FModifyContextOptions& Options);                  // [0x11c7690] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputSubsystemInterface.AddMappingContext
	// void AddMappingContext(class UInputMappingContext* MappingContext, int32_t Priority, FModifyContextOptions& Options);    // [0x11c7570] BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/EnhancedInput.EnhancedInputLocalPlayerSubsystem
/// Size: 0x01E0 (480 bytes) (0x000030 - 0x0001E0) align 8 MaxSize: 0x01E0
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x1A0];                                     // 0x0030   (0x01A0)  MISSED
	SDK_UNDEFINED(16,1141) /* FMulticastInlineDelegate */ __um(ControlMappingsRebuiltDelegate);                    // 0x01D0   (0x0010)  
};

/// Class /Script/EnhancedInput.EnhancedInputWorldSubsystem
/// Size: 0x01F8 (504 bytes) (0x000030 - 0x0001F8) align 8 MaxSize: 0x01F8
class UEnhancedInputWorldSubsystem : public UWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x1A0];                                     // 0x0030   (0x01A0)  MISSED
	class UEnhancedPlayerInput*                        PlayerInput;                                                // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x01D8   (0x0010)  MISSED
	SDK_UNDEFINED(16,1142) /* TArray<TWeakObjectPtr<UInputComponent*>> */ __um(CurrentInputStack);                 // 0x01E8   (0x0010)  


	/// Functions
	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.RemoveActorInputComponent
	// bool RemoveActorInputComponent(class AActor* Actor);                                                                     // [0x11ca620] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.EnhancedInputWorldSubsystem.AddActorInputComponent
	// void AddActorInputComponent(class AActor* Actor);                                                                        // [0x11c7330] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/EnhancedInput.PlayerMappableKeyOptions
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FPlayerMappableKeyOptions
{ 
	class UObject*                                     MetaData;                                                   // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
	FText                                              DisplayCategory;                                            // 0x0028   (0x0018)  
};

/// Struct /Script/EnhancedInput.EnhancedActionKeyMapping
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FEnhancedActionKeyMapping
{ 
	FPlayerMappableKeyOptions                          PlayerMappableOptions;                                      // 0x0000   (0x0040)  
	TArray<class UInputTrigger*>                       Triggers;                                                   // 0x0040   (0x0010)  
	TArray<class UInputModifier*>                      Modifiers;                                                  // 0x0050   (0x0010)  
	class UInputAction*                                Action;                                                     // 0x0060   (0x0008)  
	FKey                                               Key;                                                        // 0x0068   (0x0018)  
	bool                                               bShouldBeIgnored : 1;                                       // 0x0080:0 (0x0001)  
	EPlayerMappableKeySettingBehaviors                 SettingBehavior;                                            // 0x0081   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0082   (0x0006)  MISSED
	class UPlayerMappableKeySettings*                  PlayerMappableKeySettings;                                  // 0x0088   (0x0008)  
	bool                                               bIsPlayerMappable : 1;                                      // 0x0090:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0091   (0x0007)  MISSED
};

/// Struct /Script/EnhancedInput.InputActionInstance
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FInputActionInstance
{ 
	class UInputAction*                                SourceAction;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0008   (0x000B)  MISSED
	ETriggerEvent                                      TriggerEvent;                                               // 0x0013   (0x0001)  
	float                                              LastTriggeredWorldTime;                                     // 0x0014   (0x0004)  
	TArray<class UInputTrigger*>                       Triggers;                                                   // 0x0018   (0x0010)  
	TArray<class UInputModifier*>                      Modifiers;                                                  // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0038   (0x0020)  MISSED
	float                                              ElapsedProcessedTime;                                       // 0x0058   (0x0004)  
	float                                              ElapsedTriggeredTime;                                       // 0x005C   (0x0004)  
};

/// Struct /Script/EnhancedInput.InjectedInputArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FInjectedInputArray
{ 
	unsigned char                                      UnknownData00_2[0x10];                                      // 0x0000   (0x0010)  MISSED
};

/// Class /Script/EnhancedInput.EnhancedPlayerInput
/// Size: 0x0740 (1856 bytes) (0x000498 - 0x000740) align 8 MaxSize: 0x0740
class UEnhancedPlayerInput : public UPlayerInput
{ 
public:
	TMap<class UInputMappingContext*, int32_t>         AppliedInputContexts;                                       // 0x0498   (0x0050)  
	TArray<FEnhancedActionKeyMapping>                  EnhancedActionMappings;                                     // 0x04E8   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x04F8   (0x0050)  MISSED
	TMap<class UInputAction*, FInputActionInstance>    ActionInstanceData;                                         // 0x0548   (0x0050)  
	unsigned char                                      UnknownData01_6[0xA0];                                      // 0x0598   (0x00A0)  MISSED
	TMap<FKey, FVector>                                KeysPressedThisTick;                                        // 0x0638   (0x0050)  
	TMap<class UInputAction*, FInjectedInputArray>     InputsInjectedThisTick;                                     // 0x0688   (0x0050)  
	SDK_UNDEFINED(80,1143) /* TSet<UInputAction*> */   __um(LastInjectedActions);                                  // 0x06D8   (0x0050)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0728   (0x0018)  MISSED
};

/// Class /Script/EnhancedInput.InputAction
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UInputAction : public UDataAsset
{ 
public:
	FText                                              ActionDescription;                                          // 0x0030   (0x0018)  
	bool                                               bConsumeInput;                                              // 0x0048   (0x0001)  
	bool                                               bTriggerWhenPaused;                                         // 0x0049   (0x0001)  
	bool                                               bReserveAllMappings;                                        // 0x004A   (0x0001)  
	EInputActionValueType                              ValueType;                                                  // 0x004B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<class UInputTrigger*>                       Triggers;                                                   // 0x0050   (0x0010)  
	TArray<class UInputModifier*>                      Modifiers;                                                  // 0x0060   (0x0010)  
	class UPlayerMappableKeySettings*                  PlayerMappableKeySettings;                                  // 0x0070   (0x0008)  
};

/// Struct /Script/EnhancedInput.BlueprintInputDebugKeyDelegateBinding
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FBlueprintInputDebugKeyDelegateBinding
{ 
	FInputChord                                        InputChord;                                                 // 0x0000   (0x0020)  
	TEnumAsByte<EInputEvent>                           InputKeyEvent;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FName                                              FunctionNameToBind;                                         // 0x0024   (0x0008)  
	bool                                               bExecuteWhenPaused;                                         // 0x002C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/EnhancedInput.InputDebugKeyDelegateBinding
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{ 
public:
	TArray<FBlueprintInputDebugKeyDelegateBinding>     InputDebugKeyDelegateBindings;                              // 0x0028   (0x0010)  
};

/// Class /Script/EnhancedInput.InputMappingContext
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UInputMappingContext : public UDataAsset
{ 
public:
	TArray<FEnhancedActionKeyMapping>                  Mappings;                                                   // 0x0030   (0x0010)  
	FText                                              ContextDescription;                                         // 0x0040   (0x0018)  


	/// Functions
	// Function /Script/EnhancedInput.InputMappingContext.UnmapKey
	// void UnmapKey(class UInputAction* Action, FKey Key);                                                                     // [0x11cad40] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAllKeysFromAction
	// void UnmapAllKeysFromAction(class UInputAction* Action);                                                                 // [0x11cac40] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAll
	// void UnmapAll();                                                                                                         // [0x11cacd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.UnmapAction
	// void UnmapAction(class UInputAction* Action);                                                                            // [0x11cac40] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.InputMappingContext.MapKey
	// FEnhancedActionKeyMapping MapKey(class UInputAction* Action, FKey ToKey);                                                // [0x11c9df0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EnhancedInput.InputModifier
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInputModifier : public UObject
{ 
public:


	/// Functions
	// Function /Script/EnhancedInput.InputModifier.ModifyRaw
	// FInputActionValue ModifyRaw(class UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime);   // [0x11c9f40] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/EnhancedInput.InputModifier.GetVisualizationColor
	// FLinearColor GetVisualizationColor(FInputActionValue SampleValue, FInputActionValue FinalValue);                         // [0x11c8dd0] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/EnhancedInput.InputModifierDeadZone
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UInputModifierDeadZone : public UInputModifier
{ 
public:
	float                                              LowerThreshold;                                             // 0x0028   (0x0004)  
	float                                              UpperThreshold;                                             // 0x002C   (0x0004)  
	EDeadZoneType                                      Type;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierScalar
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UInputModifierScalar : public UInputModifier
{ 
public:
	FVector                                            Scalar;                                                     // 0x0028   (0x0018)  
};

/// Class /Script/EnhancedInput.InputModifierScaleByDeltaTime
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInputModifierScaleByDeltaTime : public UInputModifier
{ 
public:
};

/// Class /Script/EnhancedInput.InputModifierNegate
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UInputModifierNegate : public UInputModifier
{ 
public:
	bool                                               bX;                                                         // 0x0028   (0x0001)  
	bool                                               bY;                                                         // 0x0029   (0x0001)  
	bool                                               bZ;                                                         // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierSmooth
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UInputModifierSmooth : public UInputModifier
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveExponential
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UInputModifierResponseCurveExponential : public UInputModifier
{ 
public:
	FVector                                            CurveExponent;                                              // 0x0028   (0x0018)  
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveUser
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UInputModifierResponseCurveUser : public UInputModifier
{ 
public:
	class UCurveFloat*                                 ResponseX;                                                  // 0x0028   (0x0008)  
	class UCurveFloat*                                 ResponseY;                                                  // 0x0030   (0x0008)  
	class UCurveFloat*                                 ResponseZ;                                                  // 0x0038   (0x0008)  
};

/// Class /Script/EnhancedInput.InputModifierFOVScaling
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UInputModifierFOVScaling : public UInputModifier
{ 
public:
	float                                              FOVScale;                                                   // 0x0028   (0x0004)  
	EFOVScalingType                                    FOVScalingType;                                             // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x002D   (0x0003)  MISSED
};

/// Class /Script/EnhancedInput.InputModifierToWorldSpace
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInputModifierToWorldSpace : public UInputModifier
{ 
public:
};

/// Class /Script/EnhancedInput.InputModifierSwizzleAxis
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UInputModifierSwizzleAxis : public UInputModifier
{ 
public:
	EInputAxisSwizzle                                  Order;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/EnhancedInput.InputActionValue
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInputActionValue
{ 
	unsigned char                                      UnknownData00_2[0x20];                                      // 0x0000   (0x0020)  MISSED
};

/// Class /Script/EnhancedInput.InputTrigger
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UInputTrigger : public UObject
{ 
public:
	float                                              ActuationThreshold;                                         // 0x0028   (0x0004)  
	bool                                               bShouldAlwaysTick;                                          // 0x002C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x002D   (0x0003)  MISSED
	FInputActionValue                                  LastValue;                                                  // 0x0030   (0x0020)  


	/// Functions
	// Function /Script/EnhancedInput.InputTrigger.UpdateState
	// ETriggerState UpdateState(class UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime);    // [0x11caf50] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/EnhancedInput.InputTrigger.IsActuated
	// bool IsActuated(FInputActionValue& ForValue);                                                                            // [0x11c9500] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.InputTrigger.GetTriggerType
	// ETriggerType GetTriggerType();                                                                                           // [0x11c8da0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.InputTriggerTimedBase
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UInputTriggerTimedBase : public UInputTrigger
{ 
public:
	float                                              HeldDuration;                                               // 0x0050   (0x0004)  
	bool                                               bAffectedByTimeDilation;                                    // 0x0054   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerDown
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UInputTriggerDown : public UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerPressed
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UInputTriggerPressed : public UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerReleased
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
class UInputTriggerReleased : public UInputTrigger
{ 
public:
};

/// Class /Script/EnhancedInput.InputTriggerHold
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UInputTriggerHold : public UInputTriggerTimedBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x0058   (0x0004)  MISSED
	float                                              HoldTimeThreshold;                                          // 0x005C   (0x0004)  
	bool                                               bIsOneShot;                                                 // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerHoldAndRelease
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{ 
public:
	float                                              HoldTimeThreshold;                                          // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerTap
/// Size: 0x0060 (96 bytes) (0x000058 - 0x000060) align 8 MaxSize: 0x0060
class UInputTriggerTap : public UInputTriggerTimedBase
{ 
public:
	float                                              TapReleaseTimeThreshold;                                    // 0x0058   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x005C   (0x0004)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerPulse
/// Size: 0x0068 (104 bytes) (0x000058 - 0x000068) align 8 MaxSize: 0x0068
class UInputTriggerPulse : public UInputTriggerTimedBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x0058   (0x0004)  MISSED
	bool                                               bTriggerOnStart;                                            // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	float                                              interval;                                                   // 0x0060   (0x0004)  
	int32_t                                            TriggerLimit;                                               // 0x0064   (0x0004)  
};

/// Class /Script/EnhancedInput.InputTriggerChordAction
/// Size: 0x0058 (88 bytes) (0x000050 - 0x000058) align 8 MaxSize: 0x0058
class UInputTriggerChordAction : public UInputTrigger
{ 
public:
	class UInputAction*                                ChordAction;                                                // 0x0050   (0x0008)  
};

/// Class /Script/EnhancedInput.InputTriggerChordBlocker
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class UInputTriggerChordBlocker : public UInputTriggerChordAction
{ 
public:
};

/// Struct /Script/EnhancedInput.InputComboStepData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FInputComboStepData
{ 
	class UInputAction*                                ComboStepAction;                                            // 0x0000   (0x0008)  
	char                                               ComboStepCompletionStates;                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              TimeToPressKey;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/EnhancedInput.InputCancelAction
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FInputCancelAction
{ 
	class UInputAction*                                CancelAction;                                               // 0x0000   (0x0008)  
	char                                               CancellationStates;                                         // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Class /Script/EnhancedInput.InputTriggerCombo
/// Size: 0x0078 (120 bytes) (0x000050 - 0x000078) align 8 MaxSize: 0x0078
class UInputTriggerCombo : public UInputTrigger
{ 
public:
	int32_t                                            CurrentComboStepIndex;                                      // 0x0050   (0x0004)  
	float                                              CurrentTimeBetweenComboSteps;                               // 0x0054   (0x0004)  
	TArray<FInputComboStepData>                        ComboActions;                                               // 0x0058   (0x0010)  
	TArray<FInputCancelAction>                         InputCancelActions;                                         // 0x0068   (0x0010)  
};

/// Class /Script/EnhancedInput.PlayerMappableInputConfig
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align 8 MaxSize: 0x00B0
class UPlayerMappableInputConfig : public UPrimaryDataAsset
{ 
public:
	FName                                              ConfigName;                                                 // 0x0030   (0x0008)  
	FText                                              ConfigDisplayName;                                          // 0x0038   (0x0018)  
	bool                                               bIsDeprecated;                                              // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	class UObject*                                     MetaData;                                                   // 0x0058   (0x0008)  
	TMap<class UInputMappingContext*, int32_t>         Contexts;                                                   // 0x0060   (0x0050)  


	/// Functions
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0xd63f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.IsDeprecated
	// bool IsDeprecated();                                                                                                     // [0x11c95d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetPlayerMappableKeys
	// TArray<FEnhancedActionKeyMapping> GetPlayerMappableKeys();                                                               // [0x11c8c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMetadata
	// class UObject* GetMetadata();                                                                                            // [0x11c8ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMappingContexts
	// TMap<UInputMappingContext*, int32_t> GetMappingContexts();                                                               // [0x11c8800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetMappingByName
	// FEnhancedActionKeyMapping GetMappingByName(FName MappingName);                                                           // [0x11c85c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetKeysBoundToAction
	// TArray<FEnhancedActionKeyMapping> GetKeysBoundToAction(class UInputAction* InAction);                                    // [0x11c8450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetDisplayName
	// FText GetDisplayName();                                                                                                  // [0x11c83e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnhancedInput.PlayerMappableInputConfig.GetConfigName
	// FName GetConfigName();                                                                                                   // [0x11c8290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EnhancedInput.PlayerMappableKeySettings
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UPlayerMappableKeySettings : public UObject
{ 
public:
	class UObject*                                     MetaData;                                                   // 0x0028   (0x0008)  
	FName                                              Name;                                                       // 0x0030   (0x0008)  
	FText                                              DisplayName;                                                // 0x0038   (0x0018)  
	FText                                              DisplayCategory;                                            // 0x0050   (0x0018)  
};

/// Struct /Script/EnhancedInput.MappingQueryIssue
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMappingQueryIssue
{ 
	EMappingQueryIssue                                 Issue;                                                      // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UInputMappingContext*                        BlockingContext;                                            // 0x0008   (0x0008)  
	class UInputAction*                                BlockingAction;                                             // 0x0010   (0x0008)  
};

/// Struct /Script/EnhancedInput.PlayerMappableKeySlot
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPlayerMappableKeySlot
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	int32_t                                            SlotNumber;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/EnhancedInput.ModifyContextOptions
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FModifyContextOptions
{ 
	bool                                               bIgnoreAllPressedKeysUntilRelease : 1;                      // 0x0000:0 (0x0001)  
	bool                                               bForceImmediately : 1;                                      // 0x0000:1 (0x0001)  
};

#pragma pack(pop)


static_assert(sizeof(FBlueprintEnhancedInputActionBinding) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UEnhancedInputActionDelegateBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEnhancedInputActionValueBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UEnhancedInputComponent) == 0x0160); // 352 bytes (0x000128 - 0x000160)
static_assert(sizeof(FDefaultContextSetting) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UEnhancedInputDeveloperSettings) == 0x00A0); // 160 bytes (0x000038 - 0x0000A0)
static_assert(sizeof(UEnhancedInputLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnhancedInputPlatformData) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UEnhancedInputPlatformSettings) == 0x0068); // 104 bytes (0x000040 - 0x000068)
static_assert(sizeof(UEnhancedInputSubsystemInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEnhancedInputLocalPlayerSubsystem) == 0x01E0); // 480 bytes (0x000030 - 0x0001E0)
static_assert(sizeof(UEnhancedInputWorldSubsystem) == 0x01F8); // 504 bytes (0x000030 - 0x0001F8)
static_assert(sizeof(FPlayerMappableKeyOptions) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FEnhancedActionKeyMapping) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FInputActionInstance) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FInjectedInputArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UEnhancedPlayerInput) == 0x0740); // 1856 bytes (0x000498 - 0x000740)
static_assert(sizeof(UInputAction) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(FBlueprintInputDebugKeyDelegateBinding) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UInputDebugKeyDelegateBinding) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInputMappingContext) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UInputModifier) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInputModifierDeadZone) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInputModifierScalar) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UInputModifierScaleByDeltaTime) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInputModifierNegate) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInputModifierSmooth) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UInputModifierResponseCurveExponential) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UInputModifierResponseCurveUser) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UInputModifierFOVScaling) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInputModifierToWorldSpace) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInputModifierSwizzleAxis) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FInputActionValue) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UInputTrigger) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UInputTriggerTimedBase) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UInputTriggerDown) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UInputTriggerPressed) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UInputTriggerReleased) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(UInputTriggerHold) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UInputTriggerHoldAndRelease) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UInputTriggerTap) == 0x0060); // 96 bytes (0x000058 - 0x000060)
static_assert(sizeof(UInputTriggerPulse) == 0x0068); // 104 bytes (0x000058 - 0x000068)
static_assert(sizeof(UInputTriggerChordAction) == 0x0058); // 88 bytes (0x000050 - 0x000058)
static_assert(sizeof(UInputTriggerChordBlocker) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(FInputComboStepData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInputCancelAction) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UInputTriggerCombo) == 0x0078); // 120 bytes (0x000050 - 0x000078)
static_assert(sizeof(UPlayerMappableInputConfig) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UPlayerMappableKeySettings) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FMappingQueryIssue) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FPlayerMappableKeySlot) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FModifyContextOptions) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, InputAction) == 0x0000);
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, TriggerEvent) == 0x0008);
static_assert(offsetof(FBlueprintEnhancedInputActionBinding, FunctionNameToBind) == 0x000C);
static_assert(offsetof(UEnhancedInputActionDelegateBinding, InputActionDelegateBindings) == 0x0028);
static_assert(offsetof(UEnhancedInputActionValueBinding, InputActionValueBindings) == 0x0028);
static_assert(offsetof(FDefaultContextSetting, InputMappingContext) == 0x0000);
static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultMappingContexts) == 0x0038);
static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultWorldSubsystemMappingContexts) == 0x0048);
static_assert(offsetof(UEnhancedInputDeveloperSettings, DefaultWorldInputClass) == 0x0058);
static_assert(offsetof(UEnhancedInputDeveloperSettings, PlatformSettings) == 0x0088);
static_assert(offsetof(UEnhancedInputPlatformData, MappingContextRedirects) == 0x0028);
static_assert(offsetof(UEnhancedInputPlatformSettings, InputDataClasses) == 0x0050);
static_assert(offsetof(UEnhancedInputWorldSubsystem, PlayerInput) == 0x01D0);
static_assert(offsetof(FPlayerMappableKeyOptions, MetaData) == 0x0000);
static_assert(offsetof(FPlayerMappableKeyOptions, Name) == 0x0008);
static_assert(offsetof(FPlayerMappableKeyOptions, DisplayName) == 0x0010);
static_assert(offsetof(FPlayerMappableKeyOptions, DisplayCategory) == 0x0028);
static_assert(offsetof(FEnhancedActionKeyMapping, PlayerMappableOptions) == 0x0000);
static_assert(offsetof(FEnhancedActionKeyMapping, Triggers) == 0x0040);
static_assert(offsetof(FEnhancedActionKeyMapping, Modifiers) == 0x0050);
static_assert(offsetof(FEnhancedActionKeyMapping, Action) == 0x0060);
static_assert(offsetof(FEnhancedActionKeyMapping, Key) == 0x0068);
static_assert(offsetof(FEnhancedActionKeyMapping, SettingBehavior) == 0x0081);
static_assert(offsetof(FEnhancedActionKeyMapping, PlayerMappableKeySettings) == 0x0088);
static_assert(offsetof(FInputActionInstance, SourceAction) == 0x0000);
static_assert(offsetof(FInputActionInstance, TriggerEvent) == 0x0013);
static_assert(offsetof(FInputActionInstance, Triggers) == 0x0018);
static_assert(offsetof(FInputActionInstance, Modifiers) == 0x0028);
static_assert(offsetof(UEnhancedPlayerInput, AppliedInputContexts) == 0x0498);
static_assert(offsetof(UEnhancedPlayerInput, EnhancedActionMappings) == 0x04E8);
static_assert(offsetof(UEnhancedPlayerInput, ActionInstanceData) == 0x0548);
static_assert(offsetof(UEnhancedPlayerInput, KeysPressedThisTick) == 0x0638);
static_assert(offsetof(UEnhancedPlayerInput, InputsInjectedThisTick) == 0x0688);
static_assert(offsetof(UInputAction, ActionDescription) == 0x0030);
static_assert(offsetof(UInputAction, ValueType) == 0x004B);
static_assert(offsetof(UInputAction, Triggers) == 0x0050);
static_assert(offsetof(UInputAction, Modifiers) == 0x0060);
static_assert(offsetof(UInputAction, PlayerMappableKeySettings) == 0x0070);
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, InputChord) == 0x0000);
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, InputKeyEvent) == 0x0020);
static_assert(offsetof(FBlueprintInputDebugKeyDelegateBinding, FunctionNameToBind) == 0x0024);
static_assert(offsetof(UInputDebugKeyDelegateBinding, InputDebugKeyDelegateBindings) == 0x0028);
static_assert(offsetof(UInputMappingContext, Mappings) == 0x0030);
static_assert(offsetof(UInputMappingContext, ContextDescription) == 0x0040);
static_assert(offsetof(UInputModifierDeadZone, Type) == 0x0030);
static_assert(offsetof(UInputModifierScalar, Scalar) == 0x0028);
static_assert(offsetof(UInputModifierResponseCurveExponential, CurveExponent) == 0x0028);
static_assert(offsetof(UInputModifierResponseCurveUser, ResponseX) == 0x0028);
static_assert(offsetof(UInputModifierResponseCurveUser, ResponseY) == 0x0030);
static_assert(offsetof(UInputModifierResponseCurveUser, ResponseZ) == 0x0038);
static_assert(offsetof(UInputModifierFOVScaling, FOVScalingType) == 0x002C);
static_assert(offsetof(UInputModifierSwizzleAxis, Order) == 0x0028);
static_assert(offsetof(UInputTrigger, LastValue) == 0x0030);
static_assert(offsetof(UInputTriggerChordAction, ChordAction) == 0x0050);
static_assert(offsetof(FInputComboStepData, ComboStepAction) == 0x0000);
static_assert(offsetof(FInputCancelAction, CancelAction) == 0x0000);
static_assert(offsetof(UInputTriggerCombo, ComboActions) == 0x0058);
static_assert(offsetof(UInputTriggerCombo, InputCancelActions) == 0x0068);
static_assert(offsetof(UPlayerMappableInputConfig, ConfigName) == 0x0030);
static_assert(offsetof(UPlayerMappableInputConfig, ConfigDisplayName) == 0x0038);
static_assert(offsetof(UPlayerMappableInputConfig, MetaData) == 0x0058);
static_assert(offsetof(UPlayerMappableInputConfig, Contexts) == 0x0060);
static_assert(offsetof(UPlayerMappableKeySettings, MetaData) == 0x0028);
static_assert(offsetof(UPlayerMappableKeySettings, Name) == 0x0030);
static_assert(offsetof(UPlayerMappableKeySettings, DisplayName) == 0x0038);
static_assert(offsetof(UPlayerMappableKeySettings, DisplayCategory) == 0x0050);
static_assert(offsetof(FMappingQueryIssue, Issue) == 0x0000);
static_assert(offsetof(FMappingQueryIssue, BlockingContext) == 0x0008);
static_assert(offsetof(FMappingQueryIssue, BlockingAction) == 0x0010);
