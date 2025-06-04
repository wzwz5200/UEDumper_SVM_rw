
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

#pragma pack(push, 0x1)

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x01 (1 bytes)
enum class ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride                                                = 0,
	ECameraFocusMethod__Manual                                                       = 1,
	ECameraFocusMethod__Tracking                                                     = 2,
	ECameraFocusMethod__Disable                                                      = 3
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x02C0 (704 bytes) (0x000290 - 0x0002C0) align 8 MaxSize: 0x02C0
class ACameraRig_Crane : public AActor
{ 
public:
	float                                              CranePitch;                                                 // 0x0290   (0x0004)  
	float                                              CraneYaw;                                                   // 0x0294   (0x0004)  
	float                                              CraneArmLength;                                             // 0x0298   (0x0004)  
	bool                                               bLockMountPitch;                                            // 0x029C   (0x0001)  
	bool                                               bLockMountYaw;                                              // 0x029D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x029E   (0x0002)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x02A0   (0x0008)  
	class USceneComponent*                             CraneYawControl;                                            // 0x02A8   (0x0008)  
	class USceneComponent*                             CranePitchControl;                                          // 0x02B0   (0x0008)  
	class USceneComponent*                             CraneCameraMount;                                           // 0x02B8   (0x0008)  
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x02B0 (688 bytes) (0x000290 - 0x0002B0) align 8 MaxSize: 0x02B0
class ACameraRig_Rail : public AActor
{ 
public:
	float                                              CurrentPositionOnRail;                                      // 0x0290   (0x0004)  
	bool                                               bLockOrientationToRail;                                     // 0x0294   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0295   (0x0003)  MISSED
	class USceneComponent*                             TransformComponent;                                         // 0x0298   (0x0008)  
	class USplineComponent*                            RailSplineComponent;                                        // 0x02A0   (0x0008)  
	class USceneComponent*                             RailCameraMount;                                            // 0x02A8   (0x0008)  


