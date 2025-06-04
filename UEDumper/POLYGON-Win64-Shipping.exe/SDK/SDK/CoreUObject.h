
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType

#pragma pack(push, 0x1)

/// Enum /Script/CoreUObject.EAutomationEventType
/// Size: 0x01 (1 bytes)
enum class EAutomationEventType : uint8_t
{
	EAutomationEventType__Info                                                       = 0,
	EAutomationEventType__Warning                                                    = 1,
	EAutomationEventType__Error                                                      = 2
};

/// Enum /Script/CoreUObject.ERangeBoundTypes
/// Size: 0x01 (1 bytes)
enum class ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive                                                      = 0,
	ERangeBoundTypes__Inclusive                                                      = 1,
	ERangeBoundTypes__Open                                                           = 2
};

/// Enum /Script/CoreUObject.EInterpCurveMode
/// Size: 0x01 (1 bytes)
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                                                                       = 0,
	CIM_CurveAuto                                                                    = 1,
	CIM_Constant                                                                     = 2,
	CIM_CurveUser                                                                    = 3,
	CIM_CurveBreak                                                                   = 4,
	CIM_CurveAutoClamped                                                             = 5
};

/// Enum /Script/CoreUObject.EInputDeviceConnectionState
/// Size: 0x01 (1 bytes)
enum class EInputDeviceConnectionState : uint8_t
{
	EInputDeviceConnectionState__Invalid                                             = 0,
	EInputDeviceConnectionState__Unknown                                             = 1,
	EInputDeviceConnectionState__Disconnected                                        = 2,
	EInputDeviceConnectionState__Connected                                           = 3
};

/// Enum /Script/CoreUObject.ELocalizedTextSourceCategory
/// Size: 0x01 (1 bytes)
enum class ELocalizedTextSourceCategory : uint8_t
{
	ELocalizedTextSourceCategory__Game                                               = 0,
	ELocalizedTextSourceCategory__Engine                                             = 1,
	ELocalizedTextSourceCategory__Editor                                             = 2
};

/// Enum /Script/CoreUObject.EMouseCursor
/// Size: 0x01 (1 bytes)
enum class EMouseCursor : uint8_t
{
	EMouseCursor__None                                                               = 0,
	EMouseCursor__Default                                                            = 1,
	EMouseCursor__TextEditBeam                                                       = 2,
	EMouseCursor__ResizeLeftRight                                                    = 3,
	EMouseCursor__ResizeUpDown                                                       = 4,
	EMouseCursor__ResizeSouthEast                                                    = 5,
	EMouseCursor__ResizeSouthWest                                                    = 6,
	EMouseCursor__CardinalCross                                                      = 7,
	EMouseCursor__Crosshairs                                                         = 8,
	EMouseCursor__Hand                                                               = 9,
	EMouseCursor__GrabHand                                                           = 10,
	EMouseCursor__GrabHandClosed                                                     = 11,
	EMouseCursor__SlashedCircle                                                      = 12,
	EMouseCursor__EyeDropper                                                         = 13
};

/// Enum /Script/CoreUObject.ELifetimeCondition
/// Size: 0x01 (1 bytes)
enum class ELifetimeCondition : uint8_t
{
	COND_None                                                                        = 0,
	COND_InitialOnly                                                                 = 1,
	COND_OwnerOnly                                                                   = 2,
	COND_SkipOwner                                                                   = 3,
	COND_SimulatedOnly                                                               = 4,
	COND_AutonomousOnly                                                              = 5,
	COND_SimulatedOrPhysics                                                          = 6,
	COND_InitialOrOwner                                                              = 7,
	COND_Custom                                                                      = 8,
	COND_ReplayOrOwner                                                               = 9,
	COND_ReplayOnly                                                                  = 10,
	COND_SimulatedOnlyNoReplay                                                       = 11,
	COND_SimulatedOrPhysicsNoReplay                                                  = 12,
	COND_SkipReplay                                                                  = 13,
	COND_Never                                                                       = 15,
	COND_NetGroup                                                                    = 16,
	COND_Max                                                                         = 17
};

/// Enum /Script/CoreUObject.ESearchCase
/// Size: 0x01 (1 bytes)
enum class ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive                                                       = 0,
	ESearchCase__IgnoreCase                                                          = 1
};

/// Enum /Script/CoreUObject.ESearchDir
/// Size: 0x01 (1 bytes)
enum class ESearchDir : uint8_t
{
	ESearchDir__FromStart                                                            = 0,
	ESearchDir__FromEnd                                                              = 1
};

/// Enum /Script/CoreUObject.ELogTimes
/// Size: 0x01 (1 bytes)
enum class ELogTimes : uint8_t
{
	ELogTimes__None                                                                  = 0,
	ELogTimes__UTC                                                                   = 1,
	ELogTimes__SinceGStartTime                                                       = 2,
	ELogTimes__Local                                                                 = 3
};

/// Enum /Script/CoreUObject.EAxis
/// Size: 0x01 (1 bytes)
enum class EAxis : uint8_t
{
	EAxis__None                                                                      = 0,
	EAxis__X                                                                         = 1,
	EAxis__Y                                                                         = 2,
	EAxis__Z                                                                         = 3
};

/// Enum /Script/CoreUObject.EAxisList
/// Size: 0x01 (1 bytes)
enum class EAxisList : uint8_t
{
	EAxisList__None                                                                  = 0,
	EAxisList__X                                                                     = 1,
	EAxisList__Y                                                                     = 2,
	EAxisList__Z                                                                     = 4,
	EAxisList__Screen                                                                = 8,
	EAxisList__XY                                                                    = 3,
	EAxisList__XZ                                                                    = 5,
	EAxisList__YZ                                                                    = 6,
	EAxisList__XYZ                                                                   = 7,
	EAxisList__All                                                                   = 15,
	EAxisList__ZRotation                                                             = 6,
	EAxisList__Rotate2D                                                              = 8
};

