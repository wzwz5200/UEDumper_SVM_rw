
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
/// dependency: GeometryFramework
/// dependency: InteractiveToolsFramework
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/ModelingComponents.EBakeTextureResolution
/// Size: 0x04 (4 bytes)
enum class EBakeTextureResolution : uint32_t
{
	EBakeTextureResolution__Resolution16                                             = 16,
	EBakeTextureResolution__Resolution32                                             = 32,
	EBakeTextureResolution__Resolution64                                             = 64,
	EBakeTextureResolution__Resolution128                                            = 128,
	EBakeTextureResolution__Resolution256                                            = 256,
	EBakeTextureResolution__Resolution512                                            = 512,
	EBakeTextureResolution__Resolution1024                                           = 1024,
	EBakeTextureResolution__Resolution2048                                           = 2048,
	EBakeTextureResolution__Resolution4096                                           = 4096,
	EBakeTextureResolution__Resolution8192                                           = 8192
};

/// Enum /Script/ModelingComponents.EBakeTextureBitDepth
/// Size: 0x04 (4 bytes)
enum class EBakeTextureBitDepth : uint32_t
{
	EBakeTextureBitDepth__ChannelBits8                                               = 0,
	EBakeTextureBitDepth__ChannelBits16                                              = 1
};

/// Enum /Script/ModelingComponents.EBakeTextureSamplesPerPixel
/// Size: 0x04 (4 bytes)
enum class EBakeTextureSamplesPerPixel : uint32_t
{
	EBakeTextureSamplesPerPixel__Sample1                                             = 1,
	EBakeTextureSamplesPerPixel__Sample4                                             = 4,
	EBakeTextureSamplesPerPixel__Sample16                                            = 16,
	EBakeTextureSamplesPerPixel__Sample64                                            = 64,
	EBakeTextureSamplesPerPixel__Sample256                                           = 256
};

/// Enum /Script/ModelingComponents.EBaseCreateFromSelectedTargetType
/// Size: 0x04 (4 bytes)
enum class EBaseCreateFromSelectedTargetType : uint32_t
{
	EBaseCreateFromSelectedTargetType__NewObject                                     = 0,
	EBaseCreateFromSelectedTargetType__FirstInputObject                              = 1,
	EBaseCreateFromSelectedTargetType__LastInputObject                               = 2
};

/// Enum /Script/ModelingComponents.EUVLayoutPreviewSide
/// Size: 0x04 (4 bytes)
enum class EUVLayoutPreviewSide : uint32_t
{
	EUVLayoutPreviewSide__Left                                                       = 0,
	EUVLayoutPreviewSide__Right                                                      = 1
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointTransformMode
/// Size: 0x04 (4 bytes)
enum class ESpaceCurveControlPointTransformMode : uint32_t
{
	ESpaceCurveControlPointTransformMode__Shared                                     = 0,
	ESpaceCurveControlPointTransformMode__PerVertex                                  = 1
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointOriginMode
/// Size: 0x04 (4 bytes)
enum class ESpaceCurveControlPointOriginMode : uint32_t
{
	ESpaceCurveControlPointOriginMode__Shared                                        = 0,
	ESpaceCurveControlPointOriginMode__First                                         = 1,
	ESpaceCurveControlPointOriginMode__Last                                          = 2
};

/// Enum /Script/ModelingComponents.ESpaceCurveControlPointFalloffType
/// Size: 0x04 (4 bytes)
enum class ESpaceCurveControlPointFalloffType : uint32_t
{
	ESpaceCurveControlPointFalloffType__Linear                                       = 0,
	ESpaceCurveControlPointFalloffType__Smooth                                       = 1
};

/// Enum /Script/ModelingComponents.EModelingComponentsPlaneVisualizationMode
/// Size: 0x01 (1 bytes)
enum class EModelingComponentsPlaneVisualizationMode : uint8_t
{
	EModelingComponentsPlaneVisualizationMode__SimpleGrid                            = 0,
	EModelingComponentsPlaneVisualizationMode__HierarchicalGrid                      = 1,
	EModelingComponentsPlaneVisualizationMode__FixedScreenAreaGrid                   = 2
};

/// Enum /Script/ModelingComponents.ECreateModelingObjectResult
/// Size: 0x01 (1 bytes)
enum class ECreateModelingObjectResult : uint8_t
{
	ECreateModelingObjectResult__Ok                                                  = 0,
	ECreateModelingObjectResult__Cancelled                                           = 1,
	ECreateModelingObjectResult__Failed_Unknown                                      = 2,
	ECreateModelingObjectResult__Failed_NoAPIFound                                   = 3,
	ECreateModelingObjectResult__Failed_InvalidWorld                                 = 4,
	ECreateModelingObjectResult__Failed_InvalidMesh                                  = 5,
	ECreateModelingObjectResult__Failed_InvalidTexture                               = 6,
	ECreateModelingObjectResult__Failed_AssetCreationFailed                          = 7,
	ECreateModelingObjectResult__Failed_ActorCreationFailed                          = 8
};

/// Enum /Script/ModelingComponents.ECreateMeshObjectSourceMeshType
/// Size: 0x01 (1 bytes)
enum class ECreateMeshObjectSourceMeshType : uint8_t
{
	ECreateMeshObjectSourceMeshType__MeshDescription                                 = 0,
	ECreateMeshObjectSourceMeshType__DynamicMesh                                     = 1
};

/// Enum /Script/ModelingComponents.ECreateObjectTypeHint
/// Size: 0x01 (1 bytes)
enum class ECreateObjectTypeHint : uint8_t
{
	ECreateObjectTypeHint__Undefined                                                 = 0,
	ECreateObjectTypeHint__StaticMesh                                                = 1,
	ECreateObjectTypeHint__Volume                                                    = 2,
	ECreateObjectTypeHint__DynamicMeshActor                                          = 3
};

/// Enum /Script/ModelingComponents.EHandleSourcesMethod
/// Size: 0x01 (1 bytes)
enum class EHandleSourcesMethod : uint8_t
{
	EHandleSourcesMethod__DeleteSources                                              = 0,
	EHandleSourcesMethod__HideSources                                                = 1,
	EHandleSourcesMethod__KeepSources                                                = 2,
	EHandleSourcesMethod__KeepFirstSource                                            = 3,
	EHandleSourcesMethod__KeepLastSource                                             = 4
};

/// Enum /Script/ModelingComponents.EMultiTransformerMode
/// Size: 0x01 (1 bytes)
enum class EMultiTransformerMode : uint8_t
{
	EMultiTransformerMode__DefaultGizmo                                              = 1,
	EMultiTransformerMode__QuickAxisTranslation                                      = 2
};

/// Class /Script/ModelingComponents.SingleTargetWithSelectionToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USingleTargetWithSelectionToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.SingleTargetWithSelectionTool
/// Size: 0x0110 (272 bytes) (0x0000A8 - 0x000110) align 8 MaxSize: 0x0110
class USingleTargetWithSelectionTool : public USingleSelectionTool
{ 
public:
	TWeakObjectPtr<class UWorld*>                      TargetWorld;                                                // 0x00A8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x00B0   (0x0060)  MISSED
};

/// Class /Script/ModelingComponents.MultiSelectionMeshEditingToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMultiSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.MultiSelectionMeshEditingTool
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMultiSelectionMeshEditingTool : public UMultiSelectionTool
{ 
public:
	TWeakObjectPtr<class UWorld*>                      TargetWorld;                                                // 0x00B0   (0x0008)  
};

/// Class /Script/ModelingComponents.SingleSelectionMeshEditingToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USingleSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.SingleSelectionMeshEditingTool
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class USingleSelectionMeshEditingTool : public USingleSelectionTool
{ 
public:
	TWeakObjectPtr<class UWorld*>                      TargetWorld;                                                // 0x00A8   (0x0008)  
	class UPersistentMeshSelection*                    InputSelection;                                             // 0x00B0   (0x0008)  
};

/// Class /Script/ModelingComponents.MeshSurfacePointMeshEditingToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMeshSurfacePointMeshEditingToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.WeightMapSetProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{ 
public:
	FName                                              WeightMap;                                                  // 0x00A8   (0x0008)  
	TArray<FString>                                    WeightMapsList;                                             // 0x00B0   (0x0010)  
	bool                                               bInvertWeightMap;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00C1   (0x0007)  MISSED


	/// Functions
	// Function /Script/ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
	// TArray<FString> GetWeightMapsFunc();                                                                                     // [0x17ea0d0] Final|Native|Public  
};

/// Class /Script/ModelingComponents.BaseMeshProcessingTool
/// Size: 0x0400 (1024 bytes) (0x0000A8 - 0x000400) align 16 MaxSize: 0x0400
class UBaseMeshProcessingTool : public USingleSelectionTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x00A8   (0x0020)  MISSED
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x330];                                     // 0x00D0   (0x0330)  MISSED
};