	/// Functions
	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent
	// class USplineComponent* GetRailSplineComponent();                                                                        // [0x4384330] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FCameraLookatTrackingSettings
{ 
	bool                                               bEnableLookAtTracking : 1;                                  // 0x0000:0 (0x0001)  
	bool                                               bDrawDebugLookAtTrackingPosition : 1;                       // 0x0000:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              LookAtTrackingInterpSpeed;                                  // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0008   (0x0018)  MISSED
	TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0020   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0028   (0x0028)  MISSED
	FVector                                            RelativeOffset;                                             // 0x0050   (0x0018)  
	bool                                               bAllowRoll : 1;                                             // 0x0068:0 (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0069   (0x0007)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0A20 (2592 bytes) (0x0009A0 - 0x000A20) align 16 MaxSize: 0x0A20
class ACineCameraActor : public ACameraActor
{ 
public:
	FCameraLookatTrackingSettings                      LookatTrackingSettings;                                     // 0x09A0   (0x0070)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0A10   (0x0010)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	// class UCineCameraComponent* GetCineCameraComponent();                                                                    // [0x4382fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FCameraFilmbackSettings
{ 
	float                                              SensorWidth;                                                // 0x0000   (0x0004)  
	float                                              SensorHeight;                                               // 0x0004   (0x0004)  
	float                                              SensorAspectRatio;                                          // 0x0008   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FCameraLensSettings
{ 
	float                                              MinFocalLength;                                             // 0x0000   (0x0004)  
	float                                              MaxFocalLength;                                             // 0x0004   (0x0004)  
	float                                              MinFStop;                                                   // 0x0008   (0x0004)  
	float                                              MaxFStop;                                                   // 0x000C   (0x0004)  
	float                                              MinimumFocusDistance;                                       // 0x0010   (0x0004)  
	float                                              SqueezeFactor;                                              // 0x0014   (0x0004)  
	int32_t                                            DiaphragmBladeCount;                                        // 0x0018   (0x0004)  
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FCameraTrackingFocusSettings
{ 
	TWeakObjectPtr<class AActor*>                      ActorToTrack;                                               // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0008   (0x0028)  MISSED
	FVector                                            RelativeOffset;                                             // 0x0030   (0x0018)  
	bool                                               bDrawDebugTrackingFocusPoint : 1;                           // 0x0048:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FCameraFocusSettings
{ 
	ECameraFocusMethod                                 FocusMethod;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              ManualFocusDistance;                                        // 0x0004   (0x0004)  
	FCameraTrackingFocusSettings                       TrackingFocusSettings;                                      // 0x0008   (0x0050)  
	bool                                               bSmoothFocusChanges : 1;                                    // 0x0058:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0059   (0x0003)  MISSED
	float                                              FocusSmoothingInterpSpeed;                                  // 0x005C   (0x0004)  
	float                                              FocusOffset;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.PlateCropSettings
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FPlateCropSettings
{ 
	float                                              AspectRatio;                                                // 0x0000   (0x0004)  
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNamedFilmbackPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNamedLensPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FCameraLensSettings                                LensSettings;                                               // 0x0010   (0x001C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x0B50 (2896 bytes) (0x000A30 - 0x000B50) align 16 MaxSize: 0x0B50
class UCineCameraComponent : public UCameraComponent
{ 
public:
	FCameraFilmbackSettings                            FilmbackSettings;                                           // 0x0A30   (0x000C)  
	FCameraFilmbackSettings                            Filmback;                                                   // 0x0A3C   (0x000C)  
	FCameraLensSettings                                LensSettings;                                               // 0x0A48   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0A64   (0x0004)  MISSED
	FCameraFocusSettings                               FocusSettings;                                              // 0x0A68   (0x0068)  
	FPlateCropSettings                                 CropSettings;                                               // 0x0AD0   (0x0004)  
	float                                              CurrentFocalLength;                                         // 0x0AD4   (0x0004)  
	float                                              CurrentAperture;                                            // 0x0AD8   (0x0004)  
	float                                              CurrentFocusDistance;                                       // 0x0ADC   (0x0004)  
	bool                                               bOverride_CustomNearClippingPlane : 1;                      // 0x0AE0:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0AE1   (0x0003)  MISSED
	float                                              CustomNearClippingPlane;                                    // 0x0AE4   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0AE8   (0x0008)  MISSED
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0AF0   (0x0010)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0B00   (0x0010)  
	FString                                            DefaultFilmbackPresetName;                                  // 0x0B10   (0x0010)  
	FString                                            DefaultFilmbackPreset;                                      // 0x0B20   (0x0010)  
	FString                                            DefaultLensPresetName;                                      // 0x0B30   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x0B40   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x0B44   (0x0004)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0B48   (0x0008)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensSettings
	// void SetLensSettings(FCameraLensSettings& NewLensSettings);                                                              // [0x4385300] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	// void SetLensPresetByName(FString InPresetName);                                                                          // [0x4385110] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFocusSettings
	// void SetFocusSettings(FCameraFocusSettings& NewFocusSettings);                                                           // [0x4385000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// void SetFilmbackPresetByName(FString InPresetName);                                                                      // [0x4384dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmback
	// void SetFilmback(FCameraFilmbackSettings& NewFilmback);                                                                  // [0x4384d10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCustomNearClippingPlane
	// void SetCustomNearClippingPlane(float NewCustomNearClippingPlane);                                                       // [0x4384810] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	// void SetCurrentFocalLength(float InFocalLength);                                                                         // [0x4384780] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCurrentAperture
	// void SetCurrentAperture(float NewCurrentAperture);                                                                       // [0x43846f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCropSettings
	// void SetCropSettings(FPlateCropSettings& NewCropSettings);                                                               // [0x4384640] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetCropPresetByName
	// void SetCropPresetByName(FString InPresetName);                                                                          // [0x43843f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                          // [0x4384350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	// TArray<FNamedLensPreset> GetLensPresetsCopy();                                                                           // [0x4384170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	// FString GetLensPresetName();                                                                                             // [0x4383ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                        // [0x4383c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	// TArray<FNamedFilmbackPreset> GetFilmbackPresetsCopy();                                                                   // [0x4383a70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// FString GetFilmbackPresetName();                                                                                         // [0x43837e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
	// FString GetDefaultFilmbackPresetName();                                                                                  // [0x43834c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetCropPresetName
	// FString GetCropPresetName();                                                                                             // [0x4383240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CinematicCamera.NamedPlateCropPreset
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNamedPlateCropPreset
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FPlateCropSettings                                 CropSettings;                                               // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/CinematicCamera.CineCameraSettings
/// Size: 0x00B0 (176 bytes) (0x000038 - 0x0000B0) align 8 MaxSize: 0x00B0
class UCineCameraSettings : public UDeveloperSettings
{ 
public:
	FString                                            DefaultLensPresetName;                                      // 0x0038   (0x0010)  
	float                                              DefaultLensFocalLength;                                     // 0x0048   (0x0004)  
	float                                              DefaultLensFStop;                                           // 0x004C   (0x0004)  
	TArray<FNamedLensPreset>                           LensPresets;                                                // 0x0050   (0x0010)  
	FString                                            DefaultFilmbackPreset;                                      // 0x0060   (0x0010)  
	TArray<FNamedFilmbackPreset>                       FilmbackPresets;                                            // 0x0070   (0x0010)  
	FString                                            DefaultCropPresetName;                                      // 0x0080   (0x0010)  
	TArray<FNamedPlateCropPreset>                      CropPresets;                                                // 0x0090   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/CinematicCamera.CineCameraSettings.SetLensPresets
	// void SetLensPresets(TArray<FNamedLensPreset>& InLensPresets);                                                            // [0x43851c0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetFilmbackPresets
	// void SetFilmbackPresets(TArray<FNamedFilmbackPreset>& InFilmbackPresets);                                                // [0x4384e80] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensPresetName
	// void SetDefaultLensPresetName(FString InDefaultLensPresetName);                                                          // [0x4384c00] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFStop
	// void SetDefaultLensFStop(float InDefaultLensFStop);                                                                      // [0x4384ac0] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultLensFocalLength
	// void SetDefaultLensFocalLength(float InDefaultLensFocalLength);                                                          // [0x4384b60] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultFilmbackPreset
	// void SetDefaultFilmbackPreset(FString InDefaultFilmbackPreset);                                                          // [0x43849b0] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetDefaultCropPresetName
	// void SetDefaultCropPresetName(FString InDefaultCropPresetName);                                                          // [0x4384890] Final|Native|Private|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.SetCropPresets
	// void SetCropPresets(TArray<FNamedPlateCropPreset>& InCropPresets);                                                       // [0x43844a0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetNames
	// TArray<FString> GetLensPresetNames();                                                                                    // [0x4384020] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetLensPresetByName
	// bool GetLensPresetByName(FString PresetName, FCameraLensSettings& LensSettings);                                         // [0x4383c50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetNames
	// TArray<FString> GetFilmbackPresetNames();                                                                                // [0x4383920] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetFilmbackPresetByName
	// bool GetFilmbackPresetByName(FString PresetName, FCameraFilmbackSettings& FilmbackSettings);                             // [0x43835c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetNames
	// TArray<FString> GetCropPresetNames();                                                                                    // [0x4383370] Final|Native|Private|Const 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCropPresetByName
	// bool GetCropPresetByName(FString PresetName, FPlateCropSettings& CropSettings);                                          // [0x4383040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraSettings.GetCineCameraSettings
	// class UCineCameraSettings* GetCineCameraSettings();                                                                      // [0x4382fd0] Final|Native|Static|Private|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(ACameraRig_Crane) == 0x02C0); // 704 bytes (0x000290 - 0x0002C0)
static_assert(sizeof(ACameraRig_Rail) == 0x02B0); // 688 bytes (0x000290 - 0x0002B0)
static_assert(sizeof(FCameraLookatTrackingSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(ACineCameraActor) == 0x0A20); // 2592 bytes (0x0009A0 - 0x000A20)
static_assert(sizeof(FCameraFilmbackSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FCameraLensSettings) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FCameraTrackingFocusSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FCameraFocusSettings) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FPlateCropSettings) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNamedFilmbackPreset) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNamedLensPreset) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UCineCameraComponent) == 0x0B50); // 2896 bytes (0x000A30 - 0x000B50)
static_assert(sizeof(FNamedPlateCropPreset) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UCineCameraSettings) == 0x00B0); // 176 bytes (0x000038 - 0x0000B0)
static_assert(offsetof(ACameraRig_Crane, TransformComponent) == 0x02A0);
static_assert(offsetof(ACameraRig_Crane, CraneYawControl) == 0x02A8);
static_assert(offsetof(ACameraRig_Crane, CranePitchControl) == 0x02B0);
static_assert(offsetof(ACameraRig_Crane, CraneCameraMount) == 0x02B8);
static_assert(offsetof(ACameraRig_Rail, TransformComponent) == 0x0298);
static_assert(offsetof(ACameraRig_Rail, RailSplineComponent) == 0x02A0);
static_assert(offsetof(ACameraRig_Rail, RailCameraMount) == 0x02A8);
static_assert(offsetof(FCameraLookatTrackingSettings, ActorToTrack) == 0x0020);
static_assert(offsetof(FCameraLookatTrackingSettings, RelativeOffset) == 0x0050);
static_assert(offsetof(ACineCameraActor, LookatTrackingSettings) == 0x09A0);
static_assert(offsetof(FCameraTrackingFocusSettings, ActorToTrack) == 0x0000);
static_assert(offsetof(FCameraTrackingFocusSettings, RelativeOffset) == 0x0030);
static_assert(offsetof(FCameraFocusSettings, FocusMethod) == 0x0000);
static_assert(offsetof(FCameraFocusSettings, TrackingFocusSettings) == 0x0008);
static_assert(offsetof(FNamedFilmbackPreset, Name) == 0x0000);
static_assert(offsetof(FNamedFilmbackPreset, FilmbackSettings) == 0x0010);
static_assert(offsetof(FNamedLensPreset, Name) == 0x0000);
static_assert(offsetof(FNamedLensPreset, LensSettings) == 0x0010);
static_assert(offsetof(UCineCameraComponent, FilmbackSettings) == 0x0A30);
static_assert(offsetof(UCineCameraComponent, Filmback) == 0x0A3C);
static_assert(offsetof(UCineCameraComponent, LensSettings) == 0x0A48);
static_assert(offsetof(UCineCameraComponent, FocusSettings) == 0x0A68);
static_assert(offsetof(UCineCameraComponent, CropSettings) == 0x0AD0);
static_assert(offsetof(UCineCameraComponent, FilmbackPresets) == 0x0AF0);
static_assert(offsetof(UCineCameraComponent, LensPresets) == 0x0B00);
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPresetName) == 0x0B10);
static_assert(offsetof(UCineCameraComponent, DefaultFilmbackPreset) == 0x0B20);
static_assert(offsetof(UCineCameraComponent, DefaultLensPresetName) == 0x0B30);
static_assert(offsetof(FNamedPlateCropPreset, Name) == 0x0000);
static_assert(offsetof(FNamedPlateCropPreset, CropSettings) == 0x0010);
static_assert(offsetof(UCineCameraSettings, DefaultLensPresetName) == 0x0038);
static_assert(offsetof(UCineCameraSettings, LensPresets) == 0x0050);
static_assert(offsetof(UCineCameraSettings, DefaultFilmbackPreset) == 0x0060);
static_assert(offsetof(UCineCameraSettings, FilmbackPresets) == 0x0070);
static_assert(offsetof(UCineCameraSettings, DefaultCropPresetName) == 0x0080);
static_assert(offsetof(UCineCameraSettings, CropPresets) == 0x0090);