/// Enum /Script/CoreUObject.EPixelFormat
/// Size: 0x01 (1 bytes)
enum class EPixelFormat : uint8_t
{
	PF_Unknown                                                                       = 0,
	PF_A32B32G32R32F                                                                 = 1,
	PF_B8G8R8A8                                                                      = 2,
	PF_G8                                                                            = 3,
	PF_G16                                                                           = 4,
	PF_DXT1                                                                          = 5,
	PF_DXT3                                                                          = 6,
	PF_DXT5                                                                          = 7,
	PF_UYVY                                                                          = 8,
	PF_FloatRGB                                                                      = 9,
	PF_FloatRGBA                                                                     = 10,
	PF_DepthStencil                                                                  = 11,
	PF_ShadowDepth                                                                   = 12,
	PF_R32_FLOAT                                                                     = 13,
	PF_G16R16                                                                        = 14,
	PF_G16R16F                                                                       = 15,
	PF_G16R16F_FILTER                                                                = 16,
	PF_G32R32F                                                                       = 17,
	PF_A2B10G10R10                                                                   = 18,
	PF_A16B16G16R16                                                                  = 19,
	PF_D24                                                                           = 20,
	PF_R16F                                                                          = 21,
	PF_R16F_FILTER                                                                   = 22,
	PF_BC5                                                                           = 23,
	PF_V8U8                                                                          = 24,
	PF_A1                                                                            = 25,
	PF_FloatR11G11B10                                                                = 26,
	PF_A8                                                                            = 27,
	PF_R32_UINT                                                                      = 28,
	PF_R32_SINT                                                                      = 29,
	PF_PVRTC2                                                                        = 30,
	PF_PVRTC4                                                                        = 31,
	PF_R16_UINT                                                                      = 32,
	PF_R16_SINT                                                                      = 33,
	PF_R16G16B16A16_UINT                                                             = 34,
	PF_R16G16B16A16_SINT                                                             = 35,
	PF_R5G6B5_UNORM                                                                  = 36,
	PF_R8G8B8A8                                                                      = 37,
	PF_A8R8G8B8                                                                      = 38,
	PF_BC4                                                                           = 39,
	PF_R8G8                                                                          = 40,
	PF_ATC_RGB                                                                       = 41,
	PF_ATC_RGBA_E                                                                    = 42,
	PF_ATC_RGBA_I                                                                    = 43,
	PF_X24_G8                                                                        = 44,
	PF_ETC1                                                                          = 45,
	PF_ETC2_RGB                                                                      = 46,
	PF_ETC2_RGBA                                                                     = 47,
	PF_R32G32B32A32_UINT                                                             = 48,
	PF_R16G16_UINT                                                                   = 49,
	PF_ASTC_4x4                                                                      = 50,
	PF_ASTC_6x6                                                                      = 51,
	PF_ASTC_8x8                                                                      = 52,
	PF_ASTC_10x10                                                                    = 53,
	PF_ASTC_12x12                                                                    = 54,
	PF_BC6H                                                                          = 55,
	PF_BC7                                                                           = 56,
	PF_R8_UINT                                                                       = 57,
	PF_L8                                                                            = 58,
	PF_XGXR8                                                                         = 59,
	PF_R8G8B8A8_UINT                                                                 = 60,
	PF_R8G8B8A8_SNORM                                                                = 61,
	PF_R16G16B16A16_UNORM                                                            = 62,
	PF_R16G16B16A16_SNORM                                                            = 63,
	PF_PLATFORM_HDR                                                                  = 64,
	PF_PLATFORM_HDR66                                                                = 65,
	PF_PLATFORM_HDR67                                                                = 66,
	PF_NV12                                                                          = 67,
	PF_R32G32_UINT                                                                   = 68,
	PF_ETC2_R11_EAC                                                                  = 69,
	PF_ETC2_RG11_EAC                                                                 = 70,
	PF_R8                                                                            = 71,
	PF_B5G5R5A1_UNORM                                                                = 72,
	PF_ASTC_4x4_HDR                                                                  = 73,
	PF_ASTC_6x6_HDR                                                                  = 74,
	PF_ASTC_8x8_HDR                                                                  = 75,
	PF_ASTC_10x10_HDR                                                                = 76,
	PF_ASTC_12x12_HDR                                                                = 77,
	PF_G16R16_SNORM                                                                  = 78,
	PF_R8G8_UINT                                                                     = 79,
	PF_R32G32B32_UINT                                                                = 80,
	PF_R32G32B32_SINT                                                                = 81,
	PF_R32G32B32F                                                                    = 82,
	PF_R8_SINT                                                                       = 83,
	PF_R64_UINT                                                                      = 84,
	PF_R9G9B9EXP5                                                                    = 85,
	PF_P010                                                                          = 86
};

/// Enum /Script/CoreUObject.EUnit
/// Size: 0x01 (1 bytes)
enum class EUnit : uint8_t
{
	EUnit__Micrometers                                                               = 0,
	EUnit__Millimeters                                                               = 1,
	EUnit__Centimeters                                                               = 2,
	EUnit__Meters                                                                    = 3,
	EUnit__Kilometers                                                                = 4,
	EUnit__Inches                                                                    = 5,
	EUnit__Feet                                                                      = 6,
	EUnit__Yards                                                                     = 7,
	EUnit__Miles                                                                     = 8,
	EUnit__Lightyears                                                                = 9,
	EUnit__Degrees                                                                   = 10,
	EUnit__Radians                                                                   = 11,
	EUnit__CentimetersPerSecond                                                      = 12,
	EUnit__MetersPerSecond                                                           = 13,
	EUnit__KilometersPerHour                                                         = 14,
	EUnit__MilesPerHour                                                              = 15,
	EUnit__Celsius                                                                   = 16,
	EUnit__Farenheit                                                                 = 17,
	EUnit__Kelvin                                                                    = 18,
	EUnit__Micrograms                                                                = 19,
	EUnit__Milligrams                                                                = 20,
	EUnit__Grams                                                                     = 21,
	EUnit__Kilograms                                                                 = 22,
	EUnit__MetricTons                                                                = 23,
	EUnit__Ounces                                                                    = 24,
	EUnit__Pounds                                                                    = 25,
	EUnit__Stones                                                                    = 26,
	EUnit__Newtons                                                                   = 27,
	EUnit__PoundsForce                                                               = 28,
	EUnit__KilogramsForce                                                            = 29,
	EUnit__Hertz                                                                     = 30,
	EUnit__Kilohertz                                                                 = 31,
	EUnit__Megahertz                                                                 = 32,
	EUnit__Gigahertz                                                                 = 33,
	EUnit__RevolutionsPerMinute                                                      = 34,
	EUnit__Bytes                                                                     = 35,
	EUnit__Kilobytes                                                                 = 36,
	EUnit__Megabytes                                                                 = 37,
	EUnit__Gigabytes                                                                 = 38,
	EUnit__Terabytes                                                                 = 39,
	EUnit__Lumens                                                                    = 40,
	EUnit__Milliseconds                                                              = 46,
	EUnit__Seconds                                                                   = 47,
	EUnit__Minutes                                                                   = 48,
	EUnit__Hours                                                                     = 49,
	EUnit__Days                                                                      = 50,
	EUnit__Months                                                                    = 51,
	EUnit__Years                                                                     = 52,
	EUnit__Multiplier                                                                = 55,
	EUnit__Percentage                                                                = 54,
	EUnit__Unspecified                                                               = 56
};

/// Enum /Script/CoreUObject.EPropertyAccessChangeNotifyMode
/// Size: 0x01 (1 bytes)
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
	EPropertyAccessChangeNotifyMode__Default                                         = 0,
	EPropertyAccessChangeNotifyMode__Never                                           = 1,
	EPropertyAccessChangeNotifyMode__Always                                          = 2
};

/// Enum /Script/CoreUObject.EAppReturnType
/// Size: 0x01 (1 bytes)
enum class EAppReturnType : uint8_t
{
	EAppReturnType__No                                                               = 0,
	EAppReturnType__Yes                                                              = 1,
	EAppReturnType__YesAll                                                           = 2,
	EAppReturnType__NoAll                                                            = 3,
	EAppReturnType__Cancel                                                           = 4,
	EAppReturnType__Ok                                                               = 5,
	EAppReturnType__Retry                                                            = 6,
	EAppReturnType__Continue                                                         = 7
};

/// Enum /Script/CoreUObject.EAppMsgType
/// Size: 0x01 (1 bytes)
enum class EAppMsgType : uint8_t
{
	EAppMsgType__Ok                                                                  = 0,
	EAppMsgType__YesNo                                                               = 1,
	EAppMsgType__OkCancel                                                            = 2,
	EAppMsgType__YesNoCancel                                                         = 3,
	EAppMsgType__CancelRetryContinue                                                 = 4,
	EAppMsgType__YesNoYesAllNoAll                                                    = 5,
	EAppMsgType__YesNoYesAllNoAllCancel                                              = 6,
	EAppMsgType__YesNoYesAll                                                         = 7
};

/// Enum /Script/CoreUObject.EInputDeviceTriggerMask
/// Size: 0x01 (1 bytes)
enum class EInputDeviceTriggerMask : uint8_t
{
	EInputDeviceTriggerMask__None                                                    = 0,
	EInputDeviceTriggerMask__Left                                                    = 1,
	EInputDeviceTriggerMask__Right                                                   = 2,
	EInputDeviceTriggerMask__All                                                     = 3
};

/// Enum /Script/CoreUObject.EDataValidationResult
/// Size: 0x01 (1 bytes)
enum class EDataValidationResult : uint8_t
{
	EDataValidationResult__Invalid                                                   = 0,
	EDataValidationResult__Valid                                                     = 1,
	EDataValidationResult__NotValidated                                              = 2
};

