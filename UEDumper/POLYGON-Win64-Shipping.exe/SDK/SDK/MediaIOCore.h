
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ImageWriteQueue

#pragma pack(push, 0x1)

/// Enum /Script/MediaIOCore.EFileMediaOutputPixelFormat
/// Size: 0x04 (4 bytes)
enum class EFileMediaOutputPixelFormat : uint32_t
{
	EFileMediaOutputPixelFormat__B8G8R8A8                                            = 0,
	EFileMediaOutputPixelFormat__FloatRGBA                                           = 1
};

/// Enum /Script/MediaIOCore.EMediaCaptureState
/// Size: 0x01 (1 bytes)
enum class EMediaCaptureState : uint8_t
{
	EMediaCaptureState__Error                                                        = 0,
	EMediaCaptureState__Capturing                                                    = 1,
	EMediaCaptureState__Preparing                                                    = 2,
	EMediaCaptureState__StopRequested                                                = 3,
	EMediaCaptureState__Stopped                                                      = 4
};

/// Enum /Script/MediaIOCore.EMediaCaptureResourceType
/// Size: 0x01 (1 bytes)
enum class EMediaCaptureResourceType : uint8_t
{
	EMediaCaptureResourceType__Texture                                               = 0,
	EMediaCaptureResourceType__Buffer                                                = 1
};

/// Enum /Script/MediaIOCore.EMediaCaptureCroppingType
/// Size: 0x01 (1 bytes)
enum class EMediaCaptureCroppingType : uint8_t
{
	EMediaCaptureCroppingType__None                                                  = 0,
	EMediaCaptureCroppingType__Center                                                = 1,
	EMediaCaptureCroppingType__TopLeft                                               = 2,
	EMediaCaptureCroppingType__Custom                                                = 3
};

/// Enum /Script/MediaIOCore.EMediaCaptureOverrunAction
/// Size: 0x01 (1 bytes)
enum class EMediaCaptureOverrunAction : uint8_t
{
	EMediaCaptureOverrunAction__Flush                                                = 0,
	EMediaCaptureOverrunAction__Skip                                                 = 1
};

/// Enum /Script/MediaIOCore.EMediaCapturePhase
/// Size: 0x01 (1 bytes)
enum class EMediaCapturePhase : uint8_t
{
	EMediaCapturePhase__BeforePostProcessing                                         = 0,
	EMediaCapturePhase__AfterMotionBlur                                              = 1,
	EMediaCapturePhase__AfterToneMap                                                 = 2,
	EMediaCapturePhase__AfterFXAA                                                    = 3,
	EMediaCapturePhase__EndFrame                                                     = 4
};

/// Enum /Script/MediaIOCore.EMediaIOTransportType
/// Size: 0x04 (4 bytes)
enum class EMediaIOTransportType : uint32_t
{
	EMediaIOTransportType__SingleLink                                                = 0,
	EMediaIOTransportType__DualLink                                                  = 1,
	EMediaIOTransportType__QuadLink                                                  = 2,
	EMediaIOTransportType__HDMI                                                      = 3
};

/// Enum /Script/MediaIOCore.EMediaIOQuadLinkTransportType
/// Size: 0x04 (4 bytes)
enum class EMediaIOQuadLinkTransportType : uint32_t
{
	EMediaIOQuadLinkTransportType__SquareDivision                                    = 0,
	EMediaIOQuadLinkTransportType__TwoSampleInterleave                               = 1
};

/// Enum /Script/MediaIOCore.EMediaIOStandardType
/// Size: 0x04 (4 bytes)
enum class EMediaIOStandardType : uint32_t
{
	EMediaIOStandardType__Progressive                                                = 0,
	EMediaIOStandardType__Interlaced                                                 = 1,
	EMediaIOStandardType__ProgressiveSegmentedFrame                                  = 2
};

/// Enum /Script/MediaIOCore.EMediaIOTimecodeFormat
/// Size: 0x04 (4 bytes)
enum class EMediaIOTimecodeFormat : uint32_t
{
	EMediaIOTimecodeFormat__None                                                     = 0,
	EMediaIOTimecodeFormat__LTC                                                      = 1,
	EMediaIOTimecodeFormat__VITC                                                     = 2
};

/// Enum /Script/MediaIOCore.EMediaIOAutoDetectableTimecodeFormat
/// Size: 0x01 (1 bytes)
enum class EMediaIOAutoDetectableTimecodeFormat : uint8_t
{
	EMediaIOAutoDetectableTimecodeFormat__None                                       = 0,
	EMediaIOAutoDetectableTimecodeFormat__LTC                                        = 1,
	EMediaIOAutoDetectableTimecodeFormat__VITC                                       = 2,
	EMediaIOAutoDetectableTimecodeFormat__Auto                                       = 255
};

