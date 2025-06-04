
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GeometryFramework
/// dependency: InteractiveToolsFramework
/// dependency: MeshModelingTools
/// dependency: ModelingComponents
/// dependency: ModelingOperators

#pragma pack(push, 0x1)

/// Enum /Script/MeshModelingToolsExp.EBakeNormalSpace
/// Size: 0x04 (4 bytes)
enum class EBakeNormalSpace : uint32_t
{
	EBakeNormalSpace__Tangent                                                        = 0,
	EBakeNormalSpace__Object                                                         = 1
};

/// Enum /Script/MeshModelingToolsExp.EBakeCurvatureTypeMode
/// Size: 0x04 (4 bytes)
enum class EBakeCurvatureTypeMode : uint32_t
{
	EBakeCurvatureTypeMode__MeanAverage                                              = 0,
	EBakeCurvatureTypeMode__Max                                                      = 1,
	EBakeCurvatureTypeMode__Min                                                      = 2,
	EBakeCurvatureTypeMode__Gaussian                                                 = 3
};

/// Enum /Script/MeshModelingToolsExp.EBakeCurvatureColorMode
/// Size: 0x04 (4 bytes)
enum class EBakeCurvatureColorMode : uint32_t
{
	EBakeCurvatureColorMode__Grayscale                                               = 0,
	EBakeCurvatureColorMode__RedBlue                                                 = 1,
	EBakeCurvatureColorMode__RedGreenBlue                                            = 2
};

/// Enum /Script/MeshModelingToolsExp.EBakeCurvatureClampMode
/// Size: 0x04 (4 bytes)
enum class EBakeCurvatureClampMode : uint32_t
{
	EBakeCurvatureClampMode__None                                                    = 0,
	EBakeCurvatureClampMode__OnlyPositive                                            = 1,
	EBakeCurvatureClampMode__OnlyNegative                                            = 2
};

/// Enum /Script/MeshModelingToolsExp.EExtrudeMeshSelectionInteractionMode
/// Size: 0x01 (1 bytes)
enum class EExtrudeMeshSelectionInteractionMode : uint8_t
{
	EExtrudeMeshSelectionInteractionMode__Interactive                                = 0,
	EExtrudeMeshSelectionInteractionMode__Fixed                                      = 1
};

/// Enum /Script/MeshModelingToolsExp.EExtrudeMeshSelectionRegionModifierMode
/// Size: 0x01 (1 bytes)
enum class EExtrudeMeshSelectionRegionModifierMode : uint8_t
{
	EExtrudeMeshSelectionRegionModifierMode__OriginalShape                           = 0,
	EExtrudeMeshSelectionRegionModifierMode__FlattenToPlane                          = 1,
	EExtrudeMeshSelectionRegionModifierMode__RaycastToPlane                          = 2
};

/// Enum /Script/MeshModelingToolsExp.EPlaneBrushSideMode
/// Size: 0x01 (1 bytes)
enum class EPlaneBrushSideMode : uint8_t
{
	EPlaneBrushSideMode__BothSides                                                   = 0,
	EPlaneBrushSideMode__PushDown                                                    = 1,
	EPlaneBrushSideMode__PullTowards                                                 = 2
};

/// Enum /Script/MeshModelingToolsExp.EOffsetMeshSelectionInteractionMode
/// Size: 0x01 (1 bytes)
enum class EOffsetMeshSelectionInteractionMode : uint8_t
{
	EOffsetMeshSelectionInteractionMode__Fixed                                       = 0
};

/// Enum /Script/MeshModelingToolsExp.EOffsetMeshSelectionDirectionMode
/// Size: 0x01 (1 bytes)
enum class EOffsetMeshSelectionDirectionMode : uint8_t
{
	EOffsetMeshSelectionDirectionMode__VertexNormals                                 = 0,
	EOffsetMeshSelectionDirectionMode__FaceNormals                                   = 1,
	EOffsetMeshSelectionDirectionMode__ConstantWidth                                 = 2
};

/// Enum /Script/MeshModelingToolsExp.EPatternToolShape
/// Size: 0x01 (1 bytes)
enum class EPatternToolShape : uint8_t
{
	EPatternToolShape__Line                                                          = 0,
	EPatternToolShape__Grid                                                          = 1,
	EPatternToolShape__Circle                                                        = 2
};

/// Enum /Script/MeshModelingToolsExp.EPatternToolSingleAxis
/// Size: 0x01 (1 bytes)
enum class EPatternToolSingleAxis : uint8_t
{
	EPatternToolSingleAxis__XAxis                                                    = 0,
	EPatternToolSingleAxis__YAxis                                                    = 1,
	EPatternToolSingleAxis__ZAxis                                                    = 2
};

/// Enum /Script/MeshModelingToolsExp.EPatternToolSinglePlane
/// Size: 0x01 (1 bytes)
enum class EPatternToolSinglePlane : uint8_t
{
	EPatternToolSinglePlane__XYPlane                                                 = 0,
	EPatternToolSinglePlane__XZPlane                                                 = 1,
	EPatternToolSinglePlane__YZPlane                                                 = 2
};

/// Enum /Script/MeshModelingToolsExp.EPatternToolAxisSpacingMode
/// Size: 0x01 (1 bytes)
enum class EPatternToolAxisSpacingMode : uint8_t
{
	EPatternToolAxisSpacingMode__ByCount                                             = 0,
	EPatternToolAxisSpacingMode__StepSize                                            = 1,
	EPatternToolAxisSpacingMode__Packed                                              = 2
};

/// Enum /Script/MeshModelingToolsExp.EMeshBoundaryConstraint
/// Size: 0x01 (1 bytes)
enum class EMeshBoundaryConstraint : uint8_t
{
	EMeshBoundaryConstraint__Fixed                                                   = 7,
	EMeshBoundaryConstraint__Refine                                                  = 5,
	EMeshBoundaryConstraint__Free                                                    = 1
};

/// Enum /Script/MeshModelingToolsExp.EGroupBoundaryConstraint
/// Size: 0x01 (1 bytes)
enum class EGroupBoundaryConstraint : uint8_t
{
	EGroupBoundaryConstraint__Fixed                                                  = 7,
	EGroupBoundaryConstraint__Refine                                                 = 5,
	EGroupBoundaryConstraint__Free                                                   = 1,
	EGroupBoundaryConstraint__Ignore                                                 = 0
};

/// Enum /Script/MeshModelingToolsExp.EMaterialBoundaryConstraint
/// Size: 0x01 (1 bytes)
enum class EMaterialBoundaryConstraint : uint8_t
{
	EMaterialBoundaryConstraint__Fixed                                               = 7,
	EMaterialBoundaryConstraint__Refine                                              = 5,
	EMaterialBoundaryConstraint__Free                                                = 1,
	EMaterialBoundaryConstraint__Ignore                                              = 0
};

/// Enum /Script/MeshModelingToolsExp.EAlignObjectsAlignTypes
/// Size: 0x04 (4 bytes)
enum class EAlignObjectsAlignTypes : uint32_t
{
	EAlignObjectsAlignTypes__Pivots                                                  = 0,
	EAlignObjectsAlignTypes__BoundingBoxes                                           = 1
};

/// Enum /Script/MeshModelingToolsExp.EAlignObjectsAlignToOptions
/// Size: 0x04 (4 bytes)
enum class EAlignObjectsAlignToOptions : uint32_t
{
	EAlignObjectsAlignToOptions__FirstSelected                                       = 0,
	EAlignObjectsAlignToOptions__LastSelected                                        = 1,
	EAlignObjectsAlignToOptions__Combined                                            = 2
};

/// Enum /Script/MeshModelingToolsExp.EAlignObjectsBoxPoint
/// Size: 0x04 (4 bytes)
enum class EAlignObjectsBoxPoint : uint32_t
{
	EAlignObjectsBoxPoint__Center                                                    = 0,
	EAlignObjectsBoxPoint__Bottom                                                    = 1,
	EAlignObjectsBoxPoint__Top                                                       = 2,
	EAlignObjectsBoxPoint__Left                                                      = 3,
	EAlignObjectsBoxPoint__Right                                                     = 4,
	EAlignObjectsBoxPoint__Front                                                     = 5,
	EAlignObjectsBoxPoint__Back                                                      = 6,
	EAlignObjectsBoxPoint__Min                                                       = 7,
	EAlignObjectsBoxPoint__Max                                                       = 8
};

/// Enum /Script/MeshModelingToolsExp.EBakeMapType
/// Size: 0x02 (2 bytes)
enum class EBakeMapType : uint16_t
{
	EBakeMapType__None                                                               = 0,
	EBakeMapType__TangentSpaceNormal                                                 = 1,
	EBakeMapType__ObjectSpaceNormal                                                  = 2,
	EBakeMapType__FaceNormal                                                         = 4,
	EBakeMapType__BentNormal                                                         = 8,
	EBakeMapType__Position                                                           = 16,
	EBakeMapType__Curvature                                                          = 32,
	EBakeMapType__AmbientOcclusion                                                   = 64,
	EBakeMapType__Texture                                                            = 128,
	EBakeMapType__MultiTexture                                                       = 256,
	EBakeMapType__VertexColor                                                        = 512,
	EBakeMapType__MaterialID                                                         = 1024,
	EBakeMapType__All                                                                = 2047
};

/// Enum /Script/MeshModelingToolsExp.EBakeVertexOutput
/// Size: 0x04 (4 bytes)
enum class EBakeVertexOutput : uint32_t
{
	EBakeVertexOutput__RGBA                                                          = 0,
	EBakeVertexOutput__PerChannel                                                    = 1
};

/// Enum /Script/MeshModelingToolsExp.EBakeVertexChannel
/// Size: 0x04 (4 bytes)
enum class EBakeVertexChannel : uint32_t
{
	EBakeVertexChannel__R                                                            = 0,
	EBakeVertexChannel__G                                                            = 1,
	EBakeVertexChannel__B                                                            = 2,
	EBakeVertexChannel__A                                                            = 3,
	EBakeVertexChannel__RGBA                                                         = 4
};

/// Enum /Script/MeshModelingToolsExp.EBakeScaleMethod
/// Size: 0x01 (1 bytes)
enum class EBakeScaleMethod : uint8_t
{
	EBakeScaleMethod__BakeFullScale                                                  = 0,
	EBakeScaleMethod__BakeNonuniformScale                                            = 1,
	EBakeScaleMethod__DoNotBakeScale                                                 = 2
};

/// Enum /Script/MeshModelingToolsExp.EConvertToPolygonsMode
/// Size: 0x04 (4 bytes)
enum class EConvertToPolygonsMode : uint32_t
{
	EConvertToPolygonsMode__FaceNormalDeviation                                      = 0,
	EConvertToPolygonsMode__FindPolygons                                             = 1,
	EConvertToPolygonsMode__FromUVIslands                                            = 2,
	EConvertToPolygonsMode__FromNormalSeams                                          = 3,
	EConvertToPolygonsMode__FromConnectedTris                                        = 4,
	EConvertToPolygonsMode__FromFurthestPointSampling                                = 5,
	EConvertToPolygonsMode__CopyFromLayer                                            = 6
};

/// Enum /Script/MeshModelingToolsExp.ECubeGridToolFaceSelectionMode
/// Size: 0x04 (4 bytes)
enum class ECubeGridToolFaceSelectionMode : uint32_t
{
	ECubeGridToolFaceSelectionMode__OutsideBasedOnNormal                             = 0,
	ECubeGridToolFaceSelectionMode__InsideBasedOnNormal                              = 1,
	ECubeGridToolFaceSelectionMode__OutsideBasedOnViewRay                            = 2,
	ECubeGridToolFaceSelectionMode__InsideBasedOnViewRay                             = 3
};

/// Enum /Script/MeshModelingToolsExp.ECubeGridToolAction
/// Size: 0x01 (1 bytes)
enum class ECubeGridToolAction : uint8_t
{
	ECubeGridToolAction__NoAction                                                    = 0,
	ECubeGridToolAction__Push                                                        = 1,
	ECubeGridToolAction__Pull                                                        = 2,
	ECubeGridToolAction__Flip                                                        = 3,
	ECubeGridToolAction__SlideForward                                                = 4,
	ECubeGridToolAction__SlideBack                                                   = 5,
	ECubeGridToolAction__DecreaseGridPower                                           = 6,
	ECubeGridToolAction__IncreaseGridPower                                           = 7,
	ECubeGridToolAction__CornerMode                                                  = 8,
	ECubeGridToolAction__ResetFromActor                                              = 9,
	ECubeGridToolAction__Done                                                        = 10,
	ECubeGridToolAction__Cancel                                                      = 11
};

/// Enum /Script/MeshModelingToolsExp.EGroupTopologyDeformationStrategy
/// Size: 0x01 (1 bytes)
enum class EGroupTopologyDeformationStrategy : uint8_t
{
	EGroupTopologyDeformationStrategy__Linear                                        = 0,
	EGroupTopologyDeformationStrategy__Laplacian                                     = 1
};

/// Enum /Script/MeshModelingToolsExp.EWeightScheme
/// Size: 0x04 (4 bytes)
enum class EWeightScheme : uint32_t
{
	EWeightScheme__Uniform                                                           = 0,
	EWeightScheme__Umbrella                                                          = 1,
	EWeightScheme__Valence                                                           = 2,
	EWeightScheme__MeanValue                                                         = 3,
	EWeightScheme__Cotangent                                                         = 4,
	EWeightScheme__ClampedCotangent                                                  = 5,
	EWeightScheme__IDTCotangent                                                      = 6
};

/// Enum /Script/MeshModelingToolsExp.EQuickTransformerMode
/// Size: 0x01 (1 bytes)
enum class EQuickTransformerMode : uint8_t
{
	EQuickTransformerMode__AxisTranslation                                           = 0,
	EQuickTransformerMode__AxisRotation                                              = 1
};

/// Enum /Script/MeshModelingToolsExp.EDisplaceMeshToolDisplaceType
/// Size: 0x01 (1 bytes)
enum class EDisplaceMeshToolDisplaceType : uint8_t
{
	EDisplaceMeshToolDisplaceType__Constant                                          = 0,
	EDisplaceMeshToolDisplaceType__DisplacementMap                                   = 1,
	EDisplaceMeshToolDisplaceType__RandomNoise                                       = 2,
	EDisplaceMeshToolDisplaceType__PerlinNoise                                       = 3,
	EDisplaceMeshToolDisplaceType__SineWave                                          = 4
};

/// Enum /Script/MeshModelingToolsExp.EDisplaceMeshToolSubdivisionType
/// Size: 0x01 (1 bytes)
enum class EDisplaceMeshToolSubdivisionType : uint8_t
{
	EDisplaceMeshToolSubdivisionType__Flat                                           = 0,
	EDisplaceMeshToolSubdivisionType__PNTriangles                                    = 1
};

/// Enum /Script/MeshModelingToolsExp.EDisplaceMeshToolTriangleSelectionType
/// Size: 0x01 (1 bytes)
enum class EDisplaceMeshToolTriangleSelectionType : uint8_t
{
	EDisplaceMeshToolTriangleSelectionType__None                                     = 0,
	EDisplaceMeshToolTriangleSelectionType__Material                                 = 1
};

/// Enum /Script/MeshModelingToolsExp.EDisplaceMeshToolChannelType
/// Size: 0x01 (1 bytes)
enum class EDisplaceMeshToolChannelType : uint8_t
{
	EDisplaceMeshToolChannelType__Red                                                = 0,
	EDisplaceMeshToolChannelType__Green                                              = 1,
	EDisplaceMeshToolChannelType__Blue                                               = 2,
	EDisplaceMeshToolChannelType__Alpha                                              = 3
};

/// Enum /Script/MeshModelingToolsExp.EDrawPolyPathWidthMode
/// Size: 0x04 (4 bytes)
enum class EDrawPolyPathWidthMode : uint32_t
{
	EDrawPolyPathWidthMode__Fixed                                                    = 0,
	EDrawPolyPathWidthMode__Interactive                                              = 1
};

/// Enum /Script/MeshModelingToolsExp.EDrawPolyPathRadiusMode
/// Size: 0x04 (4 bytes)
enum class EDrawPolyPathRadiusMode : uint32_t
{
	EDrawPolyPathRadiusMode__Fixed                                                   = 0,
	EDrawPolyPathRadiusMode__Interactive                                             = 1
};

/// Enum /Script/MeshModelingToolsExp.EDrawPolyPathExtrudeMode
/// Size: 0x04 (4 bytes)
enum class EDrawPolyPathExtrudeMode : uint32_t
{
	EDrawPolyPathExtrudeMode__Flat                                                   = 0,
	EDrawPolyPathExtrudeMode__Fixed                                                  = 1,
	EDrawPolyPathExtrudeMode__Interactive                                            = 2,
	EDrawPolyPathExtrudeMode__RampFixed                                              = 3,
	EDrawPolyPathExtrudeMode__RampInteractive                                        = 4
};

/// Enum /Script/MeshModelingToolsExp.EDrawPolyPathExtrudeDirection
/// Size: 0x04 (4 bytes)
enum class EDrawPolyPathExtrudeDirection : uint32_t
{
	EDrawPolyPathExtrudeDirection__SelectionNormal                                   = 0,
	EDrawPolyPathExtrudeDirection__WorldX                                            = 1,
	EDrawPolyPathExtrudeDirection__WorldY                                            = 2,
	EDrawPolyPathExtrudeDirection__WorldZ                                            = 3,
	EDrawPolyPathExtrudeDirection__LocalX                                            = 4,
	EDrawPolyPathExtrudeDirection__LocalY                                            = 5,
	EDrawPolyPathExtrudeDirection__LocalZ                                            = 6
};

/// Enum /Script/MeshModelingToolsExp.EDynamicMeshSculptBrushType
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshSculptBrushType : uint8_t
{
	EDynamicMeshSculptBrushType__Move                                                = 0,
	EDynamicMeshSculptBrushType__PullKelvin                                          = 1,
	EDynamicMeshSculptBrushType__PullSharpKelvin                                     = 2,
	EDynamicMeshSculptBrushType__Smooth                                              = 3,
	EDynamicMeshSculptBrushType__Offset                                              = 4,
	EDynamicMeshSculptBrushType__SculptView                                          = 5,
	EDynamicMeshSculptBrushType__SculptMax                                           = 6,
	EDynamicMeshSculptBrushType__Inflate                                             = 7,
	EDynamicMeshSculptBrushType__ScaleKelvin                                         = 8,
	EDynamicMeshSculptBrushType__Pinch                                               = 9,
	EDynamicMeshSculptBrushType__TwistKelvin                                         = 10,
	EDynamicMeshSculptBrushType__Flatten                                             = 11,
	EDynamicMeshSculptBrushType__Plane                                               = 12,
	EDynamicMeshSculptBrushType__PlaneViewAligned                                    = 13,
	EDynamicMeshSculptBrushType__FixedPlane                                          = 14,
	EDynamicMeshSculptBrushType__Resample                                            = 15,
	EDynamicMeshSculptBrushType__LastValue                                           = 16
};

/// Enum /Script/MeshModelingToolsExp.EEditPivotSnapDragRotationMode
/// Size: 0x01 (1 bytes)
enum class EEditPivotSnapDragRotationMode : uint8_t
{
	EEditPivotSnapDragRotationMode__Ignore                                           = 0,
	EEditPivotSnapDragRotationMode__Align                                            = 1,
	EEditPivotSnapDragRotationMode__AlignFlipped                                     = 2,
	EEditPivotSnapDragRotationMode__LastValue                                        = 3
};

/// Enum /Script/MeshModelingToolsExp.EEditPivotToolActions
/// Size: 0x01 (1 bytes)
enum class EEditPivotToolActions : uint8_t
{
	EEditPivotToolActions__NoAction                                                  = 0,
	EEditPivotToolActions__Center                                                    = 1,
	EEditPivotToolActions__Bottom                                                    = 2,
	EEditPivotToolActions__Top                                                       = 3,
	EEditPivotToolActions__Left                                                      = 4,
	EEditPivotToolActions__Right                                                     = 5,
	EEditPivotToolActions__Front                                                     = 6,
	EEditPivotToolActions__Back                                                      = 7,
	EEditPivotToolActions__WorldOrigin                                               = 8
};

/// Enum /Script/MeshModelingToolsExp.EHoleFillToolActions
/// Size: 0x01 (1 bytes)
enum class EHoleFillToolActions : uint8_t
{
	EHoleFillToolActions__NoAction                                                   = 0,
	EHoleFillToolActions__SelectAll                                                  = 1,
	EHoleFillToolActions__ClearSelection                                             = 2
};

/// Enum /Script/MeshModelingToolsExp.ELatticeInterpolationType
/// Size: 0x01 (1 bytes)
enum class ELatticeInterpolationType : uint8_t
{
	ELatticeInterpolationType__Linear                                                = 0,
	ELatticeInterpolationType__Cubic                                                 = 1
};

/// Enum /Script/MeshModelingToolsExp.ELatticeDeformerToolAction
/// Size: 0x01 (1 bytes)
enum class ELatticeDeformerToolAction : uint8_t
{
	ELatticeDeformerToolAction__NoAction                                             = 0,
	ELatticeDeformerToolAction__Constrain                                            = 1,
	ELatticeDeformerToolAction__ClearConstraints                                     = 2
};

/// Enum /Script/MeshModelingToolsExp.EBrushActionMode
/// Size: 0x04 (4 bytes)
enum class EBrushActionMode : uint32_t
{
	EBrushActionMode__Paint                                                          = 0,
	EBrushActionMode__FloodFill                                                      = 1
};

/// Enum /Script/MeshModelingToolsExp.EMeshAttributePaintToolActions
/// Size: 0x01 (1 bytes)
enum class EMeshAttributePaintToolActions : uint8_t
{
	EMeshAttributePaintToolActions__NoAction                                         = 0
};

/// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintInteractionType
/// Size: 0x01 (1 bytes)
enum class EMeshGroupPaintInteractionType : uint8_t
{
	EMeshGroupPaintInteractionType__Brush                                            = 0,
	EMeshGroupPaintInteractionType__Fill                                             = 1,
	EMeshGroupPaintInteractionType__GroupFill                                        = 2,
	EMeshGroupPaintInteractionType__PolyLasso                                        = 3,
	EMeshGroupPaintInteractionType__LastValue                                        = 4
};

/// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintBrushType
/// Size: 0x01 (1 bytes)
enum class EMeshGroupPaintBrushType : uint8_t
{
	EMeshGroupPaintBrushType__Paint                                                  = 0,
	EMeshGroupPaintBrushType__Erase                                                  = 1,
	EMeshGroupPaintBrushType__LastValue                                              = 2
};

/// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintBrushAreaType
/// Size: 0x01 (1 bytes)
enum class EMeshGroupPaintBrushAreaType : uint8_t
{
	EMeshGroupPaintBrushAreaType__Connected                                          = 0,
	EMeshGroupPaintBrushAreaType__Volumetric                                         = 1
};

/// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintVisibilityType
/// Size: 0x01 (1 bytes)
enum class EMeshGroupPaintVisibilityType : uint8_t
{
	EMeshGroupPaintVisibilityType__None                                              = 0,
	EMeshGroupPaintVisibilityType__FrontFacing                                       = 1,
	EMeshGroupPaintVisibilityType__Unoccluded                                        = 2
};

/// Enum /Script/MeshModelingToolsExp.EMeshGroupPaintToolActions
/// Size: 0x01 (1 bytes)
enum class EMeshGroupPaintToolActions : uint8_t
{
	EMeshGroupPaintToolActions__NoAction                                             = 0,
	EMeshGroupPaintToolActions__ClearFrozen                                          = 1,
	EMeshGroupPaintToolActions__FreezeCurrent                                        = 2,
	EMeshGroupPaintToolActions__FreezeOthers                                         = 3,
	EMeshGroupPaintToolActions__GrowCurrent                                          = 4,
	EMeshGroupPaintToolActions__ShrinkCurrent                                        = 5,
	EMeshGroupPaintToolActions__ClearCurrent                                         = 6,
	EMeshGroupPaintToolActions__FloodFillCurrent                                     = 7,
	EMeshGroupPaintToolActions__ClearAll                                             = 8
};

/// Enum /Script/MeshModelingToolsExp.EMeshInspectorToolDrawIndexMode
/// Size: 0x01 (1 bytes)
enum class EMeshInspectorToolDrawIndexMode : uint8_t
{
	EMeshInspectorToolDrawIndexMode__None                                            = 0,
	EMeshInspectorToolDrawIndexMode__VertexID                                        = 1,
	EMeshInspectorToolDrawIndexMode__TriangleID                                      = 2,
	EMeshInspectorToolDrawIndexMode__GroupID                                         = 3,
	EMeshInspectorToolDrawIndexMode__EdgeID                                          = 4
};

/// Enum /Script/MeshModelingToolsExp.EMeshInspectorMaterialMode
/// Size: 0x01 (1 bytes)
enum class EMeshInspectorMaterialMode : uint8_t
{
	EMeshInspectorMaterialMode__Original                                             = 0,
	EMeshInspectorMaterialMode__FlatShaded                                           = 1,
	EMeshInspectorMaterialMode__Grey                                                 = 2,
	EMeshInspectorMaterialMode__Transparent                                          = 3,
	EMeshInspectorMaterialMode__TangentNormal                                        = 4,
	EMeshInspectorMaterialMode__VertexColor                                          = 5,
	EMeshInspectorMaterialMode__GroupColor                                           = 6,
	EMeshInspectorMaterialMode__Checkerboard                                         = 7,
	EMeshInspectorMaterialMode__Override                                             = 8
};

/// Enum /Script/MeshModelingToolsExp.EMeshSelectionToolActions
/// Size: 0x01 (1 bytes)
enum class EMeshSelectionToolActions : uint8_t
{
	EMeshSelectionToolActions__NoAction                                              = 0,
	EMeshSelectionToolActions__SelectAll                                             = 1,
	EMeshSelectionToolActions__SelectAllByMaterial                                   = 2,
	EMeshSelectionToolActions__ClearSelection                                        = 3,
	EMeshSelectionToolActions__InvertSelection                                       = 4,
	EMeshSelectionToolActions__GrowSelection                                         = 5,
	EMeshSelectionToolActions__ShrinkSelection                                       = 6,
	EMeshSelectionToolActions__ExpandToConnected                                     = 7,
	EMeshSelectionToolActions__SelectLargestComponentByTriCount                      = 8,
	EMeshSelectionToolActions__SelectLargestComponentByArea                          = 9,
	EMeshSelectionToolActions__OptimizeSelection                                     = 10,
	EMeshSelectionToolActions__DeleteSelected                                        = 11,
	EMeshSelectionToolActions__DisconnectSelected                                    = 12,
	EMeshSelectionToolActions__SeparateSelected                                      = 13,
	EMeshSelectionToolActions__DuplicateSelected                                     = 14,
	EMeshSelectionToolActions__FlipSelected                                          = 15,
	EMeshSelectionToolActions__CreateGroup                                           = 16,
	EMeshSelectionToolActions__SmoothBoundary                                        = 17,
	EMeshSelectionToolActions__CycleSelectionMode                                    = 18,
	EMeshSelectionToolActions__CycleViewMode                                         = 19
};

/// Enum /Script/MeshModelingToolsExp.EMeshSelectionToolPrimaryMode
/// Size: 0x04 (4 bytes)
enum class EMeshSelectionToolPrimaryMode : uint32_t
{
	EMeshSelectionToolPrimaryMode__Brush                                             = 0,
	EMeshSelectionToolPrimaryMode__VolumetricBrush                                   = 1,
	EMeshSelectionToolPrimaryMode__AngleFiltered                                     = 2,
	EMeshSelectionToolPrimaryMode__Visible                                           = 3,
	EMeshSelectionToolPrimaryMode__AllConnected                                      = 4,
	EMeshSelectionToolPrimaryMode__AllInGroup                                        = 5,
	EMeshSelectionToolPrimaryMode__ByMaterial                                        = 6,
	EMeshSelectionToolPrimaryMode__ByMaterialAll                                     = 7,
	EMeshSelectionToolPrimaryMode__ByUVIsland                                        = 8,
	EMeshSelectionToolPrimaryMode__AllWithinAngle                                    = 9
};

/// Enum /Script/MeshModelingToolsExp.EMeshFacesColorMode
/// Size: 0x04 (4 bytes)
enum class EMeshFacesColorMode : uint32_t
{
	EMeshFacesColorMode__None                                                        = 0,
	EMeshFacesColorMode__ByGroup                                                     = 1,
	EMeshFacesColorMode__ByMaterialID                                                = 2,
	EMeshFacesColorMode__ByUVIsland                                                  = 3
};

/// Enum /Script/MeshModelingToolsExp.ENonlinearOperationType
/// Size: 0x01 (1 bytes)
enum class ENonlinearOperationType : uint8_t
{
	ENonlinearOperationType__Bend                                                    = 0,
	ENonlinearOperationType__Flare                                                   = 1,
	ENonlinearOperationType__Twist                                                   = 2
};

/// Enum /Script/MeshModelingToolsExp.EFlareProfileType
/// Size: 0x01 (1 bytes)
enum class EFlareProfileType : uint8_t
{
	EFlareProfileType__SinMode                                                       = 0,
	EFlareProfileType__SinSquaredMode                                                = 1,
	EFlareProfileType__TriangleMode                                                  = 2
};