/// Class /Script/CoreUObject.Object
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align n/a MaxSize: 0x0028
class UObject
{ 
public:
	uint64_t                                           vtable;                                                     // 0x0000   (0x0008)  
	EObjectFlags                                       ObjectFlags;                                                // 0x0008   (0x0004)  
	int                                                InternalIndex;                                              // 0x000C   (0x0004)  
	class UClass*                                      ClassPrivate;                                               // 0x0010   (0x0008)  
	FName                                              NamePrivate;                                                // 0x0018   (0x0008)  
	class UObject*                                     OuterPrivate;                                               // 0x0020   (0x0008)  


	/// Functions
	// Function /Script/CoreUObject.Object.ExecuteUbergraph
	// void ExecuteUbergraph(int32_t EntryPoint);                                                                               // [0x2c97800] Event|Public|BlueprintEvent 
};

/// Class /Script/CoreUObject.Interface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInterface : public UObject
{ 
public:
};

/// Class /Script/CoreUObject.Field
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align n/a MaxSize: 0x0030
class UField : public UObject
{ 
public:
	class UField*                                      Next;                                                       // 0x0028   (0x0008)  
};

/// Class /Script/CoreUObject.Struct
/// Size: 0x00B0 (176 bytes) (0x000030 - 0x0000B0) align n/a MaxSize: 0x00B0
class UStruct : public UField
{ 
public:
	class UStruct*                                     SuperStruct;                                                // 0x0030   (0x0008)  
	class UField*                                      Children;                                                   // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x70];                                      // 0x0040   (0x0070)  MISSED
};

/// Class /Script/CoreUObject.ScriptStruct
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UScriptStruct : public UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00B0   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.Package
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UPackage : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0028   (0x0068)  MISSED
};

/// Class /Script/CoreUObject.Class
/// Size: 0x0220 (544 bytes) (0x0000B0 - 0x000220) align 16 MaxSize: 0x0220
class UClass : public UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x170];                                     // 0x00B0   (0x0170)  MISSED
};

/// Class /Script/CoreUObject.GCObjectReferencer
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGCObjectReferencer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/CoreUObject.TextBuffer
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UTextBuffer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0028   (0x0028)  MISSED
};

/// Class /Script/CoreUObject.Function
/// Size: 0x00E0 (224 bytes) (0x0000B0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UFunction : public UStruct
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00B0   (0x0030)  MISSED
};

/// Class /Script/CoreUObject.DelegateFunction
/// Size: 0x00E0 (224 bytes) (0x0000E0 - 0x0000E0) align 8 MaxSize: 0x00E0
class UDelegateFunction : public UFunction
{ 
public:
};

/// Class /Script/CoreUObject.SparseDelegateFunction
/// Size: 0x00F0 (240 bytes) (0x0000E0 - 0x0000F0) align 8 MaxSize: 0x00F0
class USparseDelegateFunction : public UDelegateFunction
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x00E0   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.DynamicClass
/// Size: 0x02A0 (672 bytes) (0x000220 - 0x0002A0) align 16 MaxSize: 0x02A0
class UDynamicClass : public UClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x80];                                      // 0x0220   (0x0080)  MISSED
};

/// Class /Script/CoreUObject.PackageMap
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPackageMap : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0028   (0x00B8)  MISSED
};

/// Class /Script/CoreUObject.Enum
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UEnum : public UField
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0030   (0x0038)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderClass
/// Size: 0x03E0 (992 bytes) (0x000220 - 0x0003E0) align 16 MaxSize: 0x03E0
class ULinkerPlaceholderClass : public UClass
{ 
public:
	unsigned char                                      UnknownData00_1[0x1C0];                                     // 0x0220   (0x01C0)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderExportObject
/// Size: 0x00F8 (248 bytes) (0x000028 - 0x0000F8) align 8 MaxSize: 0x00F8
class ULinkerPlaceholderExportObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xD0];                                      // 0x0028   (0x00D0)  MISSED
};

/// Class /Script/CoreUObject.LinkerPlaceholderFunction
/// Size: 0x02A0 (672 bytes) (0x0000E0 - 0x0002A0) align 8 MaxSize: 0x02A0
class ULinkerPlaceholderFunction : public UFunction
{ 
public:
	unsigned char                                      UnknownData00_1[0x1C0];                                     // 0x00E0   (0x01C0)  MISSED
};

/// Class /Script/CoreUObject.MetaData
/// Size: 0x00C8 (200 bytes) (0x000028 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMetaData : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0028   (0x00A0)  MISSED
};

/// Class /Script/CoreUObject.ObjectRedirector
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UObjectRedirector : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.Property
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UProperty : public UField
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED
};

/// Class /Script/CoreUObject.EnumProperty
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UEnumProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0070   (0x0010)  MISSED
};

/// Class /Script/CoreUObject.ArrayProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UArrayProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.ObjectPropertyBase
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UObjectPropertyBase : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.BoolProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UBoolProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.NumericProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UNumericProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.ByteProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UByteProperty : public UNumericProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.ObjectProperty
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.ClassProperty
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
class UClassProperty : public UObjectProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.DelegateProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UDelegateProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.DoubleProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UDoubleProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.FloatProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UFloatProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.IntProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UIntProperty : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int8Property
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UInt8Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int16Property
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UInt16Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.Int64Property
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UInt64Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.InterfaceProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UInterfaceProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.LazyObjectProperty
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class ULazyObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.MapProperty
/// Size: 0x0098 (152 bytes) (0x000070 - 0x000098) align 8 MaxSize: 0x0098
class UMapProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0070   (0x0028)  MISSED
};

/// Class /Script/CoreUObject.MulticastDelegateProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UMulticastDelegateProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.MulticastInlineDelegateProperty
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{ 
public:
};

/// Class /Script/CoreUObject.MulticastSparseDelegateProperty
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{ 
public:
};

/// Class /Script/CoreUObject.NameProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UNameProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.SetProperty
/// Size: 0x0090 (144 bytes) (0x000070 - 0x000090) align 8 MaxSize: 0x0090
class USetProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0070   (0x0020)  MISSED
};

/// Class /Script/CoreUObject.SoftObjectProperty
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class USoftObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.SoftClassProperty
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
class USoftClassProperty : public USoftObjectProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.StrProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UStrProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.StructProperty
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UStructProperty : public UProperty
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0070   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.UInt16Property
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UUInt16Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.UInt32Property
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UUInt32Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.UInt64Property
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UUInt64Property : public UNumericProperty
{ 
public:
};

/// Class /Script/CoreUObject.WeakObjectProperty
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UWeakObjectProperty : public UObjectPropertyBase
{ 
public:
};

/// Class /Script/CoreUObject.TextProperty
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 8 MaxSize: 0x0070
class UTextProperty : public UProperty
{ 
public:
};

/// Class /Script/CoreUObject.PropertyWrapper
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPropertyWrapper : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/CoreUObject.MulticastDelegatePropertyWrapper
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{ 
public:
};

/// Class /Script/CoreUObject.MulticastInlineDelegatePropertyWrapper
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{ 
public:
};

