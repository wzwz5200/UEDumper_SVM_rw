
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MRMesh

#pragma pack(push, 0x1)

/// Enum /Script/AugmentedReality.EARTrackingState
/// Size: 0x01 (1 bytes)
enum class EARTrackingState : uint8_t
{
	EARTrackingState__Unknown                                                        = 0,
	EARTrackingState__Tracking                                                       = 1,
	EARTrackingState__NotTracking                                                    = 2,
	EARTrackingState__StoppedTracking                                                = 3
};

/// Enum /Script/AugmentedReality.EARSessionConfigFlags
/// Size: 0x01 (1 bytes)
enum class EARSessionConfigFlags : uint8_t
{
	EARSessionConfigFlags__None                                                      = 0,
	EARSessionConfigFlags__GenerateMeshData                                          = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe                                 = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData                              = 4,
	EARSessionConfigFlags__GenerateNavMeshForMeshData                                = 8,
	EARSessionConfigFlags__UseMeshDataForOcclusion                                   = 16
};

/// Enum /Script/AugmentedReality.EPlaneComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EPlaneComponentDebugMode : uint8_t
{
	EPlaneComponentDebugMode__None                                                   = 0,
	EPlaneComponentDebugMode__ShowNetworkRole                                        = 1,
	EPlaneComponentDebugMode__ShowClassification                                     = 2
};

/// Enum /Script/AugmentedReality.EFaceComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EFaceComponentDebugMode : uint8_t
{
	EFaceComponentDebugMode__None                                                    = 0,
	EFaceComponentDebugMode__ShowEyeVectors                                          = 1,
	EFaceComponentDebugMode__ShowFaceMesh                                            = 2
};

/// Enum /Script/AugmentedReality.EARFaceTransformMixing
/// Size: 0x01 (1 bytes)
enum class EARFaceTransformMixing : uint8_t
{
	EARFaceTransformMixing__ComponentOnly                                            = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation                         = 1,
	EARFaceTransformMixing__ComponentWithTracked                                     = 2,
	EARFaceTransformMixing__TrackingOnly                                             = 3
};

/// Enum /Script/AugmentedReality.EImageComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EImageComponentDebugMode : uint8_t
{
	EImageComponentDebugMode__None                                                   = 0,
	EImageComponentDebugMode__ShowDetectedImage                                      = 1
};

/// Enum /Script/AugmentedReality.EQRCodeComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EQRCodeComponentDebugMode : uint8_t
{
	EQRCodeComponentDebugMode__None                                                  = 0,
	EQRCodeComponentDebugMode__ShowQRCode                                            = 1
};

/// Enum /Script/AugmentedReality.EPoseComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EPoseComponentDebugMode : uint8_t
{
	EPoseComponentDebugMode__None                                                    = 0,
	EPoseComponentDebugMode__ShowSkeleton                                            = 1
};

/// Enum /Script/AugmentedReality.EGeoAnchorComponentDebugMode
/// Size: 0x01 (1 bytes)
enum class EGeoAnchorComponentDebugMode : uint8_t
{
	EGeoAnchorComponentDebugMode__None                                               = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData                                        = 1
};

/// Enum /Script/AugmentedReality.EARServiceAvailability
/// Size: 0x01 (1 bytes)
enum class EARServiceAvailability : uint8_t
{
	EARServiceAvailability__UnknownError                                             = 0,
	EARServiceAvailability__UnknownChecking                                          = 1,
	EARServiceAvailability__UnknownTimedOut                                          = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable                              = 3,
	EARServiceAvailability__SupportedNotInstalled                                    = 4,
	EARServiceAvailability__SupportedVersionTooOld                                   = 5,
	EARServiceAvailability__SupportedInstalled                                       = 6
};

/// Enum /Script/AugmentedReality.EARServiceInstallRequestResult
/// Size: 0x01 (1 bytes)
enum class EARServiceInstallRequestResult : uint8_t
{
	EARServiceInstallRequestResult__Installed                                        = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible                              = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation                         = 2,
	EARServiceInstallRequestResult__FatalError                                       = 3
};

/// Enum /Script/AugmentedReality.EARServicePermissionRequestResult
/// Size: 0x01 (1 bytes)
enum class EARServicePermissionRequestResult : uint8_t
{
	EARServicePermissionRequestResult__Granted                                       = 0,
	EARServicePermissionRequestResult__Denied                                        = 1
};

/// Enum /Script/AugmentedReality.EARGeoTrackingState
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingState : uint8_t
{
	EARGeoTrackingState__Initializing                                                = 0,
	EARGeoTrackingState__Localized                                                   = 1,
	EARGeoTrackingState__Localizing                                                  = 2,
	EARGeoTrackingState__NotAvailable                                                = 3
};

/// Enum /Script/AugmentedReality.EARGeoTrackingStateReason
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingStateReason : uint8_t
{
	EARGeoTrackingStateReason__None                                                  = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation                                = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions                               = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow                                   = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable                                 = 4,
	EARGeoTrackingStateReason__WaitingForLocation                                    = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded                                      = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed                              = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck                           = 8
};

/// Enum /Script/AugmentedReality.EARGeoTrackingAccuracy
/// Size: 0x01 (1 bytes)
enum class EARGeoTrackingAccuracy : uint8_t
{
	EARGeoTrackingAccuracy__Undetermined                                             = 0,
	EARGeoTrackingAccuracy__Low                                                      = 1,
	EARGeoTrackingAccuracy__Medium                                                   = 2,
	EARGeoTrackingAccuracy__High                                                     = 3
};

/// Enum /Script/AugmentedReality.EARWorldAlignment
/// Size: 0x01 (1 bytes)
enum class EARWorldAlignment : uint8_t
{
	EARWorldAlignment__Gravity                                                       = 0,
	EARWorldAlignment__GravityAndHeading                                             = 1,
	EARWorldAlignment__Camera                                                        = 2
};

/// Enum /Script/AugmentedReality.EARSessionType
/// Size: 0x01 (1 bytes)
enum class EARSessionType : uint8_t
{
	EARSessionType__None                                                             = 0,
	EARSessionType__Orientation                                                      = 1,
	EARSessionType__World                                                            = 2,
	EARSessionType__Face                                                             = 3,
	EARSessionType__Image                                                            = 4,
	EARSessionType__ObjectScanning                                                   = 5,
	EARSessionType__PoseTracking                                                     = 6,
	EARSessionType__GeoTracking                                                      = 7
};

/// Enum /Script/AugmentedReality.EARPlaneDetectionMode
/// Size: 0x01 (1 bytes)
enum class EARPlaneDetectionMode : uint8_t
{
	EARPlaneDetectionMode__None                                                      = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection                                  = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection                                    = 2
};

/// Enum /Script/AugmentedReality.EARLightEstimationMode
/// Size: 0x01 (1 bytes)
enum class EARLightEstimationMode : uint8_t
{
	EARLightEstimationMode__None                                                     = 0,
	EARLightEstimationMode__AmbientLightEstimate                                     = 1,
	EARLightEstimationMode__DirectionalLightEstimate                                 = 2
};

/// Enum /Script/AugmentedReality.EARFrameSyncMode
/// Size: 0x01 (1 bytes)
enum class EARFrameSyncMode : uint8_t
{
	EARFrameSyncMode__SyncTickWithCameraImage                                        = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage                                     = 1
};

/// Enum /Script/AugmentedReality.EAREnvironmentCaptureProbeType
/// Size: 0x01 (1 bytes)
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	EAREnvironmentCaptureProbeType__None                                             = 0,
	EAREnvironmentCaptureProbeType__Manual                                           = 1,
	EAREnvironmentCaptureProbeType__Automatic                                        = 2
};

/// Enum /Script/AugmentedReality.EARFaceTrackingUpdate
/// Size: 0x01 (1 bytes)
enum class EARFaceTrackingUpdate : uint8_t
{
	EARFaceTrackingUpdate__CurvesAndGeo                                              = 0,
	EARFaceTrackingUpdate__CurvesOnly                                                = 1
};

/// Enum /Script/AugmentedReality.EARSessionTrackingFeature
/// Size: 0x01 (1 bytes)
enum class EARSessionTrackingFeature : uint8_t
{
	EARSessionTrackingFeature__None                                                  = 0,
	EARSessionTrackingFeature__PoseDetection2D                                       = 1,
	EARSessionTrackingFeature__PersonSegmentation                                    = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth                           = 3,
	EARSessionTrackingFeature__SceneDepth                                            = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth                                    = 5
};

/// Enum /Script/AugmentedReality.EARSceneReconstruction
/// Size: 0x01 (1 bytes)
enum class EARSceneReconstruction : uint8_t
{
	EARSceneReconstruction__None                                                     = 0,
	EARSceneReconstruction__MeshOnly                                                 = 1,
	EARSceneReconstruction__MeshWithClassification                                   = 2
};

/// Enum /Script/AugmentedReality.EARTextureType
/// Size: 0x01 (1 bytes)
enum class EARTextureType : uint8_t
{
	EARTextureType__Unknown                                                          = 0,
	EARTextureType__CameraImage                                                      = 1,
	EARTextureType__CameraDepth                                                      = 2,
	EARTextureType__EnvironmentCapture                                               = 3,
	EARTextureType__PersonSegmentationImage                                          = 4,
	EARTextureType__PersonSegmentationDepth                                          = 5,
	EARTextureType__SceneDepthMap                                                    = 6,
	EARTextureType__SceneDepthConfidenceMap                                          = 7
};

/// Enum /Script/AugmentedReality.EARDepthQuality
/// Size: 0x01 (1 bytes)
enum class EARDepthQuality : uint8_t
{
	EARDepthQuality__Unkown                                                          = 0,
	EARDepthQuality__Low                                                             = 1,
	EARDepthQuality__High                                                            = 2
};

/// Enum /Script/AugmentedReality.EARDepthAccuracy
/// Size: 0x01 (1 bytes)
enum class EARDepthAccuracy : uint8_t
{
	EARDepthAccuracy__Unkown                                                         = 0,
	EARDepthAccuracy__Approximate                                                    = 1,
	EARDepthAccuracy__Accurate                                                       = 2
};

/// Enum /Script/AugmentedReality.EARFaceTrackingDirection
/// Size: 0x01 (1 bytes)
enum class EARFaceTrackingDirection : uint8_t
{
	EARFaceTrackingDirection__FaceRelative                                           = 0,
	EARFaceTrackingDirection__FaceMirrored                                           = 1
};

