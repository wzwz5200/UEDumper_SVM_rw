
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/InteractiveToolsFramework.EGizmoElementState
/// Size: 0x01 (1 bytes)
enum class EGizmoElementState : uint8_t
{
	EGizmoElementState__None                                                         = 0,
	EGizmoElementState__Visible                                                      = 2,
	EGizmoElementState__Hittable                                                     = 4,
	EGizmoElementState__VisibleAndHittable                                           = 6
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementInteractionState
/// Size: 0x04 (4 bytes)
enum class EGizmoElementInteractionState : uint32_t
{
	EGizmoElementInteractionState__None                                              = 0,
	EGizmoElementInteractionState__Hovering                                          = 1,
	EGizmoElementInteractionState__Interacting                                       = 2
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementViewDependentType
/// Size: 0x04 (4 bytes)
enum class EGizmoElementViewDependentType : uint32_t
{
	EGizmoElementViewDependentType__None                                             = 0,
	EGizmoElementViewDependentType__Axis                                             = 1,
	EGizmoElementViewDependentType__Plane                                            = 2
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementViewAlignType
/// Size: 0x04 (4 bytes)
enum class EGizmoElementViewAlignType : uint32_t
{
	EGizmoElementViewAlignType__None                                                 = 0,
	EGizmoElementViewAlignType__PointOnly                                            = 1,
	EGizmoElementViewAlignType__PointEye                                             = 2,
	EGizmoElementViewAlignType__PointScreen                                          = 3,
	EGizmoElementViewAlignType__Axial                                                = 4
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementPartialType
/// Size: 0x04 (4 bytes)
enum class EGizmoElementPartialType : uint32_t
{
	EGizmoElementPartialType__None                                                   = 0,
	EGizmoElementPartialType__Partial                                                = 1,
	EGizmoElementPartialType__PartialViewDependent                                   = 2
};

/// Enum /Script/InteractiveToolsFramework.EStandardToolContextMaterials
/// Size: 0x01 (1 bytes)
enum class EStandardToolContextMaterials : uint8_t
{
	EStandardToolContextMaterials__VertexColorMaterial                               = 1
};

/// Enum /Script/InteractiveToolsFramework.EToolContextCoordinateSystem
/// Size: 0x04 (4 bytes)
enum class EToolContextCoordinateSystem : uint32_t
{
	EToolContextCoordinateSystem__World                                              = 0,
	EToolContextCoordinateSystem__Local                                              = 1
};

/// Enum /Script/InteractiveToolsFramework.EToolContextTransformGizmoMode
/// Size: 0x01 (1 bytes)
enum class EToolContextTransformGizmoMode : uint8_t
{
	EToolContextTransformGizmoMode__NoGizmo                                          = 0,
	EToolContextTransformGizmoMode__Translation                                      = 1,
	EToolContextTransformGizmoMode__Rotation                                         = 2,
	EToolContextTransformGizmoMode__Scale                                            = 3,
	EToolContextTransformGizmoMode__Combined                                         = 8
};

/// Enum /Script/InteractiveToolsFramework.EToolMessageLevel
/// Size: 0x01 (1 bytes)
enum class EToolMessageLevel : uint8_t
{
	EToolMessageLevel__Internal                                                      = 0,
	EToolMessageLevel__UserMessage                                                   = 1,
	EToolMessageLevel__UserNotification                                              = 2,
	EToolMessageLevel__UserWarning                                                   = 3,
	EToolMessageLevel__UserError                                                     = 4
};

/// Enum /Script/InteractiveToolsFramework.ESelectedObjectsModificationType
/// Size: 0x01 (1 bytes)
enum class ESelectedObjectsModificationType : uint8_t
{
	ESelectedObjectsModificationType__Replace                                        = 0,
	ESelectedObjectsModificationType__Add                                            = 1,
	ESelectedObjectsModificationType__Remove                                         = 2,
	ESelectedObjectsModificationType__Clear                                          = 3
};

/// Enum /Script/InteractiveToolsFramework.EViewInteractionState
/// Size: 0x01 (1 bytes)
enum class EViewInteractionState : uint8_t
{
	EViewInteractionState__None                                                      = 0,
	EViewInteractionState__Hovered                                                   = 1,
	EViewInteractionState__Focused                                                   = 2
};

/// Enum /Script/InteractiveToolsFramework.EGizmoElementArrowHeadType
/// Size: 0x04 (4 bytes)
enum class EGizmoElementArrowHeadType : uint32_t
{
	EGizmoElementArrowHeadType__Cone                                                 = 0,
	EGizmoElementArrowHeadType__Cube                                                 = 1
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureSide
/// Size: 0x01 (1 bytes)
enum class EInputCaptureSide : uint8_t
{
	EInputCaptureSide__None                                                          = 0,
	EInputCaptureSide__Left                                                          = 1,
	EInputCaptureSide__Right                                                         = 2,
	EInputCaptureSide__Both                                                          = 3,
	EInputCaptureSide__Any                                                           = 99
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureRequestType
/// Size: 0x01 (1 bytes)
enum class EInputCaptureRequestType : uint8_t
{
	EInputCaptureRequestType__Begin                                                  = 1,
	EInputCaptureRequestType__Ignore                                                 = 2
};

/// Enum /Script/InteractiveToolsFramework.EInputCaptureState
/// Size: 0x01 (1 bytes)
enum class EInputCaptureState : uint8_t
{
	EInputCaptureState__Begin                                                        = 1,
	EInputCaptureState__Continue                                                     = 2,
	EInputCaptureState__End                                                          = 3,
	EInputCaptureState__Ignore                                                       = 4
};

/// Enum /Script/InteractiveToolsFramework.EInputDevices
/// Size: 0x02 (2 bytes)
enum class EInputDevices : uint16_t
{
	EInputDevices__None                                                              = 0,
	EInputDevices__Keyboard                                                          = 1,
	EInputDevices__Mouse                                                             = 2,
	EInputDevices__Gamepad                                                           = 4,
	EInputDevices__OculusTouch                                                       = 8,
	EInputDevices__HTCViveWands                                                      = 16,
	EInputDevices__AnySpatialDevice                                                  = 24,
	EInputDevices__TabletFingers                                                     = 1024
};

/// Enum /Script/InteractiveToolsFramework.ETransformGizmoSubElements
/// Size: 0x04 (4 bytes)
enum class ETransformGizmoSubElements : uint32_t
{
	ETransformGizmoSubElements__None                                                 = 0,
	ETransformGizmoSubElements__TranslateAxisX                                       = 2,
	ETransformGizmoSubElements__TranslateAxisY                                       = 4,
	ETransformGizmoSubElements__TranslateAxisZ                                       = 8,
	ETransformGizmoSubElements__TranslateAllAxes                                     = 14,
	ETransformGizmoSubElements__TranslatePlaneXY                                     = 16,
	ETransformGizmoSubElements__TranslatePlaneXZ                                     = 32,
	ETransformGizmoSubElements__TranslatePlaneYZ                                     = 64,
	ETransformGizmoSubElements__TranslateAllPlanes                                   = 112,
	ETransformGizmoSubElements__RotateAxisX                                          = 128,
	ETransformGizmoSubElements__RotateAxisY                                          = 256,
	ETransformGizmoSubElements__RotateAxisZ                                          = 512,
	ETransformGizmoSubElements__RotateAllAxes                                        = 896,
	ETransformGizmoSubElements__ScaleAxisX                                           = 1024,
	ETransformGizmoSubElements__ScaleAxisY                                           = 2048,
	ETransformGizmoSubElements__ScaleAxisZ                                           = 4096,
	ETransformGizmoSubElements__ScaleAllAxes                                         = 7168,
	ETransformGizmoSubElements__ScalePlaneYZ                                         = 8192,
	ETransformGizmoSubElements__ScalePlaneXZ                                         = 16384,
	ETransformGizmoSubElements__ScalePlaneXY                                         = 32768,
	ETransformGizmoSubElements__ScaleAllPlanes                                       = 57344,
	ETransformGizmoSubElements__ScaleUniform                                         = 65536,
	ETransformGizmoSubElements__StandardTranslateRotate                              = 1022,
	ETransformGizmoSubElements__TranslateRotateUniformScale                          = 66558,
	ETransformGizmoSubElements__FullTranslateRotateScale                             = 131070
};

/// Enum /Script/InteractiveToolsFramework.EToolShutdownType
/// Size: 0x01 (1 bytes)
enum class EToolShutdownType : uint8_t
{
	EToolShutdownType__Completed                                                     = 0,
	EToolShutdownType__Accept                                                        = 1,
	EToolShutdownType__Cancel                                                        = 2
};

/// Enum /Script/InteractiveToolsFramework.EToolSide
/// Size: 0x01 (1 bytes)
enum class EToolSide : uint8_t
{
	EToolSide__Left                                                                  = 1,
	EToolSide__Mouse                                                                 = 1,
	EToolSide__Right                                                                 = 2
};

/// Enum /Script/InteractiveToolsFramework.EToolChangeTrackingMode
/// Size: 0x01 (1 bytes)
enum class EToolChangeTrackingMode : uint8_t
{
	EToolChangeTrackingMode__NoChangeTracking                                        = 1,
	EToolChangeTrackingMode__UndoToExit                                              = 2,
	EToolChangeTrackingMode__FullUndoRedo                                            = 3
};

/// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryType
/// Size: 0x01 (1 bytes)
enum class ESceneSnapQueryType : uint8_t
{
	ESceneSnapQueryType__Position                                                    = 1,
	ESceneSnapQueryType__Rotation                                                    = 2
};

/// Enum /Script/InteractiveToolsFramework.ESceneSnapQueryTargetType
/// Size: 0x01 (1 bytes)
enum class ESceneSnapQueryTargetType : uint8_t
{
	ESceneSnapQueryTargetType__None                                                  = 0,
	ESceneSnapQueryTargetType__MeshVertex                                            = 1,
	ESceneSnapQueryTargetType__MeshEdge                                              = 2,
	ESceneSnapQueryTargetType__Grid                                                  = 4,
	ESceneSnapQueryTargetType__All                                                   = 7
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolPropertySet
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UInteractiveToolPropertySet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	TMap<FString, class UInteractiveToolPropertySet*>  CachedPropertiesMap;                                        // 0x0038   (0x0050)  
	bool                                               bIsPropertySetEnabled;                                      // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1F];                                      // 0x0089   (0x001F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInteractiveToolBuilder : public UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolWithToolTargetsBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInteractiveToolWithToolTargetsBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveTool
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UInteractiveTool : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x38];                                      // 0x0028   (0x0038)  MISSED
	class UInputBehaviorSet*                           InputBehaviors;                                             // 0x0060   (0x0008)  
	TArray<class UObject*>                             ToolPropertyObjects;                                        // 0x0068   (0x0010)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0078   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleSelectionTool
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class USingleSelectionTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0098   (0x0008)  MISSED
	class UToolTarget*                                 Target;                                                     // 0x00A0   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.MultiSelectionTool
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMultiSelectionTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UToolTarget*>                         Targets;                                                    // 0x00A0   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.SingleClickTool
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
class USingleClickTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MeshSurfacePointToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UMeshSurfacePointToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MeshSurfacePointTool
/// Size: 0x0100 (256 bytes) (0x0000A8 - 0x000100) align 8 MaxSize: 0x0100
class UMeshSurfacePointTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x00A8   (0x0050)  MISSED
	TWeakObjectPtr<class UWorld*>                      TargetWorld;                                                // 0x00F8   (0x0008)  
};

/// Struct /Script/InteractiveToolsFramework.BrushStampData
/// Size: 0x0128 (296 bytes) (0x000000 - 0x000128) align 8 MaxSize: 0x0128
struct FBrushStampData
{ 
	unsigned char                                      UnknownData00_2[0x128];                                     // 0x0000   (0x0128)  MISSED
};

/// Class /Script/InteractiveToolsFramework.BaseBrushTool
/// Size: 0x0280 (640 bytes) (0x000100 - 0x000280) align 8 MaxSize: 0x0280
class UBaseBrushTool : public UMeshSurfacePointTool
{ 
public:
	class UBrushBaseProperties*                        BrushProperties;                                            // 0x0100   (0x0008)  
	bool                                               bInBrushStroke;                                             // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0109   (0x0003)  MISSED
	float                                              WorldToLocalScale;                                          // 0x010C   (0x0004)  
	FBrushStampData                                    LastBrushStamp;                                             // 0x0110   (0x0128)  
	unsigned char                                      UnknownData01_6[0x10];                                      // 0x0238   (0x0010)  MISSED
	TSoftObjectPtr<class UClass*>                      PropertyClass;                                              // 0x0248   (0x0030)  
	class UBrushStampIndicator*                        BrushStampIndicator;                                        // 0x0278   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.InteractiveCommand
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInteractiveCommand : public UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractionMechanic
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UInteractionMechanic : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveCommandArguments
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UInteractiveCommandArguments : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveCommandResult
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInteractiveCommandResult : public UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InternalToolFrameworkActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class AInternalToolFrameworkActor : public AActor
{ 
public:
	bool                                               bIsSelectableInEditor;                                      // 0x0290   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0291   (0x0007)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SceneSnappingManager
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USceneSnappingManager : public UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.AssetBackedTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAssetBackedTarget : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseComponent
/// Size: 0x05A0 (1440 bytes) (0x000568 - 0x0005A0) align 16 MaxSize: 0x0598
class UGizmoBaseComponent : public UPrimitiveComponent
{ 
public:
	FLinearColor                                       Color;                                                      // 0x0568   (0x0010)  
	float                                              HoverSizeMultiplier;                                        // 0x0578   (0x0004)  
	float                                              PixelHitDistanceThreshold;                                  // 0x057C   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0580   (0x0008)  MISSED
	class UGizmoViewContext*                           GizmoViewContext;                                           // 0x0588   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0590   (0x0008)  MISSED


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	// void UpdateWorldLocalState(bool bWorldIn);                                                                               // [0x52e5b00] Final|Native|Public  
	// Function /Script/InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
	// void UpdateHoverState(bool bHoveringIn);                                                                                 // [0x52e5910] Final|Native|Public  
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmoBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInteractiveGizmoBuilder : public UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.ToolContextTransactionProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UToolContextTransactionProvider : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.ToolFrameworkComponent
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UToolFrameworkComponent : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolCameraFocusAPI
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInteractiveToolCameraFocusAPI : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolNestedAcceptCancelAPI
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInteractiveToolNestedAcceptCancelAPI : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolExclusiveToolAPI
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInteractiveToolExclusiveToolAPI : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.MaterialProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMaterialProvider : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.MeshDescriptionCommitter
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshDescriptionCommitter : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.MeshDescriptionProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshDescriptionProvider : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseVec2ParameterSource
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UGizmoBaseVec2ParameterSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.GizmoVec2ParameterChange
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGizmoVec2ParameterChange
{ 
	FVector2D                                          InitialValue;                                               // 0x0000   (0x0010)  
	FVector2D                                          CurrentValue;                                               // 0x0010   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.GizmoLocalVec2ParameterSource
/// Size: 0x0078 (120 bytes) (0x000048 - 0x000078) align 8 MaxSize: 0x0078
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{ 
public:
	FVector2D                                          Value;                                                      // 0x0048   (0x0010)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x0058   (0x0020)  
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseFloatParameterSource
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UGizmoBaseFloatParameterSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.GizmoFloatParameterChange
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FGizmoFloatParameterChange
{ 
	float                                              InitialValue;                                               // 0x0000   (0x0004)  
	float                                              CurrentValue;                                               // 0x0004   (0x0004)  
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisTranslationParameterSource
/// Size: 0x0190 (400 bytes) (0x000048 - 0x000190) align 16 MaxSize: 0x0190
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	unsigned char                                      UnknownData00_8[0x88];                                      // 0x0048   (0x0088)  MISSED
	SDK_UNDEFINED(16,1224) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,1225) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x00E0   (0x0010)  
	float                                              Parameter;                                                  // 0x00F0   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x00F4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FVector                                            CurTranslationAxis;                                         // 0x0100   (0x0018)  
	FVector                                            CurTranslationOrigin;                                       // 0x0118   (0x0018)  
	FTransform                                         InitialTransform;                                           // 0x0130   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
/// Size: 0x0220 (544 bytes) (0x000048 - 0x000220) align 16 MaxSize: 0x0220
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{ 
public:
	unsigned char                                      UnknownData00_8[0xC8];                                      // 0x0048   (0x00C8)  MISSED
	SDK_UNDEFINED(16,1226) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0110   (0x0010)  
	SDK_UNDEFINED(16,1227) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x0120   (0x0010)  
	FVector2D                                          Parameter;                                                  // 0x0130   (0x0010)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x0140   (0x0020)  
	FVector                                            CurTranslationOrigin;                                       // 0x0160   (0x0018)  
	FVector                                            CurTranslationNormal;                                       // 0x0178   (0x0018)  
	FVector                                            CurTranslationAxisX;                                        // 0x0190   (0x0018)  
	FVector                                            CurTranslationAxisY;                                        // 0x01A8   (0x0018)  
	FTransform                                         InitialTransform;                                           // 0x01C0   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisRotationParameterSource
/// Size: 0x0190 (400 bytes) (0x000048 - 0x000190) align 16 MaxSize: 0x0190
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	unsigned char                                      UnknownData00_8[0x88];                                      // 0x0048   (0x0088)  MISSED
	SDK_UNDEFINED(16,1228) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x00D0   (0x0010)  
	SDK_UNDEFINED(16,1229) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x00E0   (0x0010)  
	float                                              Angle;                                                      // 0x00F0   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x00F4   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FVector                                            CurRotationAxis;                                            // 0x0100   (0x0018)  
	FVector                                            CurRotationOrigin;                                          // 0x0118   (0x0018)  
	FTransform                                         InitialTransform;                                           // 0x0130   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.GizmoUniformScaleParameterSource
/// Size: 0x0160 (352 bytes) (0x000048 - 0x000160) align 16 MaxSize: 0x0160
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{ 
public:
	SDK_UNDEFINED(16,1230) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1231) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x0058   (0x0010)  
	float                                              ScaleMultiplier;                                            // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FVector2D                                          Parameter;                                                  // 0x0070   (0x0010)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x0080   (0x0020)  
	FVector                                            CurScaleOrigin;                                             // 0x00A0   (0x0018)  
	FVector                                            CurScaleNormal;                                             // 0x00B8   (0x0018)  
	FVector                                            CurScaleAxisX;                                              // 0x00D0   (0x0018)  
	FVector                                            CurScaleAxisY;                                              // 0x00E8   (0x0018)  
	FTransform                                         InitialTransform;                                           // 0x0100   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisScaleParameterSource
/// Size: 0x0110 (272 bytes) (0x000048 - 0x000110) align 16 MaxSize: 0x0110
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	SDK_UNDEFINED(16,1232) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1233) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x0058   (0x0010)  
	float                                              ScaleMultiplier;                                            // 0x0068   (0x0004)  
	bool                                               bClampToZero;                                               // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              Parameter;                                                  // 0x0070   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x0074   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x007C   (0x0004)  MISSED
	FVector                                            CurScaleAxis;                                               // 0x0080   (0x0018)  
	FVector                                            CurScaleOrigin;                                             // 0x0098   (0x0018)  
	FTransform                                         InitialTransform;                                           // 0x00B0   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.GizmoPlaneScaleParameterSource
/// Size: 0x01B0 (432 bytes) (0x000048 - 0x0001B0) align 16 MaxSize: 0x01B0
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0048   (0x0048)  MISSED
	SDK_UNDEFINED(16,1234) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0090   (0x0010)  
	SDK_UNDEFINED(16,1235) /* TScriptInterface<Class> */ __um(TransformSource);                                    // 0x00A0   (0x0010)  
	float                                              ScaleMultiplier;                                            // 0x00B0   (0x0004)  
	bool                                               bUseEqualScaling;                                           // 0x00B4   (0x0001)  
	bool                                               bClampToZero;                                               // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00B6   (0x0002)  MISSED
	FVector2D                                          Parameter;                                                  // 0x00B8   (0x0010)  
	FGizmoVec2ParameterChange                          LastChange;                                                 // 0x00C8   (0x0020)  
	FVector                                            CurScaleOrigin;                                             // 0x00E8   (0x0018)  
	FVector                                            CurScaleNormal;                                             // 0x0100   (0x0018)  
	FVector                                            CurScaleAxisX;                                              // 0x0118   (0x0018)  
	FVector                                            CurScaleAxisY;                                              // 0x0130   (0x0018)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0148   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0150   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.PhysicsDataSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPhysicsDataSource : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.PrimitiveComponentBackedTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPrimitiveComponentBackedTarget : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.SkeletalMeshBackedTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USkeletalMeshBackedTarget : public UAssetBackedTarget
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.StaticMeshBackedTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UStaticMeshBackedTarget : public UAssetBackedTarget
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InputBehavior
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UInputBehavior : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.AnyButtonInputBehavior
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 16 MaxSize: 0x0080
class UAnyButtonInputBehavior : public UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0030   (0x0050)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ClickDragInputBehavior
/// Size: 0x0140 (320 bytes) (0x000080 - 0x000140) align 16 MaxSize: 0x0140
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_8[0xA0];                                      // 0x0080   (0x00A0)  MISSED
	bool                                               bUpdateModifiersDuringDrag;                                 // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_7[0x1F];                                      // 0x0121   (0x001F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.LocalClickDragInputBehavior
/// Size: 0x0280 (640 bytes) (0x000140 - 0x000280) align 16 MaxSize: 0x0280
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x140];                                     // 0x0140   (0x0140)  MISSED
};

/// Class /Script/InteractiveToolsFramework.KeyAsModifierInputBehavior
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UKeyAsModifierInputBehavior : public UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MouseHoverBehavior
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UMouseHoverBehavior : public UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x68];                                      // 0x0030   (0x0068)  MISSED
};

/// Class /Script/InteractiveToolsFramework.LocalMouseHoverBehavior
/// Size: 0x01E0 (480 bytes) (0x000098 - 0x0001E0) align 16 MaxSize: 0x01E0
class ULocalMouseHoverBehavior : public UMouseHoverBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x148];                                     // 0x0098   (0x0148)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MouseWheelInputBehavior
/// Size: 0x0130 (304 bytes) (0x000080 - 0x000130) align 16 MaxSize: 0x0130
class UMouseWheelInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0080   (0x00B0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MultiClickSequenceInputBehavior
/// Size: 0x0130 (304 bytes) (0x000080 - 0x000130) align 16 MaxSize: 0x0130
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0xB0];                                      // 0x0080   (0x00B0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleClickInputBehavior
/// Size: 0x0130 (304 bytes) (0x000080 - 0x000130) align 16 MaxSize: 0x0130
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0080   (0x0040)  MISSED
	bool                                               HitTestOnRelease;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6F];                                      // 0x00C1   (0x006F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.LocalSingleClickInputBehavior
/// Size: 0x0200 (512 bytes) (0x000130 - 0x000200) align 16 MaxSize: 0x0200
class ULocalSingleClickInputBehavior : public USingleClickInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0xD0];                                      // 0x0130   (0x00D0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleClickOrDragInputBehavior
/// Size: 0x0180 (384 bytes) (0x000080 - 0x000180) align 16 MaxSize: 0x0180
class USingleClickOrDragInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_8[0xA0];                                      // 0x0080   (0x00A0)  MISSED
	bool                                               bBeginDragIfClickTargetNotHit;                              // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0121   (0x0003)  MISSED
	float                                              ClickDistanceThreshold;                                     // 0x0124   (0x0004)  
	unsigned char                                      UnknownData02_7[0x58];                                      // 0x0128   (0x0058)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleKeyCaptureBehavior
/// Size: 0x0110 (272 bytes) (0x000030 - 0x000110) align 16 MaxSize: 0x0110
class USingleKeyCaptureBehavior : public UInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0xE0];                                      // 0x0030   (0x00E0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.WidgetBaseBehavior
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWidgetBaseBehavior : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.AxisAngleGizmoBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmo
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UInteractiveGizmo : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UInputBehaviorSet*                           InputBehaviors;                                             // 0x0030   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.AxisAngleGizmo
/// Size: 0x01D0 (464 bytes) (0x000038 - 0x0001D0) align 16 MaxSize: 0x01D0
class UAxisAngleGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0038   (0x0010)  MISSED
	SDK_UNDEFINED(16,1236) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1237) /* TScriptInterface<Class> */ __um(AngleSource);                                        // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1238) /* TScriptInterface<Class> */ __um(HitTarget);                                          // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1239) /* TScriptInterface<Class> */ __um(StateTarget);                                        // 0x0078   (0x0010)  
	class UClickDragInputBehavior*                     MouseBehavior;                                              // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x0090   (0x0080)  MISSED
	bool                                               bInInteraction;                                             // 0x0110   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0111   (0x0007)  MISSED
	FVector                                            RotationOrigin;                                             // 0x0118   (0x0018)  
	FVector                                            RotationAxis;                                               // 0x0130   (0x0018)  
	FVector                                            RotationPlaneX;                                             // 0x0148   (0x0018)  
	FVector                                            RotationPlaneY;                                             // 0x0160   (0x0018)  
	FVector                                            InteractionStartPoint;                                      // 0x0178   (0x0018)  
	FVector                                            InteractionCurPoint;                                        // 0x0190   (0x0018)  
	float                                              InteractionStartAngle;                                      // 0x01A8   (0x0004)  
	float                                              InteractionCurAngle;                                        // 0x01AC   (0x0004)  
	unsigned char                                      UnknownData03_7[0x20];                                      // 0x01B0   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.AxisPositionGizmoBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.AxisPositionGizmo
/// Size: 0x01C0 (448 bytes) (0x000038 - 0x0001C0) align 16 MaxSize: 0x01C0
class UAxisPositionGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0038   (0x0010)  MISSED
	SDK_UNDEFINED(16,1240) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1241) /* TScriptInterface<Class> */ __um(ParameterSource);                                    // 0x0058   (0x0010)  
	class UGizmoViewContext*                           GizmoViewContext;                                           // 0x0068   (0x0008)  
	SDK_UNDEFINED(16,1242) /* TScriptInterface<Class> */ __um(HitTarget);                                          // 0x0070   (0x0010)  
	SDK_UNDEFINED(16,1243) /* TScriptInterface<Class> */ __um(StateTarget);                                        // 0x0080   (0x0010)  
	class UClickDragInputBehavior*                     MouseBehavior;                                              // 0x0090   (0x0008)  
	bool                                               bEnableSignedAxis;                                          // 0x0098   (0x0001)  
	unsigned char                                      UnknownData01_6[0x88];                                      // 0x0099   (0x0088)  MISSED
	bool                                               bInInteraction;                                             // 0x0121   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0122   (0x0006)  MISSED
	FVector                                            InteractionOrigin;                                          // 0x0128   (0x0018)  
	FVector                                            InteractionAxis;                                            // 0x0140   (0x0018)  
	FVector                                            InteractionStartPoint;                                      // 0x0158   (0x0018)  
	FVector                                            InteractionCurPoint;                                        // 0x0170   (0x0018)  
	float                                              InteractionStartParameter;                                  // 0x0188   (0x0004)  
	float                                              InteractionCurParameter;                                    // 0x018C   (0x0004)  
	float                                              ParameterSign;                                              // 0x0190   (0x0004)  
	unsigned char                                      UnknownData03_7[0x2C];                                      // 0x0194   (0x002C)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoConstantAxisSource
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UGizmoConstantAxisSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector                                            Origin;                                                     // 0x0030   (0x0018)  
	FVector                                            Direction;                                                  // 0x0048   (0x0018)  
};

