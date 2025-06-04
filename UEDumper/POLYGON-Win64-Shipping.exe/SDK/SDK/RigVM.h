
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/RigVM.ERigVMDrawSettings
/// Size: 0x01 (1 bytes)
enum class ERigVMDrawSettings : uint8_t
{
	ERigVMDrawSettings__Points                                                       = 0,
	ERigVMDrawSettings__Lines                                                        = 1,
	ERigVMDrawSettings__LineStrip                                                    = 2,
	ERigVMDrawSettings__DynamicMesh                                                  = 3
};

/// Enum /Script/RigVM.ERigVMPinDirection
/// Size: 0x01 (1 bytes)
enum class ERigVMPinDirection : uint8_t
{
	ERigVMPinDirection__Input                                                        = 0,
	ERigVMPinDirection__Output                                                       = 1,
	ERigVMPinDirection__IO                                                           = 2,
	ERigVMPinDirection__Visible                                                      = 3,
	ERigVMPinDirection__Hidden                                                       = 4,
	ERigVMPinDirection__Invalid                                                      = 5
};

/// Enum /Script/RigVM.ERigVMTransformSpace
/// Size: 0x01 (1 bytes)
enum class ERigVMTransformSpace : uint8_t
{
	ERigVMTransformSpace__LocalSpace                                                 = 0,
	ERigVMTransformSpace__GlobalSpace                                                = 1,
	ERigVMTransformSpace__Max                                                        = 2
};

/// Enum /Script/RigVM.ERigVMClampSpatialMode
/// Size: 0x01 (1 bytes)
enum class ERigVMClampSpatialMode : uint8_t
{
	ERigVMClampSpatialMode__Plane                                                    = 0,
	ERigVMClampSpatialMode__Cylinder                                                 = 1,
	ERigVMClampSpatialMode__Sphere                                                   = 2
};

/// Enum /Script/RigVM.ERigVMBreakpointAction
/// Size: 0x01 (1 bytes)
enum class ERigVMBreakpointAction : uint8_t
{
	ERigVMBreakpointAction__None                                                     = 0,
	ERigVMBreakpointAction__Resume                                                   = 1,
	ERigVMBreakpointAction__StepOver                                                 = 2,
	ERigVMBreakpointAction__StepInto                                                 = 3,
	ERigVMBreakpointAction__StepOut                                                  = 4,
	ERigVMBreakpointAction__Max                                                      = 5
};

/// Enum /Script/RigVM.ERigVMParameterType
/// Size: 0x01 (1 bytes)
enum class ERigVMParameterType : uint8_t
{
	ERigVMParameterType__Input                                                       = 0,
	ERigVMParameterType__Output                                                      = 1,
	ERigVMParameterType__Invalid                                                     = 2
};

/// Enum /Script/RigVM.ERigVMOpCode
/// Size: 0x01 (1 bytes)
enum class ERigVMOpCode : uint8_t
{
	ERigVMOpCode__Execute_0_Operands                                                 = 0,
	ERigVMOpCode__Execute_1_Operands                                                 = 1,
	ERigVMOpCode__Execute_2_Operands                                                 = 2,
	ERigVMOpCode__Execute_3_Operands                                                 = 3,
	ERigVMOpCode__Execute_4_Operands                                                 = 4,
	ERigVMOpCode__Execute_5_Operands                                                 = 5,
	ERigVMOpCode__Execute_6_Operands                                                 = 6,
	ERigVMOpCode__Execute_7_Operands                                                 = 7,
	ERigVMOpCode__Execute_8_Operands                                                 = 8,
	ERigVMOpCode__Execute_9_Operands                                                 = 9,
	ERigVMOpCode__Execute_10_Operands                                                = 10,
	ERigVMOpCode__Execute_11_Operands                                                = 11,
	ERigVMOpCode__Execute_12_Operands                                                = 12,
	ERigVMOpCode__Execute_13_Operands                                                = 13,
	ERigVMOpCode__Execute_14_Operands                                                = 14,
	ERigVMOpCode__Execute_15_Operands                                                = 15,
	ERigVMOpCode__Execute_16_Operands                                                = 16,
	ERigVMOpCode__Execute_17_Operands                                                = 17,
	ERigVMOpCode__Execute_18_Operands                                                = 18,
	ERigVMOpCode__Execute_19_Operands                                                = 19,
	ERigVMOpCode__Execute_20_Operands                                                = 20,
	ERigVMOpCode__Execute_21_Operands                                                = 21,
	ERigVMOpCode__Execute_22_Operands                                                = 22,
	ERigVMOpCode__Execute_23_Operands                                                = 23,
	ERigVMOpCode__Execute_24_Operands                                                = 24,
	ERigVMOpCode__Execute_25_Operands                                                = 25,
	ERigVMOpCode__Execute_26_Operands                                                = 26,
	ERigVMOpCode__Execute_27_Operands                                                = 27,
	ERigVMOpCode__Execute_28_Operands                                                = 28,
	ERigVMOpCode__Execute_29_Operands                                                = 29,
	ERigVMOpCode__Execute_30_Operands                                                = 30,
	ERigVMOpCode__Execute_31_Operands                                                = 31,
	ERigVMOpCode__Execute_32_Operands                                                = 32,
	ERigVMOpCode__Execute_33_Operands                                                = 33,
	ERigVMOpCode__Execute_34_Operands                                                = 34,
	ERigVMOpCode__Execute_35_Operands                                                = 35,
	ERigVMOpCode__Execute_36_Operands                                                = 36,
	ERigVMOpCode__Execute_37_Operands                                                = 37,
	ERigVMOpCode__Execute_38_Operands                                                = 38,
	ERigVMOpCode__Execute_39_Operands                                                = 39,
	ERigVMOpCode__Execute_40_Operands                                                = 40,
	ERigVMOpCode__Execute_41_Operands                                                = 41,
	ERigVMOpCode__Execute_42_Operands                                                = 42,
	ERigVMOpCode__Execute_43_Operands                                                = 43,
	ERigVMOpCode__Execute_44_Operands                                                = 44,
	ERigVMOpCode__Execute_45_Operands                                                = 45,
	ERigVMOpCode__Execute_46_Operands                                                = 46,
	ERigVMOpCode__Execute_47_Operands                                                = 47,
	ERigVMOpCode__Execute_48_Operands                                                = 48,
	ERigVMOpCode__Execute_49_Operands                                                = 49,
	ERigVMOpCode__Execute_50_Operands                                                = 50,
	ERigVMOpCode__Execute_51_Operands                                                = 51,
	ERigVMOpCode__Execute_52_Operands                                                = 52,
	ERigVMOpCode__Execute_53_Operands                                                = 53,
	ERigVMOpCode__Execute_54_Operands                                                = 54,
	ERigVMOpCode__Execute_55_Operands                                                = 55,
	ERigVMOpCode__Execute_56_Operands                                                = 56,
	ERigVMOpCode__Execute_57_Operands                                                = 57,
	ERigVMOpCode__Execute_58_Operands                                                = 58,
	ERigVMOpCode__Execute_59_Operands                                                = 59,
	ERigVMOpCode__Execute_60_Operands                                                = 60,
	ERigVMOpCode__Execute_61_Operands                                                = 61,
	ERigVMOpCode__Execute_62_Operands                                                = 62,
	ERigVMOpCode__Execute_63_Operands                                                = 63,
	ERigVMOpCode__Execute_64_Operands                                                = 64,
	ERigVMOpCode__Zero                                                               = 65,
	ERigVMOpCode__BoolFalse                                                          = 66,
	ERigVMOpCode__BoolTrue                                                           = 67,
	ERigVMOpCode__Copy                                                               = 68,
	ERigVMOpCode__Increment                                                          = 69,
	ERigVMOpCode__Decrement                                                          = 70,
	ERigVMOpCode__Equals                                                             = 71,
	ERigVMOpCode__NotEquals                                                          = 72,
	ERigVMOpCode__JumpAbsolute                                                       = 73,
	ERigVMOpCode__JumpForward                                                        = 74,
	ERigVMOpCode__JumpBackward                                                       = 75,
	ERigVMOpCode__JumpAbsoluteIf                                                     = 76,
	ERigVMOpCode__JumpForwardIf                                                      = 77,
	ERigVMOpCode__JumpBackwardIf                                                     = 78,
	ERigVMOpCode__ChangeType                                                         = 79,
	ERigVMOpCode__Exit                                                               = 80,
	ERigVMOpCode__BeginBlock                                                         = 81,
	ERigVMOpCode__EndBlock                                                           = 82,
	ERigVMOpCode__ArrayReset                                                         = 83,
	ERigVMOpCode__ArrayGetNum                                                        = 84,
	ERigVMOpCode__ArraySetNum                                                        = 85,
	ERigVMOpCode__ArrayGetAtIndex                                                    = 86,
	ERigVMOpCode__ArraySetAtIndex                                                    = 87,
	ERigVMOpCode__ArrayAdd                                                           = 88,
	ERigVMOpCode__ArrayInsert                                                        = 89,
	ERigVMOpCode__ArrayRemove                                                        = 90,
	ERigVMOpCode__ArrayFind                                                          = 91,
	ERigVMOpCode__ArrayAppend                                                        = 92,
	ERigVMOpCode__ArrayClone                                                         = 93,
	ERigVMOpCode__ArrayIterator                                                      = 94,
	ERigVMOpCode__ArrayUnion                                                         = 95,
	ERigVMOpCode__ArrayDifference                                                    = 96,
	ERigVMOpCode__ArrayIntersection                                                  = 97,
	ERigVMOpCode__ArrayReverse                                                       = 98,
	ERigVMOpCode__InvokeEntry                                                        = 99,
	ERigVMOpCode__JumpToBranch                                                       = 100,
	ERigVMOpCode__Invalid                                                            = 101,
	ERigVMOpCode__FirstArrayOpCode                                                   = 83,
	ERigVMOpCode__LastArrayOpCode                                                    = 98
};

/// Enum /Script/RigVM.ERigVMCopyType
/// Size: 0x01 (1 bytes)
enum class ERigVMCopyType : uint8_t
{
	ERigVMCopyType__Default                                                          = 0,
	ERigVMCopyType__FloatToDouble                                                    = 1,
	ERigVMCopyType__DoubleToFloat                                                    = 2
};

/// Enum /Script/RigVM.ERigVMMemoryType
/// Size: 0x01 (1 bytes)
enum class ERigVMMemoryType : uint8_t
{
	ERigVMMemoryType__Work                                                           = 0,
	ERigVMMemoryType__Literal                                                        = 1,
	ERigVMMemoryType__External                                                       = 2,
	ERigVMMemoryType__Debug                                                          = 3,
	ERigVMMemoryType__Invalid                                                        = 4
};

/// Enum /Script/RigVM.ERigVMRegisterType
/// Size: 0x01 (1 bytes)
enum class ERigVMRegisterType : uint8_t
{
	ERigVMRegisterType__Plain                                                        = 0,
	ERigVMRegisterType__String                                                       = 1,
	ERigVMRegisterType__Name                                                         = 2,
	ERigVMRegisterType__Struct                                                       = 3,
	ERigVMRegisterType__Invalid                                                      = 4
};

/// Enum /Script/RigVM.ERigVMUserWorkflowType
/// Size: 0x01 (1 bytes)
enum class ERigVMUserWorkflowType : uint8_t
{
	ERigVMUserWorkflowType__Invalid                                                  = 0,
	ERigVMUserWorkflowType__NodeContext                                              = 1,
	ERigVMUserWorkflowType__PinContext                                               = 2,
	ERigVMUserWorkflowType__OnPinDefaultChanged                                      = 4,
	ERigVMUserWorkflowType__All                                                      = 7
};

/// Enum /Script/RigVM.ERigUnitDebugPointMode
/// Size: 0x01 (1 bytes)
enum class ERigUnitDebugPointMode : uint8_t
{
	ERigUnitDebugPointMode__Point                                                    = 0,
	ERigUnitDebugPointMode__Vector                                                   = 1,
	ERigUnitDebugPointMode__Max                                                      = 2
};

/// Enum /Script/RigVM.ERigUnitDebugTransformMode
/// Size: 0x01 (1 bytes)
enum class ERigUnitDebugTransformMode : uint8_t
{
	ERigUnitDebugTransformMode__Point                                                = 0,
	ERigUnitDebugTransformMode__Axes                                                 = 1,
	ERigUnitDebugTransformMode__Box                                                  = 2,
	ERigUnitDebugTransformMode__Max                                                  = 3
};

/// Enum /Script/RigVM.ERigUnitVisualDebugPointMode
/// Size: 0x01 (1 bytes)
enum class ERigUnitVisualDebugPointMode : uint8_t
{
	ERigUnitVisualDebugPointMode__Point                                              = 0,
	ERigUnitVisualDebugPointMode__Vector                                             = 1,
	ERigUnitVisualDebugPointMode__Max                                                = 2
};

/// Enum /Script/RigVM.ERBFKernelType
/// Size: 0x01 (1 bytes)
enum class ERBFKernelType : uint8_t
{
	ERBFKernelType__Gaussian                                                         = 0,
	ERBFKernelType__Exponential                                                      = 1,
	ERBFKernelType__Linear                                                           = 2,
	ERBFKernelType__Cubic                                                            = 3,
	ERBFKernelType__Quintic                                                          = 4
};

/// Enum /Script/RigVM.ERBFQuatDistanceType
/// Size: 0x01 (1 bytes)
enum class ERBFQuatDistanceType : uint8_t
{
	ERBFQuatDistanceType__Euclidean                                                  = 0,
	ERBFQuatDistanceType__ArcLength                                                  = 1,
	ERBFQuatDistanceType__SwingAngle                                                 = 2,
	ERBFQuatDistanceType__TwistAngle                                                 = 3
};

/// Enum /Script/RigVM.ERBFVectorDistanceType
/// Size: 0x01 (1 bytes)
enum class ERBFVectorDistanceType : uint8_t
{
	ERBFVectorDistanceType__Euclidean                                                = 0,
	ERBFVectorDistanceType__Manhattan                                                = 1,
	ERBFVectorDistanceType__ArcLength                                                = 2
};

/// Enum /Script/RigVM.ERigVMAnimEasingType
/// Size: 0x01 (1 bytes)
enum class ERigVMAnimEasingType : uint8_t
{
	ERigVMAnimEasingType__Linear                                                     = 0,
	ERigVMAnimEasingType__QuadraticEaseIn                                            = 1,
	ERigVMAnimEasingType__QuadraticEaseOut                                           = 2,
	ERigVMAnimEasingType__QuadraticEaseInOut                                         = 3,
	ERigVMAnimEasingType__CubicEaseIn                                                = 4,
	ERigVMAnimEasingType__CubicEaseOut                                               = 5,
	ERigVMAnimEasingType__CubicEaseInOut                                             = 6,
	ERigVMAnimEasingType__QuarticEaseIn                                              = 7,
	ERigVMAnimEasingType__QuarticEaseOut                                             = 8,
	ERigVMAnimEasingType__QuarticEaseInOut                                           = 9,
	ERigVMAnimEasingType__QuinticEaseIn                                              = 10,
	ERigVMAnimEasingType__QuinticEaseOut                                             = 11,
	ERigVMAnimEasingType__QuinticEaseInOut                                           = 12,
	ERigVMAnimEasingType__SineEaseIn                                                 = 13,
	ERigVMAnimEasingType__SineEaseOut                                                = 14,
	ERigVMAnimEasingType__SineEaseInOut                                              = 15,
	ERigVMAnimEasingType__CircularEaseIn                                             = 16,
	ERigVMAnimEasingType__CircularEaseOut                                            = 17,
	ERigVMAnimEasingType__CircularEaseInOut                                          = 18,
	ERigVMAnimEasingType__ExponentialEaseIn                                          = 19,
	ERigVMAnimEasingType__ExponentialEaseOut                                         = 20,
	ERigVMAnimEasingType__ExponentialEaseInOut                                       = 21,
	ERigVMAnimEasingType__ElasticEaseIn                                              = 22,
	ERigVMAnimEasingType__ElasticEaseOut                                             = 23,
	ERigVMAnimEasingType__ElasticEaseInOut                                           = 24,
	ERigVMAnimEasingType__BackEaseIn                                                 = 25,
	ERigVMAnimEasingType__BackEaseOut                                                = 26,
	ERigVMAnimEasingType__BackEaseInOut                                              = 27,
	ERigVMAnimEasingType__BounceEaseIn                                               = 28,
	ERigVMAnimEasingType__BounceEaseOut                                              = 29,
	ERigVMAnimEasingType__BounceEaseInOut                                            = 30
};

/// Enum /Script/RigVM.ERigVMSimPointIntegrateType
/// Size: 0x01 (1 bytes)
enum class ERigVMSimPointIntegrateType : uint8_t
{
	ERigVMSimPointIntegrateType__Verlet                                              = 0,
	ERigVMSimPointIntegrateType__SemiExplicitEuler                                   = 1
};

/// Struct /Script/RigVM.RigVMRuntimeSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMRuntimeSettings
{ 
	int32_t                                            MaximumArraySize;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_7[0x14];                                      // 0x0004   (0x0014)  MISSED
};

/// Struct /Script/RigVM.RigVMDrawInstruction
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigVMDrawInstruction
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TEnumAsByte<ERigVMDrawSettings>                    PrimitiveType;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FVector>                                    Positions;                                                  // 0x0010   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0020   (0x0010)  
	float                                              Thickness;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	unsigned char                                      UnknownData02_7[0x30];                                      // 0x00A0   (0x0030)  MISSED
};

/// Struct /Script/RigVM.RigVMDrawContainer
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDrawContainer
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<FRigVMDrawInstruction>                      Instructions;                                               // 0x0008   (0x0010)  
};

/// Class /Script/RigVM.RigVMHost
/// Size: 0x0180 (384 bytes) (0x000028 - 0x000180) align 8 MaxSize: 0x0180
class URigVMHost : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FRigVMRuntimeSettings                              VMRuntimeSettings;                                          // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0048   (0x0010)  MISSED
	class URigVM*                                      VM;                                                         // 0x0058   (0x0008)  
	FRigVMDrawContainer                                DrawContainer;                                              // 0x0060   (0x0018)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x0078   (0x0018)  MISSED
	TArray<FName>                                      EventQueue;                                                 // 0x0090   (0x0010)  
	unsigned char                                      UnknownData03_6[0x90];                                      // 0x00A0   (0x0090)  MISSED
	TArray<class UAssetUserData*>                      AssetUserData;                                              // 0x0130   (0x0010)  
	unsigned char                                      UnknownData04_7[0x40];                                      // 0x0140   (0x0040)  MISSED


	/// Functions
	// Function /Script/RigVM.RigVMHost.SupportsEvent
	// bool SupportsEvent(FName& InEventName);                                                                                  // [0x53d6710] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.SetVariableFromString
	// bool SetVariableFromString(FName& InVariableName, FString InValue);                                                      // [0x53d6630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.SetFramesPerSecond
	// void SetFramesPerSecond(float InFramesPerSecond);                                                                        // [0x53d65b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.SetDeltaTime
	// void SetDeltaTime(float InDeltaTime);                                                                                    // [0x53d6530] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.SetAbsoluteTime
	// void SetAbsoluteTime(float InAbsoluteTime, bool InSetDeltaTimeZero);                                                     // [0x53d6450] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.SetAbsoluteAndDeltaTime
	// void SetAbsoluteAndDeltaTime(float InAbsoluteTime, float InDeltaTime);                                                   // [0x53d6380] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.RequestRunOnceEvent
	// void RequestRunOnceEvent(FName& InEventName, int32_t InEventIndex);                                                      // [0x53d61a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.RequestInit
	// void RequestInit();                                                                                                      // [0x47d7d30] Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.RemoveRunOnceEvent
	// bool RemoveRunOnceEvent(FName& InEventName);                                                                             // [0x53d5d60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.GetVM
	// class URigVM* GetVM();                                                                                                   // [0x53d5b50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/RigVM.RigVMHost.GetVariableType
	// FName GetVariableType(FName& InVariableName);                                                                            // [0x53d5c50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetVariableAsString
	// FString GetVariableAsString(FName& InVariableName);                                                                      // [0x53d5bb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetSupportedEvents
	// TArray<FName> GetSupportedEvents();                                                                                      // [0x53d5a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetScriptAccessibleVariables
	// TArray<FName> GetScriptAccessibleVariables();                                                                            // [0x53d58d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetDeltaTime
	// float GetDeltaTime();                                                                                                    // [0x147a4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetCurrentFramesPerSecond
	// float GetCurrentFramesPerSecond();                                                                                       // [0x53d5870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.GetAbsoluteTime
	// float GetAbsoluteTime();                                                                                                 // [0x3c13fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMHost.FindRigVMHosts
	// TArray<URigVMHost*> FindRigVMHosts(class UObject* Outer, class UClass* OptionalClass);                                   // [0x53d5540] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.ExecuteEvent
	// bool ExecuteEvent(FName& InEventName);                                                                                   // [0x53d5350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.Execute
	// bool Execute(FName& InEventName);                                                                                        // [0x53d52a0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVMHost.CanExecute
	// bool CanExecute();                                                                                                       // [0x4545cc0] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/RigVM.RigVMGraphFunctionIdentifier
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMGraphFunctionIdentifier
{ 
	FSoftObjectPath                                    LibraryNode;                                                // 0x0000   (0x0020)  
	FSoftObjectPath                                    HostObject;                                                 // 0x0020   (0x0020)  
};

/// Struct /Script/RigVM.RigVMGraphFunctionArgument
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FRigVMGraphFunctionArgument
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              DisplayName;                                                // 0x0008   (0x0008)  
	FName                                              CPPType;                                                    // 0x0010   (0x0008)  
	TWeakObjectPtr<class UObject*>                     CPPTypeObject;                                              // 0x0018   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0020   (0x0028)  MISSED
	bool                                               bIsArray;                                                   // 0x0048   (0x0001)  
	ERigVMPinDirection                                 Direction;                                                  // 0x0049   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x004A   (0x0006)  MISSED
	FString                                            DefaultValue;                                               // 0x0050   (0x0010)  
	bool                                               bIsConst;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	TMap<FString, FText>                               PathToTooltip;                                              // 0x0068   (0x0050)  
};

/// Struct /Script/RigVM.RigVMExternalVariable
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMExternalVariable
{ 
	unsigned char                                      UnknownData00_2[0x30];                                      // 0x0000   (0x0030)  MISSED
};

/// Struct /Script/RigVM.RigVMGraphFunctionHeader
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FRigVMGraphFunctionHeader
{ 
	FRigVMGraphFunctionIdentifier                      LibraryPointer;                                             // 0x0000   (0x0040)  
	FName                                              Name;                                                       // 0x0040   (0x0008)  
	FString                                            NodeTitle;                                                  // 0x0048   (0x0010)  
	FLinearColor                                       NodeColor;                                                  // 0x0058   (0x0010)  
	FText                                              Tooltip;                                                    // 0x0068   (0x0018)  
	FString                                            Category;                                                   // 0x0080   (0x0010)  
	FString                                            Keywords;                                                   // 0x0090   (0x0010)  
	TArray<FRigVMGraphFunctionArgument>                Arguments;                                                  // 0x00A0   (0x0010)  
	TMap<FRigVMGraphFunctionIdentifier, uint32_t>      Dependencies;                                               // 0x00B0   (0x0050)  
	TArray<FRigVMExternalVariable>                     ExternalVariables;                                          // 0x0100   (0x0010)  
};

/// Struct /Script/RigVM.RigVMByteCodeEntry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigVMByteCodeEntry
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            InstructionIndex;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/RigVM.RigVMBranchInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FRigVMBranchInfo
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	FName                                              Label;                                                      // 0x0004   (0x0008)  
	int32_t                                            InstructionIndex;                                           // 0x000C   (0x0004)  
	int32_t                                            ArgumentIndex;                                              // 0x0010   (0x0004)  
	uint16_t                                           FirstInstruction;                                           // 0x0014   (0x0002)  
	uint16_t                                           LastInstruction;                                            // 0x0016   (0x0002)  
};

/// Struct /Script/RigVM.RigVMByteCode
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FRigVMByteCode
{ 
	TArray<char>                                       ByteCode;                                                   // 0x0000   (0x0010)  
	int32_t                                            NumInstructions;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FRigVMByteCodeEntry>                        Entries;                                                    // 0x0018   (0x0010)  
	TArray<FRigVMBranchInfo>                           BranchInfos;                                                // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_7[0x58];                                      // 0x0038   (0x0058)  MISSED
};