/// Class /Script/ModelingComponents.BaseMeshProcessingToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBaseMeshProcessingToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedTool
/// Size: 0x0100 (256 bytes) (0x0000B8 - 0x000100) align 8 MaxSize: 0x0100
class UBaseCreateFromSelectedTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UTransformInputsToolProperties*              TransformProperties;                                        // 0x00C0   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00C8   (0x0008)  
	class UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;                                  // 0x00D0   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00D8   (0x0008)  
	TArray<class UTransformProxy*>                     TransformProxies;                                           // 0x00E0   (0x0010)  
	TArray<class UCombinedTransformGizmo*>             TransformGizmos;                                            // 0x00F0   (0x0010)  
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBaseCreateFromSelectedToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/ModelingComponents.BaseVoxelTool
/// Size: 0x0118 (280 bytes) (0x000100 - 0x000118) align 8 MaxSize: 0x0118
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{ 
public:
	class UVoxelProperties*                            VoxProperties;                                              // 0x0100   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0108   (0x0010)  MISSED
};

/// Class /Script/ModelingComponents.GeometrySelectionEditCommand
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeometrySelectionEditCommand : public UInteractiveCommand
{ 
public:
};

/// Class /Script/ModelingComponents.InteractiveToolActivity
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UInteractiveToolActivity : public UInteractionMechanic
{ 
public:
};

/// Class /Script/ModelingComponents.MeshTopologySelectionMechanic
/// Size: 0x0AF0 (2800 bytes) (0x000030 - 0x000AF0) align 16 MaxSize: 0x0AF0
class UMeshTopologySelectionMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0030   (0x0048)  MISSED
	class UMeshTopologySelectionMechanicProperties*    Properties;                                                 // 0x0078   (0x0008)  
	unsigned char                                      UnknownData01_6[0x60];                                      // 0x0080   (0x0060)  MISSED
	class UMouseHoverBehavior*                         HoverBehavior;                                              // 0x00E0   (0x0008)  
	class USingleClickOrDragInputBehavior*             ClickOrDragBehavior;                                        // 0x00E8   (0x0008)  
	class URectangleMarqueeMechanic*                   MarqueeMechanic;                                            // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x5C8];                                     // 0x00F8   (0x05C8)  MISSED
	class APreviewGeometryActor*                       PreviewGeometryActor;                                       // 0x06C0   (0x0008)  
	class UTriangleSetComponent*                       DrawnTriangleSetComponent;                                  // 0x06C8   (0x0008)  
	unsigned char                                      UnknownData03_6[0x50];                                      // 0x06D0   (0x0050)  MISSED
	class UMaterialInterface*                          HighlightedFaceMaterial;                                    // 0x0720   (0x0008)  
	unsigned char                                      UnknownData04_7[0x3C8];                                     // 0x0728   (0x03C8)  MISSED
};

/// Class /Script/ModelingComponents.BoundarySelectionMechanic
/// Size: 0x0AF0 (2800 bytes) (0x000AF0 - 0x000AF0) align 16 MaxSize: 0x0AF0
class UBoundarySelectionMechanic : public UMeshTopologySelectionMechanic
{ 
public:
};

/// Class /Script/ModelingComponents.DynamicMeshCommitter
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDynamicMeshCommitter : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.DynamicMeshProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDynamicMeshProvider : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.PersistentDynamicMeshSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPersistentDynamicMeshSource : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.ToolActivityHost
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UToolActivityHost : public UInterface
{ 
public:
};

/// Class /Script/ModelingComponents.MeshTopologySelectionMechanicProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMeshTopologySelectionMechanicProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bSelectVertices;                                            // 0x00A8   (0x0001)  
	bool                                               bSelectEdges;                                               // 0x00A9   (0x0001)  
	bool                                               bSelectFaces;                                               // 0x00AA   (0x0001)  
	bool                                               bSelectEdgeLoops;                                           // 0x00AB   (0x0001)  
	bool                                               bSelectEdgeRings;                                           // 0x00AC   (0x0001)  
	bool                                               bHitBackFaces;                                              // 0x00AD   (0x0001)  
	bool                                               bEnableMarquee;                                             // 0x00AE   (0x0001)  
	bool                                               bMarqueeIgnoreOcclusion;                                    // 0x00AF   (0x0001)  
	bool                                               bPreferProjectedElement;                                    // 0x00B0   (0x0001)  
	bool                                               bSelectDownRay;                                             // 0x00B1   (0x0001)  
	bool                                               bIgnoreOcclusion;                                           // 0x00B2   (0x0001)  
	unsigned char                                      UnknownData00_7[0xD];                                       // 0x00B3   (0x000D)  MISSED


	/// Functions
	// Function /Script/ModelingComponents.MeshTopologySelectionMechanicProperties.SelectAll
	// void SelectAll();                                                                                                        // [0x19257e0] Final|Native|Public  
	// Function /Script/ModelingComponents.MeshTopologySelectionMechanicProperties.InvertSelection
	// void InvertSelection();                                                                                                  // [0x19253b0] Final|Native|Public  
};

/// Class /Script/ModelingComponents.GeometrySelectionEditCommandArguments
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UGeometrySelectionEditCommandArguments : public UInteractiveCommandArguments
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/ModelingComponents.GeometrySelectionEditCommandResult
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UGeometrySelectionEditCommandResult : public UInteractiveCommandResult
{ 
public:
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0028   (0x0078)  MISSED
};

/// Class /Script/ModelingComponents.VoxelProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UVoxelProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            VoxelCount;                                                 // 0x00A8   (0x0004)  
	bool                                               bAutoSimplify;                                              // 0x00AC   (0x0001)  
	bool                                               bRemoveInternalSurfaces;                                    // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AE   (0x0002)  MISSED
	double                                             SimplifyMaxErrorFactor;                                     // 0x00B0   (0x0008)  
	double                                             CubeRootMinComponentVolume;                                 // 0x00B8   (0x0008)  
};

/// Class /Script/ModelingComponents.OnAcceptHandleSourcesPropertiesBase
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOnAcceptHandleSourcesPropertiesBase : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/ModelingComponents.OnAcceptHandleSourcesProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnAcceptHandleSourcesProperties : public UOnAcceptHandleSourcesPropertiesBase
{ 
public:
	EHandleSourcesMethod                               HandleInputs;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/ModelingComponents.BaseCreateFromSelectedHandleSourceProperties
/// Size: 0x00D8 (216 bytes) (0x0000B0 - 0x0000D8) align 8 MaxSize: 0x00D8
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{ 
public:
	EBaseCreateFromSelectedTargetType                  OutputWriteTo;                                              // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FString                                            OutputNewName;                                              // 0x00B8   (0x0010)  
	FString                                            OutputExistingName;                                         // 0x00C8   (0x0010)  
};

/// Class /Script/ModelingComponents.TransformInputsToolProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowTransformGizmo;                                        // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/ModelingComponents.DynamicMeshReplacementChangeTarget
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UDynamicMeshReplacementChangeTarget : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0028   (0x0030)  MISSED
};

/// Class /Script/ModelingComponents.OctreeDynamicMeshComponent
/// Size: 0x0720 (1824 bytes) (0x000610 - 0x000720) align 16 MaxSize: 0x0720
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x50];                                      // 0x0610   (0x0050)  MISSED
	class UDynamicMesh*                                MeshObject;                                                 // 0x0660   (0x0008)  
	unsigned char                                      UnknownData01_7[0xB8];                                      // 0x0668   (0x00B8)  MISSED


	/// Functions
	// Function /Script/ModelingComponents.OctreeDynamicMeshComponent.SetDynamicMesh
	// void SetDynamicMesh(class UDynamicMesh* NewMesh);                                                                        // [0x1925920] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ModelingComponents.LineSetComponent
/// Size: 0x0620 (1568 bytes) (0x0005A0 - 0x000620) align 16 MaxSize: 0x0620
class ULineSetComponent : public UMeshComponent
{ 
public:
	class UMaterialInterface*                          LineMaterial;                                               // 0x05A0   (0x0008)  
	FBoxSphereBounds                                   Bounds;                                                     // 0x05A8   (0x0038)  
	bool                                               bBoundsDirty;                                               // 0x05E0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3F];                                      // 0x05E1   (0x003F)  MISSED
};