/// Class /Script/InteractiveToolsFramework.GizmoConstantFrameAxisSource
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UGizmoConstantFrameAxisSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector                                            Origin;                                                     // 0x0030   (0x0018)  
	FVector                                            Direction;                                                  // 0x0048   (0x0018)  
	FVector                                            TangentX;                                                   // 0x0060   (0x0018)  
	FVector                                            TangentY;                                                   // 0x0078   (0x0018)  
};

/// Class /Script/InteractiveToolsFramework.GizmoWorldAxisSource
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UGizmoWorldAxisSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector                                            Origin;                                                     // 0x0030   (0x0018)  
	int32_t                                            AxisIndex;                                                  // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentAxisSource
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UGizmoComponentAxisSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class USceneComponent*                             Component;                                                  // 0x0030   (0x0008)  
	int32_t                                            AxisIndex;                                                  // 0x0038   (0x0004)  
	bool                                               bLocalAxes;                                                 // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/InteractiveToolsFramework.BrushStampIndicatorBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.BrushStampIndicator
/// Size: 0x00D8 (216 bytes) (0x000038 - 0x0000D8) align 8 MaxSize: 0x00D8
class UBrushStampIndicator : public UInteractiveGizmo
{ 
public:
	bool                                               bVisible;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              BrushRadius;                                                // 0x003C   (0x0004)  
	float                                              BrushFalloff;                                               // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FVector                                            BrushPosition;                                              // 0x0048   (0x0018)  
	FVector                                            BrushNormal;                                                // 0x0060   (0x0018)  
	bool                                               bDrawIndicatorLines;                                        // 0x0078   (0x0001)  
	bool                                               bDrawRadiusCircle;                                          // 0x0079   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x007A   (0x0002)  MISSED
	int32_t                                            SampleStepCount;                                            // 0x007C   (0x0004)  
	FLinearColor                                       LineColor;                                                  // 0x0080   (0x0010)  
	float                                              LineThickness;                                              // 0x0090   (0x0004)  
	bool                                               bDepthTested;                                               // 0x0094   (0x0001)  
	bool                                               bDrawSecondaryLines;                                        // 0x0095   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0096   (0x0002)  MISSED
	float                                              SecondaryLineThickness;                                     // 0x0098   (0x0004)  
	FLinearColor                                       SecondaryLineColor;                                         // 0x009C   (0x0010)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	class UPrimitiveComponent*                         AttachedComponent;                                          // 0x00B0   (0x0008)  
	unsigned char                                      UnknownData05_7[0x20];                                      // 0x00B8   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoActor
/// Size: 0x0298 (664 bytes) (0x000298 - 0x000298) align 8 MaxSize: 0x0298
class AGizmoActor : public AInternalToolFrameworkActor
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.CombinedTransformGizmoActor
/// Size: 0x0320 (800 bytes) (0x000298 - 0x000320) align 8 MaxSize: 0x0320
class ACombinedTransformGizmoActor : public AGizmoActor
{ 
public:
	class UPrimitiveComponent*                         TranslateX;                                                 // 0x0298   (0x0008)  
	class UPrimitiveComponent*                         TranslateY;                                                 // 0x02A0   (0x0008)  
	class UPrimitiveComponent*                         TranslateZ;                                                 // 0x02A8   (0x0008)  
	class UPrimitiveComponent*                         TranslateYZ;                                                // 0x02B0   (0x0008)  
	class UPrimitiveComponent*                         TranslateXZ;                                                // 0x02B8   (0x0008)  
	class UPrimitiveComponent*                         TranslateXY;                                                // 0x02C0   (0x0008)  
	class UPrimitiveComponent*                         RotateX;                                                    // 0x02C8   (0x0008)  
	class UPrimitiveComponent*                         RotateY;                                                    // 0x02D0   (0x0008)  
	class UPrimitiveComponent*                         RotateZ;                                                    // 0x02D8   (0x0008)  
	class UPrimitiveComponent*                         RotationSphere;                                             // 0x02E0   (0x0008)  
	class UPrimitiveComponent*                         UniformScale;                                               // 0x02E8   (0x0008)  
	class UPrimitiveComponent*                         AxisScaleX;                                                 // 0x02F0   (0x0008)  
	class UPrimitiveComponent*                         AxisScaleY;                                                 // 0x02F8   (0x0008)  
	class UPrimitiveComponent*                         AxisScaleZ;                                                 // 0x0300   (0x0008)  
	class UPrimitiveComponent*                         PlaneScaleYZ;                                               // 0x0308   (0x0008)  
	class UPrimitiveComponent*                         PlaneScaleXZ;                                               // 0x0310   (0x0008)  
	class UPrimitiveComponent*                         PlaneScaleXY;                                               // 0x0318   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.CombinedTransformGizmoBuilder
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align 16 MaxSize: 0x00F0
class UCombinedTransformGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0028   (0x00C8)  MISSED
};

/// Class /Script/InteractiveToolsFramework.CombinedTransformGizmo
/// Size: 0x03A0 (928 bytes) (0x000038 - 0x0003A0) align 16 MaxSize: 0x03A0
class UCombinedTransformGizmo : public UInteractiveGizmo
{ 
public:
	class UTransformProxy*                             ActiveTarget;                                               // 0x0038   (0x0008)  
	bool                                               bSnapToWorldGrid;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0041   (0x0003)  MISSED
	bool                                               bGridSizeIsExplicit;                                        // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	FVector                                            ExplicitGridSize;                                           // 0x0048   (0x0018)  
	bool                                               bRotationGridSizeIsExplicit;                                // 0x0060   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	FRotator                                           ExplicitRotationGridSize;                                   // 0x0068   (0x0018)  
	bool                                               bSnapToWorldRotGrid;                                        // 0x0080   (0x0001)  
	bool                                               bUseContextCoordinateSystem;                                // 0x0081   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0082   (0x0002)  MISSED
	EToolContextCoordinateSystem                       CurrentCoordinateSystem;                                    // 0x0084   (0x0004)  
	bool                                               bUseContextGizmoMode;                                       // 0x0088   (0x0001)  
	EToolContextTransformGizmoMode                     ActiveGizmoMode;                                            // 0x0089   (0x0001)  
	unsigned char                                      UnknownData04_6[0x126];                                     // 0x008A   (0x0126)  MISSED
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                           // 0x01B0   (0x0010)  
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                               // 0x01C0   (0x0010)  
	unsigned char                                      UnknownData05_6[0x50];                                      // 0x01D0   (0x0050)  MISSED
	class UGizmoConstantFrameAxisSource*               CameraAxisSource;                                           // 0x0220   (0x0008)  
	class UGizmoComponentAxisSource*                   AxisXSource;                                                // 0x0228   (0x0008)  
	class UGizmoComponentAxisSource*                   AxisYSource;                                                // 0x0230   (0x0008)  
	class UGizmoComponentAxisSource*                   AxisZSource;                                                // 0x0238   (0x0008)  
	class UGizmoComponentAxisSource*                   UnitAxisXSource;                                            // 0x0240   (0x0008)  
	class UGizmoComponentAxisSource*                   UnitAxisYSource;                                            // 0x0248   (0x0008)  
	class UGizmoComponentAxisSource*                   UnitAxisZSource;                                            // 0x0250   (0x0008)  
	class UGizmoTransformChangeStateTarget*            StateTarget;                                                // 0x0258   (0x0008)  
	unsigned char                                      UnknownData06_7[0x140];                                     // 0x0260   (0x0140)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoArrowComponent
/// Size: 0x05C0 (1472 bytes) (0x000598 - 0x0005C0) align 16 MaxSize: 0x05C0
class UGizmoArrowComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            Direction;                                                  // 0x0598   (0x0018)  
	float                                              Gap;                                                        // 0x05B0   (0x0004)  
	float                                              Length;                                                     // 0x05B4   (0x0004)  
	float                                              Thickness;                                                  // 0x05B8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x05BC   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoBoxComponent
/// Size: 0x05F0 (1520 bytes) (0x000598 - 0x0005F0) align 16 MaxSize: 0x05F0
class UGizmoBoxComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            Origin;                                                     // 0x0598   (0x0018)  
	FQuat                                              Rotation;                                                   // 0x05B0   (0x0020)  
	FVector                                            Dimensions;                                                 // 0x05D0   (0x0018)  
	float                                              LineThickness;                                              // 0x05E8   (0x0004)  
	bool                                               bRemoveHiddenLines;                                         // 0x05EC   (0x0001)  
	bool                                               bEnableAxisFlip;                                            // 0x05ED   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x05EE   (0x0002)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoCircleComponent
/// Size: 0x05C0 (1472 bytes) (0x000598 - 0x0005C0) align 16 MaxSize: 0x05C0
class UGizmoCircleComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            Normal;                                                     // 0x0598   (0x0018)  
	float                                              Radius;                                                     // 0x05B0   (0x0004)  
	float                                              Thickness;                                                  // 0x05B4   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x05B8   (0x0004)  
	bool                                               bViewAligned;                                               // 0x05BC   (0x0001)  
	bool                                               bDrawFullCircle;                                            // 0x05BD   (0x0001)  
	bool                                               bOnlyAllowFrontFacingHits;                                  // 0x05BE   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x05BF   (0x0001)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.GizmoElementMaterialAttribute
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FGizmoElementMaterialAttribute
{ 
	TWeakObjectPtr<class UMaterialInterface*>          Value;                                                      // 0x0000   (0x0008)  
	bool                                               bOverridesChildState;                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.GizmoElementColorAttribute
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FGizmoElementColorAttribute
{ 
	FLinearColor                                       Value;                                                      // 0x0000   (0x0010)  
	bool                                               bHasValue;                                                  // 0x0010   (0x0001)  
	bool                                               bOverridesChildState;                                       // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0012   (0x0002)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.GizmoElementMeshRenderStateAttributes
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 4 MaxSize: 0x0060
struct FGizmoElementMeshRenderStateAttributes
{ 
	FGizmoElementMaterialAttribute                     Material;                                                   // 0x0000   (0x000C)  
	FGizmoElementMaterialAttribute                     HoverMaterial;                                              // 0x000C   (0x000C)  
	FGizmoElementMaterialAttribute                     InteractMaterial;                                           // 0x0018   (0x000C)  
	FGizmoElementColorAttribute                        VertexColor;                                                // 0x0024   (0x0014)  
	FGizmoElementColorAttribute                        HoverVertexColor;                                           // 0x0038   (0x0014)  
	FGizmoElementColorAttribute                        InteractVertexColor;                                        // 0x004C   (0x0014)  
};

/// Class /Script/InteractiveToolsFramework.GizmoElementBase
/// Size: 0x0108 (264 bytes) (0x000028 - 0x000108) align 8 MaxSize: 0x0108
class UGizmoElementBase : public UObject
{ 
public:
	bool                                               bEnabled;                                                   // 0x0028   (0x0001)  
	bool                                               bEnabledForPerspectiveProjection;                           // 0x0029   (0x0001)  
	bool                                               bEnabledForOrthographicProjection;                          // 0x002A   (0x0001)  
	bool                                               bEnabledForDefaultState;                                    // 0x002B   (0x0001)  
	bool                                               bEnabledForHoveringState;                                   // 0x002C   (0x0001)  
	bool                                               bEnabledForInteractingState;                                // 0x002D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x002E   (0x0002)  MISSED
	uint32_t                                           PartIdentifier;                                             // 0x0030   (0x0004)  
	FGizmoElementMeshRenderStateAttributes             MeshRenderAttributes;                                       // 0x0034   (0x0060)  
	EGizmoElementState                                 ElementState;                                               // 0x0094   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	EGizmoElementInteractionState                      ElementInteractionState;                                    // 0x0098   (0x0004)  
	EGizmoElementViewDependentType                     ViewDependentType;                                          // 0x009C   (0x0004)  
	FVector                                            ViewDependentAxis;                                          // 0x00A0   (0x0018)  
	float                                              ViewDependentAngleTol;                                      // 0x00B8   (0x0004)  
	float                                              ViewDependentAxialMaxCosAngleTol;                           // 0x00BC   (0x0004)  
	float                                              ViewDependentPlanarMinCosAngleTol;                          // 0x00C0   (0x0004)  
	EGizmoElementViewAlignType                         ViewAlignType;                                              // 0x00C4   (0x0004)  
	FVector                                            ViewAlignAxis;                                              // 0x00C8   (0x0018)  
	FVector                                            ViewAlignNormal;                                            // 0x00E0   (0x0018)  
	float                                              ViewAlignAxialAngleTol;                                     // 0x00F8   (0x0004)  
	float                                              ViewAlignAxialMaxCosAngleTol;                               // 0x00FC   (0x0004)  
	float                                              PixelHitDistanceThreshold;                                  // 0x0100   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.GizmoElementLineRenderStateAttributes
/// Size: 0x003C (60 bytes) (0x000000 - 0x00003C) align 4 MaxSize: 0x003C
struct FGizmoElementLineRenderStateAttributes
{ 
	FGizmoElementColorAttribute                        LineColor;                                                  // 0x0000   (0x0014)  
	FGizmoElementColorAttribute                        HoverLineColor;                                             // 0x0014   (0x0014)  
	FGizmoElementColorAttribute                        InteractLineColor;                                          // 0x0028   (0x0014)  
};

/// Class /Script/InteractiveToolsFramework.GizmoElementLineBase
/// Size: 0x0158 (344 bytes) (0x000108 - 0x000158) align 8 MaxSize: 0x0158
class UGizmoElementLineBase : public UGizmoElementBase
{ 
public:
	FGizmoElementLineRenderStateAttributes             LineRenderAttributes;                                       // 0x0108   (0x003C)  
	float                                              LineThickness;                                              // 0x0144   (0x0004)  
	bool                                               bScreenSpaceLine;                                           // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0149   (0x0003)  MISSED
	float                                              HoverLineThicknessMultiplier;                               // 0x014C   (0x0004)  
	float                                              InteractLineThicknessMultiplier;                            // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0154   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementCircleBase
/// Size: 0x01C8 (456 bytes) (0x000158 - 0x0001C8) align 8 MaxSize: 0x01C8
class UGizmoElementCircleBase : public UGizmoElementLineBase
{ 
public:
	FVector                                            Center;                                                     // 0x0158   (0x0018)  
	FVector                                            Axis0;                                                      // 0x0170   (0x0018)  
	FVector                                            Axis1;                                                      // 0x0188   (0x0018)  
	double                                             Radius;                                                     // 0x01A0   (0x0008)  
	int32_t                                            NumSegments;                                                // 0x01A8   (0x0004)  
	EGizmoElementPartialType                           PartialType;                                                // 0x01AC   (0x0004)  
	double                                             PartialStartAngle;                                          // 0x01B0   (0x0008)  
	double                                             PartialEndAngle;                                            // 0x01B8   (0x0008)  
	double                                             PartialViewDependentMaxCosTol;                              // 0x01C0   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.GizmoElementArc
/// Size: 0x01D0 (464 bytes) (0x0001C8 - 0x0001D0) align 8 MaxSize: 0x01D0
class UGizmoElementArc : public UGizmoElementCircleBase
{ 
public:
	double                                             InnerRadius;                                                // 0x01C8   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.GizmoElementArrow
/// Size: 0x0188 (392 bytes) (0x000108 - 0x000188) align 8 MaxSize: 0x0188
class UGizmoElementArrow : public UGizmoElementBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0108   (0x0008)  MISSED
	class UGizmoElementCylinder*                       CylinderElement;                                            // 0x0110   (0x0008)  
	class UGizmoElementCone*                           ConeElement;                                                // 0x0118   (0x0008)  
	class UGizmoElementBox*                            BoxElement;                                                 // 0x0120   (0x0008)  
	FVector                                            Base;                                                       // 0x0128   (0x0018)  
	FVector                                            Direction;                                                  // 0x0140   (0x0018)  
	FVector                                            SideDirection;                                              // 0x0158   (0x0018)  
	float                                              BodyLength;                                                 // 0x0170   (0x0004)  
	float                                              BodyRadius;                                                 // 0x0174   (0x0004)  
	float                                              HeadLength;                                                 // 0x0178   (0x0004)  
	float                                              HeadRadius;                                                 // 0x017C   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0180   (0x0004)  
	EGizmoElementArrowHeadType                         HeadType;                                                   // 0x0184   (0x0004)  
};

/// Class /Script/InteractiveToolsFramework.GizmoElementBox
/// Size: 0x0168 (360 bytes) (0x000108 - 0x000168) align 8 MaxSize: 0x0168
class UGizmoElementBox : public UGizmoElementBase
{ 
public:
	FVector                                            Center;                                                     // 0x0108   (0x0018)  
	FVector                                            Dimensions;                                                 // 0x0120   (0x0018)  
	FVector                                            UpDirection;                                                // 0x0138   (0x0018)  
	FVector                                            SideDirection;                                              // 0x0150   (0x0018)  
};

/// Class /Script/InteractiveToolsFramework.GizmoElementCircle
/// Size: 0x01D0 (464 bytes) (0x0001C8 - 0x0001D0) align 8 MaxSize: 0x01D0
class UGizmoElementCircle : public UGizmoElementCircleBase
{ 
public:
	bool                                               bDrawMesh;                                                  // 0x01C8   (0x0001)  
	bool                                               bDrawLine;                                                  // 0x01C9   (0x0001)  
	bool                                               bHitMesh;                                                   // 0x01CA   (0x0001)  
	bool                                               bHitLine;                                                   // 0x01CB   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x01CC   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementCone
/// Size: 0x0148 (328 bytes) (0x000108 - 0x000148) align 8 MaxSize: 0x0148
class UGizmoElementCone : public UGizmoElementBase
{ 
public:
	FVector                                            Origin;                                                     // 0x0108   (0x0018)  
	FVector                                            Direction;                                                  // 0x0120   (0x0018)  
	float                                              Height;                                                     // 0x0138   (0x0004)  
	float                                              Radius;                                                     // 0x013C   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementCylinder
/// Size: 0x0148 (328 bytes) (0x000108 - 0x000148) align 8 MaxSize: 0x0148
class UGizmoElementCylinder : public UGizmoElementBase
{ 
public:
	FVector                                            Base;                                                       // 0x0108   (0x0018)  
	FVector                                            Direction;                                                  // 0x0120   (0x0018)  
	float                                              Height;                                                     // 0x0138   (0x0004)  
	float                                              Radius;                                                     // 0x013C   (0x0004)  
	int32_t                                            NumSides;                                                   // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementGroup
/// Size: 0x0170 (368 bytes) (0x000158 - 0x000170) align 8 MaxSize: 0x0170
class UGizmoElementGroup : public UGizmoElementLineBase
{ 
public:
	bool                                               bConstantScale;                                             // 0x0158   (0x0001)  
	bool                                               bHitOwner;                                                  // 0x0159   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x015A   (0x0006)  MISSED
	TArray<class UGizmoElementBase*>                   Elements;                                                   // 0x0160   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.GizmoElementHitTarget
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 16 MaxSize: 0x0090
class UGizmoElementHitTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UGizmoElementBase*                           GizmoElement;                                               // 0x0030   (0x0008)  
	class UGizmoViewContext*                           GizmoViewContext;                                           // 0x0038   (0x0008)  
	class UTransformProxy*                             GizmoTransformProxy;                                        // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x0048   (0x0048)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementHitMultiTarget
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 16 MaxSize: 0x0090
class UGizmoElementHitMultiTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UGizmoElementBase*                           GizmoElement;                                               // 0x0030   (0x0008)  
	class UGizmoViewContext*                           GizmoViewContext;                                           // 0x0038   (0x0008)  
	class UTransformProxy*                             GizmoTransformProxy;                                        // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x0048   (0x0048)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementRectangle
/// Size: 0x01B0 (432 bytes) (0x000158 - 0x0001B0) align 8 MaxSize: 0x01B0
class UGizmoElementRectangle : public UGizmoElementLineBase
{ 
public:
	FVector                                            Center;                                                     // 0x0158   (0x0018)  
	float                                              Width;                                                      // 0x0170   (0x0004)  
	float                                              Height;                                                     // 0x0174   (0x0004)  
	FVector                                            UpDirection;                                                // 0x0178   (0x0018)  
	FVector                                            SideDirection;                                              // 0x0190   (0x0018)  
	bool                                               bDrawMesh;                                                  // 0x01A8   (0x0001)  
	bool                                               bDrawLine;                                                  // 0x01A9   (0x0001)  
	bool                                               bHitMesh;                                                   // 0x01AA   (0x0001)  
	bool                                               bHitLine;                                                   // 0x01AB   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x01AC   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoElementTorus
/// Size: 0x01D8 (472 bytes) (0x0001C8 - 0x0001D8) align 8 MaxSize: 0x01D8
class UGizmoElementTorus : public UGizmoElementCircleBase
{ 
public:
	double                                             InnerRadius;                                                // 0x01C8   (0x0008)  
	int32_t                                            NumInnerSlices;                                             // 0x01D0   (0x0004)  
	bool                                               bEndCaps;                                                   // 0x01D4   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x01D5   (0x0003)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGizmoTransformSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoTransformSource.SetTransform
	// void SetTransform(FTransform& NewTransform);                                                                             // [0x52e55d0] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/InteractiveToolsFramework.GizmoTransformSource.GetTransform
	// FTransform GetTransform();                                                                                               // [0x52e5400] Native|Public|HasDefaults|Const 
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGizmoAxisSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	// bool HasTangentVectors();                                                                                                // [0x52e5490] Native|Public|Const  
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	// void GetTangentVectors(FVector& TangentXOut, FVector& TangentYOut);                                                      // [0x52e5310] Native|Public|HasOutParms|HasDefaults|Const 
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	// FVector GetOrigin();                                                                                                     // [0x52e5260] Native|Public|HasDefaults|Const 
	// Function /Script/InteractiveToolsFramework.GizmoAxisSource.GetDirection
	// FVector GetDirection();                                                                                                  // [0x52e5220] Native|Public|HasDefaults|Const 
};

/// Class /Script/InteractiveToolsFramework.GizmoClickTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGizmoClickTarget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoClickTarget.UpdateInteractingState
	// void UpdateInteractingState(bool bInteracting);                                                                          // [0x52e5a70] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
	// void UpdateHoverState(bool bHovering);                                                                                   // [0x52e5880] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoClickMultiTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGizmoClickMultiTarget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoClickMultiTarget.UpdateInteractingState
	// void UpdateInteractingState(bool bInteracting, uint32_t InPartIdentifier);                                               // [0x52e59a0] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHoverState
	// void UpdateHoverState(bool bHovering, uint32_t InPartIdentifier);                                                        // [0x52e57b0] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHittableState
	// void UpdateHittableState(bool bHittable, uint32_t InPartIdentifier);                                                     // [0x52e56e0] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoRenderTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGizmoRenderTarget : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.GizmoRenderMultiTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGizmoRenderMultiTarget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoRenderMultiTarget.UpdateVisibilityState
	// void UpdateVisibilityState(bool bVisible, uint32_t InPartIdentifier);                                                    // [0x52e57b0] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoStateTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGizmoStateTarget : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	// void EndUpdate();                                                                                                        // [0x52e5200] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
	// void BeginUpdate();                                                                                                      // [0x40f4260] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoFloatParameterSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGizmoFloatParameterSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	// void SetParameter(float NewValue);                                                                                       // [0x52e54c0] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	// float GetParameter();                                                                                                    // [0x52e52a0] Native|Public|Const  
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	// void EndModify();                                                                                                        // [0x11c7990] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
	// void BeginModify();                                                                                                      // [0x52e5200] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoVec2ParameterSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGizmoVec2ParameterSource : public UInterface
{ 
public:


	/// Functions
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	// void SetParameter(FVector2D& NewValue);                                                                                  // [0x52e5540] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	// FVector2D GetParameter();                                                                                                // [0x52e52d0] Native|Public|HasDefaults|Const 
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	// void EndModify();                                                                                                        // [0x11c7990] Native|Public        
	// Function /Script/InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
	// void BeginModify();                                                                                                      // [0x52e5200] Native|Public        
};

/// Class /Script/InteractiveToolsFramework.GizmoLineHandleComponent
/// Size: 0x05E0 (1504 bytes) (0x000598 - 0x0005E0) align 16 MaxSize: 0x05E0
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            Normal;                                                     // 0x0598   (0x0018)  
	float                                              HandleSize;                                                 // 0x05B0   (0x0004)  
	float                                              Thickness;                                                  // 0x05B4   (0x0004)  
	FVector                                            Direction;                                                  // 0x05B8   (0x0018)  
	float                                              Length;                                                     // 0x05D0   (0x0004)  
	bool                                               bImageScale;                                                // 0x05D4   (0x0001)  
	unsigned char                                      UnknownData00_7[0xB];                                       // 0x05D5   (0x000B)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoRectangleComponent
/// Size: 0x05F0 (1520 bytes) (0x000598 - 0x0005F0) align 16 MaxSize: 0x05F0
class UGizmoRectangleComponent : public UGizmoBaseComponent
{ 
public:
	FVector                                            DirectionX;                                                 // 0x0598   (0x0018)  
	FVector                                            DirectionY;                                                 // 0x05B0   (0x0018)  
	bool                                               bOrientYAccordingToCamera;                                  // 0x05C8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x05C9   (0x0003)  MISSED
	float                                              OffsetX;                                                    // 0x05CC   (0x0004)  
	float                                              OffsetY;                                                    // 0x05D0   (0x0004)  
	float                                              LengthX;                                                    // 0x05D4   (0x0004)  
	float                                              LengthY;                                                    // 0x05D8   (0x0004)  
	float                                              Thickness;                                                  // 0x05DC   (0x0004)  
	char                                               SegmentFlags;                                               // 0x05E0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x05E1   (0x000F)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoViewContext
/// Size: 0x01E0 (480 bytes) (0x000028 - 0x0001E0) align 16 MaxSize: 0x01E0
class UGizmoViewContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1B8];                                     // 0x0028   (0x01B8)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoLambdaHitTarget
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align 16 MaxSize: 0x00F0
class UGizmoLambdaHitTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0xC8];                                      // 0x0028   (0x00C8)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentHitTarget
/// Size: 0x0100 (256 bytes) (0x000028 - 0x000100) align 16 MaxSize: 0x0100
class UGizmoComponentHitTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UPrimitiveComponent*                         Component;                                                  // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0xC8];                                      // 0x0038   (0x00C8)  MISSED
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmoActor
/// Size: 0x02B0 (688 bytes) (0x000298 - 0x0002B0) align 8 MaxSize: 0x02B0
class AIntervalGizmoActor : public AGizmoActor
{ 
public:
	class UGizmoLineHandleComponent*                   UpIntervalComponent;                                        // 0x0298   (0x0008)  
	class UGizmoLineHandleComponent*                   DownIntervalComponent;                                      // 0x02A0   (0x0008)  
	class UGizmoLineHandleComponent*                   ForwardIntervalComponent;                                   // 0x02A8   (0x0008)  
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmoBuilder
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 16 MaxSize: 0x00C0
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0028   (0x0098)  MISSED
};

/// Class /Script/InteractiveToolsFramework.IntervalGizmo
/// Size: 0x0200 (512 bytes) (0x000038 - 0x000200) align 16 MaxSize: 0x0200
class UIntervalGizmo : public UInteractiveGizmo
{ 
public:
	class UGizmoTransformChangeStateTarget*            StateTarget;                                                // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x0040   (0x0058)  MISSED
	class UTransformProxy*                             TransformProxy;                                             // 0x0098   (0x0008)  
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                           // 0x00A0   (0x0010)  
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                               // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x00C0   (0x0018)  MISSED
	class UGizmoComponentAxisSource*                   AxisYSource;                                                // 0x00D8   (0x0008)  
	class UGizmoComponentAxisSource*                   AxisZSource;                                                // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x118];                                     // 0x00E8   (0x0118)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoAxisIntervalParameterSource
/// Size: 0x0060 (96 bytes) (0x000048 - 0x000060) align 8 MaxSize: 0x0060
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	SDK_UNDEFINED(16,1244) /* TScriptInterface<Class> */ __um(FloatParameterSource);                               // 0x0048   (0x0010)  
	float                                              MinParameter;                                               // 0x0058   (0x0004)  
	float                                              MaxParameter;                                               // 0x005C   (0x0004)  
};

/// Class /Script/InteractiveToolsFramework.GizmoLocalFloatParameterSource
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{ 
public:
	float                                              Value;                                                      // 0x0048   (0x0004)  
	FGizmoFloatParameterChange                         LastChange;                                                 // 0x004C   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.PlanePositionGizmoBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.PlanePositionGizmo
/// Size: 0x0270 (624 bytes) (0x000038 - 0x000270) align 16 MaxSize: 0x0270
class UPlanePositionGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0038   (0x0010)  MISSED
	SDK_UNDEFINED(16,1245) /* TScriptInterface<Class> */ __um(AxisSource);                                         // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1246) /* TScriptInterface<Class> */ __um(ParameterSource);                                    // 0x0058   (0x0010)  
	SDK_UNDEFINED(16,1247) /* TScriptInterface<Class> */ __um(HitTarget);                                          // 0x0068   (0x0010)  
	SDK_UNDEFINED(16,1248) /* TScriptInterface<Class> */ __um(StateTarget);                                        // 0x0078   (0x0010)  
	class UClickDragInputBehavior*                     MouseBehavior;                                              // 0x0088   (0x0008)  
	bool                                               bEnableSignedAxis;                                          // 0x0090   (0x0001)  
	bool                                               bFlipX;                                                     // 0x0091   (0x0001)  
	bool                                               bFlipY;                                                     // 0x0092   (0x0001)  
	unsigned char                                      UnknownData01_6[0x8D];                                      // 0x0093   (0x008D)  MISSED
	bool                                               bInInteraction;                                             // 0x0120   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0121   (0x0007)  MISSED
	FVector                                            InteractionOrigin;                                          // 0x0128   (0x0018)  
	FVector                                            InteractionNormal;                                          // 0x0140   (0x0018)  
	FVector                                            InteractionAxisX;                                           // 0x0158   (0x0018)  
	FVector                                            InteractionAxisY;                                           // 0x0170   (0x0018)  
	FVector                                            InteractionStartPoint;                                      // 0x0188   (0x0018)  
	FVector                                            InteractionCurPoint;                                        // 0x01A0   (0x0018)  
	FVector2D                                          InteractionStartParameter;                                  // 0x01B8   (0x0010)  
	FVector2D                                          InteractionCurParameter;                                    // 0x01C8   (0x0010)  
	FVector2D                                          ParameterSigns;                                             // 0x01D8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x88];                                      // 0x01E8   (0x0088)  MISSED
};

/// Class /Script/InteractiveToolsFramework.RepositionableTransformGizmoBuilder
/// Size: 0x00F0 (240 bytes) (0x0000F0 - 0x0000F0) align 16 MaxSize: 0x00F0
class URepositionableTransformGizmoBuilder : public UCombinedTransformGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.RepositionableTransformGizmo
/// Size: 0x0440 (1088 bytes) (0x0003A0 - 0x000440) align 16 MaxSize: 0x0440
class URepositionableTransformGizmo : public UCombinedTransformGizmo
{ 
public:
	unsigned char                                      UnknownData00_8[0x90];                                      // 0x03A0   (0x0090)  MISSED
	class UGizmoTransformChangeStateTarget*            RepositionStateTarget;                                      // 0x0430   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0438   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ScalableSphereGizmoBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UScalableSphereGizmoBuilder : public UInteractiveGizmoBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.ScalableSphereGizmo
/// Size: 0x0100 (256 bytes) (0x000038 - 0x000100) align 16 MaxSize: 0x0100
class UScalableSphereGizmo : public UInteractiveGizmo
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0038   (0x0048)  MISSED
	float                                              HitErrorThreshold;                                          // 0x0080   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FText                                              TransactionDescription;                                     // 0x0088   (0x0018)  
	float                                              Radius;                                                     // 0x00A0   (0x0004)  
	bool                                               bIsHovering;                                                // 0x00A4   (0x0001)  
	bool                                               bIsDragging;                                                // 0x00A5   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00A6   (0x0002)  MISSED
	class UTransformProxy*                             ActiveTarget;                                               // 0x00A8   (0x0008)  
	FVector                                            ActiveAxis;                                                 // 0x00B0   (0x0018)  
	FVector                                            DragStartWorldPosition;                                     // 0x00C8   (0x0018)  
	FVector                                            DragCurrentPositionProjected;                               // 0x00E0   (0x0018)  
	float                                              InteractionStartParameter;                                  // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ScalableSphereGizmoInputBehavior
/// Size: 0x00D0 (208 bytes) (0x000080 - 0x0000D0) align 16 MaxSize: 0x00D0
class UScalableSphereGizmoInputBehavior : public UAnyButtonInputBehavior
{ 
public:
	unsigned char                                      UnknownData00_1[0x50];                                      // 0x0080   (0x0050)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoNilStateTarget
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UGizmoNilStateTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoLambdaStateTarget
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 16 MaxSize: 0x00B0
class UGizmoLambdaStateTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0028   (0x0088)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoObjectModifyStateTarget
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UGizmoObjectModifyStateTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0028   (0x0028)  MISSED
	SDK_UNDEFINED(16,1249) /* TScriptInterface<Class> */ __um(TransactionManager);                                 // 0x0050   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformChangeStateTarget
/// Size: 0x0140 (320 bytes) (0x000028 - 0x000140) align 16 MaxSize: 0x0140
class UGizmoTransformChangeStateTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0028   (0x0028)  MISSED
	SDK_UNDEFINED(16,1250) /* TScriptInterface<Class> */ __um(TransactionManager);                                 // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_7[0xE0];                                      // 0x0060   (0x00E0)  MISSED
};

/// Class /Script/InteractiveToolsFramework.CombinedTransformGizmoContextObject
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UCombinedTransformGizmoContextObject : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/InteractiveToolsFramework.TransformProxy
/// Size: 0x01B0 (432 bytes) (0x000028 - 0x0001B0) align 16 MaxSize: 0x01B0
class UTransformProxy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0xA8];                                      // 0x0028   (0x00A8)  MISSED
	bool                                               bRotatePerObject;                                           // 0x00D0   (0x0001)  
	bool                                               bSetPivotMode;                                              // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1E];                                      // 0x00D2   (0x001E)  MISSED
	FTransform                                         SharedTransform;                                            // 0x00F0   (0x0060)  
	FTransform                                         InitialSharedTransform;                                     // 0x0150   (0x0060)  
};

/// Class /Script/InteractiveToolsFramework.GizmoBaseTransformSource
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UGizmoBaseTransformSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoComponentWorldTransformSource
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{ 
public:
	class USceneComponent*                             Component;                                                  // 0x0048   (0x0008)  
	bool                                               bModifyComponentOnTransform;                                // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0051   (0x0007)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoScaledTransformSource
/// Size: 0x00E0 (224 bytes) (0x000048 - 0x0000E0) align 16 MaxSize: 0x00E0
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{ 
public:
	SDK_UNDEFINED(16,1251) /* TScriptInterface<Class> */ __um(ChildTransformSource);                               // 0x0048   (0x0010)  
	unsigned char                                      UnknownData00_7[0x88];                                      // 0x0058   (0x0088)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoTransformProxyTransformSource
/// Size: 0x0070 (112 bytes) (0x000048 - 0x000070) align 8 MaxSize: 0x0070
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{ 
public:
	class UTransformProxy*                             Proxy;                                                      // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0050   (0x0020)  MISSED
};

/// Class /Script/InteractiveToolsFramework.GizmoScaledAndUnscaledTransformSources
/// Size: 0x0068 (104 bytes) (0x000048 - 0x000068) align 8 MaxSize: 0x0068
class UGizmoScaledAndUnscaledTransformSources : public UGizmoBaseTransformSource
{ 
public:
	SDK_UNDEFINED(16,1252) /* TScriptInterface<Class> */ __um(ScaledTransformSource);                              // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,1253) /* TScriptInterface<Class> */ __um(UnscaledTransformSource);                            // 0x0058   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.BrushBaseProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBrushBaseProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              BrushSize;                                                  // 0x00A8   (0x0004)  
	bool                                               bSpecifyRadius;                                             // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              BrushRadius;                                                // 0x00B0   (0x0004)  
	float                                              BrushStrength;                                              // 0x00B4   (0x0004)  
	float                                              BrushFalloffAmount;                                         // 0x00B8   (0x0004)  
	bool                                               bShowStrength;                                              // 0x00BC   (0x0001)  
	bool                                               bShowFalloff;                                               // 0x00BD   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2];                                       // 0x00BE   (0x0002)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ClickDragToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UClickDragToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.ClickDragTool
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
class UClickDragTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0098   (0x0008)  MISSED
};

/// Class /Script/InteractiveToolsFramework.SingleClickToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USingleClickToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.ContextObjectStore
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UContextObjectStore : public UObject
{ 
public:
	TArray<class UObject*>                             ContextObjects;                                             // 0x0028   (0x0010)  
};

/// Struct /Script/InteractiveToolsFramework.BehaviorInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FBehaviorInfo
{ 
	class UInputBehavior*                              Behavior;                                                   // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0008   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InputBehaviorSet
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UInputBehaviorSet : public UObject
{ 
public:
	TArray<FBehaviorInfo>                              Behaviors;                                                  // 0x0028   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.InputBehaviorSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UInputBehaviorSource : public UInterface
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.LocalInputBehaviorSource
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 16 MaxSize: 0x0070
class ULocalInputBehaviorSource : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0028   (0x0048)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InputRouter
/// Size: 0x0190 (400 bytes) (0x000028 - 0x000190) align 8 MaxSize: 0x0190
class UInputRouter : public UObject
{ 
public:
	bool                                               bAutoInvalidateOnHover;                                     // 0x0028   (0x0001)  
	bool                                               bAutoInvalidateOnCapture;                                   // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0xE];                                       // 0x002A   (0x000E)  MISSED
	class UInputBehaviorSet*                           ActiveInputBehaviors;                                       // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_7[0x150];                                     // 0x0040   (0x0150)  MISSED
};

/// Struct /Script/InteractiveToolsFramework.ActiveGizmo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FActiveGizmo
{ 
	class UInteractiveGizmo*                           Gizmo;                                                      // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0008   (0x0028)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveGizmoManager
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 8 MaxSize: 0x00C0
class UInteractiveGizmoManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<FActiveGizmo>                               ActiveGizmos;                                               // 0x0030   (0x0010)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0040   (0x0018)  MISSED
	TMap<FString, class UInteractiveGizmoBuilder*>     GizmoBuilders;                                              // 0x0058   (0x0050)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x00A8   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolManager
/// Size: 0x0198 (408 bytes) (0x000028 - 0x000198) align 8 MaxSize: 0x0198
class UInteractiveToolManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0028   (0x0030)  MISSED
	class UInteractiveTool*                            ActiveLeftTool;                                             // 0x0058   (0x0008)  
	class UInteractiveTool*                            ActiveRightTool;                                            // 0x0060   (0x0008)  
	unsigned char                                      UnknownData01_6[0x80];                                      // 0x0068   (0x0080)  MISSED
	TMap<FString, class UInteractiveToolBuilder*>      ToolBuilders;                                               // 0x00E8   (0x0050)  
	unsigned char                                      UnknownData02_7[0x60];                                      // 0x0138   (0x0060)  MISSED
};

/// Class /Script/InteractiveToolsFramework.InteractiveToolsContext
/// Size: 0x0330 (816 bytes) (0x000028 - 0x000330) align 16 MaxSize: 0x0330
class UInteractiveToolsContext : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0028   (0x0030)  MISSED
	class UInputRouter*                                InputRouter;                                                // 0x0058   (0x0008)  
	class UToolTargetManager*                          TargetManager;                                              // 0x0060   (0x0008)  
	class UInteractiveToolManager*                     ToolManager;                                                // 0x0068   (0x0008)  
	class UInteractiveGizmoManager*                    GizmoManager;                                               // 0x0070   (0x0008)  
	class UContextObjectStore*                         ContextObjectStore;                                         // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_6[0x280];                                     // 0x0080   (0x0280)  MISSED
	TSoftObjectPtr<class UClass*>                      ToolManagerClass;                                           // 0x0300   (0x0030)  
};

/// Class /Script/InteractiveToolsFramework.SelectionSet
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class USelectionSet : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED
};

/// Class /Script/InteractiveToolsFramework.MeshSelectionSet
/// Size: 0x0080 (128 bytes) (0x000040 - 0x000080) align 8 MaxSize: 0x0080
class UMeshSelectionSet : public USelectionSet
{ 
public:
	TArray<int32_t>                                    Vertices;                                                   // 0x0040   (0x0010)  
	TArray<int32_t>                                    Edges;                                                      // 0x0050   (0x0010)  
	TArray<int32_t>                                    Faces;                                                      // 0x0060   (0x0010)  
	TArray<int32_t>                                    Groups;                                                     // 0x0070   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.ToolTargetManager
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UToolTargetManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<class UToolTargetFactory*>                  Factories;                                                  // 0x0030   (0x0010)  
};

/// Class /Script/InteractiveToolsFramework.ToolTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UToolTarget : public UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.PrimitiveComponentToolTarget
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UPrimitiveComponentToolTarget : public UToolTarget
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Class /Script/InteractiveToolsFramework.ToolTargetFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UToolTargetFactory : public UObject
{ 
public:
};

/// Class /Script/InteractiveToolsFramework.PrimitiveComponentToolTargetFactory
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPrimitiveComponentToolTargetFactory : public UToolTargetFactory
{ 
public:
};

/// Struct /Script/InteractiveToolsFramework.InputRayHit
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FInputRayHit
{ 
	bool                                               bHit;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	double                                             HitDepth;                                                   // 0x0008   (0x0008)  
	FVector                                            HitNormal;                                                  // 0x0010   (0x0018)  
	bool                                               bHasHitNormal;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	int32_t                                            HitIdentifier;                                              // 0x002C   (0x0004)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0030   (0x0008)  MISSED
	TWeakObjectPtr<class UObject*>                     HitObject;                                                  // 0x0038   (0x0008)  
};

/// Struct /Script/InteractiveToolsFramework.InputDeviceRay
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FInputDeviceRay
{ 
	FRay                                               WorldRay;                                                   // 0x0000   (0x0030)  
	bool                                               bHas2D;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector2D                                          ScreenPosition;                                             // 0x0038   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UInteractiveToolPropertySet) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UInteractiveToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInteractiveToolWithToolTargetsBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInteractiveTool) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(USingleSelectionTool) == 0x00A8); // 168 bytes (0x000098 - 0x0000A8)
static_assert(sizeof(UMultiSelectionTool) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(USingleClickTool) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(UMeshSurfacePointToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UMeshSurfacePointTool) == 0x0100); // 256 bytes (0x0000A8 - 0x000100)
static_assert(sizeof(FBrushStampData) == 0x0128); // 296 bytes (0x000000 - 0x000128)
static_assert(sizeof(UBaseBrushTool) == 0x0280); // 640 bytes (0x000100 - 0x000280)
static_assert(sizeof(UInteractiveCommand) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInteractionMechanic) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInteractiveCommandArguments) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UInteractiveCommandResult) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(AInternalToolFrameworkActor) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(USceneSnappingManager) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAssetBackedTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoBaseComponent) == 0x0598); // 1432 bytes (0x000568 - 0x000598)
static_assert(sizeof(UInteractiveGizmoBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UToolContextTransactionProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UToolFrameworkComponent) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInteractiveToolCameraFocusAPI) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInteractiveToolNestedAcceptCancelAPI) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInteractiveToolExclusiveToolAPI) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMaterialProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshDescriptionCommitter) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshDescriptionProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoBaseVec2ParameterSource) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FGizmoVec2ParameterChange) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UGizmoLocalVec2ParameterSource) == 0x0078); // 120 bytes (0x000048 - 0x000078)
static_assert(sizeof(UGizmoBaseFloatParameterSource) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FGizmoFloatParameterChange) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UGizmoAxisTranslationParameterSource) == 0x0190); // 400 bytes (0x000048 - 0x000190)
static_assert(sizeof(UGizmoPlaneTranslationParameterSource) == 0x0220); // 544 bytes (0x000048 - 0x000220)
static_assert(sizeof(UGizmoAxisRotationParameterSource) == 0x0190); // 400 bytes (0x000048 - 0x000190)
static_assert(sizeof(UGizmoUniformScaleParameterSource) == 0x0160); // 352 bytes (0x000048 - 0x000160)
static_assert(sizeof(UGizmoAxisScaleParameterSource) == 0x0110); // 272 bytes (0x000048 - 0x000110)
static_assert(sizeof(UGizmoPlaneScaleParameterSource) == 0x01B0); // 432 bytes (0x000048 - 0x0001B0)
static_assert(sizeof(UPhysicsDataSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPrimitiveComponentBackedTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USkeletalMeshBackedTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UStaticMeshBackedTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInputBehavior) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UAnyButtonInputBehavior) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UClickDragInputBehavior) == 0x0140); // 320 bytes (0x000080 - 0x000140)
static_assert(sizeof(ULocalClickDragInputBehavior) == 0x0280); // 640 bytes (0x000140 - 0x000280)
static_assert(sizeof(UKeyAsModifierInputBehavior) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UMouseHoverBehavior) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(ULocalMouseHoverBehavior) == 0x01E0); // 480 bytes (0x000098 - 0x0001E0)
static_assert(sizeof(UMouseWheelInputBehavior) == 0x0130); // 304 bytes (0x000080 - 0x000130)
static_assert(sizeof(UMultiClickSequenceInputBehavior) == 0x0130); // 304 bytes (0x000080 - 0x000130)
static_assert(sizeof(USingleClickInputBehavior) == 0x0130); // 304 bytes (0x000080 - 0x000130)
static_assert(sizeof(ULocalSingleClickInputBehavior) == 0x0200); // 512 bytes (0x000130 - 0x000200)
static_assert(sizeof(USingleClickOrDragInputBehavior) == 0x0180); // 384 bytes (0x000080 - 0x000180)
static_assert(sizeof(USingleKeyCaptureBehavior) == 0x0110); // 272 bytes (0x000030 - 0x000110)
static_assert(sizeof(UWidgetBaseBehavior) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAxisAngleGizmoBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInteractiveGizmo) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UAxisAngleGizmo) == 0x01D0); // 464 bytes (0x000038 - 0x0001D0)
static_assert(sizeof(UAxisPositionGizmoBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAxisPositionGizmo) == 0x01C0); // 448 bytes (0x000038 - 0x0001C0)
static_assert(sizeof(UGizmoConstantAxisSource) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UGizmoConstantFrameAxisSource) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UGizmoWorldAxisSource) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UGizmoComponentAxisSource) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UBrushStampIndicatorBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBrushStampIndicator) == 0x00D8); // 216 bytes (0x000038 - 0x0000D8)
static_assert(sizeof(AGizmoActor) == 0x0298); // 664 bytes (0x000298 - 0x000298)
static_assert(sizeof(ACombinedTransformGizmoActor) == 0x0320); // 800 bytes (0x000298 - 0x000320)
static_assert(sizeof(UCombinedTransformGizmoBuilder) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(UCombinedTransformGizmo) == 0x03A0); // 928 bytes (0x000038 - 0x0003A0)
static_assert(sizeof(UGizmoArrowComponent) == 0x05C0); // 1472 bytes (0x000598 - 0x0005C0)
static_assert(sizeof(UGizmoBoxComponent) == 0x05F0); // 1520 bytes (0x000598 - 0x0005F0)
static_assert(sizeof(UGizmoCircleComponent) == 0x05C0); // 1472 bytes (0x000598 - 0x0005C0)
static_assert(sizeof(FGizmoElementMaterialAttribute) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FGizmoElementColorAttribute) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FGizmoElementMeshRenderStateAttributes) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UGizmoElementBase) == 0x0108); // 264 bytes (0x000028 - 0x000108)
static_assert(sizeof(FGizmoElementLineRenderStateAttributes) == 0x003C); // 60 bytes (0x000000 - 0x00003C)
static_assert(sizeof(UGizmoElementLineBase) == 0x0158); // 344 bytes (0x000108 - 0x000158)
static_assert(sizeof(UGizmoElementCircleBase) == 0x01C8); // 456 bytes (0x000158 - 0x0001C8)
static_assert(sizeof(UGizmoElementArc) == 0x01D0); // 464 bytes (0x0001C8 - 0x0001D0)
static_assert(sizeof(UGizmoElementArrow) == 0x0188); // 392 bytes (0x000108 - 0x000188)
static_assert(sizeof(UGizmoElementBox) == 0x0168); // 360 bytes (0x000108 - 0x000168)
static_assert(sizeof(UGizmoElementCircle) == 0x01D0); // 464 bytes (0x0001C8 - 0x0001D0)
static_assert(sizeof(UGizmoElementCone) == 0x0148); // 328 bytes (0x000108 - 0x000148)
static_assert(sizeof(UGizmoElementCylinder) == 0x0148); // 328 bytes (0x000108 - 0x000148)
static_assert(sizeof(UGizmoElementGroup) == 0x0170); // 368 bytes (0x000158 - 0x000170)
static_assert(sizeof(UGizmoElementHitTarget) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UGizmoElementHitMultiTarget) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UGizmoElementRectangle) == 0x01B0); // 432 bytes (0x000158 - 0x0001B0)
static_assert(sizeof(UGizmoElementTorus) == 0x01D8); // 472 bytes (0x0001C8 - 0x0001D8)
static_assert(sizeof(UGizmoTransformSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoAxisSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoClickTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoClickMultiTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoRenderTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoRenderMultiTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoStateTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoFloatParameterSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoVec2ParameterSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGizmoLineHandleComponent) == 0x05E0); // 1504 bytes (0x000598 - 0x0005E0)
static_assert(sizeof(UGizmoRectangleComponent) == 0x05F0); // 1520 bytes (0x000598 - 0x0005F0)
static_assert(sizeof(UGizmoViewContext) == 0x01E0); // 480 bytes (0x000028 - 0x0001E0)
static_assert(sizeof(UGizmoLambdaHitTarget) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(UGizmoComponentHitTarget) == 0x0100); // 256 bytes (0x000028 - 0x000100)
static_assert(sizeof(AIntervalGizmoActor) == 0x02B0); // 688 bytes (0x000298 - 0x0002B0)
static_assert(sizeof(UIntervalGizmoBuilder) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(UIntervalGizmo) == 0x0200); // 512 bytes (0x000038 - 0x000200)
static_assert(sizeof(UGizmoAxisIntervalParameterSource) == 0x0060); // 96 bytes (0x000048 - 0x000060)
static_assert(sizeof(UGizmoLocalFloatParameterSource) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UPlanePositionGizmoBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPlanePositionGizmo) == 0x0270); // 624 bytes (0x000038 - 0x000270)
static_assert(sizeof(URepositionableTransformGizmoBuilder) == 0x00F0); // 240 bytes (0x0000F0 - 0x0000F0)
static_assert(sizeof(URepositionableTransformGizmo) == 0x0440); // 1088 bytes (0x0003A0 - 0x000440)
static_assert(sizeof(UScalableSphereGizmoBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UScalableSphereGizmo) == 0x0100); // 256 bytes (0x000038 - 0x000100)
static_assert(sizeof(UScalableSphereGizmoInputBehavior) == 0x00D0); // 208 bytes (0x000080 - 0x0000D0)
static_assert(sizeof(UGizmoNilStateTarget) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UGizmoLambdaStateTarget) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UGizmoObjectModifyStateTarget) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UGizmoTransformChangeStateTarget) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(UCombinedTransformGizmoContextObject) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UTransformProxy) == 0x01B0); // 432 bytes (0x000028 - 0x0001B0)
static_assert(sizeof(UGizmoBaseTransformSource) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UGizmoComponentWorldTransformSource) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UGizmoScaledTransformSource) == 0x00E0); // 224 bytes (0x000048 - 0x0000E0)
static_assert(sizeof(UGizmoTransformProxyTransformSource) == 0x0070); // 112 bytes (0x000048 - 0x000070)
static_assert(sizeof(UGizmoScaledAndUnscaledTransformSources) == 0x0068); // 104 bytes (0x000048 - 0x000068)
static_assert(sizeof(UBrushBaseProperties) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UClickDragToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UClickDragTool) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(USingleClickToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UContextObjectStore) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FBehaviorInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UInputBehaviorSet) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UInputBehaviorSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULocalInputBehaviorSource) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UInputRouter) == 0x0190); // 400 bytes (0x000028 - 0x000190)
static_assert(sizeof(FActiveGizmo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UInteractiveGizmoManager) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(UInteractiveToolManager) == 0x0198); // 408 bytes (0x000028 - 0x000198)
static_assert(sizeof(UInteractiveToolsContext) == 0x0330); // 816 bytes (0x000028 - 0x000330)
static_assert(sizeof(USelectionSet) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMeshSelectionSet) == 0x0080); // 128 bytes (0x000040 - 0x000080)
static_assert(sizeof(UToolTargetManager) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UToolTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPrimitiveComponentToolTarget) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UToolTargetFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPrimitiveComponentToolTargetFactory) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FInputRayHit) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FInputDeviceRay) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(offsetof(UInteractiveToolPropertySet, CachedPropertiesMap) == 0x0038);
static_assert(offsetof(UInteractiveTool, InputBehaviors) == 0x0060);
static_assert(offsetof(UInteractiveTool, ToolPropertyObjects) == 0x0068);
static_assert(offsetof(USingleSelectionTool, Target) == 0x00A0);
static_assert(offsetof(UMultiSelectionTool, Targets) == 0x00A0);
static_assert(offsetof(UMeshSurfacePointTool, TargetWorld) == 0x00F8);
static_assert(offsetof(UBaseBrushTool, BrushProperties) == 0x0100);
static_assert(offsetof(UBaseBrushTool, LastBrushStamp) == 0x0110);
static_assert(offsetof(UBaseBrushTool, PropertyClass) == 0x0248);
static_assert(offsetof(UBaseBrushTool, BrushStampIndicator) == 0x0278);
static_assert(offsetof(UGizmoBaseComponent, Color) == 0x0568);
static_assert(offsetof(UGizmoBaseComponent, GizmoViewContext) == 0x0588);
static_assert(offsetof(FGizmoVec2ParameterChange, InitialValue) == 0x0000);
static_assert(offsetof(FGizmoVec2ParameterChange, CurrentValue) == 0x0010);
static_assert(offsetof(UGizmoLocalVec2ParameterSource, Value) == 0x0048);
static_assert(offsetof(UGizmoLocalVec2ParameterSource, LastChange) == 0x0058);
static_assert(offsetof(UGizmoAxisTranslationParameterSource, LastChange) == 0x00F4);
static_assert(offsetof(UGizmoAxisTranslationParameterSource, CurTranslationAxis) == 0x0100);
static_assert(offsetof(UGizmoAxisTranslationParameterSource, CurTranslationOrigin) == 0x0118);
static_assert(offsetof(UGizmoAxisTranslationParameterSource, InitialTransform) == 0x0130);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, Parameter) == 0x0130);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, LastChange) == 0x0140);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationOrigin) == 0x0160);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationNormal) == 0x0178);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationAxisX) == 0x0190);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, CurTranslationAxisY) == 0x01A8);
static_assert(offsetof(UGizmoPlaneTranslationParameterSource, InitialTransform) == 0x01C0);
static_assert(offsetof(UGizmoAxisRotationParameterSource, LastChange) == 0x00F4);
static_assert(offsetof(UGizmoAxisRotationParameterSource, CurRotationAxis) == 0x0100);
static_assert(offsetof(UGizmoAxisRotationParameterSource, CurRotationOrigin) == 0x0118);
static_assert(offsetof(UGizmoAxisRotationParameterSource, InitialTransform) == 0x0130);
static_assert(offsetof(UGizmoUniformScaleParameterSource, Parameter) == 0x0070);
static_assert(offsetof(UGizmoUniformScaleParameterSource, LastChange) == 0x0080);
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleOrigin) == 0x00A0);
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleNormal) == 0x00B8);
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleAxisX) == 0x00D0);
static_assert(offsetof(UGizmoUniformScaleParameterSource, CurScaleAxisY) == 0x00E8);
static_assert(offsetof(UGizmoUniformScaleParameterSource, InitialTransform) == 0x0100);
static_assert(offsetof(UGizmoAxisScaleParameterSource, LastChange) == 0x0074);
static_assert(offsetof(UGizmoAxisScaleParameterSource, CurScaleAxis) == 0x0080);
static_assert(offsetof(UGizmoAxisScaleParameterSource, CurScaleOrigin) == 0x0098);
static_assert(offsetof(UGizmoAxisScaleParameterSource, InitialTransform) == 0x00B0);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, Parameter) == 0x00B8);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, LastChange) == 0x00C8);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleOrigin) == 0x00E8);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleNormal) == 0x0100);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleAxisX) == 0x0118);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, CurScaleAxisY) == 0x0130);
static_assert(offsetof(UGizmoPlaneScaleParameterSource, InitialTransform) == 0x0150);
static_assert(offsetof(UInteractiveGizmo, InputBehaviors) == 0x0030);
static_assert(offsetof(UAxisAngleGizmo, MouseBehavior) == 0x0088);
static_assert(offsetof(UAxisAngleGizmo, RotationOrigin) == 0x0118);
static_assert(offsetof(UAxisAngleGizmo, RotationAxis) == 0x0130);
static_assert(offsetof(UAxisAngleGizmo, RotationPlaneX) == 0x0148);
static_assert(offsetof(UAxisAngleGizmo, RotationPlaneY) == 0x0160);
static_assert(offsetof(UAxisAngleGizmo, InteractionStartPoint) == 0x0178);
static_assert(offsetof(UAxisAngleGizmo, InteractionCurPoint) == 0x0190);
static_assert(offsetof(UAxisPositionGizmo, GizmoViewContext) == 0x0068);
static_assert(offsetof(UAxisPositionGizmo, MouseBehavior) == 0x0090);
static_assert(offsetof(UAxisPositionGizmo, InteractionOrigin) == 0x0128);
static_assert(offsetof(UAxisPositionGizmo, InteractionAxis) == 0x0140);
static_assert(offsetof(UAxisPositionGizmo, InteractionStartPoint) == 0x0158);
static_assert(offsetof(UAxisPositionGizmo, InteractionCurPoint) == 0x0170);
static_assert(offsetof(UGizmoConstantAxisSource, Origin) == 0x0030);
static_assert(offsetof(UGizmoConstantAxisSource, Direction) == 0x0048);
static_assert(offsetof(UGizmoConstantFrameAxisSource, Origin) == 0x0030);
static_assert(offsetof(UGizmoConstantFrameAxisSource, Direction) == 0x0048);
static_assert(offsetof(UGizmoConstantFrameAxisSource, TangentX) == 0x0060);
static_assert(offsetof(UGizmoConstantFrameAxisSource, TangentY) == 0x0078);
static_assert(offsetof(UGizmoWorldAxisSource, Origin) == 0x0030);
static_assert(offsetof(UGizmoComponentAxisSource, Component) == 0x0030);
static_assert(offsetof(UBrushStampIndicator, BrushPosition) == 0x0048);
static_assert(offsetof(UBrushStampIndicator, BrushNormal) == 0x0060);
static_assert(offsetof(UBrushStampIndicator, LineColor) == 0x0080);
static_assert(offsetof(UBrushStampIndicator, SecondaryLineColor) == 0x009C);
static_assert(offsetof(UBrushStampIndicator, AttachedComponent) == 0x00B0);
static_assert(offsetof(ACombinedTransformGizmoActor, TranslateX) == 0x0298);
static_assert(offsetof(ACombinedTransformGizmoActor, TranslateY) == 0x02A0);
static_assert(offsetof(ACombinedTransformGizmoActor, TranslateZ) == 0x02A8);
static_assert(offsetof(ACombinedTransformGizmoActor, TranslateYZ) == 0x02B0);
static_assert(offsetof(ACombinedTransformGizmoActor, TranslateXZ) == 0x02B8);
static_assert(offsetof(ACombinedTransformGizmoActor, TranslateXY) == 0x02C0);
static_assert(offsetof(ACombinedTransformGizmoActor, RotateX) == 0x02C8);
static_assert(offsetof(ACombinedTransformGizmoActor, RotateY) == 0x02D0);
static_assert(offsetof(ACombinedTransformGizmoActor, RotateZ) == 0x02D8);
static_assert(offsetof(ACombinedTransformGizmoActor, RotationSphere) == 0x02E0);
static_assert(offsetof(ACombinedTransformGizmoActor, UniformScale) == 0x02E8);
static_assert(offsetof(ACombinedTransformGizmoActor, AxisScaleX) == 0x02F0);
static_assert(offsetof(ACombinedTransformGizmoActor, AxisScaleY) == 0x02F8);
static_assert(offsetof(ACombinedTransformGizmoActor, AxisScaleZ) == 0x0300);
static_assert(offsetof(ACombinedTransformGizmoActor, PlaneScaleYZ) == 0x0308);
static_assert(offsetof(ACombinedTransformGizmoActor, PlaneScaleXZ) == 0x0310);
static_assert(offsetof(ACombinedTransformGizmoActor, PlaneScaleXY) == 0x0318);
static_assert(offsetof(UCombinedTransformGizmo, ActiveTarget) == 0x0038);
static_assert(offsetof(UCombinedTransformGizmo, ExplicitGridSize) == 0x0048);
static_assert(offsetof(UCombinedTransformGizmo, ExplicitRotationGridSize) == 0x0068);
static_assert(offsetof(UCombinedTransformGizmo, CurrentCoordinateSystem) == 0x0084);
static_assert(offsetof(UCombinedTransformGizmo, ActiveGizmoMode) == 0x0089);
static_assert(offsetof(UCombinedTransformGizmo, ActiveComponents) == 0x01B0);
static_assert(offsetof(UCombinedTransformGizmo, ActiveGizmos) == 0x01C0);
static_assert(offsetof(UCombinedTransformGizmo, CameraAxisSource) == 0x0220);
static_assert(offsetof(UCombinedTransformGizmo, AxisXSource) == 0x0228);
static_assert(offsetof(UCombinedTransformGizmo, AxisYSource) == 0x0230);
static_assert(offsetof(UCombinedTransformGizmo, AxisZSource) == 0x0238);
static_assert(offsetof(UCombinedTransformGizmo, UnitAxisXSource) == 0x0240);
static_assert(offsetof(UCombinedTransformGizmo, UnitAxisYSource) == 0x0248);
static_assert(offsetof(UCombinedTransformGizmo, UnitAxisZSource) == 0x0250);
static_assert(offsetof(UCombinedTransformGizmo, StateTarget) == 0x0258);
static_assert(offsetof(UGizmoArrowComponent, Direction) == 0x0598);
static_assert(offsetof(UGizmoBoxComponent, Origin) == 0x0598);
static_assert(offsetof(UGizmoBoxComponent, Rotation) == 0x05B0);
static_assert(offsetof(UGizmoBoxComponent, Dimensions) == 0x05D0);
static_assert(offsetof(UGizmoCircleComponent, Normal) == 0x0598);
static_assert(offsetof(FGizmoElementMaterialAttribute, Value) == 0x0000);
static_assert(offsetof(FGizmoElementColorAttribute, Value) == 0x0000);
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, Material) == 0x0000);
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, HoverMaterial) == 0x000C);
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, InteractMaterial) == 0x0018);
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, VertexColor) == 0x0024);
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, HoverVertexColor) == 0x0038);
static_assert(offsetof(FGizmoElementMeshRenderStateAttributes, InteractVertexColor) == 0x004C);
static_assert(offsetof(UGizmoElementBase, MeshRenderAttributes) == 0x0034);
static_assert(offsetof(UGizmoElementBase, ElementState) == 0x0094);
static_assert(offsetof(UGizmoElementBase, ElementInteractionState) == 0x0098);
static_assert(offsetof(UGizmoElementBase, ViewDependentType) == 0x009C);
static_assert(offsetof(UGizmoElementBase, ViewDependentAxis) == 0x00A0);
static_assert(offsetof(UGizmoElementBase, ViewAlignType) == 0x00C4);
static_assert(offsetof(UGizmoElementBase, ViewAlignAxis) == 0x00C8);
static_assert(offsetof(UGizmoElementBase, ViewAlignNormal) == 0x00E0);
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, LineColor) == 0x0000);
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, HoverLineColor) == 0x0014);
static_assert(offsetof(FGizmoElementLineRenderStateAttributes, InteractLineColor) == 0x0028);
static_assert(offsetof(UGizmoElementLineBase, LineRenderAttributes) == 0x0108);
static_assert(offsetof(UGizmoElementCircleBase, Center) == 0x0158);
static_assert(offsetof(UGizmoElementCircleBase, Axis0) == 0x0170);
static_assert(offsetof(UGizmoElementCircleBase, Axis1) == 0x0188);
static_assert(offsetof(UGizmoElementCircleBase, PartialType) == 0x01AC);
static_assert(offsetof(UGizmoElementArrow, CylinderElement) == 0x0110);
static_assert(offsetof(UGizmoElementArrow, ConeElement) == 0x0118);
static_assert(offsetof(UGizmoElementArrow, BoxElement) == 0x0120);
static_assert(offsetof(UGizmoElementArrow, Base) == 0x0128);
static_assert(offsetof(UGizmoElementArrow, Direction) == 0x0140);
static_assert(offsetof(UGizmoElementArrow, SideDirection) == 0x0158);
static_assert(offsetof(UGizmoElementArrow, HeadType) == 0x0184);
static_assert(offsetof(UGizmoElementBox, Center) == 0x0108);
static_assert(offsetof(UGizmoElementBox, Dimensions) == 0x0120);
static_assert(offsetof(UGizmoElementBox, UpDirection) == 0x0138);
static_assert(offsetof(UGizmoElementBox, SideDirection) == 0x0150);
static_assert(offsetof(UGizmoElementCone, Origin) == 0x0108);
static_assert(offsetof(UGizmoElementCone, Direction) == 0x0120);
static_assert(offsetof(UGizmoElementCylinder, Base) == 0x0108);
static_assert(offsetof(UGizmoElementCylinder, Direction) == 0x0120);
static_assert(offsetof(UGizmoElementGroup, Elements) == 0x0160);
static_assert(offsetof(UGizmoElementHitTarget, GizmoElement) == 0x0030);
static_assert(offsetof(UGizmoElementHitTarget, GizmoViewContext) == 0x0038);
static_assert(offsetof(UGizmoElementHitTarget, GizmoTransformProxy) == 0x0040);
static_assert(offsetof(UGizmoElementHitMultiTarget, GizmoElement) == 0x0030);
static_assert(offsetof(UGizmoElementHitMultiTarget, GizmoViewContext) == 0x0038);
static_assert(offsetof(UGizmoElementHitMultiTarget, GizmoTransformProxy) == 0x0040);
static_assert(offsetof(UGizmoElementRectangle, Center) == 0x0158);
static_assert(offsetof(UGizmoElementRectangle, UpDirection) == 0x0178);
static_assert(offsetof(UGizmoElementRectangle, SideDirection) == 0x0190);
static_assert(offsetof(UGizmoLineHandleComponent, Normal) == 0x0598);
static_assert(offsetof(UGizmoLineHandleComponent, Direction) == 0x05B8);
static_assert(offsetof(UGizmoRectangleComponent, DirectionX) == 0x0598);
static_assert(offsetof(UGizmoRectangleComponent, DirectionY) == 0x05B0);
static_assert(offsetof(UGizmoComponentHitTarget, Component) == 0x0030);
static_assert(offsetof(AIntervalGizmoActor, UpIntervalComponent) == 0x0298);
static_assert(offsetof(AIntervalGizmoActor, DownIntervalComponent) == 0x02A0);
static_assert(offsetof(AIntervalGizmoActor, ForwardIntervalComponent) == 0x02A8);
static_assert(offsetof(UIntervalGizmo, StateTarget) == 0x0038);
static_assert(offsetof(UIntervalGizmo, TransformProxy) == 0x0098);
static_assert(offsetof(UIntervalGizmo, ActiveComponents) == 0x00A0);
static_assert(offsetof(UIntervalGizmo, ActiveGizmos) == 0x00B0);
static_assert(offsetof(UIntervalGizmo, AxisYSource) == 0x00D8);
static_assert(offsetof(UIntervalGizmo, AxisZSource) == 0x00E0);
static_assert(offsetof(UGizmoLocalFloatParameterSource, LastChange) == 0x004C);
static_assert(offsetof(UPlanePositionGizmo, MouseBehavior) == 0x0088);
static_assert(offsetof(UPlanePositionGizmo, InteractionOrigin) == 0x0128);
static_assert(offsetof(UPlanePositionGizmo, InteractionNormal) == 0x0140);
static_assert(offsetof(UPlanePositionGizmo, InteractionAxisX) == 0x0158);
static_assert(offsetof(UPlanePositionGizmo, InteractionAxisY) == 0x0170);
static_assert(offsetof(UPlanePositionGizmo, InteractionStartPoint) == 0x0188);
static_assert(offsetof(UPlanePositionGizmo, InteractionCurPoint) == 0x01A0);
static_assert(offsetof(UPlanePositionGizmo, InteractionStartParameter) == 0x01B8);
static_assert(offsetof(UPlanePositionGizmo, InteractionCurParameter) == 0x01C8);
static_assert(offsetof(UPlanePositionGizmo, ParameterSigns) == 0x01D8);
static_assert(offsetof(URepositionableTransformGizmo, RepositionStateTarget) == 0x0430);
static_assert(offsetof(UScalableSphereGizmo, TransactionDescription) == 0x0088);
static_assert(offsetof(UScalableSphereGizmo, ActiveTarget) == 0x00A8);
static_assert(offsetof(UScalableSphereGizmo, ActiveAxis) == 0x00B0);
static_assert(offsetof(UScalableSphereGizmo, DragStartWorldPosition) == 0x00C8);
static_assert(offsetof(UScalableSphereGizmo, DragCurrentPositionProjected) == 0x00E0);
static_assert(offsetof(UTransformProxy, SharedTransform) == 0x00F0);
static_assert(offsetof(UTransformProxy, InitialSharedTransform) == 0x0150);
static_assert(offsetof(UGizmoComponentWorldTransformSource, Component) == 0x0048);
static_assert(offsetof(UGizmoTransformProxyTransformSource, Proxy) == 0x0048);
static_assert(offsetof(UContextObjectStore, ContextObjects) == 0x0028);
static_assert(offsetof(FBehaviorInfo, Behavior) == 0x0000);
static_assert(offsetof(UInputBehaviorSet, Behaviors) == 0x0028);
static_assert(offsetof(UInputRouter, ActiveInputBehaviors) == 0x0038);
static_assert(offsetof(FActiveGizmo, Gizmo) == 0x0000);
static_assert(offsetof(UInteractiveGizmoManager, ActiveGizmos) == 0x0030);
static_assert(offsetof(UInteractiveGizmoManager, GizmoBuilders) == 0x0058);
static_assert(offsetof(UInteractiveToolManager, ActiveLeftTool) == 0x0058);
static_assert(offsetof(UInteractiveToolManager, ActiveRightTool) == 0x0060);
static_assert(offsetof(UInteractiveToolManager, ToolBuilders) == 0x00E8);
static_assert(offsetof(UInteractiveToolsContext, InputRouter) == 0x0058);
static_assert(offsetof(UInteractiveToolsContext, TargetManager) == 0x0060);
static_assert(offsetof(UInteractiveToolsContext, ToolManager) == 0x0068);
static_assert(offsetof(UInteractiveToolsContext, GizmoManager) == 0x0070);
static_assert(offsetof(UInteractiveToolsContext, ContextObjectStore) == 0x0078);
static_assert(offsetof(UInteractiveToolsContext, ToolManagerClass) == 0x0300);
static_assert(offsetof(UMeshSelectionSet, Vertices) == 0x0040);
static_assert(offsetof(UMeshSelectionSet, Edges) == 0x0050);
static_assert(offsetof(UMeshSelectionSet, Faces) == 0x0060);
static_assert(offsetof(UMeshSelectionSet, Groups) == 0x0070);
static_assert(offsetof(UToolTargetManager, Factories) == 0x0030);
static_assert(offsetof(FInputRayHit, HitNormal) == 0x0010);
static_assert(offsetof(FInputRayHit, HitObject) == 0x0038);
static_assert(offsetof(FInputDeviceRay, WorldRay) == 0x0000);
static_assert(offsetof(FInputDeviceRay, ScreenPosition) == 0x0038);