/// Struct /Script/RigVM.RigVMFunctionCompilationPropertyDescription
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FRigVMFunctionCompilationPropertyDescription
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FString                                            CPPType;                                                    // 0x0008   (0x0010)  
	TWeakObjectPtr<class UObject*>                     CPPTypeObject;                                              // 0x0018   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0020   (0x0028)  MISSED
	FString                                            DefaultValue;                                               // 0x0048   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunctionCompilationPropertyPath
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunctionCompilationPropertyPath
{ 
	int32_t                                            PropertyIndex;                                              // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FString                                            HeadCPPType;                                                // 0x0008   (0x0010)  
	FString                                            SegmentPath;                                                // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMOperand
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 2 MaxSize: 0x0006
struct FRigVMOperand
{ 
	ERigVMMemoryType                                   MemoryType;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0001   (0x0001)  MISSED
	uint16_t                                           RegisterIndex;                                              // 0x0002   (0x0002)  
	uint16_t                                           RegisterOffset;                                             // 0x0004   (0x0002)  
};

/// Struct /Script/RigVM.RigVMFunctionCompilationData
/// Size: 0x01C8 (456 bytes) (0x000000 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FRigVMFunctionCompilationData
{ 
	FRigVMByteCode                                     ByteCode;                                                   // 0x0000   (0x0090)  
	TArray<FName>                                      FunctionNames;                                              // 0x0090   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyDescription> WorkPropertyDescriptions;                                 // 0x00A0   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyPath>      WorkPropertyPathDescriptions;                               // 0x00B0   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyDescription> LiteralPropertyDescriptions;                              // 0x00C0   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyPath>      LiteralPropertyPathDescriptions;                            // 0x00D0   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyDescription> DebugPropertyDescriptions;                                // 0x00E0   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyPath>      DebugPropertyPathDescriptions;                              // 0x00F0   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyDescription> ExternalPropertyDescriptions;                             // 0x0100   (0x0010)  
	TArray<FRigVMFunctionCompilationPropertyPath>      ExternalPropertyPathDescriptions;                           // 0x0110   (0x0010)  
	TMap<int32_t, FName>                               ExternalRegisterIndexToVariable;                            // 0x0120   (0x0050)  
	TMap<FString, FRigVMOperand>                       Operands;                                                   // 0x0170   (0x0050)  
	uint32_t                                           Hash;                                                       // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x01C4   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMGraphFunctionData
/// Size: 0x02E8 (744 bytes) (0x000000 - 0x0002E8) align 8 MaxSize: 0x02E8
struct FRigVMGraphFunctionData
{ 
	FRigVMGraphFunctionHeader                          Header;                                                     // 0x0000   (0x0110)  
	FRigVMFunctionCompilationData                      CompilationData;                                            // 0x0110   (0x01C8)  
	FString                                            SerializedCollapsedNode;                                    // 0x02D8   (0x0010)  
};

/// Struct /Script/RigVM.RigVMGraphFunctionStore
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMGraphFunctionStore
{ 
	TArray<FRigVMGraphFunctionData>                    PublicFunctions;                                            // 0x0000   (0x0010)  
	TArray<FRigVMGraphFunctionData>                    PrivateFunctions;                                           // 0x0010   (0x0010)  
};

/// Class /Script/RigVM.RigVMBlueprintGeneratedClass
/// Size: 0x03A0 (928 bytes) (0x000370 - 0x0003A0) align 16 MaxSize: 0x03A0
class URigVMBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0370   (0x0008)  MISSED
	FRigVMGraphFunctionStore                           GraphFunctionStore;                                         // 0x0378   (0x0020)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0398   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMUserWorkflow
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FRigVMUserWorkflow
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FString                                            Title;                                                      // 0x0008   (0x0010)  
	FString                                            Tooltip;                                                    // 0x0018   (0x0010)  
	ERigVMUserWorkflowType                             Type;                                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x17];                                      // 0x0029   (0x0017)  MISSED
	SDK_UNDEFINED(16,1180) /* FDelegateProperty */     __um(PerformDynamicDelegate);                               // 0x0040   (0x0010)  
	class UClass*                                      OptionsClass;                                               // 0x0050   (0x0008)  
};

/// Class /Script/RigVM.RigVMUserWorkflowOptions
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class URigVMUserWorkflowOptions : public UObject
{ 
public:
	class UObject*                                     Subject;                                                    // 0x0028   (0x0008)  
	FRigVMUserWorkflow                                 Workflow;                                                   // 0x0030   (0x0058)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0088   (0x0010)  MISSED


	/// Functions
	// Function /Script/RigVM.RigVMUserWorkflowOptions.RequiresDialog
	// bool RequiresDialog();                                                                                                   // [0x53d6290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportWarning
	// void ReportWarning(FString InMessage);                                                                                   // [0x53d6070] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportInfo
	// void ReportInfo(FString InMessage);                                                                                      // [0x53d5f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.ReportError
	// void ReportError(FString InMessage);                                                                                     // [0x53d5e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/RigVM.RigVMUserWorkflowOptions.IsValid
	// bool IsValid();                                                                                                          // [0x53d5d30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/RigVM.RigVMGraphFunctionHost
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URigVMGraphFunctionHost : public UInterface
{ 
public:
};

/// Struct /Script/RigVM.RigVMInstruction
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMInstruction
{ 
	uint64_t                                           ByteCodeIndex;                                              // 0x0000   (0x0008)  
	ERigVMOpCode                                       OpCode;                                                     // 0x0008   (0x0001)  
	char                                               OperandAlignment;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/RigVM.RigVMInstructionArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMInstructionArray
{ 
	TArray<FRigVMInstruction>                          Instructions;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/RigVM.RigVMExtendedExecuteContext
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 MaxSize: 0x0108
struct FRigVMExtendedExecuteContext
{ 
	unsigned char                                      UnknownData00_2[0x108];                                     // 0x0000   (0x0108)  MISSED
};

/// Struct /Script/RigVM.RigVMParameter
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMParameter
{ 
	ERigVMParameterType                                Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0008)  
	int32_t                                            RegisterIndex;                                              // 0x000C   (0x0004)  
	FString                                            CPPType;                                                    // 0x0010   (0x0010)  
	class UScriptStruct*                               ScriptStruct;                                               // 0x0020   (0x0008)  
	FName                                              ScriptStructPath;                                           // 0x0028   (0x0008)  
};

/// Class /Script/RigVM.RigVM
/// Size: 0x03F0 (1008 bytes) (0x000028 - 0x0003F0) align 8 MaxSize: 0x03F0
class URigVM : public UObject
{ 
public:
	class URigVMMemoryStorage*                         WorkMemoryStorageObject;                                    // 0x0028   (0x0008)  
	class URigVMMemoryStorage*                         LiteralMemoryStorageObject;                                 // 0x0030   (0x0008)  
	class URigVMMemoryStorage*                         DebugMemoryStorageObject;                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x20];                                      // 0x0040   (0x0020)  MISSED
	FRigVMByteCode                                     ByteCodeStorage;                                            // 0x0060   (0x0090)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00F0   (0x0008)  MISSED
	FRigVMInstructionArray                             Instructions;                                               // 0x00F8   (0x0010)  
	FRigVMExtendedExecuteContext                       Context;                                                    // 0x0108   (0x0108)  
	uint32_t                                           NumExecutions;                                              // 0x0210   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0214   (0x0004)  MISSED
	TArray<FName>                                      FunctionNamesStorage;                                       // 0x0218   (0x0010)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x0228   (0x0038)  MISSED
	TArray<FRigVMParameter>                            Parameters;                                                 // 0x0260   (0x0010)  
	TMap<FName, int32_t>                               ParametersNameMap;                                          // 0x0270   (0x0050)  
	unsigned char                                      UnknownData04_6[0xE8];                                      // 0x02C0   (0x00E8)  MISSED
	class URigVM*                                      DeferredVMToCopy;                                           // 0x03A8   (0x0008)  
	unsigned char                                      UnknownData05_7[0x40];                                      // 0x03B0   (0x0040)  MISSED


	/// Functions
	// Function /Script/RigVM.RigVM.SetParameterValueVector2D
	// void SetParameterValueVector2D(FName& InParameterName, FVector2D& InValue, int32_t InArrayIndex);                        // [0x5334540] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueVector
	// void SetParameterValueVector(FName& InParameterName, FVector& InValue, int32_t InArrayIndex);                            // [0x5334670] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueTransform
	// void SetParameterValueTransform(FName& InParameterName, FTransform& InValue, int32_t InArrayIndex);                      // [0x5334390] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueString
	// void SetParameterValueString(FName& InParameterName, FString InValue, int32_t InArrayIndex);                             // [0x5334260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueQuat
	// void SetParameterValueQuat(FName& InParameterName, FQuat& InValue, int32_t InArrayIndex);                                // [0x5334130] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueName
	// void SetParameterValueName(FName& InParameterName, FName& InValue, int32_t InArrayIndex);                                // [0x5333ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueInt
	// void SetParameterValueInt(FName& InParameterName, int32_t InValue, int32_t InArrayIndex);                                // [0x5333ed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueFloat
	// void SetParameterValueFloat(FName& InParameterName, float InValue, int32_t InArrayIndex);                                // [0x5333da0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueDouble
	// void SetParameterValueDouble(FName& InParameterName, double InValue, int32_t InArrayIndex);                              // [0x5333c70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.SetParameterValueBool
	// void SetParameterValueBool(FName& InParameterName, bool InValue, int32_t InArrayIndex);                                  // [0x5333b40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetStatistics
	// FRigVMStatistics GetStatistics();                                                                                        // [0x5333af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RigVM.RigVM.GetRigVMFunctionName
	// FString GetRigVMFunctionName(int32_t InFunctionIndex);                                                                   // [0x5333a10] Native|Public|Const  
	// Function /Script/RigVM.RigVM.GetParameterValueVector2D
	// FVector2D GetParameterValueVector2D(FName& InParameterName, int32_t InArrayIndex);                                       // [0x53337c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueVector
	// FVector GetParameterValueVector(FName& InParameterName, int32_t InArrayIndex);                                           // [0x53338d0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueTransform
	// FTransform GetParameterValueTransform(FName& InParameterName, int32_t InArrayIndex);                                     // [0x5333620] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueString
	// FString GetParameterValueString(FName& InParameterName, int32_t InArrayIndex);                                           // [0x5333440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueQuat
	// FQuat GetParameterValueQuat(FName& InParameterName, int32_t InArrayIndex);                                               // [0x5333310] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueName
	// FName GetParameterValueName(FName& InParameterName, int32_t InArrayIndex);                                               // [0x5333210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueInt
	// int32_t GetParameterValueInt(FName& InParameterName, int32_t InArrayIndex);                                              // [0x5333120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueFloat
	// float GetParameterValueFloat(FName& InParameterName, int32_t InArrayIndex);                                              // [0x5333030] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueDouble
	// double GetParameterValueDouble(FName& InParameterName, int32_t InArrayIndex);                                            // [0x5332f40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.GetParameterValueBool
	// bool GetParameterValueBool(FName& InParameterName, int32_t InArrayIndex);                                                // [0x5332e50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.Execute
	// bool Execute(FName& InEntryName);                                                                                        // [0x5332da0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/RigVM.RigVM.AddRigVMFunction
	// int32_t AddRigVMFunction(class UScriptStruct* InRigVMStruct, FName& InMethodName);                                       // [0x5332cc0] Native|Public|HasOutParms 
};

/// Class /Script/RigVM.RigVMMemoryStorageGeneratorClass
/// Size: 0x0260 (608 bytes) (0x000220 - 0x000260) align 16 MaxSize: 0x0260
class URigVMMemoryStorageGeneratorClass : public UClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0220   (0x0040)  MISSED
};

/// Class /Script/RigVM.RigVMMemoryStorage
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URigVMMemoryStorage : public UObject
{ 
public:
};

/// Class /Script/RigVM.RigVMNativized
/// Size: 0x0418 (1048 bytes) (0x0003F0 - 0x000418) align 8 MaxSize: 0x0418
class URigVMNativized : public URigVM
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x03F0   (0x0028)  MISSED
};

/// Struct /Script/RigVM.RigVMExecuteContext
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigVMExecuteContext
{ 
	unsigned char                                      UnknownData00_2[0xF0];                                      // 0x0000   (0x00F0)  MISSED
};

/// Struct /Script/RigVM.RigVMStruct
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMStruct
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMSimPoint
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMSimPoint
{ 
	float                                              Mass;                                                       // 0x0000   (0x0004)  
	float                                              Size;                                                       // 0x0004   (0x0004)  
	float                                              LinearDamping;                                              // 0x0008   (0x0004)  
	float                                              InheritMotion;                                              // 0x000C   (0x0004)  
	FVector                                            position;                                                   // 0x0010   (0x0018)  
	FVector                                            LinearVelocity;                                             // 0x0028   (0x0018)  
};

/// Struct /Script/RigVM.RigVMDispatchFactory
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatchFactory
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/RigVM.RigVMUnknownType
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FRigVMUnknownType
{ 
	uint32_t                                           Hash;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/RigVM.RigVMStructMutable
/// Size: 0x0100 (256 bytes) (0x000008 - 0x000100) align 16 MaxSize: 0x0100
struct FRigVMStructMutable : FRigVMStruct
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FRigVMExecuteContext                               ExecuteContext;                                             // 0x0010   (0x00F0)  
};

/// Struct /Script/RigVM.RigVMFunction_DebugBaseMutable
/// Size: 0x0100 (256 bytes) (0x000100 - 0x000100) align 16 MaxSize: 0x0100
struct FRigVMFunction_DebugBaseMutable : FRigVMStructMutable
{ 
};

/// Struct /Script/RigVM.RigVMFourPointBezier
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRigVMFourPointBezier
{ 
	FVector                                            A;                                                          // 0x0000   (0x0018)  
	FVector                                            B;                                                          // 0x0018   (0x0018)  
	FVector                                            C;                                                          // 0x0030   (0x0018)  
	FVector                                            D;                                                          // 0x0048   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_DebugBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_DebugBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_MathBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_MathVectorBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_SimBaseMutable
/// Size: 0x0100 (256 bytes) (0x000100 - 0x000100) align 16 MaxSize: 0x0100
struct FRigVMFunction_SimBaseMutable : FRigVMStructMutable
{ 
};

/// Struct /Script/RigVM.RigVMFunction_SimBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_SimBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_AnimBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_AnimBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathMutableBase
/// Size: 0x0100 (256 bytes) (0x000100 - 0x000100) align 16 MaxSize: 0x0100
struct FRigVMFunction_MathMutableBase : FRigVMStructMutable
{ 
};

/// Struct /Script/RigVM.RigVMMemoryStatistics
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigVMMemoryStatistics
{ 
	int32_t                                            RegisterCount;                                              // 0x0000   (0x0004)  
	int32_t                                            DataBytes;                                                  // 0x0004   (0x0004)  
	int32_t                                            TotalBytes;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/RigVM.RigVMByteCodeStatistics
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FRigVMByteCodeStatistics
{ 
	int32_t                                            InstructionCount;                                           // 0x0000   (0x0004)  
	int32_t                                            DataBytes;                                                  // 0x0004   (0x0004)  
};

/// Struct /Script/RigVM.RigVMStatistics
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FRigVMStatistics
{ 
	int32_t                                            BytesForCDO;                                                // 0x0000   (0x0004)  
	int32_t                                            BytesPerInstance;                                           // 0x0004   (0x0004)  
	FRigVMMemoryStatistics                             LiteralMemory;                                              // 0x0008   (0x000C)  
	FRigVMMemoryStatistics                             WorkMemory;                                                 // 0x0014   (0x000C)  
	FRigVMMemoryStatistics                             DebugMemory;                                                // 0x0020   (0x000C)  
	int32_t                                            BytesForCaching;                                            // 0x002C   (0x0004)  
	FRigVMByteCodeStatistics                           ByteCode;                                                   // 0x0030   (0x0008)  
};

/// Struct /Script/RigVM.RigVMBaseOp
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/RigVM.RigVMExecuteOp
/// Size: 0x0004 (4 bytes) (0x000001 - 0x000004) align 2 MaxSize: 0x0004
struct FRigVMExecuteOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x3];                                       // 0x0001   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMUnaryOp
/// Size: 0x0008 (8 bytes) (0x000001 - 0x000008) align 2 MaxSize: 0x0008
struct FRigVMUnaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x7];                                       // 0x0001   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMBinaryOp
/// Size: 0x000E (14 bytes) (0x000001 - 0x00000E) align 2 MaxSize: 0x000E
struct FRigVMBinaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0xD];                                       // 0x0001   (0x000D)  MISSED
};

/// Struct /Script/RigVM.RigVMTernaryOp
/// Size: 0x0014 (20 bytes) (0x000001 - 0x000014) align 2 MaxSize: 0x0014
struct FRigVMTernaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x13];                                      // 0x0001   (0x0013)  MISSED
};

/// Struct /Script/RigVM.RigVMQuaternaryOp
/// Size: 0x001A (26 bytes) (0x000001 - 0x00001A) align 2 MaxSize: 0x001A
struct FRigVMQuaternaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x19];                                      // 0x0001   (0x0019)  MISSED
};

/// Struct /Script/RigVM.RigVMQuinaryOp
/// Size: 0x0020 (32 bytes) (0x000001 - 0x000020) align 2 MaxSize: 0x0020
struct FRigVMQuinaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x1F];                                      // 0x0001   (0x001F)  MISSED
};

/// Struct /Script/RigVM.RigVMSenaryOp
/// Size: 0x0026 (38 bytes) (0x000001 - 0x000026) align 2 MaxSize: 0x0026
struct FRigVMSenaryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x25];                                      // 0x0001   (0x0025)  MISSED
};

/// Struct /Script/RigVM.RigVMCopyOp
/// Size: 0x0012 (18 bytes) (0x000001 - 0x000012) align 2 MaxSize: 0x0012
struct FRigVMCopyOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x11];                                      // 0x0001   (0x0011)  MISSED
};

/// Struct /Script/RigVM.RigVMComparisonOp
/// Size: 0x0014 (20 bytes) (0x000001 - 0x000014) align 2 MaxSize: 0x0014
struct FRigVMComparisonOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x13];                                      // 0x0001   (0x0013)  MISSED
};

/// Struct /Script/RigVM.RigVMJumpOp
/// Size: 0x0008 (8 bytes) (0x000001 - 0x000008) align 4 MaxSize: 0x0008
struct FRigVMJumpOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0x7];                                       // 0x0001   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMJumpIfOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 4 MaxSize: 0x0010
struct FRigVMJumpIfOp : FRigVMUnaryOp
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMChangeTypeOp
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 2 MaxSize: 0x0008
struct FRigVMChangeTypeOp : FRigVMUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMInvokeEntryOp
/// Size: 0x000C (12 bytes) (0x000001 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigVMInvokeEntryOp : FRigVMBaseOp
{ 
	unsigned char                                      UnknownData00_1[0xB];                                       // 0x0001   (0x000B)  MISSED
};

