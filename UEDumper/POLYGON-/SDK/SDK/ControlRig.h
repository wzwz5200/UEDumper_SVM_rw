
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: Constraints
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: RigVM

#pragma pack(push, 0x1)

/// Enum /Script/ControlRig.ERigElementType
/// Size: 0x01 (1 bytes)
enum class ERigElementType : uint8_t
{
	ERigElementType__None                                                            = 0,
	ERigElementType__Bone                                                            = 1,
	ERigElementType__Null                                                            = 2,
	ERigElementType__Space                                                           = 2,
	ERigElementType__Control                                                         = 4,
	ERigElementType__Curve                                                           = 8,
	ERigElementType__RigidBody                                                       = 16,
	ERigElementType__Reference                                                       = 32,
	ERigElementType__Last                                                            = 64,
	ERigElementType__All                                                             = 63,
	ERigElementType__ToResetAfterConstructionEvent                                   = 13
};

/// Enum /Script/ControlRig.ERigControlTransformChannel
/// Size: 0x01 (1 bytes)
enum class ERigControlTransformChannel : uint8_t
{
	ERigControlTransformChannel__TranslationX                                        = 0,
	ERigControlTransformChannel__TranslationY                                        = 1,
	ERigControlTransformChannel__TranslationZ                                        = 2,
	ERigControlTransformChannel__Pitch                                               = 3,
	ERigControlTransformChannel__Yaw                                                 = 4,
	ERigControlTransformChannel__Roll                                                = 5,
	ERigControlTransformChannel__ScaleX                                              = 6,
	ERigControlTransformChannel__ScaleY                                              = 7,
	ERigControlTransformChannel__ScaleZ                                              = 8
};

/// Enum /Script/ControlRig.ERigControlVisibility
/// Size: 0x01 (1 bytes)
enum class ERigControlVisibility : uint8_t
{
	ERigControlVisibility__UserDefined                                               = 0,
	ERigControlVisibility__BasedOnSelection                                          = 1
};

/// Enum /Script/ControlRig.ERigControlAxis
/// Size: 0x01 (1 bytes)
enum class ERigControlAxis : uint8_t
{
	ERigControlAxis__X                                                               = 0,
	ERigControlAxis__Y                                                               = 1,
	ERigControlAxis__Z                                                               = 2
};

/// Enum /Script/ControlRig.ERigControlType
/// Size: 0x01 (1 bytes)
enum class ERigControlType : uint8_t
{
	ERigControlType__Bool                                                            = 0,
	ERigControlType__Float                                                           = 1,
	ERigControlType__Integer                                                         = 2,
	ERigControlType__Vector2D                                                        = 3,
	ERigControlType__Position                                                        = 4,
	ERigControlType__Scale                                                           = 5,
	ERigControlType__Rotator                                                         = 6,
	ERigControlType__Transform                                                       = 7,
	ERigControlType__TransformNoScale                                                = 8,
	ERigControlType__EulerTransform                                                  = 9
};

/// Enum /Script/ControlRig.ERigControlAnimationType
/// Size: 0x01 (1 bytes)
enum class ERigControlAnimationType : uint8_t
{
	ERigControlAnimationType__AnimationControl                                       = 0,
	ERigControlAnimationType__AnimationChannel                                       = 1,
	ERigControlAnimationType__ProxyControl                                           = 2,
	ERigControlAnimationType__VisualCue                                              = 3
};

/// Enum /Script/ControlRig.ERigExecutionType
/// Size: 0x01 (1 bytes)
enum class ERigExecutionType : uint8_t
{
	ERigExecutionType__Runtime                                                       = 0,
	ERigExecutionType__Editing                                                       = 1,
	ERigExecutionType__Max                                                           = 2
};

/// Enum /Script/ControlRig.ERigTransformStackEntryType
/// Size: 0x01 (1 bytes)
enum class ERigTransformStackEntryType : uint8_t
{
	TransformPose                                                                    = 0,
	ControlOffset                                                                    = 1,
	ControlShape                                                                     = 2,
	CurveValue                                                                       = 3
};

/// Enum /Script/ControlRig.ERigTransformType
/// Size: 0x01 (1 bytes)
enum class ERigTransformType : uint8_t
{
	ERigTransformType__InitialLocal                                                  = 0,
	ERigTransformType__CurrentLocal                                                  = 1,
	ERigTransformType__InitialGlobal                                                 = 2,
	ERigTransformType__CurrentGlobal                                                 = 3,
	ERigTransformType__NumTransformTypes                                             = 4
};

/// Enum /Script/ControlRig.EControlRigInteractionType
/// Size: 0x01 (1 bytes)
enum class EControlRigInteractionType : uint8_t
{
	EControlRigInteractionType__None                                                 = 0,
	EControlRigInteractionType__Translate                                            = 1,
	EControlRigInteractionType__Rotate                                               = 2,
	EControlRigInteractionType__Scale                                                = 4,
	EControlRigInteractionType__All                                                  = 7
};

/// Enum /Script/ControlRig.EControlRigVectorKind
/// Size: 0x01 (1 bytes)
enum class EControlRigVectorKind : uint8_t
{
	EControlRigVectorKind__Direction                                                 = 0,
	EControlRigVectorKind__Location                                                  = 1
};

/// Enum /Script/ControlRig.EControlRigComponentSpace
/// Size: 0x01 (1 bytes)
enum class EControlRigComponentSpace : uint8_t
{
	EControlRigComponentSpace__WorldSpace                                            = 0,
	EControlRigComponentSpace__ActorSpace                                            = 1,
	EControlRigComponentSpace__ComponentSpace                                        = 2,
	EControlRigComponentSpace__RigSpace                                              = 3,
	EControlRigComponentSpace__LocalSpace                                            = 4,
	EControlRigComponentSpace__Max                                                   = 5
};

/// Enum /Script/ControlRig.EControlRigComponentMapDirection
/// Size: 0x01 (1 bytes)
enum class EControlRigComponentMapDirection : uint8_t
{
	EControlRigComponentMapDirection__Input                                          = 0,
	EControlRigComponentMapDirection__Output                                         = 1
};

/// Enum /Script/ControlRig.ETransformSpaceMode
/// Size: 0x01 (1 bytes)
enum class ETransformSpaceMode : uint8_t
{
	ETransformSpaceMode__LocalSpace                                                  = 0,
	ETransformSpaceMode__GlobalSpace                                                 = 1,
	ETransformSpaceMode__BaseSpace                                                   = 2,
	ETransformSpaceMode__BaseJoint                                                   = 3,
	ETransformSpaceMode__Max                                                         = 4
};

/// Enum /Script/ControlRig.ETransformGetterType
/// Size: 0x01 (1 bytes)
enum class ETransformGetterType : uint8_t
{
	ETransformGetterType__Initial                                                    = 0,
	ETransformGetterType__Current                                                    = 1,
	ETransformGetterType__Max                                                        = 2
};

/// Enum /Script/ControlRig.EControlRigTestDataPlaybackMode
/// Size: 0x01 (1 bytes)
enum class EControlRigTestDataPlaybackMode : uint8_t
{
	EControlRigTestDataPlaybackMode__Live                                            = 0,
	EControlRigTestDataPlaybackMode__ReplayInputs                                    = 1,
	EControlRigTestDataPlaybackMode__GroundTruth                                     = 2,
	EControlRigTestDataPlaybackMode__Max                                             = 3
};

/// Enum /Script/ControlRig.ECRSimConstraintType
/// Size: 0x01 (1 bytes)
enum class ECRSimConstraintType : uint8_t
{
	ECRSimConstraintType__Distance                                                   = 0,
	ECRSimConstraintType__DistanceFromA                                              = 1,
	ECRSimConstraintType__DistanceFromB                                              = 2,
	ECRSimConstraintType__Plane                                                      = 3
};

/// Enum /Script/ControlRig.ECRSimPointForceType
/// Size: 0x01 (1 bytes)
enum class ECRSimPointForceType : uint8_t
{
	ECRSimPointForceType__Direction                                                  = 0
};

/// Enum /Script/ControlRig.ECRSimSoftCollisionType
/// Size: 0x01 (1 bytes)
enum class ECRSimSoftCollisionType : uint8_t
{
	ECRSimSoftCollisionType__Plane                                                   = 0,
	ECRSimSoftCollisionType__Sphere                                                  = 1,
	ECRSimSoftCollisionType__Cone                                                    = 2
};

/// Enum /Script/ControlRig.EControlRigFKRigExecuteMode
/// Size: 0x01 (1 bytes)
enum class EControlRigFKRigExecuteMode : uint8_t
{
	EControlRigFKRigExecuteMode__Replace                                             = 0,
	EControlRigFKRigExecuteMode__Additive                                            = 1,
	EControlRigFKRigExecuteMode__Direct                                              = 2,
	EControlRigFKRigExecuteMode__Max                                                 = 3
};

/// Enum /Script/ControlRig.ERigBoneType
/// Size: 0x01 (1 bytes)
enum class ERigBoneType : uint8_t
{
	ERigBoneType__Imported                                                           = 0,
	ERigBoneType__User                                                               = 1
};

/// Enum /Script/ControlRig.ERigMetadataType
/// Size: 0x01 (1 bytes)
enum class ERigMetadataType : uint8_t
{
	ERigMetadataType__Bool                                                           = 0,
	ERigMetadataType__BoolArray                                                      = 1,
	ERigMetadataType__Float                                                          = 2,
	ERigMetadataType__FloatArray                                                     = 3,
	ERigMetadataType__Int32                                                          = 4,
	ERigMetadataType__Int32Array                                                     = 5,
	ERigMetadataType__Name                                                           = 6,
	ERigMetadataType__NameArray                                                      = 7,
	ERigMetadataType__Vector                                                         = 8,
	ERigMetadataType__VectorArray                                                    = 9,
	ERigMetadataType__Rotator                                                        = 10,
	ERigMetadataType__RotatorArray                                                   = 11,
	ERigMetadataType__Quat                                                           = 12,
	ERigMetadataType__QuatArray                                                      = 13,
	ERigMetadataType__Transform                                                      = 14,
	ERigMetadataType__TransformArray                                                 = 15,
	ERigMetadataType__LinearColor                                                    = 16,
	ERigMetadataType__LinearColorArray                                               = 17,
	ERigMetadataType__RigElementKey                                                  = 18,
	ERigMetadataType__RigElementKeyArray                                             = 19,
	ERigMetadataType__Invalid                                                        = 20
};

/// Enum /Script/ControlRig.ERigHierarchyNotification
/// Size: 0x01 (1 bytes)
enum class ERigHierarchyNotification : uint8_t
{
	ERigHierarchyNotification__ElementAdded                                          = 0,
	ERigHierarchyNotification__ElementRemoved                                        = 1,
	ERigHierarchyNotification__ElementRenamed                                        = 2,
	ERigHierarchyNotification__ElementSelected                                       = 3,
	ERigHierarchyNotification__ElementDeselected                                     = 4,
	ERigHierarchyNotification__ParentChanged                                         = 5,
	ERigHierarchyNotification__HierarchyReset                                        = 6,
	ERigHierarchyNotification__ControlSettingChanged                                 = 7,
	ERigHierarchyNotification__ControlVisibilityChanged                              = 8,
	ERigHierarchyNotification__ControlDrivenListChanged                              = 9,
	ERigHierarchyNotification__ControlShapeTransformChanged                          = 10,
	ERigHierarchyNotification__ParentWeightsChanged                                  = 11,
	ERigHierarchyNotification__InteractionBracketOpened                              = 12,
	ERigHierarchyNotification__InteractionBracketClosed                              = 13,
	ERigHierarchyNotification__ElementReordered                                      = 14,
	ERigHierarchyNotification__Max                                                   = 15
};

/// Enum /Script/ControlRig.ERigEvent
/// Size: 0x01 (1 bytes)
enum class ERigEvent : uint8_t
{
	ERigEvent__None                                                                  = 0,
	ERigEvent__RequestAutoKey                                                        = 1,
	ERigEvent__OpenUndoBracket                                                       = 2,
	ERigEvent__CloseUndoBracket                                                      = 3,
	ERigEvent__Max                                                                   = 4
};

/// Enum /Script/ControlRig.EControlRigSetKey
/// Size: 0x01 (1 bytes)
enum class EControlRigSetKey : uint8_t
{
	EControlRigSetKey__DoNotCare                                                     = 0,
	EControlRigSetKey__Always                                                        = 1,
	EControlRigSetKey__Never                                                         = 2
};

/// Enum /Script/ControlRig.ERigControlValueType
/// Size: 0x01 (1 bytes)
enum class ERigControlValueType : uint8_t
{
	ERigControlValueType__Initial                                                    = 0,
	ERigControlValueType__Current                                                    = 1,
	ERigControlValueType__Minimum                                                    = 2,
	ERigControlValueType__Maximum                                                    = 3
};

/// Enum /Script/ControlRig.ERigSpaceType
/// Size: 0x01 (1 bytes)
enum class ERigSpaceType : uint8_t
{
	ERigSpaceType__Global                                                            = 0,
	ERigSpaceType__Bone                                                              = 1,
	ERigSpaceType__Control                                                           = 2,
	ERigSpaceType__Space                                                             = 3
};

/// Enum /Script/ControlRig.EMovieSceneControlRigSpaceType
/// Size: 0x01 (1 bytes)
enum class EMovieSceneControlRigSpaceType : uint8_t
{
	EMovieSceneControlRigSpaceType__Parent                                           = 0,
	EMovieSceneControlRigSpaceType__World                                            = 1,
	EMovieSceneControlRigSpaceType__ControlRig                                       = 2
};

/// Enum /Script/ControlRig.EControlRigDrawHierarchyMode
/// Size: 0x01 (1 bytes)
enum class EControlRigDrawHierarchyMode : uint8_t
{
	EControlRigDrawHierarchyMode__Axes                                               = 0,
	EControlRigDrawHierarchyMode__Max                                                = 1
};

/// Enum /Script/ControlRig.EAimMode
/// Size: 0x01 (1 bytes)
enum class EAimMode : uint8_t
{
	EAimMode__AimAtTarget                                                            = 0,
	EAimMode__OrientToTarget                                                         = 1
};

/// Enum /Script/ControlRig.EApplyTransformMode
/// Size: 0x01 (1 bytes)
enum class EApplyTransformMode : uint8_t
{
	EApplyTransformMode__Override                                                    = 0,
	EApplyTransformMode__Additive                                                    = 1,
	EApplyTransformMode__Max                                                         = 2
};

/// Enum /Script/ControlRig.ERigSwitchParentMode
/// Size: 0x01 (1 bytes)
enum class ERigSwitchParentMode : uint8_t
{
	ERigSwitchParentMode__World                                                      = 0,
	ERigSwitchParentMode__DefaultParent                                              = 1,
	ERigSwitchParentMode__ParentItem                                                 = 2
};

/// Enum /Script/ControlRig.EControlRigCurveAlignment
/// Size: 0x01 (1 bytes)
enum class EControlRigCurveAlignment : uint8_t
{
	EControlRigCurveAlignment__Front                                                 = 0,
	EControlRigCurveAlignment__Stretched                                             = 1
};

/// Enum /Script/ControlRig.EControlRigModifyBoneMode
/// Size: 0x01 (1 bytes)
enum class EControlRigModifyBoneMode : uint8_t
{
	EControlRigModifyBoneMode__OverrideLocal                                         = 0,
	EControlRigModifyBoneMode__OverrideGlobal                                        = 1,
	EControlRigModifyBoneMode__AdditiveLocal                                         = 2,
	EControlRigModifyBoneMode__AdditiveGlobal                                        = 3,
	EControlRigModifyBoneMode__Max                                                   = 4
};

/// Enum /Script/ControlRig.EConstraintInterpType
/// Size: 0x01 (1 bytes)
enum class EConstraintInterpType : uint8_t
{
	EConstraintInterpType__Average                                                   = 0,
	EConstraintInterpType__Shortest                                                  = 1,
	EConstraintInterpType__Max                                                       = 2
};

/// Struct /Script/ControlRig.RigElementKey
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigElementKey
{ 
	ERigElementType                                    Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0008)  
};

/// Class /Script/ControlRig.RigHierarchy
/// Size: 0x0370 (880 bytes) (0x000028 - 0x000370) align 16 MaxSize: 0x0370
class URigHierarchy : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x60];                                      // 0x0028   (0x0060)  MISSED
	uint16_t                                           TopologyVersion;                                            // 0x0088   (0x0002)  
	uint16_t                                           MetadataVersion;                                            // 0x008A   (0x0002)  
	uint16_t                                           MetadataTagVersion;                                         // 0x008C   (0x0002)  
	bool                                               bEnableDirtyPropagation;                                    // 0x008E   (0x0001)  
	unsigned char                                      UnknownData01_6[0x99];                                      // 0x008F   (0x0099)  MISSED
	int32_t                                            TransformStackIndex;                                        // 0x0128   (0x0004)  
	unsigned char                                      UnknownData02_6[0x74];                                      // 0x012C   (0x0074)  MISSED
	class URigHierarchyController*                     HierarchyController;                                        // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData03_6[0x58];                                      // 0x01A8   (0x0058)  MISSED
	TMap<FRigElementKey, FRigElementKey>               PreviousNameMap;                                            // 0x0200   (0x0050)  
	unsigned char                                      UnknownData04_6[0x80];                                      // 0x0250   (0x0080)  MISSED
	class URigHierarchy*                               HierarchyForCacheValidation;                                // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData05_7[0x98];                                      // 0x02D8   (0x0098)  MISSED


	/// Functions
	// Function /Script/ControlRig.RigHierarchy.UnsetCurveValueByIndex
	// void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo);                                                    // [0x216e8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.UnsetCurveValue
	// void UnsetCurveValue(FRigElementKey InKey, bool bSetupUndo);                                                             // [0x216e700] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToWorldSpace
	// bool SwitchToWorldSpace(FRigElementKey InChild, bool bInitial, bool bAffectChildren);                                    // [0x216e5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToParent
	// bool SwitchToParent(FRigElementKey InChild, FRigElementKey InParent, bool bInitial, bool bAffectChildren);               // [0x216e390] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToDefaultParent
	// bool SwitchToDefaultParent(FRigElementKey InChild, bool bInitial, bool bAffectChildren);                                 // [0x216e250] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SortKeys
	// TArray<FRigElementKey> SortKeys(TArray<FRigElementKey>& InKeys);                                                         // [0x216e030] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.SetVectorMetadata
	// bool SetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector InValue);                                    // [0x216dde0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetVectorArrayMetadata
	// bool SetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FVector> InValue);                       // [0x216db40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTransformMetadata
	// bool SetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform InValue);                              // [0x216d850] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTransformArrayMetadata
	// bool SetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FTransform> InValue);                 // [0x216d5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTag
	// bool SetTag(FRigElementKey InItem, FName InTag);                                                                         // [0x216d4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRotatorMetadata
	// bool SetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator InValue);                                  // [0x216d260] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRotatorArrayMetadata
	// bool SetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRotator> InValue);                     // [0x216cfc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRigElementKeyMetadata
	// bool SetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey InValue);                      // [0x216cd50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
	// bool SetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRigElementKey> InValue);         // [0x216cab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetQuatMetadata
	// bool SetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat InValue);                                        // [0x216c860] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetQuatArrayMetadata
	// bool SetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FQuat> InValue);                           // [0x216c5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetPose_ForBlueprint
	// void SetPose_ForBlueprint(FRigPose InPose);                                                                              // [0x216c310] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetParentWeightArray
	// bool SetParentWeightArray(FRigElementKey InChild, TArray<FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren); // [0x216c140] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetParentWeight
	// bool SetParentWeight(FRigElementKey InChild, FRigElementKey InParent, FRigElementWeight InWeight, bool bInitial, bool bAffectChildren); // [0x216bf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetNameMetadata
	// bool SetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName InValue);                                        // [0x216bcf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetNameArrayMetadata
	// bool SetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FName> InValue);                           // [0x216ba50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLocalTransformByIndex
	// void SetLocalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x216b790] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLocalTransform
	// void SetLocalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x216b3a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLinearColorMetadata
	// bool SetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor InValue);                          // [0x216b140] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLinearColorArrayMetadata
	// bool SetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FLinearColor> InValue);             // [0x216aea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetInt32Metadata
	// bool SetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t InValue);                                     // [0x216ac40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetInt32ArrayMetadata
	// bool SetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<int32_t> InValue);                        // [0x216a9a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetGlobalTransformByIndex
	// void SetGlobalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // [0x216a6e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetGlobalTransform
	// void SetGlobalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // [0x216a2f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetFloatMetadata
	// bool SetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float InValue);                                       // [0x216a090] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetFloatArrayMetadata
	// bool SetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<float> InValue);                          // [0x2169df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetCurveValueByIndex
	// void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo);                                       // [0x2169cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetCurveValue
	// void SetCurveValue(FRigElementKey InKey, float InValue, bool bSetupUndo);                                                // [0x2169aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlVisibilityByIndex
	// void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility);                                              // [0x21699a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlVisibility
	// void SetControlVisibility(FRigElementKey InKey, bool bVisibility);                                                       // [0x21697d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlValueByIndex
	// void SetControlValueByIndex(int32_t InElementIndex, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // [0x2169580] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlValue
	// void SetControlValue(FRigElementKey InKey, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // [0x21691f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlShapeTransformByIndex
	// void SetControlShapeTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bSetupUndo);    // [0x2168fc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlShapeTransform
	// void SetControlShapeTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bSetupUndo);             // [0x2168c80] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlSettingsByIndex
	// void SetControlSettingsByIndex(int32_t InElementIndex, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // [0x21689f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlSettings
	// void SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // [0x21686c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
	// void SetControlPreferredRotatorByIndex(int32_t InElementIndex, FRotator& InValue, bool bInitial, bool bFixEulerFlips);   // [0x2168520] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotator
	// void SetControlPreferredRotator(FRigElementKey InKey, FRotator& InValue, bool bInitial, bool bFixEulerFlips);            // [0x21682c0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
	// void SetControlOffsetTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x2168010] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlOffsetTransform
	// void SetControlOffsetTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x2167c40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetBoolMetadata
	// bool SetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool InValue);                                         // [0x21679e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetBoolArrayMetadata
	// bool SetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<bool> InValue);                            // [0x2167740] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SendAutoKeyEvent
	// void SendAutoKeyEvent(FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous);                            // [0x2167610] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0x21675f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetPoseToInitial
	// void ResetPoseToInitial(ERigElementType InTypeFilter);                                                                   // [0x2167570] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetCurveValues
	// void ResetCurveValues();                                                                                                 // [0x2167550] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Reset
	// void Reset();                                                                                                            // [0x2167530] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.RemoveMetadata
	// bool RemoveMetadata(FRigElementKey InItem, FName InMetadataName);                                                        // [0x2167430] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.RemoveAllMetadata
	// bool RemoveAllMetadata(FRigElementKey InItem);                                                                           // [0x2167380] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Num
	// int32_t Num();                                                                                                           // [0x2167360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromVector2D
	// FRigControlValue MakeControlValueFromVector2D(FVector2D InValue);                                                        // [0x2167180] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromVector
	// FRigControlValue MakeControlValueFromVector(FVector InValue);                                                            // [0x2167270] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
	// FRigControlValue MakeControlValueFromTransformNoScale(FTransformNoScale InValue);                                        // [0x2167000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromTransform
	// FRigControlValue MakeControlValueFromTransform(FTransform InValue);                                                      // [0x2166d90] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromRotator
	// FRigControlValue MakeControlValueFromRotator(FRotator InValue);                                                          // [0x2166c70] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromInt
	// FRigControlValue MakeControlValueFromInt(int32_t InValue);                                                               // [0x2166b90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromFloat
	// FRigControlValue MakeControlValueFromFloat(float InValue);                                                               // [0x2166a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
	// FRigControlValue MakeControlValueFromEulerTransform(FEulerTransform InValue);                                            // [0x2166870] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromBool
	// FRigControlValue MakeControlValueFromBool(bool InValue);                                                                 // [0x2166790] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.IsValidIndex
	// bool IsValidIndex(int32_t InElementIndex);                                                                               // [0x21666f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsSelectedByIndex
	// bool IsSelectedByIndex(int32_t InIndex);                                                                                 // [0x2166630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsSelected
	// bool IsSelected(FRigElementKey InKey);                                                                                   // [0x21664b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsProcedural
	// bool IsProcedural(FRigElementKey& InKey);                                                                                // [0x2166400] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsParentedTo
	// bool IsParentedTo(FRigElementKey InChild, FRigElementKey InParent);                                                      // [0x21660f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsCurveValueSetByIndex
	// bool IsCurveValueSetByIndex(int32_t InElementIndex);                                                                     // [0x2166020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsCurveValueSet
	// bool IsCurveValueSet(FRigElementKey InKey);                                                                              // [0x2165ea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsControllerAvailable
	// bool IsControllerAvailable();                                                                                            // [0x2165e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.HasTag
	// bool HasTag(FRigElementKey InItem, FName InTag);                                                                         // [0x2165d30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVectorMetadata
	// FVector GetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector DefaultValue);                            // [0x2165b00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVectorFromControlValue
	// FVector GetVectorFromControlValue(FRigControlValue InValue);                                                             // [0x2165a30] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetVectorArrayMetadata
	// TArray<FVector> GetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                     // [0x2165770] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVector2DFromControlValue
	// FVector2D GetVector2DFromControlValue(FRigControlValue InValue);                                                         // [0x21656b0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
	// FTransformNoScale GetTransformNoScaleFromControlValue(FRigControlValue InValue);                                         // [0x2165590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformMetadata
	// FTransform GetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform DefaultValue);                   // [0x21652b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetTransformFromControlValue
	// FTransform GetTransformFromControlValue(FRigControlValue InValue);                                                       // [0x2165170] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformArrayMetadata
	// TArray<FTransform> GetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName);                               // [0x2164eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetTags
	// TArray<FName> GetTags(FRigElementKey InItem);                                                                            // [0x2164db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetSelectedKeys
	// TArray<FRigElementKey> GetSelectedKeys(ERigElementType InTypeFilter);                                                    // [0x2164cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorMetadata
	// FRotator GetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator DefaultValue);                         // [0x2164aa0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorFromControlValue
	// FRotator GetRotatorFromControlValue(FRigControlValue InValue);                                                           // [0x21649a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorArrayMetadata
	// TArray<FRotator> GetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                   // [0x21646e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRootElementKeys
	// TArray<FRigElementKey> GetRootElementKeys();                                                                             // [0x2164630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigidBodyKeys
	// TArray<FRigElementKey> GetRigidBodyKeys(bool bTraverse);                                                                 // [0x2164550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigElementKeyMetadata
	// FRigElementKey GetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey DefaultValue);       // [0x2164320] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
	// TArray<FRigElementKey> GetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName);                       // [0x2164060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetReferenceKeys
	// TArray<FRigElementKey> GetReferenceKeys(bool bTraverse);                                                                 // [0x2163f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetQuatMetadata
	// FQuat GetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat DefaultValue);                                  // [0x2163d50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetQuatArrayMetadata
	// TArray<FQuat> GetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                         // [0x2163a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPreviousParent
	// FRigElementKey GetPreviousParent(FRigElementKey& InKey);                                                                 // [0x21639d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPreviousName
	// FName GetPreviousName(FRigElementKey& InKey);                                                                            // [0x2163920] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPose
	// FRigPose GetPose(bool bInitial);                                                                                         // [0x2163790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentWeightArray
	// TArray<FRigElementWeight> GetParentWeightArray(FRigElementKey InChild, bool bInitial);                                   // [0x2163510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentWeight
	// FRigElementWeight GetParentWeight(FRigElementKey InChild, FRigElementKey InParent, bool bInitial);                       // [0x21633b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentTransformByIndex
	// FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial);                                             // [0x2163220] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentTransform
	// FTransform GetParentTransform(FRigElementKey InKey, bool bInitial);                                                      // [0x2162fb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParents
	// TArray<FRigElementKey> GetParents(FRigElementKey InKey, bool bRecursive);                                                // [0x2163650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNumberOfParents
	// int32_t GetNumberOfParents(FRigElementKey InKey);                                                                        // [0x2162f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNullKeys
	// TArray<FRigElementKey> GetNullKeys(bool bTraverse);                                                                      // [0x2162e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNameMetadata
	// FName GetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName DefaultValue);                                  // [0x2162c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNameArrayMetadata
	// TArray<FName> GetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                         // [0x2162ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetMetadataType
	// ERigMetadataType GetMetadataType(FRigElementKey InItem, FName InMetadataName);                                           // [0x21629e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.RigHierarchy.GetMetadataNames
	// TArray<FName> GetMetadataNames(FRigElementKey InItem);                                                                   // [0x21628f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.RigHierarchy.GetLocalTransformByIndex
	// FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial);                                              // [0x2162740] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalTransform
	// FTransform GetLocalTransform(FRigElementKey InKey, bool bInitial);                                                       // [0x21624b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint
	// int32_t GetLocalIndex_ForBlueprint(FRigElementKey InKey);                                                                // [0x2162330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
	// FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);                                  // [0x2162190] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalControlShapeTransform
	// FTransform GetLocalControlShapeTransform(FRigElementKey InKey, bool bInitial);                                           // [0x2161f10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLinearColorMetadata
	// FLinearColor GetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor DefaultValue);             // [0x2161d00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLinearColorArrayMetadata
	// TArray<FLinearColor> GetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                           // [0x2161a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetKeys
	// TArray<FRigElementKey> GetKeys(TArray<int32_t> InElementIndices);                                                        // [0x2161860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetKey
	// FRigElementKey GetKey(int32_t InElementIndex);                                                                           // [0x2161790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetIntFromControlValue
	// int32_t GetIntFromControlValue(FRigControlValue InValue);                                                                // [0x21616e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetInt32Metadata
	// int32_t GetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t DefaultValue);                             // [0x21614e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetInt32ArrayMetadata
	// TArray<int32_t> GetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                      // [0x2161220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetIndex_ForBlueprint
	// int32_t GetIndex_ForBlueprint(FRigElementKey InKey);                                                                     // [0x21610c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalTransformByIndex
	// FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial);                                             // [0x2160f10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalTransform
	// FTransform GetGlobalTransform(FRigElementKey InKey, bool bInitial);                                                      // [0x2160c70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
	// FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);                                 // [0x2160ad0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlShapeTransform
	// FTransform GetGlobalControlShapeTransform(FRigElementKey InKey, bool bInitial);                                          // [0x2160850] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
	// FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial);                                // [0x21606b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
	// FTransform GetGlobalControlOffsetTransform(FRigElementKey InKey, bool bInitial);                                         // [0x2160430] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFloatMetadata
	// float GetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float DefaultValue);                                 // [0x2160230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFloatFromControlValue
	// float GetFloatFromControlValue(FRigControlValue InValue);                                                                // [0x2160180] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetFloatArrayMetadata
	// TArray<float> GetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                        // [0x215fec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFirstParent
	// FRigElementKey GetFirstParent(FRigElementKey InKey);                                                                     // [0x215fe00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetEulerTransformFromControlValue
	// FEulerTransform GetEulerTransformFromControlValue(FRigControlValue InValue);                                             // [0x215fcb0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetDefaultParent
	// FRigElementKey GetDefaultParent(FRigElementKey InKey);                                                                   // [0x215fbf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveValueByIndex
	// float GetCurveValueByIndex(int32_t InElementIndex);                                                                      // [0x215fb30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveValue
	// float GetCurveValue(FRigElementKey InKey);                                                                               // [0x215f9b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveKeys
	// TArray<FRigElementKey> GetCurveKeys();                                                                                   // [0x215f930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlValueByIndex
	// FRigControlValue GetControlValueByIndex(int32_t InElementIndex, ERigControlValueType InValueType);                       // [0x215f6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlValue
	// FRigControlValue GetControlValue(FRigElementKey InKey, ERigControlValueType InValueType);                                // [0x215f470] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
	// FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial);                                       // [0x215f340] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredRotator
	// FRotator GetControlPreferredRotator(FRigElementKey InKey, bool bInitial);                                                // [0x215f130] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetController
	// class URigHierarchyController* GetController(bool bCreateIfNeeded);                                                      // [0x215f890] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetControlKeys
	// TArray<FRigElementKey> GetControlKeys(bool bTraverse);                                                                   // [0x215f050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetChildren
	// TArray<FRigElementKey> GetChildren(FRigElementKey InKey, bool bRecursive);                                               // [0x215ef10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoolMetadata
	// bool GetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool DefaultValue);                                    // [0x215ed10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoolArrayMetadata
	// TArray<bool> GetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                          // [0x215ea50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoneKeys
	// TArray<FRigElementKey> GetBoneKeys(bool bTraverse);                                                                      // [0x215e970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
	// TArray<FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);                                                          // [0x215e880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
	// FRigNullElement FindNull_ForBlueprintOnly(FRigElementKey& InKey);                                                        // [0x215e610] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
	// FRigControlElement FindControl_ForBlueprintOnly(FRigElementKey& InKey);                                                  // [0x215e050] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
	// FRigBoneElement FindBone_ForBlueprintOnly(FRigElementKey& InKey);                                                        // [0x215de90] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.CopyPose
	// void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded); // [0x215dcd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.CopyHierarchy
	// void CopyHierarchy(class URigHierarchy* InHierarchy);                                                                    // [0x215dc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Contains_ForBlueprint
	// bool Contains_ForBlueprint(FRigElementKey InKey);                                                                        // [0x215dae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.TransformableControlHandle
/// Size: 0x0090 (144 bytes) (0x000058 - 0x000090) align 8 MaxSize: 0x0090
class UTransformableControlHandle : public UTransformableHandle
{ 
public:
	TWeakObjectPtr<class UControlRig*>                 ControlRig;                                                 // 0x0058   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0060   (0x0028)  MISSED
	FName                                              ControlName;                                                // 0x0088   (0x0008)  
};

/// Struct /Script/ControlRig.RigHierarchySettings
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FRigHierarchySettings
{ 
	int32_t                                            ProceduralElementLimit;                                     // 0x0000   (0x0004)  
};

/// Struct /Script/ControlRig.RigControlElementCustomization
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRigControlElementCustomization
{ 
	TArray<FRigElementKey>                             AvailableSpaces;                                            // 0x0000   (0x0010)  
	TArray<FRigElementKey>                             RemovedSpaces;                                              // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigInfluenceEntry
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRigInfluenceEntry
{ 
	FRigElementKey                                     Source;                                                     // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRigElementKey>                             AffectedList;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigInfluenceMap
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FRigInfluenceMap
{ 
	FName                                              EventName;                                                  // 0x0000   (0x0008)  
	TArray<FRigInfluenceEntry>                         Entries;                                                    // 0x0008   (0x0010)  
	TMap<FRigElementKey, int32_t>                      KeyToIndex;                                                 // 0x0018   (0x0050)  
};

/// Struct /Script/ControlRig.RigInfluenceMapPerEvent
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRigInfluenceMapPerEvent
{ 
	TArray<FRigInfluenceMap>                           Maps;                                                       // 0x0000   (0x0010)  
	TMap<FName, int32_t>                               EventToIndex;                                               // 0x0010   (0x0050)  
};

/// Class /Script/ControlRig.ControlRig
/// Size: 0x03F8 (1016 bytes) (0x000180 - 0x0003F8) align 8 MaxSize: 0x03F8
class UControlRig : public URigVMHost
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0180   (0x0008)  MISSED
	ERigExecutionType                                  ExecutionType;                                              // 0x0188   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0189   (0x0003)  MISSED
	FRigHierarchySettings                              HierarchySettings;                                          // 0x018C   (0x0004)  
	TMap<FRigElementKey, FRigControlElementCustomization> ControlCustomizations;                                   // 0x0190   (0x0050)  
	class URigHierarchy*                               DynamicHierarchy;                                           // 0x01E0   (0x0008)  
	SDK_UNDEFINED(16,1181) /* TArray<TWeakObjectPtr<UControlRigShapeLibrary*>> */ __um(ShapeLibraries);            // 0x01E8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x18];                                      // 0x01F8   (0x0018)  MISSED
	class UAnimationDataSourceRegistry*                DataSourceRegistry;                                         // 0x0210   (0x0008)  
	unsigned char                                      UnknownData03_6[0x90];                                      // 0x0218   (0x0090)  MISSED
	FRigInfluenceMapPerEvent                           Influences;                                                 // 0x02A8   (0x0060)  
	class UControlRig*                                 InteractionRig;                                             // 0x0308   (0x0008)  
	class UClass*                                      InteractionRigClass;                                        // 0x0310   (0x0008)  
	unsigned char                                      UnknownData04_6[0xC0];                                      // 0x0318   (0x00C0)  MISSED
	SDK_UNDEFINED(1,1182) /* FMulticastSparseDelegate */ __um(OnControlSelected_BP);                               // 0x03D8   (0x0001)  
	unsigned char                                      UnknownData05_7[0x1F];                                      // 0x03D9   (0x001F)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRig.SetInteractionRigClass
	// void SetInteractionRigClass(class UClass* InInteractionRigClass);                                                        // [0x21d0ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetInteractionRig
	// void SetInteractionRig(class UControlRig* InInteractionRig);                                                             // [0x21d0a50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SelectControl
	// void SelectControl(FName& InControlName, bool bSelect);                                                                  // [0x21cea90] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.RequestConstruction
	// void RequestConstruction();                                                                                              // [0x21ce9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
	// void OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, FRigControlElement& Control, bool bSelected);        // [0x2c97800] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/ControlRig.ControlRig.IsControlSelected
	// bool IsControlSelected(FName& InControlName);                                                                            // [0x21ce230] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRigClass
	// class UClass* GetInteractionRigClass();                                                                                  // [0x21cded0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRig
	// class UControlRig* GetInteractionRig();                                                                                  // [0x21cdeb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetHostingActor
	// class AActor* GetHostingActor();                                                                                         // [0x21cda00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetHierarchy
	// class URigHierarchy* GetHierarchy();                                                                                     // [0x21cd9e0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRig.FindControlRigs
	// TArray<UControlRig*> FindControlRigs(class UObject* Outer, class UClass* OptionalClass);                                 // [0x21cc2d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.CurrentControlSelection
	// TArray<FName> CurrentControlSelection();                                                                                 // [0x21cc140] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.CreateTransformableControlHandle
	// class UTransformableControlHandle* CreateTransformableControlHandle(class UObject* Outer, FName& ControlName);           // [0x21cc060] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.ClearControlSelection
	// bool ClearControlSelection();                                                                                            // [0x21cbe90] Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigAnimInstance
/// Size: 0x0350 (848 bytes) (0x000348 - 0x000350) align 16 MaxSize: 0x0350
class UControlRigAnimInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0348   (0x0008)  MISSED
};

/// Class /Script/ControlRig.ControlRigBlueprintGeneratedClass
/// Size: 0x03A0 (928 bytes) (0x0003A0 - 0x0003A0) align 16 MaxSize: 0x03A0
class UControlRigBlueprintGeneratedClass : public URigVMBlueprintGeneratedClass
{ 
public:
};

/// Struct /Script/ControlRig.ControlRigComponentMappedElement
/// Size: 0x00D0 (208 bytes) (0x000000 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FControlRigComponentMappedElement
{ 
	FComponentReference                                ComponentReference;                                         // 0x0000   (0x0028)  
	int32_t                                            TransformIndex;                                             // 0x0028   (0x0004)  
	FName                                              TransformName;                                              // 0x002C   (0x0008)  
	ERigElementType                                    ElementType;                                                // 0x0034   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0035   (0x0003)  MISSED
	FName                                              ElementName;                                                // 0x0038   (0x0008)  
	EControlRigComponentMapDirection                   Direction;                                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0041   (0x000F)  MISSED
	FTransform                                         Offset;                                                     // 0x0050   (0x0060)  
	float                                              Weight;                                                     // 0x00B0   (0x0004)  
	EControlRigComponentSpace                          Space;                                                      // 0x00B4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x00B5   (0x0003)  MISSED
	class USceneComponent*                             SceneComponent;                                             // 0x00B8   (0x0008)  
	int32_t                                            ElementIndex;                                               // 0x00C0   (0x0004)  
	int32_t                                            SubIndex;                                                   // 0x00C4   (0x0004)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/ControlRig.ControlRigComponent
/// Size: 0x06D0 (1744 bytes) (0x000568 - 0x0006D0) align 16 MaxSize: 0x06D0
class UControlRigComponent : public UPrimitiveComponent
{ 
public:
	class UClass*                                      ControlRigClass;                                            // 0x0568   (0x0008)  
	SDK_UNDEFINED(16,1183) /* FMulticastInlineDelegate */ __um(OnPreInitializeDelegate);                           // 0x0570   (0x0010)  
	SDK_UNDEFINED(16,1184) /* FMulticastInlineDelegate */ __um(OnPostInitializeDelegate);                          // 0x0580   (0x0010)  
	SDK_UNDEFINED(16,1185) /* FMulticastInlineDelegate */ __um(OnPreConstructionDelegate);                         // 0x0590   (0x0010)  
	SDK_UNDEFINED(16,1186) /* FMulticastInlineDelegate */ __um(OnPostConstructionDelegate);                        // 0x05A0   (0x0010)  
	SDK_UNDEFINED(16,1187) /* FMulticastInlineDelegate */ __um(OnPreForwardsSolveDelegate);                        // 0x05B0   (0x0010)  
	SDK_UNDEFINED(16,1188) /* FMulticastInlineDelegate */ __um(OnPostForwardsSolveDelegate);                       // 0x05C0   (0x0010)  
	TArray<FControlRigComponentMappedElement>          UserDefinedElements;                                        // 0x05D0   (0x0010)  
	TArray<FControlRigComponentMappedElement>          MappedElements;                                             // 0x05E0   (0x0010)  
	bool                                               bEnableLazyEvaluation;                                      // 0x05F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x05F1   (0x0003)  MISSED
	float                                              LazyEvaluationPositionThreshold;                            // 0x05F4   (0x0004)  
	float                                              LazyEvaluationRotationThreshold;                            // 0x05F8   (0x0004)  
	float                                              LazyEvaluationScaleThreshold;                               // 0x05FC   (0x0004)  
	bool                                               bResetTransformBeforeTick;                                  // 0x0600   (0x0001)  
	bool                                               bResetInitialsBeforeConstruction;                           // 0x0601   (0x0001)  
	bool                                               bUpdateRigOnTick;                                           // 0x0602   (0x0001)  
	bool                                               bUpdateInEditor;                                            // 0x0603   (0x0001)  
	bool                                               bDrawBones;                                                 // 0x0604   (0x0001)  
	bool                                               bShowDebugDrawing;                                          // 0x0605   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0606   (0x0002)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x0608   (0x0008)  
	unsigned char                                      UnknownData02_7[0xC0];                                      // 0x0610   (0x00C0)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigComponent.Update
	// void Update(float DeltaTime);                                                                                            // [0x21d11d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetObjectBinding
	// void SetObjectBinding(class UObject* InObjectToBind);                                                                    // [0x21d0e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetMappedElements
	// void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0x21d0d10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialSpaceTransform
	// void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);            // [0x21d0810] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialBoneTransform
	// void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren); // [0x21d0620] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlVector2D
	// void SetControlVector2D(FName ControlName, FVector2D Value);                                                             // [0x21d0250] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlTransform
	// void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);                          // [0x21d0010] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlScale
	// void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);                                 // [0x21cfc90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRotator
	// void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);                              // [0x21cf8c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRigClass
	// void SetControlRigClass(class UClass* InControlRigClass);                                                                // [0x21cf820] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlPosition
	// void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);                              // [0x21cf4b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlOffset
	// void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);                   // [0x21cf270] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlInt
	// void SetControlInt(FName ControlName, int32_t Value);                                                                    // [0x21cf120] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlFloat
	// void SetControlFloat(FName ControlName, float Value);                                                                    // [0x21cefc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlBool
	// void SetControlBool(FName ControlName, bool Value);                                                                      // [0x21cee60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneTransform
	// void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // [0x21cec20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	// void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);                                      // [0x21ceb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.OnPreInitialize
	// void OnPreInitialize(class UControlRigComponent* Component);                                                             // [0x21ce6b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreForwardsSolve
	// void OnPreForwardsSolve(class UControlRigComponent* Component);                                                          // [0x21ce620] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreConstruction
	// void OnPreConstruction(class UControlRigComponent* Component);                                                           // [0x21ce590] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostInitialize
	// void OnPostInitialize(class UControlRigComponent* Component);                                                            // [0x21ce500] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostForwardsSolve
	// void OnPostForwardsSolve(class UControlRigComponent* Component);                                                         // [0x21ce470] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostConstruction
	// void OnPostConstruction(class UControlRigComponent* Component);                                                          // [0x21ce3e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.Initialize
	// void Initialize();                                                                                                       // [0x21ce210] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetSpaceTransform
	// FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                          // [0x21cdf50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialSpaceTransform
	// FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                   // [0x21cdcd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialBoneTransform
	// FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                     // [0x21cda50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetElementNames
	// TArray<FName> GetElementNames(ERigElementType ElementType);                                                              // [0x21cd6a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlVector2D
	// FVector2D GetControlVector2D(FName ControlName);                                                                         // [0x21cd550] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlTransform
	// FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);                                      // [0x21cd430] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlScale
	// FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);                                             // [0x21cd320] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRotator
	// FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);                                          // [0x21cd1f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRig
	// class UControlRig* GetControlRig();                                                                                      // [0x21cd1c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlPosition
	// FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);                                          // [0x21cd0b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlOffset
	// FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);                                         // [0x21ccce0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetControlInt
	// int32_t GetControlInt(FName ControlName);                                                                                // [0x21ccbb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlFloat
	// float GetControlFloat(FName ControlName);                                                                                // [0x21cca90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlBool
	// bool GetControlBool(FName ControlName);                                                                                  // [0x21cc970] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetBoneTransform
	// FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                            // [0x21cc6f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetAbsoluteTime
	// float GetAbsoluteTime();                                                                                                 // [0x21cc6b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigComponent.DoesElementExist
	// bool DoesElementExist(FName Name, ERigElementType ElementType);                                                          // [0x21cc1c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.ClearMappedElements
	// void ClearMappedElements();                                                                                              // [0x21cbec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.CanExecute
	// bool CanExecute();                                                                                                       // [0x21cbe00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	// void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves); // [0x21cbc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedElements
	// void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0x21cbb60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedComponents
	// void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);                                        // [0x21cba70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
	// void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);                                 // [0x21cb9c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigControlActor
/// Size: 0x0348 (840 bytes) (0x000290 - 0x000348) align 8 MaxSize: 0x0348
class AControlRigControlActor : public AActor
{ 
public:
	class AActor*                                      ActorToTrack;                                               // 0x0290   (0x0008)  
	class UClass*                                      ControlRigClass;                                            // 0x0298   (0x0008)  
	bool                                               bRefreshOnTick;                                             // 0x02A0   (0x0001)  
	bool                                               bIsSelectable;                                              // 0x02A1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x02A2   (0x0006)  MISSED
	class UMaterialInterface*                          MaterialOverride;                                           // 0x02A8   (0x0008)  
	FString                                            ColorParameter;                                             // 0x02B0   (0x0010)  
	bool                                               bCastShadows;                                               // 0x02C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02C1   (0x0007)  MISSED
	class USceneComponent*                             ActorRootComponent;                                         // 0x02C8   (0x0008)  
	TWeakObjectPtr<class UControlRig*>                 ControlRig;                                                 // 0x02D0   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x02D8   (0x0028)  MISSED
	TArray<FName>                                      ControlNames;                                               // 0x0300   (0x0010)  
	TArray<FTransform>                                 ShapeTransforms;                                            // 0x0310   (0x0010)  
	TArray<class UStaticMeshComponent*>                Components;                                                 // 0x0320   (0x0010)  
	TArray<class UMaterialInstanceDynamic*>            Materials;                                                  // 0x0330   (0x0010)  
	FName                                              ColorParameterName;                                         // 0x0340   (0x0008)  


	/// Functions
	// Function /Script/ControlRig.ControlRigControlActor.ResetControlActor
	// void ResetControlActor();                                                                                                // [0x21cea20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Refresh
	// void Refresh();                                                                                                          // [0x21ce9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Clear
	// void Clear();                                                                                                            // [0x21cbe70] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigShapeActor
/// Size: 0x02D8 (728 bytes) (0x000290 - 0x0002D8) align 8 MaxSize: 0x02D8
class AControlRigShapeActor : public AActor
{ 
public:
	class USceneComponent*                             ActorRootComponent;                                         // 0x0290   (0x0008)  
	class UStaticMeshComponent*                        StaticMeshComponent;                                        // 0x0298   (0x0008)  
	uint32_t                                           ControlRigIndex;                                            // 0x02A0   (0x0004)  
	TWeakObjectPtr<class UControlRig*>                 ControlRig;                                                 // 0x02A4   (0x0008)  
	FName                                              ControlName;                                                // 0x02AC   (0x0008)  
	FName                                              ShapeName;                                                  // 0x02B4   (0x0008)  
	FName                                              ColorParameterName;                                         // 0x02BC   (0x0008)  
	unsigned char                                      UnknownData00_6[0x10];                                      // 0x02C4   (0x0010)  MISSED
	bool                                               bSelected : 1;                                              // 0x02D4:0 (0x0001)  
	bool                                               bHovered : 1;                                               // 0x02D4:1 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x02D5   (0x0003)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigShapeActor.SetSelected
	// void SetSelected(bool bInSelected);                                                                                      // [0x21d0f20] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetSelectable
	// void SetSelectable(bool bInSelectable);                                                                                  // [0x21d0e90] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetHovered
	// void SetHovered(bool bInHovered);                                                                                        // [0x21d0590] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetGlobalTransform
	// void SetGlobalTransform(FTransform& InTransform);                                                                        // [0x21d0470] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetEnabled
	// void SetEnabled(bool bInEnabled);                                                                                        // [0x21d03e0] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.OnTransformChanged
	// void OnTransformChanged(FTransform& NewTransform);                                                                       // [0x2c97800] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnSelectionChanged
	// void OnSelectionChanged(bool bIsSelected);                                                                               // [0x2c97800] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnManipulatingChanged
	// void OnManipulatingChanged(bool bIsManipulating);                                                                        // [0x2c97800] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnHoveredChanged
	// void OnHoveredChanged(bool bIsSelected);                                                                                 // [0x2c97800] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnEnabledChanged
	// void OnEnabledChanged(bool bIsEnabled);                                                                                  // [0x2c97800] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.IsSelectedInEditor
	// bool IsSelectedInEditor();                                                                                               // [0x21ce3b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.IsHovered
	// bool IsHovered();                                                                                                        // [0x21ce310] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x21ce2e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.GetGlobalTransform
	// FTransform GetGlobalTransform();                                                                                         // [0x21cd910] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ControlRig.ControlRigShapeDefinition
/// Size: 0x00B0 (176 bytes) (0x000000 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FControlRigShapeDefinition
{ 
	FName                                              ShapeName;                                                  // 0x0000   (0x0008)  
	TWeakObjectPtr<class UStaticMesh*>                 StaticMesh;                                                 // 0x0008   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0010   (0x0030)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x00A0   (0x0010)  MISSED
};

/// Class /Script/ControlRig.ControlRigShapeLibrary
/// Size: 0x0170 (368 bytes) (0x000028 - 0x000170) align 16 MaxSize: 0x0170
class UControlRigShapeLibrary : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FControlRigShapeDefinition                         DefaultShape;                                               // 0x0030   (0x00B0)  
	TWeakObjectPtr<class UMaterial*>                   DefaultMaterial;                                            // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x00E8   (0x0028)  MISSED
	TWeakObjectPtr<class UMaterial*>                   XRayMaterial;                                               // 0x0110   (0x0008)  
	unsigned char                                      UnknownData02_6[0x28];                                      // 0x0118   (0x0028)  MISSED
	FName                                              MaterialColorParameter;                                     // 0x0140   (0x0008)  
	TArray<FControlRigShapeDefinition>                 Shapes;                                                     // 0x0148   (0x0010)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x0158   (0x0018)  MISSED
};

/// Struct /Script/ControlRig.ControlRigTestDataVariable
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FControlRigTestDataVariable
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              CPPType;                                                    // 0x0008   (0x0008)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.CachedRigElement
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FCachedRigElement
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x000C)  
	uint16_t                                           Index;                                                      // 0x000C   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	int32_t                                            ContainerVersion;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0014   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigPoseElement
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigPoseElement
{ 
	FCachedRigElement                                  Index;                                                      // 0x0000   (0x0020)  
	FTransform                                         GlobalTransform;                                            // 0x0020   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x0080   (0x0060)  
	float                                              CurveValue;                                                 // 0x00E0   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x00E4   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigPose
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FRigPose
{ 
	TArray<FRigPoseElement>                            Elements;                                                   // 0x0000   (0x0010)  
	int32_t                                            HierarchyTopologyVersion;                                   // 0x0010   (0x0004)  
	int32_t                                            PoseHash;                                                   // 0x0014   (0x0004)  
	unsigned char                                      UnknownData00_7[0x58];                                      // 0x0018   (0x0058)  MISSED
};

/// Struct /Script/ControlRig.ControlRigTestDataFrame
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FControlRigTestDataFrame
{ 
	double                                             AbsoluteTime;                                               // 0x0000   (0x0008)  
	double                                             DeltaTime;                                                  // 0x0008   (0x0008)  
	TArray<FControlRigTestDataVariable>                Variables;                                                  // 0x0010   (0x0010)  
	FRigPose                                           Pose;                                                       // 0x0020   (0x0070)  
};

/// Class /Script/ControlRig.ControlRigTestData
/// Size: 0x0150 (336 bytes) (0x000028 - 0x000150) align 8 MaxSize: 0x0150
class UControlRigTestData : public UObject
{ 
public:
	FSoftObjectPath                                    ControlRigObjectPath;                                       // 0x0028   (0x0020)  
	FControlRigTestDataFrame                           Initial;                                                    // 0x0048   (0x0090)  
	TArray<FControlRigTestDataFrame>                   InputFrames;                                                // 0x00D8   (0x0010)  
	TArray<FControlRigTestDataFrame>                   OutputFrames;                                               // 0x00E8   (0x0010)  
	TArray<int32_t>                                    FramesToSkip;                                               // 0x00F8   (0x0010)  
	double                                             Tolerance;                                                  // 0x0108   (0x0008)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0110   (0x0040)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigTestData.SetupReplay
	// bool SetupReplay(class UControlRig* InControlRig, bool bGroundTruth);                                                    // [0x21d0fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigTestData.ReleaseReplay
	// void ReleaseReplay();                                                                                                    // [0x21ce9d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigTestData.Record
	// bool Record(class UControlRig* InControlRig, double InRecordingDuration);                                                // [0x21ce740] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigTestData.IsReplaying
	// bool IsReplaying();                                                                                                      // [0x21ce370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.IsRecording
	// bool IsRecording();                                                                                                      // [0x21ce340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.GetTimeRange
	// FVector2D GetTimeRange(bool bInput);                                                                                     // [0x21ce140] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.GetPlaybackMode
	// EControlRigTestDataPlaybackMode GetPlaybackMode();                                                                       // [0x21cdef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.GetFrameIndexForTime
	// int32_t GetFrameIndexForTime(double InSeconds, bool bInput);                                                             // [0x21cd830] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.CreateNewAsset
	// class UControlRigTestData* CreateNewAsset(FString InDesiredPackagePath, FString InBlueprintPathName);                    // [0x21cbee0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigValidator
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UControlRigValidator : public UObject
{ 
public:
	TArray<class UControlRigValidationPass*>           Passes;                                                     // 0x0028   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0038   (0x0030)  MISSED
};

/// Class /Script/ControlRig.ControlRigValidationPass
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UControlRigValidationPass : public UObject
{ 
public:
};

/// Class /Script/ControlRig.AdditiveControlRig
/// Size: 0x0408 (1032 bytes) (0x0003F8 - 0x000408) align 8 MaxSize: 0x0408
class UAdditiveControlRig : public UControlRig
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x03F8   (0x0010)  MISSED
};

/// Class /Script/ControlRig.FKControlRig
/// Size: 0x0438 (1080 bytes) (0x0003F8 - 0x000438) align 8 MaxSize: 0x0438
class UFKControlRig : public UControlRig
{ 
public:
	TArray<bool>                                       IsControlActive;                                            // 0x03F8   (0x0010)  
	EControlRigFKRigExecuteMode                        ApplyMode;                                                  // 0x0408   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2F];                                      // 0x0409   (0x002F)  MISSED
};

/// Class /Script/ControlRig.RigHierarchyController
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 16 MaxSize: 0x00A0
class URigHierarchyController : public UObject
{ 
public:
	bool                                               bReportWarningsAndErrors;                                   // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	TWeakObjectPtr<class URigHierarchy*>               Hierarchy;                                                  // 0x002C   (0x0008)  
	unsigned char                                      UnknownData01_7[0x6C];                                      // 0x0034   (0x006C)  MISSED


	/// Functions
	// Function /Script/ControlRig.RigHierarchyController.SetSelection
	// bool SetSelection(TArray<FRigElementKey>& InKeys, bool bPrintPythonCommand);                                             // [0x229af30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetParent
	// bool SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x229ad60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetHierarchy
	// void SetHierarchy(class URigHierarchy* InHierarchy);                                                                     // [0x229acd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetDisplayName
	// FName SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand); // [0x229aa80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetControlSettings
	// bool SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo);                          // [0x229a8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.SelectElement
	// bool SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection);                                            // [0x229a760] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ReorderElement
	// bool ReorderElement(FRigElementKey InElement, int32_t InIndex, bool bSetupUndo, bool bPrintPythonCommand);               // [0x229a200] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RenameElement
	// FRigElementKey RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection); // [0x229a030] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveParent
	// bool RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x2299e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveElement
	// bool RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand);                                 // [0x2299d20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveAllParents
	// bool RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x2299b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.MirrorElements
	// TArray<FRigElementKey> MirrorElements(TArray<FRigElementKey> InKeys, FRigVMMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x22995e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportFromText
	// TArray<FRigElementKey> ImportFromText(FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x2299390] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportCurves
	// TArray<FRigElementKey> ImportCurves(class USkeleton* InSkeleton, FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand); // [0x2298e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportBones
	// TArray<FRigElementKey> ImportBones(class USkeleton* InSkeleton, FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand); // [0x2298bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.GetHierarchy
	// class URigHierarchy* GetHierarchy();                                                                                     // [0x2298ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.GetControlSettings
	// FRigControlSettings GetControlSettings(FRigElementKey InKey);                                                            // [0x2298850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.ExportToText
	// FString ExportToText(TArray<FRigElementKey> InKeys);                                                                     // [0x2298690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.ExportSelectionToText
	// FString ExportSelectionToText();                                                                                         // [0x22985b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.DuplicateElements
	// TArray<FRigElementKey> DuplicateElements(TArray<FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x2298320] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.DeselectElement
	// bool DeselectElement(FRigElementKey InKey);                                                                              // [0x2297e00] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ClearSelection
	// bool ClearSelection();                                                                                                   // [0x2297da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddRigidBody
	// FRigElementKey AddRigidBody(FName InName, FRigElementKey InParent, FRigRigidBodySettings InSettings, FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x2297960] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddParent
	// bool AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo); // [0x2297790] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddNull
	// FRigElementKey AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand); // [0x22974d0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddCurve
	// FRigElementKey AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);                         // [0x2297340] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddControl_ForBlueprint
	// FRigElementKey AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand); // [0x2296e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddBone
	// FRigElementKey AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand); // [0x2296b90] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
	// FRigElementKey AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // [0x22968e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigLayerInstance
/// Size: 0x0350 (848 bytes) (0x000348 - 0x000350) align 16 MaxSize: 0x0350
class UControlRigLayerInstance : public UAnimInstance
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0348   (0x0008)  MISSED
};

/// Class /Script/ControlRig.ControlRigObjectHolder
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UControlRigObjectHolder : public UObject
{ 
public:
	TArray<class UObject*>                             Objects;                                                    // 0x0028   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigSequence
/// Size: 0x0288 (648 bytes) (0x000220 - 0x000288) align 8 MaxSize: 0x0288
class UControlRigSequence : public ULevelSequence
{ 
public:
	TWeakObjectPtr<class UAnimSequence*>               LastExportedToAnimationSequence;                            // 0x0220   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0228   (0x0028)  MISSED
	TWeakObjectPtr<class USkeletalMesh*>               LastExportedUsingSkeletalMesh;                              // 0x0250   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0258   (0x0028)  MISSED
	float                                              LastExportedFrameRate;                                      // 0x0280   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0284   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.ChannelMapInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FChannelMapInfo
{ 
	int32_t                                            ControlIndex;                                               // 0x0000   (0x0004)  
	int32_t                                            TotalChannelIndex;                                          // 0x0004   (0x0004)  
	int32_t                                            ChannelIndex;                                               // 0x0008   (0x0004)  
	int32_t                                            ParentControlIndex;                                         // 0x000C   (0x0004)  
	FName                                              ChannelTypeName;                                            // 0x0010   (0x0008)  
	bool                                               bDoesHaveSpace;                                             // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	int32_t                                            SpaceChannelIndex;                                          // 0x001C   (0x0004)  
	int32_t                                            MaskIndex;                                                  // 0x0020   (0x0004)  
	int32_t                                            CategoryIndex;                                              // 0x0024   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	TArray<uint32_t>                                   ConstraintsIndex;                                           // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.EnumParameterNameAndCurve
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FEnumParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneByteChannel                             ParameterCurve;                                             // 0x0008   (0x0108)  
};

/// Struct /Script/ControlRig.IntegerParameterNameAndCurve
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 MaxSize: 0x0108
struct FIntegerParameterNameAndCurve
{ 
	FName                                              ParameterName;                                              // 0x0000   (0x0008)  
	FMovieSceneIntegerChannel                          ParameterCurve;                                             // 0x0008   (0x0100)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigSpaceBaseKey
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMovieSceneControlRigSpaceBaseKey
{ 
	EMovieSceneControlRigSpaceType                     SpaceType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FRigElementKey                                     ControlRigElement;                                          // 0x0004   (0x000C)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigSpaceChannel
/// Size: 0x0110 (272 bytes) (0x000050 - 0x000110) align 8 MaxSize: 0x0110
struct FMovieSceneControlRigSpaceChannel : FMovieSceneChannel
{ 
	TArray<FFrameNumber>                               KeyTimes;                                                   // 0x0050   (0x0010)  
	TArray<FMovieSceneControlRigSpaceBaseKey>          KeyValues;                                                  // 0x0060   (0x0010)  
	FMovieSceneKeyHandleMap                            KeyHandles;                                                 // 0x0070   (0x0088)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x00F8   (0x0018)  MISSED
};

/// Struct /Script/ControlRig.SpaceControlNameAndChannel
/// Size: 0x0118 (280 bytes) (0x000000 - 0x000118) align 8 MaxSize: 0x0118
struct FSpaceControlNameAndChannel
{ 
	FName                                              ControlName;                                                // 0x0000   (0x0008)  
	FMovieSceneControlRigSpaceChannel                  SpaceCurve;                                                 // 0x0008   (0x0110)  
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterSection
/// Size: 0x03D0 (976 bytes) (0x000158 - 0x0003D0) align 8 MaxSize: 0x03D0
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0158   (0x0048)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x01A0   (0x0008)  
	class UClass*                                      ControlRigClass;                                            // 0x01A8   (0x0008)  
	TArray<bool>                                       ControlsMask;                                               // 0x01B0   (0x0010)  
	FMovieSceneTransformMask                           TransformMask;                                              // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01C4   (0x0004)  MISSED
	FMovieSceneFloatChannel                            Weight;                                                     // 0x01C8   (0x0110)  
	TMap<FName, FChannelMapInfo>                       ControlChannelMap;                                          // 0x02D8   (0x0050)  
	TArray<FEnumParameterNameAndCurve>                 EnumParameterNamesAndCurves;                                // 0x0328   (0x0010)  
	TArray<FIntegerParameterNameAndCurve>              IntegerParameterNamesAndCurves;                             // 0x0338   (0x0010)  
	TArray<FSpaceControlNameAndChannel>                SpaceChannels;                                              // 0x0348   (0x0010)  
	TArray<FConstraintAndActiveChannel>                ConstraintsChannels;                                        // 0x0358   (0x0010)  
	unsigned char                                      UnknownData02_7[0x68];                                      // 0x0368   (0x0068)  MISSED
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
/// Size: 0x0100 (256 bytes) (0x000098 - 0x000100) align 8 MaxSize: 0x0100
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x40];                                      // 0x0098   (0x0040)  MISSED
	class UControlRig*                                 ControlRig;                                                 // 0x00D8   (0x0008)  
	class UMovieSceneSection*                          SectionToKey;                                               // 0x00E0   (0x0008)  
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x00E8   (0x0010)  
	FName                                              TrackName;                                                  // 0x00F8   (0x0008)  
};

/// Class /Script/ControlRig.ControlRigSettings
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UControlRigSettings : public UDeveloperSettings
{ 
public:
};

/// Class /Script/ControlRig.ControlRigEditorSettings
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UControlRigEditorSettings : public UDeveloperSettings
{ 
public:
};

/// Struct /Script/ControlRig.RigControlValueStorage
/// Size: 0x0084 (132 bytes) (0x000000 - 0x000084) align 4 MaxSize: 0x0084
struct FRigControlValueStorage
{ 
	float                                              Float00;                                                    // 0x0000   (0x0004)  
	float                                              Float01;                                                    // 0x0004   (0x0004)  
	float                                              Float02;                                                    // 0x0008   (0x0004)  
	float                                              Float03;                                                    // 0x000C   (0x0004)  
	float                                              Float10;                                                    // 0x0010   (0x0004)  
	float                                              Float11;                                                    // 0x0014   (0x0004)  
	float                                              Float12;                                                    // 0x0018   (0x0004)  
	float                                              Float13;                                                    // 0x001C   (0x0004)  
	float                                              Float20;                                                    // 0x0020   (0x0004)  
	float                                              Float21;                                                    // 0x0024   (0x0004)  
	float                                              Float22;                                                    // 0x0028   (0x0004)  
	float                                              Float23;                                                    // 0x002C   (0x0004)  
	float                                              Float30;                                                    // 0x0030   (0x0004)  
	float                                              Float31;                                                    // 0x0034   (0x0004)  
	float                                              Float32;                                                    // 0x0038   (0x0004)  
	float                                              Float33;                                                    // 0x003C   (0x0004)  
	float                                              Float000;                                                   // 0x0040   (0x0004)  
	float                                              Float011;                                                   // 0x0044   (0x0004)  
	float                                              Float022;                                                   // 0x0048   (0x0004)  
	float                                              Float033;                                                   // 0x004C   (0x0004)  
	float                                              Float104;                                                   // 0x0050   (0x0004)  
	float                                              Float115;                                                   // 0x0054   (0x0004)  
	float                                              Float126;                                                   // 0x0058   (0x0004)  
	float                                              Float137;                                                   // 0x005C   (0x0004)  
	float                                              Float208;                                                   // 0x0060   (0x0004)  
	float                                              Float219;                                                   // 0x0064   (0x0004)  
	float                                              Float2210;                                                  // 0x0068   (0x0004)  
	float                                              Float2311;                                                  // 0x006C   (0x0004)  
	float                                              Float3012;                                                  // 0x0070   (0x0004)  
	float                                              Float3113;                                                  // 0x0074   (0x0004)  
	float                                              Float3214;                                                  // 0x0078   (0x0004)  
	float                                              Float3315;                                                  // 0x007C   (0x0004)  
	bool                                               bValid;                                                     // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0081   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigControlValue
/// Size: 0x0084 (132 bytes) (0x000000 - 0x000084) align 4 MaxSize: 0x0084
struct FRigControlValue
{ 
	FRigControlValueStorage                            FloatStorage;                                               // 0x0000   (0x0084)  
};

/// Struct /Script/ControlRig.RigControlCopy
/// Size: 0x0230 (560 bytes) (0x000000 - 0x000230) align 16 MaxSize: 0x0230
struct FRigControlCopy
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FName                                              Name;                                                       // 0x0010   (0x0008)  
	ERigControlType                                    ControlType;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FRigControlValue                                   Value;                                                      // 0x001C   (0x0084)  
	FRigElementKey                                     ParentKey;                                                  // 0x00A0   (0x000C)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00AC   (0x0004)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x00B0   (0x0060)  
	FTransform                                         ParentTransform;                                            // 0x0110   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x0170   (0x0060)  
	FTransform                                         GlobalTransform;                                            // 0x01D0   (0x0060)  
};

/// Struct /Script/ControlRig.ControlRigControlPose
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FControlRigControlPose
{ 
	TArray<FRigControlCopy>                            CopyOfControls;                                             // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0010   (0x0050)  MISSED
};

/// Class /Script/ControlRig.ControlRigPoseAsset
/// Size: 0x0088 (136 bytes) (0x000028 - 0x000088) align 8 MaxSize: 0x0088
class UControlRigPoseAsset : public UObject
{ 
public:
	FControlRigControlPose                             Pose;                                                       // 0x0028   (0x0060)  


	/// Functions
	// Function /Script/ControlRig.ControlRigPoseAsset.SelectControls
	// void SelectControls(class UControlRig* InControlRig, bool bDoMirror);                                                    // [0x229a690] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.SavePose
	// void SavePose(class UControlRig* InControlRig, bool bUseAll);                                                            // [0x229a5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.ReplaceControlName
	// void ReplaceControlName(FName& CurrentName, FName& NewName);                                                             // [0x229a3f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.PastePose
	// void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);                                            // [0x22998e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.GetCurrentPose
	// void GetCurrentPose(class UControlRig* InControlRig, FControlRigControlPose& OutPose);                                   // [0x22989e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.GetControlNames
	// TArray<FName> GetControlNames();                                                                                         // [0x22987d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigPoseAsset.DoesMirrorMatch
	// bool DoesMirrorMatch(class UControlRig* ControlRig, FName& ControlName);                                                 // [0x2297ec0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigPoseMirrorSettings
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UControlRigPoseMirrorSettings : public UObject
{ 
public:
	FString                                            RightSide;                                                  // 0x0028   (0x0010)  
	FString                                            LeftSide;                                                   // 0x0038   (0x0010)  
	TEnumAsByte<EAxis>                                 MirrorAxis;                                                 // 0x0048   (0x0001)  
	TEnumAsByte<EAxis>                                 AxisToFlip;                                                 // 0x0049   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x004A   (0x0006)  MISSED
};

/// Class /Script/ControlRig.ControlRigPoseProjectSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UControlRigPoseProjectSettings : public UObject
{ 
public:
	TArray<FDirectoryPath>                             RootSaveDirs;                                               // 0x0028   (0x0010)  
};

/// Class /Script/ControlRig.ControlRigSnapSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UControlRigSnapSettings : public UObject
{ 
public:
	bool                                               bKeepOffset;                                                // 0x0028   (0x0001)  
	bool                                               bSnapPosition;                                              // 0x0029   (0x0001)  
	bool                                               bSnapRotation;                                              // 0x002A   (0x0001)  
	bool                                               bSnapScale;                                                 // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/ControlRig.ControlRigWorkflowOptions
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{ 
public:
	class URigHierarchy*                               Hierarchy;                                                  // 0x0098   (0x0008)  
	TArray<FRigElementKey>                             Selection;                                                  // 0x00A0   (0x0010)  


	/// Functions
	// Function /Script/ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
	// bool EnsureAtLeastOneRigElementSelected();                                                                               // [0x2298530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigTransformWorkflowOptions
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{ 
public:
	TEnumAsByte<ERigTransformType>                     TransformType;                                              // 0x00B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00B1   (0x0007)  MISSED


	/// Functions
	// Function /Script/ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
	// TArray<FRigVMUserWorkflow> ProvideWorkflows(class UObject* InSubject);                                                   // [0x2299a20] Final|Native|Public  
};

/// Class /Script/ControlRig.ControlRigNumericalValidationPass
/// Size: 0x00C0 (192 bytes) (0x000028 - 0x0000C0) align 8 MaxSize: 0x00C0
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{ 
public:
	bool                                               bCheckControls;                                             // 0x0028   (0x0001)  
	bool                                               bCheckBones;                                                // 0x0029   (0x0001)  
	bool                                               bCheckCurves;                                               // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x002B   (0x0001)  MISSED
	float                                              TranslationPrecision;                                       // 0x002C   (0x0004)  
	float                                              RotationPrecision;                                          // 0x0030   (0x0004)  
	float                                              ScalePrecision;                                             // 0x0034   (0x0004)  
	float                                              CurvePrecision;                                             // 0x0038   (0x0004)  
	FName                                              EventNameA;                                                 // 0x003C   (0x0008)  
	FName                                              EventNameB;                                                 // 0x0044   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FRigPose                                           Pose;                                                       // 0x0050   (0x0070)  
};

/// Struct /Script/ControlRig.RigBaseElement
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 8 MaxSize: 0x00F0
struct FRigBaseElement
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FRigElementKey                                     Key;                                                        // 0x0008   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FString                                            NameString;                                                 // 0x0018   (0x0010)  
	int32_t                                            Index;                                                      // 0x0028   (0x0004)  
	int32_t                                            SubIndex;                                                   // 0x002C   (0x0004)  
	bool                                               bSelected;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	int32_t                                            CreatedAtInstructionIndex;                                  // 0x0034   (0x0004)  
	unsigned char                                      UnknownData03_7[0xB8];                                      // 0x0038   (0x00B8)  MISSED
};

/// Struct /Script/ControlRig.RigComputedTransform
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FRigComputedTransform
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0060   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.RigLocalAndGlobalTransform
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigLocalAndGlobalTransform
{ 
	FRigComputedTransform                              Local;                                                      // 0x0000   (0x0070)  
	FRigComputedTransform                              Global;                                                     // 0x0070   (0x0070)  
};

/// Struct /Script/ControlRig.RigCurrentAndInitialTransform
/// Size: 0x01C0 (448 bytes) (0x000000 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FRigCurrentAndInitialTransform
{ 
	FRigLocalAndGlobalTransform                        Current;                                                    // 0x0000   (0x00E0)  
	FRigLocalAndGlobalTransform                        Initial;                                                    // 0x00E0   (0x00E0)  
};

/// Struct /Script/ControlRig.RigTransformElement
/// Size: 0x02F0 (752 bytes) (0x0000F0 - 0x0002F0) align 16 MaxSize: 0x02F0
struct FRigTransformElement : FRigBaseElement
{ 
	FRigCurrentAndInitialTransform                     Pose;                                                       // 0x00F0   (0x01C0)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x02B0   (0x0040)  MISSED
};

/// Struct /Script/ControlRig.RigMultiParentElement
/// Size: 0x03F0 (1008 bytes) (0x0002F0 - 0x0003F0) align 16 MaxSize: 0x03F0
struct FRigMultiParentElement : FRigTransformElement
{ 
	unsigned char                                      UnknownData00_1[0x100];                                     // 0x02F0   (0x0100)  MISSED
};

/// Struct /Script/ControlRig.RigControlLimitEnabled
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FRigControlLimitEnabled
{ 
	bool                                               bMinimum;                                                   // 0x0000   (0x0001)  
	bool                                               bMaximum;                                                   // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.RigControlSettings
/// Size: 0x01B0 (432 bytes) (0x000000 - 0x0001B0) align 8 MaxSize: 0x01B0
struct FRigControlSettings
{ 
	ERigControlAnimationType                           AnimationType;                                              // 0x0000   (0x0001)  
	ERigControlType                                    ControlType;                                                // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FName                                              DisplayName;                                                // 0x0004   (0x0008)  
	ERigControlAxis                                    PrimaryAxis;                                                // 0x000C   (0x0001)  
	bool                                               bIsCurve;                                                   // 0x000D   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	TArray<FRigControlLimitEnabled>                    LimitEnabled;                                               // 0x0010   (0x0010)  
	bool                                               bDrawLimits;                                                // 0x0020   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	FRigControlValue                                   MinimumValue;                                               // 0x0024   (0x0084)  
	FRigControlValue                                   MaximumValue;                                               // 0x00A8   (0x0084)  
	bool                                               bShapeVisible;                                              // 0x012C   (0x0001)  
	ERigControlVisibility                              ShapeVisibility;                                            // 0x012D   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x012E   (0x0002)  MISSED
	FName                                              ShapeName;                                                  // 0x0130   (0x0008)  
	FLinearColor                                       ShapeColor;                                                 // 0x0138   (0x0010)  
	bool                                               bIsTransientControl;                                        // 0x0148   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0149   (0x0007)  MISSED
	class UEnum*                                       ControlEnum;                                                // 0x0150   (0x0008)  
	FRigControlElementCustomization                    Customization;                                              // 0x0158   (0x0020)  
	TArray<FRigElementKey>                             DrivenControls;                                             // 0x0178   (0x0010)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x0188   (0x0010)  MISSED
	bool                                               bGroupWithParentControl;                                    // 0x0198   (0x0001)  
	bool                                               bRestrictSpaceSwitching;                                    // 0x0199   (0x0001)  
	unsigned char                                      UnknownData06_6[0x6];                                       // 0x019A   (0x0006)  MISSED
	TArray<ERigControlTransformChannel>                FilteredChannels;                                           // 0x01A0   (0x0010)  
};

/// Struct /Script/ControlRig.RigPreferredEulerAngles
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FRigPreferredEulerAngles
{ 
	EEulerRotationOrder                                RotationOrder;                                              // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            Current;                                                    // 0x0008   (0x0018)  
	FVector                                            Initial;                                                    // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigControlElement
/// Size: 0x0960 (2400 bytes) (0x0003F0 - 0x000960) align 16 MaxSize: 0x0960
struct FRigControlElement : FRigMultiParentElement
{ 
	FRigControlSettings                                Settings;                                                   // 0x03F0   (0x01B0)  
	FRigCurrentAndInitialTransform                     Offset;                                                     // 0x05A0   (0x01C0)  
	FRigCurrentAndInitialTransform                     Shape;                                                      // 0x0760   (0x01C0)  
	FRigPreferredEulerAngles                           PreferredEulerAngles;                                       // 0x0920   (0x0038)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0958   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.MovieSceneControlRigInstanceData
/// Size: 0x0148 (328 bytes) (0x000008 - 0x000148) align 8 MaxSize: 0x0148
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
{ 
	bool                                               bAdditive;                                                  // 0x0008   (0x0001)  
	bool                                               bApplyBoneFilter;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FInputBlendPose                                    BoneFilter;                                                 // 0x0010   (0x0010)  
	FMovieSceneFloatChannel                            Weight;                                                     // 0x0020   (0x0110)  
	FMovieSceneEvaluationOperand                       Operand;                                                    // 0x0130   (0x0014)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0144   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigTransformStackEntry
/// Size: 0x00F0 (240 bytes) (0x000000 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigTransformStackEntry
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x000C)  
	TEnumAsByte<ERigTransformStackEntryType>           EntryType;                                                  // 0x000C   (0x0001)  
	TEnumAsByte<ERigTransformType>                     TransformType;                                              // 0x000D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x000E   (0x0002)  MISSED
	FTransform                                         OldTransform;                                               // 0x0010   (0x0060)  
	FTransform                                         NewTransform;                                               // 0x0070   (0x0060)  
	bool                                               bAffectChildren;                                            // 0x00D0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00D1   (0x0007)  MISSED
	TArray<FString>                                    Callstack;                                                  // 0x00D8   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x00E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigSingleParentElement
/// Size: 0x0300 (768 bytes) (0x0002F0 - 0x000300) align 16 MaxSize: 0x02F8
struct FRigSingleParentElement : FRigTransformElement
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x02F0   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigElementWeight
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigElementWeight
{ 
	float                                              Location;                                                   // 0x0000   (0x0004)  
	float                                              Rotation;                                                   // 0x0004   (0x0004)  
	float                                              Scale;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigElementParentConstraint
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FRigElementParentConstraint
{ 
	unsigned char                                      UnknownData00_2[0x90];                                      // 0x0000   (0x0090)  MISSED
};

/// Struct /Script/ControlRig.RigBoneElement
/// Size: 0x0300 (768 bytes) (0x0002F8 - 0x000300) align 16 MaxSize: 0x0300
struct FRigBoneElement : FRigSingleParentElement
{ 
	ERigBoneType                                       BoneType;                                                   // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x02F9   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigNullElement
/// Size: 0x03F0 (1008 bytes) (0x0003F0 - 0x0003F0) align 16 MaxSize: 0x03F0
struct FRigNullElement : FRigMultiParentElement
{ 
};

/// Struct /Script/ControlRig.RigCurveElement
/// Size: 0x00F8 (248 bytes) (0x0000F0 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FRigCurveElement : FRigBaseElement
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00F0   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigRigidBodySettings
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FRigRigidBodySettings
{ 
	float                                              Mass;                                                       // 0x0000   (0x0004)  
};

/// Struct /Script/ControlRig.RigRigidBodyElement
/// Size: 0x0300 (768 bytes) (0x0002F8 - 0x000300) align 16 MaxSize: 0x0300
struct FRigRigidBodyElement : FRigSingleParentElement
{ 
	FRigRigidBodySettings                              Settings;                                                   // 0x02F8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x02FC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigReferenceElement
/// Size: 0x0310 (784 bytes) (0x0002F8 - 0x000310) align 16 MaxSize: 0x0310
struct FRigReferenceElement : FRigSingleParentElement
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x02F8   (0x0018)  MISSED
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContentPerElement
/// Size: 0x0200 (512 bytes) (0x000000 - 0x000200) align 16 MaxSize: 0x0200
struct FRigHierarchyCopyPasteContentPerElement
{ 
	FRigElementKey                                     Key;                                                        // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FString                                            Content;                                                    // 0x0010   (0x0010)  
	TArray<FRigElementKey>                             Parents;                                                    // 0x0020   (0x0010)  
	TArray<FRigElementWeight>                          ParentWeights;                                              // 0x0030   (0x0010)  
	FRigCurrentAndInitialTransform                     Pose;                                                       // 0x0040   (0x01C0)  
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContent
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRigHierarchyCopyPasteContent
{ 
	TArray<FRigHierarchyCopyPasteContentPerElement>    Elements;                                                   // 0x0000   (0x0010)  
	TArray<ERigElementType>                            Types;                                                      // 0x0010   (0x0010)  
	TArray<FString>                                    Contents;                                                   // 0x0020   (0x0010)  
	TArray<FTransform>                                 LocalTransforms;                                            // 0x0030   (0x0010)  
	TArray<FTransform>                                 GlobalTransforms;                                           // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigExecuteContext
/// Size: 0x0120 (288 bytes) (0x0000F0 - 0x000120) align 16 MaxSize: 0x0120
struct FControlRigExecuteContext : FRigVMExecuteContext
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x00F0   (0x0030)  MISSED
};

/// Struct /Script/ControlRig.RigUnit
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit : FRigVMStruct
{ 
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_HighlevelBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnitMutable
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnitMutable : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x0120)  
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBaseMutable
/// Size: 0x0130 (304 bytes) (0x000130 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_HighlevelBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.StructReference
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FStructReference
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.ControlRigIOSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FControlRigIOSettings
{ 
	bool                                               bUpdatePose;                                                // 0x0000   (0x0001)  
	bool                                               bUpdateCurves;                                              // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.ControlRigAnimNodeEventName
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FControlRigAnimNodeEventName
{ 
	FName                                              EventName;                                                  // 0x0000   (0x0008)  
};

/// Struct /Script/ControlRig.AnimNode_ControlRigBase
/// Size: 0x0270 (624 bytes) (0x000058 - 0x000270) align 8 MaxSize: 0x0270
struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty
{ 
	FPoseLink                                          Source;                                                     // 0x0058   (0x0010)  
	bool                                               bResetInputPoseToInitial;                                   // 0x0068   (0x0001)  
	bool                                               bTransferInputPose;                                         // 0x0069   (0x0001)  
	bool                                               bTransferInputCurves;                                       // 0x006A   (0x0001)  
	bool                                               bTransferPoseInGlobalSpace;                                 // 0x006B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<FBoneReference>                             InputBonesToTransfer;                                       // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_6[0x1C0];                                     // 0x0080   (0x01C0)  MISSED
	TWeakObjectPtr<class UNodeMappingContainer*>       NodeMappingContainer;                                       // 0x0240   (0x0008)  
	FControlRigIOSettings                              InputSettings;                                              // 0x0248   (0x0002)  
	FControlRigIOSettings                              OutputSettings;                                             // 0x024A   (0x0002)  
	bool                                               bExecute;                                                   // 0x024C   (0x0001)  
	unsigned char                                      UnknownData02_6[0xB];                                       // 0x024D   (0x000B)  MISSED
	TArray<FControlRigAnimNodeEventName>               EventQueue;                                                 // 0x0258   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0268   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig
/// Size: 0x0470 (1136 bytes) (0x000270 - 0x000470) align 8 MaxSize: 0x0470
struct FAnimNode_ControlRig : FAnimNode_ControlRigBase
{ 
	class UClass*                                      ControlRigClass;                                            // 0x0270   (0x0008)  
	class UControlRig*                                 ControlRig;                                                 // 0x0278   (0x0008)  
	float                                              Alpha;                                                      // 0x0280   (0x0004)  
	EAnimAlphaInputType                                AlphaInputType;                                             // 0x0284   (0x0001)  
	bool                                               bAlphaBoolEnabled : 1;                                      // 0x0285:0 (0x0001)  
	bool                                               bSetRefPoseFromSkeleton : 1;                                // 0x0285:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0286   (0x0002)  MISSED
	FInputScaleBias                                    AlphaScaleBias;                                             // 0x0288   (0x0008)  
	FInputAlphaBoolBlend                               AlphaBoolBlend;                                             // 0x0290   (0x0048)  
	FName                                              AlphaCurveName;                                             // 0x02D8   (0x0008)  
	FInputScaleBiasClamp                               AlphaScaleBiasClamp;                                        // 0x02E0   (0x0030)  
	TMap<FName, FName>                                 InputMapping;                                               // 0x0310   (0x0050)  
	TMap<FName, FName>                                 OutputMapping;                                              // 0x0360   (0x0050)  
	unsigned char                                      UnknownData01_6[0xB0];                                      // 0x03B0   (0x00B0)  MISSED
	int32_t                                            LODThreshold;                                               // 0x0460   (0x0004)  
	unsigned char                                      UnknownData02_7[0xC];                                       // 0x0464   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.AnimNode_ControlRig_ExternalSource
/// Size: 0x0278 (632 bytes) (0x000270 - 0x000278) align 8 MaxSize: 0x0278
struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase
{ 
	TWeakObjectPtr<class UControlRig*>                 ControlRig;                                                 // 0x0270   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigAnimInstanceProxy
/// Size: 0x0920 (2336 bytes) (0x000880 - 0x000920) align 16 MaxSize: 0x0920
struct FControlRigAnimInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0880   (0x00A0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigComponentMappedComponent
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FControlRigComponentMappedComponent
{ 
	class USceneComponent*                             Component;                                                  // 0x0000   (0x0008)  
	FName                                              ElementName;                                                // 0x0008   (0x0008)  
	ERigElementType                                    ElementType;                                                // 0x0010   (0x0001)  
	EControlRigComponentMapDirection                   Direction;                                                  // 0x0011   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0012   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.ControlRigComponentMappedBone
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FControlRigComponentMappedBone
{ 
	FName                                              Source;                                                     // 0x0000   (0x0008)  
	FName                                              Target;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigComponentMappedCurve
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FControlRigComponentMappedCurve
{ 
	FName                                              Source;                                                     // 0x0000   (0x0008)  
	FName                                              Target;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.ControlShapeActorCreationParam
/// Size: 0x01D0 (464 bytes) (0x000000 - 0x0001D0) align 16 MaxSize: 0x01D0
struct FControlShapeActorCreationParam
{ 
	unsigned char                                      UnknownData00_2[0x1D0];                                     // 0x0000   (0x01D0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigValidationContext
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FControlRigValidationContext
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/ControlRig.CRSimContainer
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FCRSimContainer
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	float                                              TimeStep;                                                   // 0x0008   (0x0004)  
	float                                              AccumulatedTime;                                            // 0x000C   (0x0004)  
	float                                              TimeLeftForStep;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.CRSimLinearSpring
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FCRSimLinearSpring
{ 
	int32_t                                            SubjectA;                                                   // 0x0000   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0004   (0x0004)  
	float                                              Coefficient;                                                // 0x0008   (0x0004)  
	float                                              Equilibrium;                                                // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.CRSimPointConstraint
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FCRSimPointConstraint
{ 
	ECRSimConstraintType                               Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            SubjectA;                                                   // 0x0004   (0x0004)  
	int32_t                                            SubjectB;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FVector                                            DataA;                                                      // 0x0010   (0x0018)  
	FVector                                            DataB;                                                      // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRig.CRSimPointForce
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FCRSimPointForce
{ 
	ECRSimPointForceType                               ForceType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            Vector;                                                     // 0x0008   (0x0018)  
	float                                              Coefficient;                                                // 0x0020   (0x0004)  
	bool                                               bNormalize;                                                 // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x0025   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.CRSimSoftCollision
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FCRSimSoftCollision
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	ECRSimSoftCollisionType                            ShapeType;                                                  // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	float                                              MinimumDistance;                                            // 0x0064   (0x0004)  
	float                                              MaximumDistance;                                            // 0x0068   (0x0004)  
	ERigVMAnimEasingType                               FalloffType;                                                // 0x006C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	float                                              Coefficient;                                                // 0x0070   (0x0004)  
	bool                                               bInverted;                                                  // 0x0074   (0x0001)  
	unsigned char                                      UnknownData02_7[0xB];                                       // 0x0075   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.CRSimPointContainer
/// Size: 0x0078 (120 bytes) (0x000018 - 0x000078) align 8 MaxSize: 0x0078
struct FCRSimPointContainer : FCRSimContainer
{ 
	TArray<FRigVMSimPoint>                             Points;                                                     // 0x0018   (0x0010)  
	TArray<FCRSimLinearSpring>                         Springs;                                                    // 0x0028   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0038   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0048   (0x0010)  
	TArray<FCRSimPointConstraint>                      Constraints;                                                // 0x0058   (0x0010)  
	TArray<FRigVMSimPoint>                             PreviousStep;                                               // 0x0068   (0x0010)  
};

/// Struct /Script/ControlRig.ConstraintNodeData
/// Size: 0x0140 (320 bytes) (0x000000 - 0x000140) align 16 MaxSize: 0x0140
struct FConstraintNodeData
{ 
	FTransform                                         RelativeParent;                                             // 0x0000   (0x0060)  
	FConstraintOffset                                  ConstraintOffset;                                           // 0x0060   (0x00C0)  
	FName                                              LinkedNode;                                                 // 0x0120   (0x0008)  
	TArray<FTransformConstraint>                       Constraints;                                                // 0x0128   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0138   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.AnimationHierarchy
/// Size: 0x0088 (136 bytes) (0x000078 - 0x000088) align 8 MaxSize: 0x0088
struct FAnimationHierarchy : FNodeHierarchyWithUserData
{ 
	TArray<FConstraintNodeData>                        UserData;                                                   // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.RigElement
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRigElement
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            Index;                                                      // 0x0010   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigBone
/// Size: 0x0170 (368 bytes) (0x000018 - 0x000170) align 16 MaxSize: 0x0170
struct FRigBone : FRigElement
{ 
	FName                                              ParentName;                                                 // 0x0018   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0024   (0x000C)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0030   (0x0060)  
	FTransform                                         GlobalTransform;                                            // 0x0090   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x00F0   (0x0060)  
	TArray<int32_t>                                    Dependents;                                                 // 0x0150   (0x0010)  
	ERigBoneType                                       Type;                                                       // 0x0160   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0161   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigBoneHierarchy
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigBoneHierarchy
{ 
	TArray<FRigBone>                                   Bones;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigControl
/// Size: 0x0360 (864 bytes) (0x000018 - 0x000360) align 16 MaxSize: 0x0360
struct FRigControl : FRigElement
{ 
	ERigControlType                                    ControlType;                                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              DisplayName;                                                // 0x001C   (0x0008)  
	FName                                              ParentName;                                                 // 0x0024   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x002C   (0x0004)  
	FName                                              SpaceName;                                                  // 0x0030   (0x0008)  
	int32_t                                            SpaceIndex;                                                 // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x0040   (0x0060)  
	FRigControlValue                                   InitialValue;                                               // 0x00A0   (0x0084)  
	FRigControlValue                                   Value;                                                      // 0x0124   (0x0084)  
	ERigControlAxis                                    PrimaryAxis;                                                // 0x01A8   (0x0001)  
	bool                                               bIsCurve;                                                   // 0x01A9   (0x0001)  
	bool                                               bAnimatable;                                                // 0x01AA   (0x0001)  
	bool                                               bLimitTranslation;                                          // 0x01AB   (0x0001)  
	bool                                               bLimitRotation;                                             // 0x01AC   (0x0001)  
	bool                                               bLimitScale;                                                // 0x01AD   (0x0001)  
	bool                                               bDrawLimits;                                                // 0x01AE   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x01AF   (0x0001)  MISSED
	FRigControlValue                                   MinimumValue;                                               // 0x01B0   (0x0084)  
	FRigControlValue                                   MaximumValue;                                               // 0x0234   (0x0084)  
	bool                                               bGizmoEnabled;                                              // 0x02B8   (0x0001)  
	bool                                               bGizmoVisible;                                              // 0x02B9   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x02BA   (0x0002)  MISSED
	FName                                              GizmoName;                                                  // 0x02BC   (0x0008)  
	unsigned char                                      UnknownData04_6[0xC];                                       // 0x02C4   (0x000C)  MISSED
	FTransform                                         GizmoTransform;                                             // 0x02D0   (0x0060)  
	FLinearColor                                       GizmoColor;                                                 // 0x0330   (0x0010)  
	TArray<int32_t>                                    Dependents;                                                 // 0x0340   (0x0010)  
	bool                                               bIsTransientControl;                                        // 0x0350   (0x0001)  
	unsigned char                                      UnknownData05_6[0x7];                                       // 0x0351   (0x0007)  MISSED
	class UEnum*                                       ControlEnum;                                                // 0x0358   (0x0008)  
};

/// Struct /Script/ControlRig.RigControlHierarchy
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigControlHierarchy
{ 
	TArray<FRigControl>                                Controls;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigCurve
/// Size: 0x0020 (32 bytes) (0x000018 - 0x000020) align 8 MaxSize: 0x0020
struct FRigCurve : FRigElement
{ 
	float                                              Value;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigCurveContainer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigCurveContainer
{ 
	TArray<FRigCurve>                                  Curves;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigSpace
/// Size: 0x00F0 (240 bytes) (0x000018 - 0x0000F0) align 16 MaxSize: 0x00F0
struct FRigSpace : FRigElement
{ 
	ERigSpaceType                                      SpaceType;                                                  // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              ParentName;                                                 // 0x001C   (0x0008)  
	int32_t                                            ParentIndex;                                                // 0x0024   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         InitialTransform;                                           // 0x0030   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x0090   (0x0060)  
};

/// Struct /Script/ControlRig.RigSpaceHierarchy
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigSpaceHierarchy
{ 
	TArray<FRigSpace>                                  Spaces;                                                     // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigHierarchyContainer
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRigHierarchyContainer
{ 
	FRigBoneHierarchy                                  BoneHierarchy;                                              // 0x0000   (0x0010)  
	FRigSpaceHierarchy                                 SpaceHierarchy;                                             // 0x0010   (0x0010)  
	FRigControlHierarchy                               ControlHierarchy;                                           // 0x0020   (0x0010)  
	FRigCurveContainer                                 CurveContainer;                                             // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigHierarchyRef
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FRigHierarchyRef
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/ControlRig.RigControlModifiedContext
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FRigControlModifiedContext
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/ControlRig.RigElementKeyCollection
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigElementKeyCollection
{ 
	TArray<FRigElementKey>                             Keys;                                                       // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigEventContext
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRigEventContext
{ 
	unsigned char                                      UnknownData00_2[0x28];                                      // 0x0000   (0x0028)  MISSED
};

/// Struct /Script/ControlRig.RigBaseMetadata
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRigBaseMetadata
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FName                                              Name;                                                       // 0x0010   (0x0008)  
	ERigMetadataType                                   Type;                                                       // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0019   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigBoolMetadata
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FRigBoolMetadata : FRigBaseMetadata
{ 
	bool                                               Value;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigBoolArrayMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FRigBoolArrayMetadata : FRigBaseMetadata
{ 
	TArray<bool>                                       Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigFloatMetadata
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FRigFloatMetadata : FRigBaseMetadata
{ 
	float                                              Value;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigFloatArrayMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FRigFloatArrayMetadata : FRigBaseMetadata
{ 
	TArray<float>                                      Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigInt32Metadata
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FRigInt32Metadata : FRigBaseMetadata
{ 
	int32_t                                            Value;                                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigInt32ArrayMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FRigInt32ArrayMetadata : FRigBaseMetadata
{ 
	TArray<int32_t>                                    Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigNameMetadata
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FRigNameMetadata : FRigBaseMetadata
{ 
	FName                                              Value;                                                      // 0x0028   (0x0008)  
};

/// Struct /Script/ControlRig.RigNameArrayMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FRigNameArrayMetadata : FRigBaseMetadata
{ 
	TArray<FName>                                      Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigVectorMetadata
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
struct FRigVectorMetadata : FRigBaseMetadata
{ 
	FVector                                            Value;                                                      // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRig.RigVectorArrayMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FRigVectorArrayMetadata : FRigBaseMetadata
{ 
	TArray<FVector>                                    Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigRotatorMetadata
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
struct FRigRotatorMetadata : FRigBaseMetadata
{ 
	FRotator                                           Value;                                                      // 0x0028   (0x0018)  
};

/// Struct /Script/ControlRig.RigRotatorArrayMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FRigRotatorArrayMetadata : FRigBaseMetadata
{ 
	TArray<FRotator>                                   Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigQuatMetadata
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 16 MaxSize: 0x0050
struct FRigQuatMetadata : FRigBaseMetadata
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigQuatArrayMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FRigQuatArrayMetadata : FRigBaseMetadata
{ 
	TArray<FQuat>                                      Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigTransformMetadata
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 16 MaxSize: 0x0090
struct FRigTransformMetadata : FRigBaseMetadata
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0030   (0x0060)  
};

/// Struct /Script/ControlRig.RigTransformArrayMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FRigTransformArrayMetadata : FRigBaseMetadata
{ 
	TArray<FTransform>                                 Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigLinearColorMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FRigLinearColorMetadata : FRigBaseMetadata
{ 
	FLinearColor                                       Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigLinearColorArrayMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FRigLinearColorArrayMetadata : FRigBaseMetadata
{ 
	TArray<FLinearColor>                               Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigElementKeyMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FRigElementKeyMetadata : FRigBaseMetadata
{ 
	FRigElementKey                                     Value;                                                      // 0x0028   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigElementKeyArrayMetadata
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
struct FRigElementKeyArrayMetadata : FRigBaseMetadata
{ 
	TArray<FRigElementKey>                             Value;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigInfluenceEntryModifier
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigInfluenceEntryModifier
{ 
	TArray<FRigElementKey>                             AffectedList;                                               // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.AnimNode_ControlRigInputPose
/// Size: 0x0030 (48 bytes) (0x000010 - 0x000030) align 8 MaxSize: 0x0030
struct FAnimNode_ControlRigInputPose : FAnimNode_Base
{ 
	FPoseLink                                          InputPose;                                                  // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0020   (0x0010)  MISSED
};

/// Struct /Script/ControlRig.ControlRigLayerInstanceProxy
/// Size: 0x0920 (2336 bytes) (0x000880 - 0x000920) align 16 MaxSize: 0x0920
struct FControlRigLayerInstanceProxy : FAnimInstanceProxy
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0880   (0x00A0)  MISSED
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReference
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FControlRigSequenceObjectReference
{ 
	class UClass*                                      ControlRigClass;                                            // 0x0000   (0x0008)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferences
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FControlRigSequenceObjectReferences
{ 
	TArray<FControlRigSequenceObjectReference>         Array;                                                      // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FControlRigSequenceObjectReferenceMap
{ 
	TArray<FGuid>                                      BindingIds;                                                 // 0x0000   (0x0010)  
	TArray<FControlRigSequenceObjectReferences>        References;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.MovieSceneControlRigParameterTemplate
/// Size: 0x00C0 (192 bytes) (0x000080 - 0x0000C0) align 8 MaxSize: 0x00C0
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
{ 
	TArray<FEnumParameterNameAndCurve>                 Enums;                                                      // 0x0080   (0x0010)  
	TArray<FIntegerParameterNameAndCurve>              Integers;                                                   // 0x0090   (0x0010)  
	TArray<FSpaceControlNameAndChannel>                Spaces;                                                     // 0x00A0   (0x0010)  
	TArray<FConstraintAndActiveChannel>                Constraints;                                                // 0x00B0   (0x0010)  
};

/// Struct /Script/ControlRig.ControlRigSettingsPerPinBool
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FControlRigSettingsPerPinBool
{ 
	TMap<FString, bool>                                Values;                                                     // 0x0000   (0x0050)  
};

/// Struct /Script/ControlRig.RigDispatchFactory
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigDispatchFactory : FRigVMDispatchFactory
{ 
};

/// Struct /Script/ControlRig.RigDispatch_AnimAttributeBase
/// Size: 0x0048 (72 bytes) (0x000018 - 0x000048) align 8 MaxSize: 0x0048
struct FRigDispatch_AnimAttributeBase : FRigDispatchFactory
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/ControlRig.RigDispatch_GetAnimAttribute
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
struct FRigDispatch_GetAnimAttribute : FRigDispatch_AnimAttributeBase
{ 
};

/// Struct /Script/ControlRig.RigDispatch_SetAnimAttribute
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
struct FRigDispatch_SetAnimAttribute : FRigDispatch_AnimAttributeBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceWorld
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FRigUnit_SphereTraceWorld : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            End;                                                        // 0x0020   (0x0018)  
	TEnumAsByte<ECollisionChannel>                     Channel;                                                    // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x003C   (0x0004)  
	bool                                               bHit;                                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	FVector                                            HitLocation;                                                // 0x0048   (0x0018)  
	FVector                                            HitNormal;                                                  // 0x0060   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByTraceChannel
/// Size: 0x0078 (120 bytes) (0x000008 - 0x000078) align 8 MaxSize: 0x0078
struct FRigUnit_SphereTraceByTraceChannel : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            End;                                                        // 0x0020   (0x0018)  
	TEnumAsByte<ETraceTypeQuery>                       TraceChannel;                                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              Radius;                                                     // 0x003C   (0x0004)  
	bool                                               bHit;                                                       // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	FVector                                            HitLocation;                                                // 0x0048   (0x0018)  
	FVector                                            HitNormal;                                                  // 0x0060   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByObjectTypes
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 8 MaxSize: 0x0080
struct FRigUnit_SphereTraceByObjectTypes : FRigUnit
{ 
	FVector                                            Start;                                                      // 0x0008   (0x0018)  
	FVector                                            End;                                                        // 0x0020   (0x0018)  
	SDK_UNDEFINED(16,1189) /* TArray<TEnumAsByte<EObjectTypeQuery>> */ __um(ObjectTypes);                          // 0x0038   (0x0010)  
	float                                              Radius;                                                     // 0x0048   (0x0004)  
	bool                                               bHit;                                                       // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FVector                                            HitLocation;                                                // 0x0050   (0x0018)  
	FVector                                            HitNormal;                                                  // 0x0068   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_Control
/// Size: 0x0180 (384 bytes) (0x000008 - 0x000180) align 16 MaxSize: 0x0180
struct FRigUnit_Control : FRigUnit
{ 
	FEulerTransform                                    Transform;                                                  // 0x0008   (0x0048)  
	FTransform                                         Base;                                                       // 0x0050   (0x0060)  
	FTransform                                         InitTransform;                                              // 0x00B0   (0x0060)  
	FTransform                                         Result;                                                     // 0x0110   (0x0060)  
	FTransformFilter                                   Filter;                                                     // 0x0170   (0x0009)  
	bool                                               bIsInitialized;                                             // 0x0179   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x017A   (0x0006)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Control_StaticMesh
/// Size: 0x01E0 (480 bytes) (0x000180 - 0x0001E0) align 16 MaxSize: 0x01E0
struct FRigUnit_Control_StaticMesh : FRigUnit_Control
{ 
	FTransform                                         MeshTransform;                                              // 0x0180   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_DebugBezier
/// Size: 0x0200 (512 bytes) (0x000100 - 0x000200) align 16 MaxSize: 0x0200
struct FRigUnit_DebugBezier : FRigVMFunction_DebugBaseMutable
{ 
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0100   (0x0060)  
	float                                              MinimumU;                                                   // 0x0160   (0x0004)  
	float                                              MaximumU;                                                   // 0x0164   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0168   (0x0010)  
	float                                              Thickness;                                                  // 0x0178   (0x0004)  
	int32_t                                            Detail;                                                     // 0x017C   (0x0004)  
	FName                                              Space;                                                      // 0x0180   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0188   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0190   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x01F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugBezierItemSpace
/// Size: 0x0200 (512 bytes) (0x000100 - 0x000200) align 16 MaxSize: 0x0200
struct FRigUnit_DebugBezierItemSpace : FRigVMFunction_DebugBaseMutable
{ 
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0100   (0x0060)  
	float                                              MinimumU;                                                   // 0x0160   (0x0004)  
	float                                              MaximumU;                                                   // 0x0164   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0168   (0x0010)  
	float                                              Thickness;                                                  // 0x0178   (0x0004)  
	int32_t                                            Detail;                                                     // 0x017C   (0x0004)  
	FRigElementKey                                     Space;                                                      // 0x0180   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x018C   (0x0004)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0190   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x01F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugHierarchy
/// Size: 0x01C0 (448 bytes) (0x000008 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FRigUnit_DebugHierarchy : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x0120)  
	float                                              Scale;                                                      // 0x0130   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0134   (0x0010)  
	float                                              Thickness;                                                  // 0x0144   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0148   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0150   (0x0060)  
	bool                                               bEnabled;                                                   // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x01B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DebugPose
/// Size: 0x0230 (560 bytes) (0x000008 - 0x000230) align 16 MaxSize: 0x0230
struct FRigUnit_DebugPose : FRigVMFunction_DebugBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x0120)  
	FRigPose                                           Pose;                                                       // 0x0130   (0x0070)  
	float                                              Scale;                                                      // 0x01A0   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x01A4   (0x0010)  
	float                                              Thickness;                                                  // 0x01B4   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01B8   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x01C0   (0x0060)  
	bool                                               bEnabled;                                                   // 0x0220   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x0221   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_StartProfilingTimer
/// Size: 0x0100 (256 bytes) (0x000100 - 0x000100) align 16 MaxSize: 0x0100
struct FRigUnit_StartProfilingTimer : FRigVMFunction_DebugBaseMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_EndProfilingTimer
/// Size: 0x0130 (304 bytes) (0x000100 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_EndProfilingTimer : FRigVMFunction_DebugBaseMutable
{ 
	int32_t                                            NumberOfMeasurements;                                       // 0x0100   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	FString                                            Prefix;                                                     // 0x0108   (0x0010)  
	float                                              AccumulatedTime;                                            // 0x0118   (0x0004)  
	int32_t                                            MeasurementsLeft;                                           // 0x011C   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x0120   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x0121   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertTransform
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigUnit_ConvertTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Input;                                                      // 0x0010   (0x0060)  
	FEulerTransform                                    Result;                                                     // 0x0070   (0x0048)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00B8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertEulerTransform
/// Size: 0x00B0 (176 bytes) (0x000008 - 0x0000B0) align 16 MaxSize: 0x00B0
struct FRigUnit_ConvertEulerTransform : FRigUnit
{ 
	FEulerTransform                                    Input;                                                      // 0x0008   (0x0048)  
	FTransform                                         Result;                                                     // 0x0050   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotation
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_ConvertRotation : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x0018)  
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorRotation
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_ConvertVectorRotation : FRigUnit_ConvertRotation
{ 
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternion
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_ConvertQuaternion : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	FRotator                                           Result;                                                     // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToRotation
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_ConvertVectorToRotation : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x0018)  
	FRotator                                           Result;                                                     // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 16 MaxSize: 0x0040
struct FRigUnit_ConvertVectorToQuaternion : FRigUnit
{ 
	FVector                                            Input;                                                      // 0x0008   (0x0018)  
	FQuat                                              Result;                                                     // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotationToVector
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_ConvertRotationToVector : FRigUnit
{ 
	FRotator                                           Input;                                                      // 0x0008   (0x0018)  
	FVector                                            Result;                                                     // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternionToVector
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_ConvertQuaternionToVector : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	FVector                                            Result;                                                     // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ToSwingAndTwist
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 16 MaxSize: 0x0090
struct FRigUnit_ToSwingAndTwist : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Input;                                                      // 0x0010   (0x0020)  
	FVector                                            TwistAxis;                                                  // 0x0030   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
	FQuat                                              Swing;                                                      // 0x0050   (0x0020)  
	FQuat                                              Twist;                                                      // 0x0070   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryFloatOp
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_BinaryFloatOp : FRigUnit
{ 
	float                                              Argument0;                                                  // 0x0008   (0x0004)  
	float                                              Argument1;                                                  // 0x000C   (0x0004)  
	float                                              Result;                                                     // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Multiply_FloatFloat
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Multiply_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_FloatFloat
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Add_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_FloatFloat
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Subtract_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Divide_FloatFloat
/// Size: 0x0018 (24 bytes) (0x000018 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Divide_FloatFloat : FRigUnit_BinaryFloatOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Clamp_Float
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Clamp_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              Min;                                                        // 0x000C   (0x0004)  
	float                                              Max;                                                        // 0x0010   (0x0004)  
	float                                              Result;                                                     // 0x0014   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_MapRange_Float
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MapRange_Float : FRigUnit
{ 
	float                                              Value;                                                      // 0x0008   (0x0004)  
	float                                              MinIn;                                                      // 0x000C   (0x0004)  
	float                                              MaxIn;                                                      // 0x0010   (0x0004)  
	float                                              MinOut;                                                     // 0x0014   (0x0004)  
	float                                              MaxOut;                                                     // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BinaryQuaternionOp
/// Size: 0x0070 (112 bytes) (0x000008 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_BinaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument0;                                                  // 0x0010   (0x0020)  
	FQuat                                              Argument1;                                                  // 0x0030   (0x0020)  
	FQuat                                              Result;                                                     // 0x0050   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_MultiplyQuaternion
/// Size: 0x0070 (112 bytes) (0x000070 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_MultiplyQuaternion : FRigUnit_BinaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_UnaryQuaternionOp
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_UnaryQuaternionOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0020)  
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_InverseQuaterion
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_InverseQuaterion : FRigUnit_UnaryQuaternionOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Argument;                                                   // 0x0010   (0x0020)  
	FVector                                            Axis;                                                       // 0x0030   (0x0018)  
	float                                              Angle;                                                      // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	float                                              Angle;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0024   (0x000C)  MISSED
	FQuat                                              Result;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAngle
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_QuaternionToAngle : FRigUnit
{ 
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	FQuat                                              Argument;                                                   // 0x0020   (0x0020)  
	float                                              Angle;                                                      // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0044   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BinaryTransformOp
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_BinaryTransformOp : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Argument0;                                                  // 0x0010   (0x0060)  
	FTransform                                         Argument1;                                                  // 0x0070   (0x0060)  
	FTransform                                         Result;                                                     // 0x00D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_MultiplyTransform
/// Size: 0x0130 (304 bytes) (0x000130 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_MultiplyTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransform
/// Size: 0x0130 (304 bytes) (0x000130 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_GetRelativeTransform : FRigUnit_BinaryTransformOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_BinaryVectorOp
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_BinaryVectorOp : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x0018)  
	FVector                                            Argument1;                                                  // 0x0020   (0x0018)  
	FVector                                            Result;                                                     // 0x0038   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_Multiply_VectorVector
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_Multiply_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Add_VectorVector
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_Add_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Subtract_VectorVector
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_Subtract_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Divide_VectorVector
/// Size: 0x0050 (80 bytes) (0x000050 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_Divide_VectorVector : FRigUnit_BinaryVectorOp
{ 
};

/// Struct /Script/ControlRig.RigUnit_Distance_VectorVector
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_Distance_VectorVector : FRigUnit
{ 
	FVector                                            Argument0;                                                  // 0x0008   (0x0018)  
	FVector                                            Argument1;                                                  // 0x0020   (0x0018)  
	float                                              Result;                                                     // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBezierFourPoint
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FRigUnit_MathVectorBezierFourPoint : FRigVMFunction_MathVectorBase
{ 
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0008   (0x0060)  
	float                                              T;                                                          // 0x0068   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0070   (0x0018)  
	FVector                                            Tangent;                                                    // 0x0088   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMakeBezierFourPoint
/// Size: 0x0068 (104 bytes) (0x000008 - 0x000068) align 8 MaxSize: 0x0068
struct FRigUnit_MathVectorMakeBezierFourPoint : FRigVMFunction_MathVectorBase
{ 
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0008   (0x0060)  
};

/// Struct /Script/ControlRig.AimTarget
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FAimTarget
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0004   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FVector                                            AlignVector;                                                // 0x0070   (0x0018)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0088   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorkData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_AimConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint
/// Size: 0x01A0 (416 bytes) (0x000130 - 0x0001A0) align 16 MaxSize: 0x01A0
struct FRigUnit_AimConstraint : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0130   (0x0008)  
	EAimMode                                           AimMode;                                                    // 0x0138   (0x0001)  
	EAimMode                                           UpMode;                                                     // 0x0139   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x013A   (0x0006)  MISSED
	FVector                                            AimVector;                                                  // 0x0140   (0x0018)  
	FVector                                            UpVector;                                                   // 0x0158   (0x0018)  
	TArray<FAimTarget>                                 AimTargets;                                                 // 0x0170   (0x0010)  
	TArray<FAimTarget>                                 UpTargets;                                                  // 0x0180   (0x0010)  
	FRigUnit_AimConstraint_WorkData                    WorkData;                                                   // 0x0190   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ApplyFK
/// Size: 0x0220 (544 bytes) (0x000130 - 0x000220) align 16 MaxSize: 0x0220
struct FRigUnit_ApplyFK : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0130   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0138   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0140   (0x0060)  
	FTransformFilter                                   Filter;                                                     // 0x01A0   (0x0009)  
	EApplyTransformMode                                ApplyTransformMode;                                         // 0x01A9   (0x0001)  
	ETransformSpaceMode                                ApplyTransformSpace;                                        // 0x01AA   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x01AB   (0x0005)  MISSED
	FTransform                                         BaseTransform;                                              // 0x01B0   (0x0060)  
	FName                                              BaseJoint;                                                  // 0x0210   (0x0008)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0218   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.BlendTarget
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FBlendTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	float                                              Weight;                                                     // 0x0060   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0064   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_BlendTransform
/// Size: 0x00E0 (224 bytes) (0x000008 - 0x0000E0) align 16 MaxSize: 0x00E0
struct FRigUnit_BlendTransform : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Source;                                                     // 0x0010   (0x0060)  
	TArray<FBlendTarget>                               Targets;                                                    // 0x0070   (0x0010)  
	FTransform                                         Result;                                                     // 0x0080   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_GetJointTransform
/// Size: 0x0210 (528 bytes) (0x000130 - 0x000210) align 16 MaxSize: 0x0210
struct FRigUnit_GetJointTransform : FRigUnitMutable
{ 
	FName                                              Joint;                                                      // 0x0130   (0x0008)  
	ETransformGetterType                               Type;                                                       // 0x0138   (0x0001)  
	ETransformSpaceMode                                TransformSpace;                                             // 0x0139   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x013A   (0x0006)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0140   (0x0060)  
	FName                                              BaseJoint;                                                  // 0x01A0   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x01A8   (0x0008)  MISSED
	FTransform                                         Output;                                                     // 0x01B0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKFK
/// Size: 0x0440 (1088 bytes) (0x000130 - 0x000440) align 16 MaxSize: 0x0440
struct FRigUnit_TwoBoneIKFK : FRigUnitMutable
{ 
	FName                                              StartJoint;                                                 // 0x0130   (0x0008)  
	FName                                              EndJoint;                                                   // 0x0138   (0x0008)  
	FVector                                            PoleTarget;                                                 // 0x0140   (0x0018)  
	float                                              Spin;                                                       // 0x0158   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x015C   (0x0004)  MISSED
	FTransform                                         EndEffector;                                                // 0x0160   (0x0060)  
	float                                              IKBlend;                                                    // 0x01C0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x01C4   (0x000C)  MISSED
	FTransform                                         StartJointFKTransform;                                      // 0x01D0   (0x0060)  
	FTransform                                         MidJointFKTransform;                                        // 0x0230   (0x0060)  
	FTransform                                         EndJointFKTransform;                                        // 0x0290   (0x0060)  
	float                                              PreviousFKIKBlend;                                          // 0x02F0   (0x0004)  
	unsigned char                                      UnknownData02_6[0xC];                                       // 0x02F4   (0x000C)  MISSED
	FTransform                                         StartJointIKTransform;                                      // 0x0300   (0x0060)  
	FTransform                                         MidJointIKTransform;                                        // 0x0360   (0x0060)  
	FTransform                                         EndJointIKTransform;                                        // 0x03C0   (0x0060)  
	int32_t                                            StartJointIndex;                                            // 0x0420   (0x0004)  
	int32_t                                            MidJointIndex;                                              // 0x0424   (0x0004)  
	int32_t                                            EndJointIndex;                                              // 0x0428   (0x0004)  
	float                                              UpperLimbLength;                                            // 0x042C   (0x0004)  
	float                                              LowerLimbLength;                                            // 0x0430   (0x0004)  
	bool                                               bIsInitialized;                                             // 0x0434   (0x0001)  
	unsigned char                                      UnknownData03_7[0xB];                                       // 0x0435   (0x000B)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerGetInstruction
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 16 MaxSize: 0x0080
struct FRigUnit_DrawContainerGetInstruction : FRigUnit
{ 
	FName                                              InstructionName;                                            // 0x0008   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetColor
/// Size: 0x0150 (336 bytes) (0x000130 - 0x000150) align 16 MaxSize: 0x0150
struct FRigUnit_DrawContainerSetColor : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0130   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0138   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetThickness
/// Size: 0x0140 (320 bytes) (0x000130 - 0x000140) align 16 MaxSize: 0x0140
struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0130   (0x0008)  
	float                                              Thickness;                                                  // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x013C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetTransform
/// Size: 0x01A0 (416 bytes) (0x000130 - 0x0001A0) align 16 MaxSize: 0x01A0
struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable
{ 
	FName                                              InstructionName;                                            // 0x0130   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0138   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0140   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_BeginExecution
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_BeginExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x0120)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_CollectionBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionBaseMutable
/// Size: 0x0130 (304 bytes) (0x000130 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_CollectionBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_CollectionChain
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_CollectionChain : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     FirstItem;                                                  // 0x0008   (0x000C)  
	FRigElementKey                                     LastItem;                                                   // 0x0014   (0x000C)  
	bool                                               Reverse;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionChainArray
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_CollectionChainArray : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     FirstItem;                                                  // 0x0008   (0x000C)  
	FRigElementKey                                     LastItem;                                                   // 0x0014   (0x000C)  
	bool                                               Reverse;                                                    // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearch
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase
{ 
	FName                                              PartialName;                                                // 0x0008   (0x0008)  
	ERigElementType                                    TypeToSearch;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearchArray
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_CollectionNameSearchArray : FRigUnit_CollectionBase
{ 
	FName                                              PartialName;                                                // 0x0008   (0x0008)  
	ERigElementType                                    TypeToSearch;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildren
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x000C)  
	bool                                               bIncludeParent;                                             // 0x0014   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0015   (0x0001)  
	ERigElementType                                    TypeToSearch;                                               // 0x0016   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0017   (0x0001)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildrenArray
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_CollectionChildrenArray : FRigUnit_CollectionBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x000C)  
	bool                                               bIncludeParent;                                             // 0x0014   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0015   (0x0001)  
	ERigElementType                                    TypeToSearch;                                               // 0x0016   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0017   (0x0001)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetAll
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_CollectionGetAll : FRigUnit_CollectionBase
{ 
	ERigElementType                                    TypeToSearch;                                               // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItems
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0008   (0x0010)  
	FName                                              Old;                                                        // 0x0018   (0x0008)  
	FName                                              New;                                                        // 0x0020   (0x0008)  
	bool                                               RemoveInvalidItems;                                         // 0x0028   (0x0001)  
	bool                                               bAllowDuplicates;                                           // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x002A   (0x0006)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItemsArray
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_CollectionReplaceItemsArray : FRigUnit_CollectionBase
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	FName                                              Old;                                                        // 0x0018   (0x0008)  
	FName                                              New;                                                        // 0x0020   (0x0008)  
	bool                                               RemoveInvalidItems;                                         // 0x0028   (0x0001)  
	bool                                               bAllowDuplicates;                                           // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x002A   (0x0006)  MISSED
	TArray<FRigElementKey>                             Result;                                                     // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionItems
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_CollectionItems : FRigUnit_CollectionBase
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	bool                                               bAllowDuplicates;                                           // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0019   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetItems
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_CollectionGetItems : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	TArray<FRigElementKey>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetParentIndices
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_CollectionGetParentIndices : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetParentIndicesItemArray
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_CollectionGetParentIndicesItemArray : FRigUnit_CollectionBase
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	TArray<int32_t>                                    ParentIndices;                                              // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionUnion
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	bool                                               bAllowDuplicates;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FRigElementKeyCollection                           Collection;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionIntersection
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionDifference
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           A;                                                          // 0x0008   (0x0010)  
	FRigElementKeyCollection                           B;                                                          // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionReverse
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	FRigElementKeyCollection                           Reversed;                                                   // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionCount
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_CollectionCount : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	int32_t                                            Count;                                                      // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CollectionItemAtIndex
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	int32_t                                            Index;                                                      // 0x0018   (0x0004)  
	FRigElementKey                                     Item;                                                       // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionLoop
/// Size: 0x0280 (640 bytes) (0x000130 - 0x000280) align 16 MaxSize: 0x0280
struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable
{ 
	FName                                              BlockToRun;                                                 // 0x0130   (0x0008)  
	FRigElementKeyCollection                           Collection;                                                 // 0x0138   (0x0010)  
	FRigElementKey                                     Item;                                                       // 0x0148   (0x000C)  
	int32_t                                            Index;                                                      // 0x0154   (0x0004)  
	int32_t                                            Count;                                                      // 0x0158   (0x0004)  
	float                                              Ratio;                                                      // 0x015C   (0x0004)  
	FControlRigExecuteContext                          Completed;                                                  // 0x0160   (0x0120)  
};

/// Struct /Script/ControlRig.RigUnit_CollectionAddItem
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_CollectionAddItem : FRigUnit_CollectionBase
{ 
	FRigElementKeyCollection                           Collection;                                                 // 0x0008   (0x0010)  
	FRigElementKey                                     Item;                                                       // 0x0018   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FRigElementKeyCollection                           Result;                                                     // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DynamicHierarchyBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_DynamicHierarchyBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_DynamicHierarchyBaseMutable
/// Size: 0x0130 (304 bytes) (0x000130 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_DynamicHierarchyBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_AddParent
/// Size: 0x0150 (336 bytes) (0x000130 - 0x000150) align 16 MaxSize: 0x0150
struct FRigUnit_AddParent : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x013C   (0x000C)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetDefaultParent
/// Size: 0x0150 (336 bytes) (0x000130 - 0x000150) align 16 MaxSize: 0x0150
struct FRigUnit_SetDefaultParent : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x013C   (0x000C)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0148   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SwitchParent
/// Size: 0x0150 (336 bytes) (0x000130 - 0x000150) align 16 MaxSize: 0x0150
struct FRigUnit_SwitchParent : FRigUnit_DynamicHierarchyBaseMutable
{ 
	ERigSwitchParentMode                               Mode;                                                       // 0x0130   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0131   (0x0003)  MISSED
	FRigElementKey                                     Child;                                                      // 0x0134   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x0140   (0x000C)  
	bool                                               bMaintainGlobal;                                            // 0x014C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x014D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentWeights
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_HierarchyGetParentWeights : FRigUnit_DynamicHierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FRigElementWeight>                          Weights;                                                    // 0x0018   (0x0010)  
	FRigElementKeyCollection                           Parents;                                                    // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentWeightsArray
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_HierarchyGetParentWeightsArray : FRigUnit_DynamicHierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FRigElementWeight>                          Weights;                                                    // 0x0018   (0x0010)  
	TArray<FRigElementKey>                             Parents;                                                    // 0x0028   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetParentWeights
/// Size: 0x0150 (336 bytes) (0x000130 - 0x000150) align 16 MaxSize: 0x0150
struct FRigUnit_HierarchySetParentWeights : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	TArray<FRigElementWeight>                          Weights;                                                    // 0x0140   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyReset
/// Size: 0x0130 (304 bytes) (0x000130 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_HierarchyReset : FRigUnit_DynamicHierarchyBaseMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyImportFromSkeleton
/// Size: 0x0150 (336 bytes) (0x000130 - 0x000150) align 16 MaxSize: 0x0150
struct FRigUnit_HierarchyImportFromSkeleton : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FName                                              Namespace;                                                  // 0x0130   (0x0008)  
	bool                                               bIncludeCurves;                                             // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0139   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0140   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyRemoveElement
/// Size: 0x0140 (320 bytes) (0x000130 - 0x000140) align 16 MaxSize: 0x0140
struct FRigUnit_HierarchyRemoveElement : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	bool                                               bSuccess;                                                   // 0x013C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x013D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddElement
/// Size: 0x0150 (336 bytes) (0x000130 - 0x000150) align 16 MaxSize: 0x0150
struct FRigUnit_HierarchyAddElement : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Parent;                                                     // 0x0130   (0x000C)  
	FName                                              Name;                                                       // 0x013C   (0x0008)  
	FRigElementKey                                     Item;                                                       // 0x0144   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddBone
/// Size: 0x01C0 (448 bytes) (0x000150 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FRigUnit_HierarchyAddBone : FRigUnit_HierarchyAddElement
{ 
	FTransform                                         Transform;                                                  // 0x0150   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x01B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddNull
/// Size: 0x01C0 (448 bytes) (0x000150 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FRigUnit_HierarchyAddNull : FRigUnit_HierarchyAddElement
{ 
	FTransform                                         Transform;                                                  // 0x0150   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x01B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_Settings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_HierarchyAddControl_Settings
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FName                                              DisplayName;                                                // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FRigUnit_HierarchyAddControl_ShapeSettings
{ 
	bool                                               bVisible;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x000C   (0x0010)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_ProxySettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_HierarchyAddControl_ProxySettings
{ 
	bool                                               bIsProxy;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FRigElementKey>                             DrivenControls;                                             // 0x0008   (0x0010)  
	ERigControlVisibility                              ShapeVisibility;                                            // 0x0018   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0019   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRigUnit_HierarchyAddControlFloat_LimitSettings
{ 
	FRigControlLimitEnabled                            Limit;                                                      // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	float                                              MinValue;                                                   // 0x0004   (0x0004)  
	float                                              MaxValue;                                                   // 0x0008   (0x0004)  
	bool                                               bDrawLimits;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_Settings
/// Size: 0x00D0 (208 bytes) (0x000010 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_HierarchyAddControlFloat_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FRigUnit_HierarchyAddControlFloat_LimitSettings    Limits;                                                     // 0x0014   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0024   (0x000C)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0030   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00B0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlElement
/// Size: 0x01B0 (432 bytes) (0x000150 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigUnit_HierarchyAddControlElement : FRigUnit_HierarchyAddElement
{ 
	FTransform                                         OffsetTransform;                                            // 0x0150   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat
/// Size: 0x0290 (656 bytes) (0x0001B0 - 0x000290) align 16 MaxSize: 0x0290
struct FRigUnit_HierarchyAddControlFloat : FRigUnit_HierarchyAddControlElement
{ 
	float                                              InitialValue;                                               // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x01B4   (0x000C)  MISSED
	FRigUnit_HierarchyAddControlFloat_Settings         Settings;                                                   // 0x01C0   (0x00D0)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRigUnit_HierarchyAddControlInteger_LimitSettings
{ 
	FRigControlLimitEnabled                            Limit;                                                      // 0x0000   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	int32_t                                            MinValue;                                                   // 0x0004   (0x0004)  
	int32_t                                            MaxValue;                                                   // 0x0008   (0x0004)  
	bool                                               bDrawLimits;                                                // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x000D   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger_Settings
/// Size: 0x00D0 (208 bytes) (0x000010 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_HierarchyAddControlInteger_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FRigUnit_HierarchyAddControlInteger_LimitSettings  Limits;                                                     // 0x0014   (0x0010)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0024   (0x000C)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0030   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00B0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger
/// Size: 0x0290 (656 bytes) (0x0001B0 - 0x000290) align 16 MaxSize: 0x0290
struct FRigUnit_HierarchyAddControlInteger : FRigUnit_HierarchyAddControlElement
{ 
	int32_t                                            InitialValue;                                               // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x01B4   (0x000C)  MISSED
	FRigUnit_HierarchyAddControlInteger_Settings       Settings;                                                   // 0x01C0   (0x00D0)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
{ 
	FRigControlLimitEnabled                            LimitX;                                                     // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            LimitY;                                                     // 0x0002   (0x0002)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector2D                                          MinValue;                                                   // 0x0008   (0x0010)  
	FVector2D                                          MaxValue;                                                   // 0x0018   (0x0010)  
	bool                                               bDrawLimits;                                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
/// Size: 0x0100 (256 bytes) (0x000010 - 0x000100) align 16 MaxSize: 0x0100
struct FRigUnit_HierarchyAddControlVector2D_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	ERigControlAxis                                    PrimaryAxis;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits;                                                     // 0x0018   (0x0030)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0048   (0x0008)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0050   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00D0   (0x0020)  
	TArray<ERigControlTransformChannel>                FilteredChannels;                                           // 0x00F0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D
/// Size: 0x02C0 (704 bytes) (0x0001B0 - 0x0002C0) align 16 MaxSize: 0x02C0
struct FRigUnit_HierarchyAddControlVector2D : FRigUnit_HierarchyAddControlElement
{ 
	FVector2D                                          InitialValue;                                               // 0x01B0   (0x0010)  
	FRigUnit_HierarchyAddControlVector2D_Settings      Settings;                                                   // 0x01C0   (0x0100)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_HierarchyAddControlVector_LimitSettings
{ 
	FRigControlLimitEnabled                            LimitX;                                                     // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            LimitY;                                                     // 0x0002   (0x0002)  
	FRigControlLimitEnabled                            LimitZ;                                                     // 0x0004   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FVector                                            MinValue;                                                   // 0x0008   (0x0018)  
	FVector                                            MaxValue;                                                   // 0x0020   (0x0018)  
	bool                                               bDrawLimits;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector_Settings
/// Size: 0x0110 (272 bytes) (0x000010 - 0x000110) align 16 MaxSize: 0x0110
struct FRigUnit_HierarchyAddControlVector_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	bool                                               bIsPosition;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRigUnit_HierarchyAddControlVector_LimitSettings   Limits;                                                     // 0x0018   (0x0040)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0060   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00E0   (0x0020)  
	TArray<ERigControlTransformChannel>                FilteredChannels;                                           // 0x0100   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector
/// Size: 0x02E0 (736 bytes) (0x0001B0 - 0x0002E0) align 16 MaxSize: 0x02E0
struct FRigUnit_HierarchyAddControlVector : FRigUnit_HierarchyAddControlElement
{ 
	FVector                                            InitialValue;                                               // 0x01B0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01C8   (0x0008)  MISSED
	FRigUnit_HierarchyAddControlVector_Settings        Settings;                                                   // 0x01D0   (0x0110)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_HierarchyAddControlRotator_LimitSettings
{ 
	FRigControlLimitEnabled                            LimitPitch;                                                 // 0x0000   (0x0002)  
	FRigControlLimitEnabled                            LimitYaw;                                                   // 0x0002   (0x0002)  
	FRigControlLimitEnabled                            LimitRoll;                                                  // 0x0004   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FRotator                                           MinValue;                                                   // 0x0008   (0x0018)  
	FRotator                                           MaxValue;                                                   // 0x0020   (0x0018)  
	bool                                               bDrawLimits;                                                // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_Settings
/// Size: 0x0100 (256 bytes) (0x000010 - 0x000100) align 16 MaxSize: 0x0100
struct FRigUnit_HierarchyAddControlRotator_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	FRigUnit_HierarchyAddControlRotator_LimitSettings  Limits;                                                     // 0x0010   (0x0040)  
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0050   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x00D0   (0x0020)  
	TArray<ERigControlTransformChannel>                FilteredChannels;                                           // 0x00F0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator
/// Size: 0x02D0 (720 bytes) (0x0001B0 - 0x0002D0) align 16 MaxSize: 0x02D0
struct FRigUnit_HierarchyAddControlRotator : FRigUnit_HierarchyAddControlElement
{ 
	FRotator                                           InitialValue;                                               // 0x01B0   (0x0018)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01C8   (0x0008)  MISSED
	FRigUnit_HierarchyAddControlRotator_Settings       Settings;                                                   // 0x01D0   (0x0100)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform_Settings
/// Size: 0x00C0 (192 bytes) (0x000010 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigUnit_HierarchyAddControlTransform_Settings : FRigUnit_HierarchyAddControl_Settings
{ 
	FRigUnit_HierarchyAddControl_ShapeSettings         Shape;                                                      // 0x0010   (0x0080)  
	FRigUnit_HierarchyAddControl_ProxySettings         Proxy;                                                      // 0x0090   (0x0020)  
	TArray<ERigControlTransformChannel>                FilteredChannels;                                           // 0x00B0   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform
/// Size: 0x02D0 (720 bytes) (0x0001B0 - 0x0002D0) align 16 MaxSize: 0x02D0
struct FRigUnit_HierarchyAddControlTransform : FRigUnit_HierarchyAddControlElement
{ 
	FTransform                                         InitialValue;                                               // 0x01B0   (0x0060)  
	FRigUnit_HierarchyAddControlTransform_Settings     Settings;                                                   // 0x0210   (0x00C0)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelBool
/// Size: 0x0160 (352 bytes) (0x000150 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_HierarchyAddAnimationChannelBool : FRigUnit_HierarchyAddElement
{ 
	bool                                               InitialValue;                                               // 0x0150   (0x0001)  
	bool                                               MinimumValue;                                               // 0x0151   (0x0001)  
	bool                                               MaximumValue;                                               // 0x0152   (0x0001)  
	unsigned char                                      UnknownData00_7[0xD];                                       // 0x0153   (0x000D)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
/// Size: 0x0160 (352 bytes) (0x000150 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_HierarchyAddAnimationChannelFloat : FRigUnit_HierarchyAddElement
{ 
	float                                              InitialValue;                                               // 0x0150   (0x0004)  
	float                                              MinimumValue;                                               // 0x0154   (0x0004)  
	float                                              MaximumValue;                                               // 0x0158   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x015C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
/// Size: 0x0160 (352 bytes) (0x000150 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_HierarchyAddAnimationChannelInteger : FRigUnit_HierarchyAddElement
{ 
	int32_t                                            InitialValue;                                               // 0x0150   (0x0004)  
	int32_t                                            MinimumValue;                                               // 0x0154   (0x0004)  
	int32_t                                            MaximumValue;                                               // 0x0158   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x015C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
/// Size: 0x0180 (384 bytes) (0x000150 - 0x000180) align 16 MaxSize: 0x0180
struct FRigUnit_HierarchyAddAnimationChannelVector2D : FRigUnit_HierarchyAddElement
{ 
	FVector2D                                          InitialValue;                                               // 0x0150   (0x0010)  
	FVector2D                                          MinimumValue;                                               // 0x0160   (0x0010)  
	FVector2D                                          MaximumValue;                                               // 0x0170   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector
/// Size: 0x01A0 (416 bytes) (0x000150 - 0x0001A0) align 16 MaxSize: 0x01A0
struct FRigUnit_HierarchyAddAnimationChannelVector : FRigUnit_HierarchyAddElement
{ 
	FVector                                            InitialValue;                                               // 0x0150   (0x0018)  
	FVector                                            MinimumValue;                                               // 0x0168   (0x0018)  
	FVector                                            MaximumValue;                                               // 0x0180   (0x0018)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0198   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
/// Size: 0x01A0 (416 bytes) (0x000150 - 0x0001A0) align 16 MaxSize: 0x01A0
struct FRigUnit_HierarchyAddAnimationChannelRotator : FRigUnit_HierarchyAddElement
{ 
	FRotator                                           InitialValue;                                               // 0x0150   (0x0018)  
	FRotator                                           MinimumValue;                                               // 0x0168   (0x0018)  
	FRotator                                           MaximumValue;                                               // 0x0180   (0x0018)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0198   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetShapeSettings
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_HierarchyGetShapeSettings : FRigUnit_DynamicHierarchyBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0014   (0x000C)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Settings;                                                   // 0x0020   (0x0080)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetShapeSettings
/// Size: 0x01C0 (448 bytes) (0x000130 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FRigUnit_HierarchySetShapeSettings : FRigUnit_DynamicHierarchyBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FRigUnit_HierarchyAddControl_ShapeSettings         Settings;                                                   // 0x0140   (0x0080)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_HierarchyBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBaseMutable
/// Size: 0x0130 (304 bytes) (0x000130 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_HierarchyBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParent
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x0014   (0x000C)  
	FCachedRigElement                                  CachedChild;                                                // 0x0020   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x0040   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParents
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bIncludeChild;                                              // 0x0014   (0x0001)  
	bool                                               bReverse;                                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	FRigElementKeyCollection                           Parents;                                                    // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedChild;                                                // 0x0028   (0x0020)  
	FRigElementKeyCollection                           CachedParents;                                              // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentsItemArray
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigUnit_HierarchyGetParentsItemArray : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bIncludeChild;                                              // 0x0014   (0x0001)  
	bool                                               bReverse;                                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	TArray<FRigElementKey>                             Parents;                                                    // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedChild;                                                // 0x0028   (0x0020)  
	FRigElementKeyCollection                           CachedParents;                                              // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetChildren
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Parent;                                                     // 0x0008   (0x000C)  
	bool                                               bIncludeParent;                                             // 0x0014   (0x0001)  
	bool                                               bRecursive;                                                 // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0016   (0x0002)  MISSED
	FRigElementKeyCollection                           Children;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedParent;                                               // 0x0028   (0x0020)  
	FRigElementKeyCollection                           CachedChildren;                                             // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblings
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	bool                                               bIncludeItem;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKeyCollection                           Siblings;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0028   (0x0020)  
	FRigElementKeyCollection                           CachedSiblings;                                             // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblingsItemArray
/// Size: 0x0058 (88 bytes) (0x000008 - 0x000058) align 8 MaxSize: 0x0058
struct FRigUnit_HierarchyGetSiblingsItemArray : FRigUnit_HierarchyBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	bool                                               bIncludeItem;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	TArray<FRigElementKey>                             Siblings;                                                   // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0028   (0x0020)  
	FRigElementKeyCollection                           CachedSiblings;                                             // 0x0048   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetPose
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_HierarchyGetPose : FRigUnit_HierarchyBase
{ 
	bool                                               Initial;                                                    // 0x0008   (0x0001)  
	ERigElementType                                    ElementType;                                                // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FRigElementKeyCollection                           ItemsToGet;                                                 // 0x0010   (0x0010)  
	FRigPose                                           Pose;                                                       // 0x0020   (0x0070)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetPoseItemArray
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_HierarchyGetPoseItemArray : FRigUnit_HierarchyBase
{ 
	bool                                               Initial;                                                    // 0x0008   (0x0001)  
	ERigElementType                                    ElementType;                                                // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	TArray<FRigElementKey>                             ItemsToGet;                                                 // 0x0010   (0x0010)  
	FRigPose                                           Pose;                                                       // 0x0020   (0x0070)  
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetPose
/// Size: 0x01C0 (448 bytes) (0x000130 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FRigUnit_HierarchySetPose : FRigUnit_HierarchyBaseMutable
{ 
	FRigPose                                           Pose;                                                       // 0x0130   (0x0070)  
	ERigElementType                                    ElementType;                                                // 0x01A0   (0x0001)  
	ERigVMTransformSpace                               Space;                                                      // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x01A2   (0x0006)  MISSED
	FRigElementKeyCollection                           ItemsToSet;                                                 // 0x01A8   (0x0010)  
	float                                              Weight;                                                     // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x01BC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetPoseItemArray
/// Size: 0x01C0 (448 bytes) (0x000130 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FRigUnit_HierarchySetPoseItemArray : FRigUnit_HierarchyBaseMutable
{ 
	FRigPose                                           Pose;                                                       // 0x0130   (0x0070)  
	ERigElementType                                    ElementType;                                                // 0x01A0   (0x0001)  
	ERigVMTransformSpace                               Space;                                                      // 0x01A1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x01A2   (0x0006)  MISSED
	TArray<FRigElementKey>                             ItemsToSet;                                                 // 0x01A8   (0x0010)  
	float                                              Weight;                                                     // 0x01B8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x01BC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PoseIsEmpty
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 8 MaxSize: 0x0080
struct FRigUnit_PoseIsEmpty : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	bool                                               IsEmpty;                                                    // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0079   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PoseGetItems
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_PoseGetItems : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	ERigElementType                                    ElementType;                                                // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	FRigElementKeyCollection                           Items;                                                      // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PoseGetItemsItemArray
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_PoseGetItemsItemArray : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	ERigElementType                                    ElementType;                                                // 0x0078   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PoseGetDelta
/// Size: 0x0128 (296 bytes) (0x000008 - 0x000128) align 8 MaxSize: 0x0128
struct FRigUnit_PoseGetDelta : FRigUnit_HierarchyBase
{ 
	FRigPose                                           PoseA;                                                      // 0x0008   (0x0070)  
	FRigPose                                           PoseB;                                                      // 0x0078   (0x0070)  
	float                                              PositionThreshold;                                          // 0x00E8   (0x0004)  
	float                                              RotationThreshold;                                          // 0x00EC   (0x0004)  
	float                                              ScaleThreshold;                                             // 0x00F0   (0x0004)  
	float                                              CurveThreshold;                                             // 0x00F4   (0x0004)  
	ERigElementType                                    ElementType;                                                // 0x00F8   (0x0001)  
	ERigVMTransformSpace                               Space;                                                      // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x00FA   (0x0006)  MISSED
	FRigElementKeyCollection                           ItemsToCompare;                                             // 0x0100   (0x0010)  
	bool                                               PosesAreEqual;                                              // 0x0110   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0111   (0x0007)  MISSED
	FRigElementKeyCollection                           ItemsWithDelta;                                             // 0x0118   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PoseGetTransform
/// Size: 0x0100 (256 bytes) (0x000008 - 0x000100) align 16 MaxSize: 0x0100
struct FRigUnit_PoseGetTransform : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	FRigElementKey                                     Item;                                                       // 0x0078   (0x000C)  
	ERigVMTransformSpace                               Space;                                                      // 0x0084   (0x0001)  
	bool                                               Valid;                                                      // 0x0085   (0x0001)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x0086   (0x000A)  MISSED
	FTransform                                         Transform;                                                  // 0x0090   (0x0060)  
	float                                              CurveValue;                                                 // 0x00F0   (0x0004)  
	int32_t                                            CachedPoseElementIndex;                                     // 0x00F4   (0x0004)  
	int32_t                                            CachedPoseHash;                                             // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PoseGetTransformArray
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_PoseGetTransformArray : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	ERigVMTransformSpace                               Space;                                                      // 0x0078   (0x0001)  
	bool                                               Valid;                                                      // 0x0079   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x007A   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0080   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PoseGetCurve
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 8 MaxSize: 0x0090
struct FRigUnit_PoseGetCurve : FRigUnit_HierarchyBase
{ 
	FRigPose                                           Pose;                                                       // 0x0008   (0x0070)  
	FName                                              Curve;                                                      // 0x0078   (0x0008)  
	bool                                               Valid;                                                      // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	float                                              CurveValue;                                                 // 0x0084   (0x0004)  
	int32_t                                            CachedPoseElementIndex;                                     // 0x0088   (0x0004)  
	int32_t                                            CachedPoseHash;                                             // 0x008C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_PoseLoop
/// Size: 0x03B0 (944 bytes) (0x000130 - 0x0003B0) align 16 MaxSize: 0x03B0
struct FRigUnit_PoseLoop : FRigUnit_HierarchyBaseMutable
{ 
	FName                                              BlockToRun;                                                 // 0x0130   (0x0008)  
	FRigPose                                           Pose;                                                       // 0x0138   (0x0070)  
	FRigElementKey                                     Item;                                                       // 0x01A8   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x01B4   (0x000C)  MISSED
	FTransform                                         GlobalTransform;                                            // 0x01C0   (0x0060)  
	FTransform                                         LocalTransform;                                             // 0x0220   (0x0060)  
	float                                              CurveValue;                                                 // 0x0280   (0x0004)  
	int32_t                                            Index;                                                      // 0x0284   (0x0004)  
	int32_t                                            Count;                                                      // 0x0288   (0x0004)  
	float                                              Ratio;                                                      // 0x028C   (0x0004)  
	FControlRigExecuteContext                          Completed;                                                  // 0x0290   (0x0120)  
};

/// Struct /Script/ControlRig.RigUnit_InteractionExecution
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_InteractionExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x0120)  
};

/// Struct /Script/ControlRig.RigUnit_InverseExecution
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_InverseExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x0120)  
};

/// Struct /Script/ControlRig.RigUnit_IsInteracting
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_IsInteracting : FRigUnit
{ 
	bool                                               bIsInteracting;                                             // 0x0008   (0x0001)  
	bool                                               bIsTranslating;                                             // 0x0009   (0x0001)  
	bool                                               bIsRotating;                                                // 0x000A   (0x0001)  
	bool                                               bIsScaling;                                                 // 0x000B   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ItemBase
/// Size: 0x0008 (8 bytes) (0x000008 - 0x000008) align 8 MaxSize: 0x0008
struct FRigUnit_ItemBase : FRigUnit
{ 
};

/// Struct /Script/ControlRig.RigUnit_ItemBaseMutable
/// Size: 0x0130 (304 bytes) (0x000130 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_ItemBaseMutable : FRigUnitMutable
{ 
};

/// Struct /Script/ControlRig.RigUnit_ItemExists
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_ItemExists : FRigUnit_ItemBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	bool                                               Exists;                                                     // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0018   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ItemReplace
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_ItemReplace : FRigUnit_ItemBase
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	FName                                              Old;                                                        // 0x0014   (0x0008)  
	FName                                              New;                                                        // 0x001C   (0x0008)  
	FRigElementKey                                     Result;                                                     // 0x0024   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_ItemEquals
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_ItemEquals : FRigUnit_ItemBase
{ 
	FRigElementKey                                     A;                                                          // 0x0008   (0x000C)  
	FRigElementKey                                     B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemNotEquals
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_ItemNotEquals : FRigUnit_ItemBase
{ 
	FRigElementKey                                     A;                                                          // 0x0008   (0x000C)  
	FRigElementKey                                     B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemTypeEquals
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_ItemTypeEquals : FRigUnit_ItemBase
{ 
	FRigElementKey                                     A;                                                          // 0x0008   (0x000C)  
	FRigElementKey                                     B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemTypeNotEquals
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_ItemTypeNotEquals : FRigUnit_ItemBase
{ 
	FRigElementKey                                     A;                                                          // 0x0008   (0x000C)  
	FRigElementKey                                     B;                                                          // 0x0014   (0x000C)  
	bool                                               Result;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemToName
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_ItemToName : FRigUnit_ItemBase
{ 
	FRigElementKey                                     Value;                                                      // 0x0008   (0x000C)  
	FName                                              Result;                                                     // 0x0014   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x001C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PrepareForExecution
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_PrepareForExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x0120)  
};

/// Struct /Script/ControlRig.RigUnit_SequenceExecution
/// Size: 0x05B0 (1456 bytes) (0x000008 - 0x0005B0) align 16 MaxSize: 0x05B0
struct FRigUnit_SequenceExecution : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x0120)  
	FControlRigExecuteContext                          A;                                                          // 0x0130   (0x0120)  
	FControlRigExecuteContext                          B;                                                          // 0x0250   (0x0120)  
	FControlRigExecuteContext                          C;                                                          // 0x0370   (0x0120)  
	FControlRigExecuteContext                          D;                                                          // 0x0490   (0x0120)  
};

/// Struct /Script/ControlRig.RigUnit_SequenceAggregate
/// Size: 0x0370 (880 bytes) (0x000008 - 0x000370) align 16 MaxSize: 0x0370
struct FRigUnit_SequenceAggregate : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0010   (0x0120)  
	FControlRigExecuteContext                          A;                                                          // 0x0130   (0x0120)  
	FControlRigExecuteContext                          B;                                                          // 0x0250   (0x0120)  
};

/// Struct /Script/ControlRig.RigUnit_AddBoneTransform
/// Size: 0x01D0 (464 bytes) (0x000130 - 0x0001D0) align 16 MaxSize: 0x01D0
struct FRigUnit_AddBoneTransform : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x0130   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0138   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0140   (0x0060)  
	float                                              Weight;                                                     // 0x01A0   (0x0004)  
	bool                                               bPostMultiply;                                              // 0x01A4   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x01A5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x01A6   (0x0002)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x01A8   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x01C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_Item
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_Item : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ItemArray
/// Size: 0x0018 (24 bytes) (0x000008 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_ItemArray : FRigUnit
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_BoneName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_BoneName : FRigUnit
{ 
	FName                                              bone;                                                       // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_SpaceName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_SpaceName : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_ControlName
/// Size: 0x0010 (16 bytes) (0x000008 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_ControlName : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/ControlRig.RigUnit_GetAnimationChannelBase
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_GetAnimationChannelBase : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	FName                                              Channel;                                                    // 0x0010   (0x0008)  
	bool                                               bInitial;                                                   // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FRigElementKey                                     CachedChannelKey;                                           // 0x001C   (0x000C)  
	int32_t                                            CachedChannelHash;                                          // 0x0028   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetBoolAnimationChannel
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_GetBoolAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	bool                                               Value;                                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetFloatAnimationChannel
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_GetFloatAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	float                                              Value;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetIntAnimationChannel
/// Size: 0x0038 (56 bytes) (0x000030 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_GetIntAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	int32_t                                            Value;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetVector2DAnimationChannel
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_GetVector2DAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	FVector2D                                          Value;                                                      // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_GetVectorAnimationChannel
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_GetVectorAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	FVector                                            Value;                                                      // 0x0030   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetRotatorAnimationChannel
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_GetRotatorAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	FRotator                                           Value;                                                      // 0x0030   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_GetTransformAnimationChannel
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 16 MaxSize: 0x0090
struct FRigUnit_GetTransformAnimationChannel : FRigUnit_GetAnimationChannelBase
{ 
	FTransform                                         Value;                                                      // 0x0030   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_SetAnimationChannelBase
/// Size: 0x0150 (336 bytes) (0x000030 - 0x000150) align 16 MaxSize: 0x0150
struct FRigUnit_SetAnimationChannelBase : FRigUnit_GetAnimationChannelBase
{ 
	FControlRigExecuteContext                          ExecuteContext;                                             // 0x0030   (0x0120)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoolAnimationChannel
/// Size: 0x0160 (352 bytes) (0x000150 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetBoolAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	bool                                               Value;                                                      // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0151   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetFloatAnimationChannel
/// Size: 0x0160 (352 bytes) (0x000150 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetFloatAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	float                                              Value;                                                      // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0154   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetIntAnimationChannel
/// Size: 0x0160 (352 bytes) (0x000150 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetIntAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	int32_t                                            Value;                                                      // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0154   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetVector2DAnimationChannel
/// Size: 0x0160 (352 bytes) (0x000150 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetVector2DAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	FVector2D                                          Value;                                                      // 0x0150   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetVectorAnimationChannel
/// Size: 0x0170 (368 bytes) (0x000150 - 0x000170) align 16 MaxSize: 0x0170
struct FRigUnit_SetVectorAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	FVector                                            Value;                                                      // 0x0150   (0x0018)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetRotatorAnimationChannel
/// Size: 0x0170 (368 bytes) (0x000150 - 0x000170) align 16 MaxSize: 0x0170
struct FRigUnit_SetRotatorAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	FRotator                                           Value;                                                      // 0x0150   (0x0018)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetTransformAnimationChannel
/// Size: 0x01B0 (432 bytes) (0x000150 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigUnit_SetTransformAnimationChannel : FRigUnit_SetAnimationChannelBase
{ 
	FTransform                                         Value;                                                      // 0x0150   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_GetBoneTransform
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_GetBoneTransform : FRigUnit
{ 
	FName                                              bone;                                                       // 0x0008   (0x0008)  
	ERigVMTransformSpace                               Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlInitialTransform
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_GetControlInitialTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	ERigVMTransformSpace                               Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlBool
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_GetControlBool : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0018   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlFloat
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_GetControlFloat : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	float                                              FloatValue;                                                 // 0x0010   (0x0004)  
	float                                              Minimum;                                                    // 0x0014   (0x0004)  
	float                                              Maximum;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlInteger
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_GetControlInteger : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	int32_t                                            IntegerValue;                                               // 0x0010   (0x0004)  
	int32_t                                            Minimum;                                                    // 0x0014   (0x0004)  
	int32_t                                            Maximum;                                                    // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector2D
/// Size: 0x0060 (96 bytes) (0x000008 - 0x000060) align 8 MaxSize: 0x0060
struct FRigUnit_GetControlVector2D : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	FVector2D                                          Vector;                                                     // 0x0010   (0x0010)  
	FVector2D                                          Minimum;                                                    // 0x0020   (0x0010)  
	FVector2D                                          Maximum;                                                    // 0x0030   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0040   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 8 MaxSize: 0x0080
struct FRigUnit_GetControlVector : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	ERigVMTransformSpace                               Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FVector                                            Vector;                                                     // 0x0018   (0x0018)  
	FVector                                            Minimum;                                                    // 0x0030   (0x0018)  
	FVector                                            Maximum;                                                    // 0x0048   (0x0018)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0060   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlRotator
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 8 MaxSize: 0x0080
struct FRigUnit_GetControlRotator : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	ERigVMTransformSpace                               Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FRotator                                           Rotator;                                                    // 0x0018   (0x0018)  
	FRotator                                           Minimum;                                                    // 0x0030   (0x0018)  
	FRotator                                           Maximum;                                                    // 0x0048   (0x0018)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0060   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlTransform
/// Size: 0x0160 (352 bytes) (0x000008 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_GetControlTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	ERigVMTransformSpace                               Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FTransform                                         Minimum;                                                    // 0x0080   (0x0060)  
	FTransform                                         Maximum;                                                    // 0x00E0   (0x0060)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0140   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetCurveValue
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_GetCurveValue : FRigUnit
{ 
	FName                                              Curve;                                                      // 0x0008   (0x0008)  
	bool                                               Valid;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	float                                              Value;                                                      // 0x0014   (0x0004)  
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0018   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetInitialBoneTransform
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_GetInitialBoneTransform : FRigUnit
{ 
	FName                                              bone;                                                       // 0x0008   (0x0008)  
	ERigVMTransformSpace                               Space;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
/// Size: 0x00C0 (192 bytes) (0x000008 - 0x0000C0) align 16 MaxSize: 0x00C0
struct FRigUnit_GetRelativeBoneTransform : FRigUnit
{ 
	FName                                              bone;                                                       // 0x0008   (0x0008)  
	FName                                              Space;                                                      // 0x0010   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedBone;                                                 // 0x0080   (0x0020)  
	FCachedRigElement                                  CachedSpace;                                                // 0x00A0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransformForItem
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_GetRelativeTransformForItem : FRigUnit
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bChildInitial;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKey                                     Parent;                                                     // 0x0018   (0x000C)  
	bool                                               bParentInitial;                                             // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0xB];                                       // 0x0025   (0x000B)  MISSED
	FTransform                                         RelativeTransform;                                          // 0x0030   (0x0060)  
	FCachedRigElement                                  CachedChild;                                                // 0x0090   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x00B0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetSpaceTransform
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_GetSpaceTransform : FRigUnit
{ 
	FName                                              Space;                                                      // 0x0008   (0x0008)  
	ERigVMTransformSpace                               SpaceType;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x0011   (0x000F)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetTransform
/// Size: 0x00A0 (160 bytes) (0x000008 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FRigUnit_GetTransform : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	ERigVMTransformSpace                               Space;                                                      // 0x0014   (0x0001)  
	bool                                               bInitial;                                                   // 0x0015   (0x0001)  
	unsigned char                                      UnknownData00_6[0xA];                                       // 0x0016   (0x000A)  MISSED
	FTransform                                         Transform;                                                  // 0x0020   (0x0060)  
	FCachedRigElement                                  CachedIndex;                                                // 0x0080   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetTransformArray
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_GetTransformArray : FRigUnit
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0008   (0x0010)  
	ERigVMTransformSpace                               Space;                                                      // 0x0018   (0x0001)  
	bool                                               bInitial;                                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x001A   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0020   (0x0010)  
	TArray<FCachedRigElement>                          CachedIndex;                                                // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_GetTransformItemArray
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_GetTransformItemArray : FRigUnit
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	ERigVMTransformSpace                               Space;                                                      // 0x0018   (0x0001)  
	bool                                               bInitial;                                                   // 0x0019   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x001A   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0020   (0x0010)  
	TArray<FCachedRigElement>                          CachedIndex;                                                // 0x0030   (0x0010)  
};

/// Struct /Script/ControlRig.RigDispatch_MetadataBase
/// Size: 0x0048 (72 bytes) (0x000018 - 0x000048) align 8 MaxSize: 0x0048
struct FRigDispatch_MetadataBase : FRigDispatchFactory
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/ControlRig.RigDispatch_GetMetadata
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
struct FRigDispatch_GetMetadata : FRigDispatch_MetadataBase
{ 
};

/// Struct /Script/ControlRig.RigDispatch_SetMetadata
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
struct FRigDispatch_SetMetadata : FRigDispatch_MetadataBase
{ 
};

/// Struct /Script/ControlRig.RigUnit_RemoveMetadata
/// Size: 0x0170 (368 bytes) (0x000130 - 0x000170) align 16 MaxSize: 0x0170
struct FRigUnit_RemoveMetadata : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	FName                                              Name;                                                       // 0x013C   (0x0008)  
	bool                                               Removed;                                                    // 0x0144   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0145   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0148   (0x0020)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_RemoveAllMetadata
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_RemoveAllMetadata : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	bool                                               Removed;                                                    // 0x013C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x013D   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0140   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HasMetadata
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_HasMetadata : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	FName                                              Name;                                                       // 0x0014   (0x0008)  
	ERigMetadataType                                   Type;                                                       // 0x001C   (0x0001)  
	bool                                               Found;                                                      // 0x001D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x001E   (0x0002)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadata
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_FindItemsWithMetadata : FRigUnit
{ 
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	ERigMetadataType                                   Type;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	TArray<FRigElementKey>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_GetMetadataTags
/// Size: 0x0048 (72 bytes) (0x000008 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_GetMetadataTags : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FName>                                      Tags;                                                       // 0x0018   (0x0010)  
	FCachedRigElement                                  CachedIndex;                                                // 0x0028   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMetadataTag
/// Size: 0x0170 (368 bytes) (0x000130 - 0x000170) align 16 MaxSize: 0x0170
struct FRigUnit_SetMetadataTag : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	FName                                              Tag;                                                        // 0x013C   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0148   (0x0020)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMetadataTagArray
/// Size: 0x0170 (368 bytes) (0x000130 - 0x000170) align 16 MaxSize: 0x0170
struct FRigUnit_SetMetadataTagArray : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	TArray<FName>                                      Tags;                                                       // 0x0140   (0x0010)  
	FCachedRigElement                                  CachedIndex;                                                // 0x0150   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_RemoveMetadataTag
/// Size: 0x0170 (368 bytes) (0x000130 - 0x000170) align 16 MaxSize: 0x0170
struct FRigUnit_RemoveMetadataTag : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	FName                                              Tag;                                                        // 0x013C   (0x0008)  
	bool                                               Removed;                                                    // 0x0144   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0145   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0148   (0x0020)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_HasMetadataTag
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_HasMetadataTag : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	FName                                              Tag;                                                        // 0x0014   (0x0008)  
	bool                                               Found;                                                      // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_HasMetadataTagArray
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_HasMetadataTagArray : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	TArray<FName>                                      Tags;                                                       // 0x0018   (0x0010)  
	bool                                               Found;                                                      // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadataTag
/// Size: 0x0020 (32 bytes) (0x000008 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_FindItemsWithMetadataTag : FRigUnit
{ 
	FName                                              Tag;                                                        // 0x0008   (0x0008)  
	TArray<FRigElementKey>                             Items;                                                      // 0x0010   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadataTagArray
/// Size: 0x0028 (40 bytes) (0x000008 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_FindItemsWithMetadataTagArray : FRigUnit
{ 
	TArray<FName>                                      Tags;                                                       // 0x0008   (0x0010)  
	TArray<FRigElementKey>                             Items;                                                      // 0x0018   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FilterItemsByMetadataTags
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_FilterItemsByMetadataTags : FRigUnit
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0008   (0x0010)  
	TArray<FName>                                      Tags;                                                       // 0x0018   (0x0010)  
	bool                                               Inclusive;                                                  // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FRigElementKey>                             Result;                                                     // 0x0030   (0x0010)  
	TArray<FCachedRigElement>                          CachedIndices;                                              // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_OffsetTransformForItem
/// Size: 0x01D0 (464 bytes) (0x000130 - 0x0001D0) align 16 MaxSize: 0x01D0
struct FRigUnit_OffsetTransformForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FTransform                                         OffsetTransform;                                            // 0x0140   (0x0060)  
	float                                              Weight;                                                     // 0x01A0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01A4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01A5   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x01A8   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x01C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraint
/// Size: 0x02D0 (720 bytes) (0x000130 - 0x0002D0) align 16 MaxSize: 0x02D0
struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable
{ 
	FRigElementKey                                     Subject;                                                    // 0x0130   (0x000C)  
	int32_t                                            ParentIndex;                                                // 0x013C   (0x0004)  
	FRigElementKeyCollection                           Parents;                                                    // 0x0140   (0x0010)  
	FTransform                                         InitialGlobalTransform;                                     // 0x0150   (0x0060)  
	float                                              Weight;                                                     // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x01B4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x01C0   (0x0060)  
	bool                                               Switched;                                                   // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0221   (0x0007)  MISSED
	FCachedRigElement                                  CachedSubject;                                              // 0x0228   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x0248   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0268   (0x0008)  MISSED
	FTransform                                         RelativeOffset;                                             // 0x0270   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraintArray
/// Size: 0x02D0 (720 bytes) (0x000130 - 0x0002D0) align 16 MaxSize: 0x02D0
struct FRigUnit_ParentSwitchConstraintArray : FRigUnitMutable
{ 
	FRigElementKey                                     Subject;                                                    // 0x0130   (0x000C)  
	int32_t                                            ParentIndex;                                                // 0x013C   (0x0004)  
	TArray<FRigElementKey>                             Parents;                                                    // 0x0140   (0x0010)  
	FTransform                                         InitialGlobalTransform;                                     // 0x0150   (0x0060)  
	float                                              Weight;                                                     // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x01B4   (0x000C)  MISSED
	FTransform                                         Transform;                                                  // 0x01C0   (0x0060)  
	bool                                               Switched;                                                   // 0x0220   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0221   (0x0007)  MISSED
	FCachedRigElement                                  CachedSubject;                                              // 0x0228   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x0248   (0x0020)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0268   (0x0008)  MISSED
	FTransform                                         RelativeOffset;                                             // 0x0270   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ProjectTransformToNewParent
/// Size: 0x0100 (256 bytes) (0x000008 - 0x000100) align 16 MaxSize: 0x0100
struct FRigUnit_ProjectTransformToNewParent : FRigUnit
{ 
	FRigElementKey                                     Child;                                                      // 0x0008   (0x000C)  
	bool                                               bChildInitial;                                              // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FRigElementKey                                     OldParent;                                                  // 0x0018   (0x000C)  
	bool                                               bOldParentInitial;                                          // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	FRigElementKey                                     NewParent;                                                  // 0x0028   (0x000C)  
	bool                                               bNewParentInitial;                                          // 0x0034   (0x0001)  
	unsigned char                                      UnknownData02_6[0xB];                                       // 0x0035   (0x000B)  MISSED
	FTransform                                         Transform;                                                  // 0x0040   (0x0060)  
	FCachedRigElement                                  CachedChild;                                                // 0x00A0   (0x0020)  
	FCachedRigElement                                  CachedOldParent;                                            // 0x00C0   (0x0020)  
	FCachedRigElement                                  CachedNewParent;                                            // 0x00E0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_PropagateTransform
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_PropagateTransform : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	bool                                               bRecomputeGlobal;                                           // 0x013C   (0x0001)  
	bool                                               bApplyToChildren;                                           // 0x013D   (0x0001)  
	bool                                               bRecursive;                                                 // 0x013E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x013F   (0x0001)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0140   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SendEvent
/// Size: 0x0150 (336 bytes) (0x000130 - 0x000150) align 16 MaxSize: 0x0150
struct FRigUnit_SendEvent : FRigUnitMutable
{ 
	ERigEvent                                          Event;                                                      // 0x0130   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0131   (0x0003)  MISSED
	FRigElementKey                                     Item;                                                       // 0x0134   (0x000C)  
	float                                              OffsetInSeconds;                                            // 0x0140   (0x0004)  
	bool                                               bEnable;                                                    // 0x0144   (0x0001)  
	bool                                               bOnlyDuringInteraction;                                     // 0x0145   (0x0001)  
	unsigned char                                      UnknownData01_7[0xA];                                       // 0x0146   (0x000A)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneInitialTransform
/// Size: 0x0230 (560 bytes) (0x000130 - 0x000230) align 16 MaxSize: 0x0230
struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x0130   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0138   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0140   (0x0060)  
	FTransform                                         Result;                                                     // 0x01A0   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x0200   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0201   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0202   (0x0006)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0208   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0228   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetBoneRotation
/// Size: 0x0190 (400 bytes) (0x000130 - 0x000190) align 16 MaxSize: 0x0190
struct FRigUnit_SetBoneRotation : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x0130   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0138   (0x0008)  MISSED
	FQuat                                              Rotation;                                                   // 0x0140   (0x0020)  
	ERigVMTransformSpace                               Space;                                                      // 0x0160   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0161   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0164   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0168   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0169   (0x0007)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0170   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTransform
/// Size: 0x0230 (560 bytes) (0x000130 - 0x000230) align 16 MaxSize: 0x0230
struct FRigUnit_SetBoneTransform : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x0130   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0138   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0140   (0x0060)  
	FTransform                                         Result;                                                     // 0x01A0   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x0200   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0201   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0204   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0208   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0209   (0x0007)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0210   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTranslation
/// Size: 0x0180 (384 bytes) (0x000130 - 0x000180) align 16 MaxSize: 0x0180
struct FRigUnit_SetBoneTranslation : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x0130   (0x0008)  
	FVector                                            Translation;                                                // 0x0138   (0x0018)  
	ERigVMTransformSpace                               Space;                                                      // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0151   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0154   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0158   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0159   (0x0007)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x0160   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_GetControlColor
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_GetControlColor : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlColor
/// Size: 0x0170 (368 bytes) (0x000130 - 0x000170) align 16 MaxSize: 0x0170
struct FRigUnit_SetControlColor : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0130   (0x0008)  
	FLinearColor                                       Color;                                                      // 0x0138   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0148   (0x0020)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlDrivenList
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_GetControlDrivenList : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	TArray<FRigElementKey>                             Driven;                                                     // 0x0010   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlDrivenList
/// Size: 0x0170 (368 bytes) (0x000130 - 0x000170) align 16 MaxSize: 0x0170
struct FRigUnit_SetControlDrivenList : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0130   (0x0008)  
	TArray<FRigElementKey>                             Driven;                                                     // 0x0138   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0148   (0x0020)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlOffset
/// Size: 0x01D0 (464 bytes) (0x000130 - 0x0001D0) align 16 MaxSize: 0x01D0
struct FRigUnit_SetControlOffset : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0130   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0138   (0x0008)  MISSED
	FTransform                                         Offset;                                                     // 0x0140   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01A1   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x01A8   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x01C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetShapeTransform
/// Size: 0x0090 (144 bytes) (0x000008 - 0x000090) align 16 MaxSize: 0x0090
struct FRigUnit_GetShapeTransform : FRigUnit
{ 
	FName                                              Control;                                                    // 0x0008   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0070   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetShapeTransform
/// Size: 0x01C0 (448 bytes) (0x000130 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FRigUnit_SetShapeTransform : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0130   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0138   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0140   (0x0060)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x01A0   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlBool
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetControlBool : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0130   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0139   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0140   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool_Entry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigUnit_SetMultiControlBool_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	bool                                               BoolValue;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool
/// Size: 0x0150 (336 bytes) (0x000130 - 0x000150) align 16 MaxSize: 0x0150
struct FRigUnit_SetMultiControlBool : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlBool_Entry>         Entries;                                                    // 0x0130   (0x0010)  
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0140   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlFloat
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetControlFloat : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0130   (0x0008)  
	float                                              Weight;                                                     // 0x0138   (0x0004)  
	float                                              FloatValue;                                                 // 0x013C   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0140   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigUnit_SetMultiControlFloat_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	float                                              FloatValue;                                                 // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetMultiControlFloat : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlFloat_Entry>        Entries;                                                    // 0x0130   (0x0010)  
	float                                              Weight;                                                     // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0148   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlInteger
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetControlInteger : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0130   (0x0008)  
	int32_t                                            Weight;                                                     // 0x0138   (0x0004)  
	int32_t                                            IntegerValue;                                               // 0x013C   (0x0004)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0140   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigUnit_SetMultiControlInteger_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	int32_t                                            IntegerValue;                                               // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetMultiControlInteger : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlInteger_Entry>      Entries;                                                    // 0x0130   (0x0010)  
	float                                              Weight;                                                     // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0148   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector2D
/// Size: 0x0170 (368 bytes) (0x000130 - 0x000170) align 16 MaxSize: 0x0170
struct FRigUnit_SetControlVector2D : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0130   (0x0008)  
	float                                              Weight;                                                     // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FVector2D                                          Vector;                                                     // 0x0140   (0x0010)  
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0150   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FRigUnit_SetMultiControlVector2D_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	FVector2D                                          Vector;                                                     // 0x0008   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlVector2D_Entry>     Entries;                                                    // 0x0130   (0x0010)  
	float                                              Weight;                                                     // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0148   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector
/// Size: 0x0180 (384 bytes) (0x000130 - 0x000180) align 16 MaxSize: 0x0180
struct FRigUnit_SetControlVector : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0130   (0x0008)  
	float                                              Weight;                                                     // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FVector                                            Vector;                                                     // 0x0140   (0x0018)  
	ERigVMTransformSpace                               Space;                                                      // 0x0158   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0159   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0160   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlRotator
/// Size: 0x0180 (384 bytes) (0x000130 - 0x000180) align 16 MaxSize: 0x0180
struct FRigUnit_SetControlRotator : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0130   (0x0008)  
	float                                              Weight;                                                     // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FRotator                                           Rotator;                                                    // 0x0140   (0x0018)  
	ERigVMTransformSpace                               Space;                                                      // 0x0158   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0159   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0160   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_SetMultiControlRotator_Entry
{ 
	FName                                              Control;                                                    // 0x0000   (0x0008)  
	FRotator                                           Rotator;                                                    // 0x0008   (0x0018)  
	ERigVMTransformSpace                               Space;                                                      // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetMultiControlRotator : FRigUnitMutable
{ 
	TArray<FRigUnit_SetMultiControlRotator_Entry>      Entries;                                                    // 0x0130   (0x0010)  
	float                                              Weight;                                                     // 0x0140   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0144   (0x0004)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0148   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetControlTransform
/// Size: 0x01D0 (464 bytes) (0x000130 - 0x0001D0) align 16 MaxSize: 0x01D0
struct FRigUnit_SetControlTransform : FRigUnitMutable
{ 
	FName                                              Control;                                                    // 0x0130   (0x0008)  
	float                                              Weight;                                                     // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0140   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01A1   (0x0007)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x01A8   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x01C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_GetControlVisibility
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_GetControlVisibility : FRigUnit
{ 
	FRigElementKey                                     Item;                                                       // 0x0008   (0x000C)  
	bool                                               bVisible;                                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FCachedRigElement                                  CachedControlIndex;                                         // 0x0018   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetControlVisibility
/// Size: 0x0170 (368 bytes) (0x000130 - 0x000170) align 16 MaxSize: 0x0170
struct FRigUnit_SetControlVisibility : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FString                                            Pattern;                                                    // 0x0140   (0x0010)  
	bool                                               bVisible;                                                   // 0x0150   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0151   (0x0007)  MISSED
	TArray<FCachedRigElement>                          CachedControlIndices;                                       // 0x0158   (0x0010)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0168   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetCurveValue
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_SetCurveValue : FRigUnitMutable
{ 
	FName                                              Curve;                                                      // 0x0130   (0x0008)  
	float                                              Value;                                                      // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0140   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
/// Size: 0x01F0 (496 bytes) (0x000130 - 0x0001F0) align 16 MaxSize: 0x01F0
struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable
{ 
	FName                                              bone;                                                       // 0x0130   (0x0008)  
	FName                                              Space;                                                      // 0x0138   (0x0008)  
	FTransform                                         Transform;                                                  // 0x0140   (0x0060)  
	float                                              Weight;                                                     // 0x01A0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01A4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01A5   (0x0003)  MISSED
	FCachedRigElement                                  CachedBone;                                                 // 0x01A8   (0x0020)  
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x01C8   (0x0020)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x01E8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTransformForItem
/// Size: 0x0200 (512 bytes) (0x000130 - 0x000200) align 16 MaxSize: 0x0200
struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x013C   (0x000C)  
	bool                                               bParentInitial;                                             // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0149   (0x0007)  MISSED
	FTransform                                         Value;                                                      // 0x0150   (0x0060)  
	float                                              Weight;                                                     // 0x01B0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01B4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01B5   (0x0003)  MISSED
	FCachedRigElement                                  CachedChild;                                                // 0x01B8   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x01D8   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x01F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTranslationForItem
/// Size: 0x01B0 (432 bytes) (0x000130 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigUnit_SetRelativeTranslationForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x013C   (0x000C)  
	bool                                               bParentInitial;                                             // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0149   (0x0007)  MISSED
	FVector                                            Value;                                                      // 0x0150   (0x0018)  
	float                                              Weight;                                                     // 0x0168   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x016C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x016D   (0x0003)  MISSED
	FCachedRigElement                                  CachedChild;                                                // 0x0170   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x0190   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeRotationForItem
/// Size: 0x01C0 (448 bytes) (0x000130 - 0x0001C0) align 16 MaxSize: 0x01C0
struct FRigUnit_SetRelativeRotationForItem : FRigUnitMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	FRigElementKey                                     Parent;                                                     // 0x013C   (0x000C)  
	bool                                               bParentInitial;                                             // 0x0148   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0149   (0x0007)  MISSED
	FQuat                                              Value;                                                      // 0x0150   (0x0020)  
	float                                              Weight;                                                     // 0x0170   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0174   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0175   (0x0003)  MISSED
	FCachedRigElement                                  CachedChild;                                                // 0x0178   (0x0020)  
	FCachedRigElement                                  CachedParent;                                               // 0x0198   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x01B8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceInitialTransform
/// Size: 0x0230 (560 bytes) (0x000130 - 0x000230) align 16 MaxSize: 0x0230
struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable
{ 
	FName                                              SpaceName;                                                  // 0x0130   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0138   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0140   (0x0060)  
	FTransform                                         Result;                                                     // 0x01A0   (0x0060)  
	ERigVMTransformSpace                               Space;                                                      // 0x0200   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0201   (0x0007)  MISSED
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x0208   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0228   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceTransform
/// Size: 0x01D0 (464 bytes) (0x000130 - 0x0001D0) align 16 MaxSize: 0x01D0
struct FRigUnit_SetSpaceTransform : FRigUnitMutable
{ 
	FName                                              Space;                                                      // 0x0130   (0x0008)  
	float                                              Weight;                                                     // 0x0138   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0140   (0x0060)  
	ERigVMTransformSpace                               SpaceType;                                                  // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01A1   (0x0007)  MISSED
	FCachedRigElement                                  CachedSpaceIndex;                                           // 0x01A8   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x01C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetTransform
/// Size: 0x01D0 (464 bytes) (0x000130 - 0x0001D0) align 16 MaxSize: 0x01D0
struct FRigUnit_SetTransform : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	ERigVMTransformSpace                               Space;                                                      // 0x013C   (0x0001)  
	bool                                               bInitial;                                                   // 0x013D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x013E   (0x0002)  MISSED
	FTransform                                         Value;                                                      // 0x0140   (0x0060)  
	float                                              Weight;                                                     // 0x01A0   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01A4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01A5   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x01A8   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x01C8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetTranslation
/// Size: 0x0180 (384 bytes) (0x000130 - 0x000180) align 16 MaxSize: 0x0180
struct FRigUnit_SetTranslation : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	ERigVMTransformSpace                               Space;                                                      // 0x013C   (0x0001)  
	bool                                               bInitial;                                                   // 0x013D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x013E   (0x0002)  MISSED
	FVector                                            Value;                                                      // 0x0140   (0x0018)  
	float                                              Weight;                                                     // 0x0158   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x015C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x015D   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0160   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetRotation
/// Size: 0x0190 (400 bytes) (0x000130 - 0x000190) align 16 MaxSize: 0x0190
struct FRigUnit_SetRotation : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	ERigVMTransformSpace                               Space;                                                      // 0x013C   (0x0001)  
	bool                                               bInitial;                                                   // 0x013D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x013E   (0x0002)  MISSED
	FQuat                                              Value;                                                      // 0x0140   (0x0020)  
	float                                              Weight;                                                     // 0x0160   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0164   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0165   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0168   (0x0020)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x0188   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SetScale
/// Size: 0x0180 (384 bytes) (0x000130 - 0x000180) align 16 MaxSize: 0x0180
struct FRigUnit_SetScale : FRigUnitMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	ERigVMTransformSpace                               Space;                                                      // 0x013C   (0x0001)  
	bool                                               bInitial;                                                   // 0x013D   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x013E   (0x0002)  MISSED
	FVector                                            Scale;                                                      // 0x0140   (0x0018)  
	float                                              Weight;                                                     // 0x0158   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x015C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x015D   (0x0003)  MISSED
	FCachedRigElement                                  CachedIndex;                                                // 0x0160   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_SetTransformArray
/// Size: 0x0170 (368 bytes) (0x000130 - 0x000170) align 16 MaxSize: 0x0170
struct FRigUnit_SetTransformArray : FRigUnitMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0130   (0x0010)  
	ERigVMTransformSpace                               Space;                                                      // 0x0140   (0x0001)  
	bool                                               bInitial;                                                   // 0x0141   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0142   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0148   (0x0010)  
	float                                              Weight;                                                     // 0x0158   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x015C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x015D   (0x0003)  MISSED
	TArray<FCachedRigElement>                          CachedIndex;                                                // 0x0160   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SetTransformItemArray
/// Size: 0x0170 (368 bytes) (0x000130 - 0x000170) align 16 MaxSize: 0x0170
struct FRigUnit_SetTransformItemArray : FRigUnitMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0130   (0x0010)  
	ERigVMTransformSpace                               Space;                                                      // 0x0140   (0x0001)  
	bool                                               bInitial;                                                   // 0x0141   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0142   (0x0006)  MISSED
	TArray<FTransform>                                 Transforms;                                                 // 0x0148   (0x0010)  
	float                                              Weight;                                                     // 0x0158   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x015C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x015D   (0x0003)  MISSED
	TArray<FCachedRigElement>                          CachedIndex;                                                // 0x0160   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_UnsetCurveValue
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_UnsetCurveValue : FRigUnitMutable
{ 
	FName                                              Curve;                                                      // 0x0130   (0x0008)  
	FCachedRigElement                                  CachedCurveIndex;                                           // 0x0138   (0x0020)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Transform
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_ToWorldSpace_Transform : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FTransform                                         World;                                                      // 0x0070   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Transform
/// Size: 0x00D0 (208 bytes) (0x000008 - 0x0000D0) align 16 MaxSize: 0x00D0
struct FRigUnit_ToRigSpace_Transform : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Value;                                                      // 0x0010   (0x0060)  
	FTransform                                         Global;                                                     // 0x0070   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Location
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_ToWorldSpace_Location : FRigUnit
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            World;                                                      // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Location
/// Size: 0x0038 (56 bytes) (0x000008 - 0x000038) align 8 MaxSize: 0x0038
struct FRigUnit_ToRigSpace_Location : FRigUnit
{ 
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
	FVector                                            Global;                                                     // 0x0020   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_ToWorldSpace_Rotation : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FQuat                                              World;                                                      // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Rotation
/// Size: 0x0050 (80 bytes) (0x000008 - 0x000050) align 16 MaxSize: 0x0050
struct FRigUnit_ToRigSpace_Rotation : FRigUnit
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Value;                                                      // 0x0010   (0x0020)  
	FQuat                                              Global;                                                     // 0x0030   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigUnit_BoneHarmonics_BoneTarget
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	float                                              Ratio;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_Harmonics_TargetItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRigUnit_Harmonics_TargetItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	float                                              Ratio;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_BoneHarmonics_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	FVector                                            WaveTime;                                                   // 0x0010   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics
/// Size: 0x01F0 (496 bytes) (0x000130 - 0x0001F0) align 16 MaxSize: 0x01F0
struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_BoneHarmonics_BoneTarget>          Bones;                                                      // 0x0130   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x0140   (0x0018)  
	FVector                                            WaveFrequency;                                              // 0x0158   (0x0018)  
	FVector                                            WaveAmplitude;                                              // 0x0170   (0x0018)  
	FVector                                            WaveOffset;                                                 // 0x0188   (0x0018)  
	FVector                                            WaveNoise;                                                  // 0x01A0   (0x0018)  
	ERigVMAnimEasingType                               WaveEase;                                                   // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01B9   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x01BC   (0x0004)  
	float                                              WaveMaximum;                                                // 0x01C0   (0x0004)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x01C4   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x01C5   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x01C6   (0x0002)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x01C8   (0x0028)  
};

/// Struct /Script/ControlRig.RigUnit_ItemHarmonics
/// Size: 0x01F0 (496 bytes) (0x000130 - 0x0001F0) align 16 MaxSize: 0x01F0
struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_Harmonics_TargetItem>              Targets;                                                    // 0x0130   (0x0010)  
	FVector                                            WaveSpeed;                                                  // 0x0140   (0x0018)  
	FVector                                            WaveFrequency;                                              // 0x0158   (0x0018)  
	FVector                                            WaveAmplitude;                                              // 0x0170   (0x0018)  
	FVector                                            WaveOffset;                                                 // 0x0188   (0x0018)  
	FVector                                            WaveNoise;                                                  // 0x01A0   (0x0018)  
	ERigVMAnimEasingType                               WaveEase;                                                   // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01B9   (0x0003)  MISSED
	float                                              WaveMinimum;                                                // 0x01BC   (0x0004)  
	float                                              WaveMaximum;                                                // 0x01C0   (0x0004)  
	EEulerRotationOrder                                RotationOrder;                                              // 0x01C4   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x01C5   (0x0003)  MISSED
	FRigUnit_BoneHarmonics_WorkData                    WorkData;                                                   // 0x01C8   (0x0028)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_ChainHarmonics_Reach
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            ReachTarget;                                                // 0x0008   (0x0018)  
	FVector                                            ReachAxis;                                                  // 0x0020   (0x0018)  
	float                                              ReachMinimum;                                               // 0x0038   (0x0004)  
	float                                              ReachMaximum;                                               // 0x003C   (0x0004)  
	ERigVMAnimEasingType                               ReachEase;                                                  // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FRigUnit_ChainHarmonics_Wave
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FVector                                            WaveFrequency;                                              // 0x0008   (0x0018)  
	FVector                                            WaveAmplitude;                                              // 0x0020   (0x0018)  
	FVector                                            WaveOffset;                                                 // 0x0038   (0x0018)  
	FVector                                            WaveNoise;                                                  // 0x0050   (0x0018)  
	float                                              WaveMinimum;                                                // 0x0068   (0x0004)  
	float                                              WaveMaximum;                                                // 0x006C   (0x0004)  
	ERigVMAnimEasingType                               WaveEase;                                                   // 0x0070   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FRigUnit_ChainHarmonics_Pendulum
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              PendulumStiffness;                                          // 0x0004   (0x0004)  
	FVector                                            PendulumGravity;                                            // 0x0008   (0x0018)  
	float                                              PendulumBlend;                                              // 0x0020   (0x0004)  
	float                                              PendulumDrag;                                               // 0x0024   (0x0004)  
	float                                              PendulumMinimum;                                            // 0x0028   (0x0004)  
	float                                              PendulumMaximum;                                            // 0x002C   (0x0004)  
	ERigVMAnimEasingType                               PendulumEase;                                               // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
	FVector                                            UnwindAxis;                                                 // 0x0038   (0x0018)  
	float                                              UnwindMinimum;                                              // 0x0050   (0x0004)  
	float                                              UnwindMaximum;                                              // 0x0054   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FRigUnit_ChainHarmonics_WorkData
{ 
	FVector                                            time;                                                       // 0x0000   (0x0018)  
	TArray<FCachedRigElement>                          Items;                                                      // 0x0018   (0x0010)  
	TArray<float>                                      Ratio;                                                      // 0x0028   (0x0010)  
	TArray<FVector>                                    LocalTip;                                                   // 0x0038   (0x0010)  
	TArray<FVector>                                    PendulumTip;                                                // 0x0048   (0x0010)  
	TArray<FVector>                                    PendulumPosition;                                           // 0x0058   (0x0010)  
	TArray<FVector>                                    PendulumVelocity;                                           // 0x0068   (0x0010)  
	TArray<FVector>                                    HierarchyLine;                                              // 0x0078   (0x0010)  
	TArray<FVector>                                    VelocityLines;                                              // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics
/// Size: 0x0400 (1024 bytes) (0x000130 - 0x000400) align 16 MaxSize: 0x0400
struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              ChainRoot;                                                  // 0x0130   (0x0008)  
	FVector                                            Speed;                                                      // 0x0138   (0x0018)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x0150   (0x0048)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x0198   (0x0078)  
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x0210   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x0298   (0x0058)  
	bool                                               bDrawDebug;                                                 // 0x02F0   (0x0001)  
	unsigned char                                      UnknownData00_6[0xF];                                       // 0x02F1   (0x000F)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x0300   (0x0060)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x0360   (0x0098)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x03F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
/// Size: 0x0400 (1024 bytes) (0x000130 - 0x000400) align 16 MaxSize: 0x0400
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     ChainRoot;                                                  // 0x0130   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FVector                                            Speed;                                                      // 0x0140   (0x0018)  
	FRigUnit_ChainHarmonics_Reach                      Reach;                                                      // 0x0158   (0x0048)  
	FRigUnit_ChainHarmonics_Wave                       Wave;                                                       // 0x01A0   (0x0078)  
	FRuntimeFloatCurve                                 WaveCurve;                                                  // 0x0218   (0x0088)  
	FRigUnit_ChainHarmonics_Pendulum                   Pendulum;                                                   // 0x02A0   (0x0058)  
	bool                                               bDrawDebug;                                                 // 0x02F8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x02F9   (0x0007)  MISSED
	FTransform                                         DrawWorldOffset;                                            // 0x0300   (0x0060)  
	FRigUnit_ChainHarmonics_WorkData                   WorkData;                                                   // 0x0360   (0x0098)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x03F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimBone_Target
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_AimBone_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	FVector                                            Target;                                                     // 0x0020   (0x0018)  
	EControlRigVectorKind                              Kind;                                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FName                                              Space;                                                      // 0x003C   (0x0008)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimItem_Target
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_AimItem_Target
{ 
	float                                              Weight;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            Axis;                                                       // 0x0008   (0x0018)  
	FVector                                            Target;                                                     // 0x0020   (0x0018)  
	EControlRigVectorKind                              Kind;                                                       // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FRigElementKey                                     Space;                                                      // 0x003C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_AimBone_DebugSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_AimBone_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_AimBoneMath
/// Size: 0x0230 (560 bytes) (0x000008 - 0x000230) align 16 MaxSize: 0x0230
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         InputTransform;                                             // 0x0010   (0x0060)  
	FRigUnit_AimItem_Target                            Primary;                                                    // 0x0070   (0x0048)  
	FRigUnit_AimItem_Target                            Secondary;                                                  // 0x00B8   (0x0048)  
	float                                              Weight;                                                     // 0x0100   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x0104   (0x000C)  MISSED
	FTransform                                         Result;                                                     // 0x0110   (0x0060)  
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x0170   (0x0070)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x01E0   (0x0020)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0200   (0x0020)  
	bool                                               bIsInitialized;                                             // 0x0220   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x0221   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimBone
/// Size: 0x02B0 (688 bytes) (0x000130 - 0x0002B0) align 16 MaxSize: 0x02B0
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              bone;                                                       // 0x0130   (0x0008)  
	FRigUnit_AimBone_Target                            Primary;                                                    // 0x0138   (0x0048)  
	FRigUnit_AimBone_Target                            Secondary;                                                  // 0x0180   (0x0048)  
	float                                              Weight;                                                     // 0x01C8   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01CC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01CD   (0x0003)  MISSED
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x01D0   (0x0070)  
	FCachedRigElement                                  CachedBoneIndex;                                            // 0x0240   (0x0020)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0260   (0x0020)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0280   (0x0020)  
	bool                                               bIsInitialized;                                             // 0x02A0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x02A1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimItem
/// Size: 0x02C0 (704 bytes) (0x000130 - 0x0002C0) align 16 MaxSize: 0x02C0
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x013C   (0x0004)  MISSED
	FRigUnit_AimItem_Target                            Primary;                                                    // 0x0140   (0x0048)  
	FRigUnit_AimItem_Target                            Secondary;                                                  // 0x0188   (0x0048)  
	float                                              Weight;                                                     // 0x01D0   (0x0004)  
	unsigned char                                      UnknownData01_6[0xC];                                       // 0x01D4   (0x000C)  MISSED
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x01E0   (0x0070)  
	FCachedRigElement                                  CachedItem;                                                 // 0x0250   (0x0020)  
	FCachedRigElement                                  PrimaryCachedSpace;                                         // 0x0270   (0x0020)  
	FCachedRigElement                                  SecondaryCachedSpace;                                       // 0x0290   (0x0020)  
	bool                                               bIsInitialized;                                             // 0x02B0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x02B1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorldUp
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FRigUnit_AimConstraint_WorldUp
{ 
	FVector                                            Target;                                                     // 0x0000   (0x0018)  
	EControlRigVectorKind                              Kind;                                                       // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FRigElementKey                                     Space;                                                      // 0x001C   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_AdvancedSettings
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FRigUnit_AimConstraint_AdvancedSettings
{ 
	FRigUnit_AimBone_DebugSettings                     DebugSettings;                                              // 0x0000   (0x0070)  
	EEulerRotationOrder                                RotationOrderForFilter;                                     // 0x0070   (0x0001)  
	unsigned char                                      UnknownData00_7[0xF];                                       // 0x0071   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.ConstraintParent
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FConstraintParent
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	float                                              Weight;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_AimConstraintLocalSpaceOffset
/// Size: 0x0290 (656 bytes) (0x000130 - 0x000290) align 16 MaxSize: 0x0290
struct FRigUnit_AimConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x013C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x013D   (0x0003)  
	FVector                                            AimAxis;                                                    // 0x0140   (0x0018)  
	FVector                                            UpAxis;                                                     // 0x0158   (0x0018)  
	FRigUnit_AimConstraint_WorldUp                     WorldUp;                                                    // 0x0170   (0x0028)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0198   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x01A8   (0x0008)  MISSED
	FRigUnit_AimConstraint_AdvancedSettings            AdvancedSettings;                                           // 0x01B0   (0x0080)  
	float                                              Weight;                                                     // 0x0230   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0234   (0x0004)  MISSED
	FCachedRigElement                                  WorldUpSpaceCache;                                          // 0x0238   (0x0020)  
	FCachedRigElement                                  ChildCache;                                                 // 0x0258   (0x0020)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0278   (0x0010)  
	bool                                               bIsInitialized;                                             // 0x0288   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0289   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimit
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FRigUnit_CCDIK_RotationLimit
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	float                                              Limit;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRigUnit_CCDIK_RotationLimitPerItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	float                                              Limit;                                                      // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_WorkData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRigUnit_CCDIK_WorkData
{ 
	TArray<FCCDIKChainLink>                            Chain;                                                      // 0x0000   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)  
	TArray<int32_t>                                    RotationLimitIndex;                                         // 0x0020   (0x0010)  
	TArray<float>                                      RotationLimitsPerItem;                                      // 0x0030   (0x0010)  
	FCachedRigElement                                  CachedEffector;                                             // 0x0040   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIK
/// Size: 0x0230 (560 bytes) (0x000130 - 0x000230) align 16 MaxSize: 0x0230
struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0130   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0138   (0x0008)  
	FTransform                                         EffectorTransform;                                          // 0x0140   (0x0060)  
	float                                              Precision;                                                  // 0x01A0   (0x0004)  
	float                                              Weight;                                                     // 0x01A4   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x01A8   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01AD   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimit>               RotationLimits;                                             // 0x01B8   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x01C9   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x01D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIKPerItem
/// Size: 0x0230 (560 bytes) (0x000130 - 0x000230) align 16 MaxSize: 0x0230
struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0130   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x0140   (0x0060)  
	float                                              Precision;                                                  // 0x01A0   (0x0004)  
	float                                              Weight;                                                     // 0x01A4   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x01A8   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01AD   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimitPerItem>        RotationLimits;                                             // 0x01B8   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x01C9   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x01D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_CCDIKItemArray
/// Size: 0x0230 (560 bytes) (0x000130 - 0x000230) align 16 MaxSize: 0x0230
struct FRigUnit_CCDIKItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0130   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x0140   (0x0060)  
	float                                              Precision;                                                  // 0x01A0   (0x0004)  
	float                                              Weight;                                                     // 0x01A4   (0x0004)  
	int32_t                                            MaxIterations;                                              // 0x01A8   (0x0004)  
	bool                                               bStartFromTail;                                             // 0x01AC   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01AD   (0x0003)  MISSED
	float                                              BaseRotationLimit;                                          // 0x01B0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01B4   (0x0004)  MISSED
	TArray<FRigUnit_CCDIK_RotationLimitPerItem>        RotationLimits;                                             // 0x01B8   (0x0010)  
	bool                                               bPropagateToChildren;                                       // 0x01C8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x01C9   (0x0007)  MISSED
	FRigUnit_CCDIK_WorkData                            WorkData;                                                   // 0x01D0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_Rotation
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_DistributeRotation_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0020)  
	float                                              Ratio;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FRigUnit_DistributeRotation_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	TArray<int32_t>                                    ItemRotationA;                                              // 0x0010   (0x0010)  
	TArray<int32_t>                                    ItemRotationB;                                              // 0x0020   (0x0010)  
	TArray<float>                                      ItemRotationT;                                              // 0x0030   (0x0010)  
	TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0040   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation
/// Size: 0x01B0 (432 bytes) (0x000130 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0130   (0x0008)  
	FName                                              EndBone;                                                    // 0x0138   (0x0008)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0140   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0151   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0154   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0158   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0159   (0x0007)  MISSED
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0160   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForCollection
/// Size: 0x01B0 (432 bytes) (0x000130 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0130   (0x0010)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0140   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0151   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0154   (0x0004)  
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0158   (0x0050)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x01A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForItemArray
/// Size: 0x01B0 (432 bytes) (0x000130 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigUnit_DistributeRotationForItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0130   (0x0010)  
	TArray<FRigUnit_DistributeRotation_Rotation>       Rotations;                                                  // 0x0140   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x0150   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0151   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0154   (0x0004)  
	FRigUnit_DistributeRotation_WorkData               WorkData;                                                   // 0x0158   (0x0050)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x01A8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIK_WorkData
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_FABRIK_WorkData
{ 
	TArray<FFABRIKChainLink>                           Chain;                                                      // 0x0000   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0010   (0x0010)  
	FCachedRigElement                                  CachedEffector;                                             // 0x0020   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_FABRIK
/// Size: 0x0200 (512 bytes) (0x000130 - 0x000200) align 16 MaxSize: 0x0200
struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0130   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0138   (0x0008)  
	FTransform                                         EffectorTransform;                                          // 0x0140   (0x0060)  
	float                                              Precision;                                                  // 0x01A0   (0x0004)  
	float                                              Weight;                                                     // 0x01A4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01A9   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x01AC   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x01B0   (0x0040)  
	bool                                               bSetEffectorTransform;                                      // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x01F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIKPerItem
/// Size: 0x0200 (512 bytes) (0x000130 - 0x000200) align 16 MaxSize: 0x0200
struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0130   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x0140   (0x0060)  
	float                                              Precision;                                                  // 0x01A0   (0x0004)  
	float                                              Weight;                                                     // 0x01A4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01A9   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x01AC   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x01B0   (0x0040)  
	bool                                               bSetEffectorTransform;                                      // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x01F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FABRIKItemArray
/// Size: 0x0200 (512 bytes) (0x000130 - 0x000200) align 16 MaxSize: 0x0200
struct FRigUnit_FABRIKItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0130   (0x0010)  
	FTransform                                         EffectorTransform;                                          // 0x0140   (0x0060)  
	float                                              Precision;                                                  // 0x01A0   (0x0004)  
	float                                              Weight;                                                     // 0x01A4   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01A9   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x01AC   (0x0004)  
	FRigUnit_FABRIK_WorkData                           WorkData;                                                   // 0x01B0   (0x0040)  
	bool                                               bSetEffectorTransform;                                      // 0x01F0   (0x0001)  
	unsigned char                                      UnknownData01_7[0xF];                                       // 0x01F1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 16 MaxSize: 0x0030
struct FRigUnit_FitChainToCurve_Rotation
{ 
	FQuat                                              Rotation;                                                   // 0x0000   (0x0020)  
	float                                              Ratio;                                                      // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0024   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FRigUnit_FitChainToCurve_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       CurveColor;                                                 // 0x0008   (0x0010)  
	FLinearColor                                       SegmentsColor;                                              // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0028   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0030   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FRigUnit_FitChainToCurve_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FVector>                                    ItemPositions;                                              // 0x0008   (0x0010)  
	TArray<float>                                      ItemSegments;                                               // 0x0018   (0x0010)  
	TArray<FVector>                                    CurvePositions;                                             // 0x0028   (0x0010)  
	TArray<float>                                      CurveSegments;                                              // 0x0038   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0048   (0x0010)  
	TArray<int32_t>                                    ItemRotationA;                                              // 0x0058   (0x0010)  
	TArray<int32_t>                                    ItemRotationB;                                              // 0x0068   (0x0010)  
	TArray<float>                                      ItemRotationT;                                              // 0x0078   (0x0010)  
	TArray<FTransform>                                 ItemLocalTransforms;                                        // 0x0088   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve
/// Size: 0x0350 (848 bytes) (0x000130 - 0x000350) align 16 MaxSize: 0x0350
struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0130   (0x0008)  
	FName                                              EndBone;                                                    // 0x0138   (0x0008)  
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0140   (0x0060)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01A1   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x01A4   (0x0004)  
	float                                              Maximum;                                                    // 0x01A8   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x01AC   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x01B0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x01C8   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x01E0   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x01F8   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x0208   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0209   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x020C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0210   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0211   (0x000F)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0220   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x02B0   (0x0098)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0348   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurvePerItem
/// Size: 0x0350 (848 bytes) (0x000130 - 0x000350) align 16 MaxSize: 0x0350
struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0130   (0x0010)  
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0140   (0x0060)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01A1   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x01A4   (0x0004)  
	float                                              Maximum;                                                    // 0x01A8   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x01AC   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x01B0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x01C8   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x01E0   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x01F8   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x0208   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0209   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x020C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0210   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0211   (0x000F)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0220   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x02B0   (0x0098)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0348   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurveItemArray
/// Size: 0x0350 (848 bytes) (0x000130 - 0x000350) align 16 MaxSize: 0x0350
struct FRigUnit_FitChainToCurveItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0130   (0x0010)  
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0140   (0x0060)  
	EControlRigCurveAlignment                          Alignment;                                                  // 0x01A0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x01A1   (0x0003)  MISSED
	float                                              Minimum;                                                    // 0x01A4   (0x0004)  
	float                                              Maximum;                                                    // 0x01A8   (0x0004)  
	int32_t                                            SamplingPrecision;                                          // 0x01AC   (0x0004)  
	FVector                                            PrimaryAxis;                                                // 0x01B0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x01C8   (0x0018)  
	FVector                                            PoleVectorPosition;                                         // 0x01E0   (0x0018)  
	TArray<FRigUnit_FitChainToCurve_Rotation>          Rotations;                                                  // 0x01F8   (0x0010)  
	ERigVMAnimEasingType                               RotationEaseType;                                           // 0x0208   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0209   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x020C   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0210   (0x0001)  
	unsigned char                                      UnknownData02_6[0xF];                                       // 0x0211   (0x000F)  MISSED
	FRigUnit_FitChainToCurve_DebugSettings             DebugSettings;                                              // 0x0220   (0x0090)  
	FRigUnit_FitChainToCurve_WorkData                  WorkData;                                                   // 0x02B0   (0x0098)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0348   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_ModifyBoneTransforms_PerBone
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_WorkData
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_ModifyTransforms_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData
/// Size: 0x0010 (16 bytes) (0x000010 - 0x000010) align 8 MaxSize: 0x0010
struct FRigUnit_ModifyBoneTransforms_WorkData : FRigUnit_ModifyTransforms_WorkData
{ 
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyBoneTransforms_PerBone>      BoneToModify;                                               // 0x0130   (0x0010)  
	float                                              Weight;                                                     // 0x0140   (0x0004)  
	float                                              WeightMinimum;                                              // 0x0144   (0x0004)  
	float                                              WeightMaximum;                                              // 0x0148   (0x0004)  
	EControlRigModifyBoneMode                          Mode;                                                       // 0x014C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x014D   (0x0003)  MISSED
	FRigUnit_ModifyBoneTransforms_WorkData             WorkData;                                                   // 0x0150   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_ModifyTransforms_PerItem
{ 
	FRigElementKey                                     Item;                                                       // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FTransform                                         Transform;                                                  // 0x0010   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigUnit_ModifyTransforms_PerItem>          ItemToModify;                                               // 0x0130   (0x0010)  
	float                                              Weight;                                                     // 0x0140   (0x0004)  
	float                                              WeightMinimum;                                              // 0x0144   (0x0004)  
	float                                              WeightMaximum;                                              // 0x0148   (0x0004)  
	EControlRigModifyBoneMode                          Mode;                                                       // 0x014C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x014D   (0x0003)  MISSED
	FRigUnit_ModifyTransforms_WorkData                 WorkData;                                                   // 0x0150   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FRigUnit_MultiFABRIK_WorkData
{ 
	unsigned char                                      UnknownData00_2[0x68];                                      // 0x0000   (0x0068)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FRigUnit_MultiFABRIK_EndEffector
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	FVector                                            Location;                                                   // 0x0008   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK
/// Size: 0x01D0 (464 bytes) (0x000130 - 0x0001D0) align 16 MaxSize: 0x01D0
struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              RootBone;                                                   // 0x0130   (0x0008)  
	TArray<FRigUnit_MultiFABRIK_EndEffector>           Effectors;                                                  // 0x0138   (0x0010)  
	float                                              Precision;                                                  // 0x0148   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x014C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x014D   (0x0003)  MISSED
	int32_t                                            MaxIterations;                                              // 0x0150   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	FRigUnit_MultiFABRIK_WorkData                      WorkData;                                                   // 0x0158   (0x0068)  
	bool                                               bIsInitialized;                                             // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData02_7[0xF];                                       // 0x01C1   (0x000F)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SlideChain_WorkData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FRigUnit_SlideChain_WorkData
{ 
	float                                              ChainLength;                                                // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<float>                                      ItemSegments;                                               // 0x0008   (0x0010)  
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0018   (0x0010)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0028   (0x0010)  
	TArray<FTransform>                                 BlendedTransforms;                                          // 0x0038   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChain
/// Size: 0x0190 (400 bytes) (0x000130 - 0x000190) align 16 MaxSize: 0x0190
struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0130   (0x0008)  
	FName                                              EndBone;                                                    // 0x0138   (0x0008)  
	float                                              SlideAmount;                                                // 0x0140   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0144   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0145   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0148   (0x0048)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChainPerItem
/// Size: 0x0190 (400 bytes) (0x000130 - 0x000190) align 16 MaxSize: 0x0190
struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0130   (0x0010)  
	float                                              SlideAmount;                                                // 0x0140   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0144   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0145   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0148   (0x0048)  
};

/// Struct /Script/ControlRig.RigUnit_SlideChainItemArray
/// Size: 0x0190 (400 bytes) (0x000130 - 0x000190) align 16 MaxSize: 0x0190
struct FRigUnit_SlideChainItemArray : FRigUnit_HighlevelBaseMutable
{ 
	TArray<FRigElementKey>                             Items;                                                      // 0x0130   (0x0010)  
	float                                              SlideAmount;                                                // 0x0140   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0144   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0145   (0x0003)  MISSED
	FRigUnit_SlideChain_WorkData                       WorkData;                                                   // 0x0148   (0x0048)  
};

/// Struct /Script/ControlRig.RegionScaleFactors
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FRegionScaleFactors
{ 
	float                                              PositiveWidth;                                              // 0x0000   (0x0004)  
	float                                              NegativeWidth;                                              // 0x0004   (0x0004)  
	float                                              PositiveHeight;                                             // 0x0008   (0x0004)  
	float                                              NegativeHeight;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.SphericalRegion
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FSphericalRegion
{ 
	unsigned char                                      UnknownData00_2[0x14];                                      // 0x0000   (0x0014)  MISSED
};

/// Struct /Script/ControlRig.SphericalPoseReaderDebugSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FSphericalPoseReaderDebugSettings
{ 
	bool                                               bDrawDebug;                                                 // 0x0000   (0x0001)  
	bool                                               bDraw2D;                                                    // 0x0001   (0x0001)  
	bool                                               bDrawLocalAxes;                                             // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0003   (0x0001)  MISSED
	float                                              DebugScale;                                                 // 0x0004   (0x0004)  
	int32_t                                            DebugSegments;                                              // 0x0008   (0x0004)  
	float                                              DebugThickness;                                             // 0x000C   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_SphericalPoseReader
/// Size: 0x02D0 (720 bytes) (0x000130 - 0x0002D0) align 16 MaxSize: 0x02D0
struct FRigUnit_SphericalPoseReader : FRigUnit_HighlevelBaseMutable
{ 
	float                                              OutputParam;                                                // 0x0130   (0x0004)  
	FRigElementKey                                     DriverItem;                                                 // 0x0134   (0x000C)  
	FVector                                            DriverAxis;                                                 // 0x0140   (0x0018)  
	FVector                                            RotationOffset;                                             // 0x0158   (0x0018)  
	float                                              ActiveRegionSize;                                           // 0x0170   (0x0004)  
	FRegionScaleFactors                                ActiveRegionScaleFactors;                                   // 0x0174   (0x0010)  
	float                                              FalloffSize;                                                // 0x0184   (0x0004)  
	FRegionScaleFactors                                FalloffRegionScaleFactors;                                  // 0x0188   (0x0010)  
	bool                                               FlipWidthScaling;                                           // 0x0198   (0x0001)  
	bool                                               FlipHeightScaling;                                          // 0x0199   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x019A   (0x0002)  MISSED
	FRigElementKey                                     OptionalParentItem;                                         // 0x019C   (0x000C)  
	FSphericalPoseReaderDebugSettings                  Debug;                                                      // 0x01A8   (0x0010)  
	FSphericalRegion                                   InnerRegion;                                                // 0x01B8   (0x0014)  
	FSphericalRegion                                   OuterRegion;                                                // 0x01CC   (0x0014)  
	FVector                                            DriverNormal;                                               // 0x01E0   (0x0018)  
	FVector                                            Driver2D;                                                   // 0x01F8   (0x0018)  
	FCachedRigElement                                  DriverCache;                                                // 0x0210   (0x0020)  
	FCachedRigElement                                  OptionalParentCache;                                        // 0x0230   (0x0020)  
	FTransform                                         LocalDriverTransformInit;                                   // 0x0250   (0x0060)  
	FVector                                            CachedRotationOffset;                                       // 0x02B0   (0x0018)  
	bool                                               bCachedInitTransforms;                                      // 0x02C8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x02C9   (0x0007)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_DebugSettings
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FRigUnit_SpringIK_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	FLinearColor                                       Color;                                                      // 0x0008   (0x0010)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0018   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_WorkData
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FRigUnit_SpringIK_WorkData
{ 
	TArray<FCachedRigElement>                          CachedBones;                                                // 0x0000   (0x0010)  
	FCachedRigElement                                  CachedPoleVector;                                           // 0x0010   (0x0020)  
	TArray<FTransform>                                 Transforms;                                                 // 0x0030   (0x0010)  
	FCRSimPointContainer                               Simulation;                                                 // 0x0040   (0x0078)  
};

/// Struct /Script/ControlRig.RigUnit_SpringIK
/// Size: 0x0300 (768 bytes) (0x000130 - 0x000300) align 16 MaxSize: 0x0300
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0130   (0x0008)  
	FName                                              EndBone;                                                    // 0x0138   (0x0008)  
	float                                              HierarchyStrength;                                          // 0x0140   (0x0004)  
	float                                              EffectorStrength;                                           // 0x0144   (0x0004)  
	float                                              EffectorRatio;                                              // 0x0148   (0x0004)  
	float                                              RootStrength;                                               // 0x014C   (0x0004)  
	float                                              RootRatio;                                                  // 0x0150   (0x0004)  
	float                                              Damping;                                                    // 0x0154   (0x0004)  
	FVector                                            PoleVector;                                                 // 0x0158   (0x0018)  
	bool                                               bFlipPolePlane;                                             // 0x0170   (0x0001)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x0171   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0172   (0x0002)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x0174   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x017C   (0x0004)  MISSED
	FVector                                            PrimaryAxis;                                                // 0x0180   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0198   (0x0018)  
	bool                                               bLiveSimulation;                                            // 0x01B0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x01B1   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x01B4   (0x0004)  
	bool                                               bLimitLocalPosition;                                        // 0x01B8   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x01B9   (0x0001)  
	unsigned char                                      UnknownData03_6[0x6];                                       // 0x01BA   (0x0006)  MISSED
	FRigUnit_SpringIK_DebugSettings                    DebugSettings;                                              // 0x01C0   (0x0080)  
	FRigUnit_SpringIK_WorkData                         WorkData;                                                   // 0x0240   (0x00B8)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x02F8   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.ConstraintTarget
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FConstraintTarget
{ 
	FTransform                                         Transform;                                                  // 0x0000   (0x0060)  
	float                                              Weight;                                                     // 0x0060   (0x0004)  
	bool                                               bMaintainOffset;                                            // 0x0064   (0x0001)  
	FTransformFilter                                   Filter;                                                     // 0x0065   (0x0009)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x006E   (0x0002)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint_WorkData
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FRigUnit_TransformConstraint_WorkData
{ 
	TArray<FConstraintData>                            ConstraintData;                                             // 0x0000   (0x0010)  
	TMap<int32_t, int32_t>                             ConstraintDataToTargets;                                    // 0x0010   (0x0050)  
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint
/// Size: 0x0220 (544 bytes) (0x000130 - 0x000220) align 16 MaxSize: 0x0220
struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              bone;                                                       // 0x0130   (0x0008)  
	ETransformSpaceMode                                BaseTransformSpace;                                         // 0x0138   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0139   (0x0007)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0140   (0x0060)  
	FName                                              BaseBone;                                                   // 0x01A0   (0x0008)  
	TArray<FConstraintTarget>                          Targets;                                                    // 0x01A8   (0x0010)  
	bool                                               bUseInitialTransforms;                                      // 0x01B8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x01B9   (0x0007)  MISSED
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x01C0   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraintPerItem
/// Size: 0x0230 (560 bytes) (0x000130 - 0x000230) align 16 MaxSize: 0x0230
struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Item;                                                       // 0x0130   (0x000C)  
	ETransformSpaceMode                                BaseTransformSpace;                                         // 0x013C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x013D   (0x0003)  MISSED
	FTransform                                         BaseTransform;                                              // 0x0140   (0x0060)  
	FRigElementKey                                     BaseItem;                                                   // 0x01A0   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01AC   (0x0004)  MISSED
	TArray<FConstraintTarget>                          Targets;                                                    // 0x01B0   (0x0010)  
	bool                                               bUseInitialTransforms;                                      // 0x01C0   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x01C1   (0x0007)  MISSED
	FRigUnit_TransformConstraint_WorkData              WorkData;                                                   // 0x01C8   (0x0060)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x0228   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraint_AdvancedSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FRigUnit_ParentConstraint_AdvancedSettings
{ 
	EConstraintInterpType                              InterpolationType;                                          // 0x0000   (0x0001)  
	EEulerRotationOrder                                RotationOrderForFilter;                                     // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraint
/// Size: 0x0190 (400 bytes) (0x000130 - 0x000190) align 16 MaxSize: 0x0190
struct FRigUnit_ParentConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x013C   (0x0001)  
	FTransformFilter                                   Filter;                                                     // 0x013D   (0x0009)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0146   (0x0002)  MISSED
	TArray<FConstraintParent>                          Parents;                                                    // 0x0148   (0x0010)  
	FRigUnit_ParentConstraint_AdvancedSettings         AdvancedSettings;                                           // 0x0158   (0x0002)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x015A   (0x0002)  MISSED
	float                                              Weight;                                                     // 0x015C   (0x0004)  
	FCachedRigElement                                  ChildCache;                                                 // 0x0160   (0x0020)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0180   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PositionConstraint
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_PositionConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x013C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x013D   (0x0003)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0140   (0x0010)  
	float                                              Weight;                                                     // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0154   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
/// Size: 0x0190 (400 bytes) (0x000130 - 0x000190) align 16 MaxSize: 0x0190
struct FRigUnit_PositionConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x013C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x013D   (0x0003)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0140   (0x0010)  
	float                                              Weight;                                                     // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	FCachedRigElement                                  ChildCache;                                                 // 0x0158   (0x0020)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0178   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0188   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraint_AdvancedSettings
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 1 MaxSize: 0x0002
struct FRigUnit_RotationConstraint_AdvancedSettings
{ 
	EConstraintInterpType                              InterpolationType;                                          // 0x0000   (0x0001)  
	EEulerRotationOrder                                RotationOrderForFilter;                                     // 0x0001   (0x0001)  
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraint
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_RotationConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x013C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x013D   (0x0003)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0140   (0x0010)  
	FRigUnit_RotationConstraint_AdvancedSettings       AdvancedSettings;                                           // 0x0150   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0152   (0x0002)  MISSED
	float                                              Weight;                                                     // 0x0154   (0x0004)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0158   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
/// Size: 0x0190 (400 bytes) (0x000130 - 0x000190) align 16 MaxSize: 0x0190
struct FRigUnit_RotationConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x013C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x013D   (0x0003)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0140   (0x0010)  
	FRigUnit_RotationConstraint_AdvancedSettings       AdvancedSettings;                                           // 0x0150   (0x0002)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0152   (0x0002)  MISSED
	float                                              Weight;                                                     // 0x0154   (0x0004)  
	FCachedRigElement                                  ChildCache;                                                 // 0x0158   (0x0020)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0178   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0188   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ScaleConstraint
/// Size: 0x0160 (352 bytes) (0x000130 - 0x000160) align 16 MaxSize: 0x0160
struct FRigUnit_ScaleConstraint : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x013C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x013D   (0x0003)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0140   (0x0010)  
	float                                              Weight;                                                     // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x0154   (0x000C)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
/// Size: 0x0190 (400 bytes) (0x000130 - 0x000190) align 16 MaxSize: 0x0190
struct FRigUnit_ScaleConstraintLocalSpaceOffset : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     Child;                                                      // 0x0130   (0x000C)  
	bool                                               bMaintainOffset;                                            // 0x013C   (0x0001)  
	FFilterOptionPerAxis                               Filter;                                                     // 0x013D   (0x0003)  
	TArray<FConstraintParent>                          Parents;                                                    // 0x0140   (0x0010)  
	float                                              Weight;                                                     // 0x0150   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0154   (0x0004)  MISSED
	FCachedRigElement                                  ChildCache;                                                 // 0x0158   (0x0020)  
	TArray<FCachedRigElement>                          ParentCaches;                                               // 0x0178   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0188   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_TwistBones_WorkData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_TwistBones_WorkData
{ 
	TArray<FCachedRigElement>                          CachedItems;                                                // 0x0000   (0x0010)  
	TArray<float>                                      ItemRatios;                                                 // 0x0010   (0x0010)  
	TArray<FTransform>                                 ItemTransforms;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBones
/// Size: 0x01B0 (432 bytes) (0x000130 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              StartBone;                                                  // 0x0130   (0x0008)  
	FName                                              EndBone;                                                    // 0x0138   (0x0008)  
	FVector                                            TwistAxis;                                                  // 0x0140   (0x0018)  
	FVector                                            PoleAxis;                                                   // 0x0158   (0x0018)  
	ERigVMAnimEasingType                               TwistEaseType;                                              // 0x0170   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0171   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0174   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0178   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0179   (0x0007)  MISSED
	FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x0180   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwistBonesPerItem
/// Size: 0x01B0 (432 bytes) (0x000130 - 0x0001B0) align 16 MaxSize: 0x01B0
struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKeyCollection                           Items;                                                      // 0x0130   (0x0010)  
	FVector                                            TwistAxis;                                                  // 0x0140   (0x0018)  
	FVector                                            PoleAxis;                                                   // 0x0158   (0x0018)  
	ERigVMAnimEasingType                               TwistEaseType;                                              // 0x0170   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0171   (0x0003)  MISSED
	float                                              Weight;                                                     // 0x0174   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0178   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0179   (0x0007)  MISSED
	FRigUnit_TwistBones_WorkData                       WorkData;                                                   // 0x0180   (0x0030)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FRigUnit_TwoBoneIKSimple_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         WorldOffset;                                                // 0x0010   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple
/// Size: 0x0320 (800 bytes) (0x000130 - 0x000320) align 16 MaxSize: 0x0320
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
{ 
	FName                                              BoneA;                                                      // 0x0130   (0x0008)  
	FName                                              BoneB;                                                      // 0x0138   (0x0008)  
	FName                                              EffectorBone;                                               // 0x0140   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0148   (0x0008)  MISSED
	FTransform                                         Effector;                                                   // 0x0150   (0x0060)  
	FVector                                            PrimaryAxis;                                                // 0x01B0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x01C8   (0x0018)  
	float                                              SecondaryAxisWeight;                                        // 0x01E0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01E4   (0x0004)  MISSED
	FVector                                            PoleVector;                                                 // 0x01E8   (0x0018)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x0200   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0201   (0x0003)  MISSED
	FName                                              PoleVectorSpace;                                            // 0x0204   (0x0008)  
	bool                                               bEnableStretch;                                             // 0x020C   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x020D   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0210   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0214   (0x0004)  
	float                                              Weight;                                                     // 0x0218   (0x0004)  
	float                                              BoneALength;                                                // 0x021C   (0x0004)  
	float                                              BoneBLength;                                                // 0x0220   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0224   (0x0001)  
	unsigned char                                      UnknownData04_6[0xB];                                       // 0x0225   (0x000B)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x0230   (0x0070)  
	FCachedRigElement                                  CachedBoneAIndex;                                           // 0x02A0   (0x0020)  
	FCachedRigElement                                  CachedBoneBIndex;                                           // 0x02C0   (0x0020)  
	FCachedRigElement                                  CachedEffectorBoneIndex;                                    // 0x02E0   (0x0020)  
	FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x0300   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
/// Size: 0x0330 (816 bytes) (0x000130 - 0x000330) align 16 MaxSize: 0x0330
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable
{ 
	FRigElementKey                                     ItemA;                                                      // 0x0130   (0x000C)  
	FRigElementKey                                     ItemB;                                                      // 0x013C   (0x000C)  
	FRigElementKey                                     EffectorItem;                                               // 0x0148   (0x000C)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x0154   (0x000C)  MISSED
	FTransform                                         Effector;                                                   // 0x0160   (0x0060)  
	FVector                                            PrimaryAxis;                                                // 0x01C0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x01D8   (0x0018)  
	float                                              SecondaryAxisWeight;                                        // 0x01F0   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x01F4   (0x0004)  MISSED
	FVector                                            PoleVector;                                                 // 0x01F8   (0x0018)  
	EControlRigVectorKind                              PoleVectorKind;                                             // 0x0210   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0211   (0x0003)  MISSED
	FRigElementKey                                     PoleVectorSpace;                                            // 0x0214   (0x000C)  
	bool                                               bEnableStretch;                                             // 0x0220   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0221   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0224   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0228   (0x0004)  
	float                                              Weight;                                                     // 0x022C   (0x0004)  
	float                                              ItemALength;                                                // 0x0230   (0x0004)  
	float                                              ItemBLength;                                                // 0x0234   (0x0004)  
	bool                                               bPropagateToChildren;                                       // 0x0238   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0239   (0x0007)  MISSED
	FRigUnit_TwoBoneIKSimple_DebugSettings             DebugSettings;                                              // 0x0240   (0x0070)  
	FCachedRigElement                                  CachedItemAIndex;                                           // 0x02B0   (0x0020)  
	FCachedRigElement                                  CachedItemBIndex;                                           // 0x02D0   (0x0020)  
	FCachedRigElement                                  CachedEffectorItemIndex;                                    // 0x02F0   (0x0020)  
	FCachedRigElement                                  CachedPoleVectorSpaceIndex;                                 // 0x0310   (0x0020)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
/// Size: 0x0080 (128 bytes) (0x000008 - 0x000080) align 8 MaxSize: 0x0080
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
{ 
	FVector                                            Root;                                                       // 0x0008   (0x0018)  
	FVector                                            PoleVector;                                                 // 0x0020   (0x0018)  
	FVector                                            Effector;                                                   // 0x0038   (0x0018)  
	bool                                               bEnableStretch;                                             // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0054   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x0058   (0x0004)  
	float                                              BoneALength;                                                // 0x005C   (0x0004)  
	float                                              BoneBLength;                                                // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0064   (0x0004)  MISSED
	FVector                                            Elbow;                                                      // 0x0068   (0x0018)  
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
/// Size: 0x01A0 (416 bytes) (0x000008 - 0x0001A0) align 16 MaxSize: 0x01A0
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FTransform                                         Root;                                                       // 0x0010   (0x0060)  
	FVector                                            PoleVector;                                                 // 0x0070   (0x0018)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0088   (0x0008)  MISSED
	FTransform                                         Effector;                                                   // 0x0090   (0x0060)  
	FVector                                            PrimaryAxis;                                                // 0x00F0   (0x0018)  
	FVector                                            SecondaryAxis;                                              // 0x0108   (0x0018)  
	float                                              SecondaryAxisWeight;                                        // 0x0120   (0x0004)  
	bool                                               bEnableStretch;                                             // 0x0124   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0125   (0x0003)  MISSED
	float                                              StretchStartRatio;                                          // 0x0128   (0x0004)  
	float                                              StretchMaximumRatio;                                        // 0x012C   (0x0004)  
	float                                              BoneALength;                                                // 0x0130   (0x0004)  
	float                                              BoneBLength;                                                // 0x0134   (0x0004)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0138   (0x0008)  MISSED
	FTransform                                         Elbow;                                                      // 0x0140   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 16 MaxSize: 0x0080
struct FRigUnit_PointSimulation_DebugSettings
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              Scale;                                                      // 0x0004   (0x0004)  
	float                                              CollisionScale;                                             // 0x0008   (0x0004)  
	bool                                               bDrawPointsAsSpheres;                                       // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	FLinearColor                                       Color;                                                      // 0x0010   (0x0010)  
	FTransform                                         WorldOffset;                                                // 0x0020   (0x0060)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FRigUnit_PointSimulation_BoneTarget
{ 
	FName                                              bone;                                                       // 0x0000   (0x0008)  
	int32_t                                            TranslationPoint;                                           // 0x0008   (0x0004)  
	int32_t                                            PrimaryAimPoint;                                            // 0x000C   (0x0004)  
	int32_t                                            SecondaryAimPoint;                                          // 0x0010   (0x0004)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_WorkData
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FRigUnit_PointSimulation_WorkData
{ 
	FCRSimPointContainer                               Simulation;                                                 // 0x0000   (0x0078)  
	TArray<FCachedRigElement>                          BoneIndices;                                                // 0x0078   (0x0010)  
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation
/// Size: 0x0310 (784 bytes) (0x000100 - 0x000310) align 16 MaxSize: 0x0310
struct FRigUnit_PointSimulation : FRigVMFunction_SimBaseMutable
{ 
	TArray<FRigVMSimPoint>                             Points;                                                     // 0x0100   (0x0010)  
	TArray<FCRSimLinearSpring>                         Links;                                                      // 0x0110   (0x0010)  
	TArray<FCRSimPointForce>                           Forces;                                                     // 0x0120   (0x0010)  
	TArray<FCRSimSoftCollision>                        CollisionVolumes;                                           // 0x0130   (0x0010)  
	float                                              SimulatedStepsPerSecond;                                    // 0x0140   (0x0004)  
	ERigVMSimPointIntegrateType                        IntegratorType;                                             // 0x0144   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0145   (0x0003)  MISSED
	float                                              VerletBlend;                                                // 0x0148   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x014C   (0x0004)  MISSED
	TArray<FRigUnit_PointSimulation_BoneTarget>        BoneTargets;                                                // 0x0150   (0x0010)  
	bool                                               bLimitLocalPosition;                                        // 0x0160   (0x0001)  
	bool                                               bPropagateToChildren;                                       // 0x0161   (0x0001)  
	unsigned char                                      UnknownData02_6[0x6];                                       // 0x0162   (0x0006)  MISSED
	FVector                                            PrimaryAimAxis;                                             // 0x0168   (0x0018)  
	FVector                                            SecondaryAimAxis;                                           // 0x0180   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0198   (0x0008)  MISSED
	FRigUnit_PointSimulation_DebugSettings             DebugSettings;                                              // 0x01A0   (0x0080)  
	FRigVMFourPointBezier                              Bezier;                                                     // 0x0220   (0x0060)  
	FRigUnit_PointSimulation_WorkData                  WorkData;                                                   // 0x0280   (0x0088)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x0308   (0x0008)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SpringInterp
/// Size: 0x0030 (48 bytes) (0x000008 - 0x000030) align 8 MaxSize: 0x0030
struct FRigUnit_SpringInterp : FRigVMFunction_SimBase
{ 
	float                                              Current;                                                    // 0x0008   (0x0004)  
	float                                              Target;                                                     // 0x000C   (0x0004)  
	float                                              Stiffness;                                                  // 0x0010   (0x0004)  
	float                                              CriticalDamping;                                            // 0x0014   (0x0004)  
	float                                              Mass;                                                       // 0x0018   (0x0004)  
	float                                              Result;                                                     // 0x001C   (0x0004)  
	FFloatSpringState                                  SpringState;                                                // 0x0020   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpVector
/// Size: 0x0098 (152 bytes) (0x000008 - 0x000098) align 8 MaxSize: 0x0098
struct FRigUnit_SpringInterpVector : FRigVMFunction_SimBase
{ 
	FVector                                            Current;                                                    // 0x0008   (0x0018)  
	FVector                                            Target;                                                     // 0x0020   (0x0018)  
	float                                              Stiffness;                                                  // 0x0038   (0x0004)  
	float                                              CriticalDamping;                                            // 0x003C   (0x0004)  
	float                                              Mass;                                                       // 0x0040   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FVector                                            Result;                                                     // 0x0048   (0x0018)  
	FVectorSpringState                                 SpringState;                                                // 0x0060   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpV2
/// Size: 0x0040 (64 bytes) (0x000008 - 0x000040) align 8 MaxSize: 0x0040
struct FRigUnit_SpringInterpV2 : FRigVMFunction_SimBase
{ 
	float                                              Target;                                                     // 0x0008   (0x0004)  
	float                                              Strength;                                                   // 0x000C   (0x0004)  
	float                                              CriticalDamping;                                            // 0x0010   (0x0004)  
	float                                              Force;                                                      // 0x0014   (0x0004)  
	bool                                               bUseCurrentInput;                                           // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              Current;                                                    // 0x001C   (0x0004)  
	float                                              TargetVelocityAmount;                                       // 0x0020   (0x0004)  
	bool                                               bInitializeFromTarget;                                      // 0x0024   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0025   (0x0003)  MISSED
	float                                              Result;                                                     // 0x0028   (0x0004)  
	float                                              Velocity;                                                   // 0x002C   (0x0004)  
	float                                              SimulatedResult;                                            // 0x0030   (0x0004)  
	FFloatSpringState                                  SpringState;                                                // 0x0034   (0x000C)  
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpVectorV2
/// Size: 0x00E8 (232 bytes) (0x000008 - 0x0000E8) align 8 MaxSize: 0x00E8
struct FRigUnit_SpringInterpVectorV2 : FRigVMFunction_SimBase
{ 
	FVector                                            Target;                                                     // 0x0008   (0x0018)  
	float                                              Strength;                                                   // 0x0020   (0x0004)  
	float                                              CriticalDamping;                                            // 0x0024   (0x0004)  
	FVector                                            Force;                                                      // 0x0028   (0x0018)  
	bool                                               bUseCurrentInput;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	FVector                                            Current;                                                    // 0x0048   (0x0018)  
	float                                              TargetVelocityAmount;                                       // 0x0060   (0x0004)  
	bool                                               bInitializeFromTarget;                                      // 0x0064   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0065   (0x0003)  MISSED
	FVector                                            Result;                                                     // 0x0068   (0x0018)  
	FVector                                            Velocity;                                                   // 0x0080   (0x0018)  
	FVector                                            SimulatedResult;                                            // 0x0098   (0x0018)  
	FVectorSpringState                                 SpringState;                                                // 0x00B0   (0x0038)  
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpQuaternionV2
/// Size: 0x0130 (304 bytes) (0x000008 - 0x000130) align 16 MaxSize: 0x0130
struct FRigUnit_SpringInterpQuaternionV2 : FRigVMFunction_SimBase
{ 
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0008   (0x0008)  MISSED
	FQuat                                              Target;                                                     // 0x0010   (0x0020)  
	float                                              Strength;                                                   // 0x0030   (0x0004)  
	float                                              CriticalDamping;                                            // 0x0034   (0x0004)  
	FVector                                            Torque;                                                     // 0x0038   (0x0018)  
	bool                                               bUseCurrentInput;                                           // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0xF];                                       // 0x0051   (0x000F)  MISSED
	FQuat                                              Current;                                                    // 0x0060   (0x0020)  
	float                                              TargetVelocityAmount;                                       // 0x0080   (0x0004)  
	bool                                               bInitializeFromTarget;                                      // 0x0084   (0x0001)  
	unsigned char                                      UnknownData02_6[0xB];                                       // 0x0085   (0x000B)  MISSED
	FQuat                                              Result;                                                     // 0x0090   (0x0020)  
	FVector                                            AngularVelocity;                                            // 0x00B0   (0x0018)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x00C8   (0x0008)  MISSED
	FQuat                                              SimulatedResult;                                            // 0x00D0   (0x0020)  
	FQuaternionSpringState                             SpringState;                                                // 0x00F0   (0x0040)  
};

#pragma pack(pop)


static_assert(sizeof(FRigElementKey) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(URigHierarchy) == 0x0370); // 880 bytes (0x000028 - 0x000370)
static_assert(sizeof(UTransformableControlHandle) == 0x0090); // 144 bytes (0x000058 - 0x000090)
static_assert(sizeof(FRigHierarchySettings) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FRigControlElementCustomization) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigInfluenceEntry) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigInfluenceMap) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FRigInfluenceMapPerEvent) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UControlRig) == 0x03F8); // 1016 bytes (0x000180 - 0x0003F8)
static_assert(sizeof(UControlRigAnimInstance) == 0x0350); // 848 bytes (0x000348 - 0x000350)
static_assert(sizeof(UControlRigBlueprintGeneratedClass) == 0x03A0); // 928 bytes (0x0003A0 - 0x0003A0)
static_assert(sizeof(FControlRigComponentMappedElement) == 0x00D0); // 208 bytes (0x000000 - 0x0000D0)
static_assert(sizeof(UControlRigComponent) == 0x06D0); // 1744 bytes (0x000568 - 0x0006D0)
static_assert(sizeof(AControlRigControlActor) == 0x0348); // 840 bytes (0x000290 - 0x000348)
static_assert(sizeof(AControlRigShapeActor) == 0x02D8); // 728 bytes (0x000290 - 0x0002D8)
static_assert(sizeof(FControlRigShapeDefinition) == 0x00B0); // 176 bytes (0x000000 - 0x0000B0)
static_assert(sizeof(UControlRigShapeLibrary) == 0x0170); // 368 bytes (0x000028 - 0x000170)
static_assert(sizeof(FControlRigTestDataVariable) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FCachedRigElement) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigPoseElement) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FRigPose) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FControlRigTestDataFrame) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(UControlRigTestData) == 0x0150); // 336 bytes (0x000028 - 0x000150)
static_assert(sizeof(UControlRigValidator) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UControlRigValidationPass) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAdditiveControlRig) == 0x0408); // 1032 bytes (0x0003F8 - 0x000408)
static_assert(sizeof(UFKControlRig) == 0x0438); // 1080 bytes (0x0003F8 - 0x000438)
static_assert(sizeof(URigHierarchyController) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UControlRigLayerInstance) == 0x0350); // 848 bytes (0x000348 - 0x000350)
static_assert(sizeof(UControlRigObjectHolder) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UControlRigSequence) == 0x0288); // 648 bytes (0x000220 - 0x000288)
static_assert(sizeof(FChannelMapInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FEnumParameterNameAndCurve) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FIntegerParameterNameAndCurve) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FMovieSceneControlRigSpaceBaseKey) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMovieSceneControlRigSpaceChannel) == 0x0110); // 272 bytes (0x000050 - 0x000110)
static_assert(sizeof(FSpaceControlNameAndChannel) == 0x0118); // 280 bytes (0x000000 - 0x000118)
static_assert(sizeof(UMovieSceneControlRigParameterSection) == 0x03D0); // 976 bytes (0x000158 - 0x0003D0)
static_assert(sizeof(UMovieSceneControlRigParameterTrack) == 0x0100); // 256 bytes (0x000098 - 0x000100)
static_assert(sizeof(UControlRigSettings) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UControlRigEditorSettings) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(FRigControlValueStorage) == 0x0084); // 132 bytes (0x000000 - 0x000084)
static_assert(sizeof(FRigControlValue) == 0x0084); // 132 bytes (0x000000 - 0x000084)
static_assert(sizeof(FRigControlCopy) == 0x0230); // 560 bytes (0x000000 - 0x000230)
static_assert(sizeof(FControlRigControlPose) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UControlRigPoseAsset) == 0x0088); // 136 bytes (0x000028 - 0x000088)
static_assert(sizeof(UControlRigPoseMirrorSettings) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UControlRigPoseProjectSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UControlRigSnapSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UControlRigWorkflowOptions) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(UControlRigTransformWorkflowOptions) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UControlRigNumericalValidationPass) == 0x00C0); // 192 bytes (0x000028 - 0x0000C0)
static_assert(sizeof(FRigBaseElement) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FRigComputedTransform) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FRigLocalAndGlobalTransform) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FRigCurrentAndInitialTransform) == 0x01C0); // 448 bytes (0x000000 - 0x0001C0)
static_assert(sizeof(FRigTransformElement) == 0x02F0); // 752 bytes (0x0000F0 - 0x0002F0)
static_assert(sizeof(FRigMultiParentElement) == 0x03F0); // 1008 bytes (0x0002F0 - 0x0003F0)
static_assert(sizeof(FRigControlLimitEnabled) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FRigControlSettings) == 0x01B0); // 432 bytes (0x000000 - 0x0001B0)
static_assert(sizeof(FRigPreferredEulerAngles) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FRigControlElement) == 0x0960); // 2400 bytes (0x0003F0 - 0x000960)
static_assert(sizeof(FMovieSceneControlRigInstanceData) == 0x0148); // 328 bytes (0x000008 - 0x000148)
static_assert(sizeof(FRigTransformStackEntry) == 0x00F0); // 240 bytes (0x000000 - 0x0000F0)
static_assert(sizeof(FRigSingleParentElement) == 0x02F8); // 760 bytes (0x0002F0 - 0x0002F8)
static_assert(sizeof(FRigElementWeight) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigElementParentConstraint) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigBoneElement) == 0x0300); // 768 bytes (0x0002F8 - 0x000300)
static_assert(sizeof(FRigNullElement) == 0x03F0); // 1008 bytes (0x0003F0 - 0x0003F0)
static_assert(sizeof(FRigCurveElement) == 0x00F8); // 248 bytes (0x0000F0 - 0x0000F8)
static_assert(sizeof(FRigRigidBodySettings) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FRigRigidBodyElement) == 0x0300); // 768 bytes (0x0002F8 - 0x000300)
static_assert(sizeof(FRigReferenceElement) == 0x0310); // 784 bytes (0x0002F8 - 0x000310)
static_assert(sizeof(FRigHierarchyCopyPasteContentPerElement) == 0x0200); // 512 bytes (0x000000 - 0x000200)
static_assert(sizeof(FRigHierarchyCopyPasteContent) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FControlRigExecuteContext) == 0x0120); // 288 bytes (0x0000F0 - 0x000120)
static_assert(sizeof(FRigUnit) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_HighlevelBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnitMutable) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FRigUnit_HighlevelBaseMutable) == 0x0130); // 304 bytes (0x000130 - 0x000130)
static_assert(sizeof(FStructReference) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FControlRigIOSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FControlRigAnimNodeEventName) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FAnimNode_ControlRigBase) == 0x0270); // 624 bytes (0x000058 - 0x000270)
static_assert(sizeof(FAnimNode_ControlRig) == 0x0470); // 1136 bytes (0x000270 - 0x000470)
static_assert(sizeof(FAnimNode_ControlRig_ExternalSource) == 0x0278); // 632 bytes (0x000270 - 0x000278)
static_assert(sizeof(FControlRigAnimInstanceProxy) == 0x0920); // 2336 bytes (0x000880 - 0x000920)
static_assert(sizeof(FControlRigComponentMappedComponent) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FControlRigComponentMappedBone) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FControlRigComponentMappedCurve) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FControlShapeActorCreationParam) == 0x01D0); // 464 bytes (0x000000 - 0x0001D0)
static_assert(sizeof(FControlRigValidationContext) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCRSimContainer) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FCRSimLinearSpring) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FCRSimPointConstraint) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FCRSimPointForce) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FCRSimSoftCollision) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FCRSimPointContainer) == 0x0078); // 120 bytes (0x000018 - 0x000078)
static_assert(sizeof(FConstraintNodeData) == 0x0140); // 320 bytes (0x000000 - 0x000140)
static_assert(sizeof(FAnimationHierarchy) == 0x0088); // 136 bytes (0x000078 - 0x000088)
static_assert(sizeof(FRigElement) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigBone) == 0x0170); // 368 bytes (0x000018 - 0x000170)
static_assert(sizeof(FRigBoneHierarchy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigControl) == 0x0360); // 864 bytes (0x000018 - 0x000360)
static_assert(sizeof(FRigControlHierarchy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigCurve) == 0x0020); // 32 bytes (0x000018 - 0x000020)
static_assert(sizeof(FRigCurveContainer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigSpace) == 0x00F0); // 240 bytes (0x000018 - 0x0000F0)
static_assert(sizeof(FRigSpaceHierarchy) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigHierarchyContainer) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigHierarchyRef) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FRigControlModifiedContext) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigElementKeyCollection) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigEventContext) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigBaseMetadata) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigBoolMetadata) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FRigBoolArrayMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRigFloatMetadata) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FRigFloatArrayMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRigInt32Metadata) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FRigInt32ArrayMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRigNameMetadata) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FRigNameArrayMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRigVectorMetadata) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FRigVectorArrayMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRigRotatorMetadata) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FRigRotatorArrayMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRigQuatMetadata) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(FRigQuatArrayMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRigTransformMetadata) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(FRigTransformArrayMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRigLinearColorMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRigLinearColorArrayMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRigElementKeyMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRigElementKeyArrayMetadata) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FRigInfluenceEntryModifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FAnimNode_ControlRigInputPose) == 0x0030); // 48 bytes (0x000010 - 0x000030)
static_assert(sizeof(FControlRigLayerInstanceProxy) == 0x0920); // 2336 bytes (0x000880 - 0x000920)
static_assert(sizeof(FControlRigSequenceObjectReference) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FControlRigSequenceObjectReferences) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FControlRigSequenceObjectReferenceMap) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMovieSceneControlRigParameterTemplate) == 0x00C0); // 192 bytes (0x000080 - 0x0000C0)
static_assert(sizeof(FControlRigSettingsPerPinBool) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigDispatchFactory) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigDispatch_AnimAttributeBase) == 0x0048); // 72 bytes (0x000018 - 0x000048)
static_assert(sizeof(FRigDispatch_GetAnimAttribute) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(FRigDispatch_SetAnimAttribute) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(FRigUnit_SphereTraceWorld) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FRigUnit_SphereTraceByTraceChannel) == 0x0078); // 120 bytes (0x000008 - 0x000078)
static_assert(sizeof(FRigUnit_SphereTraceByObjectTypes) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_Control) == 0x0180); // 384 bytes (0x000008 - 0x000180)
static_assert(sizeof(FRigUnit_Control_StaticMesh) == 0x01E0); // 480 bytes (0x000180 - 0x0001E0)
static_assert(sizeof(FRigUnit_DebugBezier) == 0x0200); // 512 bytes (0x000100 - 0x000200)
static_assert(sizeof(FRigUnit_DebugBezierItemSpace) == 0x0200); // 512 bytes (0x000100 - 0x000200)
static_assert(sizeof(FRigUnit_DebugHierarchy) == 0x01C0); // 448 bytes (0x000008 - 0x0001C0)
static_assert(sizeof(FRigUnit_DebugPose) == 0x0230); // 560 bytes (0x000008 - 0x000230)
static_assert(sizeof(FRigUnit_StartProfilingTimer) == 0x0100); // 256 bytes (0x000100 - 0x000100)
static_assert(sizeof(FRigUnit_EndProfilingTimer) == 0x0130); // 304 bytes (0x000100 - 0x000130)
static_assert(sizeof(FRigUnit_ConvertTransform) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FRigUnit_ConvertEulerTransform) == 0x00B0); // 176 bytes (0x000008 - 0x0000B0)
static_assert(sizeof(FRigUnit_ConvertRotation) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_ConvertVectorRotation) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(FRigUnit_ConvertQuaternion) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_ConvertVectorToRotation) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_ConvertVectorToQuaternion) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_ConvertRotationToVector) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_ConvertQuaternionToVector) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_ToSwingAndTwist) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_BinaryFloatOp) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_Multiply_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Add_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Subtract_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Divide_FloatFloat) == 0x0018); // 24 bytes (0x000018 - 0x000018)
static_assert(sizeof(FRigUnit_Clamp_Float) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_MapRange_Float) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_BinaryQuaternionOp) == 0x0070); // 112 bytes (0x000008 - 0x000070)
static_assert(sizeof(FRigUnit_MultiplyQuaternion) == 0x0070); // 112 bytes (0x000070 - 0x000070)
static_assert(sizeof(FRigUnit_UnaryQuaternionOp) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_InverseQuaterion) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigUnit_QuaternionToAxisAndAngle) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_QuaternionFromAxisAndAngle) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_QuaternionToAngle) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_BinaryTransformOp) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FRigUnit_MultiplyTransform) == 0x0130); // 304 bytes (0x000130 - 0x000130)
static_assert(sizeof(FRigUnit_GetRelativeTransform) == 0x0130); // 304 bytes (0x000130 - 0x000130)
static_assert(sizeof(FRigUnit_BinaryVectorOp) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_Multiply_VectorVector) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigUnit_Add_VectorVector) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigUnit_Subtract_VectorVector) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigUnit_Divide_VectorVector) == 0x0050); // 80 bytes (0x000050 - 0x000050)
static_assert(sizeof(FRigUnit_Distance_VectorVector) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_MathVectorBezierFourPoint) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_MathVectorMakeBezierFourPoint) == 0x0068); // 104 bytes (0x000008 - 0x000068)
static_assert(sizeof(FAimTarget) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigUnit_AimConstraint_WorkData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_AimConstraint) == 0x01A0); // 416 bytes (0x000130 - 0x0001A0)
static_assert(sizeof(FRigUnit_ApplyFK) == 0x0220); // 544 bytes (0x000130 - 0x000220)
static_assert(sizeof(FBlendTarget) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FRigUnit_BlendTransform) == 0x00E0); // 224 bytes (0x000008 - 0x0000E0)
static_assert(sizeof(FRigUnit_GetJointTransform) == 0x0210); // 528 bytes (0x000130 - 0x000210)
static_assert(sizeof(FRigUnit_TwoBoneIKFK) == 0x0440); // 1088 bytes (0x000130 - 0x000440)
static_assert(sizeof(FRigUnit_DrawContainerGetInstruction) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_DrawContainerSetColor) == 0x0150); // 336 bytes (0x000130 - 0x000150)
static_assert(sizeof(FRigUnit_DrawContainerSetThickness) == 0x0140); // 320 bytes (0x000130 - 0x000140)
static_assert(sizeof(FRigUnit_DrawContainerSetTransform) == 0x01A0); // 416 bytes (0x000130 - 0x0001A0)
static_assert(sizeof(FRigUnit_BeginExecution) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FRigUnit_CollectionBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_CollectionBaseMutable) == 0x0130); // 304 bytes (0x000130 - 0x000130)
static_assert(sizeof(FRigUnit_CollectionChain) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionChainArray) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionNameSearch) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionNameSearchArray) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionChildren) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionChildrenArray) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionGetAll) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_CollectionReplaceItems) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_CollectionReplaceItemsArray) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_CollectionItems) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_CollectionGetItems) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionGetParentIndices) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionGetParentIndicesItemArray) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionUnion) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_CollectionIntersection) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionDifference) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_CollectionReverse) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionCount) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_CollectionItemAtIndex) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_CollectionLoop) == 0x0280); // 640 bytes (0x000130 - 0x000280)
static_assert(sizeof(FRigUnit_CollectionAddItem) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_DynamicHierarchyBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_DynamicHierarchyBaseMutable) == 0x0130); // 304 bytes (0x000130 - 0x000130)
static_assert(sizeof(FRigUnit_AddParent) == 0x0150); // 336 bytes (0x000130 - 0x000150)
static_assert(sizeof(FRigUnit_SetDefaultParent) == 0x0150); // 336 bytes (0x000130 - 0x000150)
static_assert(sizeof(FRigUnit_SwitchParent) == 0x0150); // 336 bytes (0x000130 - 0x000150)
static_assert(sizeof(FRigUnit_HierarchyGetParentWeights) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_HierarchyGetParentWeightsArray) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_HierarchySetParentWeights) == 0x0150); // 336 bytes (0x000130 - 0x000150)
static_assert(sizeof(FRigUnit_HierarchyReset) == 0x0130); // 304 bytes (0x000130 - 0x000130)
static_assert(sizeof(FRigUnit_HierarchyImportFromSkeleton) == 0x0150); // 336 bytes (0x000130 - 0x000150)
static_assert(sizeof(FRigUnit_HierarchyRemoveElement) == 0x0140); // 320 bytes (0x000130 - 0x000140)
static_assert(sizeof(FRigUnit_HierarchyAddElement) == 0x0150); // 336 bytes (0x000130 - 0x000150)
static_assert(sizeof(FRigUnit_HierarchyAddBone) == 0x01C0); // 448 bytes (0x000150 - 0x0001C0)
static_assert(sizeof(FRigUnit_HierarchyAddNull) == 0x01C0); // 448 bytes (0x000150 - 0x0001C0)
static_assert(sizeof(FRigUnit_HierarchyAddControl_Settings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_HierarchyAddControl_ShapeSettings) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FRigUnit_HierarchyAddControl_ProxySettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_HierarchyAddControlFloat_LimitSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_HierarchyAddControlFloat_Settings) == 0x00D0); // 208 bytes (0x000010 - 0x0000D0)
static_assert(sizeof(FRigUnit_HierarchyAddControlElement) == 0x01B0); // 432 bytes (0x000150 - 0x0001B0)
static_assert(sizeof(FRigUnit_HierarchyAddControlFloat) == 0x0290); // 656 bytes (0x0001B0 - 0x000290)
static_assert(sizeof(FRigUnit_HierarchyAddControlInteger_LimitSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_HierarchyAddControlInteger_Settings) == 0x00D0); // 208 bytes (0x000010 - 0x0000D0)
static_assert(sizeof(FRigUnit_HierarchyAddControlInteger) == 0x0290); // 656 bytes (0x0001B0 - 0x000290)
static_assert(sizeof(FRigUnit_HierarchyAddControlVector2D_LimitSettings) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigUnit_HierarchyAddControlVector2D_Settings) == 0x0100); // 256 bytes (0x000010 - 0x000100)
static_assert(sizeof(FRigUnit_HierarchyAddControlVector2D) == 0x02C0); // 704 bytes (0x0001B0 - 0x0002C0)
static_assert(sizeof(FRigUnit_HierarchyAddControlVector_LimitSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_HierarchyAddControlVector_Settings) == 0x0110); // 272 bytes (0x000010 - 0x000110)
static_assert(sizeof(FRigUnit_HierarchyAddControlVector) == 0x02E0); // 736 bytes (0x0001B0 - 0x0002E0)
static_assert(sizeof(FRigUnit_HierarchyAddControlRotator_LimitSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_HierarchyAddControlRotator_Settings) == 0x0100); // 256 bytes (0x000010 - 0x000100)
static_assert(sizeof(FRigUnit_HierarchyAddControlRotator) == 0x02D0); // 720 bytes (0x0001B0 - 0x0002D0)
static_assert(sizeof(FRigUnit_HierarchyAddControlTransform_Settings) == 0x00C0); // 192 bytes (0x000010 - 0x0000C0)
static_assert(sizeof(FRigUnit_HierarchyAddControlTransform) == 0x02D0); // 720 bytes (0x0001B0 - 0x0002D0)
static_assert(sizeof(FRigUnit_HierarchyAddAnimationChannelBool) == 0x0160); // 352 bytes (0x000150 - 0x000160)
static_assert(sizeof(FRigUnit_HierarchyAddAnimationChannelFloat) == 0x0160); // 352 bytes (0x000150 - 0x000160)
static_assert(sizeof(FRigUnit_HierarchyAddAnimationChannelInteger) == 0x0160); // 352 bytes (0x000150 - 0x000160)
static_assert(sizeof(FRigUnit_HierarchyAddAnimationChannelVector2D) == 0x0180); // 384 bytes (0x000150 - 0x000180)
static_assert(sizeof(FRigUnit_HierarchyAddAnimationChannelVector) == 0x01A0); // 416 bytes (0x000150 - 0x0001A0)
static_assert(sizeof(FRigUnit_HierarchyAddAnimationChannelRotator) == 0x01A0); // 416 bytes (0x000150 - 0x0001A0)
static_assert(sizeof(FRigUnit_HierarchyGetShapeSettings) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_HierarchySetShapeSettings) == 0x01C0); // 448 bytes (0x000130 - 0x0001C0)
static_assert(sizeof(FRigUnit_HierarchyBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_HierarchyBaseMutable) == 0x0130); // 304 bytes (0x000130 - 0x000130)
static_assert(sizeof(FRigUnit_HierarchyGetParent) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_HierarchyGetParents) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_HierarchyGetParentsItemArray) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_HierarchyGetChildren) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_HierarchyGetSiblings) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_HierarchyGetSiblingsItemArray) == 0x0058); // 88 bytes (0x000008 - 0x000058)
static_assert(sizeof(FRigUnit_HierarchyGetPose) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_HierarchyGetPoseItemArray) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_HierarchySetPose) == 0x01C0); // 448 bytes (0x000130 - 0x0001C0)
static_assert(sizeof(FRigUnit_HierarchySetPoseItemArray) == 0x01C0); // 448 bytes (0x000130 - 0x0001C0)
static_assert(sizeof(FRigUnit_PoseIsEmpty) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_PoseGetItems) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_PoseGetItemsItemArray) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_PoseGetDelta) == 0x0128); // 296 bytes (0x000008 - 0x000128)
static_assert(sizeof(FRigUnit_PoseGetTransform) == 0x0100); // 256 bytes (0x000008 - 0x000100)
static_assert(sizeof(FRigUnit_PoseGetTransformArray) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_PoseGetCurve) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_PoseLoop) == 0x03B0); // 944 bytes (0x000130 - 0x0003B0)
static_assert(sizeof(FRigUnit_InteractionExecution) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FRigUnit_InverseExecution) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FRigUnit_IsInteracting) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_ItemBase) == 0x0008); // 8 bytes (0x000008 - 0x000008)
static_assert(sizeof(FRigUnit_ItemBaseMutable) == 0x0130); // 304 bytes (0x000130 - 0x000130)
static_assert(sizeof(FRigUnit_ItemExists) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_ItemReplace) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_ItemEquals) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_ItemNotEquals) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_ItemTypeEquals) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_ItemTypeNotEquals) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_ItemToName) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_PrepareForExecution) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(sizeof(FRigUnit_SequenceExecution) == 0x05B0); // 1456 bytes (0x000008 - 0x0005B0)
static_assert(sizeof(FRigUnit_SequenceAggregate) == 0x0370); // 880 bytes (0x000008 - 0x000370)
static_assert(sizeof(FRigUnit_AddBoneTransform) == 0x01D0); // 464 bytes (0x000130 - 0x0001D0)
static_assert(sizeof(FRigUnit_Item) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_ItemArray) == 0x0018); // 24 bytes (0x000008 - 0x000018)
static_assert(sizeof(FRigUnit_BoneName) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_SpaceName) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_ControlName) == 0x0010); // 16 bytes (0x000008 - 0x000010)
static_assert(sizeof(FRigUnit_GetAnimationChannelBase) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_GetBoolAnimationChannel) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FRigUnit_GetFloatAnimationChannel) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FRigUnit_GetIntAnimationChannel) == 0x0038); // 56 bytes (0x000030 - 0x000038)
static_assert(sizeof(FRigUnit_GetVector2DAnimationChannel) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(sizeof(FRigUnit_GetVectorAnimationChannel) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(FRigUnit_GetRotatorAnimationChannel) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(FRigUnit_GetTransformAnimationChannel) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(FRigUnit_SetAnimationChannelBase) == 0x0150); // 336 bytes (0x000030 - 0x000150)
static_assert(sizeof(FRigUnit_SetBoolAnimationChannel) == 0x0160); // 352 bytes (0x000150 - 0x000160)
static_assert(sizeof(FRigUnit_SetFloatAnimationChannel) == 0x0160); // 352 bytes (0x000150 - 0x000160)
static_assert(sizeof(FRigUnit_SetIntAnimationChannel) == 0x0160); // 352 bytes (0x000150 - 0x000160)
static_assert(sizeof(FRigUnit_SetVector2DAnimationChannel) == 0x0160); // 352 bytes (0x000150 - 0x000160)
static_assert(sizeof(FRigUnit_SetVectorAnimationChannel) == 0x0170); // 368 bytes (0x000150 - 0x000170)
static_assert(sizeof(FRigUnit_SetRotatorAnimationChannel) == 0x0170); // 368 bytes (0x000150 - 0x000170)
static_assert(sizeof(FRigUnit_SetTransformAnimationChannel) == 0x01B0); // 432 bytes (0x000150 - 0x0001B0)
static_assert(sizeof(FRigUnit_GetBoneTransform) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_GetControlInitialTransform) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_GetControlBool) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_GetControlFloat) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_GetControlInteger) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_GetControlVector2D) == 0x0060); // 96 bytes (0x000008 - 0x000060)
static_assert(sizeof(FRigUnit_GetControlVector) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_GetControlRotator) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_GetControlTransform) == 0x0160); // 352 bytes (0x000008 - 0x000160)
static_assert(sizeof(FRigUnit_GetCurveValue) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_GetInitialBoneTransform) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_GetRelativeBoneTransform) == 0x00C0); // 192 bytes (0x000008 - 0x0000C0)
static_assert(sizeof(FRigUnit_GetRelativeTransformForItem) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_GetSpaceTransform) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_GetTransform) == 0x00A0); // 160 bytes (0x000008 - 0x0000A0)
static_assert(sizeof(FRigUnit_GetTransformArray) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_GetTransformItemArray) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigDispatch_MetadataBase) == 0x0048); // 72 bytes (0x000018 - 0x000048)
static_assert(sizeof(FRigDispatch_GetMetadata) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(FRigDispatch_SetMetadata) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(FRigUnit_RemoveMetadata) == 0x0170); // 368 bytes (0x000130 - 0x000170)
static_assert(sizeof(FRigUnit_RemoveAllMetadata) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_HasMetadata) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_FindItemsWithMetadata) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_GetMetadataTags) == 0x0048); // 72 bytes (0x000008 - 0x000048)
static_assert(sizeof(FRigUnit_SetMetadataTag) == 0x0170); // 368 bytes (0x000130 - 0x000170)
static_assert(sizeof(FRigUnit_SetMetadataTagArray) == 0x0170); // 368 bytes (0x000130 - 0x000170)
static_assert(sizeof(FRigUnit_RemoveMetadataTag) == 0x0170); // 368 bytes (0x000130 - 0x000170)
static_assert(sizeof(FRigUnit_HasMetadataTag) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_HasMetadataTagArray) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_FindItemsWithMetadataTag) == 0x0020); // 32 bytes (0x000008 - 0x000020)
static_assert(sizeof(FRigUnit_FindItemsWithMetadataTagArray) == 0x0028); // 40 bytes (0x000008 - 0x000028)
static_assert(sizeof(FRigUnit_FilterItemsByMetadataTags) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_OffsetTransformForItem) == 0x01D0); // 464 bytes (0x000130 - 0x0001D0)
static_assert(sizeof(FRigUnit_ParentSwitchConstraint) == 0x02D0); // 720 bytes (0x000130 - 0x0002D0)
static_assert(sizeof(FRigUnit_ParentSwitchConstraintArray) == 0x02D0); // 720 bytes (0x000130 - 0x0002D0)
static_assert(sizeof(FRigUnit_ProjectTransformToNewParent) == 0x0100); // 256 bytes (0x000008 - 0x000100)
static_assert(sizeof(FRigUnit_PropagateTransform) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_SendEvent) == 0x0150); // 336 bytes (0x000130 - 0x000150)
static_assert(sizeof(FRigUnit_SetBoneInitialTransform) == 0x0230); // 560 bytes (0x000130 - 0x000230)
static_assert(sizeof(FRigUnit_SetBoneRotation) == 0x0190); // 400 bytes (0x000130 - 0x000190)
static_assert(sizeof(FRigUnit_SetBoneTransform) == 0x0230); // 560 bytes (0x000130 - 0x000230)
static_assert(sizeof(FRigUnit_SetBoneTranslation) == 0x0180); // 384 bytes (0x000130 - 0x000180)
static_assert(sizeof(FRigUnit_GetControlColor) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_SetControlColor) == 0x0170); // 368 bytes (0x000130 - 0x000170)
static_assert(sizeof(FRigUnit_GetControlDrivenList) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_SetControlDrivenList) == 0x0170); // 368 bytes (0x000130 - 0x000170)
static_assert(sizeof(FRigUnit_SetControlOffset) == 0x01D0); // 464 bytes (0x000130 - 0x0001D0)
static_assert(sizeof(FRigUnit_GetShapeTransform) == 0x0090); // 144 bytes (0x000008 - 0x000090)
static_assert(sizeof(FRigUnit_SetShapeTransform) == 0x01C0); // 448 bytes (0x000130 - 0x0001C0)
static_assert(sizeof(FRigUnit_SetControlBool) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_SetMultiControlBool_Entry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_SetMultiControlBool) == 0x0150); // 336 bytes (0x000130 - 0x000150)
static_assert(sizeof(FRigUnit_SetControlFloat) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_SetMultiControlFloat_Entry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_SetMultiControlFloat) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_SetControlInteger) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_SetMultiControlInteger_Entry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_SetMultiControlInteger) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_SetControlVector2D) == 0x0170); // 368 bytes (0x000130 - 0x000170)
static_assert(sizeof(FRigUnit_SetMultiControlVector2D_Entry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FRigUnit_SetMultiControlVector2D) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_SetControlVector) == 0x0180); // 384 bytes (0x000130 - 0x000180)
static_assert(sizeof(FRigUnit_SetControlRotator) == 0x0180); // 384 bytes (0x000130 - 0x000180)
static_assert(sizeof(FRigUnit_SetMultiControlRotator_Entry) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigUnit_SetMultiControlRotator) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_SetControlTransform) == 0x01D0); // 464 bytes (0x000130 - 0x0001D0)
static_assert(sizeof(FRigUnit_GetControlVisibility) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_SetControlVisibility) == 0x0170); // 368 bytes (0x000130 - 0x000170)
static_assert(sizeof(FRigUnit_SetCurveValue) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_SetRelativeBoneTransform) == 0x01F0); // 496 bytes (0x000130 - 0x0001F0)
static_assert(sizeof(FRigUnit_SetRelativeTransformForItem) == 0x0200); // 512 bytes (0x000130 - 0x000200)
static_assert(sizeof(FRigUnit_SetRelativeTranslationForItem) == 0x01B0); // 432 bytes (0x000130 - 0x0001B0)
static_assert(sizeof(FRigUnit_SetRelativeRotationForItem) == 0x01C0); // 448 bytes (0x000130 - 0x0001C0)
static_assert(sizeof(FRigUnit_SetSpaceInitialTransform) == 0x0230); // 560 bytes (0x000130 - 0x000230)
static_assert(sizeof(FRigUnit_SetSpaceTransform) == 0x01D0); // 464 bytes (0x000130 - 0x0001D0)
static_assert(sizeof(FRigUnit_SetTransform) == 0x01D0); // 464 bytes (0x000130 - 0x0001D0)
static_assert(sizeof(FRigUnit_SetTranslation) == 0x0180); // 384 bytes (0x000130 - 0x000180)
static_assert(sizeof(FRigUnit_SetRotation) == 0x0190); // 400 bytes (0x000130 - 0x000190)
static_assert(sizeof(FRigUnit_SetScale) == 0x0180); // 384 bytes (0x000130 - 0x000180)
static_assert(sizeof(FRigUnit_SetTransformArray) == 0x0170); // 368 bytes (0x000130 - 0x000170)
static_assert(sizeof(FRigUnit_SetTransformItemArray) == 0x0170); // 368 bytes (0x000130 - 0x000170)
static_assert(sizeof(FRigUnit_UnsetCurveValue) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_ToWorldSpace_Transform) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_ToRigSpace_Transform) == 0x00D0); // 208 bytes (0x000008 - 0x0000D0)
static_assert(sizeof(FRigUnit_ToWorldSpace_Location) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_ToRigSpace_Location) == 0x0038); // 56 bytes (0x000008 - 0x000038)
static_assert(sizeof(FRigUnit_ToWorldSpace_Rotation) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_ToRigSpace_Rotation) == 0x0050); // 80 bytes (0x000008 - 0x000050)
static_assert(sizeof(FRigUnit_BoneHarmonics_BoneTarget) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_Harmonics_TargetItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_BoneHarmonics_WorkData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigUnit_BoneHarmonics) == 0x01F0); // 496 bytes (0x000130 - 0x0001F0)
static_assert(sizeof(FRigUnit_ItemHarmonics) == 0x01F0); // 496 bytes (0x000130 - 0x0001F0)
static_assert(sizeof(FRigUnit_ChainHarmonics_Reach) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRigUnit_ChainHarmonics_Wave) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FRigUnit_ChainHarmonics_Pendulum) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FRigUnit_ChainHarmonics_WorkData) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRigUnit_ChainHarmonics) == 0x0400); // 1024 bytes (0x000130 - 0x000400)
static_assert(sizeof(FRigUnit_ChainHarmonicsPerItem) == 0x0400); // 1024 bytes (0x000130 - 0x000400)
static_assert(sizeof(FRigUnit_AimBone_Target) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRigUnit_AimItem_Target) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRigUnit_AimBone_DebugSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FRigUnit_AimBoneMath) == 0x0230); // 560 bytes (0x000008 - 0x000230)
static_assert(sizeof(FRigUnit_AimBone) == 0x02B0); // 688 bytes (0x000130 - 0x0002B0)
static_assert(sizeof(FRigUnit_AimItem) == 0x02C0); // 704 bytes (0x000130 - 0x0002C0)
static_assert(sizeof(FRigUnit_AimConstraint_WorldUp) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FRigUnit_AimConstraint_AdvancedSettings) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FConstraintParent) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_AimConstraintLocalSpaceOffset) == 0x0290); // 656 bytes (0x000130 - 0x000290)
static_assert(sizeof(FRigUnit_CCDIK_RotationLimit) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FRigUnit_CCDIK_RotationLimitPerItem) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_CCDIK_WorkData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRigUnit_CCDIK) == 0x0230); // 560 bytes (0x000130 - 0x000230)
static_assert(sizeof(FRigUnit_CCDIKPerItem) == 0x0230); // 560 bytes (0x000130 - 0x000230)
static_assert(sizeof(FRigUnit_CCDIKItemArray) == 0x0230); // 560 bytes (0x000130 - 0x000230)
static_assert(sizeof(FRigUnit_DistributeRotation_Rotation) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigUnit_DistributeRotation_WorkData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FRigUnit_DistributeRotation) == 0x01B0); // 432 bytes (0x000130 - 0x0001B0)
static_assert(sizeof(FRigUnit_DistributeRotationForCollection) == 0x01B0); // 432 bytes (0x000130 - 0x0001B0)
static_assert(sizeof(FRigUnit_DistributeRotationForItemArray) == 0x01B0); // 432 bytes (0x000130 - 0x0001B0)
static_assert(sizeof(FRigUnit_FABRIK_WorkData) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FRigUnit_FABRIK) == 0x0200); // 512 bytes (0x000130 - 0x000200)
static_assert(sizeof(FRigUnit_FABRIKPerItem) == 0x0200); // 512 bytes (0x000130 - 0x000200)
static_assert(sizeof(FRigUnit_FABRIKItemArray) == 0x0200); // 512 bytes (0x000130 - 0x000200)
static_assert(sizeof(FRigUnit_FitChainToCurve_Rotation) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigUnit_FitChainToCurve_DebugSettings) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FRigUnit_FitChainToCurve_WorkData) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FRigUnit_FitChainToCurve) == 0x0350); // 848 bytes (0x000130 - 0x000350)
static_assert(sizeof(FRigUnit_FitChainToCurvePerItem) == 0x0350); // 848 bytes (0x000130 - 0x000350)
static_assert(sizeof(FRigUnit_FitChainToCurveItemArray) == 0x0350); // 848 bytes (0x000130 - 0x000350)
static_assert(sizeof(FRigUnit_ModifyBoneTransforms_PerBone) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FRigUnit_ModifyTransforms_WorkData) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_ModifyBoneTransforms_WorkData) == 0x0010); // 16 bytes (0x000010 - 0x000010)
static_assert(sizeof(FRigUnit_ModifyBoneTransforms) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_ModifyTransforms_PerItem) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FRigUnit_ModifyTransforms) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_MultiFABRIK_WorkData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FRigUnit_MultiFABRIK_EndEffector) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FRigUnit_MultiFABRIK) == 0x01D0); // 464 bytes (0x000130 - 0x0001D0)
static_assert(sizeof(FRigUnit_SlideChain_WorkData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FRigUnit_SlideChain) == 0x0190); // 400 bytes (0x000130 - 0x000190)
static_assert(sizeof(FRigUnit_SlideChainPerItem) == 0x0190); // 400 bytes (0x000130 - 0x000190)
static_assert(sizeof(FRigUnit_SlideChainItemArray) == 0x0190); // 400 bytes (0x000130 - 0x000190)
static_assert(sizeof(FRegionScaleFactors) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSphericalRegion) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FSphericalPoseReaderDebugSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FRigUnit_SphericalPoseReader) == 0x02D0); // 720 bytes (0x000130 - 0x0002D0)
static_assert(sizeof(FRigUnit_SpringIK_DebugSettings) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FRigUnit_SpringIK_WorkData) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FRigUnit_SpringIK) == 0x0300); // 768 bytes (0x000130 - 0x000300)
static_assert(sizeof(FConstraintTarget) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FRigUnit_TransformConstraint_WorkData) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FRigUnit_TransformConstraint) == 0x0220); // 544 bytes (0x000130 - 0x000220)
static_assert(sizeof(FRigUnit_TransformConstraintPerItem) == 0x0230); // 560 bytes (0x000130 - 0x000230)
static_assert(sizeof(FRigUnit_ParentConstraint_AdvancedSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FRigUnit_ParentConstraint) == 0x0190); // 400 bytes (0x000130 - 0x000190)
static_assert(sizeof(FRigUnit_PositionConstraint) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_PositionConstraintLocalSpaceOffset) == 0x0190); // 400 bytes (0x000130 - 0x000190)
static_assert(sizeof(FRigUnit_RotationConstraint_AdvancedSettings) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FRigUnit_RotationConstraint) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_RotationConstraintLocalSpaceOffset) == 0x0190); // 400 bytes (0x000130 - 0x000190)
static_assert(sizeof(FRigUnit_ScaleConstraint) == 0x0160); // 352 bytes (0x000130 - 0x000160)
static_assert(sizeof(FRigUnit_ScaleConstraintLocalSpaceOffset) == 0x0190); // 400 bytes (0x000130 - 0x000190)
static_assert(sizeof(FRigUnit_TwistBones_WorkData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FRigUnit_TwistBones) == 0x01B0); // 432 bytes (0x000130 - 0x0001B0)
static_assert(sizeof(FRigUnit_TwistBonesPerItem) == 0x01B0); // 432 bytes (0x000130 - 0x0001B0)
static_assert(sizeof(FRigUnit_TwoBoneIKSimple_DebugSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FRigUnit_TwoBoneIKSimple) == 0x0320); // 800 bytes (0x000130 - 0x000320)
static_assert(sizeof(FRigUnit_TwoBoneIKSimplePerItem) == 0x0330); // 816 bytes (0x000130 - 0x000330)
static_assert(sizeof(FRigUnit_TwoBoneIKSimpleVectors) == 0x0080); // 128 bytes (0x000008 - 0x000080)
static_assert(sizeof(FRigUnit_TwoBoneIKSimpleTransforms) == 0x01A0); // 416 bytes (0x000008 - 0x0001A0)
static_assert(sizeof(FRigUnit_PointSimulation_DebugSettings) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(FRigUnit_PointSimulation_BoneTarget) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FRigUnit_PointSimulation_WorkData) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FRigUnit_PointSimulation) == 0x0310); // 784 bytes (0x000100 - 0x000310)
static_assert(sizeof(FRigUnit_SpringInterp) == 0x0030); // 48 bytes (0x000008 - 0x000030)
static_assert(sizeof(FRigUnit_SpringInterpVector) == 0x0098); // 152 bytes (0x000008 - 0x000098)
static_assert(sizeof(FRigUnit_SpringInterpV2) == 0x0040); // 64 bytes (0x000008 - 0x000040)
static_assert(sizeof(FRigUnit_SpringInterpVectorV2) == 0x00E8); // 232 bytes (0x000008 - 0x0000E8)
static_assert(sizeof(FRigUnit_SpringInterpQuaternionV2) == 0x0130); // 304 bytes (0x000008 - 0x000130)
static_assert(offsetof(FRigElementKey, Type) == 0x0000);
static_assert(offsetof(FRigElementKey, Name) == 0x0004);
static_assert(offsetof(URigHierarchy, HierarchyController) == 0x01A0);
static_assert(offsetof(URigHierarchy, PreviousNameMap) == 0x0200);
static_assert(offsetof(URigHierarchy, HierarchyForCacheValidation) == 0x02D0);
static_assert(offsetof(UTransformableControlHandle, ControlRig) == 0x0058);
static_assert(offsetof(UTransformableControlHandle, ControlName) == 0x0088);
static_assert(offsetof(FRigControlElementCustomization, AvailableSpaces) == 0x0000);
static_assert(offsetof(FRigControlElementCustomization, RemovedSpaces) == 0x0010);
static_assert(offsetof(FRigInfluenceEntry, Source) == 0x0000);
static_assert(offsetof(FRigInfluenceEntry, AffectedList) == 0x0010);
static_assert(offsetof(FRigInfluenceMap, EventName) == 0x0000);
static_assert(offsetof(FRigInfluenceMap, Entries) == 0x0008);
static_assert(offsetof(FRigInfluenceMap, KeyToIndex) == 0x0018);
static_assert(offsetof(FRigInfluenceMapPerEvent, Maps) == 0x0000);
static_assert(offsetof(FRigInfluenceMapPerEvent, EventToIndex) == 0x0010);
static_assert(offsetof(UControlRig, ExecutionType) == 0x0188);
static_assert(offsetof(UControlRig, HierarchySettings) == 0x018C);
static_assert(offsetof(UControlRig, ControlCustomizations) == 0x0190);
static_assert(offsetof(UControlRig, DynamicHierarchy) == 0x01E0);
static_assert(offsetof(UControlRig, DataSourceRegistry) == 0x0210);
static_assert(offsetof(UControlRig, Influences) == 0x02A8);
static_assert(offsetof(UControlRig, InteractionRig) == 0x0308);
static_assert(offsetof(UControlRig, InteractionRigClass) == 0x0310);
static_assert(offsetof(FControlRigComponentMappedElement, ComponentReference) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedElement, TransformName) == 0x002C);
static_assert(offsetof(FControlRigComponentMappedElement, ElementType) == 0x0034);
static_assert(offsetof(FControlRigComponentMappedElement, ElementName) == 0x0038);
static_assert(offsetof(FControlRigComponentMappedElement, Direction) == 0x0040);
static_assert(offsetof(FControlRigComponentMappedElement, Offset) == 0x0050);
static_assert(offsetof(FControlRigComponentMappedElement, Space) == 0x00B4);
static_assert(offsetof(FControlRigComponentMappedElement, SceneComponent) == 0x00B8);
static_assert(offsetof(UControlRigComponent, ControlRigClass) == 0x0568);
static_assert(offsetof(UControlRigComponent, UserDefinedElements) == 0x05D0);
static_assert(offsetof(UControlRigComponent, MappedElements) == 0x05E0);
static_assert(offsetof(UControlRigComponent, ControlRig) == 0x0608);
static_assert(offsetof(AControlRigControlActor, ActorToTrack) == 0x0290);
static_assert(offsetof(AControlRigControlActor, ControlRigClass) == 0x0298);
static_assert(offsetof(AControlRigControlActor, MaterialOverride) == 0x02A8);
static_assert(offsetof(AControlRigControlActor, ColorParameter) == 0x02B0);
static_assert(offsetof(AControlRigControlActor, ActorRootComponent) == 0x02C8);
static_assert(offsetof(AControlRigControlActor, ControlRig) == 0x02D0);
static_assert(offsetof(AControlRigControlActor, ControlNames) == 0x0300);
static_assert(offsetof(AControlRigControlActor, ShapeTransforms) == 0x0310);
static_assert(offsetof(AControlRigControlActor, Components) == 0x0320);
static_assert(offsetof(AControlRigControlActor, Materials) == 0x0330);
static_assert(offsetof(AControlRigControlActor, ColorParameterName) == 0x0340);
static_assert(offsetof(AControlRigShapeActor, ActorRootComponent) == 0x0290);
static_assert(offsetof(AControlRigShapeActor, StaticMeshComponent) == 0x0298);
static_assert(offsetof(AControlRigShapeActor, ControlRig) == 0x02A4);
static_assert(offsetof(AControlRigShapeActor, ControlName) == 0x02AC);
static_assert(offsetof(AControlRigShapeActor, ShapeName) == 0x02B4);
static_assert(offsetof(AControlRigShapeActor, ColorParameterName) == 0x02BC);
static_assert(offsetof(FControlRigShapeDefinition, ShapeName) == 0x0000);
static_assert(offsetof(FControlRigShapeDefinition, StaticMesh) == 0x0008);
static_assert(offsetof(FControlRigShapeDefinition, Transform) == 0x0040);
static_assert(offsetof(UControlRigShapeLibrary, DefaultShape) == 0x0030);
static_assert(offsetof(UControlRigShapeLibrary, DefaultMaterial) == 0x00E0);
static_assert(offsetof(UControlRigShapeLibrary, XRayMaterial) == 0x0110);
static_assert(offsetof(UControlRigShapeLibrary, MaterialColorParameter) == 0x0140);
static_assert(offsetof(UControlRigShapeLibrary, Shapes) == 0x0148);
static_assert(offsetof(FControlRigTestDataVariable, Name) == 0x0000);
static_assert(offsetof(FControlRigTestDataVariable, CPPType) == 0x0008);
static_assert(offsetof(FControlRigTestDataVariable, Value) == 0x0010);
static_assert(offsetof(FCachedRigElement, Key) == 0x0000);
static_assert(offsetof(FRigPoseElement, Index) == 0x0000);
static_assert(offsetof(FRigPoseElement, GlobalTransform) == 0x0020);
static_assert(offsetof(FRigPoseElement, LocalTransform) == 0x0080);
static_assert(offsetof(FRigPose, Elements) == 0x0000);
static_assert(offsetof(FControlRigTestDataFrame, Variables) == 0x0010);
static_assert(offsetof(FControlRigTestDataFrame, Pose) == 0x0020);
static_assert(offsetof(UControlRigTestData, ControlRigObjectPath) == 0x0028);
static_assert(offsetof(UControlRigTestData, Initial) == 0x0048);
static_assert(offsetof(UControlRigTestData, InputFrames) == 0x00D8);
static_assert(offsetof(UControlRigTestData, OutputFrames) == 0x00E8);
static_assert(offsetof(UControlRigTestData, FramesToSkip) == 0x00F8);
static_assert(offsetof(UControlRigValidator, Passes) == 0x0028);
static_assert(offsetof(UFKControlRig, IsControlActive) == 0x03F8);
static_assert(offsetof(UFKControlRig, ApplyMode) == 0x0408);
static_assert(offsetof(URigHierarchyController, Hierarchy) == 0x002C);
static_assert(offsetof(UControlRigObjectHolder, Objects) == 0x0028);
static_assert(offsetof(UControlRigSequence, LastExportedToAnimationSequence) == 0x0220);
static_assert(offsetof(UControlRigSequence, LastExportedUsingSkeletalMesh) == 0x0250);
static_assert(offsetof(FChannelMapInfo, ChannelTypeName) == 0x0010);
static_assert(offsetof(FChannelMapInfo, ConstraintsIndex) == 0x0030);
static_assert(offsetof(FEnumParameterNameAndCurve, ParameterName) == 0x0000);
static_assert(offsetof(FEnumParameterNameAndCurve, ParameterCurve) == 0x0008);
static_assert(offsetof(FIntegerParameterNameAndCurve, ParameterName) == 0x0000);
static_assert(offsetof(FIntegerParameterNameAndCurve, ParameterCurve) == 0x0008);
static_assert(offsetof(FMovieSceneControlRigSpaceBaseKey, SpaceType) == 0x0000);
static_assert(offsetof(FMovieSceneControlRigSpaceBaseKey, ControlRigElement) == 0x0004);
static_assert(offsetof(FMovieSceneControlRigSpaceChannel, KeyTimes) == 0x0050);
static_assert(offsetof(FMovieSceneControlRigSpaceChannel, KeyValues) == 0x0060);
static_assert(offsetof(FMovieSceneControlRigSpaceChannel, KeyHandles) == 0x0070);
static_assert(offsetof(FSpaceControlNameAndChannel, ControlName) == 0x0000);
static_assert(offsetof(FSpaceControlNameAndChannel, SpaceCurve) == 0x0008);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlRig) == 0x01A0);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlRigClass) == 0x01A8);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlsMask) == 0x01B0);
static_assert(offsetof(UMovieSceneControlRigParameterSection, TransformMask) == 0x01C0);
static_assert(offsetof(UMovieSceneControlRigParameterSection, Weight) == 0x01C8);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ControlChannelMap) == 0x02D8);
static_assert(offsetof(UMovieSceneControlRigParameterSection, EnumParameterNamesAndCurves) == 0x0328);
static_assert(offsetof(UMovieSceneControlRigParameterSection, IntegerParameterNamesAndCurves) == 0x0338);
static_assert(offsetof(UMovieSceneControlRigParameterSection, SpaceChannels) == 0x0348);
static_assert(offsetof(UMovieSceneControlRigParameterSection, ConstraintsChannels) == 0x0358);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, ControlRig) == 0x00D8);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, SectionToKey) == 0x00E0);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, Sections) == 0x00E8);
static_assert(offsetof(UMovieSceneControlRigParameterTrack, TrackName) == 0x00F8);
static_assert(offsetof(FRigControlValue, FloatStorage) == 0x0000);
static_assert(offsetof(FRigControlCopy, Name) == 0x0010);
static_assert(offsetof(FRigControlCopy, ControlType) == 0x0018);
static_assert(offsetof(FRigControlCopy, Value) == 0x001C);
static_assert(offsetof(FRigControlCopy, ParentKey) == 0x00A0);
static_assert(offsetof(FRigControlCopy, OffsetTransform) == 0x00B0);
static_assert(offsetof(FRigControlCopy, ParentTransform) == 0x0110);
static_assert(offsetof(FRigControlCopy, LocalTransform) == 0x0170);
static_assert(offsetof(FRigControlCopy, GlobalTransform) == 0x01D0);
static_assert(offsetof(FControlRigControlPose, CopyOfControls) == 0x0000);
static_assert(offsetof(UControlRigPoseAsset, Pose) == 0x0028);
static_assert(offsetof(UControlRigPoseMirrorSettings, RightSide) == 0x0028);
static_assert(offsetof(UControlRigPoseMirrorSettings, LeftSide) == 0x0038);
static_assert(offsetof(UControlRigPoseMirrorSettings, MirrorAxis) == 0x0048);
static_assert(offsetof(UControlRigPoseMirrorSettings, AxisToFlip) == 0x0049);
static_assert(offsetof(UControlRigPoseProjectSettings, RootSaveDirs) == 0x0028);
static_assert(offsetof(UControlRigWorkflowOptions, Hierarchy) == 0x0098);
static_assert(offsetof(UControlRigWorkflowOptions, Selection) == 0x00A0);
static_assert(offsetof(UControlRigTransformWorkflowOptions, TransformType) == 0x00B0);
static_assert(offsetof(UControlRigNumericalValidationPass, EventNameA) == 0x003C);
static_assert(offsetof(UControlRigNumericalValidationPass, EventNameB) == 0x0044);
static_assert(offsetof(UControlRigNumericalValidationPass, Pose) == 0x0050);
static_assert(offsetof(FRigBaseElement, Key) == 0x0008);
static_assert(offsetof(FRigBaseElement, NameString) == 0x0018);
static_assert(offsetof(FRigComputedTransform, Transform) == 0x0000);
static_assert(offsetof(FRigLocalAndGlobalTransform, Local) == 0x0000);
static_assert(offsetof(FRigLocalAndGlobalTransform, Global) == 0x0070);
static_assert(offsetof(FRigCurrentAndInitialTransform, Current) == 0x0000);
static_assert(offsetof(FRigCurrentAndInitialTransform, Initial) == 0x00E0);
static_assert(offsetof(FRigTransformElement, Pose) == 0x00F0);
static_assert(offsetof(FRigControlSettings, AnimationType) == 0x0000);
static_assert(offsetof(FRigControlSettings, ControlType) == 0x0001);
static_assert(offsetof(FRigControlSettings, DisplayName) == 0x0004);
static_assert(offsetof(FRigControlSettings, PrimaryAxis) == 0x000C);
static_assert(offsetof(FRigControlSettings, LimitEnabled) == 0x0010);
static_assert(offsetof(FRigControlSettings, MinimumValue) == 0x0024);
static_assert(offsetof(FRigControlSettings, MaximumValue) == 0x00A8);
static_assert(offsetof(FRigControlSettings, ShapeVisibility) == 0x012D);
static_assert(offsetof(FRigControlSettings, ShapeName) == 0x0130);
static_assert(offsetof(FRigControlSettings, ShapeColor) == 0x0138);
static_assert(offsetof(FRigControlSettings, ControlEnum) == 0x0150);
static_assert(offsetof(FRigControlSettings, Customization) == 0x0158);
static_assert(offsetof(FRigControlSettings, DrivenControls) == 0x0178);
static_assert(offsetof(FRigControlSettings, FilteredChannels) == 0x01A0);
static_assert(offsetof(FRigPreferredEulerAngles, RotationOrder) == 0x0000);
static_assert(offsetof(FRigPreferredEulerAngles, Current) == 0x0008);
static_assert(offsetof(FRigPreferredEulerAngles, Initial) == 0x0020);
static_assert(offsetof(FRigControlElement, Settings) == 0x03F0);
static_assert(offsetof(FRigControlElement, Offset) == 0x05A0);
static_assert(offsetof(FRigControlElement, Shape) == 0x0760);
static_assert(offsetof(FRigControlElement, PreferredEulerAngles) == 0x0920);
static_assert(offsetof(FMovieSceneControlRigInstanceData, BoneFilter) == 0x0010);
static_assert(offsetof(FMovieSceneControlRigInstanceData, Weight) == 0x0020);
static_assert(offsetof(FMovieSceneControlRigInstanceData, Operand) == 0x0130);
static_assert(offsetof(FRigTransformStackEntry, Key) == 0x0000);
static_assert(offsetof(FRigTransformStackEntry, EntryType) == 0x000C);
static_assert(offsetof(FRigTransformStackEntry, TransformType) == 0x000D);
static_assert(offsetof(FRigTransformStackEntry, OldTransform) == 0x0010);
static_assert(offsetof(FRigTransformStackEntry, NewTransform) == 0x0070);
static_assert(offsetof(FRigTransformStackEntry, Callstack) == 0x00D8);
static_assert(offsetof(FRigBoneElement, BoneType) == 0x02F8);
static_assert(offsetof(FRigRigidBodyElement, Settings) == 0x02F8);
static_assert(offsetof(FRigHierarchyCopyPasteContentPerElement, Key) == 0x0000);
static_assert(offsetof(FRigHierarchyCopyPasteContentPerElement, Content) == 0x0010);
static_assert(offsetof(FRigHierarchyCopyPasteContentPerElement, Parents) == 0x0020);
static_assert(offsetof(FRigHierarchyCopyPasteContentPerElement, ParentWeights) == 0x0030);
static_assert(offsetof(FRigHierarchyCopyPasteContentPerElement, Pose) == 0x0040);
static_assert(offsetof(FRigHierarchyCopyPasteContent, Elements) == 0x0000);
static_assert(offsetof(FRigHierarchyCopyPasteContent, Types) == 0x0010);
static_assert(offsetof(FRigHierarchyCopyPasteContent, Contents) == 0x0020);
static_assert(offsetof(FRigHierarchyCopyPasteContent, LocalTransforms) == 0x0030);
static_assert(offsetof(FRigHierarchyCopyPasteContent, GlobalTransforms) == 0x0040);
static_assert(offsetof(FRigUnitMutable, ExecuteContext) == 0x0010);
static_assert(offsetof(FControlRigAnimNodeEventName, EventName) == 0x0000);
static_assert(offsetof(FAnimNode_ControlRigBase, Source) == 0x0058);
static_assert(offsetof(FAnimNode_ControlRigBase, InputBonesToTransfer) == 0x0070);
static_assert(offsetof(FAnimNode_ControlRigBase, NodeMappingContainer) == 0x0240);
static_assert(offsetof(FAnimNode_ControlRigBase, InputSettings) == 0x0248);
static_assert(offsetof(FAnimNode_ControlRigBase, OutputSettings) == 0x024A);
static_assert(offsetof(FAnimNode_ControlRigBase, EventQueue) == 0x0258);
static_assert(offsetof(FAnimNode_ControlRig, ControlRigClass) == 0x0270);
static_assert(offsetof(FAnimNode_ControlRig, ControlRig) == 0x0278);
static_assert(offsetof(FAnimNode_ControlRig, AlphaInputType) == 0x0284);
static_assert(offsetof(FAnimNode_ControlRig, AlphaScaleBias) == 0x0288);
static_assert(offsetof(FAnimNode_ControlRig, AlphaBoolBlend) == 0x0290);
static_assert(offsetof(FAnimNode_ControlRig, AlphaCurveName) == 0x02D8);
static_assert(offsetof(FAnimNode_ControlRig, AlphaScaleBiasClamp) == 0x02E0);
static_assert(offsetof(FAnimNode_ControlRig, InputMapping) == 0x0310);
static_assert(offsetof(FAnimNode_ControlRig, OutputMapping) == 0x0360);
static_assert(offsetof(FAnimNode_ControlRig_ExternalSource, ControlRig) == 0x0270);
static_assert(offsetof(FControlRigComponentMappedComponent, Component) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedComponent, ElementName) == 0x0008);
static_assert(offsetof(FControlRigComponentMappedComponent, ElementType) == 0x0010);
static_assert(offsetof(FControlRigComponentMappedComponent, Direction) == 0x0011);
static_assert(offsetof(FControlRigComponentMappedBone, Source) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedBone, Target) == 0x0008);
static_assert(offsetof(FControlRigComponentMappedCurve, Source) == 0x0000);
static_assert(offsetof(FControlRigComponentMappedCurve, Target) == 0x0008);
static_assert(offsetof(FCRSimPointConstraint, Type) == 0x0000);
static_assert(offsetof(FCRSimPointConstraint, DataA) == 0x0010);
static_assert(offsetof(FCRSimPointConstraint, DataB) == 0x0028);
static_assert(offsetof(FCRSimPointForce, ForceType) == 0x0000);
static_assert(offsetof(FCRSimPointForce, Vector) == 0x0008);
static_assert(offsetof(FCRSimSoftCollision, Transform) == 0x0000);
static_assert(offsetof(FCRSimSoftCollision, ShapeType) == 0x0060);
static_assert(offsetof(FCRSimSoftCollision, FalloffType) == 0x006C);
static_assert(offsetof(FCRSimPointContainer, Points) == 0x0018);
static_assert(offsetof(FCRSimPointContainer, Springs) == 0x0028);
static_assert(offsetof(FCRSimPointContainer, Forces) == 0x0038);
static_assert(offsetof(FCRSimPointContainer, CollisionVolumes) == 0x0048);
static_assert(offsetof(FCRSimPointContainer, Constraints) == 0x0058);
static_assert(offsetof(FCRSimPointContainer, PreviousStep) == 0x0068);
static_assert(offsetof(FConstraintNodeData, RelativeParent) == 0x0000);
static_assert(offsetof(FConstraintNodeData, ConstraintOffset) == 0x0060);
static_assert(offsetof(FConstraintNodeData, LinkedNode) == 0x0120);
static_assert(offsetof(FConstraintNodeData, Constraints) == 0x0128);
static_assert(offsetof(FAnimationHierarchy, UserData) == 0x0078);
static_assert(offsetof(FRigElement, Name) == 0x0008);
static_assert(offsetof(FRigBone, ParentName) == 0x0018);
static_assert(offsetof(FRigBone, InitialTransform) == 0x0030);
static_assert(offsetof(FRigBone, GlobalTransform) == 0x0090);
static_assert(offsetof(FRigBone, LocalTransform) == 0x00F0);
static_assert(offsetof(FRigBone, Dependents) == 0x0150);
static_assert(offsetof(FRigBone, Type) == 0x0160);
static_assert(offsetof(FRigBoneHierarchy, Bones) == 0x0000);
static_assert(offsetof(FRigControl, ControlType) == 0x0018);
static_assert(offsetof(FRigControl, DisplayName) == 0x001C);
static_assert(offsetof(FRigControl, ParentName) == 0x0024);
static_assert(offsetof(FRigControl, SpaceName) == 0x0030);
static_assert(offsetof(FRigControl, OffsetTransform) == 0x0040);
static_assert(offsetof(FRigControl, InitialValue) == 0x00A0);
static_assert(offsetof(FRigControl, Value) == 0x0124);
static_assert(offsetof(FRigControl, PrimaryAxis) == 0x01A8);
static_assert(offsetof(FRigControl, MinimumValue) == 0x01B0);
static_assert(offsetof(FRigControl, MaximumValue) == 0x0234);
static_assert(offsetof(FRigControl, GizmoName) == 0x02BC);
static_assert(offsetof(FRigControl, GizmoTransform) == 0x02D0);
static_assert(offsetof(FRigControl, GizmoColor) == 0x0330);
static_assert(offsetof(FRigControl, Dependents) == 0x0340);
static_assert(offsetof(FRigControl, ControlEnum) == 0x0358);
static_assert(offsetof(FRigControlHierarchy, Controls) == 0x0000);
static_assert(offsetof(FRigCurveContainer, Curves) == 0x0000);
static_assert(offsetof(FRigSpace, SpaceType) == 0x0018);
static_assert(offsetof(FRigSpace, ParentName) == 0x001C);
static_assert(offsetof(FRigSpace, InitialTransform) == 0x0030);
static_assert(offsetof(FRigSpace, LocalTransform) == 0x0090);
static_assert(offsetof(FRigSpaceHierarchy, Spaces) == 0x0000);
static_assert(offsetof(FRigHierarchyContainer, BoneHierarchy) == 0x0000);
static_assert(offsetof(FRigHierarchyContainer, SpaceHierarchy) == 0x0010);
static_assert(offsetof(FRigHierarchyContainer, ControlHierarchy) == 0x0020);
static_assert(offsetof(FRigHierarchyContainer, CurveContainer) == 0x0030);
static_assert(offsetof(FRigElementKeyCollection, Keys) == 0x0000);
static_assert(offsetof(FRigBaseMetadata, Name) == 0x0010);
static_assert(offsetof(FRigBaseMetadata, Type) == 0x0018);
static_assert(offsetof(FRigBoolArrayMetadata, Value) == 0x0028);
static_assert(offsetof(FRigFloatArrayMetadata, Value) == 0x0028);
static_assert(offsetof(FRigInt32ArrayMetadata, Value) == 0x0028);
static_assert(offsetof(FRigNameMetadata, Value) == 0x0028);
static_assert(offsetof(FRigNameArrayMetadata, Value) == 0x0028);
static_assert(offsetof(FRigVectorMetadata, Value) == 0x0028);
static_assert(offsetof(FRigVectorArrayMetadata, Value) == 0x0028);
static_assert(offsetof(FRigRotatorMetadata, Value) == 0x0028);
static_assert(offsetof(FRigRotatorArrayMetadata, Value) == 0x0028);
static_assert(offsetof(FRigQuatMetadata, Value) == 0x0030);
static_assert(offsetof(FRigQuatArrayMetadata, Value) == 0x0028);
static_assert(offsetof(FRigTransformMetadata, Value) == 0x0030);
static_assert(offsetof(FRigTransformArrayMetadata, Value) == 0x0028);
static_assert(offsetof(FRigLinearColorMetadata, Value) == 0x0028);
static_assert(offsetof(FRigLinearColorArrayMetadata, Value) == 0x0028);
static_assert(offsetof(FRigElementKeyMetadata, Value) == 0x0028);
static_assert(offsetof(FRigElementKeyArrayMetadata, Value) == 0x0028);
static_assert(offsetof(FRigInfluenceEntryModifier, AffectedList) == 0x0000);
static_assert(offsetof(FAnimNode_ControlRigInputPose, InputPose) == 0x0010);
static_assert(offsetof(FControlRigSequenceObjectReference, ControlRigClass) == 0x0000);
static_assert(offsetof(FControlRigSequenceObjectReferences, Array) == 0x0000);
static_assert(offsetof(FControlRigSequenceObjectReferenceMap, BindingIds) == 0x0000);
static_assert(offsetof(FControlRigSequenceObjectReferenceMap, References) == 0x0010);
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Enums) == 0x0080);
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Integers) == 0x0090);
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Spaces) == 0x00A0);
static_assert(offsetof(FMovieSceneControlRigParameterTemplate, Constraints) == 0x00B0);
static_assert(offsetof(FControlRigSettingsPerPinBool, Values) == 0x0000);
static_assert(offsetof(FRigUnit_SphereTraceWorld, Start) == 0x0008);
static_assert(offsetof(FRigUnit_SphereTraceWorld, End) == 0x0020);
static_assert(offsetof(FRigUnit_SphereTraceWorld, Channel) == 0x0038);
static_assert(offsetof(FRigUnit_SphereTraceWorld, HitLocation) == 0x0048);
static_assert(offsetof(FRigUnit_SphereTraceWorld, HitNormal) == 0x0060);
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, Start) == 0x0008);
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, End) == 0x0020);
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, TraceChannel) == 0x0038);
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, HitLocation) == 0x0048);
static_assert(offsetof(FRigUnit_SphereTraceByTraceChannel, HitNormal) == 0x0060);
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, Start) == 0x0008);
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, End) == 0x0020);
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, HitLocation) == 0x0050);
static_assert(offsetof(FRigUnit_SphereTraceByObjectTypes, HitNormal) == 0x0068);
static_assert(offsetof(FRigUnit_Control, Transform) == 0x0008);
static_assert(offsetof(FRigUnit_Control, Base) == 0x0050);
static_assert(offsetof(FRigUnit_Control, InitTransform) == 0x00B0);
static_assert(offsetof(FRigUnit_Control, Result) == 0x0110);
static_assert(offsetof(FRigUnit_Control, Filter) == 0x0170);
static_assert(offsetof(FRigUnit_Control_StaticMesh, MeshTransform) == 0x0180);
static_assert(offsetof(FRigUnit_DebugBezier, Bezier) == 0x0100);
static_assert(offsetof(FRigUnit_DebugBezier, Color) == 0x0168);
static_assert(offsetof(FRigUnit_DebugBezier, Space) == 0x0180);
static_assert(offsetof(FRigUnit_DebugBezier, WorldOffset) == 0x0190);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Bezier) == 0x0100);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Color) == 0x0168);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, Space) == 0x0180);
static_assert(offsetof(FRigUnit_DebugBezierItemSpace, WorldOffset) == 0x0190);
static_assert(offsetof(FRigUnit_DebugHierarchy, ExecuteContext) == 0x0010);
static_assert(offsetof(FRigUnit_DebugHierarchy, Color) == 0x0134);
static_assert(offsetof(FRigUnit_DebugHierarchy, WorldOffset) == 0x0150);
static_assert(offsetof(FRigUnit_DebugPose, ExecuteContext) == 0x0010);
static_assert(offsetof(FRigUnit_DebugPose, Pose) == 0x0130);
static_assert(offsetof(FRigUnit_DebugPose, Color) == 0x01A4);
static_assert(offsetof(FRigUnit_DebugPose, WorldOffset) == 0x01C0);
static_assert(offsetof(FRigUnit_EndProfilingTimer, Prefix) == 0x0108);
static_assert(offsetof(FRigUnit_ConvertTransform, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ConvertTransform, Result) == 0x0070);
static_assert(offsetof(FRigUnit_ConvertEulerTransform, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertEulerTransform, Result) == 0x0050);
static_assert(offsetof(FRigUnit_ConvertRotation, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertRotation, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertQuaternion, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ConvertQuaternion, Result) == 0x0030);
static_assert(offsetof(FRigUnit_ConvertVectorToRotation, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertVectorToRotation, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertVectorToQuaternion, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertVectorToQuaternion, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertRotationToVector, Input) == 0x0008);
static_assert(offsetof(FRigUnit_ConvertRotationToVector, Result) == 0x0020);
static_assert(offsetof(FRigUnit_ConvertQuaternionToVector, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ConvertQuaternionToVector, Result) == 0x0030);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Input) == 0x0010);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, TwistAxis) == 0x0030);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Swing) == 0x0050);
static_assert(offsetof(FRigUnit_ToSwingAndTwist, Twist) == 0x0070);
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Argument0) == 0x0010);
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Argument1) == 0x0030);
static_assert(offsetof(FRigUnit_BinaryQuaternionOp, Result) == 0x0050);
static_assert(offsetof(FRigUnit_UnaryQuaternionOp, Argument) == 0x0010);
static_assert(offsetof(FRigUnit_UnaryQuaternionOp, Result) == 0x0030);
static_assert(offsetof(FRigUnit_QuaternionToAxisAndAngle, Argument) == 0x0010);
static_assert(offsetof(FRigUnit_QuaternionToAxisAndAngle, Axis) == 0x0030);
static_assert(offsetof(FRigUnit_QuaternionFromAxisAndAngle, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_QuaternionFromAxisAndAngle, Result) == 0x0030);
static_assert(offsetof(FRigUnit_QuaternionToAngle, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_QuaternionToAngle, Argument) == 0x0020);
static_assert(offsetof(FRigUnit_BinaryTransformOp, Argument0) == 0x0010);
static_assert(offsetof(FRigUnit_BinaryTransformOp, Argument1) == 0x0070);
static_assert(offsetof(FRigUnit_BinaryTransformOp, Result) == 0x00D0);
static_assert(offsetof(FRigUnit_BinaryVectorOp, Argument0) == 0x0008);
static_assert(offsetof(FRigUnit_BinaryVectorOp, Argument1) == 0x0020);
static_assert(offsetof(FRigUnit_BinaryVectorOp, Result) == 0x0038);
static_assert(offsetof(FRigUnit_Distance_VectorVector, Argument0) == 0x0008);
static_assert(offsetof(FRigUnit_Distance_VectorVector, Argument1) == 0x0020);
static_assert(offsetof(FRigUnit_MathVectorBezierFourPoint, Bezier) == 0x0008);
static_assert(offsetof(FRigUnit_MathVectorBezierFourPoint, Result) == 0x0070);
static_assert(offsetof(FRigUnit_MathVectorBezierFourPoint, Tangent) == 0x0088);
static_assert(offsetof(FRigUnit_MathVectorMakeBezierFourPoint, Bezier) == 0x0008);
static_assert(offsetof(FAimTarget, Transform) == 0x0010);
static_assert(offsetof(FAimTarget, AlignVector) == 0x0070);
static_assert(offsetof(FRigUnit_AimConstraint_WorkData, ConstraintData) == 0x0000);
static_assert(offsetof(FRigUnit_AimConstraint, Joint) == 0x0130);
static_assert(offsetof(FRigUnit_AimConstraint, AimMode) == 0x0138);
static_assert(offsetof(FRigUnit_AimConstraint, UpMode) == 0x0139);
static_assert(offsetof(FRigUnit_AimConstraint, AimVector) == 0x0140);
static_assert(offsetof(FRigUnit_AimConstraint, UpVector) == 0x0158);
static_assert(offsetof(FRigUnit_AimConstraint, AimTargets) == 0x0170);
static_assert(offsetof(FRigUnit_AimConstraint, UpTargets) == 0x0180);
static_assert(offsetof(FRigUnit_AimConstraint, WorkData) == 0x0190);
static_assert(offsetof(FRigUnit_ApplyFK, Joint) == 0x0130);
static_assert(offsetof(FRigUnit_ApplyFK, Transform) == 0x0140);
static_assert(offsetof(FRigUnit_ApplyFK, Filter) == 0x01A0);
static_assert(offsetof(FRigUnit_ApplyFK, ApplyTransformMode) == 0x01A9);
static_assert(offsetof(FRigUnit_ApplyFK, ApplyTransformSpace) == 0x01AA);
static_assert(offsetof(FRigUnit_ApplyFK, BaseTransform) == 0x01B0);
static_assert(offsetof(FRigUnit_ApplyFK, BaseJoint) == 0x0210);
static_assert(offsetof(FBlendTarget, Transform) == 0x0000);
static_assert(offsetof(FRigUnit_BlendTransform, Source) == 0x0010);
static_assert(offsetof(FRigUnit_BlendTransform, Targets) == 0x0070);
static_assert(offsetof(FRigUnit_BlendTransform, Result) == 0x0080);
static_assert(offsetof(FRigUnit_GetJointTransform, Joint) == 0x0130);
static_assert(offsetof(FRigUnit_GetJointTransform, Type) == 0x0138);
static_assert(offsetof(FRigUnit_GetJointTransform, TransformSpace) == 0x0139);
static_assert(offsetof(FRigUnit_GetJointTransform, BaseTransform) == 0x0140);
static_assert(offsetof(FRigUnit_GetJointTransform, BaseJoint) == 0x01A0);
static_assert(offsetof(FRigUnit_GetJointTransform, Output) == 0x01B0);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJoint) == 0x0130);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJoint) == 0x0138);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, PoleTarget) == 0x0140);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndEffector) == 0x0160);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJointFKTransform) == 0x01D0);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, MidJointFKTransform) == 0x0230);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJointFKTransform) == 0x0290);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, StartJointIKTransform) == 0x0300);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, MidJointIKTransform) == 0x0360);
static_assert(offsetof(FRigUnit_TwoBoneIKFK, EndJointIKTransform) == 0x03C0);
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, InstructionName) == 0x0008);
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, Color) == 0x0010);
static_assert(offsetof(FRigUnit_DrawContainerGetInstruction, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_DrawContainerSetColor, InstructionName) == 0x0130);
static_assert(offsetof(FRigUnit_DrawContainerSetColor, Color) == 0x0138);
static_assert(offsetof(FRigUnit_DrawContainerSetThickness, InstructionName) == 0x0130);
static_assert(offsetof(FRigUnit_DrawContainerSetTransform, InstructionName) == 0x0130);
static_assert(offsetof(FRigUnit_DrawContainerSetTransform, Transform) == 0x0140);
static_assert(offsetof(FRigUnit_BeginExecution, ExecuteContext) == 0x0010);
static_assert(offsetof(FRigUnit_CollectionChain, FirstItem) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionChain, LastItem) == 0x0014);
static_assert(offsetof(FRigUnit_CollectionChain, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionChainArray, FirstItem) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionChainArray, LastItem) == 0x0014);
static_assert(offsetof(FRigUnit_CollectionChainArray, Items) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionNameSearch, PartialName) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionNameSearch, TypeToSearch) == 0x0010);
static_assert(offsetof(FRigUnit_CollectionNameSearch, Collection) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionNameSearchArray, PartialName) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionNameSearchArray, TypeToSearch) == 0x0010);
static_assert(offsetof(FRigUnit_CollectionNameSearchArray, Items) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionChildren, Parent) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionChildren, TypeToSearch) == 0x0016);
static_assert(offsetof(FRigUnit_CollectionChildren, Collection) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionChildrenArray, Parent) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionChildrenArray, TypeToSearch) == 0x0016);
static_assert(offsetof(FRigUnit_CollectionChildrenArray, Items) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionGetAll, TypeToSearch) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionGetAll, Items) == 0x0010);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Items) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Old) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, New) == 0x0020);
static_assert(offsetof(FRigUnit_CollectionReplaceItems, Collection) == 0x0030);
static_assert(offsetof(FRigUnit_CollectionReplaceItemsArray, Items) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionReplaceItemsArray, Old) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionReplaceItemsArray, New) == 0x0020);
static_assert(offsetof(FRigUnit_CollectionReplaceItemsArray, Result) == 0x0030);
static_assert(offsetof(FRigUnit_CollectionItems, Items) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionItems, Collection) == 0x0020);
static_assert(offsetof(FRigUnit_CollectionGetItems, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionGetItems, Items) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionGetParentIndices, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionGetParentIndices, ParentIndices) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionGetParentIndicesItemArray, Items) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionGetParentIndicesItemArray, ParentIndices) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionUnion, A) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionUnion, B) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionUnion, Collection) == 0x0030);
static_assert(offsetof(FRigUnit_CollectionIntersection, A) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionIntersection, B) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionIntersection, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionDifference, A) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionDifference, B) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionDifference, Collection) == 0x0028);
static_assert(offsetof(FRigUnit_CollectionReverse, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionReverse, Reversed) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionCount, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionItemAtIndex, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionItemAtIndex, Item) == 0x001C);
static_assert(offsetof(FRigUnit_CollectionLoop, BlockToRun) == 0x0130);
static_assert(offsetof(FRigUnit_CollectionLoop, Collection) == 0x0138);
static_assert(offsetof(FRigUnit_CollectionLoop, Item) == 0x0148);
static_assert(offsetof(FRigUnit_CollectionLoop, Completed) == 0x0160);
static_assert(offsetof(FRigUnit_CollectionAddItem, Collection) == 0x0008);
static_assert(offsetof(FRigUnit_CollectionAddItem, Item) == 0x0018);
static_assert(offsetof(FRigUnit_CollectionAddItem, Result) == 0x0028);
static_assert(offsetof(FRigUnit_AddParent, Child) == 0x0130);
static_assert(offsetof(FRigUnit_AddParent, Parent) == 0x013C);
static_assert(offsetof(FRigUnit_SetDefaultParent, Child) == 0x0130);
static_assert(offsetof(FRigUnit_SetDefaultParent, Parent) == 0x013C);
static_assert(offsetof(FRigUnit_SwitchParent, Mode) == 0x0130);
static_assert(offsetof(FRigUnit_SwitchParent, Child) == 0x0134);
static_assert(offsetof(FRigUnit_SwitchParent, Parent) == 0x0140);
static_assert(offsetof(FRigUnit_HierarchyGetParentWeights, Child) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetParentWeights, Weights) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetParentWeights, Parents) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetParentWeightsArray, Child) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetParentWeightsArray, Weights) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetParentWeightsArray, Parents) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchySetParentWeights, Child) == 0x0130);
static_assert(offsetof(FRigUnit_HierarchySetParentWeights, Weights) == 0x0140);
static_assert(offsetof(FRigUnit_HierarchyImportFromSkeleton, Namespace) == 0x0130);
static_assert(offsetof(FRigUnit_HierarchyImportFromSkeleton, Items) == 0x0140);
static_assert(offsetof(FRigUnit_HierarchyRemoveElement, Item) == 0x0130);
static_assert(offsetof(FRigUnit_HierarchyAddElement, Parent) == 0x0130);
static_assert(offsetof(FRigUnit_HierarchyAddElement, Name) == 0x013C);
static_assert(offsetof(FRigUnit_HierarchyAddElement, Item) == 0x0144);
static_assert(offsetof(FRigUnit_HierarchyAddBone, Transform) == 0x0150);
static_assert(offsetof(FRigUnit_HierarchyAddBone, Space) == 0x01B0);
static_assert(offsetof(FRigUnit_HierarchyAddNull, Transform) == 0x0150);
static_assert(offsetof(FRigUnit_HierarchyAddNull, Space) == 0x01B0);
static_assert(offsetof(FRigUnit_HierarchyAddControl_Settings, DisplayName) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyAddControl_ShapeSettings, Name) == 0x0004);
static_assert(offsetof(FRigUnit_HierarchyAddControl_ShapeSettings, Color) == 0x000C);
static_assert(offsetof(FRigUnit_HierarchyAddControl_ShapeSettings, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_HierarchyAddControl_ProxySettings, DrivenControls) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyAddControl_ProxySettings, ShapeVisibility) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_LimitSettings, Limit) == 0x0000);
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_Settings, PrimaryAxis) == 0x0010);
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_Settings, Limits) == 0x0014);
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_Settings, Shape) == 0x0030);
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat_Settings, Proxy) == 0x00B0);
static_assert(offsetof(FRigUnit_HierarchyAddControlElement, OffsetTransform) == 0x0150);
static_assert(offsetof(FRigUnit_HierarchyAddControlFloat, Settings) == 0x01C0);
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_LimitSettings, Limit) == 0x0000);
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_Settings, PrimaryAxis) == 0x0010);
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_Settings, Limits) == 0x0014);
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_Settings, Shape) == 0x0030);
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger_Settings, Proxy) == 0x00B0);
static_assert(offsetof(FRigUnit_HierarchyAddControlInteger, Settings) == 0x01C0);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_LimitSettings, LimitX) == 0x0000);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_LimitSettings, LimitY) == 0x0002);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_LimitSettings, MinValue) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_LimitSettings, MaxValue) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_Settings, PrimaryAxis) == 0x0010);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_Settings, Limits) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_Settings, Shape) == 0x0050);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_Settings, Proxy) == 0x00D0);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D_Settings, FilteredChannels) == 0x00F0);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D, InitialValue) == 0x01B0);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector2D, Settings) == 0x01C0);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_LimitSettings, LimitX) == 0x0000);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_LimitSettings, LimitY) == 0x0002);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_LimitSettings, LimitZ) == 0x0004);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_LimitSettings, MinValue) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_LimitSettings, MaxValue) == 0x0020);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_Settings, Limits) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_Settings, Shape) == 0x0060);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_Settings, Proxy) == 0x00E0);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector_Settings, FilteredChannels) == 0x0100);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector, InitialValue) == 0x01B0);
static_assert(offsetof(FRigUnit_HierarchyAddControlVector, Settings) == 0x01D0);
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_LimitSettings, LimitPitch) == 0x0000);
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_LimitSettings, LimitYaw) == 0x0002);
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_LimitSettings, LimitRoll) == 0x0004);
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_LimitSettings, MinValue) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_LimitSettings, MaxValue) == 0x0020);
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_Settings, Limits) == 0x0010);
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_Settings, Shape) == 0x0050);
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_Settings, Proxy) == 0x00D0);
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator_Settings, FilteredChannels) == 0x00F0);
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator, InitialValue) == 0x01B0);
static_assert(offsetof(FRigUnit_HierarchyAddControlRotator, Settings) == 0x01D0);
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_Settings, Shape) == 0x0010);
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_Settings, Proxy) == 0x0090);
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform_Settings, FilteredChannels) == 0x00B0);
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform, InitialValue) == 0x01B0);
static_assert(offsetof(FRigUnit_HierarchyAddControlTransform, Settings) == 0x0210);
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector2D, InitialValue) == 0x0150);
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector2D, MinimumValue) == 0x0160);
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector2D, MaximumValue) == 0x0170);
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector, InitialValue) == 0x0150);
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector, MinimumValue) == 0x0168);
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelVector, MaximumValue) == 0x0180);
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelRotator, InitialValue) == 0x0150);
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelRotator, MinimumValue) == 0x0168);
static_assert(offsetof(FRigUnit_HierarchyAddAnimationChannelRotator, MaximumValue) == 0x0180);
static_assert(offsetof(FRigUnit_HierarchyGetShapeSettings, Item) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetShapeSettings, Settings) == 0x0020);
static_assert(offsetof(FRigUnit_HierarchySetShapeSettings, Item) == 0x0130);
static_assert(offsetof(FRigUnit_HierarchySetShapeSettings, Settings) == 0x0140);
static_assert(offsetof(FRigUnit_HierarchyGetParent, Child) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetParent, Parent) == 0x0014);
static_assert(offsetof(FRigUnit_HierarchyGetParent, CachedChild) == 0x0020);
static_assert(offsetof(FRigUnit_HierarchyGetParent, CachedParent) == 0x0040);
static_assert(offsetof(FRigUnit_HierarchyGetParents, Child) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetParents, Parents) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetParents, CachedChild) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetParents, CachedParents) == 0x0048);
static_assert(offsetof(FRigUnit_HierarchyGetParentsItemArray, Child) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetParentsItemArray, Parents) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetParentsItemArray, CachedChild) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetParentsItemArray, CachedParents) == 0x0048);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, Parent) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, Children) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, CachedParent) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetChildren, CachedChildren) == 0x0048);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, Item) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, Siblings) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, CachedItem) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetSiblings, CachedSiblings) == 0x0048);
static_assert(offsetof(FRigUnit_HierarchyGetSiblingsItemArray, Item) == 0x0008);
static_assert(offsetof(FRigUnit_HierarchyGetSiblingsItemArray, Siblings) == 0x0018);
static_assert(offsetof(FRigUnit_HierarchyGetSiblingsItemArray, CachedItem) == 0x0028);
static_assert(offsetof(FRigUnit_HierarchyGetSiblingsItemArray, CachedSiblings) == 0x0048);
static_assert(offsetof(FRigUnit_HierarchyGetPose, ElementType) == 0x0009);
static_assert(offsetof(FRigUnit_HierarchyGetPose, ItemsToGet) == 0x0010);
static_assert(offsetof(FRigUnit_HierarchyGetPose, Pose) == 0x0020);
static_assert(offsetof(FRigUnit_HierarchyGetPoseItemArray, ElementType) == 0x0009);
static_assert(offsetof(FRigUnit_HierarchyGetPoseItemArray, ItemsToGet) == 0x0010);
static_assert(offsetof(FRigUnit_HierarchyGetPoseItemArray, Pose) == 0x0020);
static_assert(offsetof(FRigUnit_HierarchySetPose, Pose) == 0x0130);
static_assert(offsetof(FRigUnit_HierarchySetPose, ElementType) == 0x01A0);
static_assert(offsetof(FRigUnit_HierarchySetPose, Space) == 0x01A1);
static_assert(offsetof(FRigUnit_HierarchySetPose, ItemsToSet) == 0x01A8);
static_assert(offsetof(FRigUnit_HierarchySetPoseItemArray, Pose) == 0x0130);
static_assert(offsetof(FRigUnit_HierarchySetPoseItemArray, ElementType) == 0x01A0);
static_assert(offsetof(FRigUnit_HierarchySetPoseItemArray, Space) == 0x01A1);
static_assert(offsetof(FRigUnit_HierarchySetPoseItemArray, ItemsToSet) == 0x01A8);
static_assert(offsetof(FRigUnit_PoseIsEmpty, Pose) == 0x0008);
static_assert(offsetof(FRigUnit_PoseGetItems, Pose) == 0x0008);
static_assert(offsetof(FRigUnit_PoseGetItems, ElementType) == 0x0078);
static_assert(offsetof(FRigUnit_PoseGetItems, Items) == 0x0080);
static_assert(offsetof(FRigUnit_PoseGetItemsItemArray, Pose) == 0x0008);
static_assert(offsetof(FRigUnit_PoseGetItemsItemArray, ElementType) == 0x0078);
static_assert(offsetof(FRigUnit_PoseGetItemsItemArray, Items) == 0x0080);
static_assert(offsetof(FRigUnit_PoseGetDelta, PoseA) == 0x0008);
static_assert(offsetof(FRigUnit_PoseGetDelta, PoseB) == 0x0078);
static_assert(offsetof(FRigUnit_PoseGetDelta, ElementType) == 0x00F8);
static_assert(offsetof(FRigUnit_PoseGetDelta, Space) == 0x00F9);
static_assert(offsetof(FRigUnit_PoseGetDelta, ItemsToCompare) == 0x0100);
static_assert(offsetof(FRigUnit_PoseGetDelta, ItemsWithDelta) == 0x0118);
static_assert(offsetof(FRigUnit_PoseGetTransform, Pose) == 0x0008);
static_assert(offsetof(FRigUnit_PoseGetTransform, Item) == 0x0078);
static_assert(offsetof(FRigUnit_PoseGetTransform, Space) == 0x0084);
static_assert(offsetof(FRigUnit_PoseGetTransform, Transform) == 0x0090);
static_assert(offsetof(FRigUnit_PoseGetTransformArray, Pose) == 0x0008);
static_assert(offsetof(FRigUnit_PoseGetTransformArray, Space) == 0x0078);
static_assert(offsetof(FRigUnit_PoseGetTransformArray, Transforms) == 0x0080);
static_assert(offsetof(FRigUnit_PoseGetCurve, Pose) == 0x0008);
static_assert(offsetof(FRigUnit_PoseGetCurve, Curve) == 0x0078);
static_assert(offsetof(FRigUnit_PoseLoop, BlockToRun) == 0x0130);
static_assert(offsetof(FRigUnit_PoseLoop, Pose) == 0x0138);
static_assert(offsetof(FRigUnit_PoseLoop, Item) == 0x01A8);
static_assert(offsetof(FRigUnit_PoseLoop, GlobalTransform) == 0x01C0);
static_assert(offsetof(FRigUnit_PoseLoop, LocalTransform) == 0x0220);
static_assert(offsetof(FRigUnit_PoseLoop, Completed) == 0x0290);
static_assert(offsetof(FRigUnit_InteractionExecution, ExecuteContext) == 0x0010);
static_assert(offsetof(FRigUnit_InverseExecution, ExecuteContext) == 0x0010);
static_assert(offsetof(FRigUnit_IsInteracting, Items) == 0x0010);
static_assert(offsetof(FRigUnit_ItemExists, Item) == 0x0008);
static_assert(offsetof(FRigUnit_ItemExists, CachedIndex) == 0x0018);
static_assert(offsetof(FRigUnit_ItemReplace, Item) == 0x0008);
static_assert(offsetof(FRigUnit_ItemReplace, Old) == 0x0014);
static_assert(offsetof(FRigUnit_ItemReplace, New) == 0x001C);
static_assert(offsetof(FRigUnit_ItemReplace, Result) == 0x0024);
static_assert(offsetof(FRigUnit_ItemEquals, A) == 0x0008);
static_assert(offsetof(FRigUnit_ItemEquals, B) == 0x0014);
static_assert(offsetof(FRigUnit_ItemNotEquals, A) == 0x0008);
static_assert(offsetof(FRigUnit_ItemNotEquals, B) == 0x0014);
static_assert(offsetof(FRigUnit_ItemTypeEquals, A) == 0x0008);
static_assert(offsetof(FRigUnit_ItemTypeEquals, B) == 0x0014);
static_assert(offsetof(FRigUnit_ItemTypeNotEquals, A) == 0x0008);
static_assert(offsetof(FRigUnit_ItemTypeNotEquals, B) == 0x0014);
static_assert(offsetof(FRigUnit_ItemToName, Value) == 0x0008);
static_assert(offsetof(FRigUnit_ItemToName, Result) == 0x0014);
static_assert(offsetof(FRigUnit_PrepareForExecution, ExecuteContext) == 0x0010);
static_assert(offsetof(FRigUnit_SequenceExecution, ExecuteContext) == 0x0010);
static_assert(offsetof(FRigUnit_SequenceExecution, A) == 0x0130);
static_assert(offsetof(FRigUnit_SequenceExecution, B) == 0x0250);
static_assert(offsetof(FRigUnit_SequenceExecution, C) == 0x0370);
static_assert(offsetof(FRigUnit_SequenceExecution, D) == 0x0490);
static_assert(offsetof(FRigUnit_SequenceAggregate, ExecuteContext) == 0x0010);
static_assert(offsetof(FRigUnit_SequenceAggregate, A) == 0x0130);
static_assert(offsetof(FRigUnit_SequenceAggregate, B) == 0x0250);
static_assert(offsetof(FRigUnit_AddBoneTransform, bone) == 0x0130);
static_assert(offsetof(FRigUnit_AddBoneTransform, Transform) == 0x0140);
static_assert(offsetof(FRigUnit_AddBoneTransform, CachedBone) == 0x01A8);
static_assert(offsetof(FRigUnit_Item, Item) == 0x0008);
static_assert(offsetof(FRigUnit_ItemArray, Items) == 0x0008);
static_assert(offsetof(FRigUnit_BoneName, bone) == 0x0008);
static_assert(offsetof(FRigUnit_SpaceName, Space) == 0x0008);
static_assert(offsetof(FRigUnit_ControlName, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetAnimationChannelBase, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetAnimationChannelBase, Channel) == 0x0010);
static_assert(offsetof(FRigUnit_GetAnimationChannelBase, CachedChannelKey) == 0x001C);
static_assert(offsetof(FRigUnit_GetVector2DAnimationChannel, Value) == 0x0030);
static_assert(offsetof(FRigUnit_GetVectorAnimationChannel, Value) == 0x0030);
static_assert(offsetof(FRigUnit_GetRotatorAnimationChannel, Value) == 0x0030);
static_assert(offsetof(FRigUnit_GetTransformAnimationChannel, Value) == 0x0030);
static_assert(offsetof(FRigUnit_SetAnimationChannelBase, ExecuteContext) == 0x0030);
static_assert(offsetof(FRigUnit_SetVector2DAnimationChannel, Value) == 0x0150);
static_assert(offsetof(FRigUnit_SetVectorAnimationChannel, Value) == 0x0150);
static_assert(offsetof(FRigUnit_SetRotatorAnimationChannel, Value) == 0x0150);
static_assert(offsetof(FRigUnit_SetTransformAnimationChannel, Value) == 0x0150);
static_assert(offsetof(FRigUnit_GetBoneTransform, bone) == 0x0008);
static_assert(offsetof(FRigUnit_GetBoneTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetBoneTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetBoneTransform, CachedBone) == 0x0080);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlInitialTransform, CachedControlIndex) == 0x0080);
static_assert(offsetof(FRigUnit_GetControlBool, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlBool, CachedControlIndex) == 0x0018);
static_assert(offsetof(FRigUnit_GetControlFloat, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlFloat, CachedControlIndex) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlInteger, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlInteger, CachedControlIndex) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlVector2D, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlVector2D, Vector) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlVector2D, Minimum) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlVector2D, Maximum) == 0x0030);
static_assert(offsetof(FRigUnit_GetControlVector2D, CachedControlIndex) == 0x0040);
static_assert(offsetof(FRigUnit_GetControlVector, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlVector, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlVector, Vector) == 0x0018);
static_assert(offsetof(FRigUnit_GetControlVector, Minimum) == 0x0030);
static_assert(offsetof(FRigUnit_GetControlVector, Maximum) == 0x0048);
static_assert(offsetof(FRigUnit_GetControlVector, CachedControlIndex) == 0x0060);
static_assert(offsetof(FRigUnit_GetControlRotator, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlRotator, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlRotator, Rotator) == 0x0018);
static_assert(offsetof(FRigUnit_GetControlRotator, Minimum) == 0x0030);
static_assert(offsetof(FRigUnit_GetControlRotator, Maximum) == 0x0048);
static_assert(offsetof(FRigUnit_GetControlRotator, CachedControlIndex) == 0x0060);
static_assert(offsetof(FRigUnit_GetControlTransform, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetControlTransform, Minimum) == 0x0080);
static_assert(offsetof(FRigUnit_GetControlTransform, Maximum) == 0x00E0);
static_assert(offsetof(FRigUnit_GetControlTransform, CachedControlIndex) == 0x0140);
static_assert(offsetof(FRigUnit_GetCurveValue, Curve) == 0x0008);
static_assert(offsetof(FRigUnit_GetCurveValue, CachedCurveIndex) == 0x0018);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, bone) == 0x0008);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetInitialBoneTransform, CachedBone) == 0x0080);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, bone) == 0x0008);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Space) == 0x0010);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, CachedBone) == 0x0080);
static_assert(offsetof(FRigUnit_GetRelativeBoneTransform, CachedSpace) == 0x00A0);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, Child) == 0x0008);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, Parent) == 0x0018);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, RelativeTransform) == 0x0030);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, CachedChild) == 0x0090);
static_assert(offsetof(FRigUnit_GetRelativeTransformForItem, CachedParent) == 0x00B0);
static_assert(offsetof(FRigUnit_GetSpaceTransform, Space) == 0x0008);
static_assert(offsetof(FRigUnit_GetSpaceTransform, SpaceType) == 0x0010);
static_assert(offsetof(FRigUnit_GetSpaceTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetSpaceTransform, CachedSpaceIndex) == 0x0080);
static_assert(offsetof(FRigUnit_GetTransform, Item) == 0x0008);
static_assert(offsetof(FRigUnit_GetTransform, Space) == 0x0014);
static_assert(offsetof(FRigUnit_GetTransform, Transform) == 0x0020);
static_assert(offsetof(FRigUnit_GetTransform, CachedIndex) == 0x0080);
static_assert(offsetof(FRigUnit_GetTransformArray, Items) == 0x0008);
static_assert(offsetof(FRigUnit_GetTransformArray, Space) == 0x0018);
static_assert(offsetof(FRigUnit_GetTransformArray, Transforms) == 0x0020);
static_assert(offsetof(FRigUnit_GetTransformArray, CachedIndex) == 0x0030);
static_assert(offsetof(FRigUnit_GetTransformItemArray, Items) == 0x0008);
static_assert(offsetof(FRigUnit_GetTransformItemArray, Space) == 0x0018);
static_assert(offsetof(FRigUnit_GetTransformItemArray, Transforms) == 0x0020);
static_assert(offsetof(FRigUnit_GetTransformItemArray, CachedIndex) == 0x0030);
static_assert(offsetof(FRigUnit_RemoveMetadata, Item) == 0x0130);
static_assert(offsetof(FRigUnit_RemoveMetadata, Name) == 0x013C);
static_assert(offsetof(FRigUnit_RemoveMetadata, CachedIndex) == 0x0148);
static_assert(offsetof(FRigUnit_RemoveAllMetadata, Item) == 0x0130);
static_assert(offsetof(FRigUnit_RemoveAllMetadata, CachedIndex) == 0x0140);
static_assert(offsetof(FRigUnit_HasMetadata, Item) == 0x0008);
static_assert(offsetof(FRigUnit_HasMetadata, Name) == 0x0014);
static_assert(offsetof(FRigUnit_HasMetadata, Type) == 0x001C);
static_assert(offsetof(FRigUnit_HasMetadata, CachedIndex) == 0x0020);
static_assert(offsetof(FRigUnit_FindItemsWithMetadata, Name) == 0x0008);
static_assert(offsetof(FRigUnit_FindItemsWithMetadata, Type) == 0x0010);
static_assert(offsetof(FRigUnit_FindItemsWithMetadata, Items) == 0x0018);
static_assert(offsetof(FRigUnit_GetMetadataTags, Item) == 0x0008);
static_assert(offsetof(FRigUnit_GetMetadataTags, Tags) == 0x0018);
static_assert(offsetof(FRigUnit_GetMetadataTags, CachedIndex) == 0x0028);
static_assert(offsetof(FRigUnit_SetMetadataTag, Item) == 0x0130);
static_assert(offsetof(FRigUnit_SetMetadataTag, Tag) == 0x013C);
static_assert(offsetof(FRigUnit_SetMetadataTag, CachedIndex) == 0x0148);
static_assert(offsetof(FRigUnit_SetMetadataTagArray, Item) == 0x0130);
static_assert(offsetof(FRigUnit_SetMetadataTagArray, Tags) == 0x0140);
static_assert(offsetof(FRigUnit_SetMetadataTagArray, CachedIndex) == 0x0150);
static_assert(offsetof(FRigUnit_RemoveMetadataTag, Item) == 0x0130);
static_assert(offsetof(FRigUnit_RemoveMetadataTag, Tag) == 0x013C);
static_assert(offsetof(FRigUnit_RemoveMetadataTag, CachedIndex) == 0x0148);
static_assert(offsetof(FRigUnit_HasMetadataTag, Item) == 0x0008);
static_assert(offsetof(FRigUnit_HasMetadataTag, Tag) == 0x0014);
static_assert(offsetof(FRigUnit_HasMetadataTag, CachedIndex) == 0x0020);
static_assert(offsetof(FRigUnit_HasMetadataTagArray, Item) == 0x0008);
static_assert(offsetof(FRigUnit_HasMetadataTagArray, Tags) == 0x0018);
static_assert(offsetof(FRigUnit_HasMetadataTagArray, CachedIndex) == 0x0030);
static_assert(offsetof(FRigUnit_FindItemsWithMetadataTag, Tag) == 0x0008);
static_assert(offsetof(FRigUnit_FindItemsWithMetadataTag, Items) == 0x0010);
static_assert(offsetof(FRigUnit_FindItemsWithMetadataTagArray, Tags) == 0x0008);
static_assert(offsetof(FRigUnit_FindItemsWithMetadataTagArray, Items) == 0x0018);
static_assert(offsetof(FRigUnit_FilterItemsByMetadataTags, Items) == 0x0008);
static_assert(offsetof(FRigUnit_FilterItemsByMetadataTags, Tags) == 0x0018);
static_assert(offsetof(FRigUnit_FilterItemsByMetadataTags, Result) == 0x0030);
static_assert(offsetof(FRigUnit_FilterItemsByMetadataTags, CachedIndices) == 0x0040);
static_assert(offsetof(FRigUnit_OffsetTransformForItem, Item) == 0x0130);
static_assert(offsetof(FRigUnit_OffsetTransformForItem, OffsetTransform) == 0x0140);
static_assert(offsetof(FRigUnit_OffsetTransformForItem, CachedIndex) == 0x01A8);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Subject) == 0x0130);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Parents) == 0x0140);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, InitialGlobalTransform) == 0x0150);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, Transform) == 0x01C0);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, CachedSubject) == 0x0228);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, CachedParent) == 0x0248);
static_assert(offsetof(FRigUnit_ParentSwitchConstraint, RelativeOffset) == 0x0270);
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, Subject) == 0x0130);
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, Parents) == 0x0140);
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, InitialGlobalTransform) == 0x0150);
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, Transform) == 0x01C0);
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, CachedSubject) == 0x0228);
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, CachedParent) == 0x0248);
static_assert(offsetof(FRigUnit_ParentSwitchConstraintArray, RelativeOffset) == 0x0270);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, Child) == 0x0008);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, OldParent) == 0x0018);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, NewParent) == 0x0028);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, Transform) == 0x0040);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedChild) == 0x00A0);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedOldParent) == 0x00C0);
static_assert(offsetof(FRigUnit_ProjectTransformToNewParent, CachedNewParent) == 0x00E0);
static_assert(offsetof(FRigUnit_PropagateTransform, Item) == 0x0130);
static_assert(offsetof(FRigUnit_PropagateTransform, CachedIndex) == 0x0140);
static_assert(offsetof(FRigUnit_SendEvent, Event) == 0x0130);
static_assert(offsetof(FRigUnit_SendEvent, Item) == 0x0134);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, bone) == 0x0130);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Transform) == 0x0140);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Result) == 0x01A0);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, Space) == 0x0200);
static_assert(offsetof(FRigUnit_SetBoneInitialTransform, CachedBone) == 0x0208);
static_assert(offsetof(FRigUnit_SetBoneRotation, bone) == 0x0130);
static_assert(offsetof(FRigUnit_SetBoneRotation, Rotation) == 0x0140);
static_assert(offsetof(FRigUnit_SetBoneRotation, Space) == 0x0160);
static_assert(offsetof(FRigUnit_SetBoneRotation, CachedBone) == 0x0170);
static_assert(offsetof(FRigUnit_SetBoneTransform, bone) == 0x0130);
static_assert(offsetof(FRigUnit_SetBoneTransform, Transform) == 0x0140);
static_assert(offsetof(FRigUnit_SetBoneTransform, Result) == 0x01A0);
static_assert(offsetof(FRigUnit_SetBoneTransform, Space) == 0x0200);
static_assert(offsetof(FRigUnit_SetBoneTransform, CachedBone) == 0x0210);
static_assert(offsetof(FRigUnit_SetBoneTranslation, bone) == 0x0130);
static_assert(offsetof(FRigUnit_SetBoneTranslation, Translation) == 0x0138);
static_assert(offsetof(FRigUnit_SetBoneTranslation, Space) == 0x0150);
static_assert(offsetof(FRigUnit_SetBoneTranslation, CachedBone) == 0x0160);
static_assert(offsetof(FRigUnit_GetControlColor, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlColor, Color) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlColor, CachedControlIndex) == 0x0020);
static_assert(offsetof(FRigUnit_SetControlColor, Control) == 0x0130);
static_assert(offsetof(FRigUnit_SetControlColor, Color) == 0x0138);
static_assert(offsetof(FRigUnit_SetControlColor, CachedControlIndex) == 0x0148);
static_assert(offsetof(FRigUnit_GetControlDrivenList, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlDrivenList, Driven) == 0x0010);
static_assert(offsetof(FRigUnit_GetControlDrivenList, CachedControlIndex) == 0x0020);
static_assert(offsetof(FRigUnit_SetControlDrivenList, Control) == 0x0130);
static_assert(offsetof(FRigUnit_SetControlDrivenList, Driven) == 0x0138);
static_assert(offsetof(FRigUnit_SetControlDrivenList, CachedControlIndex) == 0x0148);
static_assert(offsetof(FRigUnit_SetControlOffset, Control) == 0x0130);
static_assert(offsetof(FRigUnit_SetControlOffset, Offset) == 0x0140);
static_assert(offsetof(FRigUnit_SetControlOffset, Space) == 0x01A0);
static_assert(offsetof(FRigUnit_SetControlOffset, CachedControlIndex) == 0x01A8);
static_assert(offsetof(FRigUnit_GetShapeTransform, Control) == 0x0008);
static_assert(offsetof(FRigUnit_GetShapeTransform, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_GetShapeTransform, CachedControlIndex) == 0x0070);
static_assert(offsetof(FRigUnit_SetShapeTransform, Control) == 0x0130);
static_assert(offsetof(FRigUnit_SetShapeTransform, Transform) == 0x0140);
static_assert(offsetof(FRigUnit_SetShapeTransform, CachedControlIndex) == 0x01A0);
static_assert(offsetof(FRigUnit_SetControlBool, Control) == 0x0130);
static_assert(offsetof(FRigUnit_SetControlBool, CachedControlIndex) == 0x0140);
static_assert(offsetof(FRigUnit_SetMultiControlBool_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlBool, Entries) == 0x0130);
static_assert(offsetof(FRigUnit_SetMultiControlBool, CachedControlIndices) == 0x0140);
static_assert(offsetof(FRigUnit_SetControlFloat, Control) == 0x0130);
static_assert(offsetof(FRigUnit_SetControlFloat, CachedControlIndex) == 0x0140);
static_assert(offsetof(FRigUnit_SetMultiControlFloat_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlFloat, Entries) == 0x0130);
static_assert(offsetof(FRigUnit_SetMultiControlFloat, CachedControlIndices) == 0x0148);
static_assert(offsetof(FRigUnit_SetControlInteger, Control) == 0x0130);
static_assert(offsetof(FRigUnit_SetControlInteger, CachedControlIndex) == 0x0140);
static_assert(offsetof(FRigUnit_SetMultiControlInteger_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlInteger, Entries) == 0x0130);
static_assert(offsetof(FRigUnit_SetMultiControlInteger, CachedControlIndices) == 0x0148);
static_assert(offsetof(FRigUnit_SetControlVector2D, Control) == 0x0130);
static_assert(offsetof(FRigUnit_SetControlVector2D, Vector) == 0x0140);
static_assert(offsetof(FRigUnit_SetControlVector2D, CachedControlIndex) == 0x0150);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D_Entry, Vector) == 0x0008);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D, Entries) == 0x0130);
static_assert(offsetof(FRigUnit_SetMultiControlVector2D, CachedControlIndices) == 0x0148);
static_assert(offsetof(FRigUnit_SetControlVector, Control) == 0x0130);
static_assert(offsetof(FRigUnit_SetControlVector, Vector) == 0x0140);
static_assert(offsetof(FRigUnit_SetControlVector, Space) == 0x0158);
static_assert(offsetof(FRigUnit_SetControlVector, CachedControlIndex) == 0x0160);
static_assert(offsetof(FRigUnit_SetControlRotator, Control) == 0x0130);
static_assert(offsetof(FRigUnit_SetControlRotator, Rotator) == 0x0140);
static_assert(offsetof(FRigUnit_SetControlRotator, Space) == 0x0158);
static_assert(offsetof(FRigUnit_SetControlRotator, CachedControlIndex) == 0x0160);
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Control) == 0x0000);
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Rotator) == 0x0008);
static_assert(offsetof(FRigUnit_SetMultiControlRotator_Entry, Space) == 0x0020);
static_assert(offsetof(FRigUnit_SetMultiControlRotator, Entries) == 0x0130);
static_assert(offsetof(FRigUnit_SetMultiControlRotator, CachedControlIndices) == 0x0148);
static_assert(offsetof(FRigUnit_SetControlTransform, Control) == 0x0130);
static_assert(offsetof(FRigUnit_SetControlTransform, Transform) == 0x0140);
static_assert(offsetof(FRigUnit_SetControlTransform, Space) == 0x01A0);
static_assert(offsetof(FRigUnit_SetControlTransform, CachedControlIndex) == 0x01A8);
static_assert(offsetof(FRigUnit_GetControlVisibility, Item) == 0x0008);
static_assert(offsetof(FRigUnit_GetControlVisibility, CachedControlIndex) == 0x0018);
static_assert(offsetof(FRigUnit_SetControlVisibility, Item) == 0x0130);
static_assert(offsetof(FRigUnit_SetControlVisibility, Pattern) == 0x0140);
static_assert(offsetof(FRigUnit_SetControlVisibility, CachedControlIndices) == 0x0158);
static_assert(offsetof(FRigUnit_SetCurveValue, Curve) == 0x0130);
static_assert(offsetof(FRigUnit_SetCurveValue, CachedCurveIndex) == 0x0140);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, bone) == 0x0130);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Space) == 0x0138);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, Transform) == 0x0140);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, CachedBone) == 0x01A8);
static_assert(offsetof(FRigUnit_SetRelativeBoneTransform, CachedSpaceIndex) == 0x01C8);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Child) == 0x0130);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Parent) == 0x013C);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, Value) == 0x0150);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, CachedChild) == 0x01B8);
static_assert(offsetof(FRigUnit_SetRelativeTransformForItem, CachedParent) == 0x01D8);
static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, Child) == 0x0130);
static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, Parent) == 0x013C);
static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, Value) == 0x0150);
static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, CachedChild) == 0x0170);
static_assert(offsetof(FRigUnit_SetRelativeTranslationForItem, CachedParent) == 0x0190);
static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, Child) == 0x0130);
static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, Parent) == 0x013C);
static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, Value) == 0x0150);
static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, CachedChild) == 0x0178);
static_assert(offsetof(FRigUnit_SetRelativeRotationForItem, CachedParent) == 0x0198);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, SpaceName) == 0x0130);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Transform) == 0x0140);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Result) == 0x01A0);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, Space) == 0x0200);
static_assert(offsetof(FRigUnit_SetSpaceInitialTransform, CachedSpaceIndex) == 0x0208);
static_assert(offsetof(FRigUnit_SetSpaceTransform, Space) == 0x0130);
static_assert(offsetof(FRigUnit_SetSpaceTransform, Transform) == 0x0140);
static_assert(offsetof(FRigUnit_SetSpaceTransform, SpaceType) == 0x01A0);
static_assert(offsetof(FRigUnit_SetSpaceTransform, CachedSpaceIndex) == 0x01A8);
static_assert(offsetof(FRigUnit_SetTransform, Item) == 0x0130);
static_assert(offsetof(FRigUnit_SetTransform, Space) == 0x013C);
static_assert(offsetof(FRigUnit_SetTransform, Value) == 0x0140);
static_assert(offsetof(FRigUnit_SetTransform, CachedIndex) == 0x01A8);
static_assert(offsetof(FRigUnit_SetTranslation, Item) == 0x0130);
static_assert(offsetof(FRigUnit_SetTranslation, Space) == 0x013C);
static_assert(offsetof(FRigUnit_SetTranslation, Value) == 0x0140);
static_assert(offsetof(FRigUnit_SetTranslation, CachedIndex) == 0x0160);
static_assert(offsetof(FRigUnit_SetRotation, Item) == 0x0130);
static_assert(offsetof(FRigUnit_SetRotation, Space) == 0x013C);
static_assert(offsetof(FRigUnit_SetRotation, Value) == 0x0140);
static_assert(offsetof(FRigUnit_SetRotation, CachedIndex) == 0x0168);
static_assert(offsetof(FRigUnit_SetScale, Item) == 0x0130);
static_assert(offsetof(FRigUnit_SetScale, Space) == 0x013C);
static_assert(offsetof(FRigUnit_SetScale, Scale) == 0x0140);
static_assert(offsetof(FRigUnit_SetScale, CachedIndex) == 0x0160);
static_assert(offsetof(FRigUnit_SetTransformArray, Items) == 0x0130);
static_assert(offsetof(FRigUnit_SetTransformArray, Space) == 0x0140);
static_assert(offsetof(FRigUnit_SetTransformArray, Transforms) == 0x0148);
static_assert(offsetof(FRigUnit_SetTransformArray, CachedIndex) == 0x0160);
static_assert(offsetof(FRigUnit_SetTransformItemArray, Items) == 0x0130);
static_assert(offsetof(FRigUnit_SetTransformItemArray, Space) == 0x0140);
static_assert(offsetof(FRigUnit_SetTransformItemArray, Transforms) == 0x0148);
static_assert(offsetof(FRigUnit_SetTransformItemArray, CachedIndex) == 0x0160);
static_assert(offsetof(FRigUnit_UnsetCurveValue, Curve) == 0x0130);
static_assert(offsetof(FRigUnit_UnsetCurveValue, CachedCurveIndex) == 0x0138);
static_assert(offsetof(FRigUnit_ToWorldSpace_Transform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_ToWorldSpace_Transform, World) == 0x0070);
static_assert(offsetof(FRigUnit_ToRigSpace_Transform, Value) == 0x0010);
static_assert(offsetof(FRigUnit_ToRigSpace_Transform, Global) == 0x0070);
static_assert(offsetof(FRigUnit_ToWorldSpace_Location, Value) == 0x0008);
static_assert(offsetof(FRigUnit_ToWorldSpace_Location, World) == 0x0020);
static_assert(offsetof(FRigUnit_ToRigSpace_Location, Value) == 0x0008);
static_assert(offsetof(FRigUnit_ToRigSpace_Location, Global) == 0x0020);
static_assert(offsetof(FRigUnit_ToWorldSpace_Rotation, Value) == 0x0010);
static_assert(offsetof(FRigUnit_ToWorldSpace_Rotation, World) == 0x0030);
static_assert(offsetof(FRigUnit_ToRigSpace_Rotation, Value) == 0x0010);
static_assert(offsetof(FRigUnit_ToRigSpace_Rotation, Global) == 0x0030);
static_assert(offsetof(FRigUnit_BoneHarmonics_BoneTarget, bone) == 0x0000);
static_assert(offsetof(FRigUnit_Harmonics_TargetItem, Item) == 0x0000);
static_assert(offsetof(FRigUnit_BoneHarmonics_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_BoneHarmonics_WorkData, WaveTime) == 0x0010);
static_assert(offsetof(FRigUnit_BoneHarmonics, Bones) == 0x0130);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveSpeed) == 0x0140);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveFrequency) == 0x0158);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveAmplitude) == 0x0170);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveOffset) == 0x0188);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveNoise) == 0x01A0);
static_assert(offsetof(FRigUnit_BoneHarmonics, WaveEase) == 0x01B8);
static_assert(offsetof(FRigUnit_BoneHarmonics, RotationOrder) == 0x01C4);
static_assert(offsetof(FRigUnit_BoneHarmonics, WorkData) == 0x01C8);
static_assert(offsetof(FRigUnit_ItemHarmonics, Targets) == 0x0130);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveSpeed) == 0x0140);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveFrequency) == 0x0158);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveAmplitude) == 0x0170);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveOffset) == 0x0188);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveNoise) == 0x01A0);
static_assert(offsetof(FRigUnit_ItemHarmonics, WaveEase) == 0x01B8);
static_assert(offsetof(FRigUnit_ItemHarmonics, RotationOrder) == 0x01C4);
static_assert(offsetof(FRigUnit_ItemHarmonics, WorkData) == 0x01C8);
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachTarget) == 0x0008);
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachAxis) == 0x0020);
static_assert(offsetof(FRigUnit_ChainHarmonics_Reach, ReachEase) == 0x0040);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveFrequency) == 0x0008);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveAmplitude) == 0x0020);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveOffset) == 0x0038);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveNoise) == 0x0050);
static_assert(offsetof(FRigUnit_ChainHarmonics_Wave, WaveEase) == 0x0070);
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumGravity) == 0x0008);
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, PendulumEase) == 0x0030);
static_assert(offsetof(FRigUnit_ChainHarmonics_Pendulum, UnwindAxis) == 0x0038);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, time) == 0x0000);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Items) == 0x0018);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, Ratio) == 0x0028);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, LocalTip) == 0x0038);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumTip) == 0x0048);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumPosition) == 0x0058);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, PendulumVelocity) == 0x0068);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, HierarchyLine) == 0x0078);
static_assert(offsetof(FRigUnit_ChainHarmonics_WorkData, VelocityLines) == 0x0088);
static_assert(offsetof(FRigUnit_ChainHarmonics, ChainRoot) == 0x0130);
static_assert(offsetof(FRigUnit_ChainHarmonics, Speed) == 0x0138);
static_assert(offsetof(FRigUnit_ChainHarmonics, Reach) == 0x0150);
static_assert(offsetof(FRigUnit_ChainHarmonics, Wave) == 0x0198);
static_assert(offsetof(FRigUnit_ChainHarmonics, WaveCurve) == 0x0210);
static_assert(offsetof(FRigUnit_ChainHarmonics, Pendulum) == 0x0298);
static_assert(offsetof(FRigUnit_ChainHarmonics, DrawWorldOffset) == 0x0300);
static_assert(offsetof(FRigUnit_ChainHarmonics, WorkData) == 0x0360);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, ChainRoot) == 0x0130);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Speed) == 0x0140);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Reach) == 0x0158);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Wave) == 0x01A0);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, WaveCurve) == 0x0218);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, Pendulum) == 0x02A0);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, DrawWorldOffset) == 0x0300);
static_assert(offsetof(FRigUnit_ChainHarmonicsPerItem, WorkData) == 0x0360);
static_assert(offsetof(FRigUnit_AimBone_Target, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_AimBone_Target, Target) == 0x0020);
static_assert(offsetof(FRigUnit_AimBone_Target, Kind) == 0x0038);
static_assert(offsetof(FRigUnit_AimBone_Target, Space) == 0x003C);
static_assert(offsetof(FRigUnit_AimItem_Target, Axis) == 0x0008);
static_assert(offsetof(FRigUnit_AimItem_Target, Target) == 0x0020);
static_assert(offsetof(FRigUnit_AimItem_Target, Kind) == 0x0038);
static_assert(offsetof(FRigUnit_AimItem_Target, Space) == 0x003C);
static_assert(offsetof(FRigUnit_AimBone_DebugSettings, WorldOffset) == 0x0010);
static_assert(offsetof(FRigUnit_AimBoneMath, InputTransform) == 0x0010);
static_assert(offsetof(FRigUnit_AimBoneMath, Primary) == 0x0070);
static_assert(offsetof(FRigUnit_AimBoneMath, Secondary) == 0x00B8);
static_assert(offsetof(FRigUnit_AimBoneMath, Result) == 0x0110);
static_assert(offsetof(FRigUnit_AimBoneMath, DebugSettings) == 0x0170);
static_assert(offsetof(FRigUnit_AimBoneMath, PrimaryCachedSpace) == 0x01E0);
static_assert(offsetof(FRigUnit_AimBoneMath, SecondaryCachedSpace) == 0x0200);
static_assert(offsetof(FRigUnit_AimBone, bone) == 0x0130);
static_assert(offsetof(FRigUnit_AimBone, Primary) == 0x0138);
static_assert(offsetof(FRigUnit_AimBone, Secondary) == 0x0180);
static_assert(offsetof(FRigUnit_AimBone, DebugSettings) == 0x01D0);
static_assert(offsetof(FRigUnit_AimBone, CachedBoneIndex) == 0x0240);
static_assert(offsetof(FRigUnit_AimBone, PrimaryCachedSpace) == 0x0260);
static_assert(offsetof(FRigUnit_AimBone, SecondaryCachedSpace) == 0x0280);
static_assert(offsetof(FRigUnit_AimItem, Item) == 0x0130);
static_assert(offsetof(FRigUnit_AimItem, Primary) == 0x0140);
static_assert(offsetof(FRigUnit_AimItem, Secondary) == 0x0188);
static_assert(offsetof(FRigUnit_AimItem, DebugSettings) == 0x01E0);
static_assert(offsetof(FRigUnit_AimItem, CachedItem) == 0x0250);
static_assert(offsetof(FRigUnit_AimItem, PrimaryCachedSpace) == 0x0270);
static_assert(offsetof(FRigUnit_AimItem, SecondaryCachedSpace) == 0x0290);
static_assert(offsetof(FRigUnit_AimConstraint_WorldUp, Target) == 0x0000);
static_assert(offsetof(FRigUnit_AimConstraint_WorldUp, Kind) == 0x0018);
static_assert(offsetof(FRigUnit_AimConstraint_WorldUp, Space) == 0x001C);
static_assert(offsetof(FRigUnit_AimConstraint_AdvancedSettings, DebugSettings) == 0x0000);
static_assert(offsetof(FRigUnit_AimConstraint_AdvancedSettings, RotationOrderForFilter) == 0x0070);
static_assert(offsetof(FConstraintParent, Item) == 0x0000);
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, Child) == 0x0130);
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, Filter) == 0x013D);
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, AimAxis) == 0x0140);
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, UpAxis) == 0x0158);
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, WorldUp) == 0x0170);
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, Parents) == 0x0198);
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, AdvancedSettings) == 0x01B0);
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, WorldUpSpaceCache) == 0x0238);
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, ChildCache) == 0x0258);
static_assert(offsetof(FRigUnit_AimConstraintLocalSpaceOffset, ParentCaches) == 0x0278);
static_assert(offsetof(FRigUnit_CCDIK_RotationLimit, bone) == 0x0000);
static_assert(offsetof(FRigUnit_CCDIK_RotationLimitPerItem, Item) == 0x0000);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, Chain) == 0x0000);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, CachedItems) == 0x0010);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, RotationLimitIndex) == 0x0020);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, RotationLimitsPerItem) == 0x0030);
static_assert(offsetof(FRigUnit_CCDIK_WorkData, CachedEffector) == 0x0040);
static_assert(offsetof(FRigUnit_CCDIK, StartBone) == 0x0130);
static_assert(offsetof(FRigUnit_CCDIK, EffectorBone) == 0x0138);
static_assert(offsetof(FRigUnit_CCDIK, EffectorTransform) == 0x0140);
static_assert(offsetof(FRigUnit_CCDIK, RotationLimits) == 0x01B8);
static_assert(offsetof(FRigUnit_CCDIK, WorkData) == 0x01D0);
static_assert(offsetof(FRigUnit_CCDIKPerItem, Items) == 0x0130);
static_assert(offsetof(FRigUnit_CCDIKPerItem, EffectorTransform) == 0x0140);
static_assert(offsetof(FRigUnit_CCDIKPerItem, RotationLimits) == 0x01B8);
static_assert(offsetof(FRigUnit_CCDIKPerItem, WorkData) == 0x01D0);
static_assert(offsetof(FRigUnit_CCDIKItemArray, Items) == 0x0130);
static_assert(offsetof(FRigUnit_CCDIKItemArray, EffectorTransform) == 0x0140);
static_assert(offsetof(FRigUnit_CCDIKItemArray, RotationLimits) == 0x01B8);
static_assert(offsetof(FRigUnit_CCDIKItemArray, WorkData) == 0x01D0);
static_assert(offsetof(FRigUnit_DistributeRotation_Rotation, Rotation) == 0x0000);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationA) == 0x0010);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationB) == 0x0020);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemRotationT) == 0x0030);
static_assert(offsetof(FRigUnit_DistributeRotation_WorkData, ItemLocalTransforms) == 0x0040);
static_assert(offsetof(FRigUnit_DistributeRotation, StartBone) == 0x0130);
static_assert(offsetof(FRigUnit_DistributeRotation, EndBone) == 0x0138);
static_assert(offsetof(FRigUnit_DistributeRotation, Rotations) == 0x0140);
static_assert(offsetof(FRigUnit_DistributeRotation, RotationEaseType) == 0x0150);
static_assert(offsetof(FRigUnit_DistributeRotation, WorkData) == 0x0160);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, Items) == 0x0130);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, Rotations) == 0x0140);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, RotationEaseType) == 0x0150);
static_assert(offsetof(FRigUnit_DistributeRotationForCollection, WorkData) == 0x0158);
static_assert(offsetof(FRigUnit_DistributeRotationForItemArray, Items) == 0x0130);
static_assert(offsetof(FRigUnit_DistributeRotationForItemArray, Rotations) == 0x0140);
static_assert(offsetof(FRigUnit_DistributeRotationForItemArray, RotationEaseType) == 0x0150);
static_assert(offsetof(FRigUnit_DistributeRotationForItemArray, WorkData) == 0x0158);
static_assert(offsetof(FRigUnit_FABRIK_WorkData, Chain) == 0x0000);
static_assert(offsetof(FRigUnit_FABRIK_WorkData, CachedItems) == 0x0010);
static_assert(offsetof(FRigUnit_FABRIK_WorkData, CachedEffector) == 0x0020);
static_assert(offsetof(FRigUnit_FABRIK, StartBone) == 0x0130);
static_assert(offsetof(FRigUnit_FABRIK, EffectorBone) == 0x0138);
static_assert(offsetof(FRigUnit_FABRIK, EffectorTransform) == 0x0140);
static_assert(offsetof(FRigUnit_FABRIK, WorkData) == 0x01B0);
static_assert(offsetof(FRigUnit_FABRIKPerItem, Items) == 0x0130);
static_assert(offsetof(FRigUnit_FABRIKPerItem, EffectorTransform) == 0x0140);
static_assert(offsetof(FRigUnit_FABRIKPerItem, WorkData) == 0x01B0);
static_assert(offsetof(FRigUnit_FABRIKItemArray, Items) == 0x0130);
static_assert(offsetof(FRigUnit_FABRIKItemArray, EffectorTransform) == 0x0140);
static_assert(offsetof(FRigUnit_FABRIKItemArray, WorkData) == 0x01B0);
static_assert(offsetof(FRigUnit_FitChainToCurve_Rotation, Rotation) == 0x0000);
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, CurveColor) == 0x0008);
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, SegmentsColor) == 0x0018);
static_assert(offsetof(FRigUnit_FitChainToCurve_DebugSettings, WorldOffset) == 0x0030);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemPositions) == 0x0008);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemSegments) == 0x0018);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CurvePositions) == 0x0028);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CurveSegments) == 0x0038);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, CachedItems) == 0x0048);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationA) == 0x0058);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationB) == 0x0068);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemRotationT) == 0x0078);
static_assert(offsetof(FRigUnit_FitChainToCurve_WorkData, ItemLocalTransforms) == 0x0088);
static_assert(offsetof(FRigUnit_FitChainToCurve, StartBone) == 0x0130);
static_assert(offsetof(FRigUnit_FitChainToCurve, EndBone) == 0x0138);
static_assert(offsetof(FRigUnit_FitChainToCurve, Bezier) == 0x0140);
static_assert(offsetof(FRigUnit_FitChainToCurve, Alignment) == 0x01A0);
static_assert(offsetof(FRigUnit_FitChainToCurve, PrimaryAxis) == 0x01B0);
static_assert(offsetof(FRigUnit_FitChainToCurve, SecondaryAxis) == 0x01C8);
static_assert(offsetof(FRigUnit_FitChainToCurve, PoleVectorPosition) == 0x01E0);
static_assert(offsetof(FRigUnit_FitChainToCurve, Rotations) == 0x01F8);
static_assert(offsetof(FRigUnit_FitChainToCurve, RotationEaseType) == 0x0208);
static_assert(offsetof(FRigUnit_FitChainToCurve, DebugSettings) == 0x0220);
static_assert(offsetof(FRigUnit_FitChainToCurve, WorkData) == 0x02B0);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Items) == 0x0130);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Bezier) == 0x0140);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Alignment) == 0x01A0);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, PrimaryAxis) == 0x01B0);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, SecondaryAxis) == 0x01C8);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, PoleVectorPosition) == 0x01E0);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, Rotations) == 0x01F8);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, RotationEaseType) == 0x0208);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, DebugSettings) == 0x0220);
static_assert(offsetof(FRigUnit_FitChainToCurvePerItem, WorkData) == 0x02B0);
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, Items) == 0x0130);
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, Bezier) == 0x0140);
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, Alignment) == 0x01A0);
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, PrimaryAxis) == 0x01B0);
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, SecondaryAxis) == 0x01C8);
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, PoleVectorPosition) == 0x01E0);
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, Rotations) == 0x01F8);
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, RotationEaseType) == 0x0208);
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, DebugSettings) == 0x0220);
static_assert(offsetof(FRigUnit_FitChainToCurveItemArray, WorkData) == 0x02B0);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms_PerBone, bone) == 0x0000);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms_PerBone, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ModifyTransforms_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, BoneToModify) == 0x0130);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, Mode) == 0x014C);
static_assert(offsetof(FRigUnit_ModifyBoneTransforms, WorkData) == 0x0150);
static_assert(offsetof(FRigUnit_ModifyTransforms_PerItem, Item) == 0x0000);
static_assert(offsetof(FRigUnit_ModifyTransforms_PerItem, Transform) == 0x0010);
static_assert(offsetof(FRigUnit_ModifyTransforms, ItemToModify) == 0x0130);
static_assert(offsetof(FRigUnit_ModifyTransforms, Mode) == 0x014C);
static_assert(offsetof(FRigUnit_ModifyTransforms, WorkData) == 0x0150);
static_assert(offsetof(FRigUnit_MultiFABRIK_EndEffector, bone) == 0x0000);
static_assert(offsetof(FRigUnit_MultiFABRIK_EndEffector, Location) == 0x0008);
static_assert(offsetof(FRigUnit_MultiFABRIK, RootBone) == 0x0130);
static_assert(offsetof(FRigUnit_MultiFABRIK, Effectors) == 0x0138);
static_assert(offsetof(FRigUnit_MultiFABRIK, WorkData) == 0x0158);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, ItemSegments) == 0x0008);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, CachedItems) == 0x0018);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, Transforms) == 0x0028);
static_assert(offsetof(FRigUnit_SlideChain_WorkData, BlendedTransforms) == 0x0038);
static_assert(offsetof(FRigUnit_SlideChain, StartBone) == 0x0130);
static_assert(offsetof(FRigUnit_SlideChain, EndBone) == 0x0138);
static_assert(offsetof(FRigUnit_SlideChain, WorkData) == 0x0148);
static_assert(offsetof(FRigUnit_SlideChainPerItem, Items) == 0x0130);
static_assert(offsetof(FRigUnit_SlideChainPerItem, WorkData) == 0x0148);
static_assert(offsetof(FRigUnit_SlideChainItemArray, Items) == 0x0130);
static_assert(offsetof(FRigUnit_SlideChainItemArray, WorkData) == 0x0148);
static_assert(offsetof(FRigUnit_SphericalPoseReader, DriverItem) == 0x0134);
static_assert(offsetof(FRigUnit_SphericalPoseReader, DriverAxis) == 0x0140);
static_assert(offsetof(FRigUnit_SphericalPoseReader, RotationOffset) == 0x0158);
static_assert(offsetof(FRigUnit_SphericalPoseReader, ActiveRegionScaleFactors) == 0x0174);
static_assert(offsetof(FRigUnit_SphericalPoseReader, FalloffRegionScaleFactors) == 0x0188);
static_assert(offsetof(FRigUnit_SphericalPoseReader, OptionalParentItem) == 0x019C);
static_assert(offsetof(FRigUnit_SphericalPoseReader, Debug) == 0x01A8);
static_assert(offsetof(FRigUnit_SphericalPoseReader, InnerRegion) == 0x01B8);
static_assert(offsetof(FRigUnit_SphericalPoseReader, OuterRegion) == 0x01CC);
static_assert(offsetof(FRigUnit_SphericalPoseReader, DriverNormal) == 0x01E0);
static_assert(offsetof(FRigUnit_SphericalPoseReader, Driver2D) == 0x01F8);
static_assert(offsetof(FRigUnit_SphericalPoseReader, DriverCache) == 0x0210);
static_assert(offsetof(FRigUnit_SphericalPoseReader, OptionalParentCache) == 0x0230);
static_assert(offsetof(FRigUnit_SphericalPoseReader, LocalDriverTransformInit) == 0x0250);
static_assert(offsetof(FRigUnit_SphericalPoseReader, CachedRotationOffset) == 0x02B0);
static_assert(offsetof(FRigUnit_SpringIK_DebugSettings, Color) == 0x0008);
static_assert(offsetof(FRigUnit_SpringIK_DebugSettings, WorldOffset) == 0x0020);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, CachedBones) == 0x0000);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, CachedPoleVector) == 0x0010);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, Transforms) == 0x0030);
static_assert(offsetof(FRigUnit_SpringIK_WorkData, Simulation) == 0x0040);
static_assert(offsetof(FRigUnit_SpringIK, StartBone) == 0x0130);
static_assert(offsetof(FRigUnit_SpringIK, EndBone) == 0x0138);
static_assert(offsetof(FRigUnit_SpringIK, PoleVector) == 0x0158);
static_assert(offsetof(FRigUnit_SpringIK, PoleVectorKind) == 0x0171);
static_assert(offsetof(FRigUnit_SpringIK, PoleVectorSpace) == 0x0174);
static_assert(offsetof(FRigUnit_SpringIK, PrimaryAxis) == 0x0180);
static_assert(offsetof(FRigUnit_SpringIK, SecondaryAxis) == 0x0198);
static_assert(offsetof(FRigUnit_SpringIK, DebugSettings) == 0x01C0);
static_assert(offsetof(FRigUnit_SpringIK, WorkData) == 0x0240);
static_assert(offsetof(FConstraintTarget, Transform) == 0x0000);
static_assert(offsetof(FConstraintTarget, Filter) == 0x0065);
static_assert(offsetof(FRigUnit_TransformConstraint_WorkData, ConstraintData) == 0x0000);
static_assert(offsetof(FRigUnit_TransformConstraint_WorkData, ConstraintDataToTargets) == 0x0010);
static_assert(offsetof(FRigUnit_TransformConstraint, bone) == 0x0130);
static_assert(offsetof(FRigUnit_TransformConstraint, BaseTransformSpace) == 0x0138);
static_assert(offsetof(FRigUnit_TransformConstraint, BaseTransform) == 0x0140);
static_assert(offsetof(FRigUnit_TransformConstraint, BaseBone) == 0x01A0);
static_assert(offsetof(FRigUnit_TransformConstraint, Targets) == 0x01A8);
static_assert(offsetof(FRigUnit_TransformConstraint, WorkData) == 0x01C0);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, Item) == 0x0130);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseTransformSpace) == 0x013C);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseTransform) == 0x0140);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, BaseItem) == 0x01A0);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, Targets) == 0x01B0);
static_assert(offsetof(FRigUnit_TransformConstraintPerItem, WorkData) == 0x01C8);
static_assert(offsetof(FRigUnit_ParentConstraint_AdvancedSettings, InterpolationType) == 0x0000);
static_assert(offsetof(FRigUnit_ParentConstraint_AdvancedSettings, RotationOrderForFilter) == 0x0001);
static_assert(offsetof(FRigUnit_ParentConstraint, Child) == 0x0130);
static_assert(offsetof(FRigUnit_ParentConstraint, Filter) == 0x013D);
static_assert(offsetof(FRigUnit_ParentConstraint, Parents) == 0x0148);
static_assert(offsetof(FRigUnit_ParentConstraint, AdvancedSettings) == 0x0158);
static_assert(offsetof(FRigUnit_ParentConstraint, ChildCache) == 0x0160);
static_assert(offsetof(FRigUnit_ParentConstraint, ParentCaches) == 0x0180);
static_assert(offsetof(FRigUnit_PositionConstraint, Child) == 0x0130);
static_assert(offsetof(FRigUnit_PositionConstraint, Filter) == 0x013D);
static_assert(offsetof(FRigUnit_PositionConstraint, Parents) == 0x0140);
static_assert(offsetof(FRigUnit_PositionConstraintLocalSpaceOffset, Child) == 0x0130);
static_assert(offsetof(FRigUnit_PositionConstraintLocalSpaceOffset, Filter) == 0x013D);
static_assert(offsetof(FRigUnit_PositionConstraintLocalSpaceOffset, Parents) == 0x0140);
static_assert(offsetof(FRigUnit_PositionConstraintLocalSpaceOffset, ChildCache) == 0x0158);
static_assert(offsetof(FRigUnit_PositionConstraintLocalSpaceOffset, ParentCaches) == 0x0178);
static_assert(offsetof(FRigUnit_RotationConstraint_AdvancedSettings, InterpolationType) == 0x0000);
static_assert(offsetof(FRigUnit_RotationConstraint_AdvancedSettings, RotationOrderForFilter) == 0x0001);
static_assert(offsetof(FRigUnit_RotationConstraint, Child) == 0x0130);
static_assert(offsetof(FRigUnit_RotationConstraint, Filter) == 0x013D);
static_assert(offsetof(FRigUnit_RotationConstraint, Parents) == 0x0140);
static_assert(offsetof(FRigUnit_RotationConstraint, AdvancedSettings) == 0x0150);
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, Child) == 0x0130);
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, Filter) == 0x013D);
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, Parents) == 0x0140);
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, AdvancedSettings) == 0x0150);
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, ChildCache) == 0x0158);
static_assert(offsetof(FRigUnit_RotationConstraintLocalSpaceOffset, ParentCaches) == 0x0178);
static_assert(offsetof(FRigUnit_ScaleConstraint, Child) == 0x0130);
static_assert(offsetof(FRigUnit_ScaleConstraint, Filter) == 0x013D);
static_assert(offsetof(FRigUnit_ScaleConstraint, Parents) == 0x0140);
static_assert(offsetof(FRigUnit_ScaleConstraintLocalSpaceOffset, Child) == 0x0130);
static_assert(offsetof(FRigUnit_ScaleConstraintLocalSpaceOffset, Filter) == 0x013D);
static_assert(offsetof(FRigUnit_ScaleConstraintLocalSpaceOffset, Parents) == 0x0140);
static_assert(offsetof(FRigUnit_ScaleConstraintLocalSpaceOffset, ChildCache) == 0x0158);
static_assert(offsetof(FRigUnit_ScaleConstraintLocalSpaceOffset, ParentCaches) == 0x0178);
static_assert(offsetof(FRigUnit_TwistBones_WorkData, CachedItems) == 0x0000);
static_assert(offsetof(FRigUnit_TwistBones_WorkData, ItemRatios) == 0x0010);
static_assert(offsetof(FRigUnit_TwistBones_WorkData, ItemTransforms) == 0x0020);
static_assert(offsetof(FRigUnit_TwistBones, StartBone) == 0x0130);
static_assert(offsetof(FRigUnit_TwistBones, EndBone) == 0x0138);
static_assert(offsetof(FRigUnit_TwistBones, TwistAxis) == 0x0140);
static_assert(offsetof(FRigUnit_TwistBones, PoleAxis) == 0x0158);
static_assert(offsetof(FRigUnit_TwistBones, TwistEaseType) == 0x0170);
static_assert(offsetof(FRigUnit_TwistBones, WorkData) == 0x0180);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, Items) == 0x0130);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, TwistAxis) == 0x0140);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, PoleAxis) == 0x0158);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, TwistEaseType) == 0x0170);
static_assert(offsetof(FRigUnit_TwistBonesPerItem, WorkData) == 0x0180);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple_DebugSettings, WorldOffset) == 0x0010);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, BoneA) == 0x0130);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, BoneB) == 0x0138);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, EffectorBone) == 0x0140);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, Effector) == 0x0150);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PrimaryAxis) == 0x01B0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, SecondaryAxis) == 0x01C8);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVector) == 0x01E8);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVectorKind) == 0x0200);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, PoleVectorSpace) == 0x0204);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, DebugSettings) == 0x0230);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedBoneAIndex) == 0x02A0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedBoneBIndex) == 0x02C0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedEffectorBoneIndex) == 0x02E0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimple, CachedPoleVectorSpaceIndex) == 0x0300);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, ItemA) == 0x0130);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, ItemB) == 0x013C);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, EffectorItem) == 0x0148);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, Effector) == 0x0160);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PrimaryAxis) == 0x01C0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, SecondaryAxis) == 0x01D8);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVector) == 0x01F8);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVectorKind) == 0x0210);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, PoleVectorSpace) == 0x0214);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, DebugSettings) == 0x0240);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedItemAIndex) == 0x02B0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedItemBIndex) == 0x02D0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedEffectorItemIndex) == 0x02F0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimplePerItem, CachedPoleVectorSpaceIndex) == 0x0310);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Root) == 0x0008);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, PoleVector) == 0x0020);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Effector) == 0x0038);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleVectors, Elbow) == 0x0068);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Root) == 0x0010);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, PoleVector) == 0x0070);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Effector) == 0x0090);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, PrimaryAxis) == 0x00F0);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, SecondaryAxis) == 0x0108);
static_assert(offsetof(FRigUnit_TwoBoneIKSimpleTransforms, Elbow) == 0x0140);
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, Color) == 0x0010);
static_assert(offsetof(FRigUnit_PointSimulation_DebugSettings, WorldOffset) == 0x0020);
static_assert(offsetof(FRigUnit_PointSimulation_BoneTarget, bone) == 0x0000);
static_assert(offsetof(FRigUnit_PointSimulation_WorkData, Simulation) == 0x0000);
static_assert(offsetof(FRigUnit_PointSimulation_WorkData, BoneIndices) == 0x0078);
static_assert(offsetof(FRigUnit_PointSimulation, Points) == 0x0100);
static_assert(offsetof(FRigUnit_PointSimulation, Links) == 0x0110);
static_assert(offsetof(FRigUnit_PointSimulation, Forces) == 0x0120);
static_assert(offsetof(FRigUnit_PointSimulation, CollisionVolumes) == 0x0130);
static_assert(offsetof(FRigUnit_PointSimulation, IntegratorType) == 0x0144);
static_assert(offsetof(FRigUnit_PointSimulation, BoneTargets) == 0x0150);
static_assert(offsetof(FRigUnit_PointSimulation, PrimaryAimAxis) == 0x0168);
static_assert(offsetof(FRigUnit_PointSimulation, SecondaryAimAxis) == 0x0180);
static_assert(offsetof(FRigUnit_PointSimulation, DebugSettings) == 0x01A0);
static_assert(offsetof(FRigUnit_PointSimulation, Bezier) == 0x0220);
static_assert(offsetof(FRigUnit_PointSimulation, WorkData) == 0x0280);
static_assert(offsetof(FRigUnit_SpringInterp, SpringState) == 0x0020);
static_assert(offsetof(FRigUnit_SpringInterpVector, Current) == 0x0008);
static_assert(offsetof(FRigUnit_SpringInterpVector, Target) == 0x0020);
static_assert(offsetof(FRigUnit_SpringInterpVector, Result) == 0x0048);
static_assert(offsetof(FRigUnit_SpringInterpVector, SpringState) == 0x0060);
static_assert(offsetof(FRigUnit_SpringInterpV2, SpringState) == 0x0034);
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, Target) == 0x0008);
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, Force) == 0x0028);
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, Current) == 0x0048);
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, Result) == 0x0068);
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, Velocity) == 0x0080);
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, SimulatedResult) == 0x0098);
static_assert(offsetof(FRigUnit_SpringInterpVectorV2, SpringState) == 0x00B0);
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, Target) == 0x0010);
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, Torque) == 0x0038);
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, Current) == 0x0060);
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, Result) == 0x0090);
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, AngularVelocity) == 0x00B0);
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, SimulatedResult) == 0x00D0);
static_assert(offsetof(FRigUnit_SpringInterpQuaternionV2, SpringState) == 0x00F0);