/// Enum /Script/AugmentedReality.EARFaceBlendShape
/// Size: 0x01 (1 bytes)
enum class EARFaceBlendShape : uint8_t
{
	EARFaceBlendShape__EyeBlinkLeft                                                  = 0,
	EARFaceBlendShape__EyeLookDownLeft                                               = 1,
	EARFaceBlendShape__EyeLookInLeft                                                 = 2,
	EARFaceBlendShape__EyeLookOutLeft                                                = 3,
	EARFaceBlendShape__EyeLookUpLeft                                                 = 4,
	EARFaceBlendShape__EyeSquintLeft                                                 = 5,
	EARFaceBlendShape__EyeWideLeft                                                   = 6,
	EARFaceBlendShape__EyeBlinkRight                                                 = 7,
	EARFaceBlendShape__EyeLookDownRight                                              = 8,
	EARFaceBlendShape__EyeLookInRight                                                = 9,
	EARFaceBlendShape__EyeLookOutRight                                               = 10,
	EARFaceBlendShape__EyeLookUpRight                                                = 11,
	EARFaceBlendShape__EyeSquintRight                                                = 12,
	EARFaceBlendShape__EyeWideRight                                                  = 13,
	EARFaceBlendShape__JawForward                                                    = 14,
	EARFaceBlendShape__JawLeft                                                       = 15,
	EARFaceBlendShape__JawRight                                                      = 16,
	EARFaceBlendShape__JawOpen                                                       = 17,
	EARFaceBlendShape__MouthClose                                                    = 18,
	EARFaceBlendShape__MouthFunnel                                                   = 19,
	EARFaceBlendShape__MouthPucker                                                   = 20,
	EARFaceBlendShape__MouthLeft                                                     = 21,
	EARFaceBlendShape__MouthRight                                                    = 22,
	EARFaceBlendShape__MouthSmileLeft                                                = 23,
	EARFaceBlendShape__MouthSmileRight                                               = 24,
	EARFaceBlendShape__MouthFrownLeft                                                = 25,
	EARFaceBlendShape__MouthFrownRight                                               = 26,
	EARFaceBlendShape__MouthDimpleLeft                                               = 27,
	EARFaceBlendShape__MouthDimpleRight                                              = 28,
	EARFaceBlendShape__MouthStretchLeft                                              = 29,
	EARFaceBlendShape__MouthStretchRight                                             = 30,
	EARFaceBlendShape__MouthRollLower                                                = 31,
	EARFaceBlendShape__MouthRollUpper                                                = 32,
	EARFaceBlendShape__MouthShrugLower                                               = 33,
	EARFaceBlendShape__MouthShrugUpper                                               = 34,
	EARFaceBlendShape__MouthPressLeft                                                = 35,
	EARFaceBlendShape__MouthPressRight                                               = 36,
	EARFaceBlendShape__MouthLowerDownLeft                                            = 37,
	EARFaceBlendShape__MouthLowerDownRight                                           = 38,
	EARFaceBlendShape__MouthUpperUpLeft                                              = 39,
	EARFaceBlendShape__MouthUpperUpRight                                             = 40,
	EARFaceBlendShape__BrowDownLeft                                                  = 41,
	EARFaceBlendShape__BrowDownRight                                                 = 42,
	EARFaceBlendShape__BrowInnerUp                                                   = 43,
	EARFaceBlendShape__BrowOuterUpLeft                                               = 44,
	EARFaceBlendShape__BrowOuterUpRight                                              = 45,
	EARFaceBlendShape__CheekPuff                                                     = 46,
	EARFaceBlendShape__CheekSquintLeft                                               = 47,
	EARFaceBlendShape__CheekSquintRight                                              = 48,
	EARFaceBlendShape__NoseSneerLeft                                                 = 49,
	EARFaceBlendShape__NoseSneerRight                                                = 50,
	EARFaceBlendShape__TongueOut                                                     = 51,
	EARFaceBlendShape__HeadYaw                                                       = 52,
	EARFaceBlendShape__HeadPitch                                                     = 53,
	EARFaceBlendShape__HeadRoll                                                      = 54,
	EARFaceBlendShape__LeftEyeYaw                                                    = 55,
	EARFaceBlendShape__LeftEyePitch                                                  = 56,
	EARFaceBlendShape__LeftEyeRoll                                                   = 57,
	EARFaceBlendShape__RightEyeYaw                                                   = 58,
	EARFaceBlendShape__RightEyePitch                                                 = 59,
	EARFaceBlendShape__RightEyeRoll                                                  = 60
};

/// Enum /Script/AugmentedReality.EAREye
/// Size: 0x01 (1 bytes)
enum class EAREye : uint8_t
{
	EAREye__LeftEye                                                                  = 0,
	EAREye__RightEye                                                                 = 1
};

/// Enum /Script/AugmentedReality.EARCaptureType
/// Size: 0x01 (1 bytes)
enum class EARCaptureType : uint8_t
{
	EARCaptureType__Camera                                                           = 0,
	EARCaptureType__QRCode                                                           = 1,
	EARCaptureType__SpatialMapping                                                   = 2,
	EARCaptureType__SceneUnderstanding                                               = 3,
	EARCaptureType__HandMesh                                                         = 4
};

/// Enum /Script/AugmentedReality.EARLineTraceChannels
/// Size: 0x01 (1 bytes)
enum class EARLineTraceChannels : uint8_t
{
	EARLineTraceChannels__None                                                       = 0,
	EARLineTraceChannels__FeaturePoint                                               = 1,
	EARLineTraceChannels__GroundPlane                                                = 2,
	EARLineTraceChannels__PlaneUsingExtent                                           = 4,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon                                  = 8
};

/// Enum /Script/AugmentedReality.EARTrackingQuality
/// Size: 0x01 (1 bytes)
enum class EARTrackingQuality : uint8_t
{
	EARTrackingQuality__NotTracking                                                  = 0,
	EARTrackingQuality__OrientationOnly                                              = 1,
	EARTrackingQuality__OrientationAndPosition                                       = 2
};

/// Enum /Script/AugmentedReality.EARTrackingQualityReason
/// Size: 0x01 (1 bytes)
enum class EARTrackingQualityReason : uint8_t
{
	EARTrackingQualityReason__None                                                   = 0,
	EARTrackingQualityReason__Initializing                                           = 1,
	EARTrackingQualityReason__Relocalizing                                           = 2,
	EARTrackingQualityReason__ExcessiveMotion                                        = 3,
	EARTrackingQualityReason__InsufficientFeatures                                   = 4,
	EARTrackingQualityReason__InsufficientLight                                      = 5,
	EARTrackingQualityReason__BadState                                               = 6
};

/// Enum /Script/AugmentedReality.EARSessionStatus
/// Size: 0x01 (1 bytes)
enum class EARSessionStatus : uint8_t
{
	EARSessionStatus__NotStarted                                                     = 0,
	EARSessionStatus__Running                                                        = 1,
	EARSessionStatus__NotSupported                                                   = 2,
	EARSessionStatus__FatalError                                                     = 3,
	EARSessionStatus__PermissionNotGranted                                           = 4,
	EARSessionStatus__UnsupportedConfiguration                                       = 5,
	EARSessionStatus__Other                                                          = 6
};

/// Enum /Script/AugmentedReality.EARWorldMappingState
/// Size: 0x01 (1 bytes)
enum class EARWorldMappingState : uint8_t
{
	EARWorldMappingState__NotAvailable                                               = 0,
	EARWorldMappingState__StillMappingNotRelocalizable                               = 1,
	EARWorldMappingState__StillMappingRelocalizable                                  = 2,
	EARWorldMappingState__Mapped                                                     = 3
};

/// Enum /Script/AugmentedReality.EARPlaneOrientation
/// Size: 0x01 (1 bytes)
enum class EARPlaneOrientation : uint8_t
{
	EARPlaneOrientation__Horizontal                                                  = 0,
	EARPlaneOrientation__Vertical                                                    = 1,
	EARPlaneOrientation__Diagonal                                                    = 2
};

/// Enum /Script/AugmentedReality.EARObjectClassification
/// Size: 0x01 (1 bytes)
enum class EARObjectClassification : uint8_t
{
	EARObjectClassification__NotApplicable                                           = 0,
	EARObjectClassification__Unknown                                                 = 1,
	EARObjectClassification__Wall                                                    = 2,
	EARObjectClassification__Ceiling                                                 = 3,
	EARObjectClassification__Floor                                                   = 4,
	EARObjectClassification__Table                                                   = 5,
	EARObjectClassification__Seat                                                    = 6,
	EARObjectClassification__Face                                                    = 7,
	EARObjectClassification__Image                                                   = 8,
	EARObjectClassification__World                                                   = 9,
	EARObjectClassification__SceneObject                                             = 10,
	EARObjectClassification__HandMesh                                                = 11,
	EARObjectClassification__Door                                                    = 12,
	EARObjectClassification__Window                                                  = 13
};

/// Enum /Script/AugmentedReality.EARSpatialMeshUsageFlags
/// Size: 0x01 (1 bytes)
enum class EARSpatialMeshUsageFlags : uint8_t
{
	EARSpatialMeshUsageFlags__NotApplicable                                          = 0,
	EARSpatialMeshUsageFlags__Visible                                                = 1,
	EARSpatialMeshUsageFlags__Collision                                              = 2
};

/// Enum /Script/AugmentedReality.EARJointTransformSpace
/// Size: 0x01 (1 bytes)
enum class EARJointTransformSpace : uint8_t
{
	EARJointTransformSpace__Model                                                    = 0,
	EARJointTransformSpace__ParentJoint                                              = 1
};

/// Enum /Script/AugmentedReality.EARAltitudeSource
/// Size: 0x01 (1 bytes)
enum class EARAltitudeSource : uint8_t
{
	EARAltitudeSource__Precise                                                       = 0,
	EARAltitudeSource__Coarse                                                        = 1,
	EARAltitudeSource__UserDefined                                                   = 2,
	EARAltitudeSource__Unknown                                                       = 3
};

/// Enum /Script/AugmentedReality.EARCandidateImageOrientation
/// Size: 0x01 (1 bytes)
enum class EARCandidateImageOrientation : uint8_t
{
	EARCandidateImageOrientation__Landscape                                          = 0,
	EARCandidateImageOrientation__Portrait                                           = 1
};