/// Class /Script/ModelingComponents.MeshElementsVisualizerProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMeshElementsVisualizerProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bVisible;                                                   // 0x00A8   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x00A9   (0x0001)  
	bool                                               bShowBorders;                                               // 0x00AA   (0x0001)  
	bool                                               bShowUVSeams;                                               // 0x00AB   (0x0001)  
	bool                                               bShowNormalSeams;                                           // 0x00AC   (0x0001)  
	bool                                               bShowColorSeams;                                            // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AE   (0x0002)  MISSED
	float                                              ThicknessScale;                                             // 0x00B0   (0x0004)  
	FColor                                             WireframeColor;                                             // 0x00B4   (0x0004)  
	FColor                                             BoundaryEdgeColor;                                          // 0x00B8   (0x0004)  
	FColor                                             UVSeamColor;                                                // 0x00BC   (0x0004)  
	FColor                                             NormalSeamColor;                                            // 0x00C0   (0x0004)  
	FColor                                             ColorSeamColor;                                             // 0x00C4   (0x0004)  
	float                                              DepthBias;                                                  // 0x00C8   (0x0004)  
	bool                                               bAdjustDepthBiasUsingMeshSize;                              // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x00CD   (0x0003)  MISSED
};

/// Class /Script/ModelingComponents.PreviewGeometry
/// Size: 0x00D0 (208 bytes) (0x000028 - 0x0000D0) align 8 MaxSize: 0x00D0
class UPreviewGeometry : public UObject
{ 
public:
	class APreviewGeometryActor*                       ParentActor;                                                // 0x0028   (0x0008)  
	TMap<FString, class ULineSetComponent*>            LineSets;                                                   // 0x0030   (0x0050)  
	TMap<FString, class UPointSetComponent*>           PointSets;                                                  // 0x0080   (0x0050)  


	/// Functions
	// Function /Script/ModelingComponents.PreviewGeometry.SetPointSetVisibility
	// bool SetPointSetVisibility(FString PointSetIdentifier, bool bVisible);                                                   // [0x1926080] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetPointSetMaterial
	// bool SetPointSetMaterial(FString PointSetIdentifier, class UMaterialInterface* NewMaterial);                             // [0x1925f20] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetLineSetVisibility
	// bool SetLineSetVisibility(FString LineSetIdentifier, bool bVisible);                                                     // [0x1925dc0] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetLineSetMaterial
	// bool SetLineSetMaterial(FString LineSetIdentifier, class UMaterialInterface* NewMaterial);                               // [0x1925c60] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetAllPointSetsMaterial
	// void SetAllPointSetsMaterial(class UMaterialInterface* Material);                                                        // [0x1925890] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
	// void SetAllLineSetsMaterial(class UMaterialInterface* Material);                                                         // [0x1925800] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemovePointSet
	// bool RemovePointSet(FString PointSetIdentifier, bool bDestroy);                                                          // [0x1925660] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveLineSet
	// bool RemoveLineSet(FString LineSetIdentifier, bool bDestroy);                                                            // [0x19254f0] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveAllPointSets
	// void RemoveAllPointSets(bool bDestroy);                                                                                  // [0x1925460] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.RemoveAllLineSets
	// void RemoveAllLineSets(bool bDestroy);                                                                                   // [0x19253d0] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.GetActor
	// class APreviewGeometryActor* GetActor();                                                                                 // [0x1925390] Final|Native|Public|Const 
	// Function /Script/ModelingComponents.PreviewGeometry.FindPointSet
	// class UPointSetComponent* FindPointSet(FString PointSetIdentifier);                                                      // [0x1925290] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.FindLineSet
	// class ULineSetComponent* FindLineSet(FString LineSetIdentifier);                                                         // [0x19251a0] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.Disconnect
	// void Disconnect();                                                                                                       // [0x1925150] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.CreateInWorld
	// void CreateInWorld(class UWorld* World, FTransform& WithTransform);                                                      // [0x1924ef0] Final|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/ModelingComponents.PreviewGeometry.AddPointSet
	// class UPointSetComponent* AddPointSet(FString PointSetIdentifier);                                                       // [0x1924d90] Final|Native|Public  
	// Function /Script/ModelingComponents.PreviewGeometry.AddLineSet
	// class ULineSetComponent* AddLineSet(FString LineSetIdentifier);                                                          // [0x1924ce0] Final|Native|Public  
};

/// Class /Script/ModelingComponents.MeshElementsVisualizer
/// Size: 0x00F8 (248 bytes) (0x0000D0 - 0x0000F8) align 8 MaxSize: 0x00F8
class UMeshElementsVisualizer : public UPreviewGeometry
{ 
public:
	class UMeshElementsVisualizerProperties*           Settings;                                                   // 0x00D0   (0x0008)  
	class UMeshWireframeComponent*                     WireframeComponent;                                         // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00E0   (0x0018)  MISSED
};

/// Class /Script/ModelingComponents.MeshWireframeComponent
/// Size: 0x0640 (1600 bytes) (0x0005A0 - 0x000640) align 16 MaxSize: 0x0640
class UMeshWireframeComponent : public UMeshComponent
{ 
public:
	float                                              LineDepthBias;                                              // 0x05A0   (0x0004)  
	float                                              LineDepthBiasSizeScale;                                     // 0x05A4   (0x0004)  
	float                                              ThicknessScale;                                             // 0x05A8   (0x0004)  
	bool                                               bEnableWireframe;                                           // 0x05AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x05AD   (0x0003)  MISSED
	FColor                                             WireframeColor;                                             // 0x05B0   (0x0004)  
	float                                              WireframeThickness;                                         // 0x05B4   (0x0004)  
	bool                                               bEnableBoundaryEdges;                                       // 0x05B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x05B9   (0x0003)  MISSED
	FColor                                             BoundaryEdgeColor;                                          // 0x05BC   (0x0004)  
	float                                              BoundaryEdgeThickness;                                      // 0x05C0   (0x0004)  
	bool                                               bEnableUVSeams;                                             // 0x05C4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x05C5   (0x0003)  MISSED
	FColor                                             UVSeamColor;                                                // 0x05C8   (0x0004)  
	float                                              UVSeamThickness;                                            // 0x05CC   (0x0004)  
	bool                                               bEnableNormalSeams;                                         // 0x05D0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x05D1   (0x0003)  MISSED
	FColor                                             NormalSeamColor;                                            // 0x05D4   (0x0004)  
	float                                              NormalSeamThickness;                                        // 0x05D8   (0x0004)  
	bool                                               bEnableColorSeams;                                          // 0x05DC   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x05DD   (0x0003)  MISSED
	FColor                                             ColorSeamColor;                                             // 0x05E0   (0x0004)  
	float                                              ColorSeamThickness;                                         // 0x05E4   (0x0004)  
	class UMaterialInterface*                          LineMaterial;                                               // 0x05E8   (0x0008)  
	FBoxSphereBounds                                   LocalBounds;                                                // 0x05F0   (0x0038)  
	unsigned char                                      UnknownData05_7[0x18];                                      // 0x0628   (0x0018)  MISSED
};

/// Class /Script/ModelingComponents.PointSetComponent
/// Size: 0x0620 (1568 bytes) (0x0005A0 - 0x000620) align 16 MaxSize: 0x0620
class UPointSetComponent : public UMeshComponent
{ 
public:
	class UMaterialInterface*                          PointMaterial;                                              // 0x05A0   (0x0008)  
	FBoxSphereBounds                                   Bounds;                                                     // 0x05A8   (0x0038)  
	bool                                               bBoundsDirty;                                               // 0x05E0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3F];                                      // 0x05E1   (0x003F)  MISSED
};

/// Class /Script/ModelingComponents.PreviewMesh
/// Size: 0x0140 (320 bytes) (0x000028 - 0x000140) align 16 MaxSize: 0x0140
class UPreviewMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0028   (0x0018)  MISSED
	bool                                               bBuildSpatialDataStructure;                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0041   (0x000F)  MISSED
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0050   (0x0008)  
	unsigned char                                      UnknownData02_7[0xE8];                                      // 0x0058   (0x00E8)  MISSED
};

/// Class /Script/ModelingComponents.PolyEditPreviewMesh
/// Size: 0x0550 (1360 bytes) (0x000140 - 0x000550) align 16 MaxSize: 0x0550
class UPolyEditPreviewMesh : public UPreviewMesh
{ 
public:
	unsigned char                                      UnknownData00_1[0x410];                                     // 0x0140   (0x0410)  MISSED
};

/// Class /Script/ModelingComponents.PreviewGeometryActor
/// Size: 0x0298 (664 bytes) (0x000298 - 0x000298) align 8 MaxSize: 0x0298
class APreviewGeometryActor : public AInternalToolFrameworkActor
{ 
public:
};