/// Enum /Script/MediaIOCore.EMediaIOInputType
/// Size: 0x04 (4 bytes)
enum class EMediaIOInputType : uint32_t
{
	EMediaIOInputType__Fill                                                          = 0,
	EMediaIOInputType__FillAndKey                                                    = 1
};

/// Enum /Script/MediaIOCore.EMediaIOOutputType
/// Size: 0x04 (4 bytes)
enum class EMediaIOOutputType : uint32_t
{
	EMediaIOOutputType__Fill                                                         = 0,
	EMediaIOOutputType__FillAndKey                                                   = 1
};

/// Enum /Script/MediaIOCore.EMediaIOReferenceType
/// Size: 0x04 (4 bytes)
enum class EMediaIOReferenceType : uint32_t
{
	EMediaIOReferenceType__FreeRun                                                   = 0,
	EMediaIOReferenceType__External                                                  = 1,
	EMediaIOReferenceType__Input                                                     = 2
};

/// Enum /Script/MediaIOCore.EMediaCaptureSourceType
/// Size: 0x01 (1 bytes)
enum class EMediaCaptureSourceType : uint8_t
{
	EMediaCaptureSourceType__RENDER_TARGET                                           = 0,
	EMediaCaptureSourceType__SCENE_VIEWPORT                                          = 1,
	EMediaCaptureSourceType__RHI_RESOURCE                                            = 2
};

/// Class /Script/MediaIOCore.MediaOutput
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMediaOutput : public UObject
{ 
public:
	int32_t                                            NumberOfTextureBuffers;                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED


	/// Functions
	// Function /Script/MediaIOCore.MediaOutput.Validate
	// bool Validate(FString& OutFailureReason);                                                                                // [0x19f3ee0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaIOCore.MediaOutput.CreateMediaCapture
	// class UMediaCapture* CreateMediaCapture();                                                                               // [0x19f3b80] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaIOCore.MediaCapture
/// Size: 0x01E8 (488 bytes) (0x000028 - 0x0001E8) align 8 MaxSize: 0x01E8
class UMediaCapture : public UObject
{ 
public:
	SDK_UNDEFINED(16,1255) /* FMulticastInlineDelegate */ __um(OnStateChanged);                                    // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x18];                                      // 0x0038   (0x0018)  MISSED
	class UMediaOutput*                                MediaOutput;                                                // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_7[0x190];                                     // 0x0058   (0x0190)  MISSED


	/// Functions
	// Function /Script/MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
	// bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget);                                            // [0x19f3db0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaIOCore.MediaCapture.StopCapture
	// void StopCapture(bool bAllowPendingFrameToBeProcess);                                                                    // [0x19f3d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaIOCore.MediaCapture.SetMediaOutput
	// void SetMediaOutput(class UMediaOutput* InMediaOutput);                                                                  // [0x19f3c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaIOCore.MediaCapture.GetState
	// EMediaCaptureState GetState();                                                                                           // [0x11c8da0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaIOCore.MediaCapture.GetDesiredSize
	// FIntPoint GetDesiredSize();                                                                                              // [0x19f3c50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaIOCore.MediaCapture.GetDesiredPixelFormat
	// TEnumAsByte<EPixelFormat> GetDesiredPixelFormat();                                                                       // [0x19f3c30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
	// bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, FMediaCaptureOptions CaptureOptions);      // [0x19f39e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaIOCore.MediaCapture.CaptureActiveSceneViewport
	// bool CaptureActiveSceneViewport(FMediaCaptureOptions CaptureOptions);                                                    // [0x19f3900] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MediaIOCore.FileMediaCapture
/// Size: 0x0250 (592 bytes) (0x0001E8 - 0x000250) align 16 MaxSize: 0x0250
class UFileMediaCapture : public UMediaCapture
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x01E8   (0x0068)  MISSED
};

/// Class /Script/MediaIOCore.FileMediaOutput
/// Size: 0x00D0 (208 bytes) (0x000030 - 0x0000D0) align 16 MaxSize: 0x00D0
class UFileMediaOutput : public UMediaOutput
{ 
public:
	FImageWriteOptions                                 WriteOptions;                                               // 0x0030   (0x0060)  
	FDirectoryPath                                     FilePath;                                                   // 0x0090   (0x0010)  
	FString                                            BaseFileName;                                               // 0x00A0   (0x0010)  
	bool                                               bOverrideDesiredSize;                                       // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	FIntPoint                                          DesiredSize;                                                // 0x00B4   (0x0008)  
	bool                                               bOverridePixelFormat;                                       // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	EFileMediaOutputPixelFormat                        DesiredPixelFormat;                                         // 0x00C0   (0x0004)  
	bool                                               bInvertAlpha;                                               // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData02_7[0xB];                                       // 0x00C5   (0x000B)  MISSED
};

/// Class /Script/MediaIOCore.MediaIOCoreSubsystem
/// Size: 0x00A8 (168 bytes) (0x000030 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMediaIOCoreSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0030   (0x0078)  MISSED
};