/// Class /Script/AugmentedReality.ARActor
/// Size: 0x0290 (656 bytes) (0x000290 - 0x000290) align 8 MaxSize: 0x0290
class AARActor : public AActor
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARActor.AddARComponent
	// class UARComponent* AddARComponent(class UClass* InComponentClass, FGuid& NativeID);                                     // [0x3c0fdd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARBlueprintLibrary.UnpinComponent
	// void UnpinComponent(class USceneComponent* ComponentToUnpin);                                                            // [0x3c18e90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.ToggleARCapture
	// bool ToggleARCapture(bool bOnOff, EARCaptureType CaptureType);                                                           // [0x3c18dc0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.StopARSession
	// void StopARSession();                                                                                                    // [0x3c18cd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.StartARSession
	// void StartARSession(class UARSessionConfig* SessionConfig);                                                              // [0x3c18a40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetEnabledXRCamera
	// void SetEnabledXRCamera(bool bOnOff);                                                                                    // [0x3c17b70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldScale
	// void SetARWorldScale(float InWorldScale);                                                                                // [0x3c17620] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetARWorldOriginLocationAndRotation
	// void SetARWorldOriginLocationAndRotation(FVector OriginLocation, FRotator OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection); // [0x3c17480] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
	// void SetAlignmentTransform(FTransform& InAlignmentTransform);                                                            // [0x3c176f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.SaveARPinToLocalStore
	// bool SaveARPinToLocalStore(FName InSaveName, class UARPin* InPin);                                                       // [0x3c165e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.ResizeXRCamera
	// FIntPoint ResizeXRCamera(FIntPoint& InSize);                                                                             // [0x3c16540] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemovePin
	// void RemovePin(class UARPin* PinToRemove);                                                                               // [0x3c16280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveARPinFromLocalStore
	// void RemoveARPinFromLocalStore(FName InSaveName);                                                                        // [0x3c16050] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.RemoveAllARPinsFromLocalStore
	// void RemoveAllARPinsFromLocalStore();                                                                                    // [0x3c16190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
	// class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, FARTraceResult& TraceResult, FName DebugName); // [0x3c15e50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponentToARPin
	// bool PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin);                                      // [0x3c15d80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PinComponent
	// class UARPin* PinComponent(class USceneComponent* ComponentToPin, FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, FName DebugName); // [0x3c15ba0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.PauseARSession
	// void PauseARSession();                                                                                                   // [0x3c15a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LoadARPinsFromLocalStore
	// TMap<FName, UARPin*> LoadARPinsFromLocalStore();                                                                         // [0x3c15810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
	// TArray<FARTraceResult> LineTraceTrackedObjects3D(FVector Start, FVector End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // [0x3c153f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
	// TArray<FARTraceResult> LineTraceTrackedObjects(FVector2D ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon); // [0x3c15620] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
	// bool IsSessionTypeSupported(EARSessionType SessionType);                                                                 // [0x3c15240] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
	// bool IsSessionTrackingFeatureSupported(EARSessionType SessionType, EARSessionTrackingFeature SessionTrackingFeature);    // [0x3c15180] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsSceneReconstructionSupported
	// bool IsSceneReconstructionSupported(EARSessionType SessionType, EARSceneReconstruction SceneReconstructionMethod);       // [0x3c150c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARSupported
	// bool IsARSupported();                                                                                                    // [0x3c14f80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreSupported
	// bool IsARPinLocalStoreSupported();                                                                                       // [0x3c14e70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.IsARPinLocalStoreReady
	// bool IsARPinLocalStoreReady();                                                                                           // [0x3c14d60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
	// EARWorldMappingState GetWorldMappingStatus();                                                                            // [0x3c14970] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
	// EARTrackingQualityReason GetTrackingQualityReason();                                                                     // [0x3c147a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
	// EARTrackingQuality GetTrackingQuality();                                                                                 // [0x3c14660] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
	// TArray<FARVideoFormat> GetSupportedVideoFormats(EARSessionType SessionType);                                             // [0x3c14210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetSessionConfig
	// class UARSessionConfig* GetSessionConfig();                                                                              // [0x3c140b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPointCloud
	// TArray<FVector> GetPointCloud();                                                                                         // [0x3c14010] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
	// class UARTexture* GetPersonSegmentationImage();                                                                          // [0x3c13f90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
	// class UARTexture* GetPersonSegmentationDepthImage();                                                                     // [0x3c13f60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetObjectClassificationAtLocation
	// bool GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff); // [0x3c13b20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetNumberOfTrackedFacesSupported
	// int32_t GetNumberOfTrackedFacesSupported();                                                                              // [0x3c139f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
	// class UARLightEstimate* GetCurrentLightEstimate();                                                                       // [0x3c12b10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraIntrinsics
	// bool GetCameraIntrinsics(FARCameraIntrinsics& OutCameraIntrinsics);                                                      // [0x3c127e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraImage
	// class UARTextureCameraImage* GetCameraImage();                                                                           // [0x3c12760] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetCameraDepth
	// class UARTextureCameraDepth* GetCameraDepth();                                                                           // [0x3c126e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARWorldScale
	// float GetARWorldScale();                                                                                                 // [0x3c11b70] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARTexture
	// class UARTexture* GetARTexture(EARTextureType TextureType);                                                              // [0x3c11af0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
	// FARSessionStatus GetARSessionStatus();                                                                                   // [0x3c11a40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
	// TArray<UARTrackedPose*> GetAllTrackedPoses();                                                                            // [0x3c122b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
	// TArray<UARTrackedPoint*> GetAllTrackedPoints();                                                                          // [0x3c12230] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
	// TArray<UARPlaneGeometry*> GetAllTrackedPlanes();                                                                         // [0x3c121b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
	// TArray<UARTrackedImage*> GetAllTrackedImages();                                                                          // [0x3c12130] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
	// TArray<UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();                                             // [0x3c120b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
	// TArray<FARPose2D> GetAllTracked2DPoses();                                                                                // [0x3c11f70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllPins
	// TArray<UARPin*> GetAllPins();                                                                                            // [0x3c11ef0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometriesByClass
	// TArray<UARTrackedGeometry*> GetAllGeometriesByClass(class UClass* GeometryClass);                                        // [0x3c11ca0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAllGeometries
	// TArray<UARTrackedGeometry*> GetAllGeometries();                                                                          // [0x3c11c20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.GetAlignmentTransform
	// FTransform GetAlignmentTransform();                                                                                      // [0x3c11bc0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.FindTrackedPointsByName
	// TArray<UARTrackedPoint*> FindTrackedPointsByName(FString PointName);                                                     // [0x3c11870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
	// void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, FLinearColor Color, float OutlineThickness, float PersistForSeconds); // [0x3c11680] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.DebugDrawPin
	// void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, FLinearColor Color, float Scale, float PersistForSeconds); // [0x3c11490] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateClosestIntersection
	// void CalculateClosestIntersection(TArray<FVector>& StartPoints, TArray<FVector>& EndPoints, FVector& ClosestIntersection); // [0x3c10b20] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.CalculateAlignmentTransform
	// void CalculateAlignmentTransform(FTransform& TransformInFirstCoordinateSystem, FTransform& TransformInSecondCoordinateSystem, FTransform& AlignmentTransform); // [0x3c108f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddTrackedPointWithName
	// bool AddTrackedPointWithName(FTransform& WorldTransform, FString PointName, bool bDeletePointsWithSameName);             // [0x3c10740] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
	// class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, FString FriendlyName, float PhysicalWidth); // [0x3c105a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
	// bool AddManualEnvironmentCaptureProbe(FVector Location, FVector Extent);                                                 // [0x3c104b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARTraceResultLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
	// class UARTrackedGeometry* GetTrackedGeometry(FARTraceResult& TraceResult);                                               // [0x3c14470] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetTraceChannel
	// EARLineTraceChannels GetTraceChannel(FARTraceResult& TraceResult);                                                       // [0x3c142e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalTransform
	// FTransform GetLocalTransform(FARTraceResult& TraceResult);                                                               // [0x3c137a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
	// FTransform GetLocalToWorldTransform(FARTraceResult& TraceResult);                                                        // [0x3c13580] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
	// FTransform GetLocalToTrackingTransform(FARTraceResult& TraceResult);                                                     // [0x3c13360] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
	// float GetDistanceFromCamera(FARTraceResult& TraceResult);                                                                // [0x3c12cb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARBaseAsyncTaskBlueprintProxy
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
/// Size: 0x0080 (128 bytes) (0x000050 - 0x000080) align 8 MaxSize: 0x0080
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,383) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,384) /* FMulticastInlineDelegate */ __um(OnFailed);                                           // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0070   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
	// class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);                               // [0x3c0fcb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
/// Size: 0x00B0 (176 bytes) (0x000050 - 0x0000B0) align 8 MaxSize: 0x00B0
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,385) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,386) /* FMulticastInlineDelegate */ __um(OnFailed);                                           // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0070   (0x0040)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
	// class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, FVector Location, FVector Extent); // [0x3c0faa0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARComponent
/// Size: 0x0320 (800 bytes) (0x0002A0 - 0x000320) align 16 MaxSize: 0x0320
class UARComponent : public USceneComponent
{ 
public:
	FGuid                                              NativeID;                                                   // 0x02A0   (0x0010)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x02B0   (0x0030)  MISSED
	bool                                               bUseDefaultReplication;                                     // 0x02E0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02E1   (0x0007)  MISSED
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x02E8   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x02F0   (0x0008)  
	class UMRMeshComponent*                            MRMeshComponent;                                            // 0x02F8   (0x0008)  
	class UARTrackedGeometry*                          MyTrackedGeometry;                                          // 0x0300   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0308   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARComponent.UpdateVisualization
	// void UpdateVisualization();                                                                                              // [0x3c18f10] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/AugmentedReality.ARComponent.SetNativeID
	// void SetNativeID(FGuid NativeID);                                                                                        // [0x3c18100] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARComponent.ReceiveRemove
	// void ReceiveRemove();                                                                                                    // [0x2c97800] Event|Public|BlueprintEvent 
	// Function /Script/AugmentedReality.ARComponent.OnRep_Payload
	// void OnRep_Payload();                                                                                                    // [0x3c15a40] Native|Protected     
	// Function /Script/AugmentedReality.ARComponent.GetMRMesh
	// class UMRMeshComponent* GetMRMesh();                                                                                     // [0x3c13980] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AugmentedReality.ARSessionPayload
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FARSessionPayload
{ 
	int32_t                                            ConfigFlags;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0008   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARPlaneUpdatePayload
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FARPlaneUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	FVector                                            Center;                                                     // 0x0080   (0x0018)  
	FVector                                            Extents;                                                    // 0x0098   (0x0018)  
	TArray<FVector>                                    BoundaryVertices;                                           // 0x00B0   (0x0010)  
	EARObjectClassification                            ObjectClassification;                                       // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x00C1   (0x000F)  MISSED
};

/// Class /Script/AugmentedReality.ARPlaneComponent
/// Size: 0x03F0 (1008 bytes) (0x000320 - 0x0003F0) align 16 MaxSize: 0x03F0
class UARPlaneComponent : public UARComponent
{ 
public:
	FARPlaneUpdatePayload                              ReplicatedPayload;                                          // 0x0320   (0x00D0)  


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneComponent.SetPlaneComponentDebugMode
	// void SetPlaneComponentDebugMode(EPlaneComponentDebugMode NewDebugMode);                                                  // [0x3c182e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.SetObjectClassificationDebugColors
	// void SetObjectClassificationDebugColors(TMap<EARObjectClassification, FLinearColor>& InColors);                          // [0x3c18190] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPlaneComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARPlaneUpdatePayload NewPayload);                                                              // [0x3c16e90] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveUpdate
	// void ReceiveUpdate(FARPlaneUpdatePayload& Payload);                                                                      // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPlaneComponent.ReceiveAdd
	// void ReceiveAdd(FARPlaneUpdatePayload& Payload);                                                                         // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPlaneComponent.GetObjectClassificationDebugColors
	// TMap<EARObjectClassification, FLinearColor> GetObjectClassificationDebugColors();                                        // [0x3c13f10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/AugmentedReality.ARPointUpdatePayload
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FARPointUpdatePayload
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Class /Script/AugmentedReality.ARPointComponent
/// Size: 0x0330 (816 bytes) (0x000320 - 0x000330) align 16 MaxSize: 0x0330
class UARPointComponent : public UARComponent
{ 
public:
	FARPointUpdatePayload                              ReplicatedPayload;                                          // 0x0320   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0321   (0x000F)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPointComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARPointUpdatePayload NewPayload);                                                              // [0x3c17000] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveUpdate
	// void ReceiveUpdate(FARPointUpdatePayload& Payload);                                                                      // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPointComponent.ReceiveAdd
	// void ReceiveAdd(FARPointUpdatePayload& Payload);                                                                         // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARFaceUpdatePayload
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FARFaceUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	FVector                                            LeftEyePosition;                                            // 0x0018   (0x0018)  
	FVector                                            RightEyePosition;                                           // 0x0030   (0x0018)  
	FVector                                            LookAtTarget;                                               // 0x0048   (0x0018)  
};

/// Class /Script/AugmentedReality.ARFaceComponent
/// Size: 0x03B0 (944 bytes) (0x000320 - 0x0003B0) align 16 MaxSize: 0x03B0
class UARFaceComponent : public UARComponent
{ 
public:
	EARFaceTransformMixing                             TransformSetting;                                           // 0x0320   (0x0001)  
	bool                                               bUpdateVertexNormal;                                        // 0x0321   (0x0001)  
	bool                                               bFaceOutOfScreen;                                           // 0x0322   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x0323   (0x0005)  MISSED
	FARFaceUpdatePayload                               ReplicatedPayload;                                          // 0x0328   (0x0060)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0388   (0x0028)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARFaceComponent.SetFaceComponentDebugMode
	// void SetFaceComponentDebugMode(EFaceComponentDebugMode NewDebugMode);                                                    // [0x3c17cd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARFaceComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARFaceUpdatePayload NewPayload);                                                               // [0x3c169f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveUpdate
	// void ReceiveUpdate(FARFaceUpdatePayload& Payload);                                                                       // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARFaceComponent.ReceiveAdd
	// void ReceiveAdd(FARFaceUpdatePayload& Payload);                                                                          // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARImageUpdatePayload
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FARImageUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	class UARCandidateImage*                           DetectedImage;                                              // 0x0080   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0088   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARImageComponent
/// Size: 0x03C0 (960 bytes) (0x000320 - 0x0003C0) align 16 MaxSize: 0x03C0
class UARImageComponent : public UARComponent
{ 
public:
	FARImageUpdatePayload                              ReplicatedPayload;                                          // 0x0320   (0x00A0)  


	/// Functions
	// Function /Script/AugmentedReality.ARImageComponent.SetImageComponentDebugMode
	// void SetImageComponentDebugMode(EImageComponentDebugMode NewDebugMode);                                                  // [0x3c18040] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARImageComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARImageUpdatePayload NewPayload);                                                              // [0x3c16c20] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveUpdate
	// void ReceiveUpdate(FARImageUpdatePayload& Payload);                                                                      // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARImageComponent.ReceiveAdd
	// void ReceiveAdd(FARImageUpdatePayload& Payload);                                                                         // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARQRCodeUpdatePayload
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FARQRCodeUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	FVector                                            Extents;                                                    // 0x0080   (0x0018)  
	FString                                            QRCode;                                                     // 0x0098   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARQRCodeComponent
/// Size: 0x03D0 (976 bytes) (0x000320 - 0x0003D0) align 16 MaxSize: 0x03D0
class UARQRCodeComponent : public UARComponent
{ 
public:
	FARQRCodeUpdatePayload                             ReplicatedPayload;                                          // 0x0320   (0x00B0)  