/// Enum /Script/MeshModelingToolsExp.EMeshSpaceDeformerToolAction
/// Size: 0x01 (1 bytes)
enum class EMeshSpaceDeformerToolAction : uint8_t
{
	EMeshSpaceDeformerToolAction__NoAction                                           = 0,
	EMeshSpaceDeformerToolAction__ShiftToCenter                                      = 1
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexSculptBrushType
/// Size: 0x01 (1 bytes)
enum class EMeshVertexSculptBrushType : uint8_t
{
	EMeshVertexSculptBrushType__Move                                                 = 0,
	EMeshVertexSculptBrushType__PullKelvin                                           = 1,
	EMeshVertexSculptBrushType__PullSharpKelvin                                      = 2,
	EMeshVertexSculptBrushType__Smooth                                               = 3,
	EMeshVertexSculptBrushType__SmoothFill                                           = 4,
	EMeshVertexSculptBrushType__Offset                                               = 5,
	EMeshVertexSculptBrushType__SculptView                                           = 6,
	EMeshVertexSculptBrushType__SculptMax                                            = 7,
	EMeshVertexSculptBrushType__Inflate                                              = 8,
	EMeshVertexSculptBrushType__ScaleKelvin                                          = 9,
	EMeshVertexSculptBrushType__Pinch                                                = 10,
	EMeshVertexSculptBrushType__TwistKelvin                                          = 11,
	EMeshVertexSculptBrushType__Flatten                                              = 12,
	EMeshVertexSculptBrushType__Plane                                                = 13,
	EMeshVertexSculptBrushType__PlaneViewAligned                                     = 14,
	EMeshVertexSculptBrushType__FixedPlane                                           = 15,
	EMeshVertexSculptBrushType__LastValue                                            = 16
};

/// Enum /Script/MeshModelingToolsExp.EMeshVertexSculptBrushFilterType
/// Size: 0x01 (1 bytes)
enum class EMeshVertexSculptBrushFilterType : uint8_t
{
	EMeshVertexSculptBrushFilterType__None                                           = 0,
	EMeshVertexSculptBrushFilterType__Component                                      = 1,
	EMeshVertexSculptBrushFilterType__PolyGroup                                      = 2
};

/// Enum /Script/MeshModelingToolsExp.EMirrorSaveMode
/// Size: 0x01 (1 bytes)
enum class EMirrorSaveMode : uint8_t
{
	EMirrorSaveMode__UpdateAssets                                                    = 0,
	EMirrorSaveMode__CreateNewAssets                                                 = 1
};

/// Enum /Script/MeshModelingToolsExp.EMirrorOperationMode
/// Size: 0x01 (1 bytes)
enum class EMirrorOperationMode : uint8_t
{
	EMirrorOperationMode__MirrorAndAppend                                            = 0,
	EMirrorOperationMode__MirrorExisting                                             = 1
};

/// Enum /Script/MeshModelingToolsExp.EMirrorCtrlClickBehavior
/// Size: 0x01 (1 bytes)
enum class EMirrorCtrlClickBehavior : uint8_t
{
	EMirrorCtrlClickBehavior__Reposition                                             = 0,
	EMirrorCtrlClickBehavior__RepositionAndReorient                                  = 1
};

/// Enum /Script/MeshModelingToolsExp.EMirrorToolAction
/// Size: 0x01 (1 bytes)
enum class EMirrorToolAction : uint8_t
{
	EMirrorToolAction__NoAction                                                      = 0,
	EMirrorToolAction__ShiftToCenter                                                 = 1,
	EMirrorToolAction__Left                                                          = 2,
	EMirrorToolAction__Right                                                         = 3,
	EMirrorToolAction__Up                                                            = 4,
	EMirrorToolAction__Down                                                          = 5,
	EMirrorToolAction__Forward                                                       = 6,
	EMirrorToolAction__Backward                                                      = 7
};

/// Enum /Script/MeshModelingToolsExp.EOffsetMeshToolOffsetType
/// Size: 0x01 (1 bytes)
enum class EOffsetMeshToolOffsetType : uint8_t
{
	EOffsetMeshToolOffsetType__Iterative                                             = 0,
	EOffsetMeshToolOffsetType__Implicit                                              = 1
};

/// Enum /Script/MeshModelingToolsExp.ECollisionGeometryMode
/// Size: 0x04 (4 bytes)
enum class ECollisionGeometryMode : uint32_t
{
	ECollisionGeometryMode__Default                                                  = 0,
	ECollisionGeometryMode__SimpleAndComplex                                         = 1,
	ECollisionGeometryMode__UseSimpleAsComplex                                       = 2,
	ECollisionGeometryMode__UseComplexAsSimple                                       = 3
};

/// Enum /Script/MeshModelingToolsExp.EExtractCollisionOutputType
/// Size: 0x01 (1 bytes)
enum class EExtractCollisionOutputType : uint8_t
{
	EExtractCollisionOutputType__Simple                                              = 0,
	EExtractCollisionOutputType__Complex                                             = 1
};

/// Enum /Script/MeshModelingToolsExp.ESetCollisionGeometryInputMode
/// Size: 0x04 (4 bytes)
enum class ESetCollisionGeometryInputMode : uint32_t
{
	ESetCollisionGeometryInputMode__CombineAll                                       = 0,
	ESetCollisionGeometryInputMode__PerInputObject                                   = 1,
	ESetCollisionGeometryInputMode__PerMeshComponent                                 = 2,
	ESetCollisionGeometryInputMode__PerMeshGroup                                     = 3
};

/// Enum /Script/MeshModelingToolsExp.ECollisionGeometryType
/// Size: 0x04 (4 bytes)
enum class ECollisionGeometryType : uint32_t
{
	ECollisionGeometryType__KeepExisting                                             = 0,
	ECollisionGeometryType__AlignedBoxes                                             = 1,
	ECollisionGeometryType__OrientedBoxes                                            = 2,
	ECollisionGeometryType__MinimalSpheres                                           = 3,
	ECollisionGeometryType__Capsules                                                 = 4,
	ECollisionGeometryType__ConvexHulls                                              = 5,
	ECollisionGeometryType__SweptHulls                                               = 6,
	ECollisionGeometryType__LevelSets                                                = 7,
	ECollisionGeometryType__MinVolume                                                = 10,
	ECollisionGeometryType__None                                                     = 11
};

/// Enum /Script/MeshModelingToolsExp.EProjectedHullAxis
/// Size: 0x04 (4 bytes)
enum class EProjectedHullAxis : uint32_t
{
	EProjectedHullAxis__X                                                            = 0,
	EProjectedHullAxis__Y                                                            = 1,
	EProjectedHullAxis__Z                                                            = 2,
	EProjectedHullAxis__SmallestBoxDimension                                         = 3,
	EProjectedHullAxis__SmallestVolume                                               = 4
};

/// Enum /Script/MeshModelingToolsExp.EPlaneCutToolActions
/// Size: 0x01 (1 bytes)
enum class EPlaneCutToolActions : uint8_t
{
	EPlaneCutToolActions__NoAction                                                   = 0,
	EPlaneCutToolActions__Cut                                                        = 1,
	EPlaneCutToolActions__FlipPlane                                                  = 2
};

/// Enum /Script/MeshModelingToolsExp.EOcclusionTriangleSamplingUIMode
/// Size: 0x01 (1 bytes)
enum class EOcclusionTriangleSamplingUIMode : uint8_t
{
	EOcclusionTriangleSamplingUIMode__Vertices                                       = 0,
	EOcclusionTriangleSamplingUIMode__VerticesAndCentroids                           = 1
};

/// Enum /Script/MeshModelingToolsExp.EOcclusionCalculationUIMode
/// Size: 0x01 (1 bytes)
enum class EOcclusionCalculationUIMode : uint8_t
{
	EOcclusionCalculationUIMode__GeneralizedWindingNumber                            = 0,
	EOcclusionCalculationUIMode__RaycastOcclusionSamples                             = 1
};

/// Enum /Script/MeshModelingToolsExp.EOccludedAction
/// Size: 0x01 (1 bytes)
enum class EOccludedAction : uint8_t
{
	EOccludedAction__Remove                                                          = 0,
	EOccludedAction__SetNewGroup                                                     = 1
};

/// Enum /Script/MeshModelingToolsExp.EBrushToolSizeType
/// Size: 0x01 (1 bytes)
enum class EBrushToolSizeType : uint8_t
{
	EBrushToolSizeType__Adaptive                                                     = 0,
	EBrushToolSizeType__World                                                        = 1
};

/// Enum /Script/MeshModelingToolsExp.EMeshSculptFalloffType
/// Size: 0x01 (1 bytes)
enum class EMeshSculptFalloffType : uint8_t
{
	EMeshSculptFalloffType__Smooth                                                   = 0,
	EMeshSculptFalloffType__Linear                                                   = 1,
	EMeshSculptFalloffType__Inverse                                                  = 2,
	EMeshSculptFalloffType__Round                                                    = 3,
	EMeshSculptFalloffType__BoxSmooth                                                = 4,
	EMeshSculptFalloffType__BoxLinear                                                = 5,
	EMeshSculptFalloffType__BoxInverse                                               = 6,
	EMeshSculptFalloffType__BoxRound                                                 = 7,
	EMeshSculptFalloffType__LastValue                                                = 8
};

/// Enum /Script/MeshModelingToolsExp.ESkinWeightsBindType
/// Size: 0x01 (1 bytes)
enum class ESkinWeightsBindType : uint8_t
{
	ESkinWeightsBindType__DirectDistance                                             = 0,
	ESkinWeightsBindType__GeodesicVoxel                                              = 1
};

/// Enum /Script/MeshModelingToolsExp.ESmoothMeshToolSmoothType
/// Size: 0x01 (1 bytes)
enum class ESmoothMeshToolSmoothType : uint8_t
{
	ESmoothMeshToolSmoothType__Iterative                                             = 0,
	ESmoothMeshToolSmoothType__Implicit                                              = 1,
	ESmoothMeshToolSmoothType__Diffusion                                             = 2
};

/// Enum /Script/MeshModelingToolsExp.ETransformMeshesTransformMode
/// Size: 0x01 (1 bytes)
enum class ETransformMeshesTransformMode : uint8_t
{
	ETransformMeshesTransformMode__SharedGizmo                                       = 0,
	ETransformMeshesTransformMode__SharedGizmoLocal                                  = 1,
	ETransformMeshesTransformMode__PerObjectGizmo                                    = 2,
	ETransformMeshesTransformMode__LastValue                                         = 3
};

/// Enum /Script/MeshModelingToolsExp.ETransformMeshesSnapDragSource
/// Size: 0x01 (1 bytes)
enum class ETransformMeshesSnapDragSource : uint8_t
{
	ETransformMeshesSnapDragSource__ClickPoint                                       = 0,
	ETransformMeshesSnapDragSource__Pivot                                            = 1,
	ETransformMeshesSnapDragSource__LastValue                                        = 2
};

/// Enum /Script/MeshModelingToolsExp.ETransformMeshesSnapDragRotationMode
/// Size: 0x01 (1 bytes)
enum class ETransformMeshesSnapDragRotationMode : uint8_t
{
	ETransformMeshesSnapDragRotationMode__Ignore                                     = 0,
	ETransformMeshesSnapDragRotationMode__Align                                      = 1,
	ETransformMeshesSnapDragRotationMode__AlignFlipped                               = 2,
	ETransformMeshesSnapDragRotationMode__LastValue                                  = 3
};

/// Enum /Script/MeshModelingToolsExp.EVoxelBlendOperation
/// Size: 0x01 (1 bytes)
enum class EVoxelBlendOperation : uint8_t
{
	EVoxelBlendOperation__Union                                                      = 0,
	EVoxelBlendOperation__Subtract                                                   = 1
};

/// Class /Script/MeshModelingToolsExp.BakeInputMeshProperties
/// Size: 0x0140 (320 bytes) (0x0000A8 - 0x000140) align 8 MaxSize: 0x0140
class UBakeInputMeshProperties : public UInteractiveToolPropertySet
{ 
public:
	class UStaticMesh*                                 TargetStaticMesh;                                           // 0x00A8   (0x0008)  
	class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x00B0   (0x0008)  
	class AActor*                                      TargetDynamicMesh;                                          // 0x00B8   (0x0008)  
	FString                                            TargetUVLayer;                                              // 0x00C0   (0x0010)  
	bool                                               bHasTargetUVLayer;                                          // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
	class UStaticMesh*                                 SourceStaticMesh;                                           // 0x00D8   (0x0008)  
	class USkeletalMesh*                               SourceSkeletalMesh;                                         // 0x00E0   (0x0008)  
	class AActor*                                      SourceDynamicMesh;                                          // 0x00E8   (0x0008)  
	bool                                               bHideSourceMesh;                                            // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00F1   (0x0007)  MISSED
	class UTexture2D*                                  SourceNormalMap;                                            // 0x00F8   (0x0008)  
	FString                                            SourceNormalMapUVLayer;                                     // 0x0100   (0x0010)  
	EBakeNormalSpace                                   SourceNormalSpace;                                          // 0x0110   (0x0004)  
	bool                                               bHasSourceNormalMap;                                        // 0x0114   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0115   (0x0003)  MISSED
	float                                              ProjectionDistance;                                         // 0x0118   (0x0004)  
	bool                                               bProjectionInWorldSpace;                                    // 0x011C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x011D   (0x0003)  MISSED
	TArray<FString>                                    TargetUVLayerNamesList;                                     // 0x0120   (0x0010)  
	TArray<FString>                                    SourceUVLayerNamesList;                                     // 0x0130   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeInputMeshProperties.GetTargetUVLayerNamesFunc
	// TArray<FString> GetTargetUVLayerNamesFunc();                                                                             // [0x1762970] Final|Native|Public|Const 
	// Function /Script/MeshModelingToolsExp.BakeInputMeshProperties.GetSourceUVLayerNamesFunc
	// TArray<FString> GetSourceUVLayerNamesFunc();                                                                             // [0x1762940] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeNormalMapToolProperties
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UBakeNormalMapToolProperties : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.BakeOcclusionMapToolProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UBakeOcclusionMapToolProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            OcclusionRays;                                              // 0x00A8   (0x0004)  
	float                                              MaxDistance;                                                // 0x00AC   (0x0004)  
	float                                              SpreadAngle;                                                // 0x00B0   (0x0004)  
	float                                              BiasAngle;                                                  // 0x00B4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.BakeCurvatureMapToolProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UBakeCurvatureMapToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EBakeCurvatureTypeMode                             CurvatureType;                                              // 0x00A8   (0x0004)  
	EBakeCurvatureColorMode                            ColorMapping;                                               // 0x00AC   (0x0004)  
	float                                              ColorRangeMultiplier;                                       // 0x00B0   (0x0004)  
	float                                              MinRangeMultiplier;                                         // 0x00B4   (0x0004)  
	EBakeCurvatureClampMode                            Clamping;                                                   // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeTexture2DProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UBakeTexture2DProperties : public UInteractiveToolPropertySet
{ 
public:
	class UTexture2D*                                  SourceTexture;                                              // 0x00A8   (0x0008)  
	FString                                            UVLayer;                                                    // 0x00B0   (0x0010)  
	TArray<FString>                                    UVLayerNamesList;                                           // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeTexture2DProperties.GetUVLayerNamesFunc
	// TArray<FString> GetUVLayerNamesFunc();                                                                                   // [0x17629d0] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeMultiTexture2DProperties
/// Size: 0x00E8 (232 bytes) (0x0000A8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UBakeMultiTexture2DProperties : public UInteractiveToolPropertySet
{ 
public:
	TArray<class UTexture2D*>                          MaterialIDSourceTextures;                                   // 0x00A8   (0x0010)  
	FString                                            UVLayer;                                                    // 0x00B8   (0x0010)  
	TArray<FString>                                    UVLayerNamesList;                                           // 0x00C8   (0x0010)  
	TArray<class UTexture2D*>                          AllSourceTextures;                                          // 0x00D8   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeMultiTexture2DProperties.GetUVLayerNamesFunc
	// TArray<FString> GetUVLayerNamesFunc();                                                                                   // [0x17629a0] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeVisualizationProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UBakeVisualizationProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPreviewAsMaterial;                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              Brightness;                                                 // 0x00AC   (0x0004)  
	float                                              AOMultiplier;                                               // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ExtrudeMeshSelectionToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UExtrudeMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.ExtrudeMeshSelectionToolProperties
/// Size: 0x00F0 (240 bytes) (0x0000A8 - 0x0000F0) align 8 MaxSize: 0x00F0
class UExtrudeMeshSelectionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EExtrudeMeshSelectionInteractionMode               InputMode;                                                  // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	double                                             ExtrudeDistance;                                            // 0x00B0   (0x0008)  
	EExtrudeMeshSelectionRegionModifierMode            RegionMode;                                                 // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            NumSubdivisions;                                            // 0x00BC   (0x0004)  
	double                                             CreaseAngle;                                                // 0x00C0   (0x0008)  
	double                                             RaycastMaxDistance;                                         // 0x00C8   (0x0008)  
	bool                                               bShellsToSolids;                                            // 0x00D0   (0x0001)  
	bool                                               bInferGroupsFromNbrs;                                       // 0x00D1   (0x0001)  
	bool                                               bGroupPerSubdivision;                                       // 0x00D2   (0x0001)  
	bool                                               bReplaceSelectionGroups;                                    // 0x00D3   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00D4   (0x0004)  MISSED
	double                                             UVScale;                                                    // 0x00D8   (0x0008)  
	bool                                               bUVIslandPerGroup;                                          // 0x00E0   (0x0001)  
	bool                                               bInferMaterialID;                                           // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x00E2   (0x0002)  MISSED
	int32_t                                            SetMaterialID;                                              // 0x00E4   (0x0004)  
	bool                                               bShowInputMaterials;                                        // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ExtrudeMeshSelectionTool
/// Size: 0x0858 (2136 bytes) (0x000110 - 0x000858) align 8 MaxSize: 0x0858
class UExtrudeMeshSelectionTool : public USingleTargetWithSelectionTool
{ 
public:
	class UExtrudeMeshSelectionToolProperties*         ExtrudeProperties;                                          // 0x0110   (0x0008)  
	unsigned char                                      UnknownData00_6[0x720];                                     // 0x0118   (0x0720)  MISSED
	class UPreviewMesh*                                SourcePreview;                                              // 0x0838   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         EditCompute;                                                // 0x0840   (0x0008)  
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0848   (0x0008)  
	class UTransformProxy*                             TransformProxy;                                             // 0x0850   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.MeshSculptBrushOpProps
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.BaseKelvinletBrushOpProps
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Stiffness;                                                  // 0x00A8   (0x0004)  
	float                                              Incompressiblity;                                           // 0x00AC   (0x0004)  
	int32_t                                            BrushSteps;                                                 // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ScaleKelvinletBrushOpProps
/// Size: 0x00C0 (192 bytes) (0x0000B8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00B8   (0x0004)  
	float                                              Falloff;                                                    // 0x00BC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.PullKelvinletBrushOpProps
/// Size: 0x00C0 (192 bytes) (0x0000B8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Falloff;                                                    // 0x00B8   (0x0004)  
	float                                              Depth;                                                      // 0x00BC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.SharpPullKelvinletBrushOpProps
/// Size: 0x00C0 (192 bytes) (0x0000B8 - 0x0000C0) align 8 MaxSize: 0x00C0
class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Falloff;                                                    // 0x00B8   (0x0004)  
	float                                              Depth;                                                      // 0x00BC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.TwistKelvinletBrushOpProps
/// Size: 0x00C0 (192 bytes) (0x0000B8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00B8   (0x0004)  
	float                                              Falloff;                                                    // 0x00BC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.GroupEraseBrushOpProps
/// Size: 0x00F0 (240 bytes) (0x0000A8 - 0x0000F0) align 16 MaxSize: 0x00F0
class UGroupEraseBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	int32_t                                            Group;                                                      // 0x00A8   (0x0004)  
	bool                                               bOnlyEraseCurrent;                                          // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x43];                                      // 0x00AD   (0x0043)  MISSED
};

/// Class /Script/MeshModelingToolsExp.GroupPaintBrushOpProps
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UGroupPaintBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	int32_t                                            Group;                                                      // 0x00A8   (0x0004)  
	bool                                               bOnlyPaintUngrouped;                                        // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.InflateBrushOpProps
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.MoveBrushOpProps
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              Depth;                                                      // 0x00B0   (0x0004)  
	FModelingToolsAxisFilter                           AxisFilters;                                                // 0x00B4   (0x0003)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x00B7   (0x0001)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PinchBrushOpProps
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              Depth;                                                      // 0x00B0   (0x0004)  
	bool                                               bPerpDamping;                                               // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BasePlaneBrushOpProps
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.PlaneBrushOpProps
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              Depth;                                                      // 0x00B0   (0x0004)  
	EPlaneBrushSideMode                                WhichSide;                                                  // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ViewAlignedPlaneBrushOpProps
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              Depth;                                                      // 0x00B0   (0x0004)  
	EPlaneBrushSideMode                                WhichSide;                                                  // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.FixedPlaneBrushOpProps
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              Depth;                                                      // 0x00B0   (0x0004)  
	EPlaneBrushSideMode                                WhichSide;                                                  // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.StandardSculptBrushOpProps
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.ViewAlignedSculptBrushOpProps
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.SculptMaxBrushOpProps
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              MaxHeight;                                                  // 0x00B0   (0x0004)  
	bool                                               bUseFixedHeight;                                            // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              FixedHeight;                                                // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BaseSmoothBrushOpProps
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SmoothBrushOpProps
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SecondarySmoothBrushOpProps
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SmoothFillBrushOpProps
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.FlattenBrushOpProps
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
	float                                              Depth;                                                      // 0x00B0   (0x0004)  
	EPlaneBrushSideMode                                WhichSide;                                                  // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EraseBrushOpProps
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{ 
public:
	float                                              Strength;                                                   // 0x00A8   (0x0004)  
	float                                              Falloff;                                                    // 0x00AC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshSelectionToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOffsetMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshSelectionToolProperties
/// Size: 0x00E0 (224 bytes) (0x0000A8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UOffsetMeshSelectionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             OffsetDistance;                                             // 0x00A8   (0x0008)  
	EOffsetMeshSelectionDirectionMode                  Direction;                                                  // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	int32_t                                            NumSubdivisions;                                            // 0x00B4   (0x0004)  
	double                                             CreaseAngle;                                                // 0x00B8   (0x0008)  
	bool                                               bShellsToSolids;                                            // 0x00C0   (0x0001)  
	bool                                               bInferGroupsFromNbrs;                                       // 0x00C1   (0x0001)  
	bool                                               bGroupPerSubdivision;                                       // 0x00C2   (0x0001)  
	bool                                               bReplaceSelectionGroups;                                    // 0x00C3   (0x0001)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	double                                             UVScale;                                                    // 0x00C8   (0x0008)  
	bool                                               bUVIslandPerGroup;                                          // 0x00D0   (0x0001)  
	bool                                               bInferMaterialID;                                           // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00D2   (0x0002)  MISSED
	int32_t                                            SetMaterialID;                                              // 0x00D4   (0x0004)  
	bool                                               bShowInputMaterials;                                        // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshSelectionTool
/// Size: 0x0848 (2120 bytes) (0x000110 - 0x000848) align 8 MaxSize: 0x0848
class UOffsetMeshSelectionTool : public USingleTargetWithSelectionTool
{ 
public:
	class UOffsetMeshSelectionToolProperties*          OffsetProperties;                                           // 0x0110   (0x0008)  
	unsigned char                                      UnknownData00_6[0x720];                                     // 0x0118   (0x0720)  MISSED
	class UPreviewMesh*                                SourcePreview;                                              // 0x0838   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         EditCompute;                                                // 0x0840   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.PatternToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPatternToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.PatternToolSettings
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UPatternToolSettings : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            Seed;                                                       // 0x00A8   (0x0004)  
	bool                                               bProjectElementsDown;                                       // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              ProjectionOffset;                                           // 0x00B0   (0x0004)  
	bool                                               bHideSources;                                               // 0x00B4   (0x0001)  
	bool                                               bUseRelativeTransforms;                                     // 0x00B5   (0x0001)  
	EPatternToolShape                                  Shape;                                                      // 0x00B6   (0x0001)  
	EPatternToolSingleAxis                             SingleAxis;                                                 // 0x00B7   (0x0001)  
	EPatternToolSinglePlane                            SinglePlane;                                                // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternTool_BoundingBoxSettings
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UPatternTool_BoundingBoxSettings : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bIgnoreTransforms;                                          // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              Adjustment;                                                 // 0x00AC   (0x0004)  
	bool                                               bVisualize;                                                 // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternTool_LinearSettings
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UPatternTool_LinearSettings : public UInteractiveToolPropertySet
{ 
public:
	EPatternToolAxisSpacingMode                        SpacingMode;                                                // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	int32_t                                            Count;                                                      // 0x00AC   (0x0004)  
	double                                             StepSize;                                                   // 0x00B0   (0x0008)  
	double                                             Extent;                                                     // 0x00B8   (0x0008)  
	bool                                               bCentered;                                                  // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternTool_GridSettings
/// Size: 0x00E0 (224 bytes) (0x0000A8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPatternTool_GridSettings : public UInteractiveToolPropertySet
{ 
public:
	EPatternToolAxisSpacingMode                        SpacingX;                                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	int32_t                                            CountX;                                                     // 0x00AC   (0x0004)  
	double                                             StepSizeX;                                                  // 0x00B0   (0x0008)  
	double                                             ExtentX;                                                    // 0x00B8   (0x0008)  
	bool                                               bCenteredX;                                                 // 0x00C0   (0x0001)  
	EPatternToolAxisSpacingMode                        SpacingY;                                                   // 0x00C1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00C2   (0x0002)  MISSED
	int32_t                                            CountY;                                                     // 0x00C4   (0x0004)  
	double                                             StepSizeY;                                                  // 0x00C8   (0x0008)  
	double                                             ExtentY;                                                    // 0x00D0   (0x0008)  
	bool                                               bCenteredY;                                                 // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternTool_RadialSettings
/// Size: 0x00E0 (224 bytes) (0x0000A8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UPatternTool_RadialSettings : public UInteractiveToolPropertySet
{ 
public:
	EPatternToolAxisSpacingMode                        SpacingMode;                                                // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	int32_t                                            Count;                                                      // 0x00AC   (0x0004)  
	double                                             StepSize;                                                   // 0x00B0   (0x0008)  
	double                                             Radius;                                                     // 0x00B8   (0x0008)  
	double                                             StartAngle;                                                 // 0x00C0   (0x0008)  
	double                                             EndAngle;                                                   // 0x00C8   (0x0008)  
	double                                             AngleShift;                                                 // 0x00D0   (0x0008)  
	bool                                               bOriented;                                                  // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00D9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternTool_RotationSettings
/// Size: 0x00F8 (248 bytes) (0x0000A8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UPatternTool_RotationSettings : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bInterpolate;                                               // 0x00A8   (0x0001)  
	bool                                               bJitter;                                                    // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
	FRotator                                           StartRotation;                                              // 0x00B0   (0x0018)  
	FRotator                                           EndRotation;                                                // 0x00C8   (0x0018)  
	FRotator                                           Jitter;                                                     // 0x00E0   (0x0018)  
};

/// Class /Script/MeshModelingToolsExp.PatternTool_TranslationSettings
/// Size: 0x00F8 (248 bytes) (0x0000A8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UPatternTool_TranslationSettings : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bInterpolate;                                               // 0x00A8   (0x0001)  
	bool                                               bJitter;                                                    // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
	FVector                                            StartTranslation;                                           // 0x00B0   (0x0018)  
	FVector                                            EndTranslation;                                             // 0x00C8   (0x0018)  
	FVector                                            Jitter;                                                     // 0x00E0   (0x0018)  
};

/// Class /Script/MeshModelingToolsExp.PatternTool_ScaleSettings
/// Size: 0x00F8 (248 bytes) (0x0000A8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UPatternTool_ScaleSettings : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bProportional;                                              // 0x00A8   (0x0001)  
	bool                                               bInterpolate;                                               // 0x00A9   (0x0001)  
	bool                                               bJitter;                                                    // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00AB   (0x0005)  MISSED
	FVector                                            StartScale;                                                 // 0x00B0   (0x0018)  
	FVector                                            EndScale;                                                   // 0x00C8   (0x0018)  
	FVector                                            Jitter;                                                     // 0x00E0   (0x0018)  
};

/// Class /Script/MeshModelingToolsExp.PatternTool_OutputSettings
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UPatternTool_OutputSettings : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bSeparateActors;                                            // 0x00A8   (0x0001)  
	bool                                               bConvertToDynamic;                                          // 0x00A9   (0x0001)  
	bool                                               bCreateISMCs;                                               // 0x00AA   (0x0001)  
	bool                                               bHaveStaticMeshes;                                          // 0x00AB   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PatternTool
/// Size: 0x04B0 (1200 bytes) (0x0000B8 - 0x0004B0) align 16 MaxSize: 0x04B0
class UPatternTool : public UMultiSelectionMeshEditingTool
{ 
public:
	class UPatternToolSettings*                        Settings;                                                   // 0x00B8   (0x0008)  
	class UPatternTool_BoundingBoxSettings*            BoundingBoxSettings;                                        // 0x00C0   (0x0008)  
	class UPatternTool_LinearSettings*                 LinearSettings;                                             // 0x00C8   (0x0008)  
	class UPatternTool_GridSettings*                   GridSettings;                                               // 0x00D0   (0x0008)  
	class UPatternTool_RadialSettings*                 RadialSettings;                                             // 0x00D8   (0x0008)  
	class UPatternTool_RotationSettings*               RotationSettings;                                           // 0x00E0   (0x0008)  
	class UPatternTool_TranslationSettings*            TranslationSettings;                                        // 0x00E8   (0x0008)  
	class UPatternTool_ScaleSettings*                  ScaleSettings;                                              // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData00_6[0x58];                                      // 0x00F8   (0x0058)  MISSED
	class UPatternTool_OutputSettings*                 OutputSettings;                                             // 0x0150   (0x0008)  
	unsigned char                                      UnknownData01_6[0x48];                                      // 0x0158   (0x0048)  MISSED
	class UTransformProxy*                             PatternGizmoProxy;                                          // 0x01A0   (0x0008)  
	class UCombinedTransformGizmo*                     PatternGizmo;                                               // 0x01A8   (0x0008)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x01B0   (0x0018)  MISSED
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x01C8   (0x0008)  
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x01D0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x1E0];                                     // 0x01D8   (0x01E0)  MISSED
	SDK_UNDEFINED(80,1258) /* TSet<UPrimitiveComponent*> */ __um(AllComponents);                                   // 0x03B8   (0x0050)  
	unsigned char                                      UnknownData04_6[0xA0];                                      // 0x0408   (0x00A0)  MISSED
	class UPreviewGeometry*                            PreviewGeometry;                                            // 0x04A8   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.MeshConstraintProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPreserveSharpEdges;                                        // 0x00A8   (0x0001)  
	EMeshBoundaryConstraint                            MeshBoundaryConstraint;                                     // 0x00A9   (0x0001)  
	EGroupBoundaryConstraint                           GroupBoundaryConstraint;                                    // 0x00AA   (0x0001)  
	EMaterialBoundaryConstraint                        MaterialBoundaryConstraint;                                 // 0x00AB   (0x0001)  
	bool                                               bPreventNormalFlips;                                        // 0x00AC   (0x0001)  
	bool                                               bPreventTinyTriangles;                                      // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x00AE   (0x0002)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RemeshProperties
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class URemeshProperties : public UMeshConstraintProperties
{ 
public:
	float                                              SmoothingStrength;                                          // 0x00B0   (0x0004)  
	bool                                               bFlips;                                                     // 0x00B4   (0x0001)  
	bool                                               bSplits;                                                    // 0x00B5   (0x0001)  
	bool                                               bCollapses;                                                 // 0x00B6   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x00B7   (0x0001)  MISSED
};

/// Class /Script/MeshModelingToolsExp.AddPatchToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.AddPatchToolProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Width;                                                      // 0x00A8   (0x0004)  
	float                                              Rotation;                                                   // 0x00AC   (0x0004)  
	int32_t                                            Subdivisions;                                               // 0x00B0   (0x0004)  
	float                                              Shift;                                                      // 0x00B4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.AddPatchTool
/// Size: 0x0128 (296 bytes) (0x0000A0 - 0x000128) align 8 MaxSize: 0x0128
class UAddPatchTool : public USingleClickTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00A0   (0x0008)  MISSED
	class UAddPatchToolProperties*                     ShapeSettings;                                              // 0x00A8   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x00B0   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x00C0   (0x0068)  MISSED
};

/// Class /Script/MeshModelingToolsExp.AlignObjectsToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAlignObjectsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.AlignObjectsToolProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EAlignObjectsAlignTypes                            AlignType;                                                  // 0x00A8   (0x0004)  
	EAlignObjectsAlignToOptions                        AlignTo;                                                    // 0x00AC   (0x0004)  
	EAlignObjectsBoxPoint                              BoxPosition;                                                // 0x00B0   (0x0004)  
	bool                                               bAlignX;                                                    // 0x00B4   (0x0001)  
	bool                                               bAlignY;                                                    // 0x00B5   (0x0001)  
	bool                                               bAlignZ;                                                    // 0x00B6   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x00B7   (0x0001)  MISSED
};

/// Class /Script/MeshModelingToolsExp.AlignObjectsTool
/// Size: 0x0158 (344 bytes) (0x0000B8 - 0x000158) align 8 MaxSize: 0x0158
class UAlignObjectsTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UAlignObjectsToolProperties*                 AlignProps;                                                 // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x90];                                      // 0x00C8   (0x0090)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBakeMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties
/// Size: 0x0138 (312 bytes) (0x0000A8 - 0x000138) align 8 MaxSize: 0x0138
class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            MapTypes;                                                   // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FString                                            MapPreview;                                                 // 0x00B0   (0x0010)  
	EBakeTextureResolution                             Resolution;                                                 // 0x00C0   (0x0004)  
	EBakeTextureBitDepth                               BitDepth;                                                   // 0x00C4   (0x0004)  
	EBakeTextureSamplesPerPixel                        SamplesPerPixel;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class UTexture2D*                                  SampleFilterMask;                                           // 0x00D0   (0x0008)  
	TArray<FString>                                    MapPreviewNamesList;                                        // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x00E8   (0x0050)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
	// TArray<FString> GetMapPreviewNamesFunc();                                                                                // [0x178d3e0] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeTool
/// Size: 0x0490 (1168 bytes) (0x0000B8 - 0x000490) align 16 MaxSize: 0x0490
class UBakeMeshAttributeTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UBakeOcclusionMapToolProperties*             OcclusionSettings;                                          // 0x00C0   (0x0008)  
	class UBakeCurvatureMapToolProperties*             CurvatureSettings;                                          // 0x00C8   (0x0008)  
	class UBakeTexture2DProperties*                    TextureSettings;                                            // 0x00D0   (0x0008)  
	class UBakeMultiTexture2DProperties*               MultiTextureSettings;                                       // 0x00D8   (0x0008)  
	class UMaterialInstanceDynamic*                    WorkingPreviewMaterial;                                     // 0x00E0   (0x0008)  
	class UMaterialInstanceDynamic*                    ErrorPreviewMaterial;                                       // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x3A0];                                     // 0x00F0   (0x03A0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsToolBase
/// Size: 0x0600 (1536 bytes) (0x000490 - 0x000600) align 16 MaxSize: 0x0600
class UBakeMeshAttributeMapsToolBase : public UBakeMeshAttributeTool
{ 
public:
	class UBakeVisualizationProperties*                VisualizationProps;                                         // 0x0490   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x0498   (0x0008)  
	class UMaterialInstanceDynamic*                    PreviewMaterial;                                            // 0x04A0   (0x0008)  
	class UMaterialInstanceDynamic*                    BentNormalPreviewMaterial;                                  // 0x04A8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x50];                                      // 0x04B0   (0x0050)  MISSED
	TMap<EBakeMapType, class UTexture2D*>              CachedMaps;                                                 // 0x0500   (0x0050)  
	unsigned char                                      UnknownData01_6[0x98];                                      // 0x0550   (0x0098)  MISSED
	class UTexture2D*                                  EmptyNormalMap;                                             // 0x05E8   (0x0008)  
	class UTexture2D*                                  EmptyColorMapBlack;                                         // 0x05F0   (0x0008)  
	class UTexture2D*                                  EmptyColorMapWhite;                                         // 0x05F8   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsTool
/// Size: 0x0670 (1648 bytes) (0x000600 - 0x000670) align 16 MaxSize: 0x0670
class UBakeMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{ 
public:
	class UBakeInputMeshProperties*                    InputMeshSettings;                                          // 0x0600   (0x0008)  
	class UBakeMeshAttributeMapsToolProperties*        Settings;                                                   // 0x0608   (0x0008)  
	class UBakeMeshAttributeMapsResultToolProperties*  ResultSettings;                                             // 0x0610   (0x0008)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0618   (0x0058)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeMapsResultToolProperties
/// Size: 0x00F8 (248 bytes) (0x0000A8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UBakeMeshAttributeMapsResultToolProperties : public UInteractiveToolPropertySet
{ 
public:
	TMap<EBakeMapType, class UTexture2D*>              Result;                                                     // 0x00A8   (0x0050)  
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeVertexToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBakeMeshAttributeVertexToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeVertexToolProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UBakeMeshAttributeVertexToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EBakeVertexOutput                                  OutputMode;                                                 // 0x00A8   (0x0004)  
	int32_t                                            OutputType;                                                 // 0x00AC   (0x0004)  
	int32_t                                            OutputTypeR;                                                // 0x00B0   (0x0004)  
	int32_t                                            OutputTypeG;                                                // 0x00B4   (0x0004)  
	int32_t                                            OutputTypeB;                                                // 0x00B8   (0x0004)  
	int32_t                                            OutputTypeA;                                                // 0x00BC   (0x0004)  
	EBakeVertexChannel                                 PreviewMode;                                                // 0x00C0   (0x0004)  
	bool                                               bSplitAtNormalSeams;                                        // 0x00C4   (0x0001)  
	bool                                               bSplitAtUVSeams;                                            // 0x00C5   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x00C6   (0x0002)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeMeshAttributeVertexTool
/// Size: 0x0590 (1424 bytes) (0x000490 - 0x000590) align 16 MaxSize: 0x0590
class UBakeMeshAttributeVertexTool : public UBakeMeshAttributeTool
{ 
public:
	class UBakeInputMeshProperties*                    InputMeshSettings;                                          // 0x0490   (0x0008)  
	class UBakeMeshAttributeVertexToolProperties*      Settings;                                                   // 0x0498   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x04A0   (0x0008)  
	class UMaterialInstanceDynamic*                    PreviewMaterial;                                            // 0x04A8   (0x0008)  
	class UMaterialInstanceDynamic*                    PreviewAlphaMaterial;                                       // 0x04B0   (0x0008)  
	unsigned char                                      UnknownData00_7[0xD8];                                      // 0x04B8   (0x00D8)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBakeMultiMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties
/// Size: 0x0138 (312 bytes) (0x0000A8 - 0x000138) align 8 MaxSize: 0x0138
class UBakeMultiMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            MapTypes;                                                   // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FString                                            MapPreview;                                                 // 0x00B0   (0x0010)  
	EBakeTextureResolution                             Resolution;                                                 // 0x00C0   (0x0004)  
	EBakeTextureBitDepth                               BitDepth;                                                   // 0x00C4   (0x0004)  
	EBakeTextureSamplesPerPixel                        SamplesPerPixel;                                            // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class UTexture2D*                                  SampleFilterMask;                                           // 0x00D0   (0x0008)  
	TArray<FString>                                    MapPreviewNamesList;                                        // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x50];                                      // 0x00E8   (0x0050)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsToolProperties.GetMapPreviewNamesFunc
	// TArray<FString> GetMapPreviewNamesFunc();                                                                                // [0x178d3e0] Final|Native|Public  
};

/// Struct /Script/MeshModelingToolsExp.BakeMultiMeshDetailProperties
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FBakeMultiMeshDetailProperties
{ 
	class UStaticMesh*                                 SourceMesh;                                                 // 0x0000   (0x0008)  
	class UTexture2D*                                  SourceTexture;                                              // 0x0008   (0x0008)  
	int32_t                                            SourceTextureUVLayer;                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeMultiMeshInputToolProperties
/// Size: 0x00F8 (248 bytes) (0x0000A8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UBakeMultiMeshInputToolProperties : public UInteractiveToolPropertySet
{ 
public:
	class UStaticMesh*                                 TargetStaticMesh;                                           // 0x00A8   (0x0008)  
	class USkeletalMesh*                               TargetSkeletalMesh;                                         // 0x00B0   (0x0008)  
	class AActor*                                      TargetDynamicMesh;                                          // 0x00B8   (0x0008)  
	FString                                            TargetUVLayer;                                              // 0x00C0   (0x0010)  
	TArray<FBakeMultiMeshDetailProperties>             SourceMeshes;                                               // 0x00D0   (0x0010)  
	float                                              ProjectionDistance;                                         // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	TArray<FString>                                    TargetUVLayerNamesList;                                     // 0x00E8   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeMultiMeshInputToolProperties.GetTargetUVLayerNamesFunc
	// TArray<FString> GetTargetUVLayerNamesFunc();                                                                             // [0x178d480] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeMultiMeshAttributeMapsTool
/// Size: 0x06B0 (1712 bytes) (0x000600 - 0x0006B0) align 16 MaxSize: 0x06B0
class UBakeMultiMeshAttributeMapsTool : public UBakeMeshAttributeMapsToolBase
{ 
public:
	class UBakeMultiMeshAttributeMapsToolProperties*   Settings;                                                   // 0x0600   (0x0008)  
	class UBakeMultiMeshInputToolProperties*           InputMeshSettings;                                          // 0x0608   (0x0008)  
	class UBakeMeshAttributeMapsResultToolProperties*  ResultSettings;                                             // 0x0610   (0x0008)  
	unsigned char                                      UnknownData00_7[0x98];                                      // 0x0618   (0x0098)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeRenderCaptureResults
/// Size: 0x00F0 (240 bytes) (0x0000A8 - 0x0000F0) align 8 MaxSize: 0x00F0
class UBakeRenderCaptureResults : public UInteractiveToolPropertySet
{ 
public:
	class UTexture2D*                                  BaseColorMap;                                               // 0x00A8   (0x0008)  
	class UTexture2D*                                  NormalMap;                                                  // 0x00B0   (0x0008)  
	class UTexture2D*                                  PackedMRSMap;                                               // 0x00B8   (0x0008)  
	class UTexture2D*                                  MetallicMap;                                                // 0x00C0   (0x0008)  
	class UTexture2D*                                  RoughnessMap;                                               // 0x00C8   (0x0008)  
	class UTexture2D*                                  SpecularMap;                                                // 0x00D0   (0x0008)  
	class UTexture2D*                                  EmissiveMap;                                                // 0x00D8   (0x0008)  
	class UTexture2D*                                  OpacityMap;                                                 // 0x00E0   (0x0008)  
	class UTexture2D*                                  SubsurfaceColorMap;                                         // 0x00E8   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.BakeRenderCaptureToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBakeRenderCaptureToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.RenderCaptureProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class URenderCaptureProperties : public UInteractiveToolPropertySet
{ 
public:
	EBakeTextureResolution                             Resolution;                                                 // 0x00A8   (0x0004)  
	bool                                               bBaseColorMap;                                              // 0x00AC   (0x0001)  
	bool                                               bNormalMap;                                                 // 0x00AD   (0x0001)  
	bool                                               bPackedMRSMap;                                              // 0x00AE   (0x0001)  
	bool                                               bMetallicMap;                                               // 0x00AF   (0x0001)  
	bool                                               bRoughnessMap;                                              // 0x00B0   (0x0001)  
	bool                                               bSpecularMap;                                               // 0x00B1   (0x0001)  
	bool                                               bEmissiveMap;                                               // 0x00B2   (0x0001)  
	bool                                               bOpacityMap;                                                // 0x00B3   (0x0001)  
	bool                                               bSubsurfaceColorMap;                                        // 0x00B4   (0x0001)  
	bool                                               bAntiAliasing;                                              // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00B6   (0x0002)  MISSED
	float                                              CaptureFieldOfView;                                         // 0x00B8   (0x0004)  
	float                                              NearPlaneDist;                                              // 0x00BC   (0x0004)  
	bool                                               bDeviceDepthMap;                                            // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeRenderCaptureToolProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UBakeRenderCaptureToolProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            MapPreview;                                                 // 0x00A8   (0x0010)  
	TArray<FString>                                    MapPreviewNamesList;                                        // 0x00B8   (0x0010)  
	EBakeTextureSamplesPerPixel                        SamplesPerPixel;                                            // 0x00C8   (0x0004)  
	EBakeTextureResolution                             TextureSize;                                                // 0x00CC   (0x0004)  
	float                                              ValidSampleDepthThreshold;                                  // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00D4   (0x0004)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeRenderCaptureToolProperties.GetMapPreviewNamesFunc
	// TArray<FString> GetMapPreviewNamesFunc();                                                                                // [0x178d410] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.BakeRenderCaptureInputToolProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UBakeRenderCaptureInputToolProperties : public UInteractiveToolPropertySet
{ 
public:
	class UStaticMesh*                                 TargetStaticMesh;                                           // 0x00A8   (0x0008)  
	FString                                            TargetUVLayer;                                              // 0x00B0   (0x0010)  
	TArray<FString>                                    TargetUVLayerNamesList;                                     // 0x00C0   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.BakeRenderCaptureInputToolProperties.GetTargetUVLayerNamesFunc
	// TArray<FString> GetTargetUVLayerNamesFunc();                                                                             // [0x17629d0] Final|Native|Public|Const 
	// Function /Script/MeshModelingToolsExp.BakeRenderCaptureInputToolProperties.GetTargetUVLayerIndex
	// int32_t GetTargetUVLayerIndex();                                                                                         // [0x178d440] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.BakeRenderCaptureVisualizationProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UBakeRenderCaptureVisualizationProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPreviewAsMaterial;                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              Brightness;                                                 // 0x00AC   (0x0004)  
	float                                              SSBrightness;                                               // 0x00B0   (0x0004)  
	float                                              EmissiveScale;                                              // 0x00B4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.BakeRenderCaptureTool
/// Size: 0x0560 (1376 bytes) (0x0000B8 - 0x000560) align 16 MaxSize: 0x0560
class UBakeRenderCaptureTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x00B8   (0x0010)  MISSED
	TArray<class AActor*>                              Actors;                                                     // 0x00C8   (0x0010)  
	class UBakeRenderCaptureToolProperties*            Settings;                                                   // 0x00D8   (0x0008)  
	class URenderCaptureProperties*                    RenderCaptureProperties;                                    // 0x00E0   (0x0008)  
	class UBakeRenderCaptureInputToolProperties*       InputMeshSettings;                                          // 0x00E8   (0x0008)  
	class UBakeRenderCaptureVisualizationProperties*   VisualizationProps;                                         // 0x00F0   (0x0008)  
	class UBakeRenderCaptureResults*                   ResultSettings;                                             // 0x00F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x330];                                     // 0x0100   (0x0330)  MISSED
	class UTexture2D*                                  EmptyNormalMap;                                             // 0x0430   (0x0008)  
	class UTexture2D*                                  EmptyColorMapBlack;                                         // 0x0438   (0x0008)  
	class UTexture2D*                                  EmptyColorMapWhite;                                         // 0x0440   (0x0008)  
	class UTexture2D*                                  EmptyEmissiveMap;                                           // 0x0448   (0x0008)  
	class UTexture2D*                                  EmptyOpacityMap;                                            // 0x0450   (0x0008)  
	class UTexture2D*                                  EmptySubsurfaceColorMap;                                    // 0x0458   (0x0008)  
	class UTexture2D*                                  EmptyPackedMRSMap;                                          // 0x0460   (0x0008)  
	class UTexture2D*                                  EmptyRoughnessMap;                                          // 0x0468   (0x0008)  
	class UTexture2D*                                  EmptyMetallicMap;                                           // 0x0470   (0x0008)  
	class UTexture2D*                                  EmptySpecularMap;                                           // 0x0478   (0x0008)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0480   (0x0008)  MISSED
	class UMaterialInstanceDynamic*                    WorkingPreviewMaterial;                                     // 0x0488   (0x0008)  
	class UMaterialInstanceDynamic*                    ErrorPreviewMaterial;                                       // 0x0490   (0x0008)  
	class UMaterialInstanceDynamic*                    PreviewMaterialRC;                                          // 0x0498   (0x0008)  
	class UMaterialInstanceDynamic*                    PreviewMaterialPackedRC;                                    // 0x04A0   (0x0008)  
	class UMaterialInstanceDynamic*                    PreviewMaterialRC_Subsurface;                               // 0x04A8   (0x0008)  
	class UMaterialInstanceDynamic*                    PreviewMaterialPackedRC_Subsurface;                         // 0x04B0   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x04B8   (0x0008)  
	unsigned char                                      UnknownData03_7[0xA0];                                      // 0x04C0   (0x00A0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeTransformToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UBakeTransformToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.BakeTransformToolProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bBakeRotation;                                              // 0x00A8   (0x0001)  
	EBakeScaleMethod                                   BakeScale;                                                  // 0x00A9   (0x0001)  
	bool                                               bRecenterPivot;                                             // 0x00AA   (0x0001)  
	bool                                               bAllowNoScale;                                              // 0x00AB   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.BakeTransformTool
/// Size: 0x00D0 (208 bytes) (0x0000B8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UBakeTransformTool : public UMultiSelectionMeshEditingTool
{ 
public:
	class UBakeTransformToolProperties*                BasicProperties;                                            // 0x00B8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00C0   (0x0010)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ConvertMeshesToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UConvertMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.ConvertMeshesToolProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UConvertMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bTransferMaterials;                                         // 0x00A8   (0x0001)  
	bool                                               bShowTransferMaterials;                                     // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ConvertMeshesTool
/// Size: 0x00D0 (208 bytes) (0x0000B8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UConvertMeshesTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UConvertMeshesToolProperties*                BasicProperties;                                            // 0x00C0   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00C8   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.ConvertToPolygonsToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UConvertToPolygonsToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.ConvertToPolygonsToolProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EConvertToPolygonsMode                             ConversionMode;                                             // 0x00A8   (0x0004)  
	float                                              AngleTolerance;                                             // 0x00AC   (0x0004)  
	int32_t                                            NumPoints;                                                  // 0x00B0   (0x0004)  
	bool                                               bSplitExisting;                                             // 0x00B4   (0x0001)  
	bool                                               bNormalWeighted;                                            // 0x00B5   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00B6   (0x0002)  MISSED
	float                                              NormalWeighting;                                            // 0x00B8   (0x0004)  
	float                                              QuadAdjacencyWeight;                                        // 0x00BC   (0x0004)  
	float                                              QuadMetricClamp;                                            // 0x00C0   (0x0004)  
	int32_t                                            QuadSearchRounds;                                           // 0x00C4   (0x0004)  
	bool                                               bRespectUVSeams;                                            // 0x00C8   (0x0001)  
	bool                                               bRespectHardNormals;                                        // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00CA   (0x0002)  MISSED
	int32_t                                            MinGroupSize;                                               // 0x00CC   (0x0004)  
	bool                                               bCalculateNormals;                                          // 0x00D0   (0x0001)  
	bool                                               bShowGroupColors;                                           // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x00D2   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.OutputPolygroupLayerProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UOutputPolygroupLayerProperties : public UInteractiveToolPropertySet
{ 
public:
	FName                                              GroupLayer;                                                 // 0x00A8   (0x0008)  
	TArray<FString>                                    OptionsList;                                                // 0x00B0   (0x0010)  
	bool                                               bShowNewLayerName;                                          // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00C1   (0x0007)  MISSED
	FString                                            NewLayerName;                                               // 0x00C8   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.OutputPolygroupLayerProperties.GetGroupOptionsList
	// TArray<FString> GetGroupOptionsList();                                                                                   // [0x17ea0d0] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.ConvertToPolygonsOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UConvertToPolygonsOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UConvertToPolygonsTool*                      ConvertToPolygonsTool;                                      // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.ConvertToPolygonsTool
/// Size: 0x0110 (272 bytes) (0x0000B8 - 0x000110) align 8 MaxSize: 0x0110
class UConvertToPolygonsTool : public USingleSelectionMeshEditingTool
{ 
public:
	class UConvertToPolygonsToolProperties*            Settings;                                                   // 0x00B8   (0x0008)  
	class UPolygroupLayersProperties*                  CopyFromLayerProperties;                                    // 0x00C0   (0x0008)  
	class UOutputPolygroupLayerProperties*             OutputProperties;                                           // 0x00C8   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         PreviewCompute;                                             // 0x00D0   (0x0008)  
	class UPreviewGeometry*                            PreviewGeometry;                                            // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x00E0   (0x0030)  MISSED
};

/// Class /Script/MeshModelingToolsExp.CubeGridToolBuilder
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UCubeGridToolBuilder : public UInteractiveToolWithToolTargetsBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.CubeGridToolProperties
/// Size: 0x01A8 (424 bytes) (0x0000A8 - 0x0001A8) align 8 MaxSize: 0x01A8
class UCubeGridToolProperties : public UInteractiveToolPropertySet
{ 
public:
	FVector                                            GridFrameOrigin;                                            // 0x00A8   (0x0018)  
	FRotator                                           GridFrameOrientation;                                       // 0x00C0   (0x0018)  
	bool                                               bShowGizmo;                                                 // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x00D9   (0x000F)  MISSED
	char                                               GridPower;                                                  // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	double                                             CurrentBlockSize;                                           // 0x00F0   (0x0008)  
	int32_t                                            BlocksPerStep;                                              // 0x00F8   (0x0004)  
	bool                                               bPowerOfTwoBlockSizes;                                      // 0x00FC   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00FD   (0x0003)  MISSED
	double                                             BlockBaseSize;                                              // 0x0100   (0x0008)  
	bool                                               bCrosswiseDiagonal;                                         // 0x0108   (0x0001)  
	bool                                               bKeepSideGroups;                                            // 0x0109   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x010A   (0x0006)  MISSED
	double                                             PlaneTolerance;                                             // 0x0110   (0x0008)  
	bool                                               bHitUnrelatedGeometry;                                      // 0x0118   (0x0001)  
	bool                                               bHitGridGroundPlaneIfCloser;                                // 0x0119   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x011A   (0x0002)  MISSED
	ECubeGridToolFaceSelectionMode                     FaceSelectionMode;                                          // 0x011C   (0x0004)  
	FString                                            ToggleCornerMode;                                           // 0x0120   (0x0010)  
	FString                                            PushPull;                                                   // 0x0130   (0x0010)  
	FString                                            ResizeGrid;                                                 // 0x0140   (0x0010)  
	FString                                            SlideSelection;                                             // 0x0150   (0x0010)  
	FString                                            FlipSelection;                                              // 0x0160   (0x0010)  
	FString                                            GridGizmo;                                                  // 0x0170   (0x0010)  
	FString                                            QuickShiftGizmo;                                            // 0x0180   (0x0010)  
	FString                                            AlignGizmo;                                                 // 0x0190   (0x0010)  
	bool                                               bInCornerMode;                                              // 0x01A0   (0x0001)  
	bool                                               bAllowedToEditGrid;                                         // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData05_7[0x6];                                       // 0x01A2   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.CubeGridToolActions
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UCubeGridToolActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00A8   (0x0008)  MISSED
	class AActor*                                      GridSourceActor;                                            // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.SlideForward
	// void SlideForward();                                                                                                     // [0x17ea6a0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.SlideBack
	// void SlideBack();                                                                                                        // [0x17ea640] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.ResetGridFromActor
	// void ResetGridFromActor();                                                                                               // [0x17ea580] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.Push
	// void Push();                                                                                                             // [0x17ea520] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.Pull
	// void Pull();                                                                                                             // [0x17ea4c0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.Flip
	// void Flip();                                                                                                             // [0x17ea010] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridToolActions.CornerMode
	// void CornerMode();                                                                                                       // [0x17e9f10] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.CubeGridDuringActivityActions
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UCubeGridDuringActivityActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.CubeGridDuringActivityActions.Done
	// void Done();                                                                                                             // [0x17e9fb0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.CubeGridDuringActivityActions.Cancel
	// void Cancel();                                                                                                           // [0x17e9e50] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.CubeGridTool
/// Size: 0x0620 (1568 bytes) (0x000098 - 0x000620) align 16 MaxSize: 0x0620
class UCubeGridTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0098   (0x0028)  MISSED
	class UCombinedTransformGizmo*                     GridGizmo;                                                  // 0x00C0   (0x0008)  
	class UDragAlignmentMechanic*                      GridGizmoAlignmentMechanic;                                 // 0x00C8   (0x0008)  
	class UTransformProxy*                             GridGizmoTransformProxy;                                    // 0x00D0   (0x0008)  
	class UPreviewGeometry*                            LineSets;                                                   // 0x00D8   (0x0008)  
	class UClickDragInputBehavior*                     ClickDragBehavior;                                          // 0x00E0   (0x0008)  
	class UMouseHoverBehavior*                         HoverBehavior;                                              // 0x00E8   (0x0008)  
	class ULocalSingleClickInputBehavior*              CtrlMiddleClickBehavior;                                    // 0x00F0   (0x0008)  
	class ULocalClickDragInputBehavior*                MiddleClickDragBehavior;                                    // 0x00F8   (0x0008)  
	class UCubeGridToolProperties*                     Settings;                                                   // 0x0100   (0x0008)  
	class UCubeGridToolActions*                        ToolActions;                                                // 0x0108   (0x0008)  
	class UCubeGridDuringActivityActions*              DuringActivityActions;                                      // 0x0110   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x0118   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x0120   (0x0008)  
	class UToolTarget*                                 Target;                                                     // 0x0128   (0x0008)  
	unsigned char                                      UnknownData01_6[0x180];                                     // 0x0130   (0x0180)  MISSED
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x02B0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x368];                                     // 0x02B8   (0x0368)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DeformMeshPolygonsToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.DeformMeshPolygonsTransformProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{ 
public:
	EGroupTopologyDeformationStrategy                  DeformationStrategy;                                        // 0x00A8   (0x0001)  
	EQuickTransformerMode                              TransformMode;                                              // 0x00A9   (0x0001)  
	bool                                               bSelectFaces;                                               // 0x00AA   (0x0001)  
	bool                                               bSelectEdges;                                               // 0x00AB   (0x0001)  
	bool                                               bSelectVertices;                                            // 0x00AC   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AE   (0x0002)  MISSED
	EWeightScheme                                      SelectedWeightScheme;                                       // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	double                                             HandleWeight;                                               // 0x00B8   (0x0008)  
	bool                                               bPostFixHandles;                                            // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00C1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DeformMeshPolygonsTool
/// Size: 0x1810 (6160 bytes) (0x000100 - 0x001810) align 16 MaxSize: 0x1810
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0100   (0x0008)  MISSED
	class AInternalToolFrameworkActor*                 PreviewMeshActor;                                           // 0x0108   (0x0008)  
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0110   (0x0008)  
	class UDeformMeshPolygonsTransformProperties*      TransformProps;                                             // 0x0118   (0x0008)  
	unsigned char                                      UnknownData01_7[0x16F0];                                    // 0x0120   (0x16F0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshCommonProperties
/// Size: 0x00E0 (224 bytes) (0x0000A8 - 0x0000E0) align 8 MaxSize: 0x00E0
class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{ 
public:
	EDisplaceMeshToolDisplaceType                      DisplacementType;                                           // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              DisplaceIntensity;                                          // 0x00AC   (0x0004)  
	int32_t                                            RandomSeed;                                                 // 0x00B0   (0x0004)  
	EDisplaceMeshToolSubdivisionType                   SubdivisionType;                                            // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	int32_t                                            Subdivisions;                                               // 0x00B8   (0x0004)  
	FName                                              WeightMap;                                                  // 0x00BC   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FString>                                    WeightMapsList;                                             // 0x00C8   (0x0010)  
	bool                                               bInvertWeightMap;                                           // 0x00D8   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x00D9   (0x0001)  
	bool                                               bDisableSizeWarning;                                        // 0x00DA   (0x0001)  
	unsigned char                                      UnknownData03_7[0x5];                                       // 0x00DB   (0x0005)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.DisplaceMeshCommonProperties.GetWeightMapsFunc
	// TArray<FString> GetWeightMapsFunc();                                                                                     // [0x17ea330] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.SelectiveTessellationProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class USelectiveTessellationProperties : public UInteractiveToolPropertySet
{ 
public:
	EDisplaceMeshToolTriangleSelectionType             SelectionType;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	FName                                              ActiveMaterial;                                             // 0x00AC   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00B4   (0x0004)  MISSED
	TArray<FString>                                    MaterialIDList;                                             // 0x00B8   (0x0010)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.SelectiveTessellationProperties.GetMaterialIDsFunc
	// TArray<FString> GetMaterialIDsFunc();                                                                                    // [0x17ea200] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshTextureMapProperties
/// Size: 0x00F0 (240 bytes) (0x0000A8 - 0x0000F0) align 8 MaxSize: 0x00F0
class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{ 
public:
	class UTexture2D*                                  DisplacementMap;                                            // 0x00A8   (0x0008)  
	EDisplaceMeshToolChannelType                       Channel;                                                    // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              DisplacementMapBaseValue;                                   // 0x00B4   (0x0004)  
	FVector2D                                          UVScale;                                                    // 0x00B8   (0x0010)  
	FVector2D                                          UVOffset;                                                   // 0x00C8   (0x0010)  
	bool                                               bApplyAdjustmentCurve;                                      // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D9   (0x0007)  MISSED
	class UCurveFloat*                                 AdjustmentCurve;                                            // 0x00E0   (0x0008)  
	bool                                               bRecalcNormals;                                             // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00E9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshDirectionalFilterProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableFilter;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FVector                                            FilterDirection;                                            // 0x00B0   (0x0018)  
	float                                              FilterWidth;                                                // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Struct /Script/MeshModelingToolsExp.PerlinLayerProperties
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FPerlinLayerProperties
{ 
	float                                              Frequency;                                                  // 0x0000   (0x0004)  
	float                                              Intensity;                                                  // 0x0004   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshPerlinNoiseProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{ 
public:
	TArray<FPerlinLayerProperties>                     PerlinLayerProperties;                                      // 0x00A8   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshSineWaveProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SineWaveFrequency;                                          // 0x00A8   (0x0004)  
	float                                              SineWavePhaseShift;                                         // 0x00AC   (0x0004)  
	FVector                                            SineWaveDirection;                                          // 0x00B0   (0x0018)  
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDisplaceMeshToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.DisplaceMeshTool
/// Size: 0x0460 (1120 bytes) (0x0000B8 - 0x000460) align 16 MaxSize: 0x0460
class UDisplaceMeshTool : public USingleSelectionMeshEditingTool
{ 
public:
	class UDisplaceMeshCommonProperties*               CommonProperties;                                           // 0x00B8   (0x0008)  
	class UDisplaceMeshDirectionalFilterProperties*    DirectionalFilterProperties;                                // 0x00C0   (0x0008)  
	class UDisplaceMeshTextureMapProperties*           TextureMapProperties;                                       // 0x00C8   (0x0008)  
	class UDisplaceMeshPerlinNoiseProperties*          NoiseProperties;                                            // 0x00D0   (0x0008)  
	class UDisplaceMeshSineWaveProperties*             SineWaveProperties;                                         // 0x00D8   (0x0008)  
	class USelectiveTessellationProperties*            SelectiveTessellationProperties;                            // 0x00E0   (0x0008)  
	class UCurveFloat*                                 ActiveContrastCurveTarget;                                  // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x340];                                     // 0x00F0   (0x0340)  MISSED
	class AInternalToolFrameworkActor*                 PreviewMeshActor;                                           // 0x0430   (0x0008)  
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0438   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0440   (0x0020)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DrawPolyPathToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.DrawPolyPathProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{ 
public:
	EDrawPolyPathWidthMode                             WidthMode;                                                  // 0x00A8   (0x0004)  
	float                                              Width;                                                      // 0x00AC   (0x0004)  
	bool                                               bRoundedCorners;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	EDrawPolyPathRadiusMode                            RadiusMode;                                                 // 0x00B4   (0x0004)  
	float                                              CornerRadius;                                               // 0x00B8   (0x0004)  
	int32_t                                            RadialSlices;                                               // 0x00BC   (0x0004)  
	bool                                               bSinglePolyGroup;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C1   (0x0003)  MISSED
	EDrawPolyPathExtrudeMode                           ExtrudeMode;                                                // 0x00C4   (0x0004)  
	float                                              ExtrudeHeight;                                              // 0x00C8   (0x0004)  
	float                                              RampStartRatio;                                             // 0x00CC   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.DrawPolyPathExtrudeProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{ 
public:
	EDrawPolyPathExtrudeDirection                      Direction;                                                  // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DrawPolyPathTool
/// Size: 0x0280 (640 bytes) (0x000098 - 0x000280) align 16 MaxSize: 0x0280
class UDrawPolyPathTool : public UInteractiveTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x0098   (0x0018)  MISSED
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00B0   (0x0008)  
	class UDrawPolyPathProperties*                     TransformProps;                                             // 0x00B8   (0x0008)  
	class UDrawPolyPathExtrudeProperties*              ExtrudeProperties;                                          // 0x00C0   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0xC0];                                      // 0x00D0   (0x00C0)  MISSED
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x0190   (0x0008)  
	unsigned char                                      UnknownData02_6[0xC0];                                      // 0x0198   (0x00C0)  MISSED
	class UPolyEditPreviewMesh*                        EditPreview;                                                // 0x0258   (0x0008)  
	class UPlaneDistanceFromHitMechanic*               ExtrudeHeightMechanic;                                      // 0x0260   (0x0008)  
	class USpatialCurveDistanceMechanic*               CurveDistMechanic;                                          // 0x0268   (0x0008)  
	class UCollectSurfacePathMechanic*                 SurfacePathMechanic;                                        // 0x0270   (0x0008)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0278   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshBrushTool
/// Size: 0x02C0 (704 bytes) (0x000280 - 0x0002C0) align 8 MaxSize: 0x02C0
class UDynamicMeshBrushTool : public UBaseBrushTool
{ 
public:
	class UPreviewMesh*                                PreviewMesh;                                                // 0x0280   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0288   (0x0038)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshSculptToolBuilder
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Struct /Script/MeshModelingToolsExp.BrushToolRadius
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FBrushToolRadius
{ 
	EBrushToolSizeType                                 SizeType;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              AdaptiveSize;                                               // 0x0004   (0x0004)  
	float                                              WorldRadius;                                                // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x000C   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshBrushProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UDynamicMeshBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	FBrushToolRadius                                   BrushSize;                                                  // 0x00A8   (0x0014)  
	float                                              BrushFalloffAmount;                                         // 0x00BC   (0x0004)  
	float                                              Depth;                                                      // 0x00C0   (0x0004)  
	bool                                               bHitBackFaces;                                              // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00C5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshBrushSculptProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UDynamicMeshBrushSculptProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bIsRemeshingEnabled;                                        // 0x00A8   (0x0001)  
	EDynamicMeshSculptBrushType                        PrimaryBrushType;                                           // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AA   (0x0002)  MISSED
	float                                              PrimaryBrushSpeed;                                          // 0x00AC   (0x0004)  
	bool                                               bPreserveUVFlow;                                            // 0x00B0   (0x0001)  
	bool                                               bFreezeTarget;                                              // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00B2   (0x0002)  MISSED
	float                                              SmoothBrushSpeed;                                           // 0x00B4   (0x0004)  
	bool                                               bDetailPreservingSmooth;                                    // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DynamicSculptToolActions
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UDynamicSculptToolActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.DynamicSculptToolActions.DiscardAttributes
	// void DiscardAttributes();                                                                                                // [0x17e9f70] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.BrushRemeshProperties
/// Size: 0x00C8 (200 bytes) (0x0000B8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UBrushRemeshProperties : public URemeshProperties
{ 
public:
	bool                                               bEnableRemeshing;                                           // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            TriangleSize;                                               // 0x00BC   (0x0004)  
	int32_t                                            PreserveDetail;                                             // 0x00C0   (0x0004)  
	int32_t                                            Iterations;                                                 // 0x00C4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.FixedPlaneBrushProperties
/// Size: 0x00F0 (240 bytes) (0x0000A8 - 0x0000F0) align 16 MaxSize: 0x00F0
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPropertySetEnabled;                                        // 0x00A8   (0x0001)  
	bool                                               bShowGizmo;                                                 // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
	FVector                                            position;                                                   // 0x00B0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x00D0   (0x0020)  
};

/// Class /Script/MeshModelingToolsExp.DynamicMeshSculptTool
/// Size: 0x1010 (4112 bytes) (0x000100 - 0x001010) align 16 MaxSize: 0x1010
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{ 
public:
	class UDynamicMeshBrushProperties*                 BrushProperties;                                            // 0x0100   (0x0008)  
	class UDynamicMeshBrushSculptProperties*           SculptProperties;                                           // 0x0108   (0x0008)  
	class USculptMaxBrushProperties*                   SculptMaxBrushProperties;                                   // 0x0110   (0x0008)  
	class UKelvinBrushProperties*                      KelvinBrushProperties;                                      // 0x0118   (0x0008)  
	class UBrushRemeshProperties*                      RemeshProperties;                                           // 0x0120   (0x0008)  
	class UFixedPlaneBrushProperties*                  GizmoProperties;                                            // 0x0128   (0x0008)  
	class UMeshEditingViewProperties*                  ViewProperties;                                             // 0x0130   (0x0008)  
	class UDynamicSculptToolActions*                   SculptToolActions;                                          // 0x0138   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x0140   (0x0060)  MISSED
	class UBrushStampIndicator*                        BrushIndicator;                                             // 0x01A0   (0x0008)  
	class UMaterialInstanceDynamic*                    BrushIndicatorMaterial;                                     // 0x01A8   (0x0008)  
	class UPreviewMesh*                                BrushIndicatorMesh;                                         // 0x01B0   (0x0008)  
	class UOctreeDynamicMeshComponent*                 DynamicMeshComponent;                                       // 0x01B8   (0x0008)  
	class UMaterialInstanceDynamic*                    ActiveOverrideMaterial;                                     // 0x01C0   (0x0008)  
	unsigned char                                      UnknownData01_6[0xE28];                                     // 0x01C8   (0x0E28)  MISSED
	class UCombinedTransformGizmo*                     PlaneTransformGizmo;                                        // 0x0FF0   (0x0008)  
	class UTransformProxy*                             PlaneTransformProxy;                                        // 0x0FF8   (0x0008)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x1000   (0x0010)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EditNormalsToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEditNormalsToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.EditNormalsToolProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bRecomputeNormals;                                          // 0x00A8   (0x0001)  
	ENormalCalculationMethod                           NormalCalculationMethod;                                    // 0x00A9   (0x0001)  
	bool                                               bFixInconsistentNormals;                                    // 0x00AA   (0x0001)  
	bool                                               bInvertNormals;                                             // 0x00AB   (0x0001)  
	ESplitNormalMethod                                 SplitNormalMethod;                                          // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              SharpEdgeAngleThreshold;                                    // 0x00B0   (0x0004)  
	bool                                               bAllowSharpVertices;                                        // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EditNormalsAdvancedProperties
/// Size: 0x00A8 (168 bytes) (0x0000A8 - 0x0000A8) align 8 MaxSize: 0x00A8
class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.EditNormalsOperatorFactory
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UEditNormalsOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UEditNormalsTool*                            Tool;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EditNormalsTool
/// Size: 0x0150 (336 bytes) (0x0000B8 - 0x000150) align 16 MaxSize: 0x0150
class UEditNormalsTool : public UMultiSelectionMeshEditingTool
{ 
public:
	class UEditNormalsToolProperties*                  BasicProperties;                                            // 0x00B8   (0x0008)  
	class UEditNormalsAdvancedProperties*              AdvancedProperties;                                         // 0x00C0   (0x0008)  
	class UPolygroupLayersProperties*                  PolygroupLayerProperties;                                   // 0x00C8   (0x0008)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00D0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x70];                                      // 0x00E0   (0x0070)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EditPivotToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UEditPivotToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.EditPivotToolProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableSnapDragging;                                        // 0x00A8   (0x0001)  
	EEditPivotSnapDragRotationMode                     RotationMode;                                               // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00A8   (0x0008)  MISSED
	bool                                               bUseWorldBox;                                               // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.WorldOrigin
	// void WorldOrigin();                                                                                                      // [0x17ea760] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Top
	// void Top();                                                                                                              // [0x17ea700] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Right
	// void Right();                                                                                                            // [0x17ea5e0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Left
	// void Left();                                                                                                             // [0x17ea460] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Front
	// void Front();                                                                                                            // [0x17ea070] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Center
	// void Center();                                                                                                           // [0x17e9eb0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Bottom
	// void Bottom();                                                                                                           // [0x17e9df0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.EditPivotToolActionPropertySet.Back
	// void Back();                                                                                                             // [0x17e9d90] Final|Native|Public  
};

/// Struct /Script/MeshModelingToolsExp.EditPivotTarget
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FEditPivotTarget
{ 
	class UTransformProxy*                             TransformProxy;                                             // 0x0000   (0x0008)  
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0008   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.EditPivotTool
/// Size: 0x0230 (560 bytes) (0x0000B8 - 0x000230) align 16 MaxSize: 0x0230
class UEditPivotTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UEditPivotToolProperties*                    TransformProps;                                             // 0x00C0   (0x0008)  
	class UEditPivotToolActionPropertySet*             EditPivotActions;                                           // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_6[0xD0];                                      // 0x00D0   (0x00D0)  MISSED
	TArray<FEditPivotTarget>                           ActiveGizmos;                                               // 0x01A0   (0x0010)  
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x01B0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x78];                                      // 0x01B8   (0x0078)  MISSED
};

/// Class /Script/MeshModelingToolsExp.EditUVIslandsToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UEditUVIslandsToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.EditUVIslandsTool
/// Size: 0x04E0 (1248 bytes) (0x000100 - 0x0004E0) align 16 MaxSize: 0x04E0
class UEditUVIslandsTool : public UMeshSurfacePointTool
{ 
public:
	class UExistingMeshMaterialProperties*             MaterialSettings;                                           // 0x0100   (0x0008)  
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                            // 0x0108   (0x0008)  
	class AInternalToolFrameworkActor*                 PreviewMeshActor;                                           // 0x0110   (0x0008)  
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0118   (0x0008)  
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                          // 0x0120   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0128   (0x0008)  MISSED
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0130   (0x0008)  
	class UTransformProxy*                             TransformProxy;                                             // 0x0138   (0x0008)  
	unsigned char                                      UnknownData01_7[0x3A0];                                     // 0x0140   (0x03A0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.HoleFillToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UHoleFillToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SmoothHoleFillProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bConstrainToHoleInterior;                                   // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	int32_t                                            RemeshingExteriorRegionWidth;                               // 0x00AC   (0x0004)  
	int32_t                                            SmoothingExteriorRegionWidth;                               // 0x00B0   (0x0004)  
	int32_t                                            SmoothingInteriorRegionWidth;                               // 0x00B4   (0x0004)  
	float                                              InteriorSmoothness;                                         // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	double                                             FillDensityScalar;                                          // 0x00C0   (0x0008)  
	bool                                               bProjectDuringRemesh;                                       // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00C9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.HoleFillToolProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UHoleFillToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EHoleFillOpFillType                                FillType;                                                   // 0x00A8   (0x0001)  
	bool                                               bRemoveIsolatedTriangles;                                   // 0x00A9   (0x0001)  
	bool                                               bQuickFillSmallHoles;                                       // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x00AB   (0x0005)  MISSED
};

/// Class /Script/MeshModelingToolsExp.HoleFillToolActions
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UHoleFillToolActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.HoleFillToolActions.SelectAll
	// void SelectAll();                                                                                                        // [0x1856f20] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.HoleFillToolActions.Clear
	// void Clear();                                                                                                            // [0x18565c0] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.HoleFillStatisticsProperties
/// Size: 0x00F8 (248 bytes) (0x0000A8 - 0x0000F8) align 8 MaxSize: 0x00F8
class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            InitialHoles;                                               // 0x00A8   (0x0010)  
	FString                                            SelectedHoles;                                              // 0x00B8   (0x0010)  
	FString                                            SuccessfulFills;                                            // 0x00C8   (0x0010)  
	FString                                            FailedFills;                                                // 0x00D8   (0x0010)  
	FString                                            RemainingHoles;                                             // 0x00E8   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.HoleFillOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UHoleFillOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UHoleFillTool*                               FillTool;                                                   // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.HoleFillTool
/// Size: 0x0240 (576 bytes) (0x0000B8 - 0x000240) align 16 MaxSize: 0x0240
class UHoleFillTool : public USingleSelectionMeshEditingTool
{ 
public:
	class USmoothHoleFillProperties*                   SmoothHoleFillProperties;                                   // 0x00B8   (0x0008)  
	class UHoleFillToolProperties*                     Properties;                                                 // 0x00C0   (0x0008)  
	class UHoleFillToolActions*                        Actions;                                                    // 0x00C8   (0x0008)  
	class UHoleFillStatisticsProperties*               Statistics;                                                 // 0x00D0   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00D8   (0x0008)  
	class UBoundarySelectionMechanic*                  SelectionMechanic;                                          // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x158];                                     // 0x00E8   (0x0158)  MISSED
};

/// Class /Script/MeshModelingToolsExp.LatticeDeformerToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULatticeDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.LatticeDeformerToolProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class ULatticeDeformerToolProperties : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00A8   (0x0008)  MISSED
	int32_t                                            XAxisResolution;                                            // 0x00B0   (0x0004)  
	int32_t                                            YAxisResolution;                                            // 0x00B4   (0x0004)  
	int32_t                                            ZAxisResolution;                                            // 0x00B8   (0x0004)  
	float                                              Padding;                                                    // 0x00BC   (0x0004)  
	ELatticeInterpolationType                          InterpolationType;                                          // 0x00C0   (0x0001)  
	bool                                               bDeformNormals;                                             // 0x00C1   (0x0001)  
	bool                                               bCanChangeResolution;                                       // 0x00C2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x00C3   (0x0001)  MISSED
	EToolContextCoordinateSystem                       GizmoCoordinateSystem;                                      // 0x00C4   (0x0004)  
	bool                                               bSetPivotMode;                                              // 0x00C8   (0x0001)  
	bool                                               bSoftDeformation;                                           // 0x00C9   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x00CA   (0x0006)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.LatticeDeformerToolProperties.Constrain
	// void Constrain();                                                                                                        // [0x1856790] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.LatticeDeformerToolProperties.ClearConstraints
	// void ClearConstraints();                                                                                                 // [0x18566e0] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.LatticeDeformerOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class ULatticeDeformerOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class ULatticeDeformerTool*                        LatticeDeformerTool;                                        // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.LatticeDeformerTool
/// Size: 0x0160 (352 bytes) (0x0000B8 - 0x000160) align 8 MaxSize: 0x0160
class ULatticeDeformerTool : public USingleSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x00B8   (0x0020)  MISSED
	class ULatticeControlPointsMechanic*               ControlPointsMechanic;                                      // 0x00D8   (0x0008)  
	class ULatticeDeformerToolProperties*              Settings;                                                   // 0x00E0   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00E8   (0x0008)  
	bool                                               bLatticeDeformed;                                           // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6F];                                      // 0x00F1   (0x006F)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintToolBuilder
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 16 MaxSize: 0x0070
class UMeshAttributePaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0030   (0x0040)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintBrushOperationProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMeshAttributePaintBrushOperationProperties : public UInteractiveToolPropertySet
{ 
public:
	EBrushActionMode                                   BrushAction;                                                // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintToolProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            Attribute;                                                  // 0x00A8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00B8   (0x0010)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshAttributePaintToolProperties.GetAttributeNames
	// TArray<FString> GetAttributeNames();                                                                                     // [0x178d410] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintEditActions
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshAttributePaintTool
/// Size: 0x07B0 (1968 bytes) (0x0002C0 - 0x0007B0) align 16 MaxSize: 0x07B0
class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{ 
public:
	class UMeshAttributePaintBrushOperationProperties* BrushActionProps;                                           // 0x02C0   (0x0008)  
	class UMeshAttributePaintToolProperties*           AttribProps;                                                // 0x02C8   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4E0];                                     // 0x02D0   (0x04E0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshBoundaryToolBase
/// Size: 0x01B0 (432 bytes) (0x0000B8 - 0x0001B0) align 16 MaxSize: 0x01B0
class UMeshBoundaryToolBase : public USingleSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0xE8];                                      // 0x00B8   (0x00E8)  MISSED
	class UPolygonSelectionMechanic*                   SelectionMechanic;                                          // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x01A8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshGroupPaintToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMeshGroupPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.GroupPaintBrushFilterProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UGroupPaintBrushFilterProperties : public UInteractiveToolPropertySet
{ 
public:
	EMeshGroupPaintBrushType                           PrimaryBrushType;                                           // 0x00A8   (0x0001)  
	EMeshGroupPaintInteractionType                     SubToolType;                                                // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AA   (0x0002)  MISSED
	float                                              BrushSize;                                                  // 0x00AC   (0x0004)  
	EMeshGroupPaintBrushAreaType                       BrushAreaMode;                                              // 0x00B0   (0x0001)  
	bool                                               bHitBackFaces;                                              // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00B2   (0x0002)  MISSED
	int32_t                                            SetGroup;                                                   // 0x00B4   (0x0004)  
	bool                                               bOnlySetUngrouped;                                          // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00B9   (0x0003)  MISSED
	int32_t                                            EraseGroup;                                                 // 0x00BC   (0x0004)  
	bool                                               bOnlyEraseCurrent;                                          // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x00C1   (0x0003)  MISSED
	float                                              AngleThreshold;                                             // 0x00C4   (0x0004)  
	bool                                               bUVSeams;                                                   // 0x00C8   (0x0001)  
	bool                                               bNormalSeams;                                               // 0x00C9   (0x0001)  
	EMeshGroupPaintVisibilityType                      VisibilityFilter;                                           // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x00CB   (0x0001)  MISSED
	int32_t                                            MinTriVertCount;                                            // 0x00CC   (0x0004)  
	bool                                               bShowHitGroup;                                              // 0x00D0   (0x0001)  
	bool                                               bShowAllGroups;                                             // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData05_7[0x6];                                       // 0x00D2   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshGroupPaintToolActionPropertySet
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMeshGroupPaintToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMeshGroupPaintToolFreezeActions : public UMeshGroupPaintToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.UnfreezeAll
	// void UnfreezeAll();                                                                                                      // [0x18571b0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ShrinkCurrent
	// void ShrinkCurrent();                                                                                                    // [0x18570f0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.GrowCurrent
	// void GrowCurrent();                                                                                                      // [0x1856ca0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeOthers
	// void FreezeOthers();                                                                                                     // [0x1856be0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FreezeCurrent
	// void FreezeCurrent();                                                                                                    // [0x1856b80] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.FloodFillCurrent
	// void FloodFillCurrent();                                                                                                 // [0x1856ad0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearCurrent
	// void ClearCurrent();                                                                                                     // [0x1856730] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshGroupPaintToolFreezeActions.ClearAll
	// void ClearAll();                                                                                                         // [0x1856680] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshSculptToolBase
/// Size: 0x0BA0 (2976 bytes) (0x000100 - 0x000BA0) align 16 MaxSize: 0x0B98
class UMeshSculptToolBase : public UMeshSurfacePointTool
{ 
public:
	class USculptBrushProperties*                      BrushProperties;                                            // 0x0100   (0x0008)  
	class UWorkPlaneProperties*                        GizmoProperties;                                            // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_6[0x120];                                     // 0x0110   (0x0120)  MISSED
	TMap<int32_t, class UMeshSculptBrushOpProps*>      BrushOpPropSets;                                            // 0x0230   (0x0050)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0280   (0x0050)  MISSED
	TMap<int32_t, class UMeshSculptBrushOpProps*>      SecondaryBrushOpPropSets;                                   // 0x02D0   (0x0050)  
	unsigned char                                      UnknownData02_6[0x6F0];                                     // 0x0320   (0x06F0)  MISSED
	class UMeshEditingViewProperties*                  ViewProperties;                                             // 0x0A10   (0x0008)  
	class UMaterialInstanceDynamic*                    ActiveOverrideMaterial;                                     // 0x0A18   (0x0008)  
	class UBrushStampIndicator*                        BrushIndicator;                                             // 0x0A20   (0x0008)  
	bool                                               bIsVolumetricIndicator;                                     // 0x0A28   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0A29   (0x0007)  MISSED
	class UMaterialInstanceDynamic*                    BrushIndicatorMaterial;                                     // 0x0A30   (0x0008)  
	class UPreviewMesh*                                BrushIndicatorMesh;                                         // 0x0A38   (0x0008)  
	class UCombinedTransformGizmo*                     PlaneTransformGizmo;                                        // 0x0A40   (0x0008)  
	class UTransformProxy*                             PlaneTransformProxy;                                        // 0x0A48   (0x0008)  
	unsigned char                                      UnknownData04_7[0x148];                                     // 0x0A50   (0x0148)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshGroupPaintTool
/// Size: 0x0FD0 (4048 bytes) (0x000B98 - 0x000FD0) align 16 MaxSize: 0x0FD0
class UMeshGroupPaintTool : public UMeshSculptToolBase
{ 
public:
	class UPolygroupLayersProperties*                  PolygroupLayerProperties;                                   // 0x0B98   (0x0008)  
	class UGroupPaintBrushFilterProperties*            FilterProperties;                                           // 0x0BA0   (0x0008)  
	class UGroupPaintBrushOpProps*                     PaintBrushOpProperties;                                     // 0x0BA8   (0x0008)  
	class UGroupEraseBrushOpProps*                     EraseBrushOpProperties;                                     // 0x0BB0   (0x0008)  
	class UMeshGroupPaintToolFreezeActions*            FreezeActions;                                              // 0x0BB8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0BC0   (0x0008)  MISSED
	class UPolyLassoMarqueeMechanic*                   PolyLassoMechanic;                                          // 0x0BC8   (0x0008)  
	class AInternalToolFrameworkActor*                 PreviewMeshActor;                                           // 0x0BD0   (0x0008)  
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0BD8   (0x0008)  
	class UMeshElementsVisualizer*                     MeshElementsDisplay;                                        // 0x0BE0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x3E8];                                     // 0x0BE8   (0x03E8)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshInspectorToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshInspectorToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.MeshInspectorProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bWireframe;                                                 // 0x00A8   (0x0001)  
	bool                                               bBoundaryEdges;                                             // 0x00A9   (0x0001)  
	bool                                               bBowtieVertices;                                            // 0x00AA   (0x0001)  
	bool                                               bPolygonBorders;                                            // 0x00AB   (0x0001)  
	bool                                               bUVSeams;                                                   // 0x00AC   (0x0001)  
	bool                                               bUVBowties;                                                 // 0x00AD   (0x0001)  
	bool                                               bMissingUVs;                                                // 0x00AE   (0x0001)  
	bool                                               bNormalSeams;                                               // 0x00AF   (0x0001)  
	bool                                               bTangentSeams;                                              // 0x00B0   (0x0001)  
	bool                                               bNormalVectors;                                             // 0x00B1   (0x0001)  
	bool                                               bTangentVectors;                                            // 0x00B2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00B3   (0x0001)  MISSED
	float                                              NormalLength;                                               // 0x00B4   (0x0004)  
	float                                              TangentLength;                                              // 0x00B8   (0x0004)  
	EMeshInspectorToolDrawIndexMode                    ShowIndices;                                                // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x00BD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshInspectorMaterialProperties
/// Size: 0x0120 (288 bytes) (0x0000A8 - 0x000120) align 8 MaxSize: 0x0120
class UMeshInspectorMaterialProperties : public UInteractiveToolPropertySet
{ 
public:
	EMeshInspectorMaterialMode                         MaterialMode;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              CheckerDensity;                                             // 0x00AC   (0x0004)  
	class UMaterialInterface*                          OverrideMaterial;                                           // 0x00B0   (0x0008)  
	FString                                            UVChannel;                                                  // 0x00B8   (0x0010)  
	TArray<FString>                                    UVChannelNamesList;                                         // 0x00C8   (0x0010)  
	bool                                               bFlatShading;                                               // 0x00D8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00D9   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x00DC   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	double                                             Opacity;                                                    // 0x00F0   (0x0008)  
	FLinearColor                                       TransparentMaterialColor;                                   // 0x00F8   (0x0010)  
	bool                                               bTwoSided;                                                  // 0x0108   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	class UMaterialInstanceDynamic*                    CheckerMaterial;                                            // 0x0110   (0x0008)  
	class UMaterialInstanceDynamic*                    ActiveCustomMaterial;                                       // 0x0118   (0x0008)  


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshInspectorMaterialProperties.GetUVChannelNamesFunc
	// TArray<FString> GetUVChannelNamesFunc();                                                                                 // [0x17629a0] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.MeshInspectorTool
/// Size: 0x0250 (592 bytes) (0x0000B8 - 0x000250) align 16 MaxSize: 0x0250
class UMeshInspectorTool : public USingleSelectionMeshEditingTool
{ 
public:
	class UMeshInspectorProperties*                    Settings;                                                   // 0x00B8   (0x0008)  
	class UPolygroupLayersProperties*                  PolygroupLayerProperties;                                   // 0x00C0   (0x0008)  
	class UMeshInspectorMaterialProperties*            MaterialSettings;                                           // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x00D0   (0x0008)  MISSED
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00D8   (0x0008)  
	class ULineSetComponent*                           DrawnLineSet;                                               // 0x00E0   (0x0008)  
	class UMaterialInterface*                          DefaultMaterial;                                            // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x160];                                     // 0x00F0   (0x0160)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMeshSelectionToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionToolActionPropertySet
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionEditActions
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.Shrink
	// void Shrink();                                                                                                           // [0x1857090] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.SelectAll
	// void SelectAll();                                                                                                        // [0x1856f80] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.OptimizeBorder
	// void OptimizeBorder();                                                                                                   // [0x1856e70] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.LargestTriCountPart
	// void LargestTriCountPart();                                                                                              // [0x1856dc0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.LargestAreaPart
	// void LargestAreaPart();                                                                                                  // [0x1856d60] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.Invert
	// void Invert();                                                                                                           // [0x1856d00] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.Grow
	// void Grow();                                                                                                             // [0x1856c40] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.FloodFill
	// void FloodFill();                                                                                                        // [0x1856a70] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.ExpandToMaterials
	// void ExpandToMaterials();                                                                                                // [0x18569b0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionEditActions.Clear
	// void Clear();                                                                                                            // [0x1856620] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions
/// Size: 0x00B0 (176 bytes) (0x0000B0 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{ 
public:


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.SmoothBorder
	// void SmoothBorder();                                                                                                     // [0x1857150] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.Separate
	// void Separate();                                                                                                         // [0x1856fe0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.FlipNormals
	// void FlipNormals();                                                                                                      // [0x1856a10] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.Duplicate
	// void Duplicate();                                                                                                        // [0x1856950] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.Disconnect
	// void Disconnect();                                                                                                       // [0x18568a0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.Delete
	// void Delete();                                                                                                           // [0x1856840] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MeshSelectionMeshEditActions.CreatePolygroup
	// void CreatePolygroup();                                                                                                  // [0x18567e0] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionToolProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EMeshSelectionToolPrimaryMode                      SelectionMode;                                              // 0x00A8   (0x0004)  
	float                                              AngleTolerance;                                             // 0x00AC   (0x0004)  
	bool                                               bHitBackFaces;                                              // 0x00B0   (0x0001)  
	bool                                               bShowPoints;                                                // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00B2   (0x0002)  MISSED
	EMeshFacesColorMode                                FaceColorMode;                                              // 0x00B4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.MeshSelectionTool
/// Size: 0x06E8 (1768 bytes) (0x0002C0 - 0x0006E8) align 8 MaxSize: 0x06E8
class UMeshSelectionTool : public UDynamicMeshBrushTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02C0   (0x0008)  MISSED
	class UMeshSelectionToolProperties*                SelectionProps;                                             // 0x02C8   (0x0008)  
	class UMeshSelectionEditActions*                   SelectionActions;                                           // 0x02D0   (0x0008)  
	class UMeshSelectionToolActionPropertySet*         EditActions;                                                // 0x02D8   (0x0008)  
	class UMeshStatisticsProperties*                   MeshStatisticsProperties;                                   // 0x02E0   (0x0008)  
	class UMeshElementsVisualizer*                     MeshElementsDisplay;                                        // 0x02E8   (0x0008)  
	class UMeshUVChannelProperties*                    UVChannelProperties;                                        // 0x02F0   (0x0008)  
	class UPolygroupLayersProperties*                  PolygroupLayerProperties;                                   // 0x02F8   (0x0008)  
	unsigned char                                      UnknownData01_6[0x58];                                      // 0x0300   (0x0058)  MISSED
	class UMeshSelectionSet*                           Selection;                                                  // 0x0358   (0x0008)  
	TArray<class AActor*>                              SpawnedActors;                                              // 0x0360   (0x0010)  
	unsigned char                                      UnknownData02_7[0x378];                                     // 0x0370   (0x0378)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshSpaceDeformerToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshSpaceDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.MeshSpaceDeformerToolProperties
/// Size: 0x00D0 (208 bytes) (0x0000A8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMeshSpaceDeformerToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ENonlinearOperationType                            SelectedOperationType;                                      // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              UpperBoundsInterval;                                        // 0x00AC   (0x0004)  
	float                                              LowerBoundsInterval;                                        // 0x00B0   (0x0004)  
	float                                              BendDegrees;                                                // 0x00B4   (0x0004)  
	float                                              TwistDegrees;                                               // 0x00B8   (0x0004)  
	EFlareProfileType                                  FlareProfileType;                                           // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00BD   (0x0003)  MISSED
	float                                              FlarePercentY;                                              // 0x00C0   (0x0004)  
	bool                                               bLockXAndYFlaring;                                          // 0x00C4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00C5   (0x0003)  MISSED
	float                                              FlarePercentX;                                              // 0x00C8   (0x0004)  
	bool                                               bLockBottom;                                                // 0x00CC   (0x0001)  
	bool                                               bShowOriginalMesh;                                          // 0x00CD   (0x0001)  
	bool                                               bDrawVisualization;                                         // 0x00CE   (0x0001)  
	bool                                               bAlignToNormalOnCtrlClick;                                  // 0x00CF   (0x0001)  
};

/// Class /Script/MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMeshSpaceDeformerToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.MeshSpaceDeformerToolActionPropertySet.ShiftToCenter
	// void ShiftToCenter();                                                                                                    // [0x1857040] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.SpaceDeformerOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class USpaceDeformerOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UMeshSpaceDeformerTool*                      SpaceDeformerTool;                                          // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.MeshSpaceDeformerTool
/// Size: 0x02C0 (704 bytes) (0x0000B8 - 0x0002C0) align 16 MaxSize: 0x02C0
class UMeshSpaceDeformerTool : public USingleSelectionMeshEditingTool
{ 
public:
	class UMeshSpaceDeformerToolProperties*            Settings;                                                   // 0x00B8   (0x0008)  
	class UMeshSpaceDeformerToolActionPropertySet*     ToolActions;                                                // 0x00C0   (0x0008)  
	class UGizmoTransformChangeStateTarget*            StateTarget;                                                // 0x00C8   (0x0008)  
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x00D0   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x00E0   (0x0010)  MISSED
	class UPreviewMesh*                                OriginalMeshPreview;                                        // 0x00F0   (0x0008)  
	class UIntervalGizmo*                              IntervalGizmo;                                              // 0x00F8   (0x0008)  
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0100   (0x0008)  
	class UTransformProxy*                             TransformProxy;                                             // 0x0108   (0x0008)  
	class UGizmoLocalFloatParameterSource*             UpIntervalSource;                                           // 0x0110   (0x0008)  
	class UGizmoLocalFloatParameterSource*             DownIntervalSource;                                         // 0x0118   (0x0008)  
	class UGizmoLocalFloatParameterSource*             ForwardIntervalSource;                                      // 0x0120   (0x0008)  
	unsigned char                                      UnknownData01_7[0x198];                                     // 0x0128   (0x0198)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshVertexSculptToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class UMeshVertexSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.VertexBrushSculptProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{ 
public:
	EMeshVertexSculptBrushType                         PrimaryBrushType;                                           // 0x00A8   (0x0001)  
	EMeshSculptFalloffType                             PrimaryFalloffType;                                         // 0x00A9   (0x0001)  
	EMeshVertexSculptBrushFilterType                   BrushFilter;                                                // 0x00AA   (0x0001)  
	bool                                               bFreezeTarget;                                              // 0x00AB   (0x0001)  
	TWeakObjectPtr<class UMeshVertexSculptTool*>       Tool;                                                       // 0x00AC   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.VertexBrushAlphaProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UVertexBrushAlphaProperties : public UInteractiveToolPropertySet
{ 
public:
	class UTexture2D*                                  Alpha;                                                      // 0x00A8   (0x0008)  
	float                                              RotationAngle;                                              // 0x00B0   (0x0004)  
	bool                                               bRandomize;                                                 // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	float                                              RandomRange;                                                // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00BC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshSymmetryProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMeshSymmetryProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bEnableSymmetry;                                            // 0x00A8   (0x0001)  
	bool                                               bSymmetryCanBeEnabled;                                      // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshVertexSculptTool
/// Size: 0x14E0 (5344 bytes) (0x000B98 - 0x0014E0) align 16 MaxSize: 0x14E0
class UMeshVertexSculptTool : public UMeshSculptToolBase
{ 
public:
	class UVertexBrushSculptProperties*                SculptProperties;                                           // 0x0B98   (0x0008)  
	class UVertexBrushAlphaProperties*                 AlphaProperties;                                            // 0x0BA0   (0x0008)  
	class UTexture2D*                                  BrushAlpha;                                                 // 0x0BA8   (0x0008)  
	class UMeshSymmetryProperties*                     SymmetryProperties;                                         // 0x0BB0   (0x0008)  
	class AInternalToolFrameworkActor*                 PreviewMeshActor;                                           // 0x0BB8   (0x0008)  
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0BC0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x918];                                     // 0x0BC8   (0x0918)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MirrorToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMirrorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.MirrorToolProperties
/// Size: 0x00C0 (192 bytes) (0x0000A8 - 0x0000C0) align 8 MaxSize: 0x00C0
class UMirrorToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EMirrorOperationMode                               OperationMode;                                              // 0x00A8   (0x0001)  
	bool                                               bCropAlongMirrorPlaneFirst;                                 // 0x00A9   (0x0001)  
	bool                                               bWeldVerticesOnMirrorPlane;                                 // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00AB   (0x0005)  MISSED
	double                                             PlaneTolerance;                                             // 0x00B0   (0x0008)  
	bool                                               bAllowBowtieVertexCreation;                                 // 0x00B8   (0x0001)  
	EMirrorCtrlClickBehavior                           CtrlClickBehavior;                                          // 0x00B9   (0x0001)  
	bool                                               bButtonsOnlyChangeOrientation;                              // 0x00BA   (0x0001)  
	bool                                               bShowPreview;                                               // 0x00BB   (0x0001)  
	EMirrorSaveMode                                    SaveMode;                                                   // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x00BD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MirrorOperatorFactory
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMirrorOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UMirrorTool*                                 MirrorTool;                                                 // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MirrorToolActionPropertySet
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Up
	// void Up();                                                                                                               // [0x1857210] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.ShiftToCenter
	// void ShiftToCenter();                                                                                                    // [0x1857040] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Right
	// void Right();                                                                                                            // [0x1856ed0] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Left
	// void Left();                                                                                                             // [0x1856e20] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Forward
	// void Forward();                                                                                                          // [0x1856b30] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Down
	// void Down();                                                                                                             // [0x1856900] Final|Native|Public  
	// Function /Script/MeshModelingToolsExp.MirrorToolActionPropertySet.Backward
	// void Backward();                                                                                                         // [0x1856570] Final|Native|Public  
};

/// Class /Script/MeshModelingToolsExp.MirrorTool
/// Size: 0x0168 (360 bytes) (0x0000B8 - 0x000168) align 8 MaxSize: 0x0168
class UMirrorTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UMirrorToolProperties*                       Settings;                                                   // 0x00C0   (0x0008)  
	class UMirrorToolActionPropertySet*                ToolActions;                                                // 0x00C8   (0x0008)  
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToMirror;                                             // 0x00D0   (0x0010)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData01_6[0x30];                                      // 0x00F0   (0x0030)  MISSED
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x0120   (0x0008)  
	unsigned char                                      UnknownData02_7[0x40];                                      // 0x0128   (0x0040)  MISSED
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshToolProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EOffsetMeshToolOffsetType                          OffsetType;                                                 // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              Distance;                                                   // 0x00AC   (0x0004)  
	bool                                               bCreateShell;                                               // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.OffsetWeightMapSetProperties
/// Size: 0x00D0 (208 bytes) (0x0000C8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{ 
public:
	float                                              MinDistance;                                                // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.IterativeOffsetProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{ 
public:
	int32_t                                            Steps;                                                      // 0x00A8   (0x0004)  
	bool                                               bOffsetBoundaries;                                          // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00AD   (0x0003)  MISSED
	float                                              SmoothingPerStep;                                           // 0x00B0   (0x0004)  
	bool                                               bReprojectSmooth;                                           // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x00B5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ImplicitOffsetProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Smoothness;                                                 // 0x00A8   (0x0004)  
	bool                                               bPreserveUVs;                                               // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshTool
/// Size: 0x0420 (1056 bytes) (0x000400 - 0x000420) align 16 MaxSize: 0x0420
class UOffsetMeshTool : public UBaseMeshProcessingTool
{ 
public:
	class UOffsetMeshToolProperties*                   OffsetProperties;                                           // 0x0400   (0x0008)  
	class UIterativeOffsetProperties*                  IterativeProperties;                                        // 0x0408   (0x0008)  
	class UImplicitOffsetProperties*                   ImplicitProperties;                                         // 0x0410   (0x0008)  
	class UOffsetWeightMapSetProperties*               WeightMapProperties;                                        // 0x0418   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.OffsetMeshToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{ 
public:
};

/// Struct /Script/MeshModelingToolsExp.PhysicsSphereData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FPhysicsSphereData
{ 
	float                                              Radius;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FKShapeElem                                        Element;                                                    // 0x0070   (0x0030)  
};

/// Struct /Script/MeshModelingToolsExp.PhysicsBoxData
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FPhysicsBoxData
{ 
	FVector                                            Dimensions;                                                 // 0x0000   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FKShapeElem                                        Element;                                                    // 0x0080   (0x0030)  
};

/// Struct /Script/MeshModelingToolsExp.PhysicsCapsuleData
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FPhysicsCapsuleData
{ 
	float                                              Radius;                                                     // 0x0000   (0x0004)  
	float                                              Length;                                                     // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FKShapeElem                                        Element;                                                    // 0x0070   (0x0030)  
};

/// Struct /Script/MeshModelingToolsExp.PhysicsConvexData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FPhysicsConvexData
{ 
	int32_t                                            NumVertices;                                                // 0x0000   (0x0004)  
	int32_t                                            NumFaces;                                                   // 0x0004   (0x0004)  
	FKShapeElem                                        Element;                                                    // 0x0008   (0x0030)  
};

/// Struct /Script/MeshModelingToolsExp.PhysicsLevelSetData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FPhysicsLevelSetData
{ 
	FKShapeElem                                        Element;                                                    // 0x0000   (0x0030)  
};

/// Class /Script/MeshModelingToolsExp.PhysicsObjectToolPropertySet
/// Size: 0x0110 (272 bytes) (0x0000A8 - 0x000110) align 8 MaxSize: 0x0110
class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{ 
public:
	FString                                            ObjectName;                                                 // 0x00A8   (0x0010)  
	ECollisionGeometryMode                             CollisionType;                                              // 0x00B8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00BC   (0x0004)  MISSED
	TArray<FPhysicsSphereData>                         Spheres;                                                    // 0x00C0   (0x0010)  
	TArray<FPhysicsBoxData>                            Boxes;                                                      // 0x00D0   (0x0010)  
	TArray<FPhysicsCapsuleData>                        Capsules;                                                   // 0x00E0   (0x0010)  
	TArray<FPhysicsConvexData>                         Convexes;                                                   // 0x00F0   (0x0010)  
	TArray<FPhysicsLevelSetData>                       LevelSets;                                                  // 0x0100   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.CollisionGeometryVisualizationProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              LineThickness;                                              // 0x00A8   (0x0004)  
	bool                                               bShowHidden;                                                // 0x00AC   (0x0001)  
	bool                                               bRandomColors;                                              // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AE   (0x0002)  MISSED
	FColor                                             Color;                                                      // 0x00B0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00B4   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ExtractCollisionGeometryToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UExtractCollisionGeometryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.ExtractCollisionToolProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UExtractCollisionToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EExtractCollisionOutputType                        CollisionType;                                              // 0x00A8   (0x0001)  
	bool                                               bWeldEdges;                                                 // 0x00A9   (0x0001)  
	bool                                               bOutputSeparateMeshes;                                      // 0x00AA   (0x0001)  
	bool                                               bShowPreview;                                               // 0x00AB   (0x0001)  
	bool                                               bShowInputMesh;                                             // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ExtractCollisionGeometryTool
/// Size: 0x0330 (816 bytes) (0x0000B8 - 0x000330) align 8 MaxSize: 0x0330
class UExtractCollisionGeometryTool : public USingleSelectionMeshEditingTool
{ 
public:
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00B8   (0x0008)  
	class UExtractCollisionToolProperties*             Settings;                                                   // 0x00C0   (0x0008)  
	class UCollisionGeometryVisualizationProperties*   VizSettings;                                                // 0x00C8   (0x0008)  
	class UPhysicsObjectToolPropertySet*               ObjectProps;                                                // 0x00D0   (0x0008)  
	class UPreviewGeometry*                            PreviewElements;                                            // 0x00D8   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x248];                                     // 0x00E8   (0x0248)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PhysicsInspectorToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPhysicsInspectorToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.PhysicsInspectorTool
/// Size: 0x0100 (256 bytes) (0x0000B8 - 0x000100) align 8 MaxSize: 0x0100
class UPhysicsInspectorTool : public UMultiSelectionMeshEditingTool
{ 
public:
	class UCollisionGeometryVisualizationProperties*   VizSettings;                                                // 0x00B8   (0x0008)  
	TArray<class UPhysicsObjectToolPropertySet*>       ObjectData;                                                 // 0x00C0   (0x0010)  
	class UMaterialInterface*                          LineMaterial;                                               // 0x00D0   (0x0008)  
	TArray<class UPreviewGeometry*>                    PreviewElements;                                            // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00E8   (0x0018)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SetCollisionGeometryToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USetCollisionGeometryToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SetCollisionGeometryToolProperties
/// Size: 0x00F0 (240 bytes) (0x0000A8 - 0x0000F0) align 8 MaxSize: 0x00F0
class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ECollisionGeometryType                             GeometryType;                                               // 0x00A8   (0x0004)  
	ESetCollisionGeometryInputMode                     InputMode;                                                  // 0x00AC   (0x0004)  
	bool                                               bUseWorldSpace;                                             // 0x00B0   (0x0001)  
	bool                                               bRemoveContained;                                           // 0x00B1   (0x0001)  
	bool                                               bEnableMaxCount;                                            // 0x00B2   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00B3   (0x0001)  MISSED
	int32_t                                            MaxCount;                                                   // 0x00B4   (0x0004)  
	float                                              MinThickness;                                               // 0x00B8   (0x0004)  
	bool                                               bDetectBoxes;                                               // 0x00BC   (0x0001)  
	bool                                               bDetectSpheres;                                             // 0x00BD   (0x0001)  
	bool                                               bDetectCapsules;                                            // 0x00BE   (0x0001)  
	bool                                               bSimplifyHulls;                                             // 0x00BF   (0x0001)  
	int32_t                                            HullTargetFaceCount;                                        // 0x00C0   (0x0004)  
	int32_t                                            MaxHullsPerMesh;                                            // 0x00C4   (0x0004)  
	float                                              ConvexDecompositionSearchFactor;                            // 0x00C8   (0x0004)  
	float                                              AddHullsErrorTolerance;                                     // 0x00CC   (0x0004)  
	float                                              MinPartThickness;                                           // 0x00D0   (0x0004)  
	bool                                               bSimplifyPolygons;                                          // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00D5   (0x0003)  MISSED
	float                                              HullTolerance;                                              // 0x00D8   (0x0004)  
	EProjectedHullAxis                                 SweepAxis;                                                  // 0x00DC   (0x0004)  
	int32_t                                            LevelSetResolution;                                         // 0x00E0   (0x0004)  
	bool                                               bAppendToExisting;                                          // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00E5   (0x0003)  MISSED
	ECollisionGeometryMode                             SetCollisionType;                                           // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x00EC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SetCollisionGeometryTool
/// Size: 0x0250 (592 bytes) (0x0000B8 - 0x000250) align 16 MaxSize: 0x0250
class USetCollisionGeometryTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class USetCollisionGeometryToolProperties*         Settings;                                                   // 0x00C0   (0x0008)  
	class UPolygroupLayersProperties*                  PolygroupLayerProperties;                                   // 0x00C8   (0x0008)  
	class UCollisionGeometryVisualizationProperties*   VizSettings;                                                // 0x00D0   (0x0008)  
	class UPhysicsObjectToolPropertySet*               CollisionProps;                                             // 0x00D8   (0x0008)  
	class UMaterialInterface*                          LineMaterial;                                               // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00E8   (0x0008)  MISSED
	class UPreviewGeometry*                            PreviewGeom;                                                // 0x00F0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x158];                                     // 0x00F8   (0x0158)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PlaneCutToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPlaneCutToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.AcceptOutputProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UAcceptOutputProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bExportSeparatedPiecesAsNewMeshAssets;                      // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PlaneCutToolProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bKeepBothHalves;                                            // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00A9   (0x0003)  MISSED
	float                                              SpacingBetweenHalves;                                       // 0x00AC   (0x0004)  
	bool                                               bShowPreview;                                               // 0x00B0   (0x0001)  
	bool                                               bFillCutHole;                                               // 0x00B1   (0x0001)  
	bool                                               bFillSpans;                                                 // 0x00B2   (0x0001)  
	unsigned char                                      UnknownData01_7[0x5];                                       // 0x00B3   (0x0005)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PlaneCutOperatorFactory
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UPlaneCutOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UPlaneCutTool*                               CutTool;                                                    // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.PlaneCutTool
/// Size: 0x01A0 (416 bytes) (0x0000B8 - 0x0001A0) align 16 MaxSize: 0x01A0
class UPlaneCutTool : public UMultiSelectionMeshEditingTool
{ 
public:
	class UPlaneCutToolProperties*                     BasicProperties;                                            // 0x00B8   (0x0008)  
	class UAcceptOutputProperties*                     AcceptProperties;                                           // 0x00C0   (0x0008)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00C8   (0x0010)  
	TArray<class UDynamicMeshReplacementChangeTarget*> MeshesToCut;                                                // 0x00D8   (0x0010)  
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x00E8   (0x0008)  
	unsigned char                                      UnknownData00_7[0xB0];                                      // 0x00F0   (0x00B0)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.PlaneCutTool.FlipPlane
	// void FlipPlane();                                                                                                        // [0x1897100] Final|Native|Protected 
	// Function /Script/MeshModelingToolsExp.PlaneCutTool.Cut
	// void Cut();                                                                                                              // [0x18970e0] Final|Native|Protected 
};

/// Class /Script/MeshModelingToolsExp.ProjectToTargetToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UProjectToTargetToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.RemeshMeshToolProperties
/// Size: 0x00E0 (224 bytes) (0x0000B8 - 0x0000E0) align 8 MaxSize: 0x00E0
class URemeshMeshToolProperties : public URemeshProperties
{ 
public:
	int32_t                                            TargetTriangleCount;                                        // 0x00B8   (0x0004)  
	ERemeshSmoothingType                               SmoothingType;                                              // 0x00BC   (0x0001)  
	bool                                               bDiscardAttributes;                                         // 0x00BD   (0x0001)  
	bool                                               bShowGroupColors;                                           // 0x00BE   (0x0001)  
	ERemeshType                                        RemeshType;                                                 // 0x00BF   (0x0001)  
	int32_t                                            RemeshIterations;                                           // 0x00C0   (0x0004)  
	int32_t                                            MaxRemeshIterations;                                        // 0x00C4   (0x0004)  
	int32_t                                            ExtraProjectionIterations;                                  // 0x00C8   (0x0004)  
	bool                                               bUseTargetEdgeLength;                                       // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00CD   (0x0003)  MISSED
	float                                              TargetEdgeLength;                                           // 0x00D0   (0x0004)  
	bool                                               bReproject;                                                 // 0x00D4   (0x0001)  
	bool                                               bReprojectConstraints;                                      // 0x00D5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00D6   (0x0002)  MISSED
	float                                              BoundaryCornerAngleThreshold;                               // 0x00D8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ProjectToTargetToolProperties
/// Size: 0x0100 (256 bytes) (0x0000E0 - 0x000100) align 8 MaxSize: 0x0100
class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{ 
public:
	bool                                               bWorldSpace;                                                // 0x00E0   (0x0001)  
	bool                                               bParallel;                                                  // 0x00E1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00E2   (0x0002)  MISSED
	int32_t                                            FaceProjectionPassesPerRemeshIteration;                     // 0x00E4   (0x0004)  
	float                                              SurfaceProjectionSpeed;                                     // 0x00E8   (0x0004)  
	float                                              NormalAlignmentSpeed;                                       // 0x00EC   (0x0004)  
	bool                                               bSmoothInFillAreas;                                         // 0x00F0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00F1   (0x0003)  MISSED
	float                                              FillAreaDistanceMultiplier;                                 // 0x00F4   (0x0004)  
	float                                              FillAreaSmoothMultiplier;                                   // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RemeshMeshTool
/// Size: 0x0108 (264 bytes) (0x0000B8 - 0x000108) align 8 MaxSize: 0x0108
class URemeshMeshTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class URemeshMeshToolProperties*                   BasicProperties;                                            // 0x00C0   (0x0008)  
	class UMeshStatisticsProperties*                   MeshStatisticsProperties;                                   // 0x00C8   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00D0   (0x0008)  
	class UMeshElementsVisualizer*                     MeshElementsDisplay;                                        // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x00E0   (0x0028)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ProjectToTargetTool
/// Size: 0x0118 (280 bytes) (0x000108 - 0x000118) align 8 MaxSize: 0x0118
class UProjectToTargetTool : public URemeshMeshTool
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0108   (0x0010)  MISSED
};

/// Class /Script/MeshModelingToolsExp.MeshAnalysisProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            SurfaceArea;                                                // 0x00A8   (0x0010)  
	FString                                            Volume;                                                     // 0x00B8   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.MeshStatisticsProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{ 
public:
	FString                                            Mesh;                                                       // 0x00A8   (0x0010)  
	FString                                            UV;                                                         // 0x00B8   (0x0010)  
	FString                                            Attributes;                                                 // 0x00C8   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.RemeshMeshToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URemeshMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URemoveOccludedTrianglesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesToolProperties
/// Size: 0x00D8 (216 bytes) (0x0000A8 - 0x0000D8) align 8 MaxSize: 0x00D8
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EOcclusionCalculationUIMode                        OcclusionTestMethod;                                        // 0x00A8   (0x0001)  
	EOcclusionTriangleSamplingUIMode                   TriangleSampling;                                           // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
	double                                             WindingIsoValue;                                            // 0x00B0   (0x0008)  
	int32_t                                            AddRandomRays;                                              // 0x00B8   (0x0004)  
	int32_t                                            AddTriangleSamples;                                         // 0x00BC   (0x0004)  
	bool                                               bOnlySelfOcclude;                                           // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C1   (0x0003)  MISSED
	int32_t                                            ShrinkRemoval;                                              // 0x00C4   (0x0004)  
	double                                             MinAreaIsland;                                              // 0x00C8   (0x0008)  
	int32_t                                            MinTriCountIsland;                                          // 0x00D0   (0x0004)  
	EOccludedAction                                    Action;                                                     // 0x00D4   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x00D5   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesAdvancedProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesOperatorFactory
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class URemoveOccludedTrianglesOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class URemoveOccludedTrianglesTool*                Tool;                                                       // 0x0030   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RemoveOccludedTrianglesTool
/// Size: 0x01D0 (464 bytes) (0x0000B8 - 0x0001D0) align 16 MaxSize: 0x01D0
class URemoveOccludedTrianglesTool : public UMultiSelectionMeshEditingTool
{ 
public:
	class URemoveOccludedTrianglesToolProperties*      BasicProperties;                                            // 0x00B8   (0x0008)  
	class UPolygroupLayersProperties*                  PolygroupLayersProperties;                                  // 0x00C0   (0x0008)  
	class URemoveOccludedTrianglesAdvancedProperties*  AdvancedProperties;                                         // 0x00C8   (0x0008)  
	TArray<class UMeshOpPreviewWithBackgroundCompute*> Previews;                                                   // 0x00D0   (0x0010)  
	TArray<class UPreviewMesh*>                        PreviewCopies;                                              // 0x00E0   (0x0010)  
	unsigned char                                      UnknownData00_7[0xE0];                                      // 0x00F0   (0x00E0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.RevolveBoundaryToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class URevolveBoundaryToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.RevolveBoundaryOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class URevolveBoundaryOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class URevolveBoundaryTool*                        RevolveBoundaryTool;                                        // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.RevolveBoundaryToolProperties
/// Size: 0x0148 (328 bytes) (0x000118 - 0x000148) align 8 MaxSize: 0x0148
class URevolveBoundaryToolProperties : public URevolveProperties
{ 
public:
	ERevolvePropertiesCapFillMode                      CapFillMode;                                                // 0x0118   (0x0001)  
	bool                                               bDisplayInputMesh;                                          // 0x0119   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x011A   (0x0006)  MISSED
	FVector                                            AxisOrigin;                                                 // 0x0120   (0x0018)  
	FVector2D                                          AxisOrientation;                                            // 0x0138   (0x0010)  
};

/// Class /Script/MeshModelingToolsExp.RevolveBoundaryTool
/// Size: 0x0220 (544 bytes) (0x0001B0 - 0x000220) align 16 MaxSize: 0x0220
class URevolveBoundaryTool : public UMeshBoundaryToolBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x18];                                      // 0x01B0   (0x0018)  MISSED
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x01C8   (0x0008)  
	class URevolveBoundaryToolProperties*              Settings;                                                   // 0x01D0   (0x0008)  
	class UNewMeshMaterialProperties*                  MaterialProperties;                                         // 0x01D8   (0x0008)  
	class UConstructionPlaneMechanic*                  PlaneMechanic;                                              // 0x01E0   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x01E8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x01F0   (0x0030)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SculptBrushProperties
/// Size: 0x00E0 (224 bytes) (0x0000A8 - 0x0000E0) align 8 MaxSize: 0x00E0
class USculptBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	FBrushToolRadius                                   BrushSize;                                                  // 0x00A8   (0x0014)  
	float                                              BrushFalloffAmount;                                         // 0x00BC   (0x0004)  
	bool                                               bShowFalloff;                                               // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00C1   (0x0003)  MISSED
	float                                              Depth;                                                      // 0x00C4   (0x0004)  
	bool                                               bHitBackFaces;                                              // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C9   (0x0003)  MISSED
	float                                              FlowRate;                                                   // 0x00CC   (0x0004)  
	float                                              Spacing;                                                    // 0x00D0   (0x0004)  
	float                                              Lazyness;                                                   // 0x00D4   (0x0004)  
	bool                                               bShowPerBrushProps;                                         // 0x00D8   (0x0001)  
	bool                                               bShowLazyness;                                              // 0x00D9   (0x0001)  
	bool                                               bShowFlowRate;                                              // 0x00DA   (0x0001)  
	bool                                               bShowSpacing;                                               // 0x00DB   (0x0001)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x00DC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.KelvinBrushProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UKelvinBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              FalloffDistance;                                            // 0x00A8   (0x0004)  
	float                                              Stiffness;                                                  // 0x00AC   (0x0004)  
	float                                              Incompressiblity;                                           // 0x00B0   (0x0004)  
	int32_t                                            BrushSteps;                                                 // 0x00B4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.WorkPlaneProperties
/// Size: 0x00F0 (240 bytes) (0x0000A8 - 0x0000F0) align 16 MaxSize: 0x00F0
class UWorkPlaneProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bPropertySetEnabled;                                        // 0x00A8   (0x0001)  
	bool                                               bShowGizmo;                                                 // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00AA   (0x0006)  MISSED
	FVector                                            position;                                                   // 0x00B0   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x00D0   (0x0020)  
};

/// Class /Script/MeshModelingToolsExp.SculptMaxBrushProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              MaxHeight;                                                  // 0x00A8   (0x0004)  
	bool                                               bFreezeCurrentHeight;                                       // 0x00AC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00AD   (0x0003)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SeamSculptToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USeamSculptToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SeamSculptToolProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class USeamSculptToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bShowWireframe;                                             // 0x00A8   (0x0001)  
	bool                                               bHitBackFaces;                                              // 0x00A9   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x00AA   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SeamSculptTool
/// Size: 0x03B0 (944 bytes) (0x0002C0 - 0x0003B0) align 16 MaxSize: 0x03B0
class USeamSculptTool : public UDynamicMeshBrushTool
{ 
public:
	class USeamSculptToolProperties*                   Settings;                                                   // 0x02C0   (0x0008)  
	class UPreviewGeometry*                            PreviewGeom;                                                // 0x02C8   (0x0008)  
	unsigned char                                      UnknownData00_7[0xE0];                                      // 0x02D0   (0x00E0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SelfUnionMeshesToolProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bTrimFlaps;                                                 // 0x00A8   (0x0001)  
	bool                                               bTryFixHoles;                                               // 0x00A9   (0x0001)  
	bool                                               bTryCollapseEdges;                                          // 0x00AA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x00AB   (0x0001)  MISSED
	float                                              WindingThreshold;                                           // 0x00AC   (0x0004)  
	bool                                               bShowNewBoundaryEdges;                                      // 0x00B0   (0x0001)  
	bool                                               bOnlyUseFirstMeshMaterials;                                 // 0x00B1   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x00B2   (0x0006)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SelfUnionMeshesTool
/// Size: 0x0148 (328 bytes) (0x000100 - 0x000148) align 8 MaxSize: 0x0148
class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{ 
public:
	class USelfUnionMeshesToolProperties*              Properties;                                                 // 0x0100   (0x0008)  
	class ULineSetComponent*                           DrawnLineSet;                                               // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0110   (0x0038)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SelfUnionMeshesToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SkinWeightsBindingToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USkinWeightsBindingToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SkinWeightsBindingToolProperties
/// Size: 0x00E0 (224 bytes) (0x0000A8 - 0x0000E0) align 8 MaxSize: 0x00E0
class USkinWeightsBindingToolProperties : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FBoneReference                                     CurrentBone;                                                // 0x00B0   (0x0010)  
	ESkinWeightsBindType                               BindingType;                                                // 0x00C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00C1   (0x0003)  MISSED
	float                                              Stiffness;                                                  // 0x00C4   (0x0004)  
	int32_t                                            MaxInfluences;                                              // 0x00C8   (0x0004)  
	int32_t                                            VoxelResolution;                                            // 0x00CC   (0x0004)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x00D0   (0x0010)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SkinWeightsBindingTool
/// Size: 0x0388 (904 bytes) (0x0000B8 - 0x000388) align 8 MaxSize: 0x0388
class USkinWeightsBindingTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class USkinWeightsBindingToolProperties*           Properties;                                                 // 0x00C0   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         Preview;                                                    // 0x00C8   (0x0008)  
	unsigned char                                      UnknownData01_7[0x2B8];                                     // 0x00D0   (0x02B8)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SkinWeightsPaintToolBuilder
/// Size: 0x0030 (48 bytes) (0x000030 - 0x000030) align 8 MaxSize: 0x0030
class USkinWeightsPaintToolBuilder : public UMeshSurfacePointMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SkinWeightsPaintToolProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class USkinWeightsPaintToolProperties : public UInteractiveToolPropertySet
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00A8   (0x0008)  MISSED
	FBoneReference                                     CurrentBone;                                                // 0x00B0   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00C0   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SkinWeightsPaintTool
/// Size: 0x0980 (2432 bytes) (0x0002C0 - 0x000980) align 16 MaxSize: 0x0980
class USkinWeightsPaintTool : public UDynamicMeshBrushTool
{ 
public:
	class USkinWeightsPaintToolProperties*             ToolProps;                                                  // 0x02C0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x6B8];                                     // 0x02C8   (0x06B8)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SmoothMeshToolProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ESmoothMeshToolSmoothType                          SmoothingType;                                              // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.IterativeSmoothProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SmoothingPerStep;                                           // 0x00A8   (0x0004)  
	int32_t                                            Steps;                                                      // 0x00AC   (0x0004)  
	bool                                               bSmoothBoundary;                                            // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.DiffusionSmoothProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SmoothingPerStep;                                           // 0x00A8   (0x0004)  
	int32_t                                            Steps;                                                      // 0x00AC   (0x0004)  
	bool                                               bPreserveUVs;                                               // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B1   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.ImplicitSmoothProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              SmoothSpeed;                                                // 0x00A8   (0x0004)  
	float                                              Smoothness;                                                 // 0x00AC   (0x0004)  
	bool                                               bPreserveUVs;                                               // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00B1   (0x0003)  MISSED
	float                                              VolumeCorrection;                                           // 0x00B4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.SmoothWeightMapSetProperties
/// Size: 0x00D0 (208 bytes) (0x0000C8 - 0x0000D0) align 8 MaxSize: 0x00D0
class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{ 
public:
	float                                              MinSmoothMultiplier;                                        // 0x00C8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00CC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SmoothMeshTool
/// Size: 0x0430 (1072 bytes) (0x000400 - 0x000430) align 16 MaxSize: 0x0430
class USmoothMeshTool : public UBaseMeshProcessingTool
{ 
public:
	class USmoothMeshToolProperties*                   SmoothProperties;                                           // 0x0400   (0x0008)  
	class UIterativeSmoothProperties*                  IterativeProperties;                                        // 0x0408   (0x0008)  
	class UDiffusionSmoothProperties*                  DiffusionProperties;                                        // 0x0410   (0x0008)  
	class UImplicitSmoothProperties*                   ImplicitProperties;                                         // 0x0418   (0x0008)  
	class USmoothWeightMapSetProperties*               WeightMapProperties;                                        // 0x0420   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0428   (0x0008)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SmoothMeshToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SplitMeshesToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USplitMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.SplitMeshesToolProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class USplitMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bTransferMaterials;                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A9   (0x0007)  MISSED
};

/// Class /Script/MeshModelingToolsExp.SplitMeshesTool
/// Size: 0x00F0 (240 bytes) (0x0000B8 - 0x0000F0) align 8 MaxSize: 0x00F0
class USplitMeshesTool : public UMultiSelectionMeshEditingTool
{ 
public:
	class USplitMeshesToolProperties*                  BasicProperties;                                            // 0x00B8   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00C0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x00C8   (0x0028)  MISSED
};

/// Class /Script/MeshModelingToolsExp.TransferMeshToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTransferMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.TransferMeshToolProperties
/// Size: 0x0120 (288 bytes) (0x0000A8 - 0x000120) align 8 MaxSize: 0x0120
class UTransferMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bTransferMaterials;                                         // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	FString                                            SourceLOD;                                                  // 0x00B0   (0x0010)  
	FString                                            TargetLod;                                                  // 0x00C0   (0x0010)  
	bool                                               bIsStaticMeshSource;                                        // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
	TArray<FString>                                    SourceLODNamesList;                                         // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00E8   (0x0010)  MISSED
	TArray<FString>                                    TargetLODNamesList;                                         // 0x00F8   (0x0010)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x0108   (0x0010)  MISSED
	bool                                               bIsStaticMeshTarget;                                        // 0x0118   (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x0119   (0x0007)  MISSED


	/// Functions
	// Function /Script/MeshModelingToolsExp.TransferMeshToolProperties.GetTargetLODNamesFunc
	// TArray<FString> GetTargetLODNamesFunc();                                                                                 // [0x1897120] Final|Native|Public|Const 
	// Function /Script/MeshModelingToolsExp.TransferMeshToolProperties.GetSourceLODNamesFunc
	// TArray<FString> GetSourceLODNamesFunc();                                                                                 // [0x178d3e0] Final|Native|Public|Const 
};

/// Class /Script/MeshModelingToolsExp.TransferMeshTool
/// Size: 0x00C8 (200 bytes) (0x0000B8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UTransferMeshTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UTransferMeshToolProperties*                 BasicProperties;                                            // 0x00C0   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.TransformMeshesToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTransformMeshesToolBuilder : public UMultiSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.TransformMeshesToolProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	ETransformMeshesTransformMode                      TransformMode;                                              // 0x00A8   (0x0001)  
	bool                                               bApplyToInstances;                                          // 0x00A9   (0x0001)  
	bool                                               bSetPivotMode;                                              // 0x00AA   (0x0001)  
	bool                                               bEnableSnapDragging;                                        // 0x00AB   (0x0001)  
	ETransformMeshesSnapDragSource                     SnapDragSource;                                             // 0x00AC   (0x0001)  
	ETransformMeshesSnapDragRotationMode               RotationMode;                                               // 0x00AD   (0x0001)  
	bool                                               bHaveInstances;                                             // 0x00AE   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1];                                       // 0x00AF   (0x0001)  MISSED
};

/// Struct /Script/MeshModelingToolsExp.TransformMeshesTarget
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FTransformMeshesTarget
{ 
	class UTransformProxy*                             TransformProxy;                                             // 0x0000   (0x0008)  
	class UCombinedTransformGizmo*                     TransformGizmo;                                             // 0x0008   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.TransformMeshesTool
/// Size: 0x0190 (400 bytes) (0x0000B8 - 0x000190) align 16 MaxSize: 0x0190
class UTransformMeshesTool : public UMultiSelectionMeshEditingTool
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00B8   (0x0008)  MISSED
	class UTransformMeshesToolProperties*              TransformProps;                                             // 0x00C0   (0x0008)  
	TArray<FTransformMeshesTarget>                     ActiveGizmos;                                               // 0x00C8   (0x0010)  
	class UDragAlignmentMechanic*                      DragAlignmentMechanic;                                      // 0x00D8   (0x0008)  
	unsigned char                                      UnknownData01_7[0xB0];                                      // 0x00E0   (0x00B0)  MISSED
};

/// Class /Script/MeshModelingToolsExp.VolumeToMeshToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVolumeToMeshToolBuilder : public UInteractiveToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.VolumeToMeshToolProperties
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UVolumeToMeshToolProperties : public UInteractiveToolPropertySet
{ 
public:
	bool                                               bWeldEdges;                                                 // 0x00A8   (0x0001)  
	bool                                               bAutoRepair;                                                // 0x00A9   (0x0001)  
	bool                                               bOptimizeMesh;                                              // 0x00AA   (0x0001)  
	bool                                               bShowWireframe;                                             // 0x00AB   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/MeshModelingToolsExp.VolumeToMeshTool
/// Size: 0x0308 (776 bytes) (0x000098 - 0x000308) align 8 MaxSize: 0x0308
class UVolumeToMeshTool : public UInteractiveTool
{ 
public:
	class UVolumeToMeshToolProperties*                 Settings;                                                   // 0x0098   (0x0008)  
	class UCreateMeshObjectTypeProperties*             OutputTypeProperties;                                       // 0x00A0   (0x0008)  
	class UPreviewMesh*                                PreviewMesh;                                                // 0x00A8   (0x0008)  
	TLazyObjectPtr<class AVolume*>                     TargetVolume;                                               // 0x00B0   (0x001C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00CC   (0x0004)  MISSED
	class ULineSetComponent*                           VolumeEdgesSet;                                             // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x230];                                     // 0x00D8   (0x0230)  MISSED
};

/// Class /Script/MeshModelingToolsExp.VoxelBlendMeshesToolProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             BlendPower;                                                 // 0x00A8   (0x0008)  
	double                                             BlendFalloff;                                               // 0x00B0   (0x0008)  
	EVoxelBlendOperation                               Operation;                                                  // 0x00B8   (0x0001)  
	bool                                               bVoxWrap;                                                   // 0x00B9   (0x0001)  
	bool                                               bRemoveInternalsAfterVoxWrap;                               // 0x00BA   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x00BB   (0x0005)  MISSED
	double                                             ThickenShells;                                              // 0x00C0   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.VoxelBlendMeshesTool
/// Size: 0x0120 (288 bytes) (0x000118 - 0x000120) align 8 MaxSize: 0x0120
class UVoxelBlendMeshesTool : public UBaseVoxelTool
{ 
public:
	class UVoxelBlendMeshesToolProperties*             BlendProperties;                                            // 0x0118   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.VoxelBlendMeshesToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.VoxelMorphologyMeshesToolProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	EMorphologyOperation                               Operation;                                                  // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	double                                             Distance;                                                   // 0x00B0   (0x0008)  
	bool                                               bVoxWrap;                                                   // 0x00B8   (0x0001)  
	bool                                               bRemoveInternalsAfterVoxWrap;                               // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x00BA   (0x0006)  MISSED
	double                                             ThickenShells;                                              // 0x00C0   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.VoxelMorphologyMeshesTool
/// Size: 0x0120 (288 bytes) (0x000118 - 0x000120) align 8 MaxSize: 0x0120
class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{ 
public:
	class UVoxelMorphologyMeshesToolProperties*        MorphologyProperties;                                       // 0x0118   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.VoxelMorphologyMeshesToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.VoxelSolidifyMeshesToolProperties
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	double                                             WindingThreshold;                                           // 0x00A8   (0x0008)  
	double                                             ExtendBounds;                                               // 0x00B0   (0x0008)  
	int32_t                                            SurfaceSearchSteps;                                         // 0x00B8   (0x0004)  
	bool                                               bSolidAtBoundaries;                                         // 0x00BC   (0x0001)  
	bool                                               bApplyThickenShells;                                        // 0x00BD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00BE   (0x0002)  MISSED
	double                                             ThickenShells;                                              // 0x00C0   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.VoxelSolidifyMeshesTool
/// Size: 0x0120 (288 bytes) (0x000118 - 0x000120) align 8 MaxSize: 0x0120
class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{ 
public:
	class UVoxelSolidifyMeshesToolProperties*          SolidifyProperties;                                         // 0x0118   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.VoxelSolidifyMeshesToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.WeldMeshEdgesToolBuilder
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UWeldMeshEdgesToolBuilder : public USingleSelectionMeshEditingToolBuilder
{ 
public:
};

/// Class /Script/MeshModelingToolsExp.WeldMeshEdgesToolProperties
/// Size: 0x00B8 (184 bytes) (0x0000A8 - 0x0000B8) align 8 MaxSize: 0x00B8
class UWeldMeshEdgesToolProperties : public UInteractiveToolPropertySet
{ 
public:
	float                                              Tolerance;                                                  // 0x00A8   (0x0004)  
	bool                                               bOnlyUnique;                                                // 0x00AC   (0x0001)  
	bool                                               bResolveTJunctions;                                         // 0x00AD   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00AE   (0x0002)  MISSED
	int32_t                                            InitialEdges;                                               // 0x00B0   (0x0004)  
	int32_t                                            RemainingEdges;                                             // 0x00B4   (0x0004)  
};

/// Class /Script/MeshModelingToolsExp.WeldMeshEdgesOperatorFactory
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UWeldMeshEdgesOperatorFactory : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UWeldMeshEdgesTool*                          WeldMeshEdgesTool;                                          // 0x0030   (0x0008)  
};

/// Class /Script/MeshModelingToolsExp.WeldMeshEdgesTool
/// Size: 0x00E8 (232 bytes) (0x0000B8 - 0x0000E8) align 8 MaxSize: 0x00E8
class UWeldMeshEdgesTool : public USingleSelectionMeshEditingTool
{ 
public:
	class UWeldMeshEdgesToolProperties*                Settings;                                                   // 0x00B8   (0x0008)  
	class UMeshOpPreviewWithBackgroundCompute*         PreviewCompute;                                             // 0x00C0   (0x0008)  
	class UMeshElementsVisualizer*                     MeshElementsDisplay;                                        // 0x00C8   (0x0008)  
	class UWeldMeshEdgesOperatorFactory*               OperatorFactory;                                            // 0x00D0   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x00D8   (0x0010)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UBakeInputMeshProperties) == 0x0140); // 320 bytes (0x0000A8 - 0x000140)
static_assert(sizeof(UBakeNormalMapToolProperties) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UBakeOcclusionMapToolProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UBakeCurvatureMapToolProperties) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UBakeTexture2DProperties) == 0x00D0); // 208 bytes (0x0000A8 - 0x0000D0)
static_assert(sizeof(UBakeMultiTexture2DProperties) == 0x00E8); // 232 bytes (0x0000A8 - 0x0000E8)
static_assert(sizeof(UBakeVisualizationProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UExtrudeMeshSelectionToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UExtrudeMeshSelectionToolProperties) == 0x00F0); // 240 bytes (0x0000A8 - 0x0000F0)
static_assert(sizeof(UExtrudeMeshSelectionTool) == 0x0858); // 2136 bytes (0x000110 - 0x000858)
static_assert(sizeof(UMeshSculptBrushOpProps) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UBaseKelvinletBrushOpProps) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UScaleKelvinletBrushOpProps) == 0x00C0); // 192 bytes (0x0000B8 - 0x0000C0)
static_assert(sizeof(UPullKelvinletBrushOpProps) == 0x00C0); // 192 bytes (0x0000B8 - 0x0000C0)
static_assert(sizeof(USharpPullKelvinletBrushOpProps) == 0x00C0); // 192 bytes (0x0000B8 - 0x0000C0)
static_assert(sizeof(UTwistKelvinletBrushOpProps) == 0x00C0); // 192 bytes (0x0000B8 - 0x0000C0)
static_assert(sizeof(UGroupEraseBrushOpProps) == 0x00F0); // 240 bytes (0x0000A8 - 0x0000F0)
static_assert(sizeof(UGroupPaintBrushOpProps) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UInflateBrushOpProps) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMoveBrushOpProps) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UPinchBrushOpProps) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UBasePlaneBrushOpProps) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UPlaneBrushOpProps) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UViewAlignedPlaneBrushOpProps) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UFixedPlaneBrushOpProps) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UStandardSculptBrushOpProps) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UViewAlignedSculptBrushOpProps) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(USculptMaxBrushOpProps) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UBaseSmoothBrushOpProps) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(USmoothBrushOpProps) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(USecondarySmoothBrushOpProps) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(USmoothFillBrushOpProps) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UFlattenBrushOpProps) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UEraseBrushOpProps) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UOffsetMeshSelectionToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOffsetMeshSelectionToolProperties) == 0x00E0); // 224 bytes (0x0000A8 - 0x0000E0)
static_assert(sizeof(UOffsetMeshSelectionTool) == 0x0848); // 2120 bytes (0x000110 - 0x000848)
static_assert(sizeof(UPatternToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPatternToolSettings) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UPatternTool_BoundingBoxSettings) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UPatternTool_LinearSettings) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UPatternTool_GridSettings) == 0x00E0); // 224 bytes (0x0000A8 - 0x0000E0)
static_assert(sizeof(UPatternTool_RadialSettings) == 0x00E0); // 224 bytes (0x0000A8 - 0x0000E0)
static_assert(sizeof(UPatternTool_RotationSettings) == 0x00F8); // 248 bytes (0x0000A8 - 0x0000F8)
static_assert(sizeof(UPatternTool_TranslationSettings) == 0x00F8); // 248 bytes (0x0000A8 - 0x0000F8)
static_assert(sizeof(UPatternTool_ScaleSettings) == 0x00F8); // 248 bytes (0x0000A8 - 0x0000F8)
static_assert(sizeof(UPatternTool_OutputSettings) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UPatternTool) == 0x04B0); // 1200 bytes (0x0000B8 - 0x0004B0)
static_assert(sizeof(UMeshConstraintProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(URemeshProperties) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UAddPatchToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAddPatchToolProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UAddPatchTool) == 0x0128); // 296 bytes (0x0000A0 - 0x000128)
static_assert(sizeof(UAlignObjectsToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAlignObjectsToolProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UAlignObjectsTool) == 0x0158); // 344 bytes (0x0000B8 - 0x000158)
static_assert(sizeof(UBakeMeshAttributeMapsToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBakeMeshAttributeMapsToolProperties) == 0x0138); // 312 bytes (0x0000A8 - 0x000138)
static_assert(sizeof(UBakeMeshAttributeTool) == 0x0490); // 1168 bytes (0x0000B8 - 0x000490)
static_assert(sizeof(UBakeMeshAttributeMapsToolBase) == 0x0600); // 1536 bytes (0x000490 - 0x000600)
static_assert(sizeof(UBakeMeshAttributeMapsTool) == 0x0670); // 1648 bytes (0x000600 - 0x000670)
static_assert(sizeof(UBakeMeshAttributeMapsResultToolProperties) == 0x00F8); // 248 bytes (0x0000A8 - 0x0000F8)
static_assert(sizeof(UBakeMeshAttributeVertexToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBakeMeshAttributeVertexToolProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UBakeMeshAttributeVertexTool) == 0x0590); // 1424 bytes (0x000490 - 0x000590)
static_assert(sizeof(UBakeMultiMeshAttributeMapsToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBakeMultiMeshAttributeMapsToolProperties) == 0x0138); // 312 bytes (0x0000A8 - 0x000138)
static_assert(sizeof(FBakeMultiMeshDetailProperties) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UBakeMultiMeshInputToolProperties) == 0x00F8); // 248 bytes (0x0000A8 - 0x0000F8)
static_assert(sizeof(UBakeMultiMeshAttributeMapsTool) == 0x06B0); // 1712 bytes (0x000600 - 0x0006B0)
static_assert(sizeof(UBakeRenderCaptureResults) == 0x00F0); // 240 bytes (0x0000A8 - 0x0000F0)
static_assert(sizeof(UBakeRenderCaptureToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URenderCaptureProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UBakeRenderCaptureToolProperties) == 0x00D8); // 216 bytes (0x0000A8 - 0x0000D8)
static_assert(sizeof(UBakeRenderCaptureInputToolProperties) == 0x00D0); // 208 bytes (0x0000A8 - 0x0000D0)
static_assert(sizeof(UBakeRenderCaptureVisualizationProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UBakeRenderCaptureTool) == 0x0560); // 1376 bytes (0x0000B8 - 0x000560)
static_assert(sizeof(UBakeTransformToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UBakeTransformToolProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UBakeTransformTool) == 0x00D0); // 208 bytes (0x0000B8 - 0x0000D0)
static_assert(sizeof(UConvertMeshesToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UConvertMeshesToolProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UConvertMeshesTool) == 0x00D0); // 208 bytes (0x0000B8 - 0x0000D0)
static_assert(sizeof(UConvertToPolygonsToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UConvertToPolygonsToolProperties) == 0x00D8); // 216 bytes (0x0000A8 - 0x0000D8)
static_assert(sizeof(UOutputPolygroupLayerProperties) == 0x00D8); // 216 bytes (0x0000A8 - 0x0000D8)
static_assert(sizeof(UConvertToPolygonsOperatorFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UConvertToPolygonsTool) == 0x0110); // 272 bytes (0x0000B8 - 0x000110)
static_assert(sizeof(UCubeGridToolBuilder) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UCubeGridToolProperties) == 0x01A8); // 424 bytes (0x0000A8 - 0x0001A8)
static_assert(sizeof(UCubeGridToolActions) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UCubeGridDuringActivityActions) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UCubeGridTool) == 0x0620); // 1568 bytes (0x000098 - 0x000620)
static_assert(sizeof(UDeformMeshPolygonsToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDeformMeshPolygonsTransformProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UDeformMeshPolygonsTool) == 0x1810); // 6160 bytes (0x000100 - 0x001810)
static_assert(sizeof(UDisplaceMeshCommonProperties) == 0x00E0); // 224 bytes (0x0000A8 - 0x0000E0)
static_assert(sizeof(USelectiveTessellationProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UDisplaceMeshTextureMapProperties) == 0x00F0); // 240 bytes (0x0000A8 - 0x0000F0)
static_assert(sizeof(UDisplaceMeshDirectionalFilterProperties) == 0x00D0); // 208 bytes (0x0000A8 - 0x0000D0)
static_assert(sizeof(FPerlinLayerProperties) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UDisplaceMeshPerlinNoiseProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UDisplaceMeshSineWaveProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UDisplaceMeshToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDisplaceMeshTool) == 0x0460); // 1120 bytes (0x0000B8 - 0x000460)
static_assert(sizeof(UDrawPolyPathToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UDrawPolyPathProperties) == 0x00D0); // 208 bytes (0x0000A8 - 0x0000D0)
static_assert(sizeof(UDrawPolyPathExtrudeProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UDrawPolyPathTool) == 0x0280); // 640 bytes (0x000098 - 0x000280)
static_assert(sizeof(UDynamicMeshBrushTool) == 0x02C0); // 704 bytes (0x000280 - 0x0002C0)
static_assert(sizeof(UDynamicMeshSculptToolBuilder) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FBrushToolRadius) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UDynamicMeshBrushProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UDynamicMeshBrushSculptProperties) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UDynamicSculptToolActions) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UBrushRemeshProperties) == 0x00C8); // 200 bytes (0x0000B8 - 0x0000C8)
static_assert(sizeof(UFixedPlaneBrushProperties) == 0x00F0); // 240 bytes (0x0000A8 - 0x0000F0)
static_assert(sizeof(UDynamicMeshSculptTool) == 0x1010); // 4112 bytes (0x000100 - 0x001010)
static_assert(sizeof(UEditNormalsToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEditNormalsToolProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UEditNormalsAdvancedProperties) == 0x00A8); // 168 bytes (0x0000A8 - 0x0000A8)
static_assert(sizeof(UEditNormalsOperatorFactory) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UEditNormalsTool) == 0x0150); // 336 bytes (0x0000B8 - 0x000150)
static_assert(sizeof(UEditPivotToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UEditPivotToolProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UEditPivotToolActionPropertySet) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(FEditPivotTarget) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UEditPivotTool) == 0x0230); // 560 bytes (0x0000B8 - 0x000230)
static_assert(sizeof(UEditUVIslandsToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UEditUVIslandsTool) == 0x04E0); // 1248 bytes (0x000100 - 0x0004E0)
static_assert(sizeof(UHoleFillToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USmoothHoleFillProperties) == 0x00D0); // 208 bytes (0x0000A8 - 0x0000D0)
static_assert(sizeof(UHoleFillToolProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UHoleFillToolActions) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UHoleFillStatisticsProperties) == 0x00F8); // 248 bytes (0x0000A8 - 0x0000F8)
static_assert(sizeof(UHoleFillOperatorFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UHoleFillTool) == 0x0240); // 576 bytes (0x0000B8 - 0x000240)
static_assert(sizeof(ULatticeDeformerToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULatticeDeformerToolProperties) == 0x00D0); // 208 bytes (0x0000A8 - 0x0000D0)
static_assert(sizeof(ULatticeDeformerOperatorFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(ULatticeDeformerTool) == 0x0160); // 352 bytes (0x0000B8 - 0x000160)
static_assert(sizeof(UMeshAttributePaintToolBuilder) == 0x0070); // 112 bytes (0x000030 - 0x000070)
static_assert(sizeof(UMeshAttributePaintBrushOperationProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMeshAttributePaintToolProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UMeshAttributePaintEditActions) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMeshAttributePaintTool) == 0x07B0); // 1968 bytes (0x0002C0 - 0x0007B0)
static_assert(sizeof(UMeshBoundaryToolBase) == 0x01B0); // 432 bytes (0x0000B8 - 0x0001B0)
static_assert(sizeof(UMeshGroupPaintToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UGroupPaintBrushFilterProperties) == 0x00D8); // 216 bytes (0x0000A8 - 0x0000D8)
static_assert(sizeof(UMeshGroupPaintToolActionPropertySet) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMeshGroupPaintToolFreezeActions) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UMeshSculptToolBase) == 0x0B98); // 2968 bytes (0x000100 - 0x000B98)
static_assert(sizeof(UMeshGroupPaintTool) == 0x0FD0); // 4048 bytes (0x000B98 - 0x000FD0)
static_assert(sizeof(UMeshInspectorToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshInspectorProperties) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UMeshInspectorMaterialProperties) == 0x0120); // 288 bytes (0x0000A8 - 0x000120)
static_assert(sizeof(UMeshInspectorTool) == 0x0250); // 592 bytes (0x0000B8 - 0x000250)
static_assert(sizeof(UMeshSelectionToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UMeshSelectionToolActionPropertySet) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMeshSelectionEditActions) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UMeshSelectionMeshEditActions) == 0x00B0); // 176 bytes (0x0000B0 - 0x0000B0)
static_assert(sizeof(UMeshSelectionToolProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UMeshSelectionTool) == 0x06E8); // 1768 bytes (0x0002C0 - 0x0006E8)
static_assert(sizeof(UMeshSpaceDeformerToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshSpaceDeformerToolProperties) == 0x00D0); // 208 bytes (0x0000A8 - 0x0000D0)
static_assert(sizeof(UMeshSpaceDeformerToolActionPropertySet) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(USpaceDeformerOperatorFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UMeshSpaceDeformerTool) == 0x02C0); // 704 bytes (0x0000B8 - 0x0002C0)
static_assert(sizeof(UMeshVertexSculptToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(UVertexBrushSculptProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UVertexBrushAlphaProperties) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UMeshSymmetryProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMeshVertexSculptTool) == 0x14E0); // 5344 bytes (0x000B98 - 0x0014E0)
static_assert(sizeof(UMirrorToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMirrorToolProperties) == 0x00C0); // 192 bytes (0x0000A8 - 0x0000C0)
static_assert(sizeof(UMirrorOperatorFactory) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UMirrorToolActionPropertySet) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMirrorTool) == 0x0168); // 360 bytes (0x0000B8 - 0x000168)
static_assert(sizeof(UOffsetMeshToolProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UOffsetWeightMapSetProperties) == 0x00D0); // 208 bytes (0x0000C8 - 0x0000D0)
static_assert(sizeof(UIterativeOffsetProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UImplicitOffsetProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UOffsetMeshTool) == 0x0420); // 1056 bytes (0x000400 - 0x000420)
static_assert(sizeof(UOffsetMeshToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FPhysicsSphereData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FPhysicsBoxData) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(FPhysicsCapsuleData) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FPhysicsConvexData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FPhysicsLevelSetData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UPhysicsObjectToolPropertySet) == 0x0110); // 272 bytes (0x0000A8 - 0x000110)
static_assert(sizeof(UCollisionGeometryVisualizationProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UExtractCollisionGeometryToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UExtractCollisionToolProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UExtractCollisionGeometryTool) == 0x0330); // 816 bytes (0x0000B8 - 0x000330)
static_assert(sizeof(UPhysicsInspectorToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPhysicsInspectorTool) == 0x0100); // 256 bytes (0x0000B8 - 0x000100)
static_assert(sizeof(USetCollisionGeometryToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USetCollisionGeometryToolProperties) == 0x00F0); // 240 bytes (0x0000A8 - 0x0000F0)
static_assert(sizeof(USetCollisionGeometryTool) == 0x0250); // 592 bytes (0x0000B8 - 0x000250)
static_assert(sizeof(UPlaneCutToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAcceptOutputProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UPlaneCutToolProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UPlaneCutOperatorFactory) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UPlaneCutTool) == 0x01A0); // 416 bytes (0x0000B8 - 0x0001A0)
static_assert(sizeof(UProjectToTargetToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URemeshMeshToolProperties) == 0x00E0); // 224 bytes (0x0000B8 - 0x0000E0)
static_assert(sizeof(UProjectToTargetToolProperties) == 0x0100); // 256 bytes (0x0000E0 - 0x000100)
static_assert(sizeof(URemeshMeshTool) == 0x0108); // 264 bytes (0x0000B8 - 0x000108)
static_assert(sizeof(UProjectToTargetTool) == 0x0118); // 280 bytes (0x000108 - 0x000118)
static_assert(sizeof(UMeshAnalysisProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UMeshStatisticsProperties) == 0x00D8); // 216 bytes (0x0000A8 - 0x0000D8)
static_assert(sizeof(URemeshMeshToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URemoveOccludedTrianglesToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URemoveOccludedTrianglesToolProperties) == 0x00D8); // 216 bytes (0x0000A8 - 0x0000D8)
static_assert(sizeof(URemoveOccludedTrianglesAdvancedProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(URemoveOccludedTrianglesOperatorFactory) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(URemoveOccludedTrianglesTool) == 0x01D0); // 464 bytes (0x0000B8 - 0x0001D0)
static_assert(sizeof(URevolveBoundaryToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(URevolveBoundaryOperatorFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(URevolveBoundaryToolProperties) == 0x0148); // 328 bytes (0x000118 - 0x000148)
static_assert(sizeof(URevolveBoundaryTool) == 0x0220); // 544 bytes (0x0001B0 - 0x000220)
static_assert(sizeof(USculptBrushProperties) == 0x00E0); // 224 bytes (0x0000A8 - 0x0000E0)
static_assert(sizeof(UKelvinBrushProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UWorkPlaneProperties) == 0x00F0); // 240 bytes (0x0000A8 - 0x0000F0)
static_assert(sizeof(USculptMaxBrushProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(USeamSculptToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USeamSculptToolProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(USeamSculptTool) == 0x03B0); // 944 bytes (0x0002C0 - 0x0003B0)
static_assert(sizeof(USelfUnionMeshesToolProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(USelfUnionMeshesTool) == 0x0148); // 328 bytes (0x000100 - 0x000148)
static_assert(sizeof(USelfUnionMeshesToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USkinWeightsBindingToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USkinWeightsBindingToolProperties) == 0x00E0); // 224 bytes (0x0000A8 - 0x0000E0)
static_assert(sizeof(USkinWeightsBindingTool) == 0x0388); // 904 bytes (0x0000B8 - 0x000388)
static_assert(sizeof(USkinWeightsPaintToolBuilder) == 0x0030); // 48 bytes (0x000030 - 0x000030)
static_assert(sizeof(USkinWeightsPaintToolProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(USkinWeightsPaintTool) == 0x0980); // 2432 bytes (0x0002C0 - 0x000980)
static_assert(sizeof(USmoothMeshToolProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UIterativeSmoothProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UDiffusionSmoothProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UImplicitSmoothProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(USmoothWeightMapSetProperties) == 0x00D0); // 208 bytes (0x0000C8 - 0x0000D0)
static_assert(sizeof(USmoothMeshTool) == 0x0430); // 1072 bytes (0x000400 - 0x000430)
static_assert(sizeof(USmoothMeshToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USplitMeshesToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USplitMeshesToolProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(USplitMeshesTool) == 0x00F0); // 240 bytes (0x0000B8 - 0x0000F0)
static_assert(sizeof(UTransferMeshToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTransferMeshToolProperties) == 0x0120); // 288 bytes (0x0000A8 - 0x000120)
static_assert(sizeof(UTransferMeshTool) == 0x00C8); // 200 bytes (0x0000B8 - 0x0000C8)
static_assert(sizeof(UTransformMeshesToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UTransformMeshesToolProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(FTransformMeshesTarget) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UTransformMeshesTool) == 0x0190); // 400 bytes (0x0000B8 - 0x000190)
static_assert(sizeof(UVolumeToMeshToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVolumeToMeshToolProperties) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UVolumeToMeshTool) == 0x0308); // 776 bytes (0x000098 - 0x000308)
static_assert(sizeof(UVoxelBlendMeshesToolProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UVoxelBlendMeshesTool) == 0x0120); // 288 bytes (0x000118 - 0x000120)
static_assert(sizeof(UVoxelBlendMeshesToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVoxelMorphologyMeshesToolProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UVoxelMorphologyMeshesTool) == 0x0120); // 288 bytes (0x000118 - 0x000120)
static_assert(sizeof(UVoxelMorphologyMeshesToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVoxelSolidifyMeshesToolProperties) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UVoxelSolidifyMeshesTool) == 0x0120); // 288 bytes (0x000118 - 0x000120)
static_assert(sizeof(UVoxelSolidifyMeshesToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWeldMeshEdgesToolBuilder) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWeldMeshEdgesToolProperties) == 0x00B8); // 184 bytes (0x0000A8 - 0x0000B8)
static_assert(sizeof(UWeldMeshEdgesOperatorFactory) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UWeldMeshEdgesTool) == 0x00E8); // 232 bytes (0x0000B8 - 0x0000E8)
static_assert(offsetof(UBakeInputMeshProperties, TargetStaticMesh) == 0x00A8);
static_assert(offsetof(UBakeInputMeshProperties, TargetSkeletalMesh) == 0x00B0);
static_assert(offsetof(UBakeInputMeshProperties, TargetDynamicMesh) == 0x00B8);
static_assert(offsetof(UBakeInputMeshProperties, TargetUVLayer) == 0x00C0);
static_assert(offsetof(UBakeInputMeshProperties, SourceStaticMesh) == 0x00D8);
static_assert(offsetof(UBakeInputMeshProperties, SourceSkeletalMesh) == 0x00E0);
static_assert(offsetof(UBakeInputMeshProperties, SourceDynamicMesh) == 0x00E8);
static_assert(offsetof(UBakeInputMeshProperties, SourceNormalMap) == 0x00F8);
static_assert(offsetof(UBakeInputMeshProperties, SourceNormalMapUVLayer) == 0x0100);
static_assert(offsetof(UBakeInputMeshProperties, SourceNormalSpace) == 0x0110);
static_assert(offsetof(UBakeInputMeshProperties, TargetUVLayerNamesList) == 0x0120);
static_assert(offsetof(UBakeInputMeshProperties, SourceUVLayerNamesList) == 0x0130);
static_assert(offsetof(UBakeCurvatureMapToolProperties, CurvatureType) == 0x00A8);
static_assert(offsetof(UBakeCurvatureMapToolProperties, ColorMapping) == 0x00AC);
static_assert(offsetof(UBakeCurvatureMapToolProperties, Clamping) == 0x00B8);
static_assert(offsetof(UBakeTexture2DProperties, SourceTexture) == 0x00A8);
static_assert(offsetof(UBakeTexture2DProperties, UVLayer) == 0x00B0);
static_assert(offsetof(UBakeTexture2DProperties, UVLayerNamesList) == 0x00C0);
static_assert(offsetof(UBakeMultiTexture2DProperties, MaterialIDSourceTextures) == 0x00A8);
static_assert(offsetof(UBakeMultiTexture2DProperties, UVLayer) == 0x00B8);
static_assert(offsetof(UBakeMultiTexture2DProperties, UVLayerNamesList) == 0x00C8);
static_assert(offsetof(UBakeMultiTexture2DProperties, AllSourceTextures) == 0x00D8);
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, InputMode) == 0x00A8);
static_assert(offsetof(UExtrudeMeshSelectionToolProperties, RegionMode) == 0x00B8);
static_assert(offsetof(UExtrudeMeshSelectionTool, ExtrudeProperties) == 0x0110);
static_assert(offsetof(UExtrudeMeshSelectionTool, SourcePreview) == 0x0838);
static_assert(offsetof(UExtrudeMeshSelectionTool, EditCompute) == 0x0840);
static_assert(offsetof(UExtrudeMeshSelectionTool, TransformGizmo) == 0x0848);
static_assert(offsetof(UExtrudeMeshSelectionTool, TransformProxy) == 0x0850);
static_assert(offsetof(UMoveBrushOpProps, AxisFilters) == 0x00B4);
static_assert(offsetof(UPlaneBrushOpProps, WhichSide) == 0x00B4);
static_assert(offsetof(UViewAlignedPlaneBrushOpProps, WhichSide) == 0x00B4);
static_assert(offsetof(UFixedPlaneBrushOpProps, WhichSide) == 0x00B4);
static_assert(offsetof(UFlattenBrushOpProps, WhichSide) == 0x00B4);
static_assert(offsetof(UOffsetMeshSelectionToolProperties, Direction) == 0x00B0);
static_assert(offsetof(UOffsetMeshSelectionTool, OffsetProperties) == 0x0110);
static_assert(offsetof(UOffsetMeshSelectionTool, SourcePreview) == 0x0838);
static_assert(offsetof(UOffsetMeshSelectionTool, EditCompute) == 0x0840);
static_assert(offsetof(UPatternToolSettings, Shape) == 0x00B6);
static_assert(offsetof(UPatternToolSettings, SingleAxis) == 0x00B7);
static_assert(offsetof(UPatternToolSettings, SinglePlane) == 0x00B8);
static_assert(offsetof(UPatternTool_LinearSettings, SpacingMode) == 0x00A8);
static_assert(offsetof(UPatternTool_GridSettings, SpacingX) == 0x00A8);
static_assert(offsetof(UPatternTool_GridSettings, SpacingY) == 0x00C1);
static_assert(offsetof(UPatternTool_RadialSettings, SpacingMode) == 0x00A8);
static_assert(offsetof(UPatternTool_RotationSettings, StartRotation) == 0x00B0);
static_assert(offsetof(UPatternTool_RotationSettings, EndRotation) == 0x00C8);
static_assert(offsetof(UPatternTool_RotationSettings, Jitter) == 0x00E0);
static_assert(offsetof(UPatternTool_TranslationSettings, StartTranslation) == 0x00B0);
static_assert(offsetof(UPatternTool_TranslationSettings, EndTranslation) == 0x00C8);
static_assert(offsetof(UPatternTool_TranslationSettings, Jitter) == 0x00E0);
static_assert(offsetof(UPatternTool_ScaleSettings, StartScale) == 0x00B0);
static_assert(offsetof(UPatternTool_ScaleSettings, EndScale) == 0x00C8);
static_assert(offsetof(UPatternTool_ScaleSettings, Jitter) == 0x00E0);
static_assert(offsetof(UPatternTool, Settings) == 0x00B8);
static_assert(offsetof(UPatternTool, BoundingBoxSettings) == 0x00C0);
static_assert(offsetof(UPatternTool, LinearSettings) == 0x00C8);
static_assert(offsetof(UPatternTool, GridSettings) == 0x00D0);
static_assert(offsetof(UPatternTool, RadialSettings) == 0x00D8);
static_assert(offsetof(UPatternTool, RotationSettings) == 0x00E0);
static_assert(offsetof(UPatternTool, TranslationSettings) == 0x00E8);
static_assert(offsetof(UPatternTool, ScaleSettings) == 0x00F0);
static_assert(offsetof(UPatternTool, OutputSettings) == 0x0150);
static_assert(offsetof(UPatternTool, PatternGizmoProxy) == 0x01A0);
static_assert(offsetof(UPatternTool, PatternGizmo) == 0x01A8);
static_assert(offsetof(UPatternTool, DragAlignmentMechanic) == 0x01C8);
static_assert(offsetof(UPatternTool, PlaneMechanic) == 0x01D0);
static_assert(offsetof(UPatternTool, PreviewGeometry) == 0x04A8);
static_assert(offsetof(UMeshConstraintProperties, MeshBoundaryConstraint) == 0x00A9);
static_assert(offsetof(UMeshConstraintProperties, GroupBoundaryConstraint) == 0x00AA);
static_assert(offsetof(UMeshConstraintProperties, MaterialBoundaryConstraint) == 0x00AB);
static_assert(offsetof(UAddPatchTool, ShapeSettings) == 0x00A8);
static_assert(offsetof(UAddPatchTool, MaterialProperties) == 0x00B0);
static_assert(offsetof(UAddPatchTool, PreviewMesh) == 0x00B8);
static_assert(offsetof(UAlignObjectsToolProperties, AlignType) == 0x00A8);
static_assert(offsetof(UAlignObjectsToolProperties, AlignTo) == 0x00AC);
static_assert(offsetof(UAlignObjectsToolProperties, BoxPosition) == 0x00B0);
static_assert(offsetof(UAlignObjectsTool, AlignProps) == 0x00C0);
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, MapPreview) == 0x00B0);
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, Resolution) == 0x00C0);
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, BitDepth) == 0x00C4);
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, SamplesPerPixel) == 0x00C8);
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, SampleFilterMask) == 0x00D0);
static_assert(offsetof(UBakeMeshAttributeMapsToolProperties, MapPreviewNamesList) == 0x00D8);
static_assert(offsetof(UBakeMeshAttributeTool, OcclusionSettings) == 0x00C0);
static_assert(offsetof(UBakeMeshAttributeTool, CurvatureSettings) == 0x00C8);
static_assert(offsetof(UBakeMeshAttributeTool, TextureSettings) == 0x00D0);
static_assert(offsetof(UBakeMeshAttributeTool, MultiTextureSettings) == 0x00D8);
static_assert(offsetof(UBakeMeshAttributeTool, WorkingPreviewMaterial) == 0x00E0);
static_assert(offsetof(UBakeMeshAttributeTool, ErrorPreviewMaterial) == 0x00E8);
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, VisualizationProps) == 0x0490);
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, PreviewMesh) == 0x0498);
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, PreviewMaterial) == 0x04A0);
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, BentNormalPreviewMaterial) == 0x04A8);
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, CachedMaps) == 0x0500);
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, EmptyNormalMap) == 0x05E8);
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, EmptyColorMapBlack) == 0x05F0);
static_assert(offsetof(UBakeMeshAttributeMapsToolBase, EmptyColorMapWhite) == 0x05F8);
static_assert(offsetof(UBakeMeshAttributeMapsTool, InputMeshSettings) == 0x0600);
static_assert(offsetof(UBakeMeshAttributeMapsTool, Settings) == 0x0608);
static_assert(offsetof(UBakeMeshAttributeMapsTool, ResultSettings) == 0x0610);
static_assert(offsetof(UBakeMeshAttributeMapsResultToolProperties, Result) == 0x00A8);
static_assert(offsetof(UBakeMeshAttributeVertexToolProperties, OutputMode) == 0x00A8);
static_assert(offsetof(UBakeMeshAttributeVertexToolProperties, PreviewMode) == 0x00C0);
static_assert(offsetof(UBakeMeshAttributeVertexTool, InputMeshSettings) == 0x0490);
static_assert(offsetof(UBakeMeshAttributeVertexTool, Settings) == 0x0498);
static_assert(offsetof(UBakeMeshAttributeVertexTool, PreviewMesh) == 0x04A0);
static_assert(offsetof(UBakeMeshAttributeVertexTool, PreviewMaterial) == 0x04A8);
static_assert(offsetof(UBakeMeshAttributeVertexTool, PreviewAlphaMaterial) == 0x04B0);
static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, MapPreview) == 0x00B0);
static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, Resolution) == 0x00C0);
static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, BitDepth) == 0x00C4);
static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, SamplesPerPixel) == 0x00C8);
static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, SampleFilterMask) == 0x00D0);
static_assert(offsetof(UBakeMultiMeshAttributeMapsToolProperties, MapPreviewNamesList) == 0x00D8);
static_assert(offsetof(FBakeMultiMeshDetailProperties, SourceMesh) == 0x0000);
static_assert(offsetof(FBakeMultiMeshDetailProperties, SourceTexture) == 0x0008);
static_assert(offsetof(UBakeMultiMeshInputToolProperties, TargetStaticMesh) == 0x00A8);
static_assert(offsetof(UBakeMultiMeshInputToolProperties, TargetSkeletalMesh) == 0x00B0);
static_assert(offsetof(UBakeMultiMeshInputToolProperties, TargetDynamicMesh) == 0x00B8);
static_assert(offsetof(UBakeMultiMeshInputToolProperties, TargetUVLayer) == 0x00C0);
static_assert(offsetof(UBakeMultiMeshInputToolProperties, SourceMeshes) == 0x00D0);
static_assert(offsetof(UBakeMultiMeshInputToolProperties, TargetUVLayerNamesList) == 0x00E8);
static_assert(offsetof(UBakeMultiMeshAttributeMapsTool, Settings) == 0x0600);
static_assert(offsetof(UBakeMultiMeshAttributeMapsTool, InputMeshSettings) == 0x0608);
static_assert(offsetof(UBakeMultiMeshAttributeMapsTool, ResultSettings) == 0x0610);
static_assert(offsetof(UBakeRenderCaptureResults, BaseColorMap) == 0x00A8);
static_assert(offsetof(UBakeRenderCaptureResults, NormalMap) == 0x00B0);
static_assert(offsetof(UBakeRenderCaptureResults, PackedMRSMap) == 0x00B8);
static_assert(offsetof(UBakeRenderCaptureResults, MetallicMap) == 0x00C0);
static_assert(offsetof(UBakeRenderCaptureResults, RoughnessMap) == 0x00C8);
static_assert(offsetof(UBakeRenderCaptureResults, SpecularMap) == 0x00D0);
static_assert(offsetof(UBakeRenderCaptureResults, EmissiveMap) == 0x00D8);
static_assert(offsetof(UBakeRenderCaptureResults, OpacityMap) == 0x00E0);
static_assert(offsetof(UBakeRenderCaptureResults, SubsurfaceColorMap) == 0x00E8);
static_assert(offsetof(URenderCaptureProperties, Resolution) == 0x00A8);
static_assert(offsetof(UBakeRenderCaptureToolProperties, MapPreview) == 0x00A8);
static_assert(offsetof(UBakeRenderCaptureToolProperties, MapPreviewNamesList) == 0x00B8);
static_assert(offsetof(UBakeRenderCaptureToolProperties, SamplesPerPixel) == 0x00C8);
static_assert(offsetof(UBakeRenderCaptureToolProperties, TextureSize) == 0x00CC);
static_assert(offsetof(UBakeRenderCaptureInputToolProperties, TargetStaticMesh) == 0x00A8);
static_assert(offsetof(UBakeRenderCaptureInputToolProperties, TargetUVLayer) == 0x00B0);
static_assert(offsetof(UBakeRenderCaptureInputToolProperties, TargetUVLayerNamesList) == 0x00C0);
static_assert(offsetof(UBakeRenderCaptureTool, Actors) == 0x00C8);
static_assert(offsetof(UBakeRenderCaptureTool, Settings) == 0x00D8);
static_assert(offsetof(UBakeRenderCaptureTool, RenderCaptureProperties) == 0x00E0);
static_assert(offsetof(UBakeRenderCaptureTool, InputMeshSettings) == 0x00E8);
static_assert(offsetof(UBakeRenderCaptureTool, VisualizationProps) == 0x00F0);
static_assert(offsetof(UBakeRenderCaptureTool, ResultSettings) == 0x00F8);
static_assert(offsetof(UBakeRenderCaptureTool, EmptyNormalMap) == 0x0430);
static_assert(offsetof(UBakeRenderCaptureTool, EmptyColorMapBlack) == 0x0438);
static_assert(offsetof(UBakeRenderCaptureTool, EmptyColorMapWhite) == 0x0440);
static_assert(offsetof(UBakeRenderCaptureTool, EmptyEmissiveMap) == 0x0448);
static_assert(offsetof(UBakeRenderCaptureTool, EmptyOpacityMap) == 0x0450);
static_assert(offsetof(UBakeRenderCaptureTool, EmptySubsurfaceColorMap) == 0x0458);
static_assert(offsetof(UBakeRenderCaptureTool, EmptyPackedMRSMap) == 0x0460);
static_assert(offsetof(UBakeRenderCaptureTool, EmptyRoughnessMap) == 0x0468);
static_assert(offsetof(UBakeRenderCaptureTool, EmptyMetallicMap) == 0x0470);
static_assert(offsetof(UBakeRenderCaptureTool, EmptySpecularMap) == 0x0478);
static_assert(offsetof(UBakeRenderCaptureTool, WorkingPreviewMaterial) == 0x0488);
static_assert(offsetof(UBakeRenderCaptureTool, ErrorPreviewMaterial) == 0x0490);
static_assert(offsetof(UBakeRenderCaptureTool, PreviewMaterialRC) == 0x0498);
static_assert(offsetof(UBakeRenderCaptureTool, PreviewMaterialPackedRC) == 0x04A0);
static_assert(offsetof(UBakeRenderCaptureTool, PreviewMaterialRC_Subsurface) == 0x04A8);
static_assert(offsetof(UBakeRenderCaptureTool, PreviewMaterialPackedRC_Subsurface) == 0x04B0);
static_assert(offsetof(UBakeRenderCaptureTool, PreviewMesh) == 0x04B8);
static_assert(offsetof(UBakeTransformToolProperties, BakeScale) == 0x00A9);
static_assert(offsetof(UBakeTransformTool, BasicProperties) == 0x00B8);
static_assert(offsetof(UConvertMeshesTool, BasicProperties) == 0x00C0);
static_assert(offsetof(UConvertMeshesTool, OutputTypeProperties) == 0x00C8);
static_assert(offsetof(UConvertToPolygonsToolProperties, ConversionMode) == 0x00A8);
static_assert(offsetof(UOutputPolygroupLayerProperties, GroupLayer) == 0x00A8);
static_assert(offsetof(UOutputPolygroupLayerProperties, OptionsList) == 0x00B0);
static_assert(offsetof(UOutputPolygroupLayerProperties, NewLayerName) == 0x00C8);
static_assert(offsetof(UConvertToPolygonsOperatorFactory, ConvertToPolygonsTool) == 0x0030);
static_assert(offsetof(UConvertToPolygonsTool, Settings) == 0x00B8);
static_assert(offsetof(UConvertToPolygonsTool, CopyFromLayerProperties) == 0x00C0);
static_assert(offsetof(UConvertToPolygonsTool, OutputProperties) == 0x00C8);
static_assert(offsetof(UConvertToPolygonsTool, PreviewCompute) == 0x00D0);
static_assert(offsetof(UConvertToPolygonsTool, PreviewGeometry) == 0x00D8);
static_assert(offsetof(UCubeGridToolProperties, GridFrameOrigin) == 0x00A8);
static_assert(offsetof(UCubeGridToolProperties, GridFrameOrientation) == 0x00C0);
static_assert(offsetof(UCubeGridToolProperties, FaceSelectionMode) == 0x011C);
static_assert(offsetof(UCubeGridToolProperties, ToggleCornerMode) == 0x0120);
static_assert(offsetof(UCubeGridToolProperties, PushPull) == 0x0130);
static_assert(offsetof(UCubeGridToolProperties, ResizeGrid) == 0x0140);
static_assert(offsetof(UCubeGridToolProperties, SlideSelection) == 0x0150);
static_assert(offsetof(UCubeGridToolProperties, FlipSelection) == 0x0160);
static_assert(offsetof(UCubeGridToolProperties, GridGizmo) == 0x0170);
static_assert(offsetof(UCubeGridToolProperties, QuickShiftGizmo) == 0x0180);
static_assert(offsetof(UCubeGridToolProperties, AlignGizmo) == 0x0190);
static_assert(offsetof(UCubeGridToolActions, GridSourceActor) == 0x00B0);
static_assert(offsetof(UCubeGridTool, GridGizmo) == 0x00C0);
static_assert(offsetof(UCubeGridTool, GridGizmoAlignmentMechanic) == 0x00C8);
static_assert(offsetof(UCubeGridTool, GridGizmoTransformProxy) == 0x00D0);
static_assert(offsetof(UCubeGridTool, LineSets) == 0x00D8);
static_assert(offsetof(UCubeGridTool, ClickDragBehavior) == 0x00E0);
static_assert(offsetof(UCubeGridTool, HoverBehavior) == 0x00E8);
static_assert(offsetof(UCubeGridTool, CtrlMiddleClickBehavior) == 0x00F0);
static_assert(offsetof(UCubeGridTool, MiddleClickDragBehavior) == 0x00F8);
static_assert(offsetof(UCubeGridTool, Settings) == 0x0100);
static_assert(offsetof(UCubeGridTool, ToolActions) == 0x0108);
static_assert(offsetof(UCubeGridTool, DuringActivityActions) == 0x0110);
static_assert(offsetof(UCubeGridTool, MaterialProperties) == 0x0118);
static_assert(offsetof(UCubeGridTool, OutputTypeProperties) == 0x0120);
static_assert(offsetof(UCubeGridTool, Target) == 0x0128);
static_assert(offsetof(UCubeGridTool, Preview) == 0x02B0);
static_assert(offsetof(UDeformMeshPolygonsTransformProperties, DeformationStrategy) == 0x00A8);
static_assert(offsetof(UDeformMeshPolygonsTransformProperties, TransformMode) == 0x00A9);
static_assert(offsetof(UDeformMeshPolygonsTransformProperties, SelectedWeightScheme) == 0x00B0);
static_assert(offsetof(UDeformMeshPolygonsTool, PreviewMeshActor) == 0x0108);
static_assert(offsetof(UDeformMeshPolygonsTool, DynamicMeshComponent) == 0x0110);
static_assert(offsetof(UDeformMeshPolygonsTool, TransformProps) == 0x0118);
static_assert(offsetof(UDisplaceMeshCommonProperties, DisplacementType) == 0x00A8);
static_assert(offsetof(UDisplaceMeshCommonProperties, SubdivisionType) == 0x00B4);
static_assert(offsetof(UDisplaceMeshCommonProperties, WeightMap) == 0x00BC);
static_assert(offsetof(UDisplaceMeshCommonProperties, WeightMapsList) == 0x00C8);
static_assert(offsetof(USelectiveTessellationProperties, SelectionType) == 0x00A8);
static_assert(offsetof(USelectiveTessellationProperties, ActiveMaterial) == 0x00AC);
static_assert(offsetof(USelectiveTessellationProperties, MaterialIDList) == 0x00B8);
static_assert(offsetof(UDisplaceMeshTextureMapProperties, DisplacementMap) == 0x00A8);
static_assert(offsetof(UDisplaceMeshTextureMapProperties, Channel) == 0x00B0);
static_assert(offsetof(UDisplaceMeshTextureMapProperties, UVScale) == 0x00B8);
static_assert(offsetof(UDisplaceMeshTextureMapProperties, UVOffset) == 0x00C8);
static_assert(offsetof(UDisplaceMeshTextureMapProperties, AdjustmentCurve) == 0x00E0);
static_assert(offsetof(UDisplaceMeshDirectionalFilterProperties, FilterDirection) == 0x00B0);
static_assert(offsetof(UDisplaceMeshPerlinNoiseProperties, PerlinLayerProperties) == 0x00A8);
static_assert(offsetof(UDisplaceMeshSineWaveProperties, SineWaveDirection) == 0x00B0);
static_assert(offsetof(UDisplaceMeshTool, CommonProperties) == 0x00B8);
static_assert(offsetof(UDisplaceMeshTool, DirectionalFilterProperties) == 0x00C0);
static_assert(offsetof(UDisplaceMeshTool, TextureMapProperties) == 0x00C8);
static_assert(offsetof(UDisplaceMeshTool, NoiseProperties) == 0x00D0);
static_assert(offsetof(UDisplaceMeshTool, SineWaveProperties) == 0x00D8);
static_assert(offsetof(UDisplaceMeshTool, SelectiveTessellationProperties) == 0x00E0);
static_assert(offsetof(UDisplaceMeshTool, ActiveContrastCurveTarget) == 0x00E8);
static_assert(offsetof(UDisplaceMeshTool, PreviewMeshActor) == 0x0430);
static_assert(offsetof(UDisplaceMeshTool, DynamicMeshComponent) == 0x0438);
static_assert(offsetof(UDrawPolyPathProperties, WidthMode) == 0x00A8);
static_assert(offsetof(UDrawPolyPathProperties, RadiusMode) == 0x00B4);
static_assert(offsetof(UDrawPolyPathProperties, ExtrudeMode) == 0x00C4);
static_assert(offsetof(UDrawPolyPathExtrudeProperties, Direction) == 0x00A8);
static_assert(offsetof(UDrawPolyPathTool, OutputTypeProperties) == 0x00B0);
static_assert(offsetof(UDrawPolyPathTool, TransformProps) == 0x00B8);
static_assert(offsetof(UDrawPolyPathTool, ExtrudeProperties) == 0x00C0);
static_assert(offsetof(UDrawPolyPathTool, MaterialProperties) == 0x00C8);
static_assert(offsetof(UDrawPolyPathTool, PlaneMechanic) == 0x0190);
static_assert(offsetof(UDrawPolyPathTool, EditPreview) == 0x0258);
static_assert(offsetof(UDrawPolyPathTool, ExtrudeHeightMechanic) == 0x0260);
static_assert(offsetof(UDrawPolyPathTool, CurveDistMechanic) == 0x0268);
static_assert(offsetof(UDrawPolyPathTool, SurfacePathMechanic) == 0x0270);
static_assert(offsetof(UDynamicMeshBrushTool, PreviewMesh) == 0x0280);
static_assert(offsetof(FBrushToolRadius, SizeType) == 0x0000);
static_assert(offsetof(UDynamicMeshBrushProperties, BrushSize) == 0x00A8);
static_assert(offsetof(UDynamicMeshBrushSculptProperties, PrimaryBrushType) == 0x00A9);
static_assert(offsetof(UFixedPlaneBrushProperties, position) == 0x00B0);
static_assert(offsetof(UFixedPlaneBrushProperties, Rotation) == 0x00D0);
static_assert(offsetof(UDynamicMeshSculptTool, BrushProperties) == 0x0100);
static_assert(offsetof(UDynamicMeshSculptTool, SculptProperties) == 0x0108);
static_assert(offsetof(UDynamicMeshSculptTool, SculptMaxBrushProperties) == 0x0110);
static_assert(offsetof(UDynamicMeshSculptTool, KelvinBrushProperties) == 0x0118);
static_assert(offsetof(UDynamicMeshSculptTool, RemeshProperties) == 0x0120);
static_assert(offsetof(UDynamicMeshSculptTool, GizmoProperties) == 0x0128);
static_assert(offsetof(UDynamicMeshSculptTool, ViewProperties) == 0x0130);
static_assert(offsetof(UDynamicMeshSculptTool, SculptToolActions) == 0x0138);
static_assert(offsetof(UDynamicMeshSculptTool, BrushIndicator) == 0x01A0);
static_assert(offsetof(UDynamicMeshSculptTool, BrushIndicatorMaterial) == 0x01A8);
static_assert(offsetof(UDynamicMeshSculptTool, BrushIndicatorMesh) == 0x01B0);
static_assert(offsetof(UDynamicMeshSculptTool, DynamicMeshComponent) == 0x01B8);
static_assert(offsetof(UDynamicMeshSculptTool, ActiveOverrideMaterial) == 0x01C0);
static_assert(offsetof(UDynamicMeshSculptTool, PlaneTransformGizmo) == 0x0FF0);
static_assert(offsetof(UDynamicMeshSculptTool, PlaneTransformProxy) == 0x0FF8);
static_assert(offsetof(UEditNormalsToolProperties, NormalCalculationMethod) == 0x00A9);
static_assert(offsetof(UEditNormalsToolProperties, SplitNormalMethod) == 0x00AC);
static_assert(offsetof(UEditNormalsOperatorFactory, Tool) == 0x0030);
static_assert(offsetof(UEditNormalsTool, BasicProperties) == 0x00B8);
static_assert(offsetof(UEditNormalsTool, AdvancedProperties) == 0x00C0);
static_assert(offsetof(UEditNormalsTool, PolygroupLayerProperties) == 0x00C8);
static_assert(offsetof(UEditNormalsTool, Previews) == 0x00D0);
static_assert(offsetof(UEditPivotToolProperties, RotationMode) == 0x00A9);
static_assert(offsetof(FEditPivotTarget, TransformProxy) == 0x0000);
static_assert(offsetof(FEditPivotTarget, TransformGizmo) == 0x0008);
static_assert(offsetof(UEditPivotTool, TransformProps) == 0x00C0);
static_assert(offsetof(UEditPivotTool, EditPivotActions) == 0x00C8);
static_assert(offsetof(UEditPivotTool, ActiveGizmos) == 0x01A0);
static_assert(offsetof(UEditPivotTool, DragAlignmentMechanic) == 0x01B0);
static_assert(offsetof(UEditUVIslandsTool, MaterialSettings) == 0x0100);
static_assert(offsetof(UEditUVIslandsTool, CheckerMaterial) == 0x0108);
static_assert(offsetof(UEditUVIslandsTool, PreviewMeshActor) == 0x0110);
static_assert(offsetof(UEditUVIslandsTool, DynamicMeshComponent) == 0x0118);
static_assert(offsetof(UEditUVIslandsTool, SelectionMechanic) == 0x0120);
static_assert(offsetof(UEditUVIslandsTool, TransformGizmo) == 0x0130);
static_assert(offsetof(UEditUVIslandsTool, TransformProxy) == 0x0138);
static_assert(offsetof(UHoleFillToolProperties, FillType) == 0x00A8);
static_assert(offsetof(UHoleFillStatisticsProperties, InitialHoles) == 0x00A8);
static_assert(offsetof(UHoleFillStatisticsProperties, SelectedHoles) == 0x00B8);
static_assert(offsetof(UHoleFillStatisticsProperties, SuccessfulFills) == 0x00C8);
static_assert(offsetof(UHoleFillStatisticsProperties, FailedFills) == 0x00D8);
static_assert(offsetof(UHoleFillStatisticsProperties, RemainingHoles) == 0x00E8);
static_assert(offsetof(UHoleFillOperatorFactory, FillTool) == 0x0030);
static_assert(offsetof(UHoleFillTool, SmoothHoleFillProperties) == 0x00B8);
static_assert(offsetof(UHoleFillTool, Properties) == 0x00C0);
static_assert(offsetof(UHoleFillTool, Actions) == 0x00C8);
static_assert(offsetof(UHoleFillTool, Statistics) == 0x00D0);
static_assert(offsetof(UHoleFillTool, Preview) == 0x00D8);
static_assert(offsetof(UHoleFillTool, SelectionMechanic) == 0x00E0);
static_assert(offsetof(ULatticeDeformerToolProperties, InterpolationType) == 0x00C0);
static_assert(offsetof(ULatticeDeformerToolProperties, GizmoCoordinateSystem) == 0x00C4);
static_assert(offsetof(ULatticeDeformerOperatorFactory, LatticeDeformerTool) == 0x0030);
static_assert(offsetof(ULatticeDeformerTool, ControlPointsMechanic) == 0x00D8);
static_assert(offsetof(ULatticeDeformerTool, Settings) == 0x00E0);
static_assert(offsetof(ULatticeDeformerTool, Preview) == 0x00E8);
static_assert(offsetof(UMeshAttributePaintBrushOperationProperties, BrushAction) == 0x00A8);
static_assert(offsetof(UMeshAttributePaintToolProperties, Attribute) == 0x00A8);
static_assert(offsetof(UMeshAttributePaintTool, BrushActionProps) == 0x02C0);
static_assert(offsetof(UMeshAttributePaintTool, AttribProps) == 0x02C8);
static_assert(offsetof(UMeshBoundaryToolBase, SelectionMechanic) == 0x01A0);
static_assert(offsetof(UGroupPaintBrushFilterProperties, PrimaryBrushType) == 0x00A8);
static_assert(offsetof(UGroupPaintBrushFilterProperties, SubToolType) == 0x00A9);
static_assert(offsetof(UGroupPaintBrushFilterProperties, BrushAreaMode) == 0x00B0);
static_assert(offsetof(UGroupPaintBrushFilterProperties, VisibilityFilter) == 0x00CA);
static_assert(offsetof(UMeshSculptToolBase, BrushProperties) == 0x0100);
static_assert(offsetof(UMeshSculptToolBase, GizmoProperties) == 0x0108);
static_assert(offsetof(UMeshSculptToolBase, BrushOpPropSets) == 0x0230);
static_assert(offsetof(UMeshSculptToolBase, SecondaryBrushOpPropSets) == 0x02D0);
static_assert(offsetof(UMeshSculptToolBase, ViewProperties) == 0x0A10);
static_assert(offsetof(UMeshSculptToolBase, ActiveOverrideMaterial) == 0x0A18);
static_assert(offsetof(UMeshSculptToolBase, BrushIndicator) == 0x0A20);
static_assert(offsetof(UMeshSculptToolBase, BrushIndicatorMaterial) == 0x0A30);
static_assert(offsetof(UMeshSculptToolBase, BrushIndicatorMesh) == 0x0A38);
static_assert(offsetof(UMeshSculptToolBase, PlaneTransformGizmo) == 0x0A40);
static_assert(offsetof(UMeshSculptToolBase, PlaneTransformProxy) == 0x0A48);
static_assert(offsetof(UMeshGroupPaintTool, PolygroupLayerProperties) == 0x0B98);
static_assert(offsetof(UMeshGroupPaintTool, FilterProperties) == 0x0BA0);
static_assert(offsetof(UMeshGroupPaintTool, PaintBrushOpProperties) == 0x0BA8);
static_assert(offsetof(UMeshGroupPaintTool, EraseBrushOpProperties) == 0x0BB0);
static_assert(offsetof(UMeshGroupPaintTool, FreezeActions) == 0x0BB8);
static_assert(offsetof(UMeshGroupPaintTool, PolyLassoMechanic) == 0x0BC8);
static_assert(offsetof(UMeshGroupPaintTool, PreviewMeshActor) == 0x0BD0);
static_assert(offsetof(UMeshGroupPaintTool, DynamicMeshComponent) == 0x0BD8);
static_assert(offsetof(UMeshGroupPaintTool, MeshElementsDisplay) == 0x0BE0);
static_assert(offsetof(UMeshInspectorProperties, ShowIndices) == 0x00BC);
static_assert(offsetof(UMeshInspectorMaterialProperties, MaterialMode) == 0x00A8);
static_assert(offsetof(UMeshInspectorMaterialProperties, OverrideMaterial) == 0x00B0);
static_assert(offsetof(UMeshInspectorMaterialProperties, UVChannel) == 0x00B8);
static_assert(offsetof(UMeshInspectorMaterialProperties, UVChannelNamesList) == 0x00C8);
static_assert(offsetof(UMeshInspectorMaterialProperties, Color) == 0x00DC);
static_assert(offsetof(UMeshInspectorMaterialProperties, TransparentMaterialColor) == 0x00F8);
static_assert(offsetof(UMeshInspectorMaterialProperties, CheckerMaterial) == 0x0110);
static_assert(offsetof(UMeshInspectorMaterialProperties, ActiveCustomMaterial) == 0x0118);
static_assert(offsetof(UMeshInspectorTool, Settings) == 0x00B8);
static_assert(offsetof(UMeshInspectorTool, PolygroupLayerProperties) == 0x00C0);
static_assert(offsetof(UMeshInspectorTool, MaterialSettings) == 0x00C8);
static_assert(offsetof(UMeshInspectorTool, PreviewMesh) == 0x00D8);
static_assert(offsetof(UMeshInspectorTool, DrawnLineSet) == 0x00E0);
static_assert(offsetof(UMeshInspectorTool, DefaultMaterial) == 0x00E8);
static_assert(offsetof(UMeshSelectionToolProperties, SelectionMode) == 0x00A8);
static_assert(offsetof(UMeshSelectionToolProperties, FaceColorMode) == 0x00B4);
static_assert(offsetof(UMeshSelectionTool, SelectionProps) == 0x02C8);
static_assert(offsetof(UMeshSelectionTool, SelectionActions) == 0x02D0);
static_assert(offsetof(UMeshSelectionTool, EditActions) == 0x02D8);
static_assert(offsetof(UMeshSelectionTool, MeshStatisticsProperties) == 0x02E0);
static_assert(offsetof(UMeshSelectionTool, MeshElementsDisplay) == 0x02E8);
static_assert(offsetof(UMeshSelectionTool, UVChannelProperties) == 0x02F0);
static_assert(offsetof(UMeshSelectionTool, PolygroupLayerProperties) == 0x02F8);
static_assert(offsetof(UMeshSelectionTool, Selection) == 0x0358);
static_assert(offsetof(UMeshSelectionTool, SpawnedActors) == 0x0360);
static_assert(offsetof(UMeshSpaceDeformerToolProperties, SelectedOperationType) == 0x00A8);
static_assert(offsetof(UMeshSpaceDeformerToolProperties, FlareProfileType) == 0x00BC);
static_assert(offsetof(USpaceDeformerOperatorFactory, SpaceDeformerTool) == 0x0030);
static_assert(offsetof(UMeshSpaceDeformerTool, Settings) == 0x00B8);
static_assert(offsetof(UMeshSpaceDeformerTool, ToolActions) == 0x00C0);
static_assert(offsetof(UMeshSpaceDeformerTool, StateTarget) == 0x00C8);
static_assert(offsetof(UMeshSpaceDeformerTool, DragAlignmentMechanic) == 0x00D0);
static_assert(offsetof(UMeshSpaceDeformerTool, Preview) == 0x00D8);
static_assert(offsetof(UMeshSpaceDeformerTool, OriginalMeshPreview) == 0x00F0);
static_assert(offsetof(UMeshSpaceDeformerTool, IntervalGizmo) == 0x00F8);
static_assert(offsetof(UMeshSpaceDeformerTool, TransformGizmo) == 0x0100);
static_assert(offsetof(UMeshSpaceDeformerTool, TransformProxy) == 0x0108);
static_assert(offsetof(UMeshSpaceDeformerTool, UpIntervalSource) == 0x0110);
static_assert(offsetof(UMeshSpaceDeformerTool, DownIntervalSource) == 0x0118);
static_assert(offsetof(UMeshSpaceDeformerTool, ForwardIntervalSource) == 0x0120);
static_assert(offsetof(UVertexBrushSculptProperties, PrimaryBrushType) == 0x00A8);
static_assert(offsetof(UVertexBrushSculptProperties, PrimaryFalloffType) == 0x00A9);
static_assert(offsetof(UVertexBrushSculptProperties, BrushFilter) == 0x00AA);
static_assert(offsetof(UVertexBrushSculptProperties, Tool) == 0x00AC);
static_assert(offsetof(UVertexBrushAlphaProperties, Alpha) == 0x00A8);
static_assert(offsetof(UMeshVertexSculptTool, SculptProperties) == 0x0B98);
static_assert(offsetof(UMeshVertexSculptTool, AlphaProperties) == 0x0BA0);
static_assert(offsetof(UMeshVertexSculptTool, BrushAlpha) == 0x0BA8);
static_assert(offsetof(UMeshVertexSculptTool, SymmetryProperties) == 0x0BB0);
static_assert(offsetof(UMeshVertexSculptTool, PreviewMeshActor) == 0x0BB8);
static_assert(offsetof(UMeshVertexSculptTool, DynamicMeshComponent) == 0x0BC0);
static_assert(offsetof(UMirrorToolProperties, OperationMode) == 0x00A8);
static_assert(offsetof(UMirrorToolProperties, CtrlClickBehavior) == 0x00B9);
static_assert(offsetof(UMirrorToolProperties, SaveMode) == 0x00BC);
static_assert(offsetof(UMirrorOperatorFactory, MirrorTool) == 0x0030);
static_assert(offsetof(UMirrorTool, Settings) == 0x00C0);
static_assert(offsetof(UMirrorTool, ToolActions) == 0x00C8);
static_assert(offsetof(UMirrorTool, MeshesToMirror) == 0x00D0);
static_assert(offsetof(UMirrorTool, Previews) == 0x00E0);
static_assert(offsetof(UMirrorTool, PlaneMechanic) == 0x0120);
static_assert(offsetof(UOffsetMeshToolProperties, OffsetType) == 0x00A8);
static_assert(offsetof(UOffsetMeshTool, OffsetProperties) == 0x0400);
static_assert(offsetof(UOffsetMeshTool, IterativeProperties) == 0x0408);
static_assert(offsetof(UOffsetMeshTool, ImplicitProperties) == 0x0410);
static_assert(offsetof(UOffsetMeshTool, WeightMapProperties) == 0x0418);
static_assert(offsetof(FPhysicsSphereData, Transform) == 0x0010);
static_assert(offsetof(FPhysicsSphereData, Element) == 0x0070);
static_assert(offsetof(FPhysicsBoxData, Dimensions) == 0x0000);
static_assert(offsetof(FPhysicsBoxData, Transform) == 0x0020);
static_assert(offsetof(FPhysicsBoxData, Element) == 0x0080);
static_assert(offsetof(FPhysicsCapsuleData, Transform) == 0x0010);
static_assert(offsetof(FPhysicsCapsuleData, Element) == 0x0070);
static_assert(offsetof(FPhysicsConvexData, Element) == 0x0008);
static_assert(offsetof(FPhysicsLevelSetData, Element) == 0x0000);
static_assert(offsetof(UPhysicsObjectToolPropertySet, ObjectName) == 0x00A8);
static_assert(offsetof(UPhysicsObjectToolPropertySet, CollisionType) == 0x00B8);
static_assert(offsetof(UPhysicsObjectToolPropertySet, Spheres) == 0x00C0);
static_assert(offsetof(UPhysicsObjectToolPropertySet, Boxes) == 0x00D0);
static_assert(offsetof(UPhysicsObjectToolPropertySet, Capsules) == 0x00E0);
static_assert(offsetof(UPhysicsObjectToolPropertySet, Convexes) == 0x00F0);
static_assert(offsetof(UPhysicsObjectToolPropertySet, LevelSets) == 0x0100);
static_assert(offsetof(UCollisionGeometryVisualizationProperties, Color) == 0x00B0);
static_assert(offsetof(UExtractCollisionToolProperties, CollisionType) == 0x00A8);
static_assert(offsetof(UExtractCollisionGeometryTool, OutputTypeProperties) == 0x00B8);
static_assert(offsetof(UExtractCollisionGeometryTool, Settings) == 0x00C0);
static_assert(offsetof(UExtractCollisionGeometryTool, VizSettings) == 0x00C8);
static_assert(offsetof(UExtractCollisionGeometryTool, ObjectProps) == 0x00D0);
static_assert(offsetof(UExtractCollisionGeometryTool, PreviewElements) == 0x00D8);
static_assert(offsetof(UExtractCollisionGeometryTool, PreviewMesh) == 0x00E0);
static_assert(offsetof(UPhysicsInspectorTool, VizSettings) == 0x00B8);
static_assert(offsetof(UPhysicsInspectorTool, ObjectData) == 0x00C0);
static_assert(offsetof(UPhysicsInspectorTool, LineMaterial) == 0x00D0);
static_assert(offsetof(UPhysicsInspectorTool, PreviewElements) == 0x00D8);
static_assert(offsetof(USetCollisionGeometryToolProperties, GeometryType) == 0x00A8);
static_assert(offsetof(USetCollisionGeometryToolProperties, InputMode) == 0x00AC);
static_assert(offsetof(USetCollisionGeometryToolProperties, SweepAxis) == 0x00DC);
static_assert(offsetof(USetCollisionGeometryToolProperties, SetCollisionType) == 0x00E8);
static_assert(offsetof(USetCollisionGeometryTool, Settings) == 0x00C0);
static_assert(offsetof(USetCollisionGeometryTool, PolygroupLayerProperties) == 0x00C8);
static_assert(offsetof(USetCollisionGeometryTool, VizSettings) == 0x00D0);
static_assert(offsetof(USetCollisionGeometryTool, CollisionProps) == 0x00D8);
static_assert(offsetof(USetCollisionGeometryTool, LineMaterial) == 0x00E0);
static_assert(offsetof(USetCollisionGeometryTool, PreviewGeom) == 0x00F0);
static_assert(offsetof(UPlaneCutOperatorFactory, CutTool) == 0x0030);
static_assert(offsetof(UPlaneCutTool, BasicProperties) == 0x00B8);
static_assert(offsetof(UPlaneCutTool, AcceptProperties) == 0x00C0);
static_assert(offsetof(UPlaneCutTool, Previews) == 0x00C8);
static_assert(offsetof(UPlaneCutTool, MeshesToCut) == 0x00D8);
static_assert(offsetof(UPlaneCutTool, PlaneMechanic) == 0x00E8);
static_assert(offsetof(URemeshMeshToolProperties, SmoothingType) == 0x00BC);
static_assert(offsetof(URemeshMeshToolProperties, RemeshType) == 0x00BF);
static_assert(offsetof(URemeshMeshTool, BasicProperties) == 0x00C0);
static_assert(offsetof(URemeshMeshTool, MeshStatisticsProperties) == 0x00C8);
static_assert(offsetof(URemeshMeshTool, Preview) == 0x00D0);
static_assert(offsetof(URemeshMeshTool, MeshElementsDisplay) == 0x00D8);
static_assert(offsetof(UMeshAnalysisProperties, SurfaceArea) == 0x00A8);
static_assert(offsetof(UMeshAnalysisProperties, Volume) == 0x00B8);
static_assert(offsetof(UMeshStatisticsProperties, Mesh) == 0x00A8);
static_assert(offsetof(UMeshStatisticsProperties, UV) == 0x00B8);
static_assert(offsetof(UMeshStatisticsProperties, Attributes) == 0x00C8);
static_assert(offsetof(URemoveOccludedTrianglesToolProperties, OcclusionTestMethod) == 0x00A8);
static_assert(offsetof(URemoveOccludedTrianglesToolProperties, TriangleSampling) == 0x00A9);
static_assert(offsetof(URemoveOccludedTrianglesToolProperties, Action) == 0x00D4);
static_assert(offsetof(URemoveOccludedTrianglesOperatorFactory, Tool) == 0x0030);
static_assert(offsetof(URemoveOccludedTrianglesTool, BasicProperties) == 0x00B8);
static_assert(offsetof(URemoveOccludedTrianglesTool, PolygroupLayersProperties) == 0x00C0);
static_assert(offsetof(URemoveOccludedTrianglesTool, AdvancedProperties) == 0x00C8);
static_assert(offsetof(URemoveOccludedTrianglesTool, Previews) == 0x00D0);
static_assert(offsetof(URemoveOccludedTrianglesTool, PreviewCopies) == 0x00E0);
static_assert(offsetof(URevolveBoundaryOperatorFactory, RevolveBoundaryTool) == 0x0030);
static_assert(offsetof(URevolveBoundaryToolProperties, CapFillMode) == 0x0118);
static_assert(offsetof(URevolveBoundaryToolProperties, AxisOrigin) == 0x0120);
static_assert(offsetof(URevolveBoundaryToolProperties, AxisOrientation) == 0x0138);
static_assert(offsetof(URevolveBoundaryTool, OutputTypeProperties) == 0x01C8);
static_assert(offsetof(URevolveBoundaryTool, Settings) == 0x01D0);
static_assert(offsetof(URevolveBoundaryTool, MaterialProperties) == 0x01D8);
static_assert(offsetof(URevolveBoundaryTool, PlaneMechanic) == 0x01E0);
static_assert(offsetof(URevolveBoundaryTool, Preview) == 0x01E8);
static_assert(offsetof(USculptBrushProperties, BrushSize) == 0x00A8);
static_assert(offsetof(UWorkPlaneProperties, position) == 0x00B0);
static_assert(offsetof(UWorkPlaneProperties, Rotation) == 0x00D0);
static_assert(offsetof(USeamSculptTool, Settings) == 0x02C0);
static_assert(offsetof(USeamSculptTool, PreviewGeom) == 0x02C8);
static_assert(offsetof(USelfUnionMeshesTool, Properties) == 0x0100);
static_assert(offsetof(USelfUnionMeshesTool, DrawnLineSet) == 0x0108);
static_assert(offsetof(USkinWeightsBindingToolProperties, CurrentBone) == 0x00B0);
static_assert(offsetof(USkinWeightsBindingToolProperties, BindingType) == 0x00C0);
static_assert(offsetof(USkinWeightsBindingTool, Properties) == 0x00C0);
static_assert(offsetof(USkinWeightsBindingTool, Preview) == 0x00C8);
static_assert(offsetof(USkinWeightsPaintToolProperties, CurrentBone) == 0x00B0);
static_assert(offsetof(USkinWeightsPaintTool, ToolProps) == 0x02C0);
static_assert(offsetof(USmoothMeshToolProperties, SmoothingType) == 0x00A8);
static_assert(offsetof(USmoothMeshTool, SmoothProperties) == 0x0400);
static_assert(offsetof(USmoothMeshTool, IterativeProperties) == 0x0408);
static_assert(offsetof(USmoothMeshTool, DiffusionProperties) == 0x0410);
static_assert(offsetof(USmoothMeshTool, ImplicitProperties) == 0x0418);
static_assert(offsetof(USmoothMeshTool, WeightMapProperties) == 0x0420);
static_assert(offsetof(USplitMeshesTool, BasicProperties) == 0x00B8);
static_assert(offsetof(USplitMeshesTool, OutputTypeProperties) == 0x00C0);
static_assert(offsetof(UTransferMeshToolProperties, SourceLOD) == 0x00B0);
static_assert(offsetof(UTransferMeshToolProperties, TargetLod) == 0x00C0);
static_assert(offsetof(UTransferMeshToolProperties, SourceLODNamesList) == 0x00D8);
static_assert(offsetof(UTransferMeshToolProperties, TargetLODNamesList) == 0x00F8);
static_assert(offsetof(UTransferMeshTool, BasicProperties) == 0x00C0);
static_assert(offsetof(UTransformMeshesToolProperties, TransformMode) == 0x00A8);
static_assert(offsetof(UTransformMeshesToolProperties, SnapDragSource) == 0x00AC);
static_assert(offsetof(UTransformMeshesToolProperties, RotationMode) == 0x00AD);
static_assert(offsetof(FTransformMeshesTarget, TransformProxy) == 0x0000);
static_assert(offsetof(FTransformMeshesTarget, TransformGizmo) == 0x0008);
static_assert(offsetof(UTransformMeshesTool, TransformProps) == 0x00C0);
static_assert(offsetof(UTransformMeshesTool, ActiveGizmos) == 0x00C8);
static_assert(offsetof(UTransformMeshesTool, DragAlignmentMechanic) == 0x00D8);
static_assert(offsetof(UVolumeToMeshTool, Settings) == 0x0098);
static_assert(offsetof(UVolumeToMeshTool, OutputTypeProperties) == 0x00A0);
static_assert(offsetof(UVolumeToMeshTool, PreviewMesh) == 0x00A8);
static_assert(offsetof(UVolumeToMeshTool, TargetVolume) == 0x00B0);
static_assert(offsetof(UVolumeToMeshTool, VolumeEdgesSet) == 0x00D0);
static_assert(offsetof(UVoxelBlendMeshesToolProperties, Operation) == 0x00B8);
static_assert(offsetof(UVoxelBlendMeshesTool, BlendProperties) == 0x0118);
static_assert(offsetof(UVoxelMorphologyMeshesToolProperties, Operation) == 0x00A8);
static_assert(offsetof(UVoxelMorphologyMeshesTool, MorphologyProperties) == 0x0118);
static_assert(offsetof(UVoxelSolidifyMeshesTool, SolidifyProperties) == 0x0118);
static_assert(offsetof(UWeldMeshEdgesOperatorFactory, WeldMeshEdgesTool) == 0x0030);
static_assert(offsetof(UWeldMeshEdgesTool, Settings) == 0x00B8);
static_assert(offsetof(UWeldMeshEdgesTool, PreviewCompute) == 0x00C0);
static_assert(offsetof(UWeldMeshEdgesTool, MeshElementsDisplay) == 0x00C8);
static_assert(offsetof(UWeldMeshEdgesTool, OperatorFactory) == 0x00D0);