/// Struct /Script/CoreUObject.TopLevelAssetPath
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FTopLevelAssetPath
{ 
	FName                                              PackageName;                                                // 0x0000   (0x0008)  
	FName                                              AssetName;                                                  // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.SoftObjectPath
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSoftObjectPath
{ 
	FTopLevelAssetPath                                 AssetPath;                                                  // 0x0000   (0x0010)  
	FString                                            SubPathString;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/CoreUObject.ARFilter
/// Size: 0x0150 (336 bytes) (0x000000 - 0x000150) align 8 MaxSize: 0x0150
struct FARFilter
{ 
	TArray<FName>                                      PackageNames;                                               // 0x0000   (0x0010)  
	TArray<FName>                                      PackagePaths;                                               // 0x0010   (0x0010)  
	TArray<FSoftObjectPath>                            SoftObjectPaths;                                            // 0x0020   (0x0010)  
	TArray<FName>                                      ClassNames;                                                 // 0x0030   (0x0010)  
	TArray<FTopLevelAssetPath>                         ClassPaths;                                                 // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x0050   (0x0050)  MISSED
	SDK_UNDEFINED(80,0) /* TSet<FName> */              __um(RecursiveClassesExclusionSet);                         // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,1) /* TSet<FTopLevelAssetPath> */ __um(RecursiveClassPathsExclusionSet);                      // 0x00F0   (0x0050)  
	bool                                               bRecursivePaths;                                            // 0x0140   (0x0001)  
	bool                                               bRecursiveClasses;                                          // 0x0141   (0x0001)  
	bool                                               bIncludeOnlyOnDiskAssets;                                   // 0x0142   (0x0001)  
	unsigned char                                      UnknownData01_7[0xD];                                       // 0x0143   (0x000D)  MISSED
};

/// Struct /Script/CoreUObject.AssetBundleEntry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FAssetBundleEntry
{ 
	FName                                              BundleName;                                                 // 0x0000   (0x0008)  
	TArray<FTopLevelAssetPath>                         AssetPaths;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/CoreUObject.AssetBundleData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FAssetBundleData
{ 
	TArray<FAssetBundleEntry>                          Bundles;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.AssetData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FAssetData
{ 
	FName                                              PackageName;                                                // 0x0000   (0x0008)  
	FName                                              PackagePath;                                                // 0x0008   (0x0008)  
	FName                                              AssetName;                                                  // 0x0010   (0x0008)  
	FName                                              AssetClass;                                                 // 0x0018   (0x0008)  
	FTopLevelAssetPath                                 AssetClassPath;                                             // 0x0020   (0x0010)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0030   (0x0038)  MISSED
};

/// Struct /Script/CoreUObject.Guid
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FGuid
{ 
	int32_t                                            A;                                                          // 0x0000   (0x0004)  
	int32_t                                            B;                                                          // 0x0004   (0x0004)  
	int32_t                                            C;                                                          // 0x0008   (0x0004)  
	int32_t                                            D;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.AutomationEvent
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FAutomationEvent
{ 
	EAutomationEventType                               Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0008   (0x0010)  
	FString                                            Context;                                                    // 0x0018   (0x0010)  
	FGuid                                              Artifact;                                                   // 0x0028   (0x0010)  
};

/// Struct /Script/CoreUObject.DateTime
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FDateTime
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.AutomationExecutionEntry
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FAutomationExecutionEntry
{ 
	FAutomationEvent                                   Event;                                                      // 0x0000   (0x0038)  
	FString                                            Filename;                                                   // 0x0038   (0x0010)  
	int32_t                                            LineNumber;                                                 // 0x0048   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FDateTime                                          Timestamp;                                                  // 0x0050   (0x0008)  
};

/// Struct /Script/CoreUObject.Vector
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FVector
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Box
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FBox
{ 
	FVector                                            Min;                                                        // 0x0000   (0x0018)  
	FVector                                            Max;                                                        // 0x0018   (0x0018)  
	bool                                               IsValid;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.Vector2D
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FVector2D
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Box2D
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FBox2D
{ 
	FVector2D                                          Min;                                                        // 0x0000   (0x0010)  
	FVector2D                                          Max;                                                        // 0x0010   (0x0010)  
	bool                                               bIsValid;                                                   // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.Vector2f
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FVector2f
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Box2f
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FBox2f
{ 
	FVector2f                                          Min;                                                        // 0x0000   (0x0008)  
	FVector2f                                          Max;                                                        // 0x0008   (0x0008)  
	bool                                               bIsValid;                                                   // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.Vector3d
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FVector3d
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Box3d
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FBox3d
{ 
	FVector3d                                          Min;                                                        // 0x0000   (0x0018)  
	FVector3d                                          Max;                                                        // 0x0018   (0x0018)  
	bool                                               IsValid;                                                    // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.Vector3f
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FVector3f
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Box3f
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FBox3f
{ 
	FVector3f                                          Min;                                                        // 0x0000   (0x000C)  
	FVector3f                                          Max;                                                        // 0x000C   (0x000C)  
	bool                                               IsValid;                                                    // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.BoxSphereBounds
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FBoxSphereBounds
{ 
	FVector                                            Origin;                                                     // 0x0000   (0x0018)  
	FVector                                            BoxExtent;                                                  // 0x0018   (0x0018)  
	double                                             SphereRadius;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/CoreUObject.BoxSphereBounds3d
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FBoxSphereBounds3d
{ 
	FVector3d                                          Origin;                                                     // 0x0000   (0x0018)  
	FVector3d                                          BoxExtent;                                                  // 0x0018   (0x0018)  
	double                                             SphereRadius;                                               // 0x0030   (0x0008)  
};

/// Struct /Script/CoreUObject.BoxSphereBounds3f
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FBoxSphereBounds3f
{ 
	FVector3f                                          Origin;                                                     // 0x0000   (0x000C)  
	FVector3f                                          BoxExtent;                                                  // 0x000C   (0x000C)  
	float                                              SphereRadius;                                               // 0x0018   (0x0004)  
};

/// Struct /Script/CoreUObject.Color
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FColor
{ 
	char                                               B;                                                          // 0x0000   (0x0001)  
	char                                               G;                                                          // 0x0001   (0x0001)  
	char                                               R;                                                          // 0x0002   (0x0001)  
	char                                               A;                                                          // 0x0003   (0x0001)  
};

/// Struct /Script/CoreUObject.DirectoryPath
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FDirectoryPath
{ 
	FString                                            Path;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.DoubleRangeBound
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FDoubleRangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	double                                             Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.DoubleRange
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FDoubleRange
{ 
	FDoubleRangeBound                                  LowerBound;                                                 // 0x0000   (0x0010)  
	FDoubleRangeBound                                  UpperBound;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/CoreUObject.FallbackStruct
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FFallbackStruct
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/CoreUObject.FilePath
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FFilePath
{ 
	FString                                            FilePath;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.FloatInterval
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFloatInterval
{ 
	float                                              Min;                                                        // 0x0000   (0x0004)  
	float                                              Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FloatRangeBound
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFloatRangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FloatRange
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FFloatRange
{ 
	FFloatRangeBound                                   LowerBound;                                                 // 0x0000   (0x0008)  
	FFloatRangeBound                                   UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FrameNumber
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FFrameNumber
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameNumberRangeBound
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFrameNumberRangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FFrameNumber                                       Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameNumberRange
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FFrameNumberRange
{ 
	FFrameNumberRangeBound                             LowerBound;                                                 // 0x0000   (0x0008)  
	FFrameNumberRangeBound                             UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.FrameRate
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFrameRate
{ 
	int32_t                                            Numerator;                                                  // 0x0000   (0x0004)  
	int32_t                                            Denominator;                                                // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.FrameTime
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FFrameTime
{ 
	FFrameNumber                                       FrameNumber;                                                // 0x0000   (0x0004)  
	float                                              SubFrame;                                                   // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.InputDeviceId
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FInputDeviceId
{ 
	int32_t                                            InternalId;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Interval
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FInt32Interval
{ 
	int32_t                                            Min;                                                        // 0x0000   (0x0004)  
	int32_t                                            Max;                                                        // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Point
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FInt32Point
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32RangeBound
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FInt32RangeBound
{ 
	TEnumAsByte<ERangeBoundTypes>                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            Value;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Range
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FInt32Range
{ 
	FInt32RangeBound                                   LowerBound;                                                 // 0x0000   (0x0008)  
	FInt32RangeBound                                   UpperBound;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Int32Vector
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FInt32Vector
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Vector2
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FInt32Vector2
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Int32Vector4
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FInt32Vector4
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
	int32_t                                            W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Int64Point
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FInt64Point
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Int64Vector
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInt64Vector
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
	int64_t                                            Z;                                                          // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Int64Vector2
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FInt64Vector2
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Int64Vector4
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FInt64Vector4
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
	int64_t                                            Z;                                                          // 0x0010   (0x0008)  
	int64_t                                            W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.InterpCurvePointFloat
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FInterpCurvePointFloat
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	float                                              OutVal;                                                     // 0x0004   (0x0004)  
	float                                              ArriveTangent;                                              // 0x0008   (0x0004)  
	float                                              LeaveTangent;                                               // 0x000C   (0x0004)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveFloat
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInterpCurveFloat
{ 
	TArray<FInterpCurvePointFloat>                     Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.LinearColor
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FLinearColor
{ 
	float                                              R;                                                          // 0x0000   (0x0004)  
	float                                              G;                                                          // 0x0004   (0x0004)  
	float                                              B;                                                          // 0x0008   (0x0004)  
	float                                              A;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurvePointLinearColor
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FInterpCurvePointLinearColor
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	FLinearColor                                       OutVal;                                                     // 0x0004   (0x0010)  
	FLinearColor                                       ArriveTangent;                                              // 0x0014   (0x0010)  
	FLinearColor                                       LeaveTangent;                                               // 0x0024   (0x0010)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0035   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveLinearColor
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInterpCurveLinearColor
{ 
	TArray<FInterpCurvePointLinearColor>               Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.Quat
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FQuat
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.InterpCurvePointQuat
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FInterpCurvePointQuat
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0004   (0x000C)  MISSED
	FQuat                                              OutVal;                                                     // 0x0010   (0x0020)  
	FQuat                                              ArriveTangent;                                              // 0x0030   (0x0020)  
	FQuat                                              LeaveTangent;                                               // 0x0050   (0x0020)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Struct /Script/CoreUObject.TwoVectors
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FTwoVectors
{ 
	FVector                                            v1;                                                         // 0x0000   (0x0018)  
	FVector                                            v2;                                                         // 0x0018   (0x0018)  
};

/// Struct /Script/CoreUObject.InterpCurvePointTwoVectors
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FInterpCurvePointTwoVectors
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FTwoVectors                                        OutVal;                                                     // 0x0008   (0x0030)  
	FTwoVectors                                        ArriveTangent;                                              // 0x0038   (0x0030)  
	FTwoVectors                                        LeaveTangent;                                               // 0x0068   (0x0030)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurvePointVector
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FInterpCurvePointVector
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            OutVal;                                                     // 0x0008   (0x0018)  
	FVector                                            ArriveTangent;                                              // 0x0020   (0x0018)  
	FVector                                            LeaveTangent;                                               // 0x0038   (0x0018)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurvePointVector2D
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FInterpCurvePointVector2D
{ 
	float                                              InVal;                                                      // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector2D                                          OutVal;                                                     // 0x0008   (0x0010)  
	FVector2D                                          ArriveTangent;                                              // 0x0018   (0x0010)  
	FVector2D                                          LeaveTangent;                                               // 0x0028   (0x0010)  
	TEnumAsByte<EInterpCurveMode>                      InterpMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/CoreUObject.InterpCurveQuat
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInterpCurveQuat
{ 
	TArray<FInterpCurvePointQuat>                      Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurveTwoVectors
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInterpCurveTwoVectors
{ 
	TArray<FInterpCurvePointTwoVectors>                Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurveVector
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInterpCurveVector
{ 
	TArray<FInterpCurvePointVector>                    Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.InterpCurveVector2D
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInterpCurveVector2D
{ 
	TArray<FInterpCurvePointVector2D>                  Points;                                                     // 0x0000   (0x0010)  
	bool                                               bIsLooped;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              LoopKeyOffset;                                              // 0x0014   (0x0004)  
};

/// Struct /Script/CoreUObject.IntPoint
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FIntPoint
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.IntVector
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FIntVector
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.IntVector2
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FIntVector2
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.IntVector4
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FIntVector4
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
	int32_t                                            Z;                                                          // 0x0008   (0x0004)  
	int32_t                                            W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Plane
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 16 MaxSize: 0x0020
struct FPlane : FVector
{ 
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Matrix
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FMatrix
{ 
	FPlane                                             XPlane;                                                     // 0x0000   (0x0020)  
	FPlane                                             YPlane;                                                     // 0x0020   (0x0020)  
	FPlane                                             ZPlane;                                                     // 0x0040   (0x0020)  
	FPlane                                             WPlane;                                                     // 0x0060   (0x0020)  
};

/// Struct /Script/CoreUObject.Plane4d
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 16 MaxSize: 0x0020
struct FPlane4d : FVector3d
{ 
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Matrix44d
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FMatrix44d
{ 
	FPlane4d                                           XPlane;                                                     // 0x0000   (0x0020)  
	FPlane4d                                           YPlane;                                                     // 0x0020   (0x0020)  
	FPlane4d                                           ZPlane;                                                     // 0x0040   (0x0020)  
	FPlane4d                                           WPlane;                                                     // 0x0060   (0x0020)  
};

/// Struct /Script/CoreUObject.Plane4f
/// Size: 0x0010 (16 bytes) (0x00000C - 0x000010) align 16 MaxSize: 0x0010
struct FPlane4f : FVector3f
{ 
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Matrix44f
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FMatrix44f
{ 
	FPlane4f                                           XPlane;                                                     // 0x0000   (0x0010)  
	FPlane4f                                           YPlane;                                                     // 0x0010   (0x0010)  
	FPlane4f                                           ZPlane;                                                     // 0x0020   (0x0010)  
	FPlane4f                                           WPlane;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/CoreUObject.OrientedBox
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FOrientedBox
{ 
	FVector                                            Center;                                                     // 0x0000   (0x0018)  
	FVector                                            AxisX;                                                      // 0x0018   (0x0018)  
	FVector                                            AxisY;                                                      // 0x0030   (0x0018)  
	FVector                                            AxisZ;                                                      // 0x0048   (0x0018)  
	double                                             ExtentX;                                                    // 0x0060   (0x0008)  
	double                                             ExtentY;                                                    // 0x0068   (0x0008)  
	double                                             ExtentZ;                                                    // 0x0070   (0x0008)  
};

/// Struct /Script/CoreUObject.PackedNormal
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 1 MaxSize: 0x0004
struct FPackedNormal
{ 
	char                                               X;                                                          // 0x0000   (0x0001)  
	char                                               Y;                                                          // 0x0001   (0x0001)  
	char                                               Z;                                                          // 0x0002   (0x0001)  
	char                                               W;                                                          // 0x0003   (0x0001)  
};

/// Struct /Script/CoreUObject.PackedRGB10A2N
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FPackedRGB10A2N
{ 
	int32_t                                            Packed;                                                     // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.PackedRGBA16N
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPackedRGBA16N
{ 
	int32_t                                            XY;                                                         // 0x0000   (0x0004)  
	int32_t                                            ZW;                                                         // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.PlatformUserId
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FPlatformUserId
{ 
	int32_t                                            InternalId;                                                 // 0x0000   (0x0004)  
};

/// Struct /Script/CoreUObject.PlatformInputDeviceState
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPlatformInputDeviceState
{ 
	FPlatformUserId                                    OwningPlatformUser;                                         // 0x0000   (0x0004)  
	EInputDeviceConnectionState                        ConnectionState;                                            // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.PolyglotTextData
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FPolyglotTextData
{ 
	ELocalizedTextSourceCategory                       Category;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            NativeCulture;                                              // 0x0008   (0x0010)  
	FString                                            Namespace;                                                  // 0x0018   (0x0010)  
	FString                                            Key;                                                        // 0x0028   (0x0010)  
	FString                                            NativeString;                                               // 0x0038   (0x0010)  
	TMap<FString, FString>                             LocalizedStrings;                                           // 0x0048   (0x0050)  
	bool                                               bIsMinimalPatch;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0099   (0x0007)  MISSED
	FText                                              CachedText;                                                 // 0x00A0   (0x0018)  
};

/// Struct /Script/CoreUObject.PrimaryAssetType
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPrimaryAssetType
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/CoreUObject.PrimaryAssetId
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FPrimaryAssetId
{ 
	FPrimaryAssetType                                  PrimaryAssetType;                                           // 0x0000   (0x0008)  
	FName                                              PrimaryAssetName;                                           // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.QualifiedFrameTime
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FQualifiedFrameTime
{ 
	FFrameTime                                         time;                                                       // 0x0000   (0x0008)  
	FFrameRate                                         Rate;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Quat4d
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FQuat4d
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Quat4f
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 16 MaxSize: 0x0010
struct FQuat4f
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.RandomStream
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FRandomStream
{ 
	int32_t                                            InitialSeed;                                                // 0x0000   (0x0004)  
	int32_t                                            Seed;                                                       // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Ray
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRay
{ 
	FVector                                            Origin;                                                     // 0x0000   (0x0018)  
	FVector                                            Direction;                                                  // 0x0018   (0x0018)  
};

/// Struct /Script/CoreUObject.Ray3d
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRay3d
{ 
	FVector3d                                          Origin;                                                     // 0x0000   (0x0018)  
	FVector3d                                          Direction;                                                  // 0x0018   (0x0018)  
};

/// Struct /Script/CoreUObject.Ray3f
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FRay3f
{ 
	FVector3f                                          Origin;                                                     // 0x0000   (0x000C)  
	FVector3f                                          Direction;                                                  // 0x000C   (0x000C)  
};

/// Struct /Script/CoreUObject.Rotator
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRotator
{ 
	double                                             Pitch;                                                      // 0x0000   (0x0008)  
	double                                             Yaw;                                                        // 0x0008   (0x0008)  
	double                                             Roll;                                                       // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Rotator3d
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRotator3d
{ 
	double                                             Pitch;                                                      // 0x0000   (0x0008)  
	double                                             Yaw;                                                        // 0x0008   (0x0008)  
	double                                             Roll;                                                       // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Rotator3f
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRotator3f
{ 
	float                                              Pitch;                                                      // 0x0000   (0x0004)  
	float                                              Yaw;                                                        // 0x0004   (0x0004)  
	float                                              Roll;                                                       // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.SoftClassPath
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FSoftClassPath : FSoftObjectPath
{ 
};

/// Struct /Script/CoreUObject.Sphere
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSphere
{ 
	FVector                                            Center;                                                     // 0x0000   (0x0018)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Sphere3d
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FSphere3d
{ 
	FVector3d                                          Center;                                                     // 0x0000   (0x0018)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Sphere3f
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSphere3f
{ 
	FVector3f                                          Center;                                                     // 0x0000   (0x000C)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.TemplateString
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FTemplateString
{ 
	FString                                            Template;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/CoreUObject.TestUninitializedScriptStructMembersTest
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTestUninitializedScriptStructMembersTest
{ 
	class UObject*                                     UninitializedObjectReference;                               // 0x0000   (0x0008)  
	class UObject*                                     InitializedObjectReference;                                 // 0x0008   (0x0008)  
	float                                              UnusedValue;                                                // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/CoreUObject.Timecode
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FTimecode
{ 
	int32_t                                            Hours;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minutes;                                                    // 0x0004   (0x0004)  
	int32_t                                            Seconds;                                                    // 0x0008   (0x0004)  
	int32_t                                            Frames;                                                     // 0x000C   (0x0004)  
	bool                                               bDropFrameFormat;                                           // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/CoreUObject.Timespan
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FTimespan
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.Transform
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FTransform
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0020)  
	FVector                                            Translation;                                                // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector                                            Scale3D;                                                    // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.Transform3d
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FTransform3d
{ 
	FQuat4d                                            Rotation;                                                   // 0x0000   (0x0020)  
	FVector3d                                          Translation;                                                // 0x0020   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector3d                                          Scale3D;                                                    // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008)  MISSED
};

/// Struct /Script/CoreUObject.Transform3f
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 MaxSize: 0x0030
struct FTransform3f
{ 
	FQuat4f                                            Rotation;                                                   // 0x0000   (0x0010)  
	FVector3f                                          Translation;                                                // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector3f                                          Scale3D;                                                    // 0x0020   (0x000C)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/CoreUObject.Uint32Point
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FUint32Point
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Uint32Vector
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FUint32Vector
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
	uint32_t                                           Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.Uint32Vector2
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FUint32Vector2
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.Uint32Vector4
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FUint32Vector4
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
	uint32_t                                           Z;                                                          // 0x0008   (0x0004)  
	uint32_t                                           W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Uint64Point
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUint64Point
{ 
	int64_t                                            X;                                                          // 0x0000   (0x0008)  
	int64_t                                            Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Uint64Vector
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FUint64Vector
{ 
	uint64_t                                           X;                                                          // 0x0000   (0x0008)  
	uint64_t                                           Y;                                                          // 0x0008   (0x0008)  
	uint64_t                                           Z;                                                          // 0x0010   (0x0008)  
};

/// Struct /Script/CoreUObject.Uint64Vector2
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FUint64Vector2
{ 
	uint64_t                                           X;                                                          // 0x0000   (0x0008)  
	uint64_t                                           Y;                                                          // 0x0008   (0x0008)  
};

/// Struct /Script/CoreUObject.Uint64Vector4
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FUint64Vector4
{ 
	uint64_t                                           X;                                                          // 0x0000   (0x0008)  
	uint64_t                                           Y;                                                          // 0x0008   (0x0008)  
	uint64_t                                           Z;                                                          // 0x0010   (0x0008)  
	uint64_t                                           W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.UintPoint
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FUintPoint
{ 
	int32_t                                            X;                                                          // 0x0000   (0x0004)  
	int32_t                                            Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.UintVector
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FUintVector
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
	uint32_t                                           Z;                                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CoreUObject.UintVector2
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FUintVector2
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
};

/// Struct /Script/CoreUObject.UintVector4
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FUintVector4
{ 
	uint32_t                                           X;                                                          // 0x0000   (0x0004)  
	uint32_t                                           Y;                                                          // 0x0004   (0x0004)  
	uint32_t                                           Z;                                                          // 0x0008   (0x0004)  
	uint32_t                                           W;                                                          // 0x000C   (0x0004)  
};

/// Struct /Script/CoreUObject.Vector4
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FVector4
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Vector4d
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 16 MaxSize: 0x0020
struct FVector4d
{ 
	double                                             X;                                                          // 0x0000   (0x0008)  
	double                                             Y;                                                          // 0x0008   (0x0008)  
	double                                             Z;                                                          // 0x0010   (0x0008)  
	double                                             W;                                                          // 0x0018   (0x0008)  
};

/// Struct /Script/CoreUObject.Vector4f
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 16 MaxSize: 0x0010
struct FVector4f
{ 
	float                                              X;                                                          // 0x0000   (0x0004)  
	float                                              Y;                                                          // 0x0004   (0x0004)  
	float                                              Z;                                                          // 0x0008   (0x0004)  
	float                                              W;                                                          // 0x000C   (0x0004)  
};

#pragma pack(pop)


static_assert(sizeof(UObject) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UField) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UStruct) == 0x00B0); // 176 bytes (0x000030 - 0x0000B0)
static_assert(sizeof(UScriptStruct) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(UPackage) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UClass) == 0x0220); // 544 bytes (0x0000B0 - 0x000220)
static_assert(sizeof(UGCObjectReferencer) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UTextBuffer) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UFunction) == 0x00E0); // 224 bytes (0x0000B0 - 0x0000E0)
static_assert(sizeof(UDelegateFunction) == 0x00E0); // 224 bytes (0x0000E0 - 0x0000E0)
static_assert(sizeof(USparseDelegateFunction) == 0x00F0); // 240 bytes (0x0000E0 - 0x0000F0)
static_assert(sizeof(UDynamicClass) == 0x02A0); // 672 bytes (0x000220 - 0x0002A0)
static_assert(sizeof(UPackageMap) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UEnum) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(ULinkerPlaceholderClass) == 0x03E0); // 992 bytes (0x000220 - 0x0003E0)
static_assert(sizeof(ULinkerPlaceholderExportObject) == 0x00F8); // 248 bytes (0x000028 - 0x0000F8)
static_assert(sizeof(ULinkerPlaceholderFunction) == 0x02A0); // 672 bytes (0x0000E0 - 0x0002A0)
static_assert(sizeof(UMetaData) == 0x00C8); // 200 bytes (0x000028 - 0x0000C8)
static_assert(sizeof(UObjectRedirector) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UProperty) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UEnumProperty) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UArrayProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UObjectPropertyBase) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UBoolProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UNumericProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UByteProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UClassProperty) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UDelegateProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UDoubleProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UFloatProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UIntProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInt8Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInt16Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInt64Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UInterfaceProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(ULazyObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UMapProperty) == 0x0098); // 152 bytes (0x000070 - 0x000098)
static_assert(sizeof(UMulticastDelegateProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UMulticastInlineDelegateProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UMulticastSparseDelegateProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UNameProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(USetProperty) == 0x0090); // 144 bytes (0x000070 - 0x000090)
static_assert(sizeof(USoftObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(USoftClassProperty) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UStrProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UStructProperty) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UUInt16Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UUInt32Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UUInt64Property) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UWeakObjectProperty) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UTextProperty) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(UPropertyWrapper) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMulticastDelegatePropertyWrapper) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMulticastInlineDelegatePropertyWrapper) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(FTopLevelAssetPath) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSoftObjectPath) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FARFilter) == 0x0150); // 336 bytes (0x000000 - 0x000150)
static_assert(sizeof(FAssetBundleEntry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FAssetBundleData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAssetData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FGuid) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAutomationEvent) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FDateTime) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAutomationExecutionEntry) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FVector) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBox) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FVector2D) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FBox2D) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FVector2f) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FBox2f) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FVector3d) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FBox3d) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FVector3f) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FBox3f) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FBoxSphereBounds) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FBoxSphereBounds3d) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FBoxSphereBounds3f) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FColor) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FDirectoryPath) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDoubleRangeBound) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FDoubleRange) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FFallbackStruct) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FFilePath) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFloatInterval) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFloatRangeBound) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFloatRange) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFrameNumber) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FFrameNumberRangeBound) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFrameNumberRange) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FFrameRate) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FFrameTime) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInputDeviceId) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FInt32Interval) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInt32Point) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInt32RangeBound) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInt32Range) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInt32Vector) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FInt32Vector2) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FInt32Vector4) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInt64Point) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInt64Vector) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInt64Vector2) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInt64Vector4) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FInterpCurvePointFloat) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FInterpCurveFloat) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FLinearColor) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FInterpCurvePointLinearColor) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FInterpCurveLinearColor) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FQuat) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FInterpCurvePointQuat) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FTwoVectors) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInterpCurvePointTwoVectors) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FInterpCurvePointVector) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FInterpCurvePointVector2D) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FInterpCurveQuat) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurveTwoVectors) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurveVector) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInterpCurveVector2D) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FIntPoint) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIntVector) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FIntVector2) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FIntVector4) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FPlane) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FMatrix) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FPlane4d) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FMatrix44d) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FPlane4f) == 0x0010); // 16 bytes (0x00000C - 0x000010)
static_assert(sizeof(FMatrix44f) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FOrientedBox) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FPackedNormal) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPackedRGB10A2N) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPackedRGBA16N) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPlatformUserId) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FPlatformInputDeviceState) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPolyglotTextData) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FPrimaryAssetType) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FPrimaryAssetId) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FQualifiedFrameTime) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FQuat4d) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FQuat4f) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRandomStream) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FRay) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRay3d) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRay3f) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRotator) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRotator3d) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRotator3f) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FSoftClassPath) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FSphere) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSphere3d) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSphere3f) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTemplateString) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FTestUninitializedScriptStructMembersTest) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FTimecode) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FTimespan) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FTransform) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FTransform3d) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FTransform3f) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FUint32Point) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUint32Vector) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FUint32Vector2) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUint32Vector4) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUint64Point) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUint64Vector) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FUint64Vector2) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FUint64Vector4) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FUintPoint) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUintVector) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FUintVector2) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FUintVector4) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVector4) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVector4d) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FVector4f) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UObject, ObjectFlags) == 0x0008);
static_assert(offsetof(UObject, ClassPrivate) == 0x0010);
static_assert(offsetof(UObject, NamePrivate) == 0x0018);
static_assert(offsetof(UObject, OuterPrivate) == 0x0020);
static_assert(offsetof(UField, Next) == 0x0028);
static_assert(offsetof(UStruct, SuperStruct) == 0x0030);
static_assert(offsetof(UStruct, Children) == 0x0038);
static_assert(offsetof(FTopLevelAssetPath, PackageName) == 0x0000);
static_assert(offsetof(FTopLevelAssetPath, AssetName) == 0x0008);
static_assert(offsetof(FSoftObjectPath, AssetPath) == 0x0000);
static_assert(offsetof(FSoftObjectPath, SubPathString) == 0x0010);
static_assert(offsetof(FARFilter, PackageNames) == 0x0000);
static_assert(offsetof(FARFilter, PackagePaths) == 0x0010);
static_assert(offsetof(FARFilter, SoftObjectPaths) == 0x0020);
static_assert(offsetof(FARFilter, ClassNames) == 0x0030);
static_assert(offsetof(FARFilter, ClassPaths) == 0x0040);
static_assert(offsetof(FAssetBundleEntry, BundleName) == 0x0000);
static_assert(offsetof(FAssetBundleEntry, AssetPaths) == 0x0008);
static_assert(offsetof(FAssetBundleData, Bundles) == 0x0000);
static_assert(offsetof(FAssetData, PackageName) == 0x0000);
static_assert(offsetof(FAssetData, PackagePath) == 0x0008);
static_assert(offsetof(FAssetData, AssetName) == 0x0010);
static_assert(offsetof(FAssetData, AssetClass) == 0x0018);
static_assert(offsetof(FAssetData, AssetClassPath) == 0x0020);
static_assert(offsetof(FAutomationEvent, Type) == 0x0000);
static_assert(offsetof(FAutomationEvent, Message) == 0x0008);
static_assert(offsetof(FAutomationEvent, Context) == 0x0018);
static_assert(offsetof(FAutomationEvent, Artifact) == 0x0028);
static_assert(offsetof(FAutomationExecutionEntry, Event) == 0x0000);
static_assert(offsetof(FAutomationExecutionEntry, Filename) == 0x0038);
static_assert(offsetof(FAutomationExecutionEntry, Timestamp) == 0x0050);
static_assert(offsetof(FBox, Min) == 0x0000);
static_assert(offsetof(FBox, Max) == 0x0018);
static_assert(offsetof(FBox2D, Min) == 0x0000);
static_assert(offsetof(FBox2D, Max) == 0x0010);
static_assert(offsetof(FBox2f, Min) == 0x0000);
static_assert(offsetof(FBox2f, Max) == 0x0008);
static_assert(offsetof(FBox3d, Min) == 0x0000);
static_assert(offsetof(FBox3d, Max) == 0x0018);
static_assert(offsetof(FBox3f, Min) == 0x0000);
static_assert(offsetof(FBox3f, Max) == 0x000C);
static_assert(offsetof(FBoxSphereBounds, Origin) == 0x0000);
static_assert(offsetof(FBoxSphereBounds, BoxExtent) == 0x0018);
static_assert(offsetof(FBoxSphereBounds3d, Origin) == 0x0000);
static_assert(offsetof(FBoxSphereBounds3d, BoxExtent) == 0x0018);
static_assert(offsetof(FBoxSphereBounds3f, Origin) == 0x0000);
static_assert(offsetof(FBoxSphereBounds3f, BoxExtent) == 0x000C);
static_assert(offsetof(FDirectoryPath, Path) == 0x0000);
static_assert(offsetof(FDoubleRangeBound, Type) == 0x0000);
static_assert(offsetof(FDoubleRange, LowerBound) == 0x0000);
static_assert(offsetof(FDoubleRange, UpperBound) == 0x0010);
static_assert(offsetof(FFilePath, FilePath) == 0x0000);
static_assert(offsetof(FFloatRangeBound, Type) == 0x0000);
static_assert(offsetof(FFloatRange, LowerBound) == 0x0000);
static_assert(offsetof(FFloatRange, UpperBound) == 0x0008);
static_assert(offsetof(FFrameNumberRangeBound, Type) == 0x0000);
static_assert(offsetof(FFrameNumberRangeBound, Value) == 0x0004);
static_assert(offsetof(FFrameNumberRange, LowerBound) == 0x0000);
static_assert(offsetof(FFrameNumberRange, UpperBound) == 0x0008);
static_assert(offsetof(FFrameTime, FrameNumber) == 0x0000);
static_assert(offsetof(FInt32RangeBound, Type) == 0x0000);
static_assert(offsetof(FInt32Range, LowerBound) == 0x0000);
static_assert(offsetof(FInt32Range, UpperBound) == 0x0008);
static_assert(offsetof(FInterpCurvePointFloat, InterpMode) == 0x0010);
static_assert(offsetof(FInterpCurveFloat, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointLinearColor, OutVal) == 0x0004);
static_assert(offsetof(FInterpCurvePointLinearColor, ArriveTangent) == 0x0014);
static_assert(offsetof(FInterpCurvePointLinearColor, LeaveTangent) == 0x0024);
static_assert(offsetof(FInterpCurvePointLinearColor, InterpMode) == 0x0034);
static_assert(offsetof(FInterpCurveLinearColor, Points) == 0x0000);
static_assert(offsetof(FInterpCurvePointQuat, OutVal) == 0x0010);
static_assert(offsetof(FInterpCurvePointQuat, ArriveTangent) == 0x0030);
static_assert(offsetof(FInterpCurvePointQuat, LeaveTangent) == 0x0050);
static_assert(offsetof(FInterpCurvePointQuat, InterpMode) == 0x0070);
static_assert(offsetof(FTwoVectors, v1) == 0x0000);
static_assert(offsetof(FTwoVectors, v2) == 0x0018);
static_assert(offsetof(FInterpCurvePointTwoVectors, OutVal) == 0x0008);
static_assert(offsetof(FInterpCurvePointTwoVectors, ArriveTangent) == 0x0038);
static_assert(offsetof(FInterpCurvePointTwoVectors, LeaveTangent) == 0x0068);
static_assert(offsetof(FInterpCurvePointTwoVectors, InterpMode) == 0x0098);
static_assert(offsetof(FInterpCurvePointVector, OutVal) == 0x0008);
static_assert(offsetof(FInterpCurvePointVector, ArriveTangent) == 0x0020);
static_assert(offsetof(FInterpCurvePointVector, LeaveTangent) == 0x0038);
static_assert(offsetof(FInterpCurvePointVector, InterpMode) == 0x0050);
static_assert(offsetof(FInterpCurvePointVector2D, OutVal) == 0x0008);
static_assert(offsetof(FInterpCurvePointVector2D, ArriveTangent) == 0x0018);
static_assert(offsetof(FInterpCurvePointVector2D, LeaveTangent) == 0x0028);
static_assert(offsetof(FInterpCurvePointVector2D, InterpMode) == 0x0038);
static_assert(offsetof(FInterpCurveQuat, Points) == 0x0000);
static_assert(offsetof(FInterpCurveTwoVectors, Points) == 0x0000);
static_assert(offsetof(FInterpCurveVector, Points) == 0x0000);
static_assert(offsetof(FInterpCurveVector2D, Points) == 0x0000);
static_assert(offsetof(FMatrix, XPlane) == 0x0000);
static_assert(offsetof(FMatrix, YPlane) == 0x0020);
static_assert(offsetof(FMatrix, ZPlane) == 0x0040);
static_assert(offsetof(FMatrix, WPlane) == 0x0060);
static_assert(offsetof(FMatrix44d, XPlane) == 0x0000);
static_assert(offsetof(FMatrix44d, YPlane) == 0x0020);
static_assert(offsetof(FMatrix44d, ZPlane) == 0x0040);
static_assert(offsetof(FMatrix44d, WPlane) == 0x0060);
static_assert(offsetof(FMatrix44f, XPlane) == 0x0000);
static_assert(offsetof(FMatrix44f, YPlane) == 0x0010);
static_assert(offsetof(FMatrix44f, ZPlane) == 0x0020);
static_assert(offsetof(FMatrix44f, WPlane) == 0x0030);
static_assert(offsetof(FOrientedBox, Center) == 0x0000);
static_assert(offsetof(FOrientedBox, AxisX) == 0x0018);
static_assert(offsetof(FOrientedBox, AxisY) == 0x0030);
static_assert(offsetof(FOrientedBox, AxisZ) == 0x0048);
static_assert(offsetof(FPlatformInputDeviceState, OwningPlatformUser) == 0x0000);
static_assert(offsetof(FPlatformInputDeviceState, ConnectionState) == 0x0004);
static_assert(offsetof(FPolyglotTextData, Category) == 0x0000);
static_assert(offsetof(FPolyglotTextData, NativeCulture) == 0x0008);
static_assert(offsetof(FPolyglotTextData, Namespace) == 0x0018);
static_assert(offsetof(FPolyglotTextData, Key) == 0x0028);
static_assert(offsetof(FPolyglotTextData, NativeString) == 0x0038);
static_assert(offsetof(FPolyglotTextData, LocalizedStrings) == 0x0048);
static_assert(offsetof(FPolyglotTextData, CachedText) == 0x00A0);
static_assert(offsetof(FPrimaryAssetType, Name) == 0x0000);
static_assert(offsetof(FPrimaryAssetId, PrimaryAssetType) == 0x0000);
static_assert(offsetof(FPrimaryAssetId, PrimaryAssetName) == 0x0008);
static_assert(offsetof(FQualifiedFrameTime, time) == 0x0000);
static_assert(offsetof(FQualifiedFrameTime, Rate) == 0x0008);
static_assert(offsetof(FRay, Origin) == 0x0000);
static_assert(offsetof(FRay, Direction) == 0x0018);
static_assert(offsetof(FRay3d, Origin) == 0x0000);
static_assert(offsetof(FRay3d, Direction) == 0x0018);
static_assert(offsetof(FRay3f, Origin) == 0x0000);
static_assert(offsetof(FRay3f, Direction) == 0x000C);
static_assert(offsetof(FSphere, Center) == 0x0000);
static_assert(offsetof(FSphere3d, Center) == 0x0000);
static_assert(offsetof(FSphere3f, Center) == 0x0000);
static_assert(offsetof(FTemplateString, Template) == 0x0000);
static_assert(offsetof(FTestUninitializedScriptStructMembersTest, UninitializedObjectReference) == 0x0000);
static_assert(offsetof(FTestUninitializedScriptStructMembersTest, InitializedObjectReference) == 0x0008);
static_assert(offsetof(FTransform, Rotation) == 0x0000);
static_assert(offsetof(FTransform, Translation) == 0x0020);
static_assert(offsetof(FTransform, Scale3D) == 0x0040);
static_assert(offsetof(FTransform3d, Rotation) == 0x0000);
static_assert(offsetof(FTransform3d, Translation) == 0x0020);
static_assert(offsetof(FTransform3d, Scale3D) == 0x0040);
static_assert(offsetof(FTransform3f, Rotation) == 0x0000);
static_assert(offsetof(FTransform3f, Translation) == 0x0010);
static_assert(offsetof(FTransform3f, Scale3D) == 0x0020);