	/// Functions
	// Function /Script/AugmentedReality.ARQRCodeComponent.SetQRCodeComponentDebugMode
	// void SetQRCodeComponentDebugMode(EQRCodeComponentDebugMode NewDebugMode);                                                // [0x3c18590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARQRCodeUpdatePayload NewPayload);                                                             // [0x3c171f0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveUpdate
	// void ReceiveUpdate(FARQRCodeUpdatePayload& Payload);                                                                     // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARQRCodeComponent.ReceiveAdd
	// void ReceiveAdd(FARQRCodeUpdatePayload& Payload);                                                                        // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARPoseUpdatePayload
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FARPoseUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0060)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0060   (0x0010)  
};

/// Class /Script/AugmentedReality.ARPoseComponent
/// Size: 0x0390 (912 bytes) (0x000320 - 0x000390) align 16 MaxSize: 0x0390
class UARPoseComponent : public UARComponent
{ 
public:
	FARPoseUpdatePayload                               ReplicatedPayload;                                          // 0x0320   (0x0070)  


	/// Functions
	// Function /Script/AugmentedReality.ARPoseComponent.SetPoseComponentDebugMode
	// void SetPoseComponentDebugMode(EPoseComponentDebugMode NewDebugMode);                                                    // [0x3c183a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARPoseComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARPoseUpdatePayload NewPayload);                                                               // [0x3c170b0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveUpdate
	// void ReceiveUpdate(FARPoseUpdatePayload& Payload);                                                                       // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARPoseComponent.ReceiveAdd
	// void ReceiveAdd(FARPoseUpdatePayload& Payload);                                                                          // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.AREnvironmentProbeUpdatePayload
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FAREnvironmentProbeUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0060)  
};

/// Class /Script/AugmentedReality.AREnvironmentProbeComponent
/// Size: 0x0380 (896 bytes) (0x000320 - 0x000380) align 16 MaxSize: 0x0380
class UAREnvironmentProbeComponent : public UARComponent
{ 
public:
	FAREnvironmentProbeUpdatePayload                   ReplicatedPayload;                                          // 0x0320   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FAREnvironmentProbeUpdatePayload NewPayload);                                                   // [0x3c168e0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveUpdate
	// void ReceiveUpdate(FAREnvironmentProbeUpdatePayload& Payload);                                                           // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.AREnvironmentProbeComponent.ReceiveAdd
	// void ReceiveAdd(FAREnvironmentProbeUpdatePayload& Payload);                                                              // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARObjectUpdatePayload
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 16 MaxSize: 0x0060
struct FARObjectUpdatePayload
{ 
	FTransform                                         WorldTransform;                                             // 0x0000   (0x0060)  
};

/// Class /Script/AugmentedReality.ARObjectComponent
/// Size: 0x0380 (896 bytes) (0x000320 - 0x000380) align 16 MaxSize: 0x0380
class UARObjectComponent : public UARComponent
{ 
public:
	FARObjectUpdatePayload                             ReplicatedPayload;                                          // 0x0320   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.ARObjectComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARObjectUpdatePayload NewPayload);                                                             // [0x3c168e0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveUpdate
	// void ReceiveUpdate(FARObjectUpdatePayload& Payload);                                                                     // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARObjectComponent.ReceiveAdd
	// void ReceiveAdd(FARObjectUpdatePayload& Payload);                                                                        // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARMeshUpdatePayload
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FARMeshUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0080   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0081   (0x000F)  MISSED
};

/// Class /Script/AugmentedReality.ARMeshComponent
/// Size: 0x03B0 (944 bytes) (0x000320 - 0x0003B0) align 16 MaxSize: 0x03B0
class UARMeshComponent : public UARComponent
{ 
public:
	FARMeshUpdatePayload                               ReplicatedPayload;                                          // 0x0320   (0x0090)  


