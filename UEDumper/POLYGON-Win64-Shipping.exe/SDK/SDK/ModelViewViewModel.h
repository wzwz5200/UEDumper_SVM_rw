
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

#pragma pack(push, 0x1)

/// Enum /Script/ModelViewViewModel.EMVVMExecutionMode
/// Size: 0x01 (1 bytes)
enum class EMVVMExecutionMode : uint8_t
{
	EMVVMExecutionMode__Immediate                                                    = 0,
	EMVVMExecutionMode__Delayed                                                      = 1,
	EMVVMExecutionMode__Tick                                                         = 2
};

/// Enum /Script/ModelViewViewModel.EMVVMBindingMode
/// Size: 0x01 (1 bytes)
enum class EMVVMBindingMode : uint8_t
{
	EMVVMBindingMode__OneTimeToDestination                                           = 0,
	EMVVMBindingMode__OneWayToDestination                                            = 1,
	EMVVMBindingMode__TwoWay                                                         = 2,
	EMVVMBindingMode__OneTimeToSource                                                = 3,
	EMVVMBindingMode__OneWayToSource                                                 = 4
};

/// Class /Script/ModelViewViewModel.MVVMSubsystem
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UMVVMSubsystem : public UEngineSubsystem
{ 
public:
	class UMVVMViewModelCollectionObject*              GlobalViewModelCollection;                                  // 0x0030   (0x0008)  


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget
	// class UMVVMView* K2_GetViewFromUserWidget(class UUserWidget* UserWidget);                                                // [0x19d6f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings
	// TArray<FMVVMAvailableBinding> K2_GetAvailableBindings(class UClass* Class, class UClass* Accessor);                      // [0x19d6dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding
	// FMVVMAvailableBinding K2_GetAvailableBinding(class UClass* Class, FMVVMBindingName BindingName, class UClass* Accessor); // [0x19d6c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
	// class UMVVMViewModelCollectionObject* GetGlobalViewModelCollection();                                                    // [0x11c8290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
	// bool DoesWidgetTreeContainedWidget(class UWidgetTree* WidgetTree, class UWidget* ViewWidget);                            // [0x19d6610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBase
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UMVVMViewModelBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0028   (0x0040)  MISSED


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
	// bool K2_SetPropertyValue(int32_t& OldValue, int32_t& NewValue);                                                          // [0x19d71d0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
	// void K2_RemoveFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                       // [0x19d7000] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
	// void K2_BroadcastFieldValueChanged(FFieldNotificationId FieldId);                                                        // [0x19d6ae0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
	// void K2_AddFieldValueChangedDelegate(FFieldNotificationId FieldId, FDelegateProperty Delegate);                          // [0x19d6920] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContext
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMVVMViewModelContext
{ 
	class UClass*                                      ContextClass;                                               // 0x0000   (0x0008)  
	FName                                              ContextName;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelContextInstance
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMVVMViewModelContextInstance
{ 
	FMVVMViewModelContext                              Context;                                                    // 0x0000   (0x0010)  
	class UMVVMViewModelBase*                          Instance;                                                   // 0x0010   (0x0008)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewModelCollection
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMVVMViewModelCollection
{ 
	TArray<FMVVMViewModelContextInstance>              ViewModelInstances;                                         // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0010   (0x0018)  MISSED
};

/// Class /Script/ModelViewViewModel.MVVMViewModelCollectionObject
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UMVVMViewModelCollectionObject : public UObject
{ 
public:
	FMVVMViewModelCollection                           ViewModelCollection;                                        // 0x0028   (0x0028)  


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
	// bool RemoveViewModel(FMVVMViewModelContext Context);                                                                     // [0x19d76a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
	// int32_t RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel);                                                 // [0x19d7520] Final|Native|Public|BlueprintCallable 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
	// class UMVVMViewModelBase* FindViewModelInstance(FMVVMViewModelContext Context);                                          // [0x19d6830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType
	// class UMVVMViewModelBase* FindFirstViewModelInstanceOfType(class UClass*& ViewModelClass);                               // [0x19d6740] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
	// bool AddViewModelInstance(FMVVMViewModelContext Context, class UMVVMViewModelBase* ViewModel);                           // [0x19d6520] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
/// Size: 0x0390 (912 bytes) (0x000370 - 0x000390) align 16 MaxSize: 0x0390
class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
	TArray<FFieldNotificationId>                       FieldNotifyNames;                                           // 0x0370   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0380   (0x0010)  MISSED
};

/// Class /Script/ModelViewViewModel.MVVMView
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UMVVMView : public UUserWidgetExtension
{ 
public:
	class UMVVMViewClass*                              ClassExtension;                                             // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0030   (0x0038)  MISSED


	/// Functions
	// Function /Script/ModelViewViewModel.MVVMView.SetViewModel
	// bool SetViewModel(FName ViewModelName, TScriptInterface<Class> ViewModel);                                               // [0x19d7810] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldPath
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 MaxSize: 0x0004
struct FMVVMVCompiledFieldPath
{ 
	int16_t                                            StartIndex;                                                 // 0x0000   (0x0002)  
	int16_t                                            Num;                                                        // 0x0002   (0x0002)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_SourceCreator
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMVVMViewClass_SourceCreator
{ 
	class UClass*                                      ExpectedSourceType;                                         // 0x0000   (0x0008)  
	FMVVMViewModelContext                              GlobalViewModelInstance;                                    // 0x0008   (0x0010)  
	FMVVMVCompiledFieldPath                            FieldPath;                                                  // 0x0018   (0x0004)  
	FName                                              PropertyName;                                               // 0x001C   (0x0008)  
	bool                                               bCreateInstance;                                            // 0x0024   (0x0001)  
	bool                                               bOptional;                                                  // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFieldId
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 MaxSize: 0x0002
struct FMVVMVCompiledFieldId
{ 
	int16_t                                            FieldIdIndex;                                               // 0x0000   (0x0002)  
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledBinding
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 2 MaxSize: 0x000C
struct FMVVMVCompiledBinding
{ 
	FMVVMVCompiledFieldPath                            SourceFieldPath;                                            // 0x0000   (0x0004)  
	FMVVMVCompiledFieldPath                            DestinationFieldPath;                                       // 0x0004   (0x0004)  
	FMVVMVCompiledFieldPath                            ConversionFunctionFieldPath;                                // 0x0008   (0x0004)  
};

/// Struct /Script/ModelViewViewModel.MVVMViewClass_CompiledBinding
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMVVMViewClass_CompiledBinding
{ 
	FMVVMVCompiledFieldId                              FieldId;                                                    // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FName                                              SourcePropertyName;                                         // 0x0004   (0x0008)  
	FMVVMVCompiledBinding                              Binding;                                                    // 0x000C   (0x000C)  
	EMVVMExecutionMode                                 ExecutionMode;                                              // 0x0018   (0x0001)  
	char                                               Flags;                                                      // 0x0019   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x001A   (0x0002)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 MaxSize: 0x0004
struct FMVVMCompiledLoadedPropertyOrFunctionIndex
{ 
	int16_t                                            Index;                                                      // 0x0000   (0x0002)  
	bool                                               bIsObjectProperty : 1;                                      // 0x0002:0 (0x0001)  
	bool                                               bIsScriptStructProperty : 1;                                // 0x0002:1 (0x0001)  
	bool                                               bIsProperty : 1;                                            // 0x0002:2 (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x0003   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMVCompiledFields
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMVVMVCompiledFields
{ 
	class UStruct*                                     ClassOrScriptStruct;                                        // 0x0000   (0x0008)  
	int16_t                                            LibraryStartIndex;                                          // 0x0008   (0x0002)  
	int16_t                                            NumberOfProperties;                                         // 0x000A   (0x0002)  
	int16_t                                            NumberOfFunctions;                                          // 0x000C   (0x0002)  
	int16_t                                            NumberOfFieldIds;                                           // 0x000E   (0x0002)  
};

/// Struct /Script/ModelViewViewModel.MVVMCompiledBindingLibrary
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FMVVMCompiledBindingLibrary
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	TArray<class UFunction*>                           LoadedFunctions;                                            // 0x0010   (0x0010)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0020   (0x0010)  MISSED
	TArray<FMVVMCompiledLoadedPropertyOrFunctionIndex> FieldPaths;                                                 // 0x0030   (0x0010)  
	TArray<FMVVMVCompiledFields>                       CompiledFields;                                             // 0x0040   (0x0010)  
	TArray<FName>                                      CompiledFieldNames;                                         // 0x0050   (0x0010)  
};

/// Class /Script/ModelViewViewModel.MVVMViewClass
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension
{ 
public:
	TArray<FMVVMViewClass_SourceCreator>               SourceCreators;                                             // 0x0028   (0x0010)  
	TArray<FMVVMViewClass_CompiledBinding>             CompiledBindings;                                           // 0x0038   (0x0010)  
	FMVVMCompiledBindingLibrary                        BindingLibrary;                                             // 0x0048   (0x0060)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/ModelViewViewModel.MVVMViewWorldSubsystem
/// Size: 0x00A0 (160 bytes) (0x000040 - 0x0000A0) align 8 MaxSize: 0x00A0
class UMVVMViewWorldSubsystem : public UTickableWorldSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0040   (0x0060)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMBindingName
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMVVMBindingName
{ 
	FName                                              BindingName;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/ModelViewViewModel.MVVMAvailableBinding
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FMVVMAvailableBinding
{ 
	FMVVMBindingName                                   BindingName;                                                // 0x0000   (0x0008)  
	bool                                               bIsReadable;                                                // 0x0008   (0x0001)  
	bool                                               bIsWritable;                                                // 0x0009   (0x0001)  
	bool                                               bHasNotify;                                                 // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x000B   (0x0001)  MISSED
};

/// Struct /Script/ModelViewViewModel.MVVMEventField
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMVVMEventField
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMVVMSubsystem) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(UMVVMViewModelBase) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FMVVMViewModelContext) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMVVMViewModelContextInstance) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMVVMViewModelCollection) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UMVVMViewModelCollectionObject) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UMVVMViewModelBlueprintGeneratedClass) == 0x0390); // 912 bytes (0x000370 - 0x000390)
static_assert(sizeof(UMVVMView) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FMVVMVCompiledFieldPath) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMVVMViewClass_SourceCreator) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMVVMVCompiledFieldId) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FMVVMVCompiledBinding) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMVVMViewClass_CompiledBinding) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMVVMCompiledLoadedPropertyOrFunctionIndex) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FMVVMVCompiledFields) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMVVMCompiledBindingLibrary) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UMVVMViewClass) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UMVVMViewWorldSubsystem) == 0x00A0); // 160 bytes (0x000040 - 0x0000A0)
static_assert(sizeof(FMVVMBindingName) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMVVMAvailableBinding) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMVVMEventField) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UMVVMSubsystem, GlobalViewModelCollection) == 0x0030);
static_assert(offsetof(FMVVMViewModelContext, ContextClass) == 0x0000);
static_assert(offsetof(FMVVMViewModelContext, ContextName) == 0x0008);
static_assert(offsetof(FMVVMViewModelContextInstance, Context) == 0x0000);
static_assert(offsetof(FMVVMViewModelContextInstance, Instance) == 0x0010);
static_assert(offsetof(FMVVMViewModelCollection, ViewModelInstances) == 0x0000);
static_assert(offsetof(UMVVMViewModelCollectionObject, ViewModelCollection) == 0x0028);
static_assert(offsetof(UMVVMViewModelBlueprintGeneratedClass, FieldNotifyNames) == 0x0370);
static_assert(offsetof(UMVVMView, ClassExtension) == 0x0028);
static_assert(offsetof(FMVVMViewClass_SourceCreator, ExpectedSourceType) == 0x0000);
static_assert(offsetof(FMVVMViewClass_SourceCreator, GlobalViewModelInstance) == 0x0008);
static_assert(offsetof(FMVVMViewClass_SourceCreator, FieldPath) == 0x0018);
static_assert(offsetof(FMVVMViewClass_SourceCreator, PropertyName) == 0x001C);
static_assert(offsetof(FMVVMVCompiledBinding, SourceFieldPath) == 0x0000);
static_assert(offsetof(FMVVMVCompiledBinding, DestinationFieldPath) == 0x0004);
static_assert(offsetof(FMVVMVCompiledBinding, ConversionFunctionFieldPath) == 0x0008);
static_assert(offsetof(FMVVMViewClass_CompiledBinding, FieldId) == 0x0000);
static_assert(offsetof(FMVVMViewClass_CompiledBinding, SourcePropertyName) == 0x0004);
static_assert(offsetof(FMVVMViewClass_CompiledBinding, Binding) == 0x000C);
static_assert(offsetof(FMVVMViewClass_CompiledBinding, ExecutionMode) == 0x0018);
static_assert(offsetof(FMVVMVCompiledFields, ClassOrScriptStruct) == 0x0000);
static_assert(offsetof(FMVVMCompiledBindingLibrary, LoadedFunctions) == 0x0010);
static_assert(offsetof(FMVVMCompiledBindingLibrary, FieldPaths) == 0x0030);
static_assert(offsetof(FMVVMCompiledBindingLibrary, CompiledFields) == 0x0040);
static_assert(offsetof(FMVVMCompiledBindingLibrary, CompiledFieldNames) == 0x0050);
static_assert(offsetof(UMVVMViewClass, SourceCreators) == 0x0028);
static_assert(offsetof(UMVVMViewClass, CompiledBindings) == 0x0038);
static_assert(offsetof(UMVVMViewClass, BindingLibrary) == 0x0048);
static_assert(offsetof(FMVVMBindingName, BindingName) == 0x0000);
static_assert(offsetof(FMVVMAvailableBinding, BindingName) == 0x0000);