/// Class /Script/ModelingComponents.TriangleSetComponent
/// Size: 0x06A0 (1696 bytes) (0x0005A0 - 0x0006A0) align 16 MaxSize: 0x06A0
class UTriangleSetComponent : public UMeshComponent
{ 
public:
	FBoxSphereBounds                                   Bounds;                                                     // 0x05A0   (0x0038)  
	bool                                               bBoundsDirty;                                               // 0x05D8   (0x0001)  
	unsigned char                                      UnknownData00_7[0xC7];                                      // 0x05D9   (0x00C7)  MISSED
};

/// Class /Script/ModelingComponents.UVLayoutPreviewProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnabled;                                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	EUVLayoutPreviewSide                               Side;                                                       // 0x00AC   (0x0004)  
	float                                              Scale;                                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	FVector2D                                          Offset;                                                     // 0x00B8   (0x0010)  
	bool                                               bShowWireframe;                                             // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Class /Script/ModelingComponents.UVLayoutPreview
/// Size: 0x0160 (352 bytes) (0x000028 - 0x000160) align 16 MaxSize: 0x0160
class UUVLayoutPreview : public UObject
{ 
public:
	class UUVLayoutPreviewProperties*                  Settings;                                                   // 0x0028   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x0030   (0x0008)  
	class UTriangleSetComponent*                       TriangleComponent;                                          // 0x0038   (0x0008)  
	bool                                               bShowBackingRectangle;                                      // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	class UMaterialInterface*                          BackingRectangleMaterial;                                   // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_7[0x110];                                     // 0x0050   (0x0110)  MISSED
};

/// Class /Script/ModelingComponents.CollectSurfacePathMechanic
/// Size: 0x05C0 (1472 bytes) (0x000030 - 0x0005C0) align 16 MaxSize: 0x05C0
class UCollectSurfacePathMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x590];                                     // 0x0030   (0x0590)  MISSED
};

/// Class /Script/ModelingComponents.ConstructionPlaneMechanic
/// Size: 0x00F0 (240 bytes) (0x000030 - 0x0000F0) align 16 MaxSize: 0x00F0
class UConstructionPlaneMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x98];                                      // 0x0030   (0x0098)  MISSED
	class UCombinedTransformGizmo*                     PlaneTransformGizmo;                                        // 0x00C8   (0x0008)  
	class UTransformProxy*                             PlaneTransformProxy;                                        // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00D8   (0x0008)  MISSED
	class USingleClickInputBehavior*                   ClickToSetPlaneBehavior;                                    // 0x00E0   (0x0008)  
	class ULocalSingleClickInputBehavior*              MiddleClickToSetGizmoBehavior;                              // 0x00E8   (0x0008)  
};

/// Class /Script/ModelingComponents.CurveControlPointsMechanic
/// Size: 0x0680 (1664 bytes) (0x000030 - 0x000680) align 16 MaxSize: 0x0680
class UCurveControlPointsMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	class USingleClickInputBehavior*                   ClickBehavior;                                              // 0x0040   (0x0008)  
	class UMouseHoverBehavior*                         HoverBehavior;                                              // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x498];                                     // 0x0050   (0x0498)  MISSED
	class APreviewGeometryActor*                       PreviewGeometryActor;                                       // 0x04E8   (0x0008)  
	class UPointSetComponent*                          DrawnControlPoints;                                         // 0x04F0   (0x0008)  
	class ULineSetComponent*                           DrawnControlSegments;                                       // 0x04F8   (0x0008)  
	class UPointSetComponent*                          PreviewPoint;                                               // 0x0500   (0x0008)  
	class ULineSetComponent*                           PreviewSegment;                                             // 0x0508   (0x0008)  
	unsigned char                                      UnknownData02_6[0x78];                                      // 0x0510   (0x0078)  MISSED
	class UTransformProxy*                             PointTransformProxy;                                        // 0x0588   (0x0008)  
	class UCombinedTransformGizmo*                     PointTransformGizmo;                                        // 0x0590   (0x0008)  
	unsigned char                                      UnknownData03_7[0xE8];                                      // 0x0598   (0x00E8)  MISSED
};

/// Class /Script/ModelingComponents.DragAlignmentMechanic
/// Size: 0x0270 (624 bytes) (0x000030 - 0x000270) align 16 MaxSize: 0x0270
class UDragAlignmentMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x240];                                     // 0x0030   (0x0240)  MISSED
};

/// Class /Script/ModelingComponents.DragAlignmentInteraction
/// Size: 0x02D0 (720 bytes) (0x000028 - 0x0002D0) align 16 MaxSize: 0x02D0
class UDragAlignmentInteraction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x2A8];                                     // 0x0028   (0x02A8)  MISSED
};

/// Class /Script/ModelingComponents.LatticeControlPointsMechanic
/// Size: 0x0500 (1280 bytes) (0x000030 - 0x000500) align 16 MaxSize: 0x0500
class ULatticeControlPointsMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x1F0];                                     // 0x0030   (0x01F0)  MISSED
	class APreviewGeometryActor*                       PreviewGeometryActor;                                       // 0x0220   (0x0008)  
	class UPointSetComponent*                          DrawnControlPoints;                                         // 0x0228   (0x0008)  
	class ULineSetComponent*                           DrawnLatticeEdges;                                          // 0x0230   (0x0008)  
	unsigned char                                      UnknownData01_6[0xA8];                                      // 0x0238   (0x00A8)  MISSED
	class UTransformProxy*                             PointTransformProxy;                                        // 0x02E0   (0x0008)  
	class UCombinedTransformGizmo*                     PointTransformGizmo;                                        // 0x02E8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x58];                                      // 0x02F0   (0x0058)  MISSED
	class URectangleMarqueeMechanic*                   MarqueeMechanic;                                            // 0x0348   (0x0008)  
	unsigned char                                      UnknownData03_7[0x1B0];                                     // 0x0350   (0x01B0)  MISSED
};

/// Class /Script/ModelingComponents.PlaneDistanceFromHitMechanic
/// Size: 0x0510 (1296 bytes) (0x000030 - 0x000510) align 16 MaxSize: 0x0510
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x4E0];                                     // 0x0030   (0x04E0)  MISSED
};

/// Class /Script/ModelingComponents.PolyLassoMarqueeMechanic
/// Size: 0x01D0 (464 bytes) (0x000030 - 0x0001D0) align 16 MaxSize: 0x01D0
class UPolyLassoMarqueeMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x58];                                      // 0x0030   (0x0058)  MISSED
	float                                              SpacingTolerance;                                           // 0x0088   (0x0004)  
	float                                              LineThickness;                                              // 0x008C   (0x0004)  
	FLinearColor                                       LineColor;                                                  // 0x0090   (0x0010)  
	FLinearColor                                       ClosedColor;                                                // 0x00A0   (0x0010)  
	bool                                               bEnableFreehandPolygons;                                    // 0x00B0   (0x0001)  
	bool                                               bEnableMultiClickPolygons;                                  // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00B2   (0x0006)  MISSED
	class UClickDragInputBehavior*                     ClickDragBehavior;                                          // 0x00B8   (0x0008)  
	class UMouseHoverBehavior*                         HoverBehavior;                                              // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x108];                                     // 0x00C8   (0x0108)  MISSED
};

/// Class /Script/ModelingComponents.RectangleMarqueeMechanic
/// Size: 0x0220 (544 bytes) (0x000030 - 0x000220) align 16 MaxSize: 0x0220
class URectangleMarqueeMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	bool                                               bUseExternalClickDragBehavior;                              // 0x0038   (0x0001)  
	bool                                               bUseExternalUpdateCameraState;                              // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_6[0x46];                                      // 0x003A   (0x0046)  MISSED
	double                                             OnDragRectangleChangedDeferredThreshold;                    // 0x0080   (0x0008)  
	unsigned char                                      UnknownData02_6[0x48];                                      // 0x0088   (0x0048)  MISSED
	class UClickDragInputBehavior*                     ClickDragBehavior;                                          // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData03_7[0x148];                                     // 0x00D8   (0x0148)  MISSED
};

/// Class /Script/ModelingComponents.RectangleMarqueeInteraction
/// Size: 0x0210 (528 bytes) (0x000028 - 0x000210) align 16 MaxSize: 0x0210
class URectangleMarqueeInteraction : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x1E8];                                     // 0x0028   (0x01E8)  MISSED
};