	/// Functions
	// Function /Script/AugmentedReality.ARMeshComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARMeshUpdatePayload NewPayload);                                                               // [0x3c16d60] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveUpdate
	// void ReceiveUpdate(FARMeshUpdatePayload& Payload);                                                                       // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARMeshComponent.ReceiveAdd
	// void ReceiveAdd(FARMeshUpdatePayload& Payload);                                                                          // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
};

/// Struct /Script/AugmentedReality.ARGeoAnchorUpdatePayload
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FARGeoAnchorUpdatePayload
{ 
	FARSessionPayload                                  SessionPayload;                                             // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldTransform;                                             // 0x0020   (0x0060)  
	float                                              Longitude;                                                  // 0x0080   (0x0004)  
	float                                              Latitude;                                                   // 0x0084   (0x0004)  
	float                                              AltitudeMeters;                                             // 0x0088   (0x0004)  
	EARAltitudeSource                                  AltitudeSource;                                             // 0x008C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x008D   (0x0003)  MISSED
	FString                                            AnchorName;                                                 // 0x0090   (0x0010)  
};

/// Class /Script/AugmentedReality.ARGeoAnchorComponent
/// Size: 0x03C0 (960 bytes) (0x000320 - 0x0003C0) align 16 MaxSize: 0x03C0
class UARGeoAnchorComponent : public UARComponent
{ 
public:
	FARGeoAnchorUpdatePayload                          ReplicatedPayload;                                          // 0x0320   (0x00A0)  


	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.SetGeoAnchorComponentDebugMode
	// void SetGeoAnchorComponentDebugMode(EGeoAnchorComponentDebugMode NewDebugMode);                                          // [0x3c17f80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ServerUpdatePayload
	// void ServerUpdatePayload(FARGeoAnchorUpdatePayload NewPayload);                                                          // [0x3c16ad0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveUpdate
	// void ReceiveUpdate(FARGeoAnchorUpdatePayload& Payload);                                                                  // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AugmentedReality.ARGeoAnchorComponent.ReceiveAdd
	// void ReceiveAdd(FARGeoAnchorUpdatePayload& Payload);                                                                     // [0x2c97800] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARDependencyHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARDependencyHandler : public UObject
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARDependencyHandler.StartARSessionLatent
	// void StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo); // [0x3c18b90] Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARDependencyHandler.RequestARSessionPermission
	// void RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, FLatentActionInfo LatentInfo, EARServicePermissionRequestResult& OutPermissionResult); // [0x3c163c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARDependencyHandler.InstallARService
	// void InstallARService(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceInstallRequestResult& OutInstallResult); // [0x3c14c10] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARDependencyHandler.GetARDependencyHandler
	// class UARDependencyHandler* GetARDependencyHandler();                                                                    // [0x3c11950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARDependencyHandler.CheckARServiceAvailability
	// void CheckARServiceAvailability(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, EARServiceAvailability& OutAvailability); // [0x3c10c90] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGeoTrackingSupport
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARGeoTrackingSupport : public UObject
{ 
public:


	/// Functions
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingSupport
	// class UARGeoTrackingSupport* GetGeoTrackingSupport();                                                                    // [0x3c13170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingStateReason
	// EARGeoTrackingStateReason GetGeoTrackingStateReason();                                                                   // [0x1e95240] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingState
	// EARGeoTrackingState GetGeoTrackingState();                                                                               // [0x1366d80] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.GetGeoTrackingAccuracy
	// EARGeoTrackingAccuracy GetGeoTrackingAccuracy();                                                                         // [0x3c13140] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocationWithAltitude
	// bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, FString OptionalAnchorName); // [0x3c102f0] Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARGeoTrackingSupport.AddGeoAnchorAtLocation
	// bool AddGeoAnchorAtLocation(float Longitude, float Latitude, FString OptionalAnchorName);                                // [0x3c10170] Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
/// Size: 0x00A0 (160 bytes) (0x000050 - 0x0000A0) align 8 MaxSize: 0x00A0
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,387) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,388) /* FMulticastInlineDelegate */ __um(OnFailed);                                           // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0070   (0x0030)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.GeoTrackingAvailabilityDelegate__DelegateSignature
	// void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, FString Error);                               // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailabilityAtLocation
	// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude); // [0x3c10e80] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.CheckGeoTrackingAvailability
	// class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(class UObject* WorldContextObject); // [0x3c10de0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
/// Size: 0x00A8 (168 bytes) (0x000050 - 0x0000A8) align 8 MaxSize: 0x00A8
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{ 
public:
	SDK_UNDEFINED(16,389) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0050   (0x0010)  
	SDK_UNDEFINED(16,390) /* FMulticastInlineDelegate */ __um(OnFailed);                                           // 0x0060   (0x0010)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0070   (0x0038)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationDelegate__DelegateSignature
	// void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, FString Error);          // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy.GetGeoLocationAtWorldPosition
	// class UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, FVector& WorldPosition); // [0x3c12fc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARLifeCycleComponent
/// Size: 0x02D0 (720 bytes) (0x0002A0 - 0x0002D0) align 16 MaxSize: 0x02D0
class UARLifeCycleComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,391) /* FMulticastInlineDelegate */ __um(OnARActorSpawnedDelegate);                           // 0x02A0   (0x0010)  
	SDK_UNDEFINED(16,392) /* FMulticastInlineDelegate */ __um(OnARActorToBeDestroyedDelegate);                     // 0x02B0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x02C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerSpawnARActor
	// void ServerSpawnARActor(class UClass* ComponentClass, FGuid NativeID);                                                   // [0x3c167c0] Final|Net|NetReliableNative|Event|Private|NetServer|HasDefaults|NetValidate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.ServerDestroyARActor
	// void ServerDestroyARActor(class AARActor* Actor);                                                                        // [0x3c166b0] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorToBeDestroyedDelegate__DelegateSignature
	// void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor);                                     // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/AugmentedReality.ARLifeCycleComponent.InstanceARActorSpawnedDelegate__DelegateSignature
	// void InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, FGuid NativeID, class AARActor* SpawnedActor); // [0x2c97800] MulticastDelegate|Public|Delegate|HasDefaults 
};

/// Class /Script/AugmentedReality.ARLightEstimate
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARLightEstimate : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARBasicLightEstimate
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UARBasicLightEstimate : public UARLightEstimate
{ 
public:
	float                                              AmbientIntensityLumens;                                     // 0x0028   (0x0004)  
	float                                              AmbientColorTemperatureKelvin;                              // 0x002C   (0x0004)  
	FLinearColor                                       AmbientColor;                                               // 0x0030   (0x0010)  


	/// Functions
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
	// float GetAmbientIntensityLumens();                                                                                       // [0x3c123b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
	// float GetAmbientColorTemperatureKelvin();                                                                                // [0x3c12390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARBasicLightEstimate.GetAmbientColor
	// FLinearColor GetAmbientColor();                                                                                          // [0x3c12370] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AROriginActor
/// Size: 0x0290 (656 bytes) (0x000290 - 0x000290) align 8 MaxSize: 0x0290
class AAROriginActor : public AActor
{ 
public:
};

/// Class /Script/AugmentedReality.ARPin
/// Size: 0x0150 (336 bytes) (0x000028 - 0x000150) align 16 MaxSize: 0x0150
class UARPin : public UObject
{ 
public:
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0028   (0x0008)  
	class USceneComponent*                             PinnedComponent;                                            // 0x0030   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0060)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x00A0   (0x0060)  
	EARTrackingState                                   TrackingState;                                              // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1F];                                      // 0x0101   (0x001F)  MISSED
	SDK_UNDEFINED(16,393) /* FMulticastInlineDelegate */ __um(OnARTrackingStateChanged);                           // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,394) /* FMulticastInlineDelegate */ __um(OnARTransformUpdated);                               // 0x0130   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0140   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPin.GetTrackingState
	// EARTrackingState GetTrackingState();                                                                                     // [0x3c148e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetTrackedGeometry
	// class UARTrackedGeometry* GetTrackedGeometry();                                                                          // [0x1925390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetPinnedComponent
	// class USceneComponent* GetPinnedComponent();                                                                             // [0x11c8290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToWorldTransform
	// FTransform GetLocalToWorldTransform();                                                                                   // [0x3c13510] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetLocalToTrackingTransform
	// FTransform GetLocalToTrackingTransform();                                                                                // [0x3c13300] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.GetDebugName
	// FName GetDebugName();                                                                                                    // [0x3c12c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPin.DebugDraw
	// void DebugDraw(class UWorld* World, FLinearColor& Color, float Scale, float PersistForSeconds);                          // [0x3c11320] Native|Public|HasOutParms|HasDefaults|Const 
};

/// Struct /Script/AugmentedReality.ARVideoFormat
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FARVideoFormat
{ 
	int32_t                                            FPS;                                                        // 0x0000   (0x0004)  
	int32_t                                            Width;                                                      // 0x0004   (0x0004)  
	int32_t                                            Height;                                                     // 0x0008   (0x0004)  
};

/// Class /Script/AugmentedReality.ARSessionConfig
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 8 MaxSize: 0x0110
class UARSessionConfig : public UDataAsset
{ 
public:
	bool                                               bGenerateMeshDataFromTrackedGeometry;                       // 0x0030   (0x0001)  
	bool                                               bGenerateCollisionForMeshData;                              // 0x0031   (0x0001)  
	bool                                               bGenerateNavMeshForMeshData;                                // 0x0032   (0x0001)  
	bool                                               bUseMeshDataForOcclusion;                                   // 0x0033   (0x0001)  
	bool                                               bRenderMeshDataInWireframe;                                 // 0x0034   (0x0001)  
	bool                                               bTrackSceneObjects;                                         // 0x0035   (0x0001)  
	bool                                               bUsePersonSegmentationForOcclusion;                         // 0x0036   (0x0001)  
	bool                                               bUseSceneDepthForOcclusion;                                 // 0x0037   (0x0001)  
	bool                                               bUseAutomaticImageScaleEstimation;                          // 0x0038   (0x0001)  
	bool                                               bUseStandardOnboardingUX;                                   // 0x0039   (0x0001)  
	EARWorldAlignment                                  WorldAlignment;                                             // 0x003A   (0x0001)  
	EARSessionType                                     SessionType;                                                // 0x003B   (0x0001)  
	EARPlaneDetectionMode                              PlaneDetectionMode;                                         // 0x003C   (0x0001)  
	bool                                               bHorizontalPlaneDetection;                                  // 0x003D   (0x0001)  
	bool                                               bVerticalPlaneDetection;                                    // 0x003E   (0x0001)  
	bool                                               bEnableAutoFocus;                                           // 0x003F   (0x0001)  
	EARLightEstimationMode                             LightEstimationMode;                                        // 0x0040   (0x0001)  
	EARFrameSyncMode                                   FrameSyncMode;                                              // 0x0041   (0x0001)  
	bool                                               bEnableAutomaticCameraOverlay;                              // 0x0042   (0x0001)  
	bool                                               bEnableAutomaticCameraTracking;                             // 0x0043   (0x0001)  
	bool                                               bResetCameraTracking;                                       // 0x0044   (0x0001)  
	bool                                               bResetTrackedObjects;                                       // 0x0045   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	TArray<class UARCandidateImage*>                   CandidateImages;                                            // 0x0048   (0x0010)  
	int32_t                                            MaxNumSimultaneousImagesTracked;                            // 0x0058   (0x0004)  
	EAREnvironmentCaptureProbeType                     EnvironmentCaptureProbeType;                                // 0x005C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	TArray<char>                                       WorldMapData;                                               // 0x0060   (0x0010)  
	TArray<class UARCandidateObject*>                  CandidateObjects;                                           // 0x0070   (0x0010)  
	FARVideoFormat                                     DesiredVideoFormat;                                         // 0x0080   (0x000C)  
	bool                                               bUseOptimalVideoFormat;                                     // 0x008C   (0x0001)  
	EARFaceTrackingDirection                           FaceTrackingDirection;                                      // 0x008D   (0x0001)  
	EARFaceTrackingUpdate                              FaceTrackingUpdate;                                         // 0x008E   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x008F   (0x0001)  MISSED
	int32_t                                            MaxNumberOfTrackedFaces;                                    // 0x0090   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	TArray<char>                                       SerializedARCandidateImageDatabase;                         // 0x0098   (0x0010)  
	EARSessionTrackingFeature                          EnabledSessionTrackingFeature;                              // 0x00A8   (0x0001)  
	EARSceneReconstruction                             SceneReconstructionMethod;                                  // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData04_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
	class UClass*                                      PlaneComponentClass;                                        // 0x00B0   (0x0008)  
	class UClass*                                      PointComponentClass;                                        // 0x00B8   (0x0008)  
	class UClass*                                      FaceComponentClass;                                         // 0x00C0   (0x0008)  
	class UClass*                                      ImageComponentClass;                                        // 0x00C8   (0x0008)  
	class UClass*                                      QRCodeComponentClass;                                       // 0x00D0   (0x0008)  
	class UClass*                                      PoseComponentClass;                                         // 0x00D8   (0x0008)  
	class UClass*                                      EnvironmentProbeComponentClass;                             // 0x00E0   (0x0008)  
	class UClass*                                      ObjectComponentClass;                                       // 0x00E8   (0x0008)  
	class UClass*                                      MeshComponentClass;                                         // 0x00F0   (0x0008)  
	class UClass*                                      GeoAnchorComponentClass;                                    // 0x00F8   (0x0008)  
	class UMaterialInterface*                          DefaultMeshMaterial;                                        // 0x0100   (0x0008)  
	class UMaterialInterface*                          DefaultWireframeMeshMaterial;                               // 0x0108   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
	// bool ShouldResetTrackedObjects();                                                                                        // [0x3c18a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
	// bool ShouldResetCameraTracking();                                                                                        // [0x3c18a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
	// bool ShouldRenderCameraOverlay();                                                                                        // [0x3c189e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
	// bool ShouldEnableCameraTracking();                                                                                       // [0x3c189c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
	// bool ShouldEnableAutoFocus();                                                                                            // [0x3c189a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.SetWorldMapData
	// void SetWorldMapData(TArray<char> WorldMapData);                                                                         // [0x3c18870] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
	// void SetSessionTrackingFeatureToEnable(EARSessionTrackingFeature InSessionTrackingFeature);                              // [0x3c187f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetSceneReconstructionMethod
	// void SetSceneReconstructionMethod(EARSceneReconstruction InSceneReconstructionMethod);                                   // [0x3c18770] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetTrackedObjects
	// void SetResetTrackedObjects(bool bNewValue);                                                                             // [0x3c186e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetResetCameraTracking
	// void SetResetCameraTracking(bool bNewValue);                                                                             // [0x3c18650] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
	// void SetFaceTrackingUpdate(EARFaceTrackingUpdate InUpdate);                                                              // [0x3c17e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
	// void SetFaceTrackingDirection(EARFaceTrackingDirection InDirection);                                                     // [0x3c17d90] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetEnableAutoFocus
	// void SetEnableAutoFocus(bool bNewValue);                                                                                 // [0x3c17ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
	// void SetDesiredVideoFormat(FARVideoFormat NewFormat);                                                                    // [0x3c17a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.SetCandidateObjectList
	// void SetCandidateObjectList(TArray<UARCandidateObject*>& InCandidateObjects);                                            // [0x3c17950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldMapData
	// TArray<char> GetWorldMapData();                                                                                          // [0x3c14940] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetWorldAlignment
	// EARWorldAlignment GetWorldAlignment();                                                                                   // [0x3c14920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSessionType
	// EARSessionType GetSessionType();                                                                                         // [0x3c141d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetSceneReconstructionMethod
	// EARSceneReconstruction GetSceneReconstructionMethod();                                                                   // [0x3c14090] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
	// EARPlaneDetectionMode GetPlaneDetectionMode();                                                                           // [0x3c13fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
	// int32_t GetMaxNumSimultaneousImagesTracked();                                                                            // [0x3c139a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetLightEstimationMode
	// EARLightEstimationMode GetLightEstimationMode();                                                                         // [0x3c13210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFrameSyncMode
	// EARFrameSyncMode GetFrameSyncMode();                                                                                     // [0x3c12f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
	// EARFaceTrackingUpdate GetFaceTrackingUpdate();                                                                           // [0x3c12f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
	// EARFaceTrackingDirection GetFaceTrackingDirection();                                                                     // [0x3c12f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
	// EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();                                                         // [0x37d9970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
	// EARSessionTrackingFeature GetEnabledSessionTrackingFeature();                                                            // [0x3c12e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
	// FARVideoFormat GetDesiredVideoFormat();                                                                                  // [0x3c12c60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateObjectList
	// TArray<UARCandidateObject*> GetCandidateObjectList();                                                                    // [0x3c12a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.GetCandidateImageList
	// TArray<UARCandidateImage*> GetCandidateImageList();                                                                      // [0x3c12990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateObject
	// void AddCandidateObject(class UARCandidateObject* CandidateObject);                                                      // [0x3c100c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSessionConfig.AddCandidateImage
	// void AddCandidateImage(class UARCandidateImage* NewCandidateImage);                                                      // [0x3c10010] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameMode
/// Size: 0x03E0 (992 bytes) (0x000378 - 0x0003E0) align 8 MaxSize: 0x03E0
class AARSharedWorldGameMode : public AGameMode
{ 
public:
	int32_t                                            BufferSizePerChunk;                                         // 0x0378   (0x0004)  
	unsigned char                                      UnknownData00_7[0x64];                                      // 0x037C   (0x0064)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
	// void SetPreviewImageData(TArray<char> ImageData);                                                                        // [0x3c18460] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
	// void SetARWorldSharingIsReady();                                                                                         // [0x3c17690] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
	// void SetARSharedWorldData(TArray<char> ARWorldData);                                                                     // [0x3c17350] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
	// class AARSharedWorldGameState* GetARSharedWorldGameState();                                                              // [0x3c11ad0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARSharedWorldGameState
/// Size: 0x0340 (832 bytes) (0x000308 - 0x000340) align 8 MaxSize: 0x0340
class AARSharedWorldGameState : public AGameState
{ 
public:
	TArray<char>                                       PreviewImageData;                                           // 0x0308   (0x0010)  
	TArray<char>                                       ARWorldData;                                                // 0x0318   (0x0010)  
	int32_t                                            PreviewImageBytesTotal;                                     // 0x0328   (0x0004)  
	int32_t                                            ARWorldBytesTotal;                                          // 0x032C   (0x0004)  
	int32_t                                            PreviewImageBytesDelivered;                                 // 0x0330   (0x0004)  
	int32_t                                            ARWorldBytesDelivered;                                      // 0x0334   (0x0004)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0338   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
	// void K2_OnARWorldMapIsReady();                                                                                           // [0x2c97800] Event|Public|BlueprintEvent 
};

/// Class /Script/AugmentedReality.ARSharedWorldPlayerController
/// Size: 0x0858 (2136 bytes) (0x000850 - 0x000858) align 8 MaxSize: 0x0858
class AARSharedWorldPlayerController : public APlayerController
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0850   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
	// void ServerMarkReadyForReceiving();                                                                                      // [0x3c16770] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
	// void ClientUpdatePreviewImageData(int32_t Offset, TArray<char> Buffer);                                                  // [0x3c11210] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
	// void ClientUpdateARWorldData(int32_t Offset, TArray<char> Buffer);                                                       // [0x3c11100] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
	// Function /Script/AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
	// void ClientInitSharedWorld(int32_t PreviewImageSize, int32_t ARWorldDataSize);                                           // [0x3c11000] Net|NetReliableNative|Event|Public|NetClient|NetValidate 
};

/// Class /Script/AugmentedReality.ARSkyLight
/// Size: 0x02B0 (688 bytes) (0x0002A0 - 0x0002B0) align 8 MaxSize: 0x02B0
class AARSkyLight : public ASkyLight
{ 
public:
	class UAREnvironmentCaptureProbe*                  CaptureProbe;                                               // 0x02A0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x02A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
	// void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);                                       // [0x3c17bf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARTexture
/// Size: 0x01F0 (496 bytes) (0x0001C8 - 0x0001F0) align 16 MaxSize: 0x01F0
class UARTexture : public UTexture
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01C9   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x01CC   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x01D0   (0x0010)  
	FVector2D                                          Size;                                                       // 0x01E0   (0x0010)  
};

/// Class /Script/AugmentedReality.ARTextureCameraImage
/// Size: 0x01F0 (496 bytes) (0x0001F0 - 0x0001F0) align 16 MaxSize: 0x01F0
class UARTextureCameraImage : public UARTexture
{ 
public:
};

/// Class /Script/AugmentedReality.ARTextureCameraDepth
/// Size: 0x0200 (512 bytes) (0x0001F0 - 0x000200) align 16 MaxSize: 0x0200
class UARTextureCameraDepth : public UARTexture
{ 
public:
	EARDepthQuality                                    DepthQuality;                                               // 0x01F0   (0x0001)  
	EARDepthAccuracy                                   DepthAccuracy;                                              // 0x01F1   (0x0001)  
	bool                                               bIsTemporallySmoothed;                                      // 0x01F2   (0x0001)  
	unsigned char                                      UnknownData00_7[0xD];                                       // 0x01F3   (0x000D)  MISSED
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbeTexture
/// Size: 0x0290 (656 bytes) (0x000260 - 0x000290) align 16 MaxSize: 0x0290
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{ 
public:
	EARTextureType                                     TextureType;                                                // 0x0260   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0261   (0x0003)  MISSED
	float                                              Timestamp;                                                  // 0x0264   (0x0004)  
	FGuid                                              ExternalTextureGuid;                                        // 0x0268   (0x0010)  
	FVector2D                                          Size;                                                       // 0x0278   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0288   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARTraceResultDummy
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARTraceResultDummy : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARTrackedGeometry
/// Size: 0x0160 (352 bytes) (0x000028 - 0x000160) align 16 MaxSize: 0x0158
class UARTrackedGeometry : public UObject
{ 
public:
	FGuid                                              UniqueId;                                                   // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0038   (0x0008)  MISSED
	FTransform                                         LocalToTrackingTransform;                                   // 0x0040   (0x0060)  
	FTransform                                         LocalToAlignedTrackingTransform;                            // 0x00A0   (0x0060)  
	EARTrackingState                                   TrackingState;                                              // 0x0100   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0101   (0x000F)  MISSED
	class UMRMeshComponent*                            UnderlyingMesh;                                             // 0x0110   (0x0008)  
	EARObjectClassification                            ObjectClassification;                                       // 0x0118   (0x0001)  
	EARSpatialMeshUsageFlags                           SpatialMeshUsageFlags;                                      // 0x0119   (0x0001)  
	unsigned char                                      UnknownData02_6[0x16];                                      // 0x011A   (0x0016)  MISSED
	int32_t                                            LastUpdateFrameNumber;                                      // 0x0130   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x0134   (0x000C)  MISSED
	FName                                              DebugName;                                                  // 0x0140   (0x0008)  
	unsigned char                                      UnknownData04_7[0x10];                                      // 0x0148   (0x0010)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedGeometry.IsTracked
	// bool IsTracked();                                                                                                        // [0x3c153c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.HasSpatialMeshUsageFlag
	// bool HasSpatialMeshUsageFlag(EARSpatialMeshUsageFlags InFlag);                                                           // [0x3c14b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
	// class UMRMeshComponent* GetUnderlyingMesh();                                                                             // [0x3c14900] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetTrackingState
	// EARTrackingState GetTrackingState();                                                                                     // [0x3c148e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetObjectClassification
	// EARObjectClassification GetObjectClassification();                                                                       // [0x3c13b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetName
	// FString GetName();                                                                                                       // [0x3c139c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
	// FTransform GetLocalToWorldTransform();                                                                                   // [0x3c13730] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
	// FTransform GetLocalToTrackingTransform();                                                                                // [0x3c13300] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
	// float GetLastUpdateTimestamp();                                                                                          // [0x3c131c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
	// int32_t GetLastUpdateFrameNumber();                                                                                      // [0x3c131a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARTrackedGeometry.GetDebugName
	// FName GetDebugName();                                                                                                    // [0x3c12c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARPlaneGeometry
/// Size: 0x01B0 (432 bytes) (0x000158 - 0x0001B0) align 16 MaxSize: 0x01B0
class UARPlaneGeometry : public UARTrackedGeometry
{ 
public:
	EARPlaneOrientation                                Orientation;                                                // 0x0158   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0159   (0x0007)  MISSED
	FVector                                            Center;                                                     // 0x0160   (0x0018)  
	FVector                                            Extent;                                                     // 0x0178   (0x0018)  
	TArray<FVector>                                    BoundaryPolygon;                                            // 0x0190   (0x0010)  
	class UARPlaneGeometry*                            SubsumedBy;                                                 // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x01A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetSubsumedBy
	// class UARPlaneGeometry* GetSubsumedBy();                                                                                 // [0x3c141f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetOrientation
	// EARPlaneOrientation GetOrientation();                                                                                    // [0x3c13f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetExtent
	// FVector GetExtent();                                                                                                     // [0x3c12ed0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetCenter
	// FVector GetCenter();                                                                                                     // [0x3c12ae0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
	// TArray<FVector> GetBoundaryPolygonInLocalSpace();                                                                        // [0x3c125e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedPoint
/// Size: 0x0160 (352 bytes) (0x000158 - 0x000160) align 16 MaxSize: 0x0160
class UARTrackedPoint : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Class /Script/AugmentedReality.ARTrackedImage
/// Size: 0x0170 (368 bytes) (0x000158 - 0x000170) align 16 MaxSize: 0x0170
class UARTrackedImage : public UARTrackedGeometry
{ 
public:
	class UARCandidateImage*                           DetectedImage;                                              // 0x0158   (0x0008)  
	FVector2D                                          EstimatedSize;                                              // 0x0160   (0x0010)  


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedImage.GetEstimateSize
	// FVector2D GetEstimateSize();                                                                                             // [0x3c12e70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AugmentedReality.ARTrackedImage.GetDetectedImage
	// class UARCandidateImage* GetDetectedImage();                                                                             // [0x3c12c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackedQRCode
/// Size: 0x0190 (400 bytes) (0x000170 - 0x000190) align 16 MaxSize: 0x0190
class UARTrackedQRCode : public UARTrackedImage
{ 
public:
	FString                                            QRCode;                                                     // 0x0170   (0x0010)  
	int32_t                                            Version;                                                    // 0x0180   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0184   (0x000C)  MISSED
};

/// Class /Script/AugmentedReality.ARFaceGeometry
/// Size: 0x02C0 (704 bytes) (0x000158 - 0x0002C0) align 16 MaxSize: 0x02C0
class UARFaceGeometry : public UARTrackedGeometry
{ 
public:
	FVector                                            LookAtTarget;                                               // 0x0158   (0x0018)  
	bool                                               bIsTracked;                                                 // 0x0170   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0171   (0x0007)  MISSED
	TMap<EARFaceBlendShape, float>                     BlendShapes;                                                // 0x0178   (0x0050)  
	unsigned char                                      UnknownData01_6[0x38];                                      // 0x01C8   (0x0038)  MISSED
	FTransform                                         LeftEyeTransform;                                           // 0x0200   (0x0060)  
	FTransform                                         RightEyeTransform;                                          // 0x0260   (0x0060)  


	/// Functions
	// Function /Script/AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
	// FTransform GetWorldSpaceEyeTransform(EAREye Eye);                                                                        // [0x3c14ab0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
	// FTransform GetLocalSpaceEyeTransform(EAREye Eye);                                                                        // [0x3c13230] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapeValue
	// float GetBlendShapeValue(EARFaceBlendShape BlendShape);                                                                  // [0x3c123d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARFaceGeometry.GetBlendShapes
	// TMap<EARFaceBlendShape, float> GetBlendShapes();                                                                         // [0x3c124e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.AREnvironmentCaptureProbe
/// Size: 0x0180 (384 bytes) (0x000158 - 0x000180) align 16 MaxSize: 0x0180
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{ 
public:
	FVector                                            Extent;                                                     // 0x0158   (0x0018)  
	class UAREnvironmentCaptureProbeTexture*           EnvironmentCaptureTexture;                                  // 0x0170   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0178   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetExtent
	// FVector GetExtent();                                                                                                     // [0x3c12ea0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
	// class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();                                                 // [0x3c12e50] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AugmentedReality.ARTrackedObject
/// Size: 0x0160 (352 bytes) (0x000158 - 0x000160) align 16 MaxSize: 0x0160
class UARTrackedObject : public UARTrackedGeometry
{ 
public:
	class UARCandidateObject*                          DetectedObject;                                             // 0x0158   (0x0008)  


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedObject.GetDetectedObject
	// class UARCandidateObject* GetDetectedObject();                                                                           // [0x3c12c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AugmentedReality.ARSkeletonDefinition
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FARSkeletonDefinition
{ 
	int32_t                                            NumJoints;                                                  // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      JointNames;                                                 // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARPose3D
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FARPose3D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FTransform>                                 JointTransforms;                                            // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
	EARJointTransformSpace                             JointTransformSpace;                                        // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/AugmentedReality.ARTrackedPose
/// Size: 0x01B0 (432 bytes) (0x000158 - 0x0001B0) align 16 MaxSize: 0x01B0
class UARTrackedPose : public UARTrackedGeometry
{ 
public:
	FARPose3D                                          TrackedPose;                                                // 0x0158   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x01A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARTrackedPose.GetTrackedPoseData
	// FARPose3D GetTrackedPoseData();                                                                                          // [0x3c14600] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARMeshGeometry
/// Size: 0x0160 (352 bytes) (0x000158 - 0x000160) align 16 MaxSize: 0x0160
class UARMeshGeometry : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0158   (0x0008)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARMeshGeometry.GetObjectClassificationAtLocation
	// bool GetObjectClassificationAtLocation(FVector& InWorldLocation, EARObjectClassification& OutClassification, FVector& OutClassificationLocation, float MaxLocationDiff); // [0x3c13d50] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AugmentedReality.ARGeoAnchor
/// Size: 0x0170 (368 bytes) (0x000158 - 0x000170) align 16 MaxSize: 0x0170
class UARGeoAnchor : public UARTrackedGeometry
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0158   (0x0018)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARGeoAnchor.GetLongitude
	// float GetLongitude();                                                                                                    // [0x3c13960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoAnchor.GetLatitude
	// float GetLatitude();                                                                                                     // [0x3c131f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeSource
	// EARAltitudeSource GetAltitudeSource();                                                                                   // [0x3c12350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARGeoAnchor.GetAltitudeMeters
	// float GetAltitudeMeters();                                                                                               // [0x3c12330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARTrackableNotifyComponent
/// Size: 0x01F0 (496 bytes) (0x0000A0 - 0x0001F0) align 8 MaxSize: 0x01F0
class UARTrackableNotifyComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(16,395) /* FMulticastInlineDelegate */ __um(OnAddTrackedGeometry);                               // 0x00A0   (0x0010)  
	SDK_UNDEFINED(16,396) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedGeometry);                            // 0x00B0   (0x0010)  
	SDK_UNDEFINED(16,397) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedGeometry);                            // 0x00C0   (0x0010)  
	SDK_UNDEFINED(16,398) /* FMulticastInlineDelegate */ __um(OnAddTrackedPlane);                                  // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,399) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedPlane);                               // 0x00E0   (0x0010)  
	SDK_UNDEFINED(16,400) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedPlane);                               // 0x00F0   (0x0010)  
	SDK_UNDEFINED(16,401) /* FMulticastInlineDelegate */ __um(OnAddTrackedPoint);                                  // 0x0100   (0x0010)  
	SDK_UNDEFINED(16,402) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedPoint);                               // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,403) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedPoint);                               // 0x0120   (0x0010)  
	SDK_UNDEFINED(16,404) /* FMulticastInlineDelegate */ __um(OnAddTrackedImage);                                  // 0x0130   (0x0010)  
	SDK_UNDEFINED(16,405) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedImage);                               // 0x0140   (0x0010)  
	SDK_UNDEFINED(16,406) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedImage);                               // 0x0150   (0x0010)  
	SDK_UNDEFINED(16,407) /* FMulticastInlineDelegate */ __um(OnAddTrackedFace);                                   // 0x0160   (0x0010)  
	SDK_UNDEFINED(16,408) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedFace);                                // 0x0170   (0x0010)  
	SDK_UNDEFINED(16,409) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedFace);                                // 0x0180   (0x0010)  
	SDK_UNDEFINED(16,410) /* FMulticastInlineDelegate */ __um(OnAddTrackedEnvProbe);                               // 0x0190   (0x0010)  
	SDK_UNDEFINED(16,411) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedEnvProbe);                            // 0x01A0   (0x0010)  
	SDK_UNDEFINED(16,412) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedEnvProbe);                            // 0x01B0   (0x0010)  
	SDK_UNDEFINED(16,413) /* FMulticastInlineDelegate */ __um(OnAddTrackedObject);                                 // 0x01C0   (0x0010)  
	SDK_UNDEFINED(16,414) /* FMulticastInlineDelegate */ __um(OnUpdateTrackedObject);                              // 0x01D0   (0x0010)  
	SDK_UNDEFINED(16,415) /* FMulticastInlineDelegate */ __um(OnRemoveTrackedObject);                              // 0x01E0   (0x0010)  
};

/// Class /Script/AugmentedReality.ARTypesDummyClass
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UARTypesDummyClass : public UObject
{ 
public:
};

/// Class /Script/AugmentedReality.ARCandidateImage
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class UARCandidateImage : public UDataAsset
{ 
public:
	class UTexture2D*                                  CandidateTexture;                                           // 0x0030   (0x0008)  
	FString                                            FriendlyName;                                               // 0x0038   (0x0010)  
	float                                              Width;                                                      // 0x0048   (0x0004)  
	float                                              Height;                                                     // 0x004C   (0x0004)  
	EARCandidateImageOrientation                       Orientation;                                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalWidth
	// float GetPhysicalWidth();                                                                                                // [0x147a4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetPhysicalHeight
	// float GetPhysicalHeight();                                                                                               // [0x3c13fc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetOrientation
	// EARCandidateImageOrientation GetOrientation();                                                                           // [0x11c95d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetFriendlyName
	// FString GetFriendlyName();                                                                                               // [0x3c12f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateImage.GetCandidateTexture
	// class UTexture2D* GetCandidateTexture();                                                                                 // [0x11c8290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AugmentedReality.ARCandidateObject
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UARCandidateObject : public UDataAsset
{ 
public:
	TArray<char>                                       CandidateObjectData;                                        // 0x0030   (0x0010)  
	FString                                            FriendlyName;                                               // 0x0040   (0x0010)  
	FBox                                               BoundingBox;                                                // 0x0050   (0x0038)  


	/// Functions
	// Function /Script/AugmentedReality.ARCandidateObject.SetFriendlyName
	// void SetFriendlyName(FString NewName);                                                                                   // [0x3c17e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetCandidateObjectData
	// void SetCandidateObjectData(TArray<char>& InCandidateObject);                                                            // [0x3c178a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.SetBoundingBox
	// void SetBoundingBox(FBox& InBoundingBox);                                                                                // [0x3c177f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AugmentedReality.ARCandidateObject.GetFriendlyName
	// FString GetFriendlyName();                                                                                               // [0x3c12f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetCandidateObjectData
	// TArray<char> GetCandidateObjectData();                                                                                   // [0x3c12a20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AugmentedReality.ARCandidateObject.GetBoundingBox
	// FBox GetBoundingBox();                                                                                                   // [0x3c126a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AugmentedReality.TrackedGeometryGroup
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FTrackedGeometryGroup
{ 
	class AARActor*                                    ARActor;                                                    // 0x0000   (0x0008)  
	class UARComponent*                                ARComponent;                                                // 0x0008   (0x0008)  
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0010   (0x0008)  
};

/// Struct /Script/AugmentedReality.ARSharedWorldReplicationState
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FARSharedWorldReplicationState
{ 
	int32_t                                            PreviewImageOffset;                                         // 0x0000   (0x0004)  
	int32_t                                            ARWorldOffset;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/AugmentedReality.ARTraceResult
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FARTraceResult
{ 
	float                                              DistanceFromCamera;                                         // 0x0000   (0x0004)  
	EARLineTraceChannels                               TraceChannel;                                               // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0xB];                                       // 0x0005   (0x000B)  MISSED
	FTransform                                         LocalTransform;                                             // 0x0010   (0x0060)  
	class UARTrackedGeometry*                          TrackedGeometry;                                            // 0x0070   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x0078   (0x0018)  MISSED
};

/// Struct /Script/AugmentedReality.ARSessionStatus
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FARSessionStatus
{ 
	FString                                            AdditionalInfo;                                             // 0x0000   (0x0010)  
	EARSessionStatus                                   Status;                                                     // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/AugmentedReality.ARPose2D
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FARPose2D
{ 
	FARSkeletonDefinition                              SkeletonDefinition;                                         // 0x0000   (0x0028)  
	TArray<FVector2D>                                  JointLocations;                                             // 0x0028   (0x0010)  
	TArray<bool>                                       IsJointTracked;                                             // 0x0038   (0x0010)  
};

/// Struct /Script/AugmentedReality.ARCameraIntrinsics
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FARCameraIntrinsics
{ 
	FIntPoint                                          ImageResolution;                                            // 0x0000   (0x0008)  
	FVector2D                                          FocalLength;                                                // 0x0008   (0x0010)  
	FVector2D                                          PrincipalPoint;                                             // 0x0018   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(AARActor) == 0x0290); // 656 bytes (0x000290 - 0x000290)
static_assert(sizeof(UARBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARTraceResultLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARBaseAsyncTaskBlueprintProxy) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UARSaveWorldAsyncTaskBlueprintProxy) == 0x0080); // 128 bytes (0x000050 - 0x000080)
static_assert(sizeof(UARGetCandidateObjectAsyncTaskBlueprintProxy) == 0x00B0); // 176 bytes (0x000050 - 0x0000B0)
static_assert(sizeof(UARComponent) == 0x0320); // 800 bytes (0x0002A0 - 0x000320)
static_assert(sizeof(FARSessionPayload) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FARPlaneUpdatePayload) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(UARPlaneComponent) == 0x03F0); // 1008 bytes (0x000320 - 0x0003F0)
static_assert(sizeof(FARPointUpdatePayload) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(UARPointComponent) == 0x0330); // 816 bytes (0x000320 - 0x000330)
static_assert(sizeof(FARFaceUpdatePayload) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UARFaceComponent) == 0x03B0); // 944 bytes (0x000320 - 0x0003B0)
static_assert(sizeof(FARImageUpdatePayload) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(UARImageComponent) == 0x03C0); // 960 bytes (0x000320 - 0x0003C0)
static_assert(sizeof(FARQRCodeUpdatePayload) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(UARQRCodeComponent) == 0x03D0); // 976 bytes (0x000320 - 0x0003D0)
static_assert(sizeof(FARPoseUpdatePayload) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UARPoseComponent) == 0x0390); // 912 bytes (0x000320 - 0x000390)
static_assert(sizeof(FAREnvironmentProbeUpdatePayload) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UAREnvironmentProbeComponent) == 0x0380); // 896 bytes (0x000320 - 0x000380)
static_assert(sizeof(FARObjectUpdatePayload) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UARObjectComponent) == 0x0380); // 896 bytes (0x000320 - 0x000380)
static_assert(sizeof(FARMeshUpdatePayload) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(UARMeshComponent) == 0x03B0); // 944 bytes (0x000320 - 0x0003B0)
static_assert(sizeof(FARGeoAnchorUpdatePayload) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(UARGeoAnchorComponent) == 0x03C0); // 960 bytes (0x000320 - 0x0003C0)
static_assert(sizeof(UARDependencyHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARGeoTrackingSupport) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy) == 0x00A0); // 160 bytes (0x000050 - 0x0000A0)
static_assert(sizeof(UGetGeoLocationAsyncTaskBlueprintProxy) == 0x00A8); // 168 bytes (0x000050 - 0x0000A8)
static_assert(sizeof(UARLifeCycleComponent) == 0x02D0); // 720 bytes (0x0002A0 - 0x0002D0)
static_assert(sizeof(UARLightEstimate) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARBasicLightEstimate) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(AAROriginActor) == 0x0290); // 656 bytes (0x000290 - 0x000290)
static_assert(sizeof(UARPin) == 0x0150); // 336 bytes (0x000028 - 0x000150)
static_assert(sizeof(FARVideoFormat) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UARSessionConfig) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(AARSharedWorldGameMode) == 0x03E0); // 992 bytes (0x000378 - 0x0003E0)
static_assert(sizeof(AARSharedWorldGameState) == 0x0340); // 832 bytes (0x000308 - 0x000340)
static_assert(sizeof(AARSharedWorldPlayerController) == 0x0858); // 2136 bytes (0x000850 - 0x000858)
static_assert(sizeof(AARSkyLight) == 0x02B0); // 688 bytes (0x0002A0 - 0x0002B0)
static_assert(sizeof(UARTexture) == 0x01F0); // 496 bytes (0x0001C8 - 0x0001F0)
static_assert(sizeof(UARTextureCameraImage) == 0x01F0); // 496 bytes (0x0001F0 - 0x0001F0)
static_assert(sizeof(UARTextureCameraDepth) == 0x0200); // 512 bytes (0x0001F0 - 0x000200)
static_assert(sizeof(UAREnvironmentCaptureProbeTexture) == 0x0290); // 656 bytes (0x000260 - 0x000290)
static_assert(sizeof(UARTraceResultDummy) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARTrackedGeometry) == 0x0158); // 344 bytes (0x000028 - 0x000158)
static_assert(sizeof(UARPlaneGeometry) == 0x01B0); // 432 bytes (0x000158 - 0x0001B0)
static_assert(sizeof(UARTrackedPoint) == 0x0160); // 352 bytes (0x000158 - 0x000160)
static_assert(sizeof(UARTrackedImage) == 0x0170); // 368 bytes (0x000158 - 0x000170)
static_assert(sizeof(UARTrackedQRCode) == 0x0190); // 400 bytes (0x000170 - 0x000190)
static_assert(sizeof(UARFaceGeometry) == 0x02C0); // 704 bytes (0x000158 - 0x0002C0)
static_assert(sizeof(UAREnvironmentCaptureProbe) == 0x0180); // 384 bytes (0x000158 - 0x000180)
static_assert(sizeof(UARTrackedObject) == 0x0160); // 352 bytes (0x000158 - 0x000160)
static_assert(sizeof(FARSkeletonDefinition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FARPose3D) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UARTrackedPose) == 0x01B0); // 432 bytes (0x000158 - 0x0001B0)
static_assert(sizeof(UARMeshGeometry) == 0x0160); // 352 bytes (0x000158 - 0x000160)
static_assert(sizeof(UARGeoAnchor) == 0x0170); // 368 bytes (0x000158 - 0x000170)
static_assert(sizeof(UARTrackableNotifyComponent) == 0x01F0); // 496 bytes (0x0000A0 - 0x0001F0)
static_assert(sizeof(UARTypesDummyClass) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UARCandidateImage) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(UARCandidateObject) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(FTrackedGeometryGroup) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FARSharedWorldReplicationState) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FARTraceResult) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FARSessionStatus) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FARPose2D) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FARCameraIntrinsics) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(UARComponent, NativeID) == 0x02A0);
static_assert(offsetof(UARComponent, DefaultMeshMaterial) == 0x02E8);
static_assert(offsetof(UARComponent, DefaultWireframeMeshMaterial) == 0x02F0);
static_assert(offsetof(UARComponent, MRMeshComponent) == 0x02F8);
static_assert(offsetof(UARComponent, MyTrackedGeometry) == 0x0300);
static_assert(offsetof(FARSessionPayload, DefaultMeshMaterial) == 0x0008);
static_assert(offsetof(FARSessionPayload, DefaultWireframeMeshMaterial) == 0x0010);
static_assert(offsetof(FARPlaneUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARPlaneUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARPlaneUpdatePayload, Center) == 0x0080);
static_assert(offsetof(FARPlaneUpdatePayload, Extents) == 0x0098);
static_assert(offsetof(FARPlaneUpdatePayload, BoundaryVertices) == 0x00B0);
static_assert(offsetof(FARPlaneUpdatePayload, ObjectClassification) == 0x00C0);
static_assert(offsetof(UARPlaneComponent, ReplicatedPayload) == 0x0320);
static_assert(offsetof(UARPointComponent, ReplicatedPayload) == 0x0320);
static_assert(offsetof(FARFaceUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARFaceUpdatePayload, LeftEyePosition) == 0x0018);
static_assert(offsetof(FARFaceUpdatePayload, RightEyePosition) == 0x0030);
static_assert(offsetof(FARFaceUpdatePayload, LookAtTarget) == 0x0048);
static_assert(offsetof(UARFaceComponent, TransformSetting) == 0x0320);
static_assert(offsetof(UARFaceComponent, ReplicatedPayload) == 0x0328);
static_assert(offsetof(FARImageUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARImageUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARImageUpdatePayload, DetectedImage) == 0x0080);
static_assert(offsetof(FARImageUpdatePayload, EstimatedSize) == 0x0088);
static_assert(offsetof(UARImageComponent, ReplicatedPayload) == 0x0320);
static_assert(offsetof(FARQRCodeUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARQRCodeUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARQRCodeUpdatePayload, Extents) == 0x0080);
static_assert(offsetof(FARQRCodeUpdatePayload, QRCode) == 0x0098);
static_assert(offsetof(UARQRCodeComponent, ReplicatedPayload) == 0x0320);
static_assert(offsetof(FARPoseUpdatePayload, WorldTransform) == 0x0000);
static_assert(offsetof(FARPoseUpdatePayload, JointTransforms) == 0x0060);
static_assert(offsetof(UARPoseComponent, ReplicatedPayload) == 0x0320);
static_assert(offsetof(FAREnvironmentProbeUpdatePayload, WorldTransform) == 0x0000);
static_assert(offsetof(UAREnvironmentProbeComponent, ReplicatedPayload) == 0x0320);
static_assert(offsetof(FARObjectUpdatePayload, WorldTransform) == 0x0000);
static_assert(offsetof(UARObjectComponent, ReplicatedPayload) == 0x0320);
static_assert(offsetof(FARMeshUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARMeshUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARMeshUpdatePayload, ObjectClassification) == 0x0080);
static_assert(offsetof(UARMeshComponent, ReplicatedPayload) == 0x0320);
static_assert(offsetof(FARGeoAnchorUpdatePayload, SessionPayload) == 0x0000);
static_assert(offsetof(FARGeoAnchorUpdatePayload, WorldTransform) == 0x0020);
static_assert(offsetof(FARGeoAnchorUpdatePayload, AltitudeSource) == 0x008C);
static_assert(offsetof(FARGeoAnchorUpdatePayload, AnchorName) == 0x0090);
static_assert(offsetof(UARGeoAnchorComponent, ReplicatedPayload) == 0x0320);
static_assert(offsetof(UARBasicLightEstimate, AmbientColor) == 0x0030);
static_assert(offsetof(UARPin, TrackedGeometry) == 0x0028);
static_assert(offsetof(UARPin, PinnedComponent) == 0x0030);
static_assert(offsetof(UARPin, LocalToTrackingTransform) == 0x0040);
static_assert(offsetof(UARPin, LocalToAlignedTrackingTransform) == 0x00A0);
static_assert(offsetof(UARPin, TrackingState) == 0x0100);
static_assert(offsetof(UARSessionConfig, WorldAlignment) == 0x003A);
static_assert(offsetof(UARSessionConfig, SessionType) == 0x003B);
static_assert(offsetof(UARSessionConfig, PlaneDetectionMode) == 0x003C);
static_assert(offsetof(UARSessionConfig, LightEstimationMode) == 0x0040);
static_assert(offsetof(UARSessionConfig, FrameSyncMode) == 0x0041);
static_assert(offsetof(UARSessionConfig, CandidateImages) == 0x0048);
static_assert(offsetof(UARSessionConfig, EnvironmentCaptureProbeType) == 0x005C);
static_assert(offsetof(UARSessionConfig, WorldMapData) == 0x0060);
static_assert(offsetof(UARSessionConfig, CandidateObjects) == 0x0070);
static_assert(offsetof(UARSessionConfig, DesiredVideoFormat) == 0x0080);
static_assert(offsetof(UARSessionConfig, FaceTrackingDirection) == 0x008D);
static_assert(offsetof(UARSessionConfig, FaceTrackingUpdate) == 0x008E);
static_assert(offsetof(UARSessionConfig, SerializedARCandidateImageDatabase) == 0x0098);
static_assert(offsetof(UARSessionConfig, EnabledSessionTrackingFeature) == 0x00A8);
static_assert(offsetof(UARSessionConfig, SceneReconstructionMethod) == 0x00A9);
static_assert(offsetof(UARSessionConfig, PlaneComponentClass) == 0x00B0);
static_assert(offsetof(UARSessionConfig, PointComponentClass) == 0x00B8);
static_assert(offsetof(UARSessionConfig, FaceComponentClass) == 0x00C0);
static_assert(offsetof(UARSessionConfig, ImageComponentClass) == 0x00C8);
static_assert(offsetof(UARSessionConfig, QRCodeComponentClass) == 0x00D0);
static_assert(offsetof(UARSessionConfig, PoseComponentClass) == 0x00D8);
static_assert(offsetof(UARSessionConfig, EnvironmentProbeComponentClass) == 0x00E0);
static_assert(offsetof(UARSessionConfig, ObjectComponentClass) == 0x00E8);
static_assert(offsetof(UARSessionConfig, MeshComponentClass) == 0x00F0);
static_assert(offsetof(UARSessionConfig, GeoAnchorComponentClass) == 0x00F8);
static_assert(offsetof(UARSessionConfig, DefaultMeshMaterial) == 0x0100);
static_assert(offsetof(UARSessionConfig, DefaultWireframeMeshMaterial) == 0x0108);
static_assert(offsetof(AARSharedWorldGameState, PreviewImageData) == 0x0308);
static_assert(offsetof(AARSharedWorldGameState, ARWorldData) == 0x0318);
static_assert(offsetof(AARSkyLight, CaptureProbe) == 0x02A0);
static_assert(offsetof(UARTexture, TextureType) == 0x01C8);
static_assert(offsetof(UARTexture, ExternalTextureGuid) == 0x01D0);
static_assert(offsetof(UARTexture, Size) == 0x01E0);
static_assert(offsetof(UARTextureCameraDepth, DepthQuality) == 0x01F0);
static_assert(offsetof(UARTextureCameraDepth, DepthAccuracy) == 0x01F1);
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, TextureType) == 0x0260);
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, ExternalTextureGuid) == 0x0268);
static_assert(offsetof(UAREnvironmentCaptureProbeTexture, Size) == 0x0278);
static_assert(offsetof(UARTrackedGeometry, UniqueId) == 0x0028);
static_assert(offsetof(UARTrackedGeometry, LocalToTrackingTransform) == 0x0040);
static_assert(offsetof(UARTrackedGeometry, LocalToAlignedTrackingTransform) == 0x00A0);
static_assert(offsetof(UARTrackedGeometry, TrackingState) == 0x0100);
static_assert(offsetof(UARTrackedGeometry, UnderlyingMesh) == 0x0110);
static_assert(offsetof(UARTrackedGeometry, ObjectClassification) == 0x0118);
static_assert(offsetof(UARTrackedGeometry, SpatialMeshUsageFlags) == 0x0119);
static_assert(offsetof(UARTrackedGeometry, DebugName) == 0x0140);
static_assert(offsetof(UARPlaneGeometry, Orientation) == 0x0158);
static_assert(offsetof(UARPlaneGeometry, Center) == 0x0160);
static_assert(offsetof(UARPlaneGeometry, Extent) == 0x0178);
static_assert(offsetof(UARPlaneGeometry, BoundaryPolygon) == 0x0190);
static_assert(offsetof(UARPlaneGeometry, SubsumedBy) == 0x01A0);
static_assert(offsetof(UARTrackedImage, DetectedImage) == 0x0158);
static_assert(offsetof(UARTrackedImage, EstimatedSize) == 0x0160);
static_assert(offsetof(UARTrackedQRCode, QRCode) == 0x0170);
static_assert(offsetof(UARFaceGeometry, LookAtTarget) == 0x0158);
static_assert(offsetof(UARFaceGeometry, BlendShapes) == 0x0178);
static_assert(offsetof(UARFaceGeometry, LeftEyeTransform) == 0x0200);
static_assert(offsetof(UARFaceGeometry, RightEyeTransform) == 0x0260);
static_assert(offsetof(UAREnvironmentCaptureProbe, Extent) == 0x0158);
static_assert(offsetof(UAREnvironmentCaptureProbe, EnvironmentCaptureTexture) == 0x0170);
static_assert(offsetof(UARTrackedObject, DetectedObject) == 0x0158);
static_assert(offsetof(FARSkeletonDefinition, JointNames) == 0x0008);
static_assert(offsetof(FARSkeletonDefinition, ParentIndices) == 0x0018);
static_assert(offsetof(FARPose3D, SkeletonDefinition) == 0x0000);
static_assert(offsetof(FARPose3D, JointTransforms) == 0x0028);
static_assert(offsetof(FARPose3D, IsJointTracked) == 0x0038);
static_assert(offsetof(FARPose3D, JointTransformSpace) == 0x0048);
static_assert(offsetof(UARTrackedPose, TrackedPose) == 0x0158);
static_assert(offsetof(UARCandidateImage, CandidateTexture) == 0x0030);
static_assert(offsetof(UARCandidateImage, FriendlyName) == 0x0038);
static_assert(offsetof(UARCandidateImage, Orientation) == 0x0050);
static_assert(offsetof(UARCandidateObject, CandidateObjectData) == 0x0030);
static_assert(offsetof(UARCandidateObject, FriendlyName) == 0x0040);
static_assert(offsetof(UARCandidateObject, BoundingBox) == 0x0050);
static_assert(offsetof(FTrackedGeometryGroup, ARActor) == 0x0000);
static_assert(offsetof(FTrackedGeometryGroup, ARComponent) == 0x0008);
static_assert(offsetof(FTrackedGeometryGroup, TrackedGeometry) == 0x0010);
static_assert(offsetof(FARTraceResult, TraceChannel) == 0x0004);
static_assert(offsetof(FARTraceResult, LocalTransform) == 0x0010);
static_assert(offsetof(FARTraceResult, TrackedGeometry) == 0x0070);
static_assert(offsetof(FARSessionStatus, AdditionalInfo) == 0x0000);
static_assert(offsetof(FARSessionStatus, Status) == 0x0010);
static_assert(offsetof(FARPose2D, SkeletonDefinition) == 0x0000);
static_assert(offsetof(FARPose2D, JointLocations) == 0x0028);
static_assert(offsetof(FARPose2D, IsJointTracked) == 0x0038);
static_assert(offsetof(FARCameraIntrinsics, ImageResolution) == 0x0000);
static_assert(offsetof(FARCameraIntrinsics, FocalLength) == 0x0008);
static_assert(offsetof(FARCameraIntrinsics, PrincipalPoint) == 0x0018);