/// Struct /Script/RigVM.RigVMJumpToBranchOp
/// Size: 0x000C (12 bytes) (0x000008 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigVMJumpToBranchOp : FRigVMUnaryOp
{ 
	unsigned char                                      UnknownData00_1[0x4];                                       // 0x0008   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMBreakpoint
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMBreakpoint
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/RigVM.RigVMDebugInfo
/// Size: 0x00F8 (248 bytes) (0x000000 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FRigVMDebugInfo
{ 
	unsigned char                                      UnknownData00_2[0xF8];                                      // 0x0000   (0x00F8)  MISSED
};

/// Struct /Script/RigVM.RigVMDrawInterface
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDrawInterface : FRigVMDrawContainer
{ 
};

/// Struct /Script/RigVM.RigVMSlice
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigVMSlice
{ 
	unsigned char                                      UnknownData00_2[0xC];                                       // 0x0000   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMRegister
/// Size: 0x0024 (36 bytes) (0x000000 - 0x000024) align 4 MaxSize: 0x0024
struct FRigVMRegister
{ 
	ERigVMRegisterType                                 Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           ByteIndex;                                                  // 0x0004   (0x0004)  
	uint16_t                                           ElementSize;                                                // 0x0008   (0x0002)  
	uint16_t                                           ElementCount;                                               // 0x000A   (0x0002)  
	uint16_t                                           SliceCount;                                                 // 0x000C   (0x0002)  
	char                                               AlignmentBytes;                                             // 0x000E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x000F   (0x0001)  MISSED
	uint16_t                                           TrailingBytes;                                              // 0x0010   (0x0002)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0012   (0x0002)  MISSED
	FName                                              Name;                                                       // 0x0014   (0x0008)  
	int32_t                                            ScriptStructIndex;                                          // 0x001C   (0x0004)  
	bool                                               bIsArray;                                                   // 0x0020   (0x0001)  
	bool                                               bIsDynamic;                                                 // 0x0021   (0x0001)  
	unsigned char                                      UnknownData03_7[0x2];                                       // 0x0022   (0x0002)  MISSED
};

/// Struct /Script/RigVM.RigVMRegisterOffset
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRigVMRegisterOffset
{ 
	TArray<int32_t>                                    Segments;                                                   // 0x0000   (0x0010)  
	ERigVMRegisterType                                 Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              CPPType;                                                    // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UScriptStruct*                               ScriptStruct;                                               // 0x0020   (0x0008)  
	class UScriptStruct*                               ParentScriptStruct;                                         // 0x0028   (0x0008)  
	int32_t                                            ArrayIndex;                                                 // 0x0030   (0x0004)  
	uint16_t                                           ElementSize;                                                // 0x0034   (0x0002)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0036   (0x0002)  MISSED
	FString                                            CachedSegmentPath;                                          // 0x0038   (0x0010)  
};

/// Struct /Script/RigVM.RigVMMemoryContainer
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRigVMMemoryContainer
{ 
	bool                                               bUseNameMap;                                                // 0x0000   (0x0001)  
	ERigVMMemoryType                                   MemoryType;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	TArray<FRigVMRegister>                             Registers;                                                  // 0x0008   (0x0010)  
	TArray<FRigVMRegisterOffset>                       RegisterOffsets;                                            // 0x0018   (0x0010)  
	TArray<char>                                       Data;                                                       // 0x0028   (0x0010)  
	TArray<class UScriptStruct*>                       ScriptStructs;                                              // 0x0038   (0x0010)  
	TMap<FName, int32_t>                               NameMap;                                                    // 0x0048   (0x0050)  
	bool                                               bEncounteredErrorDuringLoad;                                // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMTemplateArgumentType
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMTemplateArgumentType
{ 
	FName                                              CPPType;                                                    // 0x0000   (0x0008)  
	class UObject*                                     CPPTypeObject;                                              // 0x0008   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_AnimEasingType
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_AnimEasingType : FRigVMFunction_AnimBase
{ 
	ERigVMAnimEasingType                               Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AnimEasing
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_AnimEasing : FRigVMFunction_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	ERigVMAnimEasingType                               Type;                                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	float                                              SourceMinimum;                                              // 0x0010   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0014   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0018   (0x0004)  
	float                                              TargetMaximum;                                              // 0x001C   (0x0004)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AnimEvalRichCurve
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FRigVMFunction_AnimEvalRichCurve : FRigVMFunction_AnimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0010   (0x0088)  
	float                                              SourceMinimum;                                              // 0x0098   (0x0004)  
	float                                              SourceMaximum;                                              // 0x009C   (0x0004)  
	float                                              TargetMinimum;                                              // 0x00A0   (0x0004)  
	float                                              TargetMaximum;                                              // 0x00A4   (0x0004)  
	float                                              Result;                                                     // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AnimRichCurve
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FRigVMFunction_AnimRichCurve : FRigVMFunction_AnimBase
{ 
	FRuntimeFloatCurve                                 Curve;                                                      // 0x0008   (0x0088)  
};

/// Struct /Script/RigVM.RigVMFunction_GetDeltaTime
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_GetDeltaTime : FRigVMFunction_AnimBase
{ 
	float                                              Result;                                                     // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_GetWorldTime
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_GetWorldTime : FRigVMFunction_AnimBase
{ 
	float                                              Year;                                                       // 0x0008   (0x0004)  
	float                                              Month;                                                      // 0x000C   (0x0004)  
	float                                              Day;                                                        // 0x0010   (0x0004)  
	float                                              WeekDay;                                                    // 0x0014   (0x0004)  
	float                                              Hours;                                                      // 0x0018   (0x0004)  
	float                                              Minutes;                                                    // 0x001C   (0x0004)  
	float                                              Seconds;                                                    // 0x0020   (0x0004)  
	float                                              OverallSeconds;                                             // 0x0024   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_FramesToSeconds
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_FramesToSeconds : FRigVMFunction_AnimBase
{ 
	float                                              Frames;                                                     // 0x0008   (0x0004)  
	float                                              Seconds;                                                    // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_SecondsToFrames
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_SecondsToFrames : FRigVMFunction_AnimBase
{ 
	float                                              Seconds;                                                    // 0x0008   (0x0004)  
	float                                              Frames;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_DebugLine
/// Size: 0x01C0 (448 bytes) (0x000100 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FRigVMFunction_DebugLine : FRigVMFunction_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x0100   (0x0018)  
	FVector                                            B;                                                          // 0x0118   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0130   (0x0010)  
	float                                              Thickness;                                                  // 0x0140   (0x0004)  
	FName                                              Space;                                                      // 0x0144   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0150   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x01B1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugLineNoSpace
/// Size: 0x01C0 (448 bytes) (0x000100 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FRigVMFunction_DebugLineNoSpace : FRigVMFunction_DebugBaseMutable
{ 
	FVector                                            A;                                                          // 0x0100   (0x0018)  
	FVector                                            B;                                                          // 0x0118   (0x0018)  
	FLinearColor                                       Color;                                                      // 0x0130   (0x0010)  
	float                                              Thickness;                                                  // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0144   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0150   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x01B1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugLineStrip
/// Size: 0x01A0 (416 bytes) (0x000100 - 0x0001A0) align 16 MaxSize: 0x01A0
struct FRigVMFunction_DebugLineStrip : FRigVMFunction_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0100   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0110   (0x0010)  
	float                                              Thickness;                                                  // 0x0120   (0x0004)  
	FName                                              Space;                                                      // 0x0124   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x012C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0130   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0190   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0191   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugLineStripNoSpace
/// Size: 0x01A0 (416 bytes) (0x000100 - 0x0001A0) align 16 MaxSize: 0x01A0
struct FRigVMFunction_DebugLineStripNoSpace : FRigVMFunction_DebugBaseMutable
{ 
	TArray<FVector>                                    Points;                                                     // 0x0100   (0x0010)  
	FLinearColor                                       Color;                                                      // 0x0110   (0x0010)  
	float                                              Thickness;                                                  // 0x0120   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0124   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0130   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0190   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0191   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugPoint
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigVMFunction_DebugPoint : FRigVMFunction_DebugBase
{ 
	FVector                                            Vector;                                                     // 0x0008   (0x0018)  
	ERigUnitDebugPointMode                             Mode;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0024   (0x0010)  
	float                                              Scale;                                                      // 0x0034   (0x0004)  
	float                                              Thickness;                                                  // 0x0038   (0x0004)  
	FName                                              Space;                                                      // 0x003C   (0x0008)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0044   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0050   (0x0060)  
	bool                                               bEnabled;                                                   // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x00B1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugPointMutable
/// Size: 0x01B0 (432 bytes) (0x000100 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigVMFunction_DebugPointMutable : FRigVMFunction_DebugBaseMutable
{ 
	FVector                                            Vector;                                                     // 0x0100   (0x0018)  
	ERigUnitDebugPointMode                             Mode;                                                       // 0x0118   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0119   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x011C   (0x0010)  
	float                                              Scale;                                                      // 0x012C   (0x0004)  
	float                                              Thickness;                                                  // 0x0130   (0x0004)  
	FName                                              Space;                                                      // 0x0134   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0140   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x01A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugRectangle
/// Size: 0x01F0 (496 bytes) (0x000100 - 0x0001F0) align 16 MaxSize: 0x01F0
struct FRigVMFunction_DebugRectangle : FRigVMFunction_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0100   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0160   (0x0010)  
	float                                              Scale;                                                      // 0x0170   (0x0004)  
	float                                              Thickness;                                                  // 0x0174   (0x0004)  
	FName                                              Space;                                                      // 0x0178   (0x0008)  
	FTransform                                         WorldOffset;                                                // 0x0180   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x01E1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugRectangleNoSpace
/// Size: 0x01F0 (496 bytes) (0x000100 - 0x0001F0) align 16 MaxSize: 0x01F0
struct FRigVMFunction_DebugRectangleNoSpace : FRigVMFunction_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0100   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0160   (0x0010)  
	float                                              Scale;                                                      // 0x0170   (0x0004)  
	float                                              Thickness;                                                  // 0x0174   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0178   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0180   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x01E1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugArc
/// Size: 0x0200 (512 bytes) (0x000100 - 0x000200) align 16 MaxSize: 0x0200
struct FRigVMFunction_DebugArc : FRigVMFunction_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0100   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0160   (0x0010)  
	float                                              Radius;                                                     // 0x0170   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x0174   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x0178   (0x0004)  
	float                                              Thickness;                                                  // 0x017C   (0x0004)  
	int32_t                                            Detail;                                                     // 0x0180   (0x0004)  
	FName                                              Space;                                                      // 0x0184   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x018C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0190   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x01F1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugArcNoSpace
/// Size: 0x0200 (512 bytes) (0x000100 - 0x000200) align 16 MaxSize: 0x0200
struct FRigVMFunction_DebugArcNoSpace : FRigVMFunction_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0100   (0x0060)  
	FLinearColor                                       Color;                                                      // 0x0160   (0x0010)  
	float                                              Radius;                                                     // 0x0170   (0x0004)  
	float                                              MinimumDegrees;                                             // 0x0174   (0x0004)  
	float                                              MaximumDegrees;                                             // 0x0178   (0x0004)  
	float                                              Thickness;                                                  // 0x017C   (0x0004)  
	int32_t                                            Detail;                                                     // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0184   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0190   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x01F1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransform
/// Size: 0x0110 (272 bytes) (0x000008 - 0x000110) align 16 MaxSize: 0x0110
struct FRigVMFunction_DebugTransform : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0074   (0x0010)  
	float                                              Thickness;                                                  // 0x0084   (0x0004)  
	float                                              Scale;                                                      // 0x0088   (0x0004)  
	FName                                              Space;                                                      // 0x008C   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x0094   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x00A0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0100   (0x0001)  
	unsigned char                                      UnknownData03_7[0xF];                                       // 0x0101   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformMutable
/// Size: 0x0200 (512 bytes) (0x000100 - 0x000200) align 16 MaxSize: 0x0200
struct FRigVMFunction_DebugTransformMutable : FRigVMFunction_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0100   (0x0060)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0161   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0164   (0x0010)  
	float                                              Thickness;                                                  // 0x0174   (0x0004)  
	float                                              Scale;                                                      // 0x0178   (0x0004)  
	FName                                              Space;                                                      // 0x017C   (0x0008)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0184   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0190   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x01F1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformMutableNoSpace
/// Size: 0x01F0 (496 bytes) (0x000100 - 0x0001F0) align 16 MaxSize: 0x01F0
struct FRigVMFunction_DebugTransformMutableNoSpace : FRigVMFunction_DebugBaseMutable
{ 
	FTransform                                         Transform;                                                  // 0x0100   (0x0060)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0160   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0161   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0164   (0x0010)  
	float                                              Thickness;                                                  // 0x0174   (0x0004)  
	float                                              Scale;                                                      // 0x0178   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x017C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0180   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01E0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x01E1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformArrayMutable_WorkData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_DebugTransformArrayMutable_WorkData
{ 
	TArray<FTransform>                                 DrawTransforms;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformArrayMutable
/// Size: 0x01C0 (448 bytes) (0x000100 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FRigVMFunction_DebugTransformArrayMutable : FRigVMFunction_DebugBaseMutable
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0100   (0x0010)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0111   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0114   (0x0010)  
	float                                              Thickness;                                                  // 0x0124   (0x0004)  
	float                                              Scale;                                                      // 0x0128   (0x0004)  
	FName                                              Space;                                                      // 0x012C   (0x0008)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0134   (0x000C)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0140   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x01A1   (0x0007)  MISSED
	FRigVMFunction_DebugTransformArrayMutable_WorkData WorkData;                                                   // 0x01A8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x01B8   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DebugTransformArrayMutableNoSpace
/// Size: 0x01B0 (432 bytes) (0x000100 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigVMFunction_DebugTransformArrayMutableNoSpace : FRigVMFunction_DebugBaseMutable
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0100   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0110   (0x0010)  
	ERigUnitDebugTransformMode                         Mode;                                                       // 0x0120   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0121   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0124   (0x0010)  
	float                                              Thickness;                                                  // 0x0134   (0x0004)  
	float                                              Scale;                                                      // 0x0138   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0140   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x01A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugVector
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRigVMFunction_VisualDebugVector : FRigVMFunction_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	ERigUnitVisualDebugPointMode                       Mode;                                                       // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0022   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0024   (0x0010)  
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x003C   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugVectorNoSpace
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_VisualDebugVectorNoSpace : FRigVMFunction_DebugBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	bool                                               bEnabled;                                                   // 0x0020   (0x0001)  
	ERigUnitVisualDebugPointMode                       Mode;                                                       // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0022   (0x0002)  MISSED
	FLinearColor                                       Color;                                                      // 0x0024   (0x0010)  
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugQuat
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigVMFunction_VisualDebugQuat : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x003C   (0x0008)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugQuatNoSpace
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigVMFunction_VisualDebugQuatNoSpace : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0034   (0x0004)  
	float                                              Scale;                                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugTransform
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 16 MaxSize: 0x0090
struct FRigVMFunction_VisualDebugTransform : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0074   (0x0004)  
	float                                              Scale;                                                      // 0x0078   (0x0004)  
	FName                                              BoneSpace;                                                  // 0x007C   (0x0008)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0084   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_VisualDebugTransformNoSpace
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 16 MaxSize: 0x0080
struct FRigVMFunction_VisualDebugTransformNoSpace : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0071   (0x0003)  MISSED
	float                                              Thickness;                                                  // 0x0074   (0x0004)  
	float                                              Scale;                                                      // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_ForLoopCount
/// Size: 0x0210 (528 bytes) (0x000100 - 0x000210) align 16 MaxSize: 0x0210
struct FRigVMFunction_ForLoopCount : FRigVMStructMutable
{ 
	FName                                              BlockToRun;                                                 // 0x0100   (0x0008)  
	int32_t                                            Count;                                                      // 0x0108   (0x0004)  
	int32_t                                            Index;                                                      // 0x010C   (0x0004)  
	float                                              Ratio;                                                      // 0x0110   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0114   (0x000C)  MISSED
	FRigVMExecuteContext                               Completed;                                                  // 0x0120   (0x00F0)  
};

/// Struct /Script/RigVM.RigVMFunction_UserDefinedEvent
/// Size: 0x0110 (272 bytes) (0x000008 - 0x000110) align 16 MaxSize: 0x0110
struct FRigVMFunction_UserDefinedEvent : FRigVMStruct
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FRigVMExecuteContext                               ExecuteContext;                                             // 0x0010   (0x00F0)  
	FName                                              EventName;                                                  // 0x0100   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_MathBoolBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolConstant
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolConstant : FRigVMFunction_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolUnaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolUnaryOp : FRigVMFunction_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	bool                                               Result;                                                     // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x000A   (0x0006)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolBinaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolBinaryOp : FRigVMFunction_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolBinaryAggregateOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolBinaryAggregateOp : FRigVMFunction_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolMake
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolMake : FRigVMFunction_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolConstTrue
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolConstTrue : FRigVMFunction_MathBoolConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolConstFalse
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolConstFalse : FRigVMFunction_MathBoolConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNot
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolNot : FRigVMFunction_MathBoolUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolAnd
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolAnd : FRigVMFunction_MathBoolBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNand
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolNand : FRigVMFunction_MathBoolBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNand2
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolNand2 : FRigVMFunction_MathBoolBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolOr
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolOr : FRigVMFunction_MathBoolBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolEquals
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolEquals : FRigVMFunction_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolNotEquals
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolNotEquals : FRigVMFunction_MathBoolBase
{ 
	bool                                               A;                                                          // 0x0008   (0x0001)  
	bool                                               B;                                                          // 0x0009   (0x0001)  
	bool                                               Result;                                                     // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolToggled
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolToggled : FRigVMFunction_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	bool                                               Toggled;                                                    // 0x0009   (0x0001)  
	bool                                               Initialized;                                                // 0x000A   (0x0001)  
	bool                                               LastValue;                                                  // 0x000B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolFlipFlop
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathBoolFlipFlop : FRigVMFunction_MathBoolBase
{ 
	bool                                               StartValue;                                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              Duration;                                                   // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	bool                                               LastValue;                                                  // 0x0011   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0012   (0x0002)  MISSED
	float                                              TimeLeft;                                                   // 0x0014   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolOnce
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathBoolOnce : FRigVMFunction_MathBoolBase
{ 
	float                                              Duration;                                                   // 0x0008   (0x0004)  
	bool                                               Result;                                                     // 0x000C   (0x0001)  
	bool                                               LastValue;                                                  // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	float                                              TimeLeft;                                                   // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolToFloat
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolToFloat : FRigVMFunction_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathBoolToInteger
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathBoolToInteger : FRigVMFunction_MathBoolBase
{ 
	bool                                               Value;                                                      // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathColorBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_MathColorBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathColorBinaryOp
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathColorBinaryOp : FRigVMFunction_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	FLinearColor                                       Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathColorBinaryAggregateOp
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathColorBinaryAggregateOp : FRigVMFunction_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	FLinearColor                                       Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathColorMake
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_MathColorMake : FRigVMFunction_MathColorBase
{ 
	float                                              R;                                                          // 0x0008   (0x0004)  
	float                                              G;                                                          // 0x000C   (0x0004)  
	float                                              B;                                                          // 0x0010   (0x0004)  
	float                                              A;                                                          // 0x0014   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathColorFromFloat
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathColorFromFloat : FRigVMFunction_MathColorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x000C   (0x0010)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathColorFromDouble
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathColorFromDouble : FRigVMFunction_MathColorBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	FLinearColor                                       Result;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathColorAdd
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathColorAdd : FRigVMFunction_MathColorBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathColorSub
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathColorSub : FRigVMFunction_MathColorBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathColorMul
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathColorMul : FRigVMFunction_MathColorBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathColorLerp
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathColorLerp : FRigVMFunction_MathColorBase
{ 
	FLinearColor                                       A;                                                          // 0x0008   (0x0010)  
	FLinearColor                                       B;                                                          // 0x0018   (0x0010)  
	float                                              T;                                                          // 0x0028   (0x0004)  
	FLinearColor                                       Result;                                                     // 0x002C   (0x0010)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_MathDoubleBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstant
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathDoubleConstant : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleUnaryOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleUnaryOp : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Result;                                                     // 0x0010   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleBinaryOp
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleBinaryOp : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             Result;                                                     // 0x0018   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleBinaryAggregateOp
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleBinaryAggregateOp : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             Result;                                                     // 0x0018   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMake
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathDoubleMake : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstPi
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathDoubleConstPi : FRigVMFunction_MathDoubleConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstHalfPi
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathDoubleConstHalfPi : FRigVMFunction_MathDoubleConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstTwoPi
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathDoubleConstTwoPi : FRigVMFunction_MathDoubleConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleConstE
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathDoubleConstE : FRigVMFunction_MathDoubleConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAdd
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleAdd : FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSub
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleSub : FRigVMFunction_MathDoubleBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMul
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleMul : FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleDiv
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleDiv : FRigVMFunction_MathDoubleBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMod
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleMod : FRigVMFunction_MathDoubleBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMin
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleMin : FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleMax
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleMax : FRigVMFunction_MathDoubleBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoublePow
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoublePow : FRigVMFunction_MathDoubleBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSqrt
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleSqrt : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleNegate
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleNegate : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAbs
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleAbs : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleFloor
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleFloor : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Result;                                                     // 0x0010   (0x0008)  
	int32_t                                            int0;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleCeil
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleCeil : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Result;                                                     // 0x0010   (0x0008)  
	int32_t                                            int0;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleRound
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleRound : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Result;                                                     // 0x0010   (0x0008)  
	int32_t                                            int0;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleToInt
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleToInt : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	int32_t                                            Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSign
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleSign : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleClamp
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_MathDoubleClamp : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Minimum;                                                    // 0x0010   (0x0008)  
	double                                             Maximum;                                                    // 0x0018   (0x0008)  
	double                                             Result;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLerp
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_MathDoubleLerp : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             T;                                                          // 0x0018   (0x0008)  
	double                                             Result;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleRemap
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathDoubleRemap : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             SourceMinimum;                                              // 0x0010   (0x0008)  
	double                                             SourceMaximum;                                              // 0x0018   (0x0008)  
	double                                             TargetMinimum;                                              // 0x0020   (0x0008)  
	double                                             TargetMaximum;                                              // 0x0028   (0x0008)  
	bool                                               bClamp;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	double                                             Result;                                                     // 0x0038   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleEquals
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleEquals : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleNotEquals
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleNotEquals : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleGreater
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleGreater : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLess
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleLess : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleGreaterEqual
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleGreaterEqual : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLessEqual
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleLessEqual : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleIsNearlyZero
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleIsNearlyZero : FRigVMFunction_MathDoubleBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Tolerance;                                                  // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleIsNearlyEqual
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_MathDoubleIsNearlyEqual : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             Tolerance;                                                  // 0x0018   (0x0008)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleDeg
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleDeg : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleRad
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleRad : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleSin
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleSin : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleCos
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleCos : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleTan
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleTan : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAsin
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleAsin : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAcos
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleAcos : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleAtan
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleAtan : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleLawOfCosine
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathDoubleLawOfCosine : FRigVMFunction_MathDoubleBase
{ 
	double                                             A;                                                          // 0x0008   (0x0008)  
	double                                             B;                                                          // 0x0010   (0x0008)  
	double                                             C;                                                          // 0x0018   (0x0008)  
	double                                             AlphaAngle;                                                 // 0x0020   (0x0008)  
	double                                             BetaAngle;                                                  // 0x0028   (0x0008)  
	double                                             GammaAngle;                                                 // 0x0030   (0x0008)  
	bool                                               bValid;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleExponential
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathDoubleExponential : FRigVMFunction_MathDoubleUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleArraySum
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleArraySum : FRigVMFunction_MathDoubleBase
{ 
	TArray<double>                                     Array;                                                      // 0x0008   (0x0010)  
	double                                             Sum;                                                        // 0x0018   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathDoubleArrayAverage
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathDoubleArrayAverage : FRigVMFunction_MathDoubleBase
{ 
	TArray<double>                                     Array;                                                      // 0x0008   (0x0010)  
	double                                             Average;                                                    // 0x0018   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_MathFloatBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstant
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatConstant : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatUnaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatUnaryOp : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatBinaryOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatBinaryOp : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatBinaryAggregateOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatBinaryAggregateOp : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMake
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatMake : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstPi
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatConstPi : FRigVMFunction_MathFloatConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstHalfPi
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatConstHalfPi : FRigVMFunction_MathFloatConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstTwoPi
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatConstTwoPi : FRigVMFunction_MathFloatConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatConstE
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatConstE : FRigVMFunction_MathFloatConstant
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAdd
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatAdd : FRigVMFunction_MathFloatBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSub
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatSub : FRigVMFunction_MathFloatBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMul
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatMul : FRigVMFunction_MathFloatBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatDiv
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatDiv : FRigVMFunction_MathFloatBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMod
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatMod : FRigVMFunction_MathFloatBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMin
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatMin : FRigVMFunction_MathFloatBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatMax
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatMax : FRigVMFunction_MathFloatBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatPow
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatPow : FRigVMFunction_MathFloatBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSqrt
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatSqrt : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatNegate
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatNegate : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAbs
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatAbs : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatFloor
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatFloor : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            int0;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatCeil
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatCeil : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            int0;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatRound
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatRound : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
	int32_t                                            int0;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatToInt
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatToInt : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSign
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatSign : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatClamp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatClamp : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLerp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatLerp : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              T;                                                          // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatRemap
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_MathFloatRemap : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SourceMinimum;                                              // 0x000C   (0x0004)  
	float                                              SourceMaximum;                                              // 0x0010   (0x0004)  
	float                                              TargetMinimum;                                              // 0x0014   (0x0004)  
	float                                              TargetMaximum;                                              // 0x0018   (0x0004)  
	bool                                               bClamp;                                                     // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatEquals
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatEquals : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatNotEquals
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatNotEquals : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatGreater
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatGreater : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLess
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatLess : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatGreaterEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatGreaterEqual : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLessEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatLessEqual : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatIsNearlyZero
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatIsNearlyZero : FRigVMFunction_MathFloatBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Tolerance;                                                  // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatIsNearlyEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatIsNearlyEqual : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              Tolerance;                                                  // 0x0010   (0x0004)  
	bool                                               Result;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSelectBool
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathFloatSelectBool : FRigVMFunction_MathFloatBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              IfTrue;                                                     // 0x000C   (0x0004)  
	float                                              IfFalse;                                                    // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatDeg
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatDeg : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatRad
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatRad : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatSin
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatSin : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatCos
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatCos : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatTan
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatTan : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAsin
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatAsin : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAcos
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatAcos : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatAtan
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatAtan : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatLawOfCosine
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_MathFloatLawOfCosine : FRigVMFunction_MathFloatBase
{ 
	float                                              A;                                                          // 0x0008   (0x0004)  
	float                                              B;                                                          // 0x000C   (0x0004)  
	float                                              C;                                                          // 0x0010   (0x0004)  
	float                                              AlphaAngle;                                                 // 0x0014   (0x0004)  
	float                                              BetaAngle;                                                  // 0x0018   (0x0004)  
	float                                              GammaAngle;                                                 // 0x001C   (0x0004)  
	bool                                               bValid;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatExponential
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathFloatExponential : FRigVMFunction_MathFloatUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatArraySum
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathFloatArraySum : FRigVMFunction_MathFloatBase
{ 
	TArray<float>                                      Array;                                                      // 0x0008   (0x0010)  
	float                                              Sum;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathFloatArrayAverage
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathFloatArrayAverage : FRigVMFunction_MathFloatBase
{ 
	TArray<float>                                      Array;                                                      // 0x0008   (0x0010)  
	float                                              Average;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_MathIntBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntUnaryOp
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathIntUnaryOp : FRigVMFunction_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathIntBinaryOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntBinaryOp : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	int32_t                                            Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntBinaryAggregateOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntBinaryAggregateOp : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	int32_t                                            Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMake
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathIntMake : FRigVMFunction_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntAdd
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntAdd : FRigVMFunction_MathIntBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntSub
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntSub : FRigVMFunction_MathIntBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMul
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntMul : FRigVMFunction_MathIntBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntDiv
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntDiv : FRigVMFunction_MathIntBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMod
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntMod : FRigVMFunction_MathIntBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMin
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntMin : FRigVMFunction_MathIntBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntMax
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntMax : FRigVMFunction_MathIntBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntPow
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntPow : FRigVMFunction_MathIntBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntNegate
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathIntNegate : FRigVMFunction_MathIntUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntAbs
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathIntAbs : FRigVMFunction_MathIntUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToFloat
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathIntToFloat : FRigVMFunction_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	float                                              Result;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathIntToDouble
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntToDouble : FRigVMFunction_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	double                                             Result;                                                     // 0x0010   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_MathIntSign
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathIntSign : FRigVMFunction_MathIntUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathIntClamp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntClamp : FRigVMFunction_MathIntBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Minimum;                                                    // 0x000C   (0x0004)  
	int32_t                                            Maximum;                                                    // 0x0010   (0x0004)  
	int32_t                                            Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_MathIntEquals
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntEquals : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntNotEquals
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntNotEquals : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntGreater
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntGreater : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntLess
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntLess : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntGreaterEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntGreaterEqual : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntLessEqual
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_MathIntLessEqual : FRigVMFunction_MathIntBase
{ 
	int32_t                                            A;                                                          // 0x0008   (0x0004)  
	int32_t                                            B;                                                          // 0x000C   (0x0004)  
	bool                                               Result;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntArraySum
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathIntArraySum : FRigVMFunction_MathIntBase
{ 
	TArray<int32_t>                                    Array;                                                      // 0x0008   (0x0010)  
	int32_t                                            Sum;                                                        // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathIntArrayAverage
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_MathIntArrayAverage : FRigVMFunction_MathIntBase
{ 
	TArray<int32_t>                                    Array;                                                      // 0x0008   (0x0010)  
	int32_t                                            Average;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_MathMatrixBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixUnaryOp
/// Size: 0x0110 (272 bytes) (0x000008 - 0x000110) align 16 MaxSize: 0x0110
struct FRigVMFunction_MathMatrixUnaryOp : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            Value;                                                      // 0x0010   (0x0080)  
	FMatrix                                            Result;                                                     // 0x0090   (0x0080)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixBinaryOp
/// Size: 0x0190 (400 bytes) (0x000008 - 0x000190) align 16 MaxSize: 0x0190
struct FRigVMFunction_MathMatrixBinaryOp : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            A;                                                          // 0x0010   (0x0080)  
	FMatrix                                            B;                                                          // 0x0090   (0x0080)  
	FMatrix                                            Result;                                                     // 0x0110   (0x0080)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixBinaryAggregateOp
/// Size: 0x0190 (400 bytes) (0x000008 - 0x000190) align 16 MaxSize: 0x0190
struct FRigVMFunction_MathMatrixBinaryAggregateOp : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            A;                                                          // 0x0010   (0x0080)  
	FMatrix                                            B;                                                          // 0x0090   (0x0080)  
	FMatrix                                            Result;                                                     // 0x0110   (0x0080)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixToTransform
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigVMFunction_MathMatrixToTransform : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            Value;                                                      // 0x0010   (0x0080)  
	FTransform                                         Result;                                                     // 0x0090   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixFromTransform
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigVMFunction_MathMatrixFromTransform : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FMatrix                                            Result;                                                     // 0x0070   (0x0080)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixFromTransformV2
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigVMFunction_MathMatrixFromTransformV2 : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FMatrix                                            Result;                                                     // 0x0070   (0x0080)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixToVectors
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigVMFunction_MathMatrixToVectors : FRigVMFunction_MathMatrixBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FMatrix                                            Value;                                                      // 0x0010   (0x0080)  
	FVector                                            Origin;                                                     // 0x0090   (0x0018)  
	FVector                                            X;                                                          // 0x00A8   (0x0018)  
	FVector                                            Y;                                                          // 0x00C0   (0x0018)  
	FVector                                            Z;                                                          // 0x00D8   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixFromVectors
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigVMFunction_MathMatrixFromVectors : FRigVMFunction_MathMatrixBase
{ 
	FVector                                            Origin;                                                     // 0x0008   (0x0018)  
	FVector                                            X;                                                          // 0x0020   (0x0018)  
	FVector                                            Y;                                                          // 0x0038   (0x0018)  
	FVector                                            Z;                                                          // 0x0050   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0068   (0x0008)  MISSED
	FMatrix                                            Result;                                                     // 0x0070   (0x0080)  
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixMul
/// Size: 0x0190 (400 bytes) (0x000190 - 0x000190) align 16 MaxSize: 0x0190
struct FRigVMFunction_MathMatrixMul : FRigVMFunction_MathMatrixBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathMatrixInverse
/// Size: 0x0110 (272 bytes) (0x000110 - 0x000110) align 16 MaxSize: 0x0110
struct FRigVMFunction_MathMatrixInverse : FRigVMFunction_MathMatrixUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_MathQuaternionBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionUnaryOp
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigVMFunction_MathQuaternionUnaryOp : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionBinaryOp
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigVMFunction_MathQuaternionBinaryOp : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	FQuat                                              Result;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionBinaryAggregateOp
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigVMFunction_MathQuaternionBinaryAggregateOp : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	FQuat                                              Result;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMake
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigVMFunction_MathQuaternionMake : FRigVMFunction_MathQuaternionBase
{ 
	float                                              X;                                                          // 0x0008   (0x0004)  
	float                                              Y;                                                          // 0x000C   (0x0004)  
	float                                              Z;                                                          // 0x0010   (0x0004)  
	float                                              W;                                                          // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromAxisAndAngle
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigVMFunction_MathQuaternionFromAxisAndAngle : FRigVMFunction_MathQuaternionBase
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	float                                              Angle;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0024   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromEuler
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigVMFunction_MathQuaternionFromEuler : FRigVMFunction_MathQuaternionBase
{ 
	FVector                                            Euler;                                                      // 0x0008   (0x0018)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0021   (0x000F)  MISSED
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromRotator
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigVMFunction_MathQuaternionFromRotator : FRigVMFunction_MathQuaternionBase
{ 
	FRotator                                           Rotator;                                                    // 0x0008   (0x0018)  
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromRotatorV2
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigVMFunction_MathQuaternionFromRotatorV2 : FRigVMFunction_MathQuaternionBase
{ 
	FRotator                                           Value;                                                      // 0x0008   (0x0018)  
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionFromTwoVectors
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigVMFunction_MathQuaternionFromTwoVectors : FRigVMFunction_MathQuaternionBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToAxisAndAngle
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigVMFunction_MathQuaternionToAxisAndAngle : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FVector                                            Axis;                                                       // 0x0030   (0x0018)  
	float                                              Angle;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionScale
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigVMFunction_MathQuaternionScale : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	float                                              Scale;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0034   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionScaleV2
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigVMFunction_MathQuaternionScaleV2 : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	float                                              Factor;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0034   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0040   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToEuler
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigVMFunction_MathQuaternionToEuler : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionToRotator
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigVMFunction_MathQuaternionToRotator : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FRotator                                           Result;                                                     // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMul
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 16 MaxSize: 0x0070
struct FRigVMFunction_MathQuaternionMul : FRigVMFunction_MathQuaternionBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionInverse
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 16 MaxSize: 0x0050
struct FRigVMFunction_MathQuaternionInverse : FRigVMFunction_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionSlerp
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 16 MaxSize: 0x0080
struct FRigVMFunction_MathQuaternionSlerp : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	float                                              T;                                                          // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0054   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0060   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionEquals
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigVMFunction_MathQuaternionEquals : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	bool                                               Result;                                                     // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0051   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionNotEquals
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigVMFunction_MathQuaternionNotEquals : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	bool                                               Result;                                                     // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0051   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionSelectBool
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigVMFunction_MathQuaternionSelectBool : FRigVMFunction_MathQuaternionBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FQuat                                              IfTrue;                                                     // 0x0010   (0x0020)  
	FQuat                                              IfFalse;                                                    // 0x0030   (0x0020)  
	FQuat                                              Result;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionDot
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigVMFunction_MathQuaternionDot : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              A;                                                          // 0x0010   (0x0020)  
	FQuat                                              B;                                                          // 0x0030   (0x0020)  
	float                                              Result;                                                     // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0054   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionUnit
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 16 MaxSize: 0x0050
struct FRigVMFunction_MathQuaternionUnit : FRigVMFunction_MathQuaternionUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionRotateVector
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 16 MaxSize: 0x0060
struct FRigVMFunction_MathQuaternionRotateVector : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Transform;                                                  // 0x0010   (0x0020)  
	FVector                                            Vector;                                                     // 0x0030   (0x0018)  
	FVector                                            Result;                                                     // 0x0048   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionGetAxis
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigVMFunction_MathQuaternionGetAxis : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Quaternion;                                                 // 0x0010   (0x0020)  
	TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionSwingTwist
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 16 MaxSize: 0x0090
struct FRigVMFunction_MathQuaternionSwingTwist : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	FVector                                            TwistAxis;                                                  // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
	FQuat                                              Swing;                                                      // 0x0050   (0x0020)  
	FQuat                                              Twist;                                                      // 0x0070   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionRotationOrder
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigVMFunction_MathQuaternionRotationOrder : FRigVMFunction_MathBase
{ 
	EEulerRotationOrder                                RotationOrder;                                              // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0009   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMakeRelative
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigVMFunction_MathQuaternionMakeRelative : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Global;                                                     // 0x0010   (0x0020)  
	FQuat                                              Parent;                                                     // 0x0030   (0x0020)  
	FQuat                                              Local;                                                      // 0x0050   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMakeAbsolute
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigVMFunction_MathQuaternionMakeAbsolute : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Local;                                                      // 0x0010   (0x0020)  
	FQuat                                              Parent;                                                     // 0x0030   (0x0020)  
	FQuat                                              Global;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathQuaternionMirrorTransform
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigVMFunction_MathQuaternionMirrorTransform : FRigVMFunction_MathQuaternionBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	TEnumAsByte<EAxis>                                 MirrorAxis;                                                 // 0x0030   (0x0001)  
	TEnumAsByte<EAxis>                                 AxisToFlip;                                                 // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0032   (0x000E)  MISSED
	FTransform                                         CentralTransform;                                           // 0x0040   (0x0060)  
	FQuat                                              Result;                                                     // 0x00A0   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatWorkData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FRigVMFunction_MathRBFInterpolateQuatWorkData
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorWorkData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FRigVMFunction_MathRBFInterpolateVectorWorkData
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_MathRBFInterpolateBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatBase
/// Size: 0x00F0 (240 bytes) (0x000008 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigVMFunction_MathRBFInterpolateQuatBase : FRigVMFunction_MathRBFInterpolateBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	ERBFQuatDistanceType                               DistanceFunction;                                           // 0x0030   (0x0001)  
	ERBFKernelType                                     SmoothingFunction;                                          // 0x0031   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	float                                              SmoothingAngle;                                             // 0x0034   (0x0004)  
	bool                                               bNormalizeOutput;                                           // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            TwistAxis;                                                  // 0x0040   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	FRigVMFunction_MathRBFInterpolateQuatWorkData      WorkData;                                                   // 0x0060   (0x0090)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorBase
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigVMFunction_MathRBFInterpolateVectorBase : FRigVMFunction_MathRBFInterpolateBase
{ 
	FVector                                            Input;                                                      // 0x0008   (0x0018)  
	ERBFVectorDistanceType                             DistanceFunction;                                           // 0x0020   (0x0001)  
	ERBFKernelType                                     SmoothingFunction;                                          // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0022   (0x0002)  MISSED
	float                                              SmoothingRadius;                                            // 0x0024   (0x0004)  
	bool                                               bNormalizeOutput;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FRigVMFunction_MathRBFInterpolateVectorWorkData    WorkData;                                                   // 0x0030   (0x0090)  
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatFloat_Target
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 MaxSize: 0x0030
struct FMathRBFInterpolateQuatFloat_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	float                                              Value;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatFloat
/// Size: 0x0110 (272 bytes) (0x0000F0 - 0x000110) align 16 MaxSize: 0x0110
struct FRigVMFunction_MathRBFInterpolateQuatFloat : FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatFloat_Target>        Targets;                                                    // 0x00F0   (0x0010)  
	float                                              Output;                                                     // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0104   (0x000C)  MISSED
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatVector_Target
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FMathRBFInterpolateQuatVector_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	FVector                                            Value;                                                      // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatVector
/// Size: 0x0120 (288 bytes) (0x0000F0 - 0x000120) align 16 MaxSize: 0x0120
struct FRigVMFunction_MathRBFInterpolateQuatVector : FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatVector_Target>       Targets;                                                    // 0x00F0   (0x0010)  
	FVector                                            Output;                                                     // 0x0100   (0x0018)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatColor_Target
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 MaxSize: 0x0030
struct FMathRBFInterpolateQuatColor_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	FLinearColor                                       Value;                                                      // 0x0020   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatColor
/// Size: 0x0110 (272 bytes) (0x0000F0 - 0x000110) align 16 MaxSize: 0x0110
struct FRigVMFunction_MathRBFInterpolateQuatColor : FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatColor_Target>        Targets;                                                    // 0x00F0   (0x0010)  
	FLinearColor                                       Output;                                                     // 0x0100   (0x0010)  
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatQuat_Target
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FMathRBFInterpolateQuatQuat_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	FQuat                                              Value;                                                      // 0x0020   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatQuat
/// Size: 0x0120 (288 bytes) (0x0000F0 - 0x000120) align 16 MaxSize: 0x0120
struct FRigVMFunction_MathRBFInterpolateQuatQuat : FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatQuat_Target>         Targets;                                                    // 0x00F0   (0x0010)  
	FQuat                                              Output;                                                     // 0x0100   (0x0020)  
};

/// Struct /Script/RigVM.MathRBFInterpolateQuatXform_Target
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FMathRBFInterpolateQuatXform_Target
{ 
	FQuat                                              Target;                                                     // 0x0000   (0x0020)  
	FTransform                                         Value;                                                      // 0x0020   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateQuatXform
/// Size: 0x0160 (352 bytes) (0x0000F0 - 0x000160) align 16 MaxSize: 0x0160
struct FRigVMFunction_MathRBFInterpolateQuatXform : FRigVMFunction_MathRBFInterpolateQuatBase
{ 
	TArray<FMathRBFInterpolateQuatXform_Target>        Targets;                                                    // 0x00F0   (0x0010)  
	FTransform                                         Output;                                                     // 0x0100   (0x0060)  
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorFloat_Target
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FMathRBFInterpolateVectorFloat_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	float                                              Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorFloat
/// Size: 0x00E0 (224 bytes) (0x0000C0 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigVMFunction_MathRBFInterpolateVectorFloat : FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorFloat_Target>      Targets;                                                    // 0x00C0   (0x0010)  
	float                                              Output;                                                     // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x00D4   (0x000C)  MISSED
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorVector_Target
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMathRBFInterpolateVectorVector_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	FVector                                            Value;                                                      // 0x0018   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorVector
/// Size: 0x00F0 (240 bytes) (0x0000C0 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigVMFunction_MathRBFInterpolateVectorVector : FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorVector_Target>     Targets;                                                    // 0x00C0   (0x0010)  
	FVector                                            Output;                                                     // 0x00D0   (0x0018)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorColor_Target
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMathRBFInterpolateVectorColor_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	FLinearColor                                       Value;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorColor
/// Size: 0x00E0 (224 bytes) (0x0000C0 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigVMFunction_MathRBFInterpolateVectorColor : FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorColor_Target>      Targets;                                                    // 0x00C0   (0x0010)  
	FLinearColor                                       Output;                                                     // 0x00D0   (0x0010)  
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorQuat_Target
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FMathRBFInterpolateVectorQuat_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0020   (0x0020)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorQuat
/// Size: 0x00F0 (240 bytes) (0x0000C0 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigVMFunction_MathRBFInterpolateVectorQuat : FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorQuat_Target>       Targets;                                                    // 0x00C0   (0x0010)  
	FQuat                                              Output;                                                     // 0x00D0   (0x0020)  
};

/// Struct /Script/RigVM.MathRBFInterpolateVectorXform_Target
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FMathRBFInterpolateVectorXform_Target
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0020   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathRBFInterpolateVectorXform
/// Size: 0x0130 (304 bytes) (0x0000C0 - 0x000130) align 16 MaxSize: 0x0130
struct FRigVMFunction_MathRBFInterpolateVectorXform : FRigVMFunction_MathRBFInterpolateVectorBase
{ 
	TArray<FMathRBFInterpolateVectorXform_Target>      Targets;                                                    // 0x00C0   (0x0010)  
	FTransform                                         Output;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_MathTransformBase : FRigVMFunction_MathBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMutableBase
/// Size: 0x0100 (256 bytes) (0x000100 - 0x000100) align 16 MaxSize: 0x0100
struct FRigVMFunction_MathTransformMutableBase : FRigVMFunction_MathMutableBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformUnaryOp
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigVMFunction_MathTransformUnaryOp : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FTransform                                         Result;                                                     // 0x0070   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformBinaryOp
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FRigVMFunction_MathTransformBinaryOp : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0060)  
	FTransform                                         B;                                                          // 0x0070   (0x0060)  
	FTransform                                         Result;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformBinaryAggregateOp
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FRigVMFunction_MathTransformBinaryAggregateOp : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0060)  
	FTransform                                         B;                                                          // 0x0070   (0x0060)  
	FTransform                                         Result;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMake
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigVMFunction_MathTransformMake : FRigVMFunction_MathTransformBase
{ 
	FVector                                            Translation;                                                // 0x0008   (0x0018)  
	FQuat                                              Rotation;                                                   // 0x0020   (0x0020)  
	FVector                                            Scale;                                                      // 0x0040   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	FTransform                                         Result;                                                     // 0x0060   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformFromEulerTransform
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRigVMFunction_MathTransformFromEulerTransform : FRigVMFunction_MathTransformBase
{ 
	FEulerTransform                                    EulerTransform;                                             // 0x0008   (0x0048)  
	FTransform                                         Result;                                                     // 0x0050   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformFromEulerTransformV2
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRigVMFunction_MathTransformFromEulerTransformV2 : FRigVMFunction_MathTransformBase
{ 
	FEulerTransform                                    Value;                                                      // 0x0008   (0x0048)  
	FTransform                                         Result;                                                     // 0x0050   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformToEulerTransform
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigVMFunction_MathTransformToEulerTransform : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FEulerTransform                                    Result;                                                     // 0x0070   (0x0048)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMul
/// Size: 0x0130 (304 bytes) (0x000130 - 0x000130) align 16 MaxSize: 0x0130
struct FRigVMFunction_MathTransformMul : FRigVMFunction_MathTransformBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMakeRelative
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FRigVMFunction_MathTransformMakeRelative : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Global;                                                     // 0x0010   (0x0060)  
	FTransform                                         Parent;                                                     // 0x0070   (0x0060)  
	FTransform                                         Local;                                                      // 0x00D0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMakeAbsolute
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FRigVMFunction_MathTransformMakeAbsolute : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Local;                                                      // 0x0010   (0x0060)  
	FTransform                                         Parent;                                                     // 0x0070   (0x0060)  
	FTransform                                         Global;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformAccumulateArray
/// Size: 0x0190 (400 bytes) (0x000100 - 0x000190) align 16 MaxSize: 0x0190
struct FRigVMFunction_MathTransformAccumulateArray : FRigVMFunction_MathTransformMutableBase
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0100   (0x0010)  
	ERigVMTransformSpace                               TargetSpace;                                                // 0x0110   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0111   (0x000F)  MISSED
	FTransform                                         Root;                                                       // 0x0120   (0x0060)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0180   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformInverse
/// Size: 0x00D0 (208 bytes) (0x0000D0 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigVMFunction_MathTransformInverse : FRigVMFunction_MathTransformUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformLerp
/// Size: 0x0140 (320 bytes) (0x000008 - 0x000140) align 16 MaxSize: 0x0140
struct FRigVMFunction_MathTransformLerp : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         A;                                                          // 0x0010   (0x0060)  
	FTransform                                         B;                                                          // 0x0070   (0x0060)  
	float                                              T;                                                          // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x00D4   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x00E0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformSelectBool
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FRigVMFunction_MathTransformSelectBool : FRigVMFunction_MathTransformBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FTransform                                         IfTrue;                                                     // 0x0010   (0x0060)  
	FTransform                                         IfFalse;                                                    // 0x0070   (0x0060)  
	FTransform                                         Result;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformRotateVector
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigVMFunction_MathTransformRotateVector : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FVector                                            Vector;                                                     // 0x0070   (0x0018)  
	FVector                                            Result;                                                     // 0x0088   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformTransformVector
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigVMFunction_MathTransformTransformVector : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FVector                                            Location;                                                   // 0x0070   (0x0018)  
	FVector                                            Result;                                                     // 0x0088   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformFromSRT
/// Size: 0x0110 (272 bytes) (0x000008 - 0x000110) align 16 MaxSize: 0x0110
struct FRigVMFunction_MathTransformFromSRT : FRigVMFunction_MathTransformBase
{ 
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
	FVector                                            Rotation;                                                   // 0x0020   (0x0018)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            Scale;                                                      // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0060   (0x0060)  
	FEulerTransform                                    EulerTransform;                                             // 0x00C0   (0x0048)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformArrayToSRT
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRigVMFunction_MathTransformArrayToSRT : FRigVMFunction_MathTransformBase
{ 
	TArray<FTransform>                                 Transforms;                                                 // 0x0008   (0x0010)  
	TArray<FVector>                                    Translations;                                               // 0x0018   (0x0010)  
	TArray<FQuat>                                      Rotations;                                                  // 0x0028   (0x0010)  
	TArray<FVector>                                    Scales;                                                     // 0x0038   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformClampSpatially
/// Size: 0x0160 (352 bytes) (0x000008 - 0x000160) align 16 MaxSize: 0x0160
struct FRigVMFunction_MathTransformClampSpatially : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0070   (0x0001)  
	TEnumAsByte<ERigVMClampSpatialMode>                Type;                                                       // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0072   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0074   (0x0004)  
	float                                              Maximum;                                                    // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Space;                                                      // 0x0080   (0x0060)  
	bool                                               bDrawDebug;                                                 // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00E1   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x00E4   (0x0010)  
	float                                              DebugThickness;                                             // 0x00F4   (0x0004)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x00F8   (0x0008)  MISSED
	FTransform                                         Result;                                                     // 0x0100   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathTransformMirrorTransform
/// Size: 0x0140 (320 bytes) (0x000008 - 0x000140) align 16 MaxSize: 0x0140
struct FRigVMFunction_MathTransformMirrorTransform : FRigVMFunction_MathTransformBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	TEnumAsByte<EAxis>                                 MirrorAxis;                                                 // 0x0070   (0x0001)  
	TEnumAsByte<EAxis>                                 AxisToFlip;                                                 // 0x0071   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0072   (0x000E)  MISSED
	FTransform                                         CentralTransform;                                           // 0x0080   (0x0060)  
	FTransform                                         Result;                                                     // 0x00E0   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorUnaryOp
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathVectorUnaryOp : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Result;                                                     // 0x0020   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBinaryOp
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorBinaryOp : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBinaryAggregateOp
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorBinaryAggregateOp : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMake
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMFunction_MathVectorMake : FRigVMFunction_MathVectorBase
{ 
	float                                              X;                                                          // 0x0008   (0x0004)  
	float                                              Y;                                                          // 0x000C   (0x0004)  
	float                                              Z;                                                          // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0018   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorFromFloat
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_MathVectorFromFloat : FRigVMFunction_MathVectorBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0010   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorFromDouble
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_MathVectorFromDouble : FRigVMFunction_MathVectorBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	FVector                                            Result;                                                     // 0x0010   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorAdd
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorAdd : FRigVMFunction_MathVectorBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSub
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorSub : FRigVMFunction_MathVectorBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMul
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorMul : FRigVMFunction_MathVectorBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorScale
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathVectorScale : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Factor;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDiv
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorDiv : FRigVMFunction_MathVectorBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMod
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorMod : FRigVMFunction_MathVectorBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMin
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorMin : FRigVMFunction_MathVectorBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMax
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorMax : FRigVMFunction_MathVectorBinaryAggregateOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorNegate
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathVectorNegate : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorAbs
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathVectorAbs : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorFloor
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathVectorFloor : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorCeil
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathVectorCeil : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorRound
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathVectorRound : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSign
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathVectorSign : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorClamp
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FRigVMFunction_MathVectorClamp : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Minimum;                                                    // 0x0020   (0x0018)  
	FVector                                            Maximum;                                                    // 0x0038   (0x0018)  
	FVector                                            Result;                                                     // 0x0050   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorLerp
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigVMFunction_MathVectorLerp : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              T;                                                          // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorRemap
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRigVMFunction_MathVectorRemap : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            SourceMinimum;                                              // 0x0020   (0x0018)  
	FVector                                            SourceMaximum;                                              // 0x0038   (0x0018)  
	FVector                                            TargetMinimum;                                              // 0x0050   (0x0018)  
	FVector                                            TargetMaximum;                                              // 0x0068   (0x0018)  
	bool                                               bClamp;                                                     // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0081   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0088   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorEquals
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathVectorEquals : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	bool                                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorNotEquals
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathVectorNotEquals : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	bool                                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorIsNearlyZero
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_MathVectorIsNearlyZero : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Tolerance;                                                  // 0x0020   (0x0004)  
	bool                                               Result;                                                     // 0x0024   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorIsNearlyEqual
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathVectorIsNearlyEqual : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              Tolerance;                                                  // 0x0038   (0x0004)  
	bool                                               Result;                                                     // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSelectBool
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigVMFunction_MathVectorSelectBool : FRigVMFunction_MathVectorBase
{ 
	bool                                               Condition;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	FVector                                            IfTrue;                                                     // 0x0010   (0x0018)  
	FVector                                            IfFalse;                                                    // 0x0028   (0x0018)  
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDeg
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathVectorDeg : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorRad
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathVectorRad : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorLengthSquared
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_MathVectorLengthSquared : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorLength
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_MathVectorLength : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Result;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDistance
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathVectorDistance : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              Result;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorCross
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorCross : FRigVMFunction_MathVectorBinaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorDot
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathVectorDot : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              Result;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorUnit
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_MathVectorUnit : FRigVMFunction_MathVectorUnaryOp
{ 
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorSetLength
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathVectorSetLength : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Length;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorClampLength
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathVectorClampLength : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              MinimumLength;                                              // 0x0020   (0x0004)  
	float                                              MaximumLength;                                              // 0x0024   (0x0004)  
	FVector                                            Result;                                                     // 0x0028   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMirror
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorMirror : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Normal;                                                     // 0x0020   (0x0018)  
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorAngle
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathVectorAngle : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	float                                              Result;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorParallel
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathVectorParallel : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	bool                                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorOrthogonal
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_MathVectorOrthogonal : FRigVMFunction_MathVectorBase
{ 
	FVector                                            A;                                                          // 0x0008   (0x0018)  
	FVector                                            B;                                                          // 0x0020   (0x0018)  
	bool                                               Result;                                                     // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorBezierFourPoint
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRigVMFunction_MathVectorBezierFourPoint : FRigVMFunction_MathVectorBase
{ 
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0008   (0x0060)  
	float                                              T;                                                          // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0070   (0x0018)  
	FVector                                            Tangent;                                                    // 0x0088   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMakeBezierFourPoint
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FRigVMFunction_MathVectorMakeBezierFourPoint : FRigVMFunction_MathVectorBase
{ 
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0008   (0x0060)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorClampSpatially
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigVMFunction_MathVectorClampSpatially : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	TEnumAsByte<EAxis>                                 Axis;                                                       // 0x0020   (0x0001)  
	TEnumAsByte<ERigVMClampSpatialMode>                Type;                                                       // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0022   (0x0002)  MISSED
	float                                              Minimum;                                                    // 0x0024   (0x0004)  
	float                                              Maximum;                                                    // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FTransform                                         Space;                                                      // 0x0030   (0x0060)  
	bool                                               bDrawDebug;                                                 // 0x0090   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	FLinearColor                                       DebugColor;                                                 // 0x0094   (0x0010)  
	float                                              DebugThickness;                                             // 0x00A4   (0x0004)  
	FVector                                            Result;                                                     // 0x00A8   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathIntersectPlane
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FRigVMFunction_MathIntersectPlane : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            Direction;                                                  // 0x0020   (0x0018)  
	FVector                                            PlanePoint;                                                 // 0x0038   (0x0018)  
	FVector                                            PlaneNormal;                                                // 0x0050   (0x0018)  
	FVector                                            Result;                                                     // 0x0068   (0x0018)  
	float                                              Distance;                                                   // 0x0080   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0084   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathDistanceToPlane
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FRigVMFunction_MathDistanceToPlane : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Point;                                                      // 0x0008   (0x0018)  
	FVector                                            PlanePoint;                                                 // 0x0020   (0x0018)  
	FVector                                            PlaneNormal;                                                // 0x0038   (0x0018)  
	FVector                                            ClosestPointOnPlane;                                        // 0x0050   (0x0018)  
	float                                              SignedDistance;                                             // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMakeRelative
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorMakeRelative : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Global;                                                     // 0x0008   (0x0018)  
	FVector                                            Parent;                                                     // 0x0020   (0x0018)  
	FVector                                            Local;                                                      // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMakeAbsolute
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigVMFunction_MathVectorMakeAbsolute : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Local;                                                      // 0x0008   (0x0018)  
	FVector                                            Parent;                                                     // 0x0020   (0x0018)  
	FVector                                            Global;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorMirrorTransform
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRigVMFunction_MathVectorMirrorTransform : FRigVMFunction_MathVectorBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	TEnumAsByte<EAxis>                                 MirrorAxis;                                                 // 0x0020   (0x0001)  
	TEnumAsByte<EAxis>                                 AxisToFlip;                                                 // 0x0021   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x0022   (0x000E)  MISSED
	FTransform                                         CentralTransform;                                           // 0x0030   (0x0060)  
	FVector                                            Result;                                                     // 0x0090   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorArraySum
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMFunction_MathVectorArraySum : FRigVMFunction_MathVectorBase
{ 
	TArray<FVector>                                    Array;                                                      // 0x0008   (0x0010)  
	FVector                                            Sum;                                                        // 0x0018   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_MathVectorArrayAverage
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMFunction_MathVectorArrayAverage : FRigVMFunction_MathVectorBase
{ 
	TArray<FVector>                                    Array;                                                      // 0x0008   (0x0010)  
	FVector                                            Average;                                                    // 0x0018   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_NoiseFloat
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_NoiseFloat : FRigVMFunction_MathBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Speed;                                                      // 0x000C   (0x0004)  
	float                                              Frequency;                                                  // 0x0010   (0x0004)  
	float                                              Minimum;                                                    // 0x0014   (0x0004)  
	float                                              Maximum;                                                    // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
	float                                              time;                                                       // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_NoiseDouble
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_NoiseDouble : FRigVMFunction_MathBase
{ 
	double                                             Value;                                                      // 0x0008   (0x0008)  
	double                                             Speed;                                                      // 0x0010   (0x0008)  
	double                                             Frequency;                                                  // 0x0018   (0x0008)  
	double                                             Minimum;                                                    // 0x0020   (0x0008)  
	double                                             Maximum;                                                    // 0x0028   (0x0008)  
	double                                             Result;                                                     // 0x0030   (0x0008)  
	double                                             time;                                                       // 0x0038   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_NoiseVector
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FRigVMFunction_NoiseVector : FRigVMFunction_MathBase
{ 
	FVector                                            position;                                                   // 0x0008   (0x0018)  
	FVector                                            Speed;                                                      // 0x0020   (0x0018)  
	FVector                                            Frequency;                                                  // 0x0038   (0x0018)  
	float                                              Minimum;                                                    // 0x0050   (0x0004)  
	float                                              Maximum;                                                    // 0x0054   (0x0004)  
	FVector                                            Result;                                                     // 0x0058   (0x0018)  
	FVector                                            time;                                                       // 0x0070   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_NoiseVector2
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FRigVMFunction_NoiseVector2 : FRigVMFunction_MathBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Speed;                                                      // 0x0020   (0x0018)  
	FVector                                            Frequency;                                                  // 0x0038   (0x0018)  
	double                                             Minimum;                                                    // 0x0050   (0x0008)  
	double                                             Maximum;                                                    // 0x0058   (0x0008)  
	FVector                                            Result;                                                     // 0x0060   (0x0018)  
	FVector                                            time;                                                       // 0x0078   (0x0018)  
};

/// Struct /Script/RigVM.RigVMFunction_RandomFloat
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMFunction_RandomFloat : FRigVMFunction_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Duration;                                                   // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              LastResult;                                                 // 0x001C   (0x0004)  
	int32_t                                            LastSeed;                                                   // 0x0020   (0x0004)  
	int32_t                                            BaseSeed;                                                   // 0x0024   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_RandomVector
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigVMFunction_RandomVector : FRigVMFunction_MathBase
{ 
	int32_t                                            Seed;                                                       // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              Duration;                                                   // 0x0014   (0x0004)  
	FVector                                            Result;                                                     // 0x0018   (0x0018)  
	FVector                                            LastResult;                                                 // 0x0030   (0x0018)  
	int32_t                                            LastSeed;                                                   // 0x0048   (0x0004)  
	int32_t                                            BaseSeed;                                                   // 0x004C   (0x0004)  
	float                                              TimeLeft;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMMirrorSettings
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMMirrorSettings
{ 
	TEnumAsByte<EAxis>                                 MirrorAxis;                                                 // 0x0000   (0x0001)  
	TEnumAsByte<EAxis>                                 AxisToFlip;                                                 // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0002   (0x0006)  MISSED
	FString                                            SearchString;                                               // 0x0008   (0x0010)  
	FString                                            ReplaceString;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMDispatch_CoreBase
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_CoreBase : FRigVMDispatchFactory
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayBase
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayBase : FRigVMDispatch_CoreBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayBaseMutable
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayBaseMutable : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayMake
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayMake : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayReset
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayReset : FRigVMDispatch_ArrayBaseMutable
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayGetNum
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayGetNum : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArraySetNum
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArraySetNum : FRigVMDispatch_ArrayBaseMutable
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayGetAtIndex
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayGetAtIndex : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArraySetAtIndex
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArraySetAtIndex : FRigVMDispatch_ArrayBaseMutable
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayAdd
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayAdd : FRigVMDispatch_ArraySetAtIndex
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayInsert
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayInsert : FRigVMDispatch_ArraySetAtIndex
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayRemove
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayRemove : FRigVMDispatch_ArrayBaseMutable
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayReverse
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayReverse : FRigVMDispatch_ArrayReset
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayFind
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayFind : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayAppend
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayAppend : FRigVMDispatch_ArrayBaseMutable
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayClone
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayClone : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayUnion
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayUnion : FRigVMDispatch_ArrayAppend
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayDifference
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayDifference : FRigVMDispatch_ArrayBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayIntersection
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayIntersection : FRigVMDispatch_ArrayDifference
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_ArrayIterator
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_ArrayIterator : FRigVMDispatch_ArrayBaseMutable
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_CoreEquals
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_CoreEquals : FRigVMDispatch_CoreBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_CoreNotEquals
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_CoreNotEquals : FRigVMDispatch_CoreEquals
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_If
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_If : FRigVMDispatch_CoreBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_Print
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_Print : FRigVMDispatchFactory
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_SelectInt32
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_SelectInt32 : FRigVMDispatch_CoreBase
{ 
};

/// Struct /Script/RigVM.RigVMDispatch_SwitchInt32
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMDispatch_SwitchInt32 : FRigVMDispatch_CoreBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_ControlFlowBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_ControlFlowBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_ControlFlowBranch
/// Size: 0x03F0 (1008 bytes) (0x000008 - 0x0003F0) align 16 MaxSize: 0x03F0
struct FRigVMFunction_ControlFlowBranch : FRigVMFunction_ControlFlowBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FRigVMExecuteContext                               ExecuteContext;                                             // 0x0010   (0x00F0)  
	bool                                               Condition;                                                  // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0101   (0x000F)  MISSED
	FRigVMExecuteContext                               TRUE0;                                                      // 0x0110   (0x00F0)  
	FRigVMExecuteContext                               FALSE0;                                                     // 0x0200   (0x00F0)  
	FRigVMExecuteContext                               Completed;                                                  // 0x02F0   (0x00F0)  
	FName                                              BlockToRun;                                                 // 0x03E0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x03E8   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_NameBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_NameBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_NameConcat
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_NameConcat : FRigVMFunction_NameBase
{ 
	FName                                              A;                                                          // 0x0008   (0x0008)  
	FName                                              B;                                                          // 0x0010   (0x0008)  
	FName                                              Result;                                                     // 0x0018   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_NameTruncate
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_NameTruncate : FRigVMFunction_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            Count;                                                      // 0x0010   (0x0004)  
	bool                                               FromEnd;                                                    // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FName                                              Remainder;                                                  // 0x0018   (0x0008)  
	FName                                              Chopped;                                                    // 0x0020   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_NameReplace
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_NameReplace : FRigVMFunction_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Old;                                                        // 0x0010   (0x0008)  
	FName                                              New;                                                        // 0x0018   (0x0008)  
	FName                                              Result;                                                     // 0x0020   (0x0008)  
};

/// Struct /Script/RigVM.RigVMFunction_EndsWith
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_EndsWith : FRigVMFunction_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Ending;                                                     // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_StartsWith
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_StartsWith : FRigVMFunction_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Start;                                                      // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_Contains
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_Contains : FRigVMFunction_NameBase
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Search;                                                     // 0x0010   (0x0008)  
	bool                                               Result;                                                     // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_StringBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_StringBase : FRigVMStruct
{ 
};

/// Struct /Script/RigVM.RigVMFunction_StringConcat
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_StringConcat : FRigVMFunction_StringBase
{ 
	FString                                            A;                                                          // 0x0008   (0x0010)  
	FString                                            B;                                                          // 0x0018   (0x0010)  
	FString                                            Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringTruncate
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVMFunction_StringTruncate : FRigVMFunction_StringBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	bool                                               FromEnd;                                                    // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FString                                            Remainder;                                                  // 0x0020   (0x0010)  
	FString                                            Chopped;                                                    // 0x0030   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringReplace
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRigVMFunction_StringReplace : FRigVMFunction_StringBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            Old;                                                        // 0x0018   (0x0010)  
	FString                                            New;                                                        // 0x0028   (0x0010)  
	FString                                            Result;                                                     // 0x0038   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringEndsWith
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMFunction_StringEndsWith : FRigVMFunction_StringBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            Ending;                                                     // 0x0018   (0x0010)  
	bool                                               Result;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_StringStartsWith
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMFunction_StringStartsWith : FRigVMFunction_StringBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            Start;                                                      // 0x0018   (0x0010)  
	bool                                               Result;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_StringContains
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMFunction_StringContains : FRigVMFunction_StringBase
{ 
	FString                                            Name;                                                       // 0x0008   (0x0010)  
	FString                                            Search;                                                     // 0x0018   (0x0010)  
	bool                                               Result;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_StringLength
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_StringLength : FRigVMFunction_StringBase
{ 
	FString                                            Value;                                                      // 0x0008   (0x0010)  
	int32_t                                            Length;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_StringTrimWhitespace
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_StringTrimWhitespace : FRigVMFunction_StringBase
{ 
	FString                                            Value;                                                      // 0x0008   (0x0010)  
	FString                                            Result;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringToUppercase
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_StringToUppercase : FRigVMFunction_StringBase
{ 
	FString                                            Value;                                                      // 0x0008   (0x0010)  
	FString                                            Result;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringToLowercase
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_StringToLowercase : FRigVMFunction_StringBase
{ 
	FString                                            Value;                                                      // 0x0008   (0x0010)  
	FString                                            Result;                                                     // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringReverse
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_StringReverse : FRigVMFunction_StringBase
{ 
	FString                                            Value;                                                      // 0x0008   (0x0010)  
	FString                                            Reverse;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringLeft
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMFunction_StringLeft : FRigVMFunction_StringBase
{ 
	FString                                            Value;                                                      // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringRight
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMFunction_StringRight : FRigVMFunction_StringBase
{ 
	FString                                            Value;                                                      // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringMiddle
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMFunction_StringMiddle : FRigVMFunction_StringBase
{ 
	FString                                            Value;                                                      // 0x0008   (0x0010)  
	int32_t                                            Start;                                                      // 0x0018   (0x0004)  
	int32_t                                            Count;                                                      // 0x001C   (0x0004)  
	FString                                            Result;                                                     // 0x0020   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringFind
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMFunction_StringFind : FRigVMFunction_StringBase
{ 
	FString                                            Value;                                                      // 0x0008   (0x0010)  
	FString                                            Search;                                                     // 0x0018   (0x0010)  
	bool                                               Found;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            Index;                                                      // 0x002C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_StringSplit
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_StringSplit : FRigVMFunction_StringBase
{ 
	FString                                            Value;                                                      // 0x0008   (0x0010)  
	FString                                            Separator;                                                  // 0x0018   (0x0010)  
	TArray<FString>                                    Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringJoin
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_StringJoin : FRigVMFunction_StringBase
{ 
	TArray<FString>                                    Values;                                                     // 0x0008   (0x0010)  
	FString                                            Separator;                                                  // 0x0018   (0x0010)  
	FString                                            Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/RigVM.RigVMFunction_StringPadInteger
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_StringPadInteger : FRigVMFunction_StringBase
{ 
	int32_t                                            Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            Digits;                                                     // 0x000C   (0x0004)  
	FString                                            Result;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/RigVM.RigDispatch_ToString
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigDispatch_ToString : FRigVMDispatchFactory
{ 
};

/// Struct /Script/RigVM.RigDispatch_FromString
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigDispatch_FromString : FRigVMDispatchFactory
{ 
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigVMFunction_AccumulateBase : FRigVMFunction_SimBase
{ 
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatAdd
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_AccumulateFloatAdd : FRigVMFunction_AccumulateBase
{ 
	float                                              Increment;                                                  // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorAdd
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FRigVMFunction_AccumulateVectorAdd : FRigVMFunction_AccumulateBase
{ 
	FVector                                            Increment;                                                  // 0x0008   (0x0018)  
	FVector                                            InitialValue;                                               // 0x0020   (0x0018)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
	FVector                                            AccumulatedValue;                                           // 0x0058   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatMul
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_AccumulateFloatMul : FRigVMFunction_AccumulateBase
{ 
	float                                              Multiplier;                                                 // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0014   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0018   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorMul
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FRigVMFunction_AccumulateVectorMul : FRigVMFunction_AccumulateBase
{ 
	FVector                                            Multiplier;                                                 // 0x0008   (0x0018)  
	FVector                                            InitialValue;                                               // 0x0020   (0x0018)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
	FVector                                            AccumulatedValue;                                           // 0x0058   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateQuatMul
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRigVMFunction_AccumulateQuatMul : FRigVMFunction_AccumulateBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Multiplier;                                                 // 0x0010   (0x0020)  
	FQuat                                              InitialValue;                                               // 0x0030   (0x0020)  
	bool                                               bFlipOrder;                                                 // 0x0050   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x0052   (0x000E)  MISSED
	FQuat                                              Result;                                                     // 0x0060   (0x0020)  
	FQuat                                              AccumulatedValue;                                           // 0x0080   (0x0020)  
	bool                                               bIsInitialized;                                             // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateTransformMul
/// Size: 0x01B0 (432 bytes) (0x000008 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigVMFunction_AccumulateTransformMul : FRigVMFunction_AccumulateBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Multiplier;                                                 // 0x0010   (0x0060)  
	FTransform                                         InitialValue;                                               // 0x0070   (0x0060)  
	bool                                               bFlipOrder;                                                 // 0x00D0   (0x0001)  
	bool                                               bIntegrateDeltaTime;                                        // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_6[0xE];                                       // 0x00D2   (0x000E)  MISSED
	FTransform                                         Result;                                                     // 0x00E0   (0x0060)  
	FTransform                                         AccumulatedValue;                                           // 0x0140   (0x0060)  
	bool                                               bIsInitialized;                                             // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x01A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatLerp
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigVMFunction_AccumulateFloatLerp : FRigVMFunction_AccumulateBase
{ 
	float                                              TargetValue;                                                // 0x0008   (0x0004)  
	float                                              InitialValue;                                               // 0x000C   (0x0004)  
	float                                              Blend;                                                      // 0x0010   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0018   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x001C   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorLerp
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FRigVMFunction_AccumulateVectorLerp : FRigVMFunction_AccumulateBase
{ 
	FVector                                            TargetValue;                                                // 0x0008   (0x0018)  
	FVector                                            InitialValue;                                               // 0x0020   (0x0018)  
	float                                              Blend;                                                      // 0x0038   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0040   (0x0018)  
	FVector                                            AccumulatedValue;                                           // 0x0058   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateQuatLerp
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRigVMFunction_AccumulateQuatLerp : FRigVMFunction_AccumulateBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              TargetValue;                                                // 0x0010   (0x0020)  
	FQuat                                              InitialValue;                                               // 0x0030   (0x0020)  
	float                                              Blend;                                                      // 0x0050   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x0054   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x0055   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0060   (0x0020)  
	FQuat                                              AccumulatedValue;                                           // 0x0080   (0x0020)  
	bool                                               bIsInitialized;                                             // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x00A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateTransformLerp
/// Size: 0x01B0 (432 bytes) (0x000008 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigVMFunction_AccumulateTransformLerp : FRigVMFunction_AccumulateBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         TargetValue;                                                // 0x0010   (0x0060)  
	FTransform                                         InitialValue;                                               // 0x0070   (0x0060)  
	float                                              Blend;                                                      // 0x00D0   (0x0004)  
	bool                                               bIntegrateDeltaTime;                                        // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x00D5   (0x000B)  MISSED
	FTransform                                         Result;                                                     // 0x00E0   (0x0060)  
	FTransform                                         AccumulatedValue;                                           // 0x0140   (0x0060)  
	bool                                               bIsInitialized;                                             // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x01A1   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateFloatRange
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_AccumulateFloatRange : FRigVMFunction_AccumulateBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Minimum;                                                    // 0x000C   (0x0004)  
	float                                              Maximum;                                                    // 0x0010   (0x0004)  
	float                                              AccumulatedMinimum;                                         // 0x0014   (0x0004)  
	float                                              AccumulatedMaximum;                                         // 0x0018   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AccumulateVectorRange
/// Size: 0x0088 (136 bytes) (0x000008 - 0x000088) align 8 MaxSize: 0x0088
struct FRigVMFunction_AccumulateVectorRange : FRigVMFunction_AccumulateBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Minimum;                                                    // 0x0020   (0x0018)  
	FVector                                            Maximum;                                                    // 0x0038   (0x0018)  
	FVector                                            AccumulatedMinimum;                                         // 0x0050   (0x0018)  
	FVector                                            AccumulatedMaximum;                                         // 0x0068   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0081   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AlphaInterp
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FRigVMFunction_AlphaInterp : FRigVMFunction_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Scale;                                                      // 0x000C   (0x0004)  
	float                                              Bias;                                                       // 0x0010   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x0018   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0020   (0x0008)  
	bool                                               bClampResult;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x002C   (0x0004)  
	float                                              ClampMax;                                                   // 0x0030   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x0038   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x003C   (0x0004)  
	float                                              Result;                                                     // 0x0040   (0x0004)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0044   (0x0030)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_AlphaInterpVector
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRigVMFunction_AlphaInterpVector : FRigVMFunction_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              Scale;                                                      // 0x0020   (0x0004)  
	float                                              Bias;                                                       // 0x0024   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x002C   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0034   (0x0008)  
	bool                                               bClampResult;                                               // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x0040   (0x0004)  
	float                                              ClampMax;                                                   // 0x0044   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x004C   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0058   (0x0018)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0070   (0x0030)  
};

/// Struct /Script/RigVM.RigVMFunction_AlphaInterpQuat
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigVMFunction_AlphaInterpQuat : FRigVMFunction_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	float                                              Scale;                                                      // 0x0030   (0x0004)  
	float                                              Bias;                                                       // 0x0034   (0x0004)  
	bool                                               bMapRange;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FInputRange                                        InRange;                                                    // 0x003C   (0x0008)  
	FInputRange                                        OutRange;                                                   // 0x0044   (0x0008)  
	bool                                               bClampResult;                                               // 0x004C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	float                                              ClampMin;                                                   // 0x0050   (0x0004)  
	float                                              ClampMax;                                                   // 0x0054   (0x0004)  
	bool                                               bInterpResult;                                              // 0x0058   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              InterpSpeedIncreasing;                                      // 0x005C   (0x0004)  
	float                                              InterpSpeedDecreasing;                                      // 0x0060   (0x0004)  
	unsigned char                                      UnknownData04_6[0xC];                                       // 0x0064   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0070   (0x0020)  
	FInputScaleBiasClamp                               ScaleBiasClamp;                                             // 0x0090   (0x0030)  
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousFloat
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigVMFunction_DeltaFromPreviousFloat : FRigVMFunction_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Delta;                                                      // 0x000C   (0x0004)  
	float                                              PreviousValue;                                              // 0x0010   (0x0004)  
	float                                              Cache;                                                      // 0x0014   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousVector
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FRigVMFunction_DeltaFromPreviousVector : FRigVMFunction_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Delta;                                                      // 0x0020   (0x0018)  
	FVector                                            PreviousValue;                                              // 0x0038   (0x0018)  
	FVector                                            Cache;                                                      // 0x0050   (0x0018)  
	bool                                               bIsInitialized;                                             // 0x0068   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousQuat
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigVMFunction_DeltaFromPreviousQuat : FRigVMFunction_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FQuat                                              Delta;                                                      // 0x0030   (0x0020)  
	FQuat                                              PreviousValue;                                              // 0x0050   (0x0020)  
	FQuat                                              Cache;                                                      // 0x0070   (0x0020)  
	bool                                               bIsInitialized;                                             // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0091   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_DeltaFromPreviousTransform
/// Size: 0x01A0 (416 bytes) (0x000008 - 0x0001A0) align 16 MaxSize: 0x01A0
struct FRigVMFunction_DeltaFromPreviousTransform : FRigVMFunction_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FTransform                                         Delta;                                                      // 0x0070   (0x0060)  
	FTransform                                         PreviousValue;                                              // 0x00D0   (0x0060)  
	FTransform                                         Cache;                                                      // 0x0130   (0x0060)  
	bool                                               bIsInitialized;                                             // 0x0190   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0191   (0x000F)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_KalmanFloat
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigVMFunction_KalmanFloat : FRigVMFunction_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0018   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_KalmanVector
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigVMFunction_KalmanVector : FRigVMFunction_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	int32_t                                            BufferSize;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0028   (0x0018)  
	TArray<FVector>                                    Buffer;                                                     // 0x0040   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_KalmanTransform
/// Size: 0x0100 (256 bytes) (0x000008 - 0x000100) align 16 MaxSize: 0x0100
struct FRigVMFunction_KalmanTransform : FRigVMFunction_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	int32_t                                            BufferSize;                                                 // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0074   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0060)  
	TArray<FTransform>                                 Buffer;                                                     // 0x00E0   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x00F4   (0x000C)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_Timeline
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigVMFunction_Timeline : FRigVMFunction_SimBase
{ 
	float                                              Speed;                                                      // 0x0008   (0x0004)  
	float                                              time;                                                       // 0x000C   (0x0004)  
	float                                              AccumulatedValue;                                           // 0x0010   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_TimeLoop
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVMFunction_TimeLoop : FRigVMFunction_SimBase
{ 
	float                                              Speed;                                                      // 0x0008   (0x0004)  
	float                                              Duration;                                                   // 0x000C   (0x0004)  
	bool                                               Normalize;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Absolute;                                                   // 0x0014   (0x0004)  
	float                                              Relative;                                                   // 0x0018   (0x0004)  
	float                                              FlipFlop;                                                   // 0x001C   (0x0004)  
	bool                                               Even;                                                       // 0x0020   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	float                                              AccumulatedAbsolute;                                        // 0x0024   (0x0004)  
	float                                              AccumulatedRelative;                                        // 0x0028   (0x0004)  
	int32_t                                            NumIterations;                                              // 0x002C   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_TimeOffsetFloat
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRigVMFunction_TimeOffsetFloat : FRigVMFunction_SimBase
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              SecondsAgo;                                                 // 0x000C   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0010   (0x0004)  
	float                                              TimeRange;                                                  // 0x0014   (0x0004)  
	float                                              Result;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<float>                                      Buffer;                                                     // 0x0020   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0030   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0040   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0044   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_TimeOffsetVector
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 8 MaxSize: 0x0070
struct FRigVMFunction_TimeOffsetVector : FRigVMFunction_SimBase
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	float                                              SecondsAgo;                                                 // 0x0020   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0024   (0x0004)  
	float                                              TimeRange;                                                  // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0030   (0x0018)  
	TArray<FVector>                                    Buffer;                                                     // 0x0048   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x0058   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0068   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x006C   (0x0004)  
};

/// Struct /Script/RigVM.RigVMFunction_TimeOffsetTransform
/// Size: 0x0110 (272 bytes) (0x000008 - 0x000110) align 16 MaxSize: 0x0110
struct FRigVMFunction_TimeOffsetTransform : FRigVMFunction_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	float                                              SecondsAgo;                                                 // 0x0070   (0x0004)  
	int32_t                                            BufferSize;                                                 // 0x0074   (0x0004)  
	float                                              TimeRange;                                                  // 0x0078   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FTransform                                         Result;                                                     // 0x0080   (0x0060)  
	TArray<FTransform>                                 Buffer;                                                     // 0x00E0   (0x0010)  
	TArray<float>                                      DeltaTimes;                                                 // 0x00F0   (0x0010)  
	int32_t                                            LastInsertIndex;                                            // 0x0100   (0x0004)  
	int32_t                                            UpperBound;                                                 // 0x0104   (0x0004)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0108   (0x0008)  MISSED
};

/// Struct /Script/RigVM.RigVMFunction_VerletIntegrateVector
/// Size: 0x00D8 (216 bytes) (0x000008 - 0x0000D8) align 8 MaxSize: 0x00D8
struct FRigVMFunction_VerletIntegrateVector : FRigVMFunction_SimBase
{ 
	FVector                                            Target;                                                     // 0x0008   (0x0018)  
	float                                              Strength;                                                   // 0x0020   (0x0004)  
	float                                              Damp;                                                       // 0x0024   (0x0004)  
	float                                              Blend;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	FVector                                            Force;                                                      // 0x0030   (0x0018)  
	FVector                                            position;                                                   // 0x0048   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0060   (0x0018)  
	FVector                                            Acceleration;                                               // 0x0078   (0x0018)  
	FRigVMSimPoint                                     Point;                                                      // 0x0090   (0x0040)  
	bool                                               bInitialized;                                               // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00D1   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FRigVMRuntimeSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigVMDrawInstruction) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(FRigVMDrawContainer) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(URigVMHost) == 0x0180); // 384 bytes (0x000028 - 0x000180)
static_assert(sizeof(FRigVMGraphFunctionIdentifier) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigVMGraphFunctionArgument) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FRigVMExternalVariable) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigVMGraphFunctionHeader) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FRigVMByteCodeEntry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigVMBranchInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigVMByteCode) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigVMFunctionCompilationPropertyDescription) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FRigVMFunctionCompilationPropertyPath) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigVMOperand) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FRigVMFunctionCompilationData) == 0x01C8); // 456 bytes (0x000000 - 0x0001C8)
static_assert(sizeof(FRigVMGraphFunctionData) == 0x02E8); // 744 bytes (0x000000 - 0x0002E8)
static_assert(sizeof(FRigVMGraphFunctionStore) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(URigVMBlueprintGeneratedClass) == 0x03A0); // 928 bytes (0x000370 - 0x0003A0)
static_assert(sizeof(FRigVMUserWorkflow) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(URigVMUserWorkflowOptions) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(URigVMGraphFunctionHost) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FRigVMInstruction) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigVMInstructionArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigVMExtendedExecuteContext) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FRigVMParameter) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(URigVM) == 0x03F0); // 1008 bytes (0x000028 - 0x0003F0)
static_assert(sizeof(URigVMMemoryStorageGeneratorClass) == 0x0260); // 608 bytes (0x000220 - 0x000260)
static_assert(sizeof(URigVMMemoryStorage) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URigVMNativized) == 0x0418); // 1048 bytes (0x0003F0 - 0x000418)
static_assert(sizeof(FRigVMExecuteContext) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FRigVMStruct) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRigVMSimPoint) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigVMDispatchFactory) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigVMUnknownType) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FRigVMStructMutable) == 0x0100); // 256 bytes (0x000008 - 0x000100)
static_assert(sizeof(FRigVMFunction_DebugBaseMutable) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(FRigVMFourPointBezier) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRigVMFunction_DebugBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_MathBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_MathVectorBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_SimBaseMutable) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(FRigVMFunction_SimBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_AnimBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_MathMutableBase) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(FRigVMMemoryStatistics) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigVMByteCodeStatistics) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRigVMStatistics) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRigVMBaseOp) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRigVMExecuteOp) == 0x0004); // 4 bytes (0x000001 - 0x000004)
static_assert(sizeof(FRigVMUnaryOp) == 0x0008); // 8 bytes (0x000001 - 0x000008)
static_assert(sizeof(FRigVMBinaryOp) == 0x000E); // 14 bytes (0x000001 - 0x00000E)
static_assert(sizeof(FRigVMTernaryOp) == 0x0014); // 20 bytes (0x000001 - 0x000014)
static_assert(sizeof(FRigVMQuaternaryOp) == 0x001A); // 26 bytes (0x000001 - 0x00001A)
static_assert(sizeof(FRigVMQuinaryOp) == 0x0020); // 32 bytes (0x000001 - 0x000020)
static_assert(sizeof(FRigVMSenaryOp) == 0x0026); // 38 bytes (0x000001 - 0x000026)
static_assert(sizeof(FRigVMCopyOp) == 0x0012); // 18 bytes (0x000001 - 0x000012)
static_assert(sizeof(FRigVMComparisonOp) == 0x0014); // 20 bytes (0x000001 - 0x000014)
static_assert(sizeof(FRigVMJumpOp) == 0x0008); // 8 bytes (0x000001 - 0x000008)
static_assert(sizeof(FRigVMJumpIfOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMChangeTypeOp) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMInvokeEntryOp) == 0x000C); // 12 bytes (0x000001 - 0x00000C)
static_assert(sizeof(FRigVMJumpToBranchOp) == 0x000C); // 12 bytes (0x000008 - 0x00000C)
static_assert(sizeof(FRigVMBreakpoint) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigVMDebugInfo) == 0x00F8); // 248 bytes (0x000000 - 0x0000F8)
static_assert(sizeof(FRigVMDrawInterface) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMSlice) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigVMRegister) == 0x0024); // 36 bytes (0x000000 - 0x000024)
static_assert(sizeof(FRigVMRegisterOffset) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRigVMMemoryContainer) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FRigVMTemplateArgumentType) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigVMFunction_AnimEasingType) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_AnimEasing) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_AnimEvalRichCurve) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigVMFunction_AnimRichCurve) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigVMFunction_GetDeltaTime) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_GetWorldTime) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_FramesToSeconds) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_SecondsToFrames) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_DebugLine) == 0x01C0); // 448 bytes (0x000100 - 0x0001C0)
static_assert(sizeof(FRigVMFunction_DebugLineNoSpace) == 0x01C0); // 448 bytes (0x000100 - 0x0001C0)
static_assert(sizeof(FRigVMFunction_DebugLineStrip) == 0x01A0); // 416 bytes (0x000100 - 0x0001A0)
static_assert(sizeof(FRigVMFunction_DebugLineStripNoSpace) == 0x01A0); // 416 bytes (0x000100 - 0x0001A0)
static_assert(sizeof(FRigVMFunction_DebugPoint) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FRigVMFunction_DebugPointMutable) == 0x01B0); // 432 bytes (0x000100 - 0x0001B0)
static_assert(sizeof(FRigVMFunction_DebugRectangle) == 0x01F0); // 496 bytes (0x000100 - 0x0001F0)
static_assert(sizeof(FRigVMFunction_DebugRectangleNoSpace) == 0x01F0); // 496 bytes (0x000100 - 0x0001F0)
static_assert(sizeof(FRigVMFunction_DebugArc) == 0x0200); // 512 bytes (0x000100 - 0x000200)
static_assert(sizeof(FRigVMFunction_DebugArcNoSpace) == 0x0200); // 512 bytes (0x000100 - 0x000200)
static_assert(sizeof(FRigVMFunction_DebugTransform) == 0x0110); // 272 bytes (0x000008 - 0x000110)
static_assert(sizeof(FRigVMFunction_DebugTransformMutable) == 0x0200); // 512 bytes (0x000100 - 0x000200)
static_assert(sizeof(FRigVMFunction_DebugTransformMutableNoSpace) == 0x01F0); // 496 bytes (0x000100 - 0x0001F0)
static_assert(sizeof(FRigVMFunction_DebugTransformArrayMutable_WorkData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigVMFunction_DebugTransformArrayMutable) == 0x01C0); // 448 bytes (0x000100 - 0x0001C0)
static_assert(sizeof(FRigVMFunction_DebugTransformArrayMutableNoSpace) == 0x01B0); // 432 bytes (0x000100 - 0x0001B0)
static_assert(sizeof(FRigVMFunction_VisualDebugVector) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigVMFunction_VisualDebugVectorNoSpace) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_VisualDebugQuat) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_VisualDebugQuatNoSpace) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_VisualDebugTransform) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigVMFunction_VisualDebugTransformNoSpace) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigVMFunction_ForLoopCount) == 0x0210); // 528 bytes (0x000100 - 0x000210)
static_assert(sizeof(FRigVMFunction_UserDefinedEvent) == 0x0110); // 272 bytes (0x000008 - 0x000110)
static_assert(sizeof(FRigVMFunction_MathBoolBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_MathBoolConstant) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolUnaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolBinaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolBinaryAggregateOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolMake) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolConstTrue) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolConstFalse) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolNot) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolAnd) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolNand) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolNand2) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolOr) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolEquals) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolNotEquals) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolToggled) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolFlipFlop) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathBoolOnce) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathBoolToFloat) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathBoolToInteger) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathColorBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_MathColorBinaryOp) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathColorBinaryAggregateOp) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathColorMake) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_MathColorFromFloat) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathColorFromDouble) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathColorAdd) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathColorSub) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathColorMul) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathColorLerp) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathDoubleBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_MathDoubleConstant) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathDoubleUnaryOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleBinaryOp) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleBinaryAggregateOp) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleMake) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathDoubleConstPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathDoubleConstHalfPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathDoubleConstTwoPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathDoubleConstE) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathDoubleAdd) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleSub) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleMul) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleDiv) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleMod) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleMin) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleMax) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoublePow) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleSqrt) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleNegate) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleAbs) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleFloor) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleCeil) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleRound) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleToInt) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleSign) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleClamp) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_MathDoubleLerp) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_MathDoubleRemap) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathDoubleEquals) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleNotEquals) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleGreater) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleLess) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleGreaterEqual) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleLessEqual) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleIsNearlyZero) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleIsNearlyEqual) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_MathDoubleDeg) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleRad) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleSin) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleCos) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleTan) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleAsin) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleAcos) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleAtan) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleLawOfCosine) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathDoubleExponential) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathDoubleArraySum) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathDoubleArrayAverage) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathFloatBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_MathFloatConstant) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatUnaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatBinaryOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatBinaryAggregateOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatMake) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatConstPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatConstHalfPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatConstTwoPi) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatConstE) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatAdd) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatSub) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatMul) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatDiv) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatMod) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatMin) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatMax) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatPow) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatSqrt) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatNegate) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatAbs) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatFloor) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatCeil) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatRound) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatToInt) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatSign) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatClamp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatLerp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatRemap) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_MathFloatEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatNotEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatGreater) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatLess) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatGreaterEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatLessEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatIsNearlyZero) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatIsNearlyEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatSelectBool) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathFloatDeg) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatRad) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatSin) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatCos) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatTan) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatAsin) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatAcos) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatAtan) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatLawOfCosine) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_MathFloatExponential) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathFloatArraySum) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathFloatArrayAverage) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathIntBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_MathIntUnaryOp) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathIntBinaryOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntBinaryAggregateOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntMake) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathIntAdd) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntSub) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntMul) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntDiv) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntMod) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntMin) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntMax) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntPow) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntNegate) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathIntAbs) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathIntToFloat) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathIntToDouble) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntSign) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathIntClamp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntNotEquals) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntGreater) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntLess) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntGreaterEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntLessEqual) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_MathIntArraySum) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathIntArrayAverage) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathMatrixBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_MathMatrixUnaryOp) == 0x0110); // 272 bytes (0x000008 - 0x000110)
static_assert(sizeof(FRigVMFunction_MathMatrixBinaryOp) == 0x0190); // 400 bytes (0x000008 - 0x000190)
static_assert(sizeof(FRigVMFunction_MathMatrixBinaryAggregateOp) == 0x0190); // 400 bytes (0x000008 - 0x000190)
static_assert(sizeof(FRigVMFunction_MathMatrixToTransform) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FRigVMFunction_MathMatrixFromTransform) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FRigVMFunction_MathMatrixFromTransformV2) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FRigVMFunction_MathMatrixToVectors) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FRigVMFunction_MathMatrixFromVectors) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FRigVMFunction_MathMatrixMul) == 0x0190); // 400 bytes (0x000190 - 0x000190)
static_assert(sizeof(FRigVMFunction_MathMatrixInverse) == 0x0110); // 272 bytes (0x000110 - 0x000110)
static_assert(sizeof(FRigVMFunction_MathQuaternionBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_MathQuaternionUnaryOp) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathQuaternionBinaryOp) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigVMFunction_MathQuaternionBinaryAggregateOp) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigVMFunction_MathQuaternionMake) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathQuaternionFromAxisAndAngle) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathQuaternionFromEuler) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathQuaternionFromRotator) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathQuaternionFromRotatorV2) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathQuaternionFromTwoVectors) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigVMFunction_MathQuaternionToAxisAndAngle) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathQuaternionScale) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathQuaternionScaleV2) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigVMFunction_MathQuaternionToEuler) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathQuaternionToRotator) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathQuaternionMul) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(FRigVMFunction_MathQuaternionInverse) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathQuaternionSlerp) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigVMFunction_MathQuaternionEquals) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigVMFunction_MathQuaternionNotEquals) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigVMFunction_MathQuaternionSelectBool) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigVMFunction_MathQuaternionDot) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigVMFunction_MathQuaternionUnit) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathQuaternionRotateVector) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigVMFunction_MathQuaternionGetAxis) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathQuaternionSwingTwist) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigVMFunction_MathQuaternionRotationOrder) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigVMFunction_MathQuaternionMakeRelative) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigVMFunction_MathQuaternionMakeAbsolute) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigVMFunction_MathQuaternionMirrorTransform) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateQuatWorkData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateVectorWorkData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateQuatBase) == 0x00F0); // 240 bytes (0x000008 - 0x0000F0)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateVectorBase) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FMathRBFInterpolateQuatFloat_Target) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateQuatFloat) == 0x0110); // 272 bytes (0x0000F0 - 0x000110)
static_assert(sizeof(FMathRBFInterpolateQuatVector_Target) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateQuatVector) == 0x0120); // 288 bytes (0x0000F0 - 0x000120)
static_assert(sizeof(FMathRBFInterpolateQuatColor_Target) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateQuatColor) == 0x0110); // 272 bytes (0x0000F0 - 0x000110)
static_assert(sizeof(FMathRBFInterpolateQuatQuat_Target) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateQuatQuat) == 0x0120); // 288 bytes (0x0000F0 - 0x000120)
static_assert(sizeof(FMathRBFInterpolateQuatXform_Target) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateQuatXform) == 0x0160); // 352 bytes (0x0000F0 - 0x000160)
static_assert(sizeof(FMathRBFInterpolateVectorFloat_Target) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateVectorFloat) == 0x00E0); // 224 bytes (0x0000C0 - 0x0000E0)
static_assert(sizeof(FMathRBFInterpolateVectorVector_Target) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateVectorVector) == 0x00F0); // 240 bytes (0x0000C0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateVectorColor_Target) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateVectorColor) == 0x00E0); // 224 bytes (0x0000C0 - 0x0000E0)
static_assert(sizeof(FMathRBFInterpolateVectorQuat_Target) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateVectorQuat) == 0x00F0); // 240 bytes (0x0000C0 - 0x0000F0)
static_assert(sizeof(FMathRBFInterpolateVectorXform_Target) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FRigVMFunction_MathRBFInterpolateVectorXform) == 0x0130); // 304 bytes (0x0000C0 - 0x000130)
static_assert(sizeof(FRigVMFunction_MathTransformBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_MathTransformMutableBase) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(FRigVMFunction_MathTransformUnaryOp) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigVMFunction_MathTransformBinaryOp) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FRigVMFunction_MathTransformBinaryAggregateOp) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FRigVMFunction_MathTransformMake) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FRigVMFunction_MathTransformFromEulerTransform) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigVMFunction_MathTransformFromEulerTransformV2) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigVMFunction_MathTransformToEulerTransform) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FRigVMFunction_MathTransformMul) == 0x0130); // 304 bytes (0x000130 - 0x000130)
static_assert(sizeof(FRigVMFunction_MathTransformMakeRelative) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FRigVMFunction_MathTransformMakeAbsolute) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FRigVMFunction_MathTransformAccumulateArray) == 0x0190); // 400 bytes (0x000100 - 0x000190)
static_assert(sizeof(FRigVMFunction_MathTransformInverse) == 0x00D0); // 208 bytes (0x0000D0 - 0x0000D0)
static_assert(sizeof(FRigVMFunction_MathTransformLerp) == 0x0140); // 320 bytes (0x000008 - 0x000140)
static_assert(sizeof(FRigVMFunction_MathTransformSelectBool) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FRigVMFunction_MathTransformRotateVector) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigVMFunction_MathTransformTransformVector) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigVMFunction_MathTransformFromSRT) == 0x0110); // 272 bytes (0x000008 - 0x000110)
static_assert(sizeof(FRigVMFunction_MathTransformArrayToSRT) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigVMFunction_MathTransformClampSpatially) == 0x0160); // 352 bytes (0x000008 - 0x000160)
static_assert(sizeof(FRigVMFunction_MathTransformMirrorTransform) == 0x0140); // 320 bytes (0x000008 - 0x000140)
static_assert(sizeof(FRigVMFunction_MathVectorUnaryOp) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathVectorBinaryOp) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorBinaryAggregateOp) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorMake) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigVMFunction_MathVectorFromFloat) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_MathVectorFromDouble) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_MathVectorAdd) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorSub) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorMul) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorScale) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathVectorDiv) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorMod) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorMin) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorMax) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorNegate) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathVectorAbs) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathVectorFloor) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathVectorCeil) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathVectorRound) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathVectorSign) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathVectorClamp) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRigVMFunction_MathVectorLerp) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigVMFunction_MathVectorRemap) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigVMFunction_MathVectorEquals) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathVectorNotEquals) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathVectorIsNearlyZero) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_MathVectorIsNearlyEqual) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathVectorSelectBool) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigVMFunction_MathVectorDeg) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathVectorRad) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathVectorLengthSquared) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_MathVectorLength) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_MathVectorDistance) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathVectorCross) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorDot) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathVectorUnit) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigVMFunction_MathVectorSetLength) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathVectorClampLength) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathVectorMirror) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorAngle) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathVectorParallel) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathVectorOrthogonal) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_MathVectorBezierFourPoint) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigVMFunction_MathVectorMakeBezierFourPoint) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FRigVMFunction_MathVectorClampSpatially) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FRigVMFunction_MathIntersectPlane) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FRigVMFunction_MathDistanceToPlane) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigVMFunction_MathVectorMakeRelative) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorMakeAbsolute) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigVMFunction_MathVectorMirrorTransform) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigVMFunction_MathVectorArraySum) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigVMFunction_MathVectorArrayAverage) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigVMFunction_NoiseFloat) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_NoiseDouble) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_NoiseVector) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FRigVMFunction_NoiseVector2) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigVMFunction_RandomFloat) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigVMFunction_RandomVector) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigVMMirrorSettings) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigVMDispatch_CoreBase) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayBase) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayBaseMutable) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayMake) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayReset) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayGetNum) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArraySetNum) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayGetAtIndex) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArraySetAtIndex) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayAdd) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayInsert) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayRemove) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayReverse) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayFind) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayAppend) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayClone) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayUnion) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayDifference) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayIntersection) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_ArrayIterator) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_CoreEquals) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_CoreNotEquals) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_If) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_Print) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_SelectInt32) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMDispatch_SwitchInt32) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_ControlFlowBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_ControlFlowBranch) == 0x03F0); // 1008 bytes (0x000008 - 0x0003F0)
static_assert(sizeof(FRigVMFunction_NameBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_NameConcat) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_NameTruncate) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_NameReplace) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_EndsWith) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_StartsWith) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_Contains) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_StringBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_StringConcat) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigVMFunction_StringTruncate) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigVMFunction_StringReplace) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigVMFunction_StringEndsWith) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigVMFunction_StringStartsWith) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigVMFunction_StringContains) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigVMFunction_StringLength) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_StringTrimWhitespace) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_StringToUppercase) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_StringToLowercase) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_StringReverse) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_StringLeft) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigVMFunction_StringRight) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigVMFunction_StringMiddle) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigVMFunction_StringFind) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigVMFunction_StringSplit) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigVMFunction_StringJoin) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigVMFunction_StringPadInteger) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigDispatch_ToString) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigDispatch_FromString) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigVMFunction_AccumulateBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigVMFunction_AccumulateFloatAdd) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_AccumulateVectorAdd) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FRigVMFunction_AccumulateFloatMul) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_AccumulateVectorMul) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FRigVMFunction_AccumulateQuatMul) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigVMFunction_AccumulateTransformMul) == 0x01B0); // 432 bytes (0x000008 - 0x0001B0)
static_assert(sizeof(FRigVMFunction_AccumulateFloatLerp) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigVMFunction_AccumulateVectorLerp) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FRigVMFunction_AccumulateQuatLerp) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigVMFunction_AccumulateTransformLerp) == 0x01B0); // 432 bytes (0x000008 - 0x0001B0)
static_assert(sizeof(FRigVMFunction_AccumulateFloatRange) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_AccumulateVectorRange) == 0x0088); // 136 bytes (0x000008 - 0x000088)
static_assert(sizeof(FRigVMFunction_AlphaInterp) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FRigVMFunction_AlphaInterpVector) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigVMFunction_AlphaInterpQuat) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FRigVMFunction_DeltaFromPreviousFloat) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigVMFunction_DeltaFromPreviousVector) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigVMFunction_DeltaFromPreviousQuat) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigVMFunction_DeltaFromPreviousTransform) == 0x01A0); // 416 bytes (0x000008 - 0x0001A0)
static_assert(sizeof(FRigVMFunction_KalmanFloat) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigVMFunction_KalmanVector) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigVMFunction_KalmanTransform) == 0x0100); // 256 bytes (0x000008 - 0x000100)
static_assert(sizeof(FRigVMFunction_Timeline) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigVMFunction_TimeLoop) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigVMFunction_TimeOffsetFloat) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigVMFunction_TimeOffsetVector) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigVMFunction_TimeOffsetTransform) == 0x0110); // 272 bytes (0x000008 - 0x000110)
static_assert(sizeof(FRigVMFunction_VerletIntegrateVector) == 0x00D8); // 216 bytes (0x000008 - 0x0000D8)
static_assert(offsetof(FRigVMDrawInstruction, Name) == 0x0000);
static_assert(offsetof(FRigVMDrawInstruction, PrimitiveType) == 0x0008);
static_assert(offsetof(FRigVMDrawInstruction, Positions) == 0x0010);
static_assert(offsetof(FRigVMDrawInstruction, Color) == 0x0020);
static_assert(offsetof(FRigVMDrawInstruction, Transform) == 0x0040);
static_assert(offsetof(FRigVMDrawContainer, Instructions) == 0x0008);
static_assert(offsetof(URigVMHost, VMRuntimeSettings) == 0x0030);
static_assert(offsetof(URigVMHost, VM) == 0x0058);
static_assert(offsetof(URigVMHost, DrawContainer) == 0x0060);
static_assert(offsetof(URigVMHost, EventQueue) == 0x0090);
static_assert(offsetof(URigVMHost, AssetUserData) == 0x0130);
static_assert(offsetof(FRigVMGraphFunctionIdentifier, LibraryNode) == 0x0000);
static_assert(offsetof(FRigVMGraphFunctionIdentifier, HostObject) == 0x0020);
static_assert(offsetof(FRigVMGraphFunctionArgument, Name) == 0x0000);
static_assert(offsetof(FRigVMGraphFunctionArgument, DisplayName) == 0x0008);
static_assert(offsetof(FRigVMGraphFunctionArgument, CPPType) == 0x0010);
static_assert(offsetof(FRigVMGraphFunctionArgument, CPPTypeObject) == 0x0018);
static_assert(offsetof(FRigVMGraphFunctionArgument, Direction) == 0x0049);
static_assert(offsetof(FRigVMGraphFunctionArgument, DefaultValue) == 0x0050);
static_assert(offsetof(FRigVMGraphFunctionArgument, PathToTooltip) == 0x0068);
static_assert(offsetof(FRigVMGraphFunctionHeader, LibraryPointer) == 0x0000);
static_assert(offsetof(FRigVMGraphFunctionHeader, Name) == 0x0040);
static_assert(offsetof(FRigVMGraphFunctionHeader, NodeTitle) == 0x0048);
static_assert(offsetof(FRigVMGraphFunctionHeader, NodeColor) == 0x0058);
static_assert(offsetof(FRigVMGraphFunctionHeader, Tooltip) == 0x0068);
static_assert(offsetof(FRigVMGraphFunctionHeader, Category) == 0x0080);
static_assert(offsetof(FRigVMGraphFunctionHeader, Keywords) == 0x0090);
static_assert(offsetof(FRigVMGraphFunctionHeader, Arguments) == 0x00A0);
static_assert(offsetof(FRigVMGraphFunctionHeader, Dependencies) == 0x00B0);
static_assert(offsetof(FRigVMGraphFunctionHeader, ExternalVariables) == 0x0100);
static_assert(offsetof(FRigVMByteCodeEntry, Name) == 0x0000);
static_assert(offsetof(FRigVMBranchInfo, Label) == 0x0004);
static_assert(offsetof(FRigVMByteCode, ByteCode) == 0x0000);
static_assert(offsetof(FRigVMByteCode, Entries) == 0x0018);
static_assert(offsetof(FRigVMByteCode, BranchInfos) == 0x0028);
static_assert(offsetof(FRigVMFunctionCompilationPropertyDescription, Name) == 0x0000);
static_assert(offsetof(FRigVMFunctionCompilationPropertyDescription, CPPType) == 0x0008);
static_assert(offsetof(FRigVMFunctionCompilationPropertyDescription, CPPTypeObject) == 0x0018);
static_assert(offsetof(FRigVMFunctionCompilationPropertyDescription, DefaultValue) == 0x0048);
static_assert(offsetof(FRigVMFunctionCompilationPropertyPath, HeadCPPType) == 0x0008);
static_assert(offsetof(FRigVMFunctionCompilationPropertyPath, SegmentPath) == 0x0018);
static_assert(offsetof(FRigVMOperand, MemoryType) == 0x0000);
static_assert(offsetof(FRigVMFunctionCompilationData, ByteCode) == 0x0000);
static_assert(offsetof(FRigVMFunctionCompilationData, FunctionNames) == 0x0090);
static_assert(offsetof(FRigVMFunctionCompilationData, WorkPropertyDescriptions) == 0x00A0);
static_assert(offsetof(FRigVMFunctionCompilationData, WorkPropertyPathDescriptions) == 0x00B0);
static_assert(offsetof(FRigVMFunctionCompilationData, LiteralPropertyDescriptions) == 0x00C0);
static_assert(offsetof(FRigVMFunctionCompilationData, LiteralPropertyPathDescriptions) == 0x00D0);
static_assert(offsetof(FRigVMFunctionCompilationData, DebugPropertyDescriptions) == 0x00E0);
static_assert(offsetof(FRigVMFunctionCompilationData, DebugPropertyPathDescriptions) == 0x00F0);
static_assert(offsetof(FRigVMFunctionCompilationData, ExternalPropertyDescriptions) == 0x0100);
static_assert(offsetof(FRigVMFunctionCompilationData, ExternalPropertyPathDescriptions) == 0x0110);
static_assert(offsetof(FRigVMFunctionCompilationData, ExternalRegisterIndexToVariable) == 0x0120);
static_assert(offsetof(FRigVMFunctionCompilationData, Operands) == 0x0170);
static_assert(offsetof(FRigVMGraphFunctionData, Header) == 0x0000);
static_assert(offsetof(FRigVMGraphFunctionData, CompilationData) == 0x0110);
static_assert(offsetof(FRigVMGraphFunctionData, SerializedCollapsedNode) == 0x02D8);
static_assert(offsetof(FRigVMGraphFunctionStore, PublicFunctions) == 0x0000);
static_assert(offsetof(FRigVMGraphFunctionStore, PrivateFunctions) == 0x0010);
static_assert(offsetof(URigVMBlueprintGeneratedClass, GraphFunctionStore) == 0x0378);
static_assert(offsetof(FRigVMUserWorkflow, Title) == 0x0008);
static_assert(offsetof(FRigVMUserWorkflow, Tooltip) == 0x0018);
static_assert(offsetof(FRigVMUserWorkflow, Type) == 0x0028);
static_assert(offsetof(FRigVMUserWorkflow, OptionsClass) == 0x0050);
static_assert(offsetof(URigVMUserWorkflowOptions, Subject) == 0x0028);
static_assert(offsetof(URigVMUserWorkflowOptions, Workflow) == 0x0030);
static_assert(offsetof(FRigVMInstruction, OpCode) == 0x0008);
static_assert(offsetof(FRigVMInstructionArray, Instructions) == 0x0000);
static_assert(offsetof(FRigVMParameter, Type) == 0x0000);
static_assert(offsetof(FRigVMParameter, Name) == 0x0004);
static_assert(offsetof(FRigVMParameter, CPPType) == 0x0010);
static_assert(offsetof(FRigVMParameter, ScriptStruct) == 0x0020);
static_assert(offsetof(FRigVMParameter, ScriptStructPath) == 0x0028);
static_assert(offsetof(URigVM, WorkMemoryStorageObject) == 0x0028);
static_assert(offsetof(URigVM, LiteralMemoryStorageObject) == 0x0030);
static_assert(offsetof(URigVM, DebugMemoryStorageObject) == 0x0038);
static_assert(offsetof(URigVM, ByteCodeStorage) == 0x0060);
static_assert(offsetof(URigVM, Instructions) == 0x00F8);
static_assert(offsetof(URigVM, Context) == 0x0108);
static_assert(offsetof(URigVM, FunctionNamesStorage) == 0x0218);
static_assert(offsetof(URigVM, Parameters) == 0x0260);
static_assert(offsetof(URigVM, ParametersNameMap) == 0x0270);
static_assert(offsetof(URigVM, DeferredVMToCopy) == 0x03A8);
static_assert(offsetof(FRigVMSimPoint, position) == 0x0010);
static_assert(offsetof(FRigVMSimPoint, LinearVelocity) == 0x0028);
static_assert(offsetof(FRigVMStructMutable, ExecuteContext) == 0x0010);
static_assert(offsetof(FRigVMFourPointBezier, A) == 0x0000);
static_assert(offsetof(FRigVMFourPointBezier, B) == 0x0018);
static_assert(offsetof(FRigVMFourPointBezier, C) == 0x0030);
static_assert(offsetof(FRigVMFourPointBezier, D) == 0x0048);
static_assert(offsetof(FRigVMStatistics, LiteralMemory) == 0x0008);
static_assert(offsetof(FRigVMStatistics, WorkMemory) == 0x0014);
static_assert(offsetof(FRigVMStatistics, DebugMemory) == 0x0020);
static_assert(offsetof(FRigVMStatistics, ByteCode) == 0x0030);
static_assert(offsetof(FRigVMRegister, Type) == 0x0000);
static_assert(offsetof(FRigVMRegister, Name) == 0x0014);
static_assert(offsetof(FRigVMRegisterOffset, Segments) == 0x0000);
static_assert(offsetof(FRigVMRegisterOffset, Type) == 0x0010);
static_assert(offsetof(FRigVMRegisterOffset, CPPType) == 0x0014);
static_assert(offsetof(FRigVMRegisterOffset, ScriptStruct) == 0x0020);
static_assert(offsetof(FRigVMRegisterOffset, ParentScriptStruct) == 0x0028);
static_assert(offsetof(FRigVMRegisterOffset, CachedSegmentPath) == 0x0038);
static_assert(offsetof(FRigVMMemoryContainer, MemoryType) == 0x0001);
static_assert(offsetof(FRigVMMemoryContainer, Registers) == 0x0008);
static_assert(offsetof(FRigVMMemoryContainer, RegisterOffsets) == 0x0018);
static_assert(offsetof(FRigVMMemoryContainer, Data) == 0x0028);
static_assert(offsetof(FRigVMMemoryContainer, ScriptStructs) == 0x0038);
static_assert(offsetof(FRigVMMemoryContainer, NameMap) == 0x0048);
static_assert(offsetof(FRigVMTemplateArgumentType, CPPType) == 0x0000);
static_assert(offsetof(FRigVMTemplateArgumentType, CPPTypeObject) == 0x0008);
static_assert(offsetof(FRigVMFunction_AnimEasingType, Type) == 0x0008);
static_assert(offsetof(FRigVMFunction_AnimEasing, Type) == 0x000C);
static_assert(offsetof(FRigVMFunction_AnimEvalRichCurve, Curve) == 0x0010);
static_assert(offsetof(FRigVMFunction_AnimRichCurve, Curve) == 0x0008);
static_assert(offsetof(FRigVMFunction_DebugLine, A) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugLine, B) == 0x0118);
static_assert(offsetof(FRigVMFunction_DebugLine, Color) == 0x0130);
static_assert(offsetof(FRigVMFunction_DebugLine, Space) == 0x0144);
static_assert(offsetof(FRigVMFunction_DebugLine, WorldOffset) == 0x0150);
static_assert(offsetof(FRigVMFunction_DebugLineNoSpace, A) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugLineNoSpace, B) == 0x0118);
static_assert(offsetof(FRigVMFunction_DebugLineNoSpace, Color) == 0x0130);
static_assert(offsetof(FRigVMFunction_DebugLineNoSpace, WorldOffset) == 0x0150);
static_assert(offsetof(FRigVMFunction_DebugLineStrip, Points) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugLineStrip, Color) == 0x0110);
static_assert(offsetof(FRigVMFunction_DebugLineStrip, Space) == 0x0124);
static_assert(offsetof(FRigVMFunction_DebugLineStrip, WorldOffset) == 0x0130);
static_assert(offsetof(FRigVMFunction_DebugLineStripNoSpace, Points) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugLineStripNoSpace, Color) == 0x0110);
static_assert(offsetof(FRigVMFunction_DebugLineStripNoSpace, WorldOffset) == 0x0130);
static_assert(offsetof(FRigVMFunction_DebugPoint, Vector) == 0x0008);
static_assert(offsetof(FRigVMFunction_DebugPoint, Mode) == 0x0020);
static_assert(offsetof(FRigVMFunction_DebugPoint, Color) == 0x0024);
static_assert(offsetof(FRigVMFunction_DebugPoint, Space) == 0x003C);
static_assert(offsetof(FRigVMFunction_DebugPoint, WorldOffset) == 0x0050);
static_assert(offsetof(FRigVMFunction_DebugPointMutable, Vector) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugPointMutable, Mode) == 0x0118);
static_assert(offsetof(FRigVMFunction_DebugPointMutable, Color) == 0x011C);
static_assert(offsetof(FRigVMFunction_DebugPointMutable, Space) == 0x0134);
static_assert(offsetof(FRigVMFunction_DebugPointMutable, WorldOffset) == 0x0140);
static_assert(offsetof(FRigVMFunction_DebugRectangle, Transform) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugRectangle, Color) == 0x0160);
static_assert(offsetof(FRigVMFunction_DebugRectangle, Space) == 0x0178);
static_assert(offsetof(FRigVMFunction_DebugRectangle, WorldOffset) == 0x0180);
static_assert(offsetof(FRigVMFunction_DebugRectangleNoSpace, Transform) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugRectangleNoSpace, Color) == 0x0160);
static_assert(offsetof(FRigVMFunction_DebugRectangleNoSpace, WorldOffset) == 0x0180);
static_assert(offsetof(FRigVMFunction_DebugArc, Transform) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugArc, Color) == 0x0160);
static_assert(offsetof(FRigVMFunction_DebugArc, Space) == 0x0184);
static_assert(offsetof(FRigVMFunction_DebugArc, WorldOffset) == 0x0190);
static_assert(offsetof(FRigVMFunction_DebugArcNoSpace, Transform) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugArcNoSpace, Color) == 0x0160);
static_assert(offsetof(FRigVMFunction_DebugArcNoSpace, WorldOffset) == 0x0190);
static_assert(offsetof(FRigVMFunction_DebugTransform, Transform) == 0x0010);
static_assert(offsetof(FRigVMFunction_DebugTransform, Mode) == 0x0070);
static_assert(offsetof(FRigVMFunction_DebugTransform, Color) == 0x0074);
static_assert(offsetof(FRigVMFunction_DebugTransform, Space) == 0x008C);
static_assert(offsetof(FRigVMFunction_DebugTransform, WorldOffset) == 0x00A0);
static_assert(offsetof(FRigVMFunction_DebugTransformMutable, Transform) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugTransformMutable, Mode) == 0x0160);
static_assert(offsetof(FRigVMFunction_DebugTransformMutable, Color) == 0x0164);
static_assert(offsetof(FRigVMFunction_DebugTransformMutable, Space) == 0x017C);
static_assert(offsetof(FRigVMFunction_DebugTransformMutable, WorldOffset) == 0x0190);
static_assert(offsetof(FRigVMFunction_DebugTransformMutableNoSpace, Transform) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugTransformMutableNoSpace, Mode) == 0x0160);
static_assert(offsetof(FRigVMFunction_DebugTransformMutableNoSpace, Color) == 0x0164);
static_assert(offsetof(FRigVMFunction_DebugTransformMutableNoSpace, WorldOffset) == 0x0180);
static_assert(offsetof(FRigVMFunction_DebugTransformArrayMutable_WorkData, DrawTransforms) == 0x0000);
static_assert(offsetof(FRigVMFunction_DebugTransformArrayMutable, Transforms) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugTransformArrayMutable, Mode) == 0x0110);
static_assert(offsetof(FRigVMFunction_DebugTransformArrayMutable, Color) == 0x0114);
static_assert(offsetof(FRigVMFunction_DebugTransformArrayMutable, Space) == 0x012C);
static_assert(offsetof(FRigVMFunction_DebugTransformArrayMutable, WorldOffset) == 0x0140);
static_assert(offsetof(FRigVMFunction_DebugTransformArrayMutable, WorkData) == 0x01A8);
static_assert(offsetof(FRigVMFunction_DebugTransformArrayMutableNoSpace, Transforms) == 0x0100);
static_assert(offsetof(FRigVMFunction_DebugTransformArrayMutableNoSpace, ParentIndices) == 0x0110);
static_assert(offsetof(FRigVMFunction_DebugTransformArrayMutableNoSpace, Mode) == 0x0120);
static_assert(offsetof(FRigVMFunction_DebugTransformArrayMutableNoSpace, Color) == 0x0124);
static_assert(offsetof(FRigVMFunction_DebugTransformArrayMutableNoSpace, WorldOffset) == 0x0140);
static_assert(offsetof(FRigVMFunction_VisualDebugVector, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_VisualDebugVector, Mode) == 0x0021);
static_assert(offsetof(FRigVMFunction_VisualDebugVector, Color) == 0x0024);
static_assert(offsetof(FRigVMFunction_VisualDebugVector, BoneSpace) == 0x003C);
static_assert(offsetof(FRigVMFunction_VisualDebugVectorNoSpace, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_VisualDebugVectorNoSpace, Mode) == 0x0021);
static_assert(offsetof(FRigVMFunction_VisualDebugVectorNoSpace, Color) == 0x0024);
static_assert(offsetof(FRigVMFunction_VisualDebugQuat, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_VisualDebugQuat, BoneSpace) == 0x003C);
static_assert(offsetof(FRigVMFunction_VisualDebugQuatNoSpace, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_VisualDebugTransform, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_VisualDebugTransform, BoneSpace) == 0x007C);
static_assert(offsetof(FRigVMFunction_VisualDebugTransformNoSpace, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_ForLoopCount, BlockToRun) == 0x0100);
static_assert(offsetof(FRigVMFunction_ForLoopCount, Completed) == 0x0120);
static_assert(offsetof(FRigVMFunction_UserDefinedEvent, ExecuteContext) == 0x0010);
static_assert(offsetof(FRigVMFunction_UserDefinedEvent, EventName) == 0x0100);
static_assert(offsetof(FRigVMFunction_MathColorBinaryOp, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathColorBinaryOp, B) == 0x0018);
static_assert(offsetof(FRigVMFunction_MathColorBinaryOp, Result) == 0x0028);
static_assert(offsetof(FRigVMFunction_MathColorBinaryAggregateOp, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathColorBinaryAggregateOp, B) == 0x0018);
static_assert(offsetof(FRigVMFunction_MathColorBinaryAggregateOp, Result) == 0x0028);
static_assert(offsetof(FRigVMFunction_MathColorMake, Result) == 0x0018);
static_assert(offsetof(FRigVMFunction_MathColorFromFloat, Result) == 0x000C);
static_assert(offsetof(FRigVMFunction_MathColorFromDouble, Result) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathColorLerp, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathColorLerp, B) == 0x0018);
static_assert(offsetof(FRigVMFunction_MathColorLerp, Result) == 0x002C);
static_assert(offsetof(FRigVMFunction_MathDoubleArraySum, Array) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathDoubleArrayAverage, Array) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathFloatArraySum, Array) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathFloatArrayAverage, Array) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathIntArraySum, Array) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathIntArrayAverage, Array) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathMatrixUnaryOp, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathMatrixUnaryOp, Result) == 0x0090);
static_assert(offsetof(FRigVMFunction_MathMatrixBinaryOp, A) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathMatrixBinaryOp, B) == 0x0090);
static_assert(offsetof(FRigVMFunction_MathMatrixBinaryOp, Result) == 0x0110);
static_assert(offsetof(FRigVMFunction_MathMatrixBinaryAggregateOp, A) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathMatrixBinaryAggregateOp, B) == 0x0090);
static_assert(offsetof(FRigVMFunction_MathMatrixBinaryAggregateOp, Result) == 0x0110);
static_assert(offsetof(FRigVMFunction_MathMatrixToTransform, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathMatrixToTransform, Result) == 0x0090);
static_assert(offsetof(FRigVMFunction_MathMatrixFromTransform, Transform) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathMatrixFromTransform, Result) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathMatrixFromTransformV2, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathMatrixFromTransformV2, Result) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathMatrixToVectors, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathMatrixToVectors, Origin) == 0x0090);
static_assert(offsetof(FRigVMFunction_MathMatrixToVectors, X) == 0x00A8);
static_assert(offsetof(FRigVMFunction_MathMatrixToVectors, Y) == 0x00C0);
static_assert(offsetof(FRigVMFunction_MathMatrixToVectors, Z) == 0x00D8);
static_assert(offsetof(FRigVMFunction_MathMatrixFromVectors, Origin) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathMatrixFromVectors, X) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathMatrixFromVectors, Y) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathMatrixFromVectors, Z) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathMatrixFromVectors, Result) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathQuaternionUnaryOp, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionUnaryOp, Result) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionBinaryOp, A) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionBinaryOp, B) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionBinaryOp, Result) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathQuaternionBinaryAggregateOp, A) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionBinaryAggregateOp, B) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionBinaryAggregateOp, Result) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathQuaternionMake, Result) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathQuaternionFromAxisAndAngle, Axis) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathQuaternionFromAxisAndAngle, Result) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionFromEuler, Euler) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathQuaternionFromEuler, RotationOrder) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathQuaternionFromEuler, Result) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionFromRotator, Rotator) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathQuaternionFromRotator, Result) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathQuaternionFromRotatorV2, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathQuaternionFromRotatorV2, Result) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathQuaternionFromTwoVectors, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathQuaternionFromTwoVectors, B) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathQuaternionFromTwoVectors, Result) == 0x0040);
static_assert(offsetof(FRigVMFunction_MathQuaternionToAxisAndAngle, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionToAxisAndAngle, Axis) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionScale, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionScaleV2, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionScaleV2, Result) == 0x0040);
static_assert(offsetof(FRigVMFunction_MathQuaternionToEuler, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionToEuler, RotationOrder) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionToEuler, Result) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathQuaternionToRotator, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionToRotator, Result) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionSlerp, A) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionSlerp, B) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionSlerp, Result) == 0x0060);
static_assert(offsetof(FRigVMFunction_MathQuaternionEquals, A) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionEquals, B) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionNotEquals, A) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionNotEquals, B) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionSelectBool, IfTrue) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionSelectBool, IfFalse) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionSelectBool, Result) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathQuaternionDot, A) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionDot, B) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionRotateVector, Transform) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionRotateVector, Vector) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionRotateVector, Result) == 0x0048);
static_assert(offsetof(FRigVMFunction_MathQuaternionGetAxis, Quaternion) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionGetAxis, Axis) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionGetAxis, Result) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathQuaternionSwingTwist, Input) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionSwingTwist, TwistAxis) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionSwingTwist, Swing) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathQuaternionSwingTwist, Twist) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathQuaternionRotationOrder, RotationOrder) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathQuaternionMakeRelative, Global) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionMakeRelative, Parent) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionMakeRelative, Local) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathQuaternionMakeAbsolute, Local) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionMakeAbsolute, Parent) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionMakeAbsolute, Global) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathQuaternionMirrorTransform, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathQuaternionMirrorTransform, MirrorAxis) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathQuaternionMirrorTransform, AxisToFlip) == 0x0031);
static_assert(offsetof(FRigVMFunction_MathQuaternionMirrorTransform, CentralTransform) == 0x0040);
static_assert(offsetof(FRigVMFunction_MathQuaternionMirrorTransform, Result) == 0x00A0);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatBase, Input) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatBase, DistanceFunction) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatBase, SmoothingFunction) == 0x0031);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatBase, TwistAxis) == 0x0040);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatBase, WorkData) == 0x0060);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorBase, Input) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorBase, DistanceFunction) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorBase, SmoothingFunction) == 0x0021);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorBase, WorkData) == 0x0030);
static_assert(offsetof(FMathRBFInterpolateQuatFloat_Target, Target) == 0x0000);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatFloat, Targets) == 0x00F0);
static_assert(offsetof(FMathRBFInterpolateQuatVector_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatVector_Target, Value) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatVector, Targets) == 0x00F0);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatVector, Output) == 0x0100);
static_assert(offsetof(FMathRBFInterpolateQuatColor_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatColor_Target, Value) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatColor, Targets) == 0x00F0);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatColor, Output) == 0x0100);
static_assert(offsetof(FMathRBFInterpolateQuatQuat_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatQuat_Target, Value) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatQuat, Targets) == 0x00F0);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatQuat, Output) == 0x0100);
static_assert(offsetof(FMathRBFInterpolateQuatXform_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateQuatXform_Target, Value) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatXform, Targets) == 0x00F0);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateQuatXform, Output) == 0x0100);
static_assert(offsetof(FMathRBFInterpolateVectorFloat_Target, Target) == 0x0000);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorFloat, Targets) == 0x00C0);
static_assert(offsetof(FMathRBFInterpolateVectorVector_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorVector_Target, Value) == 0x0018);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorVector, Targets) == 0x00C0);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorVector, Output) == 0x00D0);
static_assert(offsetof(FMathRBFInterpolateVectorColor_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorColor_Target, Value) == 0x0018);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorColor, Targets) == 0x00C0);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorColor, Output) == 0x00D0);
static_assert(offsetof(FMathRBFInterpolateVectorQuat_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorQuat_Target, Value) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorQuat, Targets) == 0x00C0);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorQuat, Output) == 0x00D0);
static_assert(offsetof(FMathRBFInterpolateVectorXform_Target, Target) == 0x0000);
static_assert(offsetof(FMathRBFInterpolateVectorXform_Target, Value) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorXform, Targets) == 0x00C0);
static_assert(offsetof(FRigVMFunction_MathRBFInterpolateVectorXform, Output) == 0x00D0);
static_assert(offsetof(FRigVMFunction_MathTransformUnaryOp, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathTransformUnaryOp, Result) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathTransformBinaryOp, A) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathTransformBinaryOp, B) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathTransformBinaryOp, Result) == 0x00D0);
static_assert(offsetof(FRigVMFunction_MathTransformBinaryAggregateOp, A) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathTransformBinaryAggregateOp, B) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathTransformBinaryAggregateOp, Result) == 0x00D0);
static_assert(offsetof(FRigVMFunction_MathTransformMake, Translation) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathTransformMake, Rotation) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathTransformMake, Scale) == 0x0040);
static_assert(offsetof(FRigVMFunction_MathTransformMake, Result) == 0x0060);
static_assert(offsetof(FRigVMFunction_MathTransformFromEulerTransform, EulerTransform) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathTransformFromEulerTransform, Result) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathTransformFromEulerTransformV2, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathTransformFromEulerTransformV2, Result) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathTransformToEulerTransform, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathTransformToEulerTransform, Result) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathTransformMakeRelative, Global) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathTransformMakeRelative, Parent) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathTransformMakeRelative, Local) == 0x00D0);
static_assert(offsetof(FRigVMFunction_MathTransformMakeAbsolute, Local) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathTransformMakeAbsolute, Parent) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathTransformMakeAbsolute, Global) == 0x00D0);
static_assert(offsetof(FRigVMFunction_MathTransformAccumulateArray, Transforms) == 0x0100);
static_assert(offsetof(FRigVMFunction_MathTransformAccumulateArray, TargetSpace) == 0x0110);
static_assert(offsetof(FRigVMFunction_MathTransformAccumulateArray, Root) == 0x0120);
static_assert(offsetof(FRigVMFunction_MathTransformAccumulateArray, ParentIndices) == 0x0180);
static_assert(offsetof(FRigVMFunction_MathTransformLerp, A) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathTransformLerp, B) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathTransformLerp, Result) == 0x00E0);
static_assert(offsetof(FRigVMFunction_MathTransformSelectBool, IfTrue) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathTransformSelectBool, IfFalse) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathTransformSelectBool, Result) == 0x00D0);
static_assert(offsetof(FRigVMFunction_MathTransformRotateVector, Transform) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathTransformRotateVector, Vector) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathTransformRotateVector, Result) == 0x0088);
static_assert(offsetof(FRigVMFunction_MathTransformTransformVector, Transform) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathTransformTransformVector, Location) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathTransformTransformVector, Result) == 0x0088);
static_assert(offsetof(FRigVMFunction_MathTransformFromSRT, Location) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathTransformFromSRT, Rotation) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathTransformFromSRT, RotationOrder) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathTransformFromSRT, Scale) == 0x0040);
static_assert(offsetof(FRigVMFunction_MathTransformFromSRT, Transform) == 0x0060);
static_assert(offsetof(FRigVMFunction_MathTransformFromSRT, EulerTransform) == 0x00C0);
static_assert(offsetof(FRigVMFunction_MathTransformArrayToSRT, Transforms) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathTransformArrayToSRT, Translations) == 0x0018);
static_assert(offsetof(FRigVMFunction_MathTransformArrayToSRT, Rotations) == 0x0028);
static_assert(offsetof(FRigVMFunction_MathTransformArrayToSRT, Scales) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathTransformClampSpatially, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathTransformClampSpatially, Axis) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathTransformClampSpatially, Type) == 0x0071);
static_assert(offsetof(FRigVMFunction_MathTransformClampSpatially, Space) == 0x0080);
static_assert(offsetof(FRigVMFunction_MathTransformClampSpatially, DebugColor) == 0x00E4);
static_assert(offsetof(FRigVMFunction_MathTransformClampSpatially, Result) == 0x0100);
static_assert(offsetof(FRigVMFunction_MathTransformMirrorTransform, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathTransformMirrorTransform, MirrorAxis) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathTransformMirrorTransform, AxisToFlip) == 0x0071);
static_assert(offsetof(FRigVMFunction_MathTransformMirrorTransform, CentralTransform) == 0x0080);
static_assert(offsetof(FRigVMFunction_MathTransformMirrorTransform, Result) == 0x00E0);
static_assert(offsetof(FRigVMFunction_MathVectorUnaryOp, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorUnaryOp, Result) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorBinaryOp, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorBinaryOp, B) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorBinaryOp, Result) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathVectorBinaryAggregateOp, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorBinaryAggregateOp, B) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorBinaryAggregateOp, Result) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathVectorMake, Result) == 0x0018);
static_assert(offsetof(FRigVMFunction_MathVectorFromFloat, Result) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathVectorFromDouble, Result) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathVectorScale, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorScale, Result) == 0x0028);
static_assert(offsetof(FRigVMFunction_MathVectorClamp, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorClamp, Minimum) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorClamp, Maximum) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathVectorClamp, Result) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathVectorLerp, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorLerp, B) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorLerp, Result) == 0x0040);
static_assert(offsetof(FRigVMFunction_MathVectorRemap, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorRemap, SourceMinimum) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorRemap, SourceMaximum) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathVectorRemap, TargetMinimum) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathVectorRemap, TargetMaximum) == 0x0068);
static_assert(offsetof(FRigVMFunction_MathVectorRemap, Result) == 0x0088);
static_assert(offsetof(FRigVMFunction_MathVectorEquals, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorEquals, B) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorNotEquals, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorNotEquals, B) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorIsNearlyZero, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorIsNearlyEqual, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorIsNearlyEqual, B) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorSelectBool, IfTrue) == 0x0010);
static_assert(offsetof(FRigVMFunction_MathVectorSelectBool, IfFalse) == 0x0028);
static_assert(offsetof(FRigVMFunction_MathVectorSelectBool, Result) == 0x0040);
static_assert(offsetof(FRigVMFunction_MathVectorLengthSquared, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorLength, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorDistance, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorDistance, B) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorDot, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorDot, B) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorSetLength, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorSetLength, Result) == 0x0028);
static_assert(offsetof(FRigVMFunction_MathVectorClampLength, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorClampLength, Result) == 0x0028);
static_assert(offsetof(FRigVMFunction_MathVectorMirror, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorMirror, Normal) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorMirror, Result) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathVectorAngle, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorAngle, B) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorParallel, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorParallel, B) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorOrthogonal, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorOrthogonal, B) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorBezierFourPoint, Bezier) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorBezierFourPoint, Result) == 0x0070);
static_assert(offsetof(FRigVMFunction_MathVectorBezierFourPoint, Tangent) == 0x0088);
static_assert(offsetof(FRigVMFunction_MathVectorMakeBezierFourPoint, Bezier) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorClampSpatially, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorClampSpatially, Axis) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorClampSpatially, Type) == 0x0021);
static_assert(offsetof(FRigVMFunction_MathVectorClampSpatially, Space) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathVectorClampSpatially, DebugColor) == 0x0094);
static_assert(offsetof(FRigVMFunction_MathVectorClampSpatially, Result) == 0x00A8);
static_assert(offsetof(FRigVMFunction_MathIntersectPlane, Start) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathIntersectPlane, Direction) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathIntersectPlane, PlanePoint) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathIntersectPlane, PlaneNormal) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathIntersectPlane, Result) == 0x0068);
static_assert(offsetof(FRigVMFunction_MathDistanceToPlane, Point) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathDistanceToPlane, PlanePoint) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathDistanceToPlane, PlaneNormal) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathDistanceToPlane, ClosestPointOnPlane) == 0x0050);
static_assert(offsetof(FRigVMFunction_MathVectorMakeRelative, Global) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorMakeRelative, Parent) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorMakeRelative, Local) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathVectorMakeAbsolute, Local) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorMakeAbsolute, Parent) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorMakeAbsolute, Global) == 0x0038);
static_assert(offsetof(FRigVMFunction_MathVectorMirrorTransform, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorMirrorTransform, MirrorAxis) == 0x0020);
static_assert(offsetof(FRigVMFunction_MathVectorMirrorTransform, AxisToFlip) == 0x0021);
static_assert(offsetof(FRigVMFunction_MathVectorMirrorTransform, CentralTransform) == 0x0030);
static_assert(offsetof(FRigVMFunction_MathVectorMirrorTransform, Result) == 0x0090);
static_assert(offsetof(FRigVMFunction_MathVectorArraySum, Array) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorArraySum, Sum) == 0x0018);
static_assert(offsetof(FRigVMFunction_MathVectorArrayAverage, Array) == 0x0008);
static_assert(offsetof(FRigVMFunction_MathVectorArrayAverage, Average) == 0x0018);
static_assert(offsetof(FRigVMFunction_NoiseVector, position) == 0x0008);
static_assert(offsetof(FRigVMFunction_NoiseVector, Speed) == 0x0020);
static_assert(offsetof(FRigVMFunction_NoiseVector, Frequency) == 0x0038);
static_assert(offsetof(FRigVMFunction_NoiseVector, Result) == 0x0058);
static_assert(offsetof(FRigVMFunction_NoiseVector, time) == 0x0070);
static_assert(offsetof(FRigVMFunction_NoiseVector2, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_NoiseVector2, Speed) == 0x0020);
static_assert(offsetof(FRigVMFunction_NoiseVector2, Frequency) == 0x0038);
static_assert(offsetof(FRigVMFunction_NoiseVector2, Result) == 0x0060);
static_assert(offsetof(FRigVMFunction_NoiseVector2, time) == 0x0078);
static_assert(offsetof(FRigVMFunction_RandomVector, Result) == 0x0018);
static_assert(offsetof(FRigVMFunction_RandomVector, LastResult) == 0x0030);
static_assert(offsetof(FRigVMMirrorSettings, MirrorAxis) == 0x0000);
static_assert(offsetof(FRigVMMirrorSettings, AxisToFlip) == 0x0001);
static_assert(offsetof(FRigVMMirrorSettings, SearchString) == 0x0008);
static_assert(offsetof(FRigVMMirrorSettings, ReplaceString) == 0x0018);
static_assert(offsetof(FRigVMFunction_ControlFlowBranch, ExecuteContext) == 0x0010);
static_assert(offsetof(FRigVMFunction_ControlFlowBranch, TRUE0) == 0x0110);
static_assert(offsetof(FRigVMFunction_ControlFlowBranch, FALSE0) == 0x0200);
static_assert(offsetof(FRigVMFunction_ControlFlowBranch, Completed) == 0x02F0);
static_assert(offsetof(FRigVMFunction_ControlFlowBranch, BlockToRun) == 0x03E0);
static_assert(offsetof(FRigVMFunction_NameConcat, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_NameConcat, B) == 0x0010);
static_assert(offsetof(FRigVMFunction_NameConcat, Result) == 0x0018);
static_assert(offsetof(FRigVMFunction_NameTruncate, Name) == 0x0008);
static_assert(offsetof(FRigVMFunction_NameTruncate, Remainder) == 0x0018);
static_assert(offsetof(FRigVMFunction_NameTruncate, Chopped) == 0x0020);
static_assert(offsetof(FRigVMFunction_NameReplace, Name) == 0x0008);
static_assert(offsetof(FRigVMFunction_NameReplace, Old) == 0x0010);
static_assert(offsetof(FRigVMFunction_NameReplace, New) == 0x0018);
static_assert(offsetof(FRigVMFunction_NameReplace, Result) == 0x0020);
static_assert(offsetof(FRigVMFunction_EndsWith, Name) == 0x0008);
static_assert(offsetof(FRigVMFunction_EndsWith, Ending) == 0x0010);
static_assert(offsetof(FRigVMFunction_StartsWith, Name) == 0x0008);
static_assert(offsetof(FRigVMFunction_StartsWith, Start) == 0x0010);
static_assert(offsetof(FRigVMFunction_Contains, Name) == 0x0008);
static_assert(offsetof(FRigVMFunction_Contains, Search) == 0x0010);
static_assert(offsetof(FRigVMFunction_StringConcat, A) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringConcat, B) == 0x0018);
static_assert(offsetof(FRigVMFunction_StringConcat, Result) == 0x0028);
static_assert(offsetof(FRigVMFunction_StringTruncate, Name) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringTruncate, Remainder) == 0x0020);
static_assert(offsetof(FRigVMFunction_StringTruncate, Chopped) == 0x0030);
static_assert(offsetof(FRigVMFunction_StringReplace, Name) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringReplace, Old) == 0x0018);
static_assert(offsetof(FRigVMFunction_StringReplace, New) == 0x0028);
static_assert(offsetof(FRigVMFunction_StringReplace, Result) == 0x0038);
static_assert(offsetof(FRigVMFunction_StringEndsWith, Name) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringEndsWith, Ending) == 0x0018);
static_assert(offsetof(FRigVMFunction_StringStartsWith, Name) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringStartsWith, Start) == 0x0018);
static_assert(offsetof(FRigVMFunction_StringContains, Name) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringContains, Search) == 0x0018);
static_assert(offsetof(FRigVMFunction_StringLength, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringTrimWhitespace, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringTrimWhitespace, Result) == 0x0018);
static_assert(offsetof(FRigVMFunction_StringToUppercase, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringToUppercase, Result) == 0x0018);
static_assert(offsetof(FRigVMFunction_StringToLowercase, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringToLowercase, Result) == 0x0018);
static_assert(offsetof(FRigVMFunction_StringReverse, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringReverse, Reverse) == 0x0018);
static_assert(offsetof(FRigVMFunction_StringLeft, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringLeft, Result) == 0x0020);
static_assert(offsetof(FRigVMFunction_StringRight, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringRight, Result) == 0x0020);
static_assert(offsetof(FRigVMFunction_StringMiddle, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringMiddle, Result) == 0x0020);
static_assert(offsetof(FRigVMFunction_StringFind, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringFind, Search) == 0x0018);
static_assert(offsetof(FRigVMFunction_StringSplit, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringSplit, Separator) == 0x0018);
static_assert(offsetof(FRigVMFunction_StringSplit, Result) == 0x0028);
static_assert(offsetof(FRigVMFunction_StringJoin, Values) == 0x0008);
static_assert(offsetof(FRigVMFunction_StringJoin, Separator) == 0x0018);
static_assert(offsetof(FRigVMFunction_StringJoin, Result) == 0x0028);
static_assert(offsetof(FRigVMFunction_StringPadInteger, Result) == 0x0010);
static_assert(offsetof(FRigVMFunction_AccumulateVectorAdd, Increment) == 0x0008);
static_assert(offsetof(FRigVMFunction_AccumulateVectorAdd, InitialValue) == 0x0020);
static_assert(offsetof(FRigVMFunction_AccumulateVectorAdd, Result) == 0x0040);
static_assert(offsetof(FRigVMFunction_AccumulateVectorAdd, AccumulatedValue) == 0x0058);
static_assert(offsetof(FRigVMFunction_AccumulateVectorMul, Multiplier) == 0x0008);
static_assert(offsetof(FRigVMFunction_AccumulateVectorMul, InitialValue) == 0x0020);
static_assert(offsetof(FRigVMFunction_AccumulateVectorMul, Result) == 0x0040);
static_assert(offsetof(FRigVMFunction_AccumulateVectorMul, AccumulatedValue) == 0x0058);
static_assert(offsetof(FRigVMFunction_AccumulateQuatMul, Multiplier) == 0x0010);
static_assert(offsetof(FRigVMFunction_AccumulateQuatMul, InitialValue) == 0x0030);
static_assert(offsetof(FRigVMFunction_AccumulateQuatMul, Result) == 0x0060);
static_assert(offsetof(FRigVMFunction_AccumulateQuatMul, AccumulatedValue) == 0x0080);
static_assert(offsetof(FRigVMFunction_AccumulateTransformMul, Multiplier) == 0x0010);
static_assert(offsetof(FRigVMFunction_AccumulateTransformMul, InitialValue) == 0x0070);
static_assert(offsetof(FRigVMFunction_AccumulateTransformMul, Result) == 0x00E0);
static_assert(offsetof(FRigVMFunction_AccumulateTransformMul, AccumulatedValue) == 0x0140);
static_assert(offsetof(FRigVMFunction_AccumulateVectorLerp, TargetValue) == 0x0008);
static_assert(offsetof(FRigVMFunction_AccumulateVectorLerp, InitialValue) == 0x0020);
static_assert(offsetof(FRigVMFunction_AccumulateVectorLerp, Result) == 0x0040);
static_assert(offsetof(FRigVMFunction_AccumulateVectorLerp, AccumulatedValue) == 0x0058);
static_assert(offsetof(FRigVMFunction_AccumulateQuatLerp, TargetValue) == 0x0010);
static_assert(offsetof(FRigVMFunction_AccumulateQuatLerp, InitialValue) == 0x0030);
static_assert(offsetof(FRigVMFunction_AccumulateQuatLerp, Result) == 0x0060);
static_assert(offsetof(FRigVMFunction_AccumulateQuatLerp, AccumulatedValue) == 0x0080);
static_assert(offsetof(FRigVMFunction_AccumulateTransformLerp, TargetValue) == 0x0010);
static_assert(offsetof(FRigVMFunction_AccumulateTransformLerp, InitialValue) == 0x0070);
static_assert(offsetof(FRigVMFunction_AccumulateTransformLerp, Result) == 0x00E0);
static_assert(offsetof(FRigVMFunction_AccumulateTransformLerp, AccumulatedValue) == 0x0140);
static_assert(offsetof(FRigVMFunction_AccumulateVectorRange, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_AccumulateVectorRange, Minimum) == 0x0020);
static_assert(offsetof(FRigVMFunction_AccumulateVectorRange, Maximum) == 0x0038);
static_assert(offsetof(FRigVMFunction_AccumulateVectorRange, AccumulatedMinimum) == 0x0050);
static_assert(offsetof(FRigVMFunction_AccumulateVectorRange, AccumulatedMaximum) == 0x0068);
static_assert(offsetof(FRigVMFunction_AlphaInterp, InRange) == 0x0018);
static_assert(offsetof(FRigVMFunction_AlphaInterp, OutRange) == 0x0020);
static_assert(offsetof(FRigVMFunction_AlphaInterp, ScaleBiasClamp) == 0x0044);
static_assert(offsetof(FRigVMFunction_AlphaInterpVector, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_AlphaInterpVector, InRange) == 0x002C);
static_assert(offsetof(FRigVMFunction_AlphaInterpVector, OutRange) == 0x0034);
static_assert(offsetof(FRigVMFunction_AlphaInterpVector, Result) == 0x0058);
static_assert(offsetof(FRigVMFunction_AlphaInterpVector, ScaleBiasClamp) == 0x0070);
static_assert(offsetof(FRigVMFunction_AlphaInterpQuat, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_AlphaInterpQuat, InRange) == 0x003C);
static_assert(offsetof(FRigVMFunction_AlphaInterpQuat, OutRange) == 0x0044);
static_assert(offsetof(FRigVMFunction_AlphaInterpQuat, Result) == 0x0070);
static_assert(offsetof(FRigVMFunction_AlphaInterpQuat, ScaleBiasClamp) == 0x0090);
static_assert(offsetof(FRigVMFunction_DeltaFromPreviousVector, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_DeltaFromPreviousVector, Delta) == 0x0020);
static_assert(offsetof(FRigVMFunction_DeltaFromPreviousVector, PreviousValue) == 0x0038);
static_assert(offsetof(FRigVMFunction_DeltaFromPreviousVector, Cache) == 0x0050);
static_assert(offsetof(FRigVMFunction_DeltaFromPreviousQuat, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_DeltaFromPreviousQuat, Delta) == 0x0030);
static_assert(offsetof(FRigVMFunction_DeltaFromPreviousQuat, PreviousValue) == 0x0050);
static_assert(offsetof(FRigVMFunction_DeltaFromPreviousQuat, Cache) == 0x0070);
static_assert(offsetof(FRigVMFunction_DeltaFromPreviousTransform, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_DeltaFromPreviousTransform, Delta) == 0x0070);
static_assert(offsetof(FRigVMFunction_DeltaFromPreviousTransform, PreviousValue) == 0x00D0);
static_assert(offsetof(FRigVMFunction_DeltaFromPreviousTransform, Cache) == 0x0130);
static_assert(offsetof(FRigVMFunction_KalmanFloat, Buffer) == 0x0018);
static_assert(offsetof(FRigVMFunction_KalmanVector, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_KalmanVector, Result) == 0x0028);
static_assert(offsetof(FRigVMFunction_KalmanVector, Buffer) == 0x0040);
static_assert(offsetof(FRigVMFunction_KalmanTransform, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_KalmanTransform, Result) == 0x0080);
static_assert(offsetof(FRigVMFunction_KalmanTransform, Buffer) == 0x00E0);
static_assert(offsetof(FRigVMFunction_TimeOffsetFloat, Buffer) == 0x0020);
static_assert(offsetof(FRigVMFunction_TimeOffsetFloat, DeltaTimes) == 0x0030);
static_assert(offsetof(FRigVMFunction_TimeOffsetVector, Value) == 0x0008);
static_assert(offsetof(FRigVMFunction_TimeOffsetVector, Result) == 0x0030);
static_assert(offsetof(FRigVMFunction_TimeOffsetVector, Buffer) == 0x0048);
static_assert(offsetof(FRigVMFunction_TimeOffsetVector, DeltaTimes) == 0x0058);
static_assert(offsetof(FRigVMFunction_TimeOffsetTransform, Value) == 0x0010);
static_assert(offsetof(FRigVMFunction_TimeOffsetTransform, Result) == 0x0080);
static_assert(offsetof(FRigVMFunction_TimeOffsetTransform, Buffer) == 0x00E0);
static_assert(offsetof(FRigVMFunction_TimeOffsetTransform, DeltaTimes) == 0x00F0);
static_assert(offsetof(FRigVMFunction_VerletIntegrateVector, Target) == 0x0008);
static_assert(offsetof(FRigVMFunction_VerletIntegrateVector, Force) == 0x0030);
static_assert(offsetof(FRigVMFunction_VerletIntegrateVector, position) == 0x0048);
static_assert(offsetof(FRigVMFunction_VerletIntegrateVector, Velocity) == 0x0060);
static_assert(offsetof(FRigVMFunction_VerletIntegrateVector, Acceleration) == 0x0078);
static_assert(offsetof(FRigVMFunction_VerletIntegrateVector, Point) == 0x0090);