/// Class /Script/ModelingComponents.SpaceCurveDeformationMechanicPropertySet
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{ 
public:
	ESpaceCurveControlPointTransformMode               TransformMode;                                              // 0x00A8   (0x0004)  
	ESpaceCurveControlPointOriginMode                  TransformOrigin;                                            // 0x00AC   (0x0004)  
	float                                              Softness;                                                   // 0x00B0   (0x0004)  
	ESpaceCurveControlPointFalloffType                 SoftFalloff;                                                // 0x00B4   (0x0004)  
};

/// Class /Script/ModelingComponents.SpaceCurveDeformationMechanic
/// Size: 0x02D0 (720 bytes) (0x000030 - 0x0002D0) align 16 MaxSize: 0x02D0
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0030   (0x0010)  MISSED
	class USingleClickInputBehavior*                   ClickBehavior;                                              // 0x0040   (0x0008)  
	class UMouseHoverBehavior*                         HoverBehavior;                                              // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x18];                                      // 0x0050   (0x0018)  MISSED
	class USpaceCurveDeformationMechanicPropertySet*   TransformProperties;                                        // 0x0068   (0x0008)  
	unsigned char                                      UnknownData02_6[0xF8];                                      // 0x0070   (0x00F8)  MISSED
	class APreviewGeometryActor*                       PreviewGeometryActor;                                       // 0x0168   (0x0008)  
	class UPointSetComponent*                          RenderPoints;                                               // 0x0170   (0x0008)  
	class ULineSetComponent*                           RenderSegments;                                             // 0x0178   (0x0008)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x0180   (0x0038)  MISSED
	class UTransformProxy*                             PointTransformProxy;                                        // 0x01B8   (0x0008)  
	class UCombinedTransformGizmo*                     PointTransformGizmo;                                        // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData04_7[0x108];                                     // 0x01C8   (0x0108)  MISSED
};

/// Class /Script/ModelingComponents.SpatialCurveDistanceMechanic
/// Size: 0x0410 (1040 bytes) (0x000030 - 0x000410) align 16 MaxSize: 0x0410
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{ 
public:
	unsigned char                                      UnknownData00_1[0x3E0];                                     // 0x0030   (0x03E0)  MISSED
};

/// Class /Script/ModelingComponents.MeshOpPreviewWithBackgroundCompute
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMeshOpPreviewWithBackgroundCompute : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0028   (0x0030)  MISSED
	class UPreviewMesh*                                PreviewMesh;                                                // 0x0058   (0x0008)  
	TArray<class UMaterialInterface*>                  StandardMaterials;                                          // 0x0060   (0x0010)  
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x0070   (0x0008)  
	class UMaterialInterface*                          WorkingMaterial;                                            // 0x0078   (0x0008)  
	class UMaterialInterface*                          SecondaryMaterial;                                          // 0x0080   (0x0008)  
	TWeakObjectPtr<class UWorld*>                      PreviewWorld;                                               // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0090   (0x0028)  MISSED
};

/// Class /Script/ModelingComponents.ModelingComponentsSettings
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UModelingComponentsSettings : public UDeveloperSettings
{ 
public:
	bool                                               bEnableRayTracingWhileEditing;                              // 0x0038   (0x0001)  
	bool                                               bEnableRayTracing;                                          // 0x0039   (0x0001)  
	bool                                               bEnableCollision;                                           // 0x003A   (0x0001)  
	TEnumAsByte<ECollisionTraceFlag>                   CollisionMode;                                              // 0x003B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/ModelingComponents.ModelingComponentsEditorSettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UModelingComponentsEditorSettings : public UDeveloperSettings
{ 
public:
	EModelingComponentsPlaneVisualizationMode          GridMode;                                                   // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            NumGridLines;                                               // 0x003C   (0x0004)  
	float                                              GridSpacing;                                                // 0x0040   (0x0004)  
	float                                              GridScale;                                                  // 0x0044   (0x0004)  
	float                                              GridSize;                                                   // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Class /Script/ModelingComponents.ModelingObjectsCreationAPI
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UModelingObjectsCreationAPI : public UObject
{ 
public:


	/// Functions
	// Function /Script/ModelingComponents.ModelingObjectsCreationAPI.CreateTextureObject
	// FCreateTextureObjectResult CreateTextureObject(FCreateTextureObjectParams& CreateTexParams);                             // [0x196f390] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ModelingComponents.ModelingObjectsCreationAPI.CreateMeshObject
	// FCreateMeshObjectResult CreateMeshObject(FCreateMeshObjectParams& CreateMeshParams);                                     // [0x196f190] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/ModelingComponents.PreviewMeshActor
/// Size: 0x0298 (664 bytes) (0x000298 - 0x000298) align 8 MaxSize: 0x0298
class APreviewMeshActor : public AInternalToolFrameworkActor
{ 
public:
};

/// Class /Script/ModelingComponents.CreateMeshObjectTypeProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UCreateMeshObjectTypeProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            OutputType;                                                 // 0x00A8   (0x0010)  
	class UClass*                                      VolumeType;                                                 // 0x00B8   (0x0008)  
	TArray<FString>                                    OutputTypeNamesList;                                        // 0x00C0   (0x0010)  
	bool                                               bShowVolumeList;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00D1   (0x0007)  MISSED


	/// Functions
	// Function /Script/ModelingComponents.CreateMeshObjectTypeProperties.ShouldShowPropertySet
	// bool ShouldShowPropertySet();                                                                                            // [0x196f610] Final|Native|Public|Const 
	// Function /Script/ModelingComponents.CreateMeshObjectTypeProperties.GetOutputTypeNamesFunc
	// TArray<FString> GetOutputTypeNamesFunc();                                                                                // [0x196f580] Final|Native|Public  
	// Function /Script/ModelingComponents.CreateMeshObjectTypeProperties.GetCurrentCreateMeshType
	// ECreateObjectTypeHint GetCurrentCreateMeshType();                                                                        // [0x196f470] Final|Native|Public|Const 
};

/// Class /Script/ModelingComponents.OnAcceptHandleSourcesPropertiesSingle
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOnAcceptHandleSourcesPropertiesSingle : public UOnAcceptHandleSourcesPropertiesBase
{ 
public:
	EHandleSourcesMethod                               HandleInputs;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/ModelingComponents.PolygroupLayersProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPolygroupLayersProperties : public UInteractiveToolPropertySet
{ 
public:
	FName                                              ActiveGroupLayer;                                           // 0x00A8   (0x0008)  
	TArray<FString>                                    GroupLayersList;                                            // 0x00B0   (0x0010)  


	/// Functions
	// Function /Script/ModelingComponents.PolygroupLayersProperties.GetGroupLayersFunc
	// TArray<FString> GetGroupLayersFunc();                                                                                    // [0x17ea0d0] Final|Native|Public  
};

/// Class /Script/ModelingComponents.GeometrySelectionManager
/// Size: 0x0278 (632 bytes) (0x000028 - 0x000278) align 8 MaxSize: 0x0278
class UGeometrySelectionManager : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0028   (0x0028)  MISSED
	class UGeometrySelectionEditCommandArguments*      SelectionArguments;                                         // 0x0050   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	class UInteractiveToolsContext*                    ToolsContext;                                               // 0x0060   (0x0008)  
	unsigned char                                      UnknownData02_7[0x210];                                     // 0x0068   (0x0210)  MISSED
};

/// Class /Script/ModelingComponents.PersistentMeshSelection
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UPersistentMeshSelection : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0028   (0x0060)  MISSED
};

/// Class /Script/ModelingComponents.PersistentMeshSelectionManager
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPersistentMeshSelectionManager : public UObject
{ 
public:
	class UInteractiveToolsContext*                    ParentContext;                                              // 0x0028   (0x0008)  
	class UPersistentMeshSelection*                    ActiveSelection;                                            // 0x0030   (0x0008)  
	class UPreviewGeometry*                            SelectionDisplay;                                           // 0x0038   (0x0008)  
};

/// Class /Script/ModelingComponents.PolygonSelectionMechanicProperties
/// Size: 0x00C0 (192 bytes) (0x0000C0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPolygonSelectionMechanicProperties : public UMeshTopologySelectionMechanicProperties
{ 
public:
};

/// Class /Script/ModelingComponents.PolygonSelectionMechanic
/// Size: 0x0B00 (2816 bytes) (0x000AF0 - 0x000B00) align 16 MaxSize: 0x0B00
class UPolygonSelectionMechanic : public UMeshTopologySelectionMechanic
{ 
public:
	class UPolygonSelectionMechanicProperties*         Properties;                                                 // 0x0AF0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0AF8   (0x0008)  MISSED
};

/// Class /Script/ModelingComponents.ModelingSceneSnappingManager
/// Size: 0x0150 (336 bytes) (0x000028 - 0x000150) align 8 MaxSize: 0x0150
class UModelingSceneSnappingManager : public USceneSnappingManager
{ 
public:
	class UInteractiveToolsContext*                    ParentContext;                                              // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x120];                                     // 0x0030   (0x0120)  MISSED
};

/// Class /Script/ModelingComponents.MultiTransformer
/// Size: 0x01B0 (432 bytes) (0x000028 - 0x0001B0) align 16 MaxSize: 0x01B0
class UMultiTransformer : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x60];                                      // 0x0028   (0x0060)  MISSED
	class UInteractiveGizmoManager*                    GizmoManager;                                               // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_6[0x70];                                      // 0x0090   (0x0070)  MISSED
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0100   (0x0008)  
	class UTransformProxy*                             TransformProxy;                                             // 0x0108   (0x0008)  
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x0110   (0x0008)  
	unsigned char                                      UnknownData02_7[0x98];                                      // 0x0118   (0x0098)  MISSED
};