/// Struct /Script/MediaIOCore.MediaCaptureOptions
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FMediaCaptureOptions
{ 
	bool                                               bAutoRestartOnSourceSizeChange;                             // 0x0000   (0x0001)  
	EMediaCaptureOverrunAction                         OverrunAction;                                              // 0x0001   (0x0001)  
	EMediaCaptureCroppingType                          Crop;                                                       // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	FIntPoint                                          CustomCapturePoint;                                         // 0x0004   (0x0008)  
	bool                                               bResizeSourceBuffer;                                        // 0x000C   (0x0001)  
	bool                                               bSkipFrameWhenRunningExpensiveTasks;                        // 0x000D   (0x0001)  
	bool                                               bConvertToDesiredPixelFormat;                               // 0x000E   (0x0001)  
	bool                                               bForceAlphaToOneOnConversion;                               // 0x000F   (0x0001)  
	bool                                               bApplyLinearToSRGBConversion;                               // 0x0010   (0x0001)  
	bool                                               bAutostopOnCapture;                                         // 0x0011   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0012   (0x0002)  MISSED
	int32_t                                            NumberOfFramesToCapture;                                    // 0x0014   (0x0004)  
	EMediaCapturePhase                                 CapturePhase;                                               // 0x0018   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/MediaIOCore.MediaIOAutoDetectableTimecodeFormat_Backup
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMediaIOAutoDetectableTimecodeFormat_Backup
{ 
	EMediaIOTimecodeFormat                             TimecodeFormat;                                             // 0x0000   (0x0004)  
	bool                                               bAutoDetect;                                                // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0005   (0x0003)  MISSED
};

/// Struct /Script/MediaIOCore.MediaIODevice
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FMediaIODevice
{ 
	FName                                              DeviceName;                                                 // 0x0000   (0x0008)  
	int32_t                                            DeviceIdentifier;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/MediaIOCore.MediaIOConnection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FMediaIOConnection
{ 
	FMediaIODevice                                     Device;                                                     // 0x0000   (0x000C)  
	FName                                              protocol;                                                   // 0x000C   (0x0008)  
	EMediaIOTransportType                              TransportType;                                              // 0x0014   (0x0004)  
	EMediaIOQuadLinkTransportType                      QuadTransportType;                                          // 0x0018   (0x0004)  
	int32_t                                            PortIdentifier;                                             // 0x001C   (0x0004)  
};

/// Struct /Script/MediaIOCore.MediaIOMode
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FMediaIOMode
{ 
	FFrameRate                                         FrameRate;                                                  // 0x0000   (0x0008)  
	FIntPoint                                          Resolution;                                                 // 0x0008   (0x0008)  
	EMediaIOStandardType                               Standard;                                                   // 0x0010   (0x0004)  
	int32_t                                            DeviceModeIdentifier;                                       // 0x0014   (0x0004)  
};

/// Struct /Script/MediaIOCore.MediaIOConfiguration
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 MaxSize: 0x003C
struct FMediaIOConfiguration
{ 
	bool                                               bIsInput;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FMediaIOConnection                                 MediaConnection;                                            // 0x0004   (0x0020)  
	FMediaIOMode                                       MediaMode;                                                  // 0x0024   (0x0018)  
};

/// Struct /Script/MediaIOCore.MediaIOInputConfiguration
/// Size: 0x0044 (68 bytes) (0x000000 - 0x000044) align 4 MaxSize: 0x0044
struct FMediaIOInputConfiguration
{ 
	FMediaIOConfiguration                              MediaConfiguration;                                         // 0x0000   (0x003C)  
	EMediaIOInputType                                  InputType;                                                  // 0x003C   (0x0004)  
	int32_t                                            KeyPortIdentifier;                                          // 0x0040   (0x0004)  
};

/// Struct /Script/MediaIOCore.MediaIOOutputConfiguration
/// Size: 0x004C (76 bytes) (0x000000 - 0x00004C) align 4 MaxSize: 0x004C
struct FMediaIOOutputConfiguration
{ 
	FMediaIOConfiguration                              MediaConfiguration;                                         // 0x0000   (0x003C)  
	EMediaIOOutputType                                 OutputType;                                                 // 0x003C   (0x0004)  
	int32_t                                            KeyPortIdentifier;                                          // 0x0040   (0x0004)  
	EMediaIOReferenceType                              OutputReference;                                            // 0x0044   (0x0004)  
	int32_t                                            ReferencePortIdentifier;                                    // 0x0048   (0x0004)  
};

/// Struct /Script/MediaIOCore.MediaIOVideoTimecodeConfiguration
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FMediaIOVideoTimecodeConfiguration
{ 
	FMediaIOConfiguration                              MediaConfiguration;                                         // 0x0000   (0x003C)  
	EMediaIOAutoDetectableTimecodeFormat               TimecodeFormat;                                             // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMediaOutput) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMediaCapture) == 0x01E8); // 488 bytes (0x000028 - 0x0001E8)
static_assert(sizeof(UFileMediaCapture) == 0x0250); // 592 bytes (0x0001E8 - 0x000250)
static_assert(sizeof(UFileMediaOutput) == 0x00D0); // 208 bytes (0x000030 - 0x0000D0)
static_assert(sizeof(UMediaIOCoreSubsystem) == 0x00A8); // 168 bytes (0x000030 - 0x0000A8)
static_assert(sizeof(FMediaCaptureOptions) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FMediaIOAutoDetectableTimecodeFormat_Backup) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMediaIODevice) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FMediaIOConnection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMediaIOMode) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMediaIOConfiguration) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(FMediaIOInputConfiguration) == 0x0044); // 68 bytes (0x000000 - 0x000044)
static_assert(sizeof(FMediaIOOutputConfiguration) == 0x004C); // 76 bytes (0x000000 - 0x00004C)
static_assert(sizeof(FMediaIOVideoTimecodeConfiguration) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(offsetof(UMediaCapture, MediaOutput) == 0x0050);
static_assert(offsetof(UFileMediaOutput, WriteOptions) == 0x0030);
static_assert(offsetof(UFileMediaOutput, FilePath) == 0x0090);
static_assert(offsetof(UFileMediaOutput, BaseFileName) == 0x00A0);
static_assert(offsetof(UFileMediaOutput, DesiredSize) == 0x00B4);
static_assert(offsetof(UFileMediaOutput, DesiredPixelFormat) == 0x00C0);
static_assert(offsetof(FMediaCaptureOptions, OverrunAction) == 0x0001);
static_assert(offsetof(FMediaCaptureOptions, Crop) == 0x0002);
static_assert(offsetof(FMediaCaptureOptions, CustomCapturePoint) == 0x0004);
static_assert(offsetof(FMediaCaptureOptions, CapturePhase) == 0x0018);
static_assert(offsetof(FMediaIOAutoDetectableTimecodeFormat_Backup, TimecodeFormat) == 0x0000);
static_assert(offsetof(FMediaIODevice, DeviceName) == 0x0000);
static_assert(offsetof(FMediaIOConnection, Device) == 0x0000);
static_assert(offsetof(FMediaIOConnection, protocol) == 0x000C);
static_assert(offsetof(FMediaIOConnection, TransportType) == 0x0014);
static_assert(offsetof(FMediaIOConnection, QuadTransportType) == 0x0018);
static_assert(offsetof(FMediaIOMode, FrameRate) == 0x0000);
static_assert(offsetof(FMediaIOMode, Resolution) == 0x0008);
static_assert(offsetof(FMediaIOMode, Standard) == 0x0010);
static_assert(offsetof(FMediaIOConfiguration, MediaConnection) == 0x0004);
static_assert(offsetof(FMediaIOConfiguration, MediaMode) == 0x0024);
static_assert(offsetof(FMediaIOInputConfiguration, MediaConfiguration) == 0x0000);
static_assert(offsetof(FMediaIOInputConfiguration, InputType) == 0x003C);
static_assert(offsetof(FMediaIOOutputConfiguration, MediaConfiguration) == 0x0000);
static_assert(offsetof(FMediaIOOutputConfiguration, OutputType) == 0x003C);
static_assert(offsetof(FMediaIOOutputConfiguration, OutputReference) == 0x0044);
static_assert(offsetof(FMediaIOVideoTimecodeConfiguration, MediaConfiguration) == 0x0000);
static_assert(offsetof(FMediaIOVideoTimecodeConfiguration, TimecodeFormat) == 0x003C);
