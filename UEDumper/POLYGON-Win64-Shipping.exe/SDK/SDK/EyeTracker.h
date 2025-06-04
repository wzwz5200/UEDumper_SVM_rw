
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/EyeTracker.EEyeTrackerStatus
/// Size: 0x01 (1 bytes)
enum class EEyeTrackerStatus : uint8_t
{
	EEyeTrackerStatus__NotConnected                                                  = 0,
	EEyeTrackerStatus__NotTracking                                                   = 1,
	EEyeTrackerStatus__Tracking                                                      = 2
};

/// Class /Script/EyeTracker.EyeTrackerFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
	// void SetEyeTrackedPlayer(class APlayerController* PlayerController);                                                     // [0x30f55f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
	// bool IsStereoGazeDataAvailable();                                                                                        // [0x30f55a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
	// bool IsEyeTrackerConnected();                                                                                            // [0x30f5540] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
	// bool GetStereoGazeData(FEyeTrackerStereoGazeData& OutGazeData);                                                          // [0x30f53d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
	// bool GetGazeData(FEyeTrackerGazeData& OutGazeData);                                                                      // [0x30f5280] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/EyeTracker.EyeTrackerGazeData
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FEyeTrackerGazeData
{ 
	FVector                                            GazeOrigin;                                                 // 0x0000   (0x0018)  
	FVector                                            GazeDirection;                                              // 0x0018   (0x0018)  
	FVector                                            FixationPoint;                                              // 0x0030   (0x0018)  
	float                                              ConfidenceValue;                                            // 0x0048   (0x0004)  
	bool                                               bIsLeftEyeBlink;                                            // 0x004C   (0x0001)  
	bool                                               bIsRightEyeBlink;                                           // 0x004D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x004E   (0x0002)  MISSED
	float                                              LeftPupilDiameter;                                          // 0x0050   (0x0004)  
	float                                              RightPupilDiameter;                                         // 0x0054   (0x0004)  
};

/// Struct /Script/EyeTracker.EyeTrackerStereoGazeData
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FEyeTrackerStereoGazeData
{ 
	FVector                                            LeftEyeOrigin;                                              // 0x0000   (0x0018)  
	FVector                                            LeftEyeDirection;                                           // 0x0018   (0x0018)  
	FVector                                            RightEyeOrigin;                                             // 0x0030   (0x0018)  
	FVector                                            RightEyeDirection;                                          // 0x0048   (0x0018)  
	FVector                                            FixationPoint;                                              // 0x0060   (0x0018)  
	float                                              ConfidenceValue;                                            // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UEyeTrackerFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FEyeTrackerGazeData) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FEyeTrackerStereoGazeData) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(offsetof(FEyeTrackerGazeData, GazeOrigin) == 0x0000);
static_assert(offsetof(FEyeTrackerGazeData, GazeDirection) == 0x0018);
static_assert(offsetof(FEyeTrackerGazeData, FixationPoint) == 0x0030);
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeOrigin) == 0x0000);
static_assert(offsetof(FEyeTrackerStereoGazeData, LeftEyeDirection) == 0x0018);
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeOrigin) == 0x0030);
static_assert(offsetof(FEyeTrackerStereoGazeData, RightEyeDirection) == 0x0048);
static_assert(offsetof(FEyeTrackerStereoGazeData, FixationPoint) == 0x0060);