/// Struct /Script/ModelingComponents.ModelingToolsAxisFilter
/// Size: 0x0003 (3 bytes) (0x000000 - 0x000003) align 1 MaxSize: 0x0003
struct FModelingToolsAxisFilter
{ 
	bool                                               bAxisX;                                                     // 0x0000   (0x0001)  
	bool                                               bAxisY;                                                     // 0x0001   (0x0001)  
	bool                                               bAxisZ;                                                     // 0x0002   (0x0001)  
};

/// Struct /Script/ModelingComponents.RenderableTriangleVertex
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRenderableTriangleVertex
{ 
	FVector                                            position;                                                   // 0x0000   (0x0018)  
	FVector2D                                          UV;                                                         // 0x0018   (0x0010)  
	FVector                                            Normal;                                                     // 0x0028   (0x0018)  
	FColor                                             Color;                                                      // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ModelingComponents.RenderableTriangle
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FRenderableTriangle
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FRenderableTriangleVertex                          Vertex0;                                                    // 0x0008   (0x0048)  
	FRenderableTriangleVertex                          Vertex1;                                                    // 0x0050   (0x0048)  
	FRenderableTriangleVertex                          Vertex2;                                                    // 0x0098   (0x0048)  
};

/// Struct /Script/ModelingComponents.CreateMeshObjectParams
/// Size: 0x0600 (1536 bytes) (0x000000 - 0x000600) align 16 MaxSize: 0x0600
struct FCreateMeshObjectParams
{ 
	class UPrimitiveComponent*                         SourceComponent;                                            // 0x0000   (0x0008)  
	ECreateObjectTypeHint                              TypeHint;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	class UClass*                                      TypeHintClass;                                              // 0x0010   (0x0008)  
	int32_t                                            TypeHintExtended;                                           // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	class UWorld*                                      TargetWorld;                                                // 0x0020   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0030   (0x0060)  
	FString                                            BaseName;                                                   // 0x0090   (0x0010)  
	TArray<class UMaterialInterface*>                  Materials;                                                  // 0x00A0   (0x0010)  
	TArray<class UMaterialInterface*>                  AssetMaterials;                                             // 0x00B0   (0x0010)  
	bool                                               bEnableCollision;                                           // 0x00C0   (0x0001)  
	TEnumAsByte<ECollisionTraceFlag>                   CollisionMode;                                              // 0x00C1   (0x0001)  
	bool                                               bEnableRaytracingSupport;                                   // 0x00C2   (0x0001)  
	bool                                               bEnableRecomputeNormals;                                    // 0x00C3   (0x0001)  
	bool                                               bEnableRecomputeTangents;                                   // 0x00C4   (0x0001)  
	bool                                               bEnableNanite;                                              // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x00C6   (0x0002)  MISSED
	float                                              NaniteProxyTrianglePercent;                                 // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData04_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	FMeshNaniteSettings                                NaniteSettings;                                             // 0x00D0   (0x0038)  
	unsigned char                                      UnknownData05_7[0x4F8];                                     // 0x0108   (0x04F8)  MISSED
};

/// Struct /Script/ModelingComponents.CreateMeshObjectResult
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FCreateMeshObjectResult
{ 
	ECreateModelingObjectResult                        ResultCode;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class AActor*                                      NewActor;                                                   // 0x0008   (0x0008)  
	class UPrimitiveComponent*                         NewComponent;                                               // 0x0010   (0x0008)  
	class UObject*                                     NewAsset;                                                   // 0x0018   (0x0008)  
};

/// Struct /Script/ModelingComponents.CreateTextureObjectParams
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FCreateTextureObjectParams
{ 
	int32_t                                            TypeHintExtended;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	class UWorld*                                      TargetWorld;                                                // 0x0008   (0x0008)  
	class UObject*                                     StoreRelativeToObject;                                      // 0x0010   (0x0008)  
	FString                                            BaseName;                                                   // 0x0018   (0x0010)  
	class UTexture2D*                                  GeneratedTransientTexture;                                  // 0x0028   (0x0008)  
};

/// Struct /Script/ModelingComponents.CreateTextureObjectResult
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FCreateTextureObjectResult
{ 
	ECreateModelingObjectResult                        ResultCode;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	class UObject*                                     NewAsset;                                                   // 0x0008   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(USingleTargetWithSelectionToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USingleTargetWithSelectionTool) == 0x0110); // 272 bytes (0x0000A8 - 0x000110)
static_assert(sizeof(UMultiSelectionMeshEditingToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMultiSelectionMeshEditingTool) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(USingleSelectionMeshEditingToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USingleSelectionMeshEditingTool) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UMeshSurfacePointMeshEditingToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UWeightMapSetProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UBaseMeshProcessingTool) == 0x0400); // 1024 bytes (0x0000A8 - 0x000400)
static_assert(sizeof(UBaseMeshProcessingToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBaseCreateFromSelectedTool) == 0x0100); // 256 bytes (0x0000B8 - 0x000100)
static_assert(sizeof(UBaseCreateFromSelectedToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBaseVoxelTool) == 0x0118); // 280 bytes (0x000100 - 0x000118)
static_assert(sizeof(UGeometrySelectionEditCommand) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UInteractiveToolActivity) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMeshTopologySelectionMechanic) == 0x0AF0); // 2800 bytes (0x000030 - 0x000AF0)
static_assert(sizeof(UBoundarySelectionMechanic) == 0x0AF0); // 2800 bytes (0x000AF0 - 0x000AF0)
static_assert(sizeof(UDynamicMeshCommitter) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDynamicMeshProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPersistentDynamicMeshSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UToolActivityHost) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshTopologySelectionMechanicProperties) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UGeometrySelectionEditCommandArguments) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UGeometrySelectionEditCommandResult) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UVoxelProperties) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UOnAcceptHandleSourcesPropertiesBase) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UOnAcceptHandleSourcesProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UBaseCreateFromSelectedHandleSourceProperties) == 0x00D8); // 216 bytes (0x0000B0 - 0x0000D8)
static_assert(sizeof(UTransformInputsToolProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UDynamicMeshReplacementChangeTarget) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UOctreeDynamicMeshComponent) == 0x0720); // 1824 bytes (0x000610 - 0x000720)
static_assert(sizeof(ULineSetComponent) == 0x0620); // 1568 bytes (0x0005A0 - 0x000620)
static_assert(sizeof(UMeshElementsVisualizerProperties) == 0x00D0); // 208 bytes (0x0000A8 - 0x0000D0)
static_assert(sizeof(UPreviewGeometry) == 0x00D0); // 208 bytes (0x000028 - 0x0000D0)
static_assert(sizeof(UMeshElementsVisualizer) == 0x00F8); // 248 bytes (0x0000D0 - 0x0000F8)
static_assert(sizeof(UMeshWireframeComponent) == 0x0640); // 1600 bytes (0x0005A0 - 0x000640)
static_assert(sizeof(UPointSetComponent) == 0x0620); // 1568 bytes (0x0005A0 - 0x000620)
static_assert(sizeof(UPreviewMesh) == 0x0140); // 320 bytes (0x000028 - 0x000140)
static_assert(sizeof(UPolyEditPreviewMesh) == 0x0550); // 1360 bytes (0x000140 - 0x000550)
static_assert(sizeof(APreviewGeometryActor) == 0x0298); // 664 bytes (0x000298 - 0x000298)
static_assert(sizeof(UTriangleSetComponent) == 0x06A0); // 1696 bytes (0x0005A0 - 0x0006A0)
static_assert(sizeof(UUVLayoutPreviewProperties) == 0x00D0); // 208 bytes (0x0000A8 - 0x0000D0)
static_assert(sizeof(UUVLayoutPreview) == 0x0160); // 352 bytes (0x000028 - 0x000160)
static_assert(sizeof(UCollectSurfacePathMechanic) == 0x05C0); // 1472 bytes (0x000030 - 0x0005C0)
static_assert(sizeof(UConstructionPlaneMechanic) == 0x00F0); // 240 bytes (0x000030 - 0x0000F0)
static_assert(sizeof(UCurveControlPointsMechanic) == 0x0680); // 1664 bytes (0x000030 - 0x000680)
static_assert(sizeof(UDragAlignmentMechanic) == 0x0270); // 624 bytes (0x000030 - 0x000270)
static_assert(sizeof(UDragAlignmentInteraction) == 0x02D0); // 720 bytes (0x000028 - 0x0002D0)
static_assert(sizeof(ULatticeControlPointsMechanic) == 0x0500); // 1280 bytes (0x000030 - 0x000500)
static_assert(sizeof(UPlaneDistanceFromHitMechanic) == 0x0510); // 1296 bytes (0x000030 - 0x000510)
static_assert(sizeof(UPolyLassoMarqueeMechanic) == 0x01D0); // 464 bytes (0x000030 - 0x0001D0)
static_assert(sizeof(URectangleMarqueeMechanic) == 0x0220); // 544 bytes (0x000030 - 0x000220)
static_assert(sizeof(URectangleMarqueeInteraction) == 0x0210); // 528 bytes (0x000028 - 0x000210)
static_assert(sizeof(USpaceCurveDeformationMechanicPropertySet) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(USpaceCurveDeformationMechanic) == 0x02D0); // 720 bytes (0x000030 - 0x0002D0)
static_assert(sizeof(USpatialCurveDistanceMechanic) == 0x0410); // 1040 bytes (0x000030 - 0x000410)
static_assert(sizeof(UMeshOpPreviewWithBackgroundCompute) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(UModelingComponentsSettings) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UModelingComponentsEditorSettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UModelingObjectsCreationAPI) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(APreviewMeshActor) == 0x0298); // 664 bytes (0x000298 - 0x000298)
static_assert(sizeof(UCreateMeshObjectTypeProperties) == 0x00D8); // 216 bytes (0x0000A8 - 0x0000D8)
static_assert(sizeof(UOnAcceptHandleSourcesPropertiesSingle) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UPolygroupLayersProperties) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UGeometrySelectionManager) == 0x0278); // 632 bytes (0x000028 - 0x000278)
static_assert(sizeof(UPersistentMeshSelection) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UPersistentMeshSelectionManager) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPolygonSelectionMechanicProperties) == 0x00C0); // 192 bytes (0x0000C0 - 0x0000C0)
static_assert(sizeof(UPolygonSelectionMechanic) == 0x0B00); // 2816 bytes (0x000AF0 - 0x000B00)
static_assert(sizeof(UModelingSceneSnappingManager) == 0x0150); // 336 bytes (0x000028 - 0x000150)
static_assert(sizeof(UMultiTransformer) == 0x01B0); // 432 bytes (0x000028 - 0x0001B0)
static_assert(sizeof(FModelingToolsAxisFilter) == 0x0003); // 3 bytes (0x000000 - 0x000003)
static_assert(sizeof(FRenderableTriangleVertex) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRenderableTriangle) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FCreateMeshObjectParams) == 0x0600); // 1536 bytes (0x000000 - 0x000600)
static_assert(sizeof(FCreateMeshObjectResult) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCreateTextureObjectParams) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FCreateTextureObjectResult) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(USingleTargetWithSelectionTool, TargetWorld) == 0x00A8);
static_assert(offsetof(UMultiSelectionMeshEditingTool, TargetWorld) == 0x00B0);
static_assert(offsetof(USingleSelectionMeshEditingTool, TargetWorld) == 0x00A8);
static_assert(offsetof(USingleSelectionMeshEditingTool, InputSelection) == 0x00B0);
static_assert(offsetof(UWeightMapSetProperties, WeightMap) == 0x00A8);
static_assert(offsetof(UWeightMapSetProperties, WeightMapsList) == 0x00B0);
static_assert(offsetof(UBaseMeshProcessingTool, Preview) == 0x00C8);
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformProperties) == 0x00C0);
static_assert(offsetof(UBaseCreateFromSelectedTool, OutputTypeProperties) == 0x00C8);
static_assert(offsetof(UBaseCreateFromSelectedTool, HandleSourcesProperties) == 0x00D0);
static_assert(offsetof(UBaseCreateFromSelectedTool, Preview) == 0x00D8);
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformProxies) == 0x00E0);
static_assert(offsetof(UBaseCreateFromSelectedTool, TransformGizmos) == 0x00F0);
static_assert(offsetof(UBaseVoxelTool, VoxProperties) == 0x0100);
static_assert(offsetof(UMeshTopologySelectionMechanic, Properties) == 0x0078);
static_assert(offsetof(UMeshTopologySelectionMechanic, HoverBehavior) == 0x00E0);
static_assert(offsetof(UMeshTopologySelectionMechanic, ClickOrDragBehavior) == 0x00E8);
static_assert(offsetof(UMeshTopologySelectionMechanic, MarqueeMechanic) == 0x00F0);
static_assert(offsetof(UMeshTopologySelectionMechanic, PreviewGeometryActor) == 0x06C0);
static_assert(offsetof(UMeshTopologySelectionMechanic, DrawnTriangleSetComponent) == 0x06C8);
static_assert(offsetof(UMeshTopologySelectionMechanic, HighlightedFaceMaterial) == 0x0720);
static_assert(offsetof(UOnAcceptHandleSourcesProperties, HandleInputs) == 0x00A8);
static_assert(offsetof(UBaseCreateFromSelectedHandleSourceProperties, OutputWriteTo) == 0x00B0);
static_assert(offsetof(UBaseCreateFromSelectedHandleSourceProperties, OutputNewName) == 0x00B8);
static_assert(offsetof(UBaseCreateFromSelectedHandleSourceProperties, OutputExistingName) == 0x00C8);
static_assert(offsetof(UOctreeDynamicMeshComponent, MeshObject) == 0x0660);
static_assert(offsetof(ULineSetComponent, LineMaterial) == 0x05A0);
static_assert(offsetof(ULineSetComponent, Bounds) == 0x05A8);
static_assert(offsetof(UMeshElementsVisualizerProperties, WireframeColor) == 0x00B4);
static_assert(offsetof(UMeshElementsVisualizerProperties, BoundaryEdgeColor) == 0x00B8);
static_assert(offsetof(UMeshElementsVisualizerProperties, UVSeamColor) == 0x00BC);
static_assert(offsetof(UMeshElementsVisualizerProperties, NormalSeamColor) == 0x00C0);
static_assert(offsetof(UMeshElementsVisualizerProperties, ColorSeamColor) == 0x00C4);
static_assert(offsetof(UPreviewGeometry, ParentActor) == 0x0028);
static_assert(offsetof(UPreviewGeometry, LineSets) == 0x0030);
static_assert(offsetof(UPreviewGeometry, PointSets) == 0x0080);
static_assert(offsetof(UMeshElementsVisualizer, Settings) == 0x00D0);
static_assert(offsetof(UMeshElementsVisualizer, WireframeComponent) == 0x00D8);
static_assert(offsetof(UMeshWireframeComponent, WireframeColor) == 0x05B0);
static_assert(offsetof(UMeshWireframeComponent, BoundaryEdgeColor) == 0x05BC);
static_assert(offsetof(UMeshWireframeComponent, UVSeamColor) == 0x05C8);
static_assert(offsetof(UMeshWireframeComponent, NormalSeamColor) == 0x05D4);
static_assert(offsetof(UMeshWireframeComponent, ColorSeamColor) == 0x05E0);
static_assert(offsetof(UMeshWireframeComponent, LineMaterial) == 0x05E8);
static_assert(offsetof(UMeshWireframeComponent, LocalBounds) == 0x05F0);
static_assert(offsetof(UPointSetComponent, PointMaterial) == 0x05A0);
static_assert(offsetof(UPointSetComponent, Bounds) == 0x05A8);
static_assert(offsetof(UPreviewMesh, DynamicMeshComponent) == 0x0050);
static_assert(offsetof(UTriangleSetComponent, Bounds) == 0x05A0);
static_assert(offsetof(UUVLayoutPreviewProperties, Side) == 0x00AC);
static_assert(offsetof(UUVLayoutPreviewProperties, Offset) == 0x00B8);
static_assert(offsetof(UUVLayoutPreview, Settings) == 0x0028);
static_assert(offsetof(UUVLayoutPreview, PreviewMesh) == 0x0030);
static_assert(offsetof(UUVLayoutPreview, TriangleComponent) == 0x0038);
static_assert(offsetof(UUVLayoutPreview, BackingRectangleMaterial) == 0x0048);
static_assert(offsetof(UConstructionPlaneMechanic, PlaneTransformGizmo) == 0x00C8);
static_assert(offsetof(UConstructionPlaneMechanic, PlaneTransformProxy) == 0x00D0);
static_assert(offsetof(UConstructionPlaneMechanic, ClickToSetPlaneBehavior) == 0x00E0);
static_assert(offsetof(UConstructionPlaneMechanic, MiddleClickToSetGizmoBehavior) == 0x00E8);
static_assert(offsetof(UCurveControlPointsMechanic, ClickBehavior) == 0x0040);
static_assert(offsetof(UCurveControlPointsMechanic, HoverBehavior) == 0x0048);
static_assert(offsetof(UCurveControlPointsMechanic, PreviewGeometryActor) == 0x04E8);
static_assert(offsetof(UCurveControlPointsMechanic, DrawnControlPoints) == 0x04F0);
static_assert(offsetof(UCurveControlPointsMechanic, DrawnControlSegments) == 0x04F8);
static_assert(offsetof(UCurveControlPointsMechanic, PreviewPoint) == 0x0500);
static_assert(offsetof(UCurveControlPointsMechanic, PreviewSegment) == 0x0508);
static_assert(offsetof(UCurveControlPointsMechanic, PointTransformProxy) == 0x0588);
static_assert(offsetof(UCurveControlPointsMechanic, PointTransformGizmo) == 0x0590);
static_assert(offsetof(ULatticeControlPointsMechanic, PreviewGeometryActor) == 0x0220);
static_assert(offsetof(ULatticeControlPointsMechanic, DrawnControlPoints) == 0x0228);
static_assert(offsetof(ULatticeControlPointsMechanic, DrawnLatticeEdges) == 0x0230);
static_assert(offsetof(ULatticeControlPointsMechanic, PointTransformProxy) == 0x02E0);
static_assert(offsetof(ULatticeControlPointsMechanic, PointTransformGizmo) == 0x02E8);
static_assert(offsetof(ULatticeControlPointsMechanic, MarqueeMechanic) == 0x0348);
static_assert(offsetof(UPolyLassoMarqueeMechanic, LineColor) == 0x0090);
static_assert(offsetof(UPolyLassoMarqueeMechanic, ClosedColor) == 0x00A0);
static_assert(offsetof(UPolyLassoMarqueeMechanic, ClickDragBehavior) == 0x00B8);
static_assert(offsetof(UPolyLassoMarqueeMechanic, HoverBehavior) == 0x00C0);
static_assert(offsetof(URectangleMarqueeMechanic, ClickDragBehavior) == 0x00D0);
static_assert(offsetof(USpaceCurveDeformationMechanicPropertySet, TransformMode) == 0x00A8);
static_assert(offsetof(USpaceCurveDeformationMechanicPropertySet, TransformOrigin) == 0x00AC);
static_assert(offsetof(USpaceCurveDeformationMechanicPropertySet, SoftFalloff) == 0x00B4);
static_assert(offsetof(USpaceCurveDeformationMechanic, ClickBehavior) == 0x0040);
static_assert(offsetof(USpaceCurveDeformationMechanic, HoverBehavior) == 0x0048);
static_assert(offsetof(USpaceCurveDeformationMechanic, TransformProperties) == 0x0068);
static_assert(offsetof(USpaceCurveDeformationMechanic, PreviewGeometryActor) == 0x0168);
static_assert(offsetof(USpaceCurveDeformationMechanic, RenderPoints) == 0x0170);
static_assert(offsetof(USpaceCurveDeformationMechanic, RenderSegments) == 0x0178);
static_assert(offsetof(USpaceCurveDeformationMechanic, PointTransformProxy) == 0x01B8);
static_assert(offsetof(USpaceCurveDeformationMechanic, PointTransformGizmo) == 0x01C0);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, PreviewMesh) == 0x0058);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, StandardMaterials) == 0x0060);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, OverrideMaterial) == 0x0070);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, WorkingMaterial) == 0x0078);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, SecondaryMaterial) == 0x0080);
static_assert(offsetof(UMeshOpPreviewWithBackgroundCompute, PreviewWorld) == 0x0088);
static_assert(offsetof(UModelingComponentsSettings, CollisionMode) == 0x003B);
static_assert(offsetof(UModelingComponentsEditorSettings, GridMode) == 0x0038);
static_assert(offsetof(UCreateMeshObjectTypeProperties, OutputType) == 0x00A8);
static_assert(offsetof(UCreateMeshObjectTypeProperties, VolumeType) == 0x00B8);
static_assert(offsetof(UCreateMeshObjectTypeProperties, OutputTypeNamesList) == 0x00C0);
static_assert(offsetof(UOnAcceptHandleSourcesPropertiesSingle, HandleInputs) == 0x00A8);
static_assert(offsetof(UPolygroupLayersProperties, ActiveGroupLayer) == 0x00A8);
static_assert(offsetof(UPolygroupLayersProperties, GroupLayersList) == 0x00B0);
static_assert(offsetof(UGeometrySelectionManager, SelectionArguments) == 0x0050);
static_assert(offsetof(UGeometrySelectionManager, ToolsContext) == 0x0060);
static_assert(offsetof(UPersistentMeshSelectionManager, ParentContext) == 0x0028);
static_assert(offsetof(UPersistentMeshSelectionManager, ActiveSelection) == 0x0030);
static_assert(offsetof(UPersistentMeshSelectionManager, SelectionDisplay) == 0x0038);
static_assert(offsetof(UPolygonSelectionMechanic, Properties) == 0x0AF0);
static_assert(offsetof(UModelingSceneSnappingManager, ParentContext) == 0x0028);
static_assert(offsetof(UMultiTransformer, GizmoManager) == 0x0088);
static_assert(offsetof(UMultiTransformer, TransformGizmo) == 0x0100);
static_assert(offsetof(UMultiTransformer, TransformProxy) == 0x0108);
static_assert(offsetof(UMultiTransformer, DragAlignmentMechanic) == 0x0110);
static_assert(offsetof(FRenderableTriangleVertex, position) == 0x0000);
static_assert(offsetof(FRenderableTriangleVertex, UV) == 0x0018);
static_assert(offsetof(FRenderableTriangleVertex, Normal) == 0x0028);
static_assert(offsetof(FRenderableTriangleVertex, Color) == 0x0040);
static_assert(offsetof(FRenderableTriangle, Material) == 0x0000);
static_assert(offsetof(FRenderableTriangle, Vertex0) == 0x0008);
static_assert(offsetof(FRenderableTriangle, Vertex1) == 0x0050);
static_assert(offsetof(FRenderableTriangle, Vertex2) == 0x0098);
static_assert(offsetof(FCreateMeshObjectParams, SourceComponent) == 0x0000);
static_assert(offsetof(FCreateMeshObjectParams, TypeHint) == 0x0008);
static_assert(offsetof(FCreateMeshObjectParams, TypeHintClass) == 0x0010);
static_assert(offsetof(FCreateMeshObjectParams, TargetWorld) == 0x0020);
static_assert(offsetof(FCreateMeshObjectParams, Transform) == 0x0030);
static_assert(offsetof(FCreateMeshObjectParams, BaseName) == 0x0090);
static_assert(offsetof(FCreateMeshObjectParams, Materials) == 0x00A0);
static_assert(offsetof(FCreateMeshObjectParams, AssetMaterials) == 0x00B0);
static_assert(offsetof(FCreateMeshObjectParams, CollisionMode) == 0x00C1);
static_assert(offsetof(FCreateMeshObjectParams, NaniteSettings) == 0x00D0);
static_assert(offsetof(FCreateMeshObjectResult, ResultCode) == 0x0000);
static_assert(offsetof(FCreateMeshObjectResult, NewActor) == 0x0008);
static_assert(offsetof(FCreateMeshObjectResult, NewComponent) == 0x0010);
static_assert(offsetof(FCreateMeshObjectResult, NewAsset) == 0x0018);
static_assert(offsetof(FCreateTextureObjectParams, TargetWorld) == 0x0008);
static_assert(offsetof(FCreateTextureObjectParams, StoreRelativeToObject) == 0x0010);
static_assert(offsetof(FCreateTextureObjectParams, BaseName) == 0x0018);
static_assert(offsetof(FCreateTextureObjectParams, GeneratedTransientTexture) == 0x0028);
static_assert(offsetof(FCreateTextureObjectResult, ResultCode) == 0x0000);
static_assert(offsetof(FCreateTextureObjectResult, NewAsset) == 0x0008);
