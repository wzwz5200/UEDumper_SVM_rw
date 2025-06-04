
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
/// dependency: MovieScene
/// dependency: NiagaraCore
/// dependency: NiagaraShader

#pragma pack(push, 0x1)

/// Enum /Script/Niagara.ENiagaraSimCacheAttributeCaptureMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSimCacheAttributeCaptureMode : uint8_t
{
	ENiagaraSimCacheAttributeCaptureMode__All                                        = 0,
	ENiagaraSimCacheAttributeCaptureMode__RenderingOnly                              = 1,
	ENiagaraSimCacheAttributeCaptureMode__ExplicitAttributes                         = 2
};

/// Enum /Script/Niagara.ENiagaraCollisionMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None                                                      = 0,
	ENiagaraCollisionMode__SceneGeometry                                             = 1,
	ENiagaraCollisionMode__DepthBuffer                                               = 2,
	ENiagaraCollisionMode__DistanceField                                             = 3
};

/// Enum /Script/Niagara.ENiagaraBaseTypes
/// Size: 0x01 (1 bytes)
enum class ENiagaraBaseTypes : uint8_t
{
	ENiagaraBaseTypes__Half                                                          = 0,
	ENiagaraBaseTypes__Float                                                         = 1,
	ENiagaraBaseTypes__Int32                                                         = 2,
	ENiagaraBaseTypes__Bool                                                          = 3,
	ENiagaraBaseTypes__Max                                                           = 4
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat
/// Size: 0x01 (1 bytes)
enum class ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float                                                   = 0,
	ENiagaraGpuBufferFormat__HalfFloat                                               = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte                                  = 2,
	ENiagaraGpuBufferFormat__Max                                                     = 3
};

/// Enum /Script/Niagara.ENiagaraGpuSyncMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraGpuSyncMode : uint32_t
{
	ENiagaraGpuSyncMode__None                                                        = 0,
	ENiagaraGpuSyncMode__SyncCpuToGpu                                                = 1,
	ENiagaraGpuSyncMode__SyncGpuToCpu                                                = 2,
	ENiagaraGpuSyncMode__SyncBoth                                                    = 3
};

/// Enum /Script/Niagara.ENiagaraMipMapGeneration
/// Size: 0x01 (1 bytes)
enum class ENiagaraMipMapGeneration : uint8_t
{
	ENiagaraMipMapGeneration__Disabled                                               = 0,
	ENiagaraMipMapGeneration__PostStage                                              = 1,
	ENiagaraMipMapGeneration__PostSimulate                                           = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value                                                       = 0,
	ENiagaraDefaultMode__Binding                                                     = 1,
	ENiagaraDefaultMode__Custom                                                      = 2,
	ENiagaraDefaultMode__FailIfPreviouslyNotSet                                      = 3
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererMotionVectorSetting
/// Size: 0x04 (4 bytes)
enum class ENiagaraDefaultRendererMotionVectorSetting : uint32_t
{
	ENiagaraDefaultRendererMotionVectorSetting__Precise                              = 0,
	ENiagaraDefaultRendererMotionVectorSetting__Approximate                          = 1
};

/// Enum /Script/Niagara.ENiagaraRendererMotionVectorSetting
/// Size: 0x04 (4 bytes)
enum class ENiagaraRendererMotionVectorSetting : uint32_t
{
	ENiagaraRendererMotionVectorSetting__AutoDetect                                  = 0,
	ENiagaraRendererMotionVectorSetting__Precise                                     = 1,
	ENiagaraRendererMotionVectorSetting__Approximate                                 = 2,
	ENiagaraRendererMotionVectorSetting__Disable                                     = 3
};

/// Enum /Script/Niagara.ENiagaraSimTarget
/// Size: 0x01 (1 bytes)
enum class ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim                                                        = 0,
	ENiagaraSimTarget__GPUComputeSim                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime                                             = 0,
	ENiagaraAgeUpdateMode__DesiredAge                                                = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek                                          = 2
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType
/// Size: 0x01 (1 bytes)
enum class ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average                                              = 0,
	ENiagaraStatEvaluationType__Maximum                                              = 1
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent                                                 = 0,
	ENiagaraStatDisplayMode__Absolute                                                = 1
};

/// Enum /Script/Niagara.ENiagaraDataSetType
/// Size: 0x01 (1 bytes)
enum class ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData                                                = 0,
	ENiagaraDataSetType__Shared                                                      = 1,
	ENiagaraDataSetType__Event                                                       = 2
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined                                                = 0,
	ENiagaraInputNodeUsage__Parameter                                                = 1,
	ENiagaraInputNodeUsage__Attribute                                                = 2,
	ENiagaraInputNodeUsage__SystemConstant                                           = 3,
	ENiagaraInputNodeUsage__TranslatorConstant                                       = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter                                  = 5
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown                                         = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty                                           = 1,
	ENiagaraScriptCompileStatus__NCS_Error                                           = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate                                        = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated                                    = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings                            = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings                     = 6
};

/// Enum /Script/Niagara.ENiagaraScriptUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function                                                    = 0,
	ENiagaraScriptUsage__Module                                                      = 1,
	ENiagaraScriptUsage__DynamicInput                                                = 2,
	ENiagaraScriptUsage__ParticleSpawnScript                                         = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated                             = 4,
	ENiagaraScriptUsage__ParticleUpdateScript                                        = 5,
	ENiagaraScriptUsage__ParticleEventScript                                         = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript                               = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript                                    = 8,
	ENiagaraScriptUsage__EmitterSpawnScript                                          = 9,
	ENiagaraScriptUsage__EmitterUpdateScript                                         = 10,
	ENiagaraScriptUsage__SystemSpawnScript                                           = 11,
	ENiagaraScriptUsage__SystemUpdateScript                                          = 12
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
/// Size: 0x01 (1 bytes)
enum class ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn                                          = 0,
	ENiagaraCompileUsageStaticSwitch__Update                                         = 1,
	ENiagaraCompileUsageStaticSwitch__Event                                          = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage                                = 3,
	ENiagaraCompileUsageStaticSwitch__Default                                        = 4
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System                                        = 0,
	ENiagaraScriptContextStaticSwitch__Emitter                                       = 1,
	ENiagaraScriptContextStaticSwitch__Particle                                      = 2
};

/// Enum /Script/Niagara.ENiagaraScriptGroup
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle                                                    = 0,
	ENiagaraScriptGroup__Emitter                                                     = 1,
	ENiagaraScriptGroup__System                                                      = 2,
	ENiagaraScriptGroup__Max                                                         = 3
};

/// Enum /Script/Niagara.ENiagaraBindingSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource                                                               = 0,
	ExplicitParticles                                                                = 1,
	ExplicitEmitter                                                                  = 2,
	ExplicitSystem                                                                   = 3,
	ExplicitUser                                                                     = 4,
	MaxBindingSource                                                                 = 5
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles                                        = 0,
	ENiagaraRendererSourceDataMode__Emitter                                          = 1
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre                                         = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst                                          = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond                                         = 2
};

/// Enum /Script/Niagara.ENiagaraSystemInstanceState
/// Size: 0x01 (1 bytes)
enum class ENiagaraSystemInstanceState : uint8_t
{
	ENiagaraSystemInstanceState__None                                                = 0,
	ENiagaraSystemInstanceState__PendingSpawn                                        = 1,
	ENiagaraSystemInstanceState__PendingSpawnPaused                                  = 2,
	ENiagaraSystemInstanceState__Spawning                                            = 3,
	ENiagaraSystemInstanceState__Running                                             = 4,
	ENiagaraSystemInstanceState__Paused                                              = 5,
	ENiagaraSystemInstanceState__Num                                                 = 6
};

/// Enum /Script/Niagara.ENiagaraFunctionDebugState
/// Size: 0x01 (1 bytes)
enum class ENiagaraFunctionDebugState : uint8_t
{
	ENiagaraFunctionDebugState__NoDebug                                              = 0,
	ENiagaraFunctionDebugState__Basic                                                = 1
};

/// Enum /Script/Niagara.ENiagaraGpuComputeTickStage
/// Size: 0x01 (1 bytes)
enum class ENiagaraGpuComputeTickStage : uint8_t
{
	ENiagaraGpuComputeTickStage__PreInitViews                                        = 0,
	ENiagaraGpuComputeTickStage__PostInitViews                                       = 1,
	ENiagaraGpuComputeTickStage__PostOpaqueRender                                    = 2,
	ENiagaraGpuComputeTickStage__Max                                                 = 3,
	ENiagaraGpuComputeTickStage__First                                               = 0,
	ENiagaraGpuComputeTickStage__Last                                                = 2
};

/// Enum /Script/Niagara.ENCPoolMethod
/// Size: 0x01 (1 bytes)
enum class ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None                                                              = 0,
	ENCPoolMethod__AutoRelease                                                       = 1,
	ENCPoolMethod__ManualRelease                                                     = 2,
	ENCPoolMethod__ManualRelease_OnComplete                                          = 3,
	ENCPoolMethod__FreeInPool                                                        = 4
};

/// Enum /Script/Niagara.ENiagaraDataChannelAllocationMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDataChannelAllocationMode : uint8_t
{
	ENiagaraDataChannelAllocationMode__Static                                        = 0
};

/// Enum /Script/Niagara.ENiagaraSortMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None                                                           = 0,
	ENiagaraSortMode__ViewDepth                                                      = 1,
	ENiagaraSortMode__ViewDistance                                                   = 2,
	ENiagaraSortMode__CustomAscending                                                = 3,
	ENiagaraSortMode__CustomDecending                                                = 4
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuMaxInfluences
/// Size: 0x01 (1 bytes)
enum class ENDISkelMesh_GpuMaxInfluences : uint8_t
{
	ENDISkelMesh_GpuMaxInfluences__AllowMax4                                         = 0,
	ENDISkelMesh_GpuMaxInfluences__AllowMax8                                         = 1,
	ENDISkelMesh_GpuMaxInfluences__Unlimited                                         = 2
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuUniformSamplingFormat
/// Size: 0x01 (1 bytes)
enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
{
	ENDISkelMesh_GpuUniformSamplingFormat__Full                                      = 0,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_24                                = 1,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_23                                = 2
};

/// Enum /Script/Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
/// Size: 0x01 (1 bytes)
enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
{
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Full                                  = 0,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Half                                  = 1
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererPixelCoverageMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDefaultRendererPixelCoverageMode : uint8_t
{
	ENiagaraDefaultRendererPixelCoverageMode__Enabled                                = 0,
	ENiagaraDefaultRendererPixelCoverageMode__Disabled                               = 1
};

/// Enum /Script/Niagara.ENiagaraDefaultSortPrecision
/// Size: 0x01 (1 bytes)
enum class ENiagaraDefaultSortPrecision : uint8_t
{
	ENiagaraDefaultSortPrecision__Low                                                = 0,
	ENiagaraDefaultSortPrecision__High                                               = 1
};

/// Enum /Script/Niagara.ENiagaraDefaultGpuTranslucentLatency
/// Size: 0x01 (1 bytes)
enum class ENiagaraDefaultGpuTranslucentLatency : uint8_t
{
	ENiagaraDefaultGpuTranslucentLatency__Immediate                                  = 0,
	ENiagaraDefaultGpuTranslucentLatency__Latent                                     = 1
};

/// Enum /Script/Niagara.ENDICollisionQuery_AsyncGpuTraceProvider
/// Size: 0x01 (1 bytes)
enum class ENDICollisionQuery_AsyncGpuTraceProvider : uint8_t
{
	ENDICollisionQuery_AsyncGpuTraceProvider__Default                                = 0,
	ENDICollisionQuery_AsyncGpuTraceProvider__HWRT                                   = 1,
	ENDICollisionQuery_AsyncGpuTraceProvider__GSDF                                   = 2,
	ENDICollisionQuery_AsyncGpuTraceProvider__None                                   = 3
};

/// Enum /Script/Niagara.ENiagaraTickBehavior
/// Size: 0x01 (1 bytes)
enum class ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs                                                 = 0,
	ENiagaraTickBehavior__UseComponentTickGroup                                      = 1,
	ENiagaraTickBehavior__ForceTickFirst                                             = 2,
	ENiagaraTickBehavior__ForceTickLast                                              = 3
};

/// Enum /Script/Niagara.ENDIActorComponentSourceMode
/// Size: 0x01 (1 bytes)
enum class ENDIActorComponentSourceMode : uint8_t
{
	ENDIActorComponentSourceMode__Default                                            = 0,
	ENDIActorComponentSourceMode__AttachParent                                       = 1,
	ENDIActorComponentSourceMode__LocalPlayer                                        = 2
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default                                               = 0,
	ENDIStaticMesh_SourceMode__Source                                                = 1,
	ENDIStaticMesh_SourceMode__AttachParent                                          = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly                                       = 3
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionStartBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate                                = 0
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive                   = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None                                 = 1
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
/// Size: 0x04 (4 bytes)
enum class ENiagaraSystemSpawnSectionEndBehavior : uint32_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive                         = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate                                = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None                                      = 2
};

/// Enum /Script/Niagara.ENiagaraCompilationState
/// Size: 0x01 (1 bytes)
enum class ENiagaraCompilationState : uint8_t
{
	ENiagaraCompilationState__CheckDDC                                               = 0,
	ENiagaraCompilationState__Precompile                                             = 1,
	ENiagaraCompilationState__StartCompileJob                                        = 2,
	ENiagaraCompilationState__AwaitResult                                            = 3,
	ENiagaraCompilationState__OptimizeByteCode                                       = 4,
	ENiagaraCompilationState__ProcessResult                                          = 5,
	ENiagaraCompilationState__PutToDDC                                               = 6,
	ENiagaraCompilationState__Finished                                               = 7,
	ENiagaraCompilationState__Aborted                                                = 8
};

/// Enum /Script/Niagara.ENiagaraBakerViewMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraBakerViewMode : uint32_t
{
	ENiagaraBakerViewMode__Perspective                                               = 0,
	ENiagaraBakerViewMode__OrthoFront                                                = 1,
	ENiagaraBakerViewMode__OrthoBack                                                 = 2,
	ENiagaraBakerViewMode__OrthoLeft                                                 = 3,
	ENiagaraBakerViewMode__OrthoRight                                                = 4,
	ENiagaraBakerViewMode__OrthoTop                                                  = 5,
	ENiagaraBakerViewMode__OrthoBottom                                               = 6,
	ENiagaraBakerViewMode__Num                                                       = 7
};

/// Enum /Script/Niagara.ENiagaraDataInterfaceEmitterBindingMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraDataInterfaceEmitterBindingMode : uint32_t
{
	ENiagaraDataInterfaceEmitterBindingMode__Self                                    = 0,
	ENiagaraDataInterfaceEmitterBindingMode__Other                                   = 1
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
/// Size: 0x01 (1 bytes)
enum class ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize                                          = 0,
	ENDIExport_GPUAllocationMode__PerParticle                                        = 1
};

/// Enum /Script/Niagara.ENDILandscape_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDILandscape_SourceMode : uint8_t
{
	ENDILandscape_SourceMode__Default                                                = 0,
	ENDILandscape_SourceMode__Source                                                 = 1,
	ENDILandscape_SourceMode__AttachParent                                           = 2
};

/// Enum /Script/Niagara.ESetResolutionMethod
/// Size: 0x04 (4 bytes)
enum class ESetResolutionMethod : uint32_t
{
	ESetResolutionMethod__Independent                                                = 0,
	ESetResolutionMethod__MaxAxis                                                    = 1,
	ESetResolutionMethod__CellSize                                                   = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
/// Size: 0x01 (1 bytes)
enum class ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default                                             = 0,
	ENDISkeletalMesh_SourceMode__Source                                              = 1,
	ENDISkeletalMesh_SourceMode__AttachParent                                        = 2
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
/// Size: 0x01 (1 bytes)
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid                                           = 255,
	ENDISkeletalMesh_SkinningMode__None                                              = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly                                      = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin                                           = 2
};

/// Enum /Script/Niagara.ENiagaraDebugPlaybackMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDebugPlaybackMode : uint8_t
{
	ENiagaraDebugPlaybackMode__Play                                                  = 0,
	ENiagaraDebugPlaybackMode__Loop                                                  = 1,
	ENiagaraDebugPlaybackMode__Paused                                                = 2,
	ENiagaraDebugPlaybackMode__Step                                                  = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudHAlign
/// Size: 0x01 (1 bytes)
enum class ENiagaraDebugHudHAlign : uint8_t
{
	ENiagaraDebugHudHAlign__Left                                                     = 0,
	ENiagaraDebugHudHAlign__Center                                                   = 1,
	ENiagaraDebugHudHAlign__Right                                                    = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudVAlign
/// Size: 0x01 (1 bytes)
enum class ENiagaraDebugHudVAlign : uint8_t
{
	ENiagaraDebugHudVAlign__Top                                                      = 0,
	ENiagaraDebugHudVAlign__Center                                                   = 1,
	ENiagaraDebugHudVAlign__Bottom                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudFont
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHudFont : uint32_t
{
	ENiagaraDebugHudFont__Small                                                      = 0,
	ENiagaraDebugHudFont__Normal                                                     = 1
};

/// Enum /Script/Niagara.ENiagaraDebugHudVerbosity
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHudVerbosity : uint32_t
{
	ENiagaraDebugHudVerbosity__None                                                  = 0,
	ENiagaraDebugHudVerbosity__Basic                                                 = 1,
	ENiagaraDebugHudVerbosity__Verbose                                               = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHUDOverviewMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHUDOverviewMode : uint32_t
{
	ENiagaraDebugHUDOverviewMode__Overview                                           = 0,
	ENiagaraDebugHUDOverviewMode__Scalability                                        = 1,
	ENiagaraDebugHUDOverviewMode__Performance                                        = 2,
	ENiagaraDebugHUDOverviewMode__GpuComputePerformance                              = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHUDPerfGraphMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHUDPerfGraphMode : uint32_t
{
	ENiagaraDebugHUDPerfGraphMode__None                                              = 0,
	ENiagaraDebugHUDPerfGraphMode__GameThread                                        = 1,
	ENiagaraDebugHUDPerfGraphMode__RenderThread                                      = 2,
	ENiagaraDebugHUDPerfGraphMode__GPU                                               = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHUDPerfSampleMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraDebugHUDPerfSampleMode : uint32_t
{
	ENiagaraDebugHUDPerfSampleMode__FrameTotal                                       = 0,
	ENiagaraDebugHUDPerfSampleMode__PerInstanceAverage                               = 1
};

/// Enum /Script/Niagara.ENiagaraCullReaction
/// Size: 0x04 (4 bytes)
enum class ENiagaraCullReaction : uint32_t
{
	ENiagaraCullReaction__Deactivate                                                 = 0,
	ENiagaraCullReaction__DeactivateImmediate                                        = 1,
	ENiagaraCullReaction__DeactivateResume                                           = 2,
	ENiagaraCullReaction__DeactivateImmediateResume                                  = 3
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
/// Size: 0x04 (4 bytes)
enum class ENiagaraScalabilityUpdateFrequency : uint32_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly                                    = 0,
	ENiagaraScalabilityUpdateFrequency__Low                                          = 1,
	ENiagaraScalabilityUpdateFrequency__Medium                                       = 2,
	ENiagaraScalabilityUpdateFrequency__High                                         = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous                                   = 4
};

/// Enum /Script/Niagara.ENiagaraCullProxyMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraCullProxyMode : uint32_t
{
	ENiagaraCullProxyMode__None                                                      = 0,
	ENiagaraCullProxyMode__Instanced_Rendered                                        = 1
};

/// Enum /Script/Niagara.EScriptExecutionMode
/// Size: 0x01 (1 bytes)
enum class EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle                                              = 0,
	EScriptExecutionMode__SpawnedParticles                                           = 1,
	EScriptExecutionMode__SingleParticle                                             = 2
};

/// Enum /Script/Niagara.EParticleAllocationMode
/// Size: 0x01 (1 bytes)
enum class EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate                                       = 0,
	EParticleAllocationMode__ManualEstimate                                          = 1,
	EParticleAllocationMode__FixedCount                                              = 2
};

/// Enum /Script/Niagara.ENiagaraEmitterCalculateBoundMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraEmitterCalculateBoundMode : uint8_t
{
	ENiagaraEmitterCalculateBoundMode__Dynamic                                       = 0,
	ENiagaraEmitterCalculateBoundMode__Fixed                                         = 1,
	ENiagaraEmitterCalculateBoundMode__Programmable                                  = 2
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default                                                  = 0,
	ENiagaraMeshFacingMode__Velocity                                                 = 1,
	ENiagaraMeshFacingMode__CameraPosition                                           = 2,
	ENiagaraMeshFacingMode__CameraPlane                                              = 3
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh                                               = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation                                         = 1,
	ENiagaraMeshPivotOffsetSpace__World                                              = 2,
	ENiagaraMeshPivotOffsetSpace__Local                                              = 3
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation                                          = 0,
	ENiagaraMeshLockedAxisSpace__World                                               = 1,
	ENiagaraMeshLockedAxisSpace__Local                                               = 2
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState
/// Size: 0x01 (1 bytes)
enum class ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default                                          = 0,
	ENiagaraPlatformSelectionState__Enabled                                          = 1,
	ENiagaraPlatformSelectionState__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState
/// Size: 0x01 (1 bytes)
enum class ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled                                               = 0,
	ENiagaraPlatformSetState__Enabled                                                = 1,
	ENiagaraPlatformSetState__Active                                                 = 2,
	ENiagaraPlatformSetState__Unknown                                                = 3
};

/// Enum /Script/Niagara.ENiagaraCVarConditionResponse
/// Size: 0x01 (1 bytes)
enum class ENiagaraCVarConditionResponse : uint8_t
{
	ENiagaraCVarConditionResponse__None                                              = 0,
	ENiagaraCVarConditionResponse__Enable                                            = 1,
	ENiagaraCVarConditionResponse__Disable                                           = 2
};

/// Enum /Script/Niagara.ENiagaraDeviceProfileRedirectMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraDeviceProfileRedirectMode : uint8_t
{
	ENiagaraDeviceProfileRedirectMode__CVar                                          = 0,
	ENiagaraDeviceProfileRedirectMode__DeviceProfile                                 = 1
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never                                              = 0,
	ENiagaraPreviewGridResetMode__Individual                                         = 1,
	ENiagaraPreviewGridResetMode__All                                                = 2
};

/// Enum /Script/Niagara.ENiagaraRendererSortPrecision
/// Size: 0x01 (1 bytes)
enum class ENiagaraRendererSortPrecision : uint8_t
{
	ENiagaraRendererSortPrecision__Default                                           = 0,
	ENiagaraRendererSortPrecision__Low                                               = 1,
	ENiagaraRendererSortPrecision__High                                              = 2
};

/// Enum /Script/Niagara.ENiagaraRendererGpuTranslucentLatency
/// Size: 0x01 (1 bytes)
enum class ENiagaraRendererGpuTranslucentLatency : uint8_t
{
	ENiagaraRendererGpuTranslucentLatency__ProjectDefault                            = 0,
	ENiagaraRendererGpuTranslucentLatency__Immediate                                 = 1,
	ENiagaraRendererGpuTranslucentLatency__Latent                                    = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen                                                 = 0,
	ENiagaraRibbonFacingMode__Custom                                                 = 1,
	ENiagaraRibbonFacingMode__CustomSideVector                                       = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale                                               = 0,
	ENiagaraRibbonAgeOffsetMode__Clip                                                = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack                                         = 0,
	ENiagaraRibbonDrawDirection__BackToFront                                         = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonShapeMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonShapeMode : uint8_t
{
	ENiagaraRibbonShapeMode__Plane                                                   = 0,
	ENiagaraRibbonShapeMode__MultiPlane                                              = 1,
	ENiagaraRibbonShapeMode__Tube                                                    = 2,
	ENiagaraRibbonShapeMode__Custom                                                  = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic                                        = 0,
	ENiagaraRibbonTessellationMode__Custom                                           = 1,
	ENiagaraRibbonTessellationMode__Disabled                                         = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraRibbonUVEdgeMode : uint32_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition                                       = 0,
	ENiagaraRibbonUVEdgeMode__Locked                                                 = 1
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraRibbonUVDistributionMode : uint32_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly                                = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength                 = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength                          = 2,
	ENiagaraRibbonUVDistributionMode__TiledFromStartOverRibbonLength                 = 3
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour
/// Size: 0x01 (1 bytes)
enum class EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy                                                  = 0,
	EUnusedAttributeBehaviour__Zero                                                  = 1,
	EUnusedAttributeBehaviour__None                                                  = 2,
	EUnusedAttributeBehaviour__MarkInvalid                                           = 3,
	EUnusedAttributeBehaviour__PassThrough                                           = 4
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType
/// Size: 0x01 (1 bytes)
enum class ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency                                      = 0,
	ENiagaraModuleDependencyType__PostDependency                                     = 1
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
/// Size: 0x01 (1 bytes)
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript                             = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts                             = 1
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid                                         = 0,
	ENiagaraScriptLibraryVisibility__Unexposed                                       = 1,
	ENiagaraScriptLibraryVisibility__Library                                         = 2,
	ENiagaraScriptLibraryVisibility__Hidden                                          = 3
};

/// Enum /Script/Niagara.ENiagaraScriptTemplateSpecification
/// Size: 0x01 (1 bytes)
enum class ENiagaraScriptTemplateSpecification : uint8_t
{
	ENiagaraScriptTemplateSpecification__None                                        = 0,
	ENiagaraScriptTemplateSpecification__Template                                    = 1,
	ENiagaraScriptTemplateSpecification__Behavior                                    = 2
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyUsage
/// Size: 0x01 (1 bytes)
enum class ENiagaraModuleDependencyUsage : uint8_t
{
	ENiagaraModuleDependencyUsage__None                                              = 0,
	ENiagaraModuleDependencyUsage__Spawn                                             = 1,
	ENiagaraModuleDependencyUsage__Update                                            = 2,
	ENiagaraModuleDependencyUsage__Event                                             = 3,
	ENiagaraModuleDependencyUsage__SimulationStage                                   = 4
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment
/// Size: 0x01 (1 bytes)
enum class ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned                                               = 0,
	ENiagaraSpriteAlignment__VelocityAligned                                         = 1,
	ENiagaraSpriteAlignment__CustomAlignment                                         = 2
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera                                             = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane                                        = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector                                     = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition                                     = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend                                = 4
};

/// Enum /Script/Niagara.ENiagaraRendererPixelCoverageMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraRendererPixelCoverageMode : uint8_t
{
	ENiagaraRendererPixelCoverageMode__Automatic                                     = 0,
	ENiagaraRendererPixelCoverageMode__Disabled                                      = 1,
	ENiagaraRendererPixelCoverageMode__Enabled                                       = 2,
	ENiagaraRendererPixelCoverageMode__Enabled_RGBA                                  = 3,
	ENiagaraRendererPixelCoverageMode__Enabled_RGB                                   = 4,
	ENiagaraRendererPixelCoverageMode__Enabled_A                                     = 5
};

/// Enum /Script/Niagara.ENiagaraStructConversionType
/// Size: 0x01 (1 bytes)
enum class ENiagaraStructConversionType : uint8_t
{
	ENiagaraStructConversionType__CopyOnly                                           = 0,
	ENiagaraStructConversionType__DoubleToFloat                                      = 1,
	ENiagaraStructConversionType__Vector2                                            = 2,
	ENiagaraStructConversionType__Vector3                                            = 3,
	ENiagaraStructConversionType__Vector4                                            = 4,
	ENiagaraStructConversionType__Quat                                               = 5
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None                                     = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest                                  = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest                                 = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar                                   = 3,
	ENiagaraNumericOutputTypeSelectionMode__Custom                                   = 4
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource
/// Size: 0x01 (1 bytes)
enum class ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability                                        = 0,
	ENiagaraExecutionStateSource__Internal                                           = 1,
	ENiagaraExecutionStateSource__Owner                                              = 2,
	ENiagaraExecutionStateSource__InternalCompletion                                 = 3
};

/// Enum /Script/Niagara.ENiagaraExecutionState
/// Size: 0x04 (4 bytes)
enum class ENiagaraExecutionState : uint32_t
{
	ENiagaraExecutionState__Active                                                   = 0,
	ENiagaraExecutionState__Inactive                                                 = 1,
	ENiagaraExecutionState__InactiveClear                                            = 2,
	ENiagaraExecutionState__Complete                                                 = 3,
	ENiagaraExecutionState__Disabled                                                 = 4,
	ENiagaraExecutionState__Num                                                      = 5
};

/// Enum /Script/Niagara.ENiagaraCoordinateSpace
/// Size: 0x01 (1 bytes)
enum class ENiagaraCoordinateSpace : uint8_t
{
	ENiagaraCoordinateSpace__Simulation                                              = 0,
	ENiagaraCoordinateSpace__World                                                   = 1,
	ENiagaraCoordinateSpace__Local                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraPythonUpdateScriptReference
/// Size: 0x01 (1 bytes)
enum class ENiagaraPythonUpdateScriptReference : uint8_t
{
	ENiagaraPythonUpdateScriptReference__None                                        = 0,
	ENiagaraPythonUpdateScriptReference__ScriptAsset                                 = 1,
	ENiagaraPythonUpdateScriptReference__DirectTextEntry                             = 2
};

/// Enum /Script/Niagara.ENiagaraOrientationAxis
/// Size: 0x01 (1 bytes)
enum class ENiagaraOrientationAxis : uint8_t
{
	ENiagaraOrientationAxis__XAxis                                                   = 0,
	ENiagaraOrientationAxis__YAxis                                                   = 1,
	ENiagaraOrientationAxis__ZAxis                                                   = 2
};

/// Enum /Script/Niagara.ENiagaraBoolDisplayMode
/// Size: 0x01 (1 bytes)
enum class ENiagaraBoolDisplayMode : uint8_t
{
	ENiagaraBoolDisplayMode__DisplayAlways                                           = 0,
	ENiagaraBoolDisplayMode__DisplayIfTrue                                           = 1,
	ENiagaraBoolDisplayMode__DisplayIfFalse                                          = 2
};

/// Enum /Script/Niagara.ENiagaraValidationSeverity
/// Size: 0x01 (1 bytes)
enum class ENiagaraValidationSeverity : uint8_t
{
	ENiagaraValidationSeverity__Info                                                 = 0,
	ENiagaraValidationSeverity__Warning                                              = 1,
	ENiagaraValidationSeverity__Error                                                = 2
};

/// Enum /Script/Niagara.ENiagaraVariantMode
/// Size: 0x04 (4 bytes)
enum class ENiagaraVariantMode : uint32_t
{
	ENiagaraVariantMode__None                                                        = 0,
	ENiagaraVariantMode__Object                                                      = 1,
	ENiagaraVariantMode__DataInterface                                               = 2,
	ENiagaraVariantMode__Bytes                                                       = 3
};

/// Enum /Script/Niagara.EVolumeCacheType
/// Size: 0x01 (1 bytes)
enum class EVolumeCacheType : uint8_t
{
	EVolumeCacheType__OpenVDB                                                        = 0
};

/// Struct /Script/Niagara.NDIRenderTargetVolumeSimCacheFrame
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNDIRenderTargetVolumeSimCacheFrame
{ 
	FIntVector                                         Size;                                                       // 0x0000   (0x000C)  
	TEnumAsByte<EPixelFormat>                          Format;                                                     // 0x000C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x000D   (0x0003)  MISSED
	int32_t                                            UncompressedSize;                                           // 0x0010   (0x0004)  
	int32_t                                            CompressedSize;                                             // 0x0014   (0x0004)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Class /Script/Niagara.NDIRenderTargetVolumeSimCacheData
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNDIRenderTargetVolumeSimCacheData : public UObject
{ 
public:
	FName                                              CompressionType;                                            // 0x0028   (0x0008)  
	TArray<FNDIRenderTargetVolumeSimCacheFrame>        Frames;                                                     // 0x0030   (0x0010)  
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraConvertInPlaceUtilityBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataChannelReader
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataChannelReader : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	class UNiagaraDataChannelHandler*                  Owner;                                                      // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector4
	// FVector4 ReadVector4(FName VarName, int32_t Index);                                                                      // [0xd6aec0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector2D
	// FVector2D ReadVector2D(FName VarName, int32_t Index);                                                                    // [0xd6adf0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector
	// FVector ReadVector(FName VarName, int32_t Index);                                                                        // [0xd6afa0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadQuat
	// FQuat ReadQuat(FName VarName, int32_t Index);                                                                            // [0xd6ad10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadLinearColor
	// FLinearColor ReadLinearColor(FName VarName, int32_t Index);                                                              // [0xd6ac40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadInt
	// int32_t ReadInt(FName VarName, int32_t Index);                                                                           // [0xd6ab70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadFloat
	// double ReadFloat(FName VarName, int32_t Index);                                                                          // [0xd6aaa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadBool
	// bool ReadBool(FName VarName, int32_t Index);                                                                             // [0xd6a9d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.Num
	// int32_t Num();                                                                                                           // [0xd6a9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.InitAccess
	// bool InitAccess(class UActorComponent* OwningComponent);                                                                 // [0xd6a730] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelWriter
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataChannelWriter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	class UNiagaraDataChannelHandler*                  Owner;                                                      // 0x0038   (0x0008)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector4
	// void WriteVector4(FName VarName, int32_t Index, FVector4 InData);                                                        // [0xd6b850] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector2D
	// void WriteVector2D(FName VarName, int32_t Index, FVector2D InData);                                                      // [0xd6b730] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector
	// void WriteVector(FName VarName, int32_t Index, FVector InData);                                                          // [0xd6b990] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteSpawnInfo
	// void WriteSpawnInfo(FName VarName, int32_t Index, FNiagaraSpawnInfo InData);                                             // [0xd6b610] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteQuat
	// void WriteQuat(FName VarName, int32_t Index, FQuat InData);                                                              // [0xd6b4e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteLinearColor
	// void WriteLinearColor(FName VarName, int32_t Index, FLinearColor InData);                                                // [0xd6b3c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteInt
	// void WriteInt(FName VarName, int32_t Index, int32_t InData);                                                             // [0xd6b2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteFloat
	// void WriteFloat(FName VarName, int32_t Index, double InData);                                                            // [0xd6b190] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteBool
	// void WriteBool(FName VarName, int32_t Index, bool InData);                                                               // [0xd6b080] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.Num
	// int32_t Num();                                                                                                           // [0xd6a9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelWriter.InitWrite
	// bool InitWrite(class UActorComponent* OwningComponent, int32_t Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU); // [0xd6a7d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelDefinitions
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataChannelDefinitions : public UObject
{ 
public:
	TArray<class UNiagaraDataChannel*>                 DataChannels;                                               // 0x0028   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataChannelHandler
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraDataChannelHandler : public UObject
{ 
public:
	class UNiagaraDataChannel*                         DataChannel;                                                // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0030   (0x0028)  MISSED
	class UNiagaraDataChannelWriter*                   Writer;                                                     // 0x0058   (0x0008)  
	class UNiagaraDataChannelReader*                   Reader;                                                     // 0x0060   (0x0008)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelHandler.GetDataChannelWriter
	// class UNiagaraDataChannelWriter* GetDataChannelWriter();                                                                 // [0xd6a700] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelHandler.GetDataChannelReader
	// class UNiagaraDataChannelReader* GetDataChannelReader();                                                                 // [0xd6a6d0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraTypeDefinitionHandle
{ 
	int32_t                                            RegisteredTypeIndex;                                        // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraVariableBase
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FNiagaraTypeDefinitionHandle                       TypeDefHandle;                                              // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0020 (32 bytes) (0x00000C - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraVariable : FNiagaraVariableBase
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<char>                                       VarData;                                                    // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FNiagaraTypeLayoutInfo
{ 
	TArray<uint32_t>                                   FloatComponentByteOffsets;                                  // 0x0000   (0x0010)  
	TArray<uint32_t>                                   FloatComponentRegisterOffsets;                              // 0x0010   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentByteOffsets;                                  // 0x0020   (0x0010)  
	TArray<uint32_t>                                   Int32ComponentRegisterOffsets;                              // 0x0030   (0x0010)  
	TArray<uint32_t>                                   HalfComponentByteOffsets;                                   // 0x0040   (0x0010)  
	TArray<uint32_t>                                   HalfComponentRegisterOffsets;                               // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FNiagaraVariableLayoutInfo
{ 
	uint32_t                                           FloatComponentStart;                                        // 0x0000   (0x0004)  
	uint32_t                                           Int32ComponentStart;                                        // 0x0004   (0x0004)  
	uint32_t                                           HalfComponentStart;                                         // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeLayoutInfo                             LayoutInfo;                                                 // 0x0010   (0x0060)  
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraDataSetID
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	ENiagaraDataSetType                                Type;                                                       // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNiagaraDataSetCompiledData
{ 
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0000   (0x0010)  
	TArray<FNiagaraVariableLayoutInfo>                 VariableLayouts;                                            // 0x0010   (0x0010)  
	FNiagaraDataSetID                                  ID;                                                         // 0x0020   (0x000C)  
	uint32_t                                           TotalFloatComponents;                                       // 0x002C   (0x0004)  
	uint32_t                                           TotalInt32Components;                                       // 0x0030   (0x0004)  
	uint32_t                                           TotalHalfComponents;                                        // 0x0034   (0x0004)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_7[0xB];                                       // 0x003D   (0x000B)  MISSED
};

/// Struct /Script/Niagara.NiagaraStructConversionStep
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FNiagaraStructConversionStep
{ 
	int32_t                                            LWCBytes;                                                   // 0x0000   (0x0004)  
	int32_t                                            LWCOffset;                                                  // 0x0004   (0x0004)  
	int32_t                                            SimulationBytes;                                            // 0x0008   (0x0004)  
	int32_t                                            SimulationOffset;                                           // 0x000C   (0x0004)  
	ENiagaraStructConversionType                       ConversionType;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraLwcStructConverter
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraLwcStructConverter
{ 
	int32_t                                            LWCSize;                                                    // 0x0000   (0x0004)  
	int32_t                                            SWCSize;                                                    // 0x0004   (0x0004)  
	TArray<FNiagaraStructConversionStep>               ConversionSteps;                                            // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDataChannelGameDataLayout
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FNiagaraDataChannelGameDataLayout
{ 
	TMap<FNiagaraVariableBase, int32_t>                VariableIndices;                                            // 0x0000   (0x0050)  
	TArray<FNiagaraLwcStructConverter>                 LwcConverters;                                              // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataChannel
/// Size: 0x0138 (312 bytes) (0x000028 - 0x000138) align 8 MaxSize: 0x0138
class UNiagaraDataChannel : public UObject
{ 
public:
	FName                                              ChannelName;                                                // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0030   (0x0010)  
	bool                                               bKeepPreviousFrameData;                                     // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	FNiagaraDataSetCompiledData                        CompiledData;                                               // 0x0048   (0x0048)  
	FNiagaraDataSetCompiledData                        CompiledDataGPU;                                            // 0x0090   (0x0048)  
	FNiagaraDataChannelGameDataLayout                  GameDataLayout;                                             // 0x00D8   (0x0060)  
};

/// Class /Script/Niagara.NiagaraDataChannel_Global
/// Size: 0x0138 (312 bytes) (0x000138 - 0x000138) align 8 MaxSize: 0x0138
class UNiagaraDataChannel_Global : public UNiagaraDataChannel
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataChannelHandler_Global
/// Size: 0x00A0 (160 bytes) (0x000068 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNiagaraDataChannelHandler_Global : public UNiagaraDataChannelHandler
{ 
public:
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0068   (0x0038)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0028   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraDataChannelReference
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraDataChannelReference
{ 
	FName                                              ChannelName;                                                // 0x0000   (0x0008)  
};

/// Struct /Script/Niagara.NDIDataChannelFunctionInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNDIDataChannelFunctionInfo
{ 
	FName                                              FunctionName;                                               // 0x0000   (0x0008)  
	TArray<FNiagaraVariableBase>                       Inputs;                                                     // 0x0008   (0x0010)  
	TArray<FNiagaraVariableBase>                       Outputs;                                                    // 0x0018   (0x0010)  
};

/// Struct /Script/Niagara.NDIDataChannel_GPUScriptParameterAccessInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNDIDataChannel_GPUScriptParameterAccessInfo
{ 
	TArray<FNiagaraVariableBase>                       SortedParameters;                                           // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NDIDataChannelCompiledData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FNDIDataChannelCompiledData
{ 
	TArray<FNDIDataChannelFunctionInfo>                FunctionInfo;                                               // 0x0000   (0x0010)  
	TMap<FNiagaraCompileHash, FNDIDataChannel_GPUScriptParameterAccessInfo> GPUScriptParameterInfos;               // 0x0010   (0x0050)  
	uint32_t                                           TotalParams;                                                // 0x0060   (0x0004)  
	bool                                               bUsedByCPU;                                                 // 0x0064   (0x0001)  
	bool                                               bUsedByGPU;                                                 // 0x0065   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0066   (0x0002)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelRead
/// Size: 0x00B0 (176 bytes) (0x000038 - 0x0000B0) align 8 MaxSize: 0x00B0
class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterface
{ 
public:
	FNiagaraDataChannelReference                       Channel;                                                    // 0x0038   (0x0008)  
	bool                                               bReadCurrentFrame;                                          // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	FNDIDataChannelCompiledData                        CompiledData;                                               // 0x0048   (0x0068)  
};

/// Struct /Script/Niagara.NiagaraDataInterfaceEmitterBinding
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraDataInterfaceEmitterBinding
{ 
	ENiagaraDataInterfaceEmitterBindingMode            BindingMode;                                                // 0x0000   (0x0004)  
	FName                                              EmitterName;                                                // 0x0004   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelSpawn
/// Size: 0x00C0 (192 bytes) (0x0000B0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNiagaraDataInterfaceDataChannelSpawn : public UNiagaraDataInterfaceDataChannelRead
{ 
public:
	FNiagaraDataInterfaceEmitterBinding                EmitterBinding;                                             // 0x00B0   (0x000C)  
	bool                                               bOverrideSpawnGroupToDataChannelIndex;                      // 0x00BC   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x00BD   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NDIDataChannelWriteCompiledData
/// Size: 0x00B0 (176 bytes) (0x000068 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FNDIDataChannelWriteCompiledData : FNDIDataChannelCompiledData
{ 
	FNiagaraDataSetCompiledData                        DataLayout;                                                 // 0x0068   (0x0048)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelWrite
/// Size: 0x0100 (256 bytes) (0x000038 - 0x000100) align 8 MaxSize: 0x0100
class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface
{ 
public:
	ENiagaraDataChannelAllocationMode                  AllocationMode;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	uint32_t                                           AllocationCount;                                            // 0x003C   (0x0004)  
	bool                                               bPublishToGame;                                             // 0x0040   (0x0001)  
	bool                                               bPublishToCPU;                                              // 0x0041   (0x0001)  
	bool                                               bPublishToGPU;                                              // 0x0042   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0043   (0x0001)  MISSED
	FNiagaraDataChannelReference                       Channel;                                                    // 0x0044   (0x0008)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FNDIDataChannelWriteCompiledData                   CompiledData;                                               // 0x0050   (0x00B0)  
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraMessageDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraParameterDefinitionsBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraParameterDefinitionsBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraRenderableMeshInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraRenderableMeshInterface : public UInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraScriptSourceBase : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0028   (0x0020)  MISSED
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraPlatformSetCVarCondition
{ 
	FName                                              CVarName;                                                   // 0x0000   (0x0008)  
	ENiagaraCVarConditionResponse                      PassResponse;                                               // 0x0008   (0x0001)  
	ENiagaraCVarConditionResponse                      FailResponse;                                               // 0x0009   (0x0001)  
	bool                                               Value;                                                      // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x000B   (0x0001)  MISSED
	int32_t                                            MinInt;                                                     // 0x000C   (0x0004)  
	int32_t                                            MaxInt;                                                     // 0x0010   (0x0004)  
	float                                              MinFloat;                                                   // 0x0014   (0x0004)  
	float                                              MaxFloat;                                                   // 0x0018   (0x0004)  
	bool                                               bUseMinInt : 1;                                             // 0x001C:0 (0x0001)  
	bool                                               bUseMaxInt : 1;                                             // 0x001C:1 (0x0001)  
	bool                                               bUseMinFloat : 1;                                           // 0x001C:2 (0x0001)  
	bool                                               bUseMaxFloat : 1;                                           // 0x001C:3 (0x0001)  
	unsigned char                                      UnknownData01_7[0x13];                                      // 0x001D   (0x0013)  MISSED
};

/// Struct /Script/Niagara.NiagaraPlatformSetRedirect
/// Size: 0x0080 (128 bytes) (0x000000 - 0x000080) align 8 MaxSize: 0x0080
struct FNiagaraPlatformSetRedirect
{ 
	TArray<FName>                                      ProfileNames;                                               // 0x0000   (0x0010)  
	ENiagaraDeviceProfileRedirectMode                  Mode;                                                       // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FName                                              RedirectProfileName;                                        // 0x0014   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FNiagaraPlatformSetCVarCondition                   CVarConditionEnabled;                                       // 0x0020   (0x0030)  
	FNiagaraPlatformSetCVarCondition                   CVarConditionDisabled;                                      // 0x0050   (0x0030)  
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x0120 (288 bytes) (0x000038 - 0x000120) align 8 MaxSize: 0x0120
class UNiagaraSettings : public UDeveloperSettings
{ 
public:
	bool                                               bSystemsSupportLargeWorldCoordinates;                       // 0x0038   (0x0001)  
	bool                                               bEnforceStrictStackTypes;                                   // 0x0039   (0x0001)  
	bool                                               bExperimentalVMEnabled;                                     // 0x003A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x003B   (0x0005)  MISSED
	FSoftObjectPath                                    DefaultEffectType;                                          // 0x0040   (0x0020)  
	FLinearColor                                       PositionPinTypeColor;                                       // 0x0060   (0x0010)  
	TArray<FText>                                      QualityLevels;                                              // 0x0070   (0x0010)  
	TMap<FString, FText>                               ComponentRendererWarningsPerClass;                          // 0x0080   (0x0050)  
	TEnumAsByte<ETextureRenderTargetFormat>            DefaultRenderTargetFormat;                                  // 0x00D0   (0x0001)  
	ENiagaraGpuBufferFormat                            DefaultGridFormat;                                          // 0x00D1   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x00D2   (0x0002)  MISSED
	ENiagaraDefaultRendererMotionVectorSetting         DefaultRendererMotionVectorSetting;                         // 0x00D4   (0x0004)  
	ENiagaraDefaultRendererPixelCoverageMode           DefaultPixelCoverageMode;                                   // 0x00D8   (0x0001)  
	ENiagaraDefaultSortPrecision                       DefaultSortPrecision;                                       // 0x00D9   (0x0001)  
	ENiagaraDefaultGpuTranslucentLatency               DefaultGpuTranslucentLatency;                               // 0x00DA   (0x0001)  
	unsigned char                                      UnknownData02_6[0x1];                                       // 0x00DB   (0x0001)  MISSED
	float                                              DefaultLightInverseExposureBlend;                           // 0x00DC   (0x0004)  
	TEnumAsByte<ENDISkelMesh_GpuMaxInfluences>         NDISkelMesh_GpuMaxInfluences;                               // 0x00E0   (0x0001)  
	TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat> NDISkelMesh_GpuUniformSamplingFormat;                       // 0x00E1   (0x0001)  
	TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat> NDISkelMesh_AdjacencyTriangleIndexFormat;               // 0x00E2   (0x0001)  
	bool                                               NDIStaticMesh_AllowDistanceFields;                          // 0x00E3   (0x0001)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00E4   (0x0004)  MISSED
	SDK_UNDEFINED(16,350) /* TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider>> */ __um(NDICollisionQuery_AsyncGpuTraceProviderOrder); // 0x00E8   (0x0010)  
	FString                                            SimCacheAuxiliaryFileBasePath;                              // 0x00F8   (0x0010)  
	int64_t                                            SimCacheMaxCPUMemoryVolumetrics;                            // 0x0108   (0x0008)  
	TArray<FNiagaraPlatformSetRedirect>                PlatformSetRedirects;                                       // 0x0110   (0x0010)  
};

/// Class /Script/Niagara.NiagaraSimCacheCustomStorageInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSimCacheCustomStorageInterface : public UInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraValidationRuleSet
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraValidationRuleSet : public UObject
{ 
public:
	TArray<class UNiagaraValidationRule*>              ValidationRules;                                            // 0x0028   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraUserParameterBinding
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceActorComponent
/// Size: 0x0080 (128 bytes) (0x000038 - 0x000080) align 8 MaxSize: 0x0080
class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{ 
public:
	bool                                               bRequireCurrentFrameData;                                   // 0x0038   (0x0001)  
	ENDIActorComponentSourceMode                       SourceMode;                                                 // 0x0039   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            LocalPlayerIndex;                                           // 0x003C   (0x0004)  
	TLazyObjectPtr<class AActor*>                      SourceActor;                                                // 0x0040   (0x001C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FNiagaraUserParameterBinding                       ActorOrComponentParameter;                                  // 0x0060   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAsyncGpuTrace
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{ 
public:
	int32_t                                            MaxTracesPerParticle;                                       // 0x0038   (0x0004)  
	int32_t                                            MaxRetraces;                                                // 0x003C   (0x0004)  
	TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider> TraceProvider;                                           // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0041   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceDebugDraw
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{ 
public:
	uint32_t                                           OverrideMaxLineInstances;                                   // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraDynamicMeshSection
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraDynamicMeshSection
{ 
	int32_t                                            NumTriangles;                                               // 0x0000   (0x0004)  
	int32_t                                            MaterialIndex;                                              // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraDynamicMeshMaterial
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraDynamicMeshMaterial
{ 
	class UMaterialInterface*                          Material;                                                   // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x0008   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceDynamicMesh
/// Size: 0x00A8 (168 bytes) (0x000038 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	TArray<FNiagaraDynamicMeshSection>                 Sections;                                                   // 0x0040   (0x0010)  
	TArray<FNiagaraDynamicMeshMaterial>                Materials;                                                  // 0x0050   (0x0010)  
	int32_t                                            NumVertices;                                                // 0x0060   (0x0004)  
	int32_t                                            NumTexCoords;                                               // 0x0064   (0x0004)  
	bool                                               bHasColors;                                                 // 0x0068   (0x0001)  
	bool                                               bHasTangentBasis;                                           // 0x0069   (0x0001)  
	bool                                               bClearTrianglesPerFrame;                                    // 0x006A   (0x0001)  
	unsigned char                                      UnknownData01_6[0x5];                                       // 0x006B   (0x0005)  MISSED
	FBox                                               DefaultBounds;                                              // 0x0070   (0x0038)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceEmitterProperties
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
{ 
public:
	FNiagaraDataInterfaceEmitterBinding                EmitterBinding;                                             // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfacePhysicsAsset
/// Size: 0x00B0 (176 bytes) (0x000038 - 0x0000B0) align 8 MaxSize: 0x00B0
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{ 
public:
	class UPhysicsAsset*                               DefaultSource;                                              // 0x0038   (0x0008)  
	TWeakObjectPtr<class AActor*>                      SoftSourceActor;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0048   (0x0028)  MISSED
	FNiagaraUserParameterBinding                       MeshUserParameter;                                          // 0x0070   (0x0020)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0090   (0x0020)  MISSED
};

/// Class /Script/Niagara.NiagaraPhysicsAssetDICollectorInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraPhysicsAssetDICollectorInterface : public UInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimCacheReader
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       SimCacheBinding;                                            // 0x0038   (0x0020)  
	class UNiagaraSimCache*                            SimCache;                                                   // 0x0058   (0x0008)  
	FName                                              EmitterBinding;                                             // 0x0060   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{ 
public:
	ENiagaraGpuSyncMode                                GpuSyncMode;                                                // 0x0038   (0x0004)  
	int32_t                                            InitialValue;                                               // 0x003C   (0x0004)  
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNDIStaticMeshSectionFilter
{ 
	TArray<int32_t>                                    AllowedMaterialSlots;                                       // 0x0000   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x00D0 (208 bytes) (0x000038 - 0x0000D0) align 8 MaxSize: 0x00D0
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
public:
	ENDIStaticMesh_SourceMode                          SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	class UStaticMesh*                                 DefaultMesh;                                                // 0x0040   (0x0008)  
	TWeakObjectPtr<class AActor*>                      SoftSourceActor;                                            // 0x0048   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0050   (0x0028)  MISSED
	class UStaticMeshComponent*                        SourceComponent;                                            // 0x0078   (0x0008)  
	FNDIStaticMeshSectionFilter                        SectionFilter;                                              // 0x0080   (0x0010)  
	bool                                               bUsePhysicsBodyVelocity;                                    // 0x0090   (0x0001)  
	bool                                               bAllowSamplingFromStreamingLODs;                            // 0x0091   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x0092   (0x0002)  MISSED
	int32_t                                            LODIndex;                                                   // 0x0094   (0x0004)  
	FNiagaraUserParameterBinding                       LODIndexUserParameter;                                      // 0x0098   (0x0020)  
	TArray<FName>                                      FilteredSockets;                                            // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x8];                                       // 0x00C8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay
	// void OnSourceEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                        // [0xe23900] Final|Native|Protected 
};

/// Struct /Script/Niagara.NiagaraUObjectPropertyReaderRemap
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraUObjectPropertyReaderRemap
{ 
	FName                                              GraphName;                                                  // 0x0000   (0x0008)  
	FName                                              RemapName;                                                  // 0x0008   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader
/// Size: 0x00A8 (168 bytes) (0x000038 - 0x0000A8) align 8 MaxSize: 0x00A8
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       UObjectParameterBinding;                                    // 0x0038   (0x0020)  
	TArray<FNiagaraUObjectPropertyReaderRemap>         PropertyRemap;                                              // 0x0058   (0x0010)  
	TWeakObjectPtr<class AActor*>                      SourceActor;                                                // 0x0068   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0070   (0x0028)  MISSED
	class UClass*                                      SourceActorComponentClass;                                  // 0x0098   (0x0008)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x00A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
	// void SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, FName UserParameterName, FName GraphName, FName RemapName); // [0xe239e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceVirtualTexture
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface
{ 
public:
	class URuntimeVirtualTexture*                      Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x0100 (256 bytes) (0x0000F0 - 0x000100) align 8 MaxSize: 0x0100
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
public:
	ENiagaraSystemSpawnSectionStartBehavior            SectionStartBehavior;                                       // 0x00F0   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SectionEvaluateBehavior;                                    // 0x00F4   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SectionEndBehavior;                                         // 0x00F8   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x00FC   (0x0001)  
	bool                                               bAllowScalability;                                          // 0x00FD   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x00FE   (0x0002)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                   // 0x0098   (0x0010)  
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x00B0 (176 bytes) (0x0000A8 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00A8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x00C8 (200 bytes) (0x0000A8 - 0x0000C8) align 8 MaxSize: 0x00C8
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{ 
public:
	FNiagaraVariable                                   Parameter;                                                  // 0x00A8   (0x0020)  
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x00D0 (208 bytes) (0x0000C8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x00D0 (208 bytes) (0x0000C8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x00D0 (208 bytes) (0x0000C8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x00D0 (208 bytes) (0x0000C8 - 0x0000D0) align 8 MaxSize: 0x00D0
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x00C8   (0x0008)  MISSED
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x00D8 (216 bytes) (0x0000C8 - 0x0000D8) align 8 MaxSize: 0x00D8
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x00C8   (0x0008)  MISSED
	int32_t                                            ChannelsUsed;                                               // 0x00D0   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x00D4   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class ANiagaraActor : public AActor
{ 
public:
	class UNiagaraComponent*                           NiagaraComponent;                                           // 0x0290   (0x0008)  
	bool                                               bDestroyOnSystemFinish : 1;                                 // 0x0298:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0299   (0x0007)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish
	// void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);                                                        // [0xe9b000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished
	// void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);                                                // [0xe9a9e0] Final|Native|Private 
};

/// Class /Script/Niagara.NiagaraBakerOutput
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraBakerOutput : public UObject
{ 
public:
	FString                                            OutputName;                                                 // 0x0028   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSimCacheCreateParameters
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraSimCacheCreateParameters
{ 
	ENiagaraSimCacheAttributeCaptureMode               AttributeCaptureMode;                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	bool                                               bAllowRebasing : 1;                                         // 0x0004:0 (0x0001)  
	bool                                               bAllowDataInterfaceCaching : 1;                             // 0x0004:1 (0x0001)  
	bool                                               bAllowInterpolation : 1;                                    // 0x0004:2 (0x0001)  
	bool                                               bAllowVelocityExtrapolation : 1;                            // 0x0004:3 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0005   (0x0003)  MISSED
	TArray<FName>                                      RebaseIncludeAttributes;                                    // 0x0008   (0x0010)  
	TArray<FName>                                      RebaseExcludeAttributes;                                    // 0x0018   (0x0010)  
	TArray<FName>                                      InterpolationIncludeAttributes;                             // 0x0028   (0x0010)  
	TArray<FName>                                      InterpolationExcludeAttributes;                             // 0x0038   (0x0010)  
	TArray<FName>                                      ExplicitCaptureAttributes;                                  // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraBakerOutputSimCache
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput
{ 
public:
	FString                                            SimCacheAssetPathFormat;                                    // 0x0038   (0x0010)  
	FNiagaraSimCacheCreateParameters                   CreateParameters;                                           // 0x0048   (0x0058)  
};

/// Struct /Script/Niagara.NiagaraBakerTextureSource
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraBakerTextureSource
{ 
	FString                                            DisplayString;                                              // 0x0000   (0x0010)  
	FName                                              SourceName;                                                 // 0x0010   (0x0008)  
};

/// Class /Script/Niagara.NiagaraBakerOutputTexture2D
/// Size: 0x00A0 (160 bytes) (0x000038 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput
{ 
public:
	FNiagaraBakerTextureSource                         SourceBinding;                                              // 0x0038   (0x0018)  
	bool                                               bGenerateAtlas : 1;                                         // 0x0050:0 (0x0001)  
	bool                                               bGenerateFrames : 1;                                        // 0x0050:1 (0x0001)  
	bool                                               bExportFrames : 1;                                          // 0x0050:2 (0x0001)  
	bool                                               bSetTextureAddressX : 1;                                    // 0x0050:3 (0x0001)  
	bool                                               bSetTextureAddressY : 1;                                    // 0x0050:4 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0051   (0x0003)  MISSED
	FIntPoint                                          FrameSize;                                                  // 0x0054   (0x0008)  
	FIntPoint                                          AtlasTextureSize;                                           // 0x005C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x0064   (0x0008)  MISSED
	TEnumAsByte<TextureAddress>                        TextureAddressX;                                            // 0x006C   (0x0001)  
	TEnumAsByte<TextureAddress>                        TextureAddressY;                                            // 0x006D   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x006E   (0x0002)  MISSED
	FString                                            AtlasAssetPathFormat;                                       // 0x0070   (0x0010)  
	FString                                            FramesAssetPathFormat;                                      // 0x0080   (0x0010)  
	FString                                            FramesExportPathFormat;                                     // 0x0090   (0x0010)  
};

/// Class /Script/Niagara.NiagaraBakerOutputVolumeTexture
/// Size: 0x0088 (136 bytes) (0x000038 - 0x000088) align 8 MaxSize: 0x0088
class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput
{ 
public:
	FNiagaraBakerTextureSource                         SourceBinding;                                              // 0x0038   (0x0018)  
	bool                                               bGenerateAtlas : 1;                                         // 0x0050:0 (0x0001)  
	bool                                               bGenerateFrames : 1;                                        // 0x0050:1 (0x0001)  
	bool                                               bExportFrames : 1;                                          // 0x0050:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            AtlasAssetPathFormat;                                       // 0x0058   (0x0010)  
	FString                                            FramesAssetPathFormat;                                      // 0x0068   (0x0010)  
	FString                                            FramesExportPathFormat;                                     // 0x0078   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraBakerCameraSettings
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraBakerCameraSettings
{ 
	ENiagaraBakerViewMode                              ViewMode;                                                   // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FVector                                            ViewportLocation;                                           // 0x0008   (0x0018)  
	FRotator                                           ViewportRotation;                                           // 0x0020   (0x0018)  
	float                                              OrbitDistance;                                              // 0x0038   (0x0004)  
	float                                              FOV;                                                        // 0x003C   (0x0004)  
	float                                              OrthoWidth;                                                 // 0x0040   (0x0004)  
	bool                                               bUseAspectRatio;                                            // 0x0044   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0045   (0x0003)  MISSED
	float                                              AspectRatio;                                                // 0x0048   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraBakerTextureSettings
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraBakerTextureSettings
{ 
	FName                                              OutputName;                                                 // 0x0000   (0x0008)  
	FNiagaraBakerTextureSource                         SourceBinding;                                              // 0x0008   (0x0018)  
	bool                                               bUseFrameSize : 1;                                          // 0x0020:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0021   (0x0003)  MISSED
	FIntPoint                                          FrameSize;                                                  // 0x0024   (0x0008)  
	FIntPoint                                          TextureSize;                                                // 0x002C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	class UTexture2D*                                  GeneratedTexture;                                           // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraBakerSettings
/// Size: 0x01F0 (496 bytes) (0x000028 - 0x0001F0) align 8 MaxSize: 0x01F0
class UNiagaraBakerSettings : public UObject
{ 
public:
	float                                              StartSeconds;                                               // 0x0028   (0x0004)  
	float                                              DurationSeconds;                                            // 0x002C   (0x0004)  
	int32_t                                            FramesPerSecond;                                            // 0x0030   (0x0004)  
	bool                                               bPreviewLooping : 1;                                        // 0x0034:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0035   (0x0003)  MISSED
	FIntPoint                                          FramesPerDimension;                                         // 0x0038   (0x0008)  
	TArray<class UNiagaraBakerOutput*>                 Outputs;                                                    // 0x0040   (0x0010)  
	TArray<FNiagaraBakerCameraSettings>                CameraSettings;                                             // 0x0050   (0x0010)  
	int32_t                                            CurrentCameraIndex;                                         // 0x0060   (0x0004)  
	FName                                              BakeQualityLevel;                                           // 0x0064   (0x0008)  
	bool                                               bRenderComponentOnly : 1;                                   // 0x006C:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x006D   (0x0003)  MISSED
	TArray<FNiagaraBakerTextureSettings>               OutputTextures;                                             // 0x0070   (0x0010)  
	ENiagaraBakerViewMode                              CameraViewportMode;                                         // 0x0080   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0084   (0x0004)  MISSED
	FVector                                            CameraViewportLocation[7];                                  // 0x0088   (0x00A8)  
	FRotator                                           CameraViewportRotation[7];                                  // 0x0130   (0x00A8)  
	float                                              CameraOrbitDistance;                                        // 0x01D8   (0x0004)  
	float                                              CameraFOV;                                                  // 0x01DC   (0x0004)  
	float                                              CameraOrthoWidth;                                           // 0x01E0   (0x0004)  
	bool                                               bUseCameraAspectRatio : 1;                                  // 0x01E4:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x01E5   (0x0003)  MISSED
	float                                              CameraAspectRatio;                                          // 0x01E8   (0x0004)  
	unsigned char                                      UnknownData04_7[0x4];                                       // 0x01EC   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0028 (40 bytes) (0x00000C - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraVariableWithOffset : FNiagaraVariableBase
{ 
	int32_t                                            Offset;                                                     // 0x000C   (0x0004)  
	FNiagaraLwcStructConverter                         StructConverter;                                            // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraPositionSource
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraPositionSource
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FVector                                            Value;                                                      // 0x0008   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TWeakObjectPtr<class UObject*>                     Owner;                                                      // 0x0008   (0x0008)  
	TArray<FNiagaraVariableWithOffset>                 SortedParameterOffsets;                                     // 0x0010   (0x0010)  
	TArray<char>                                       ParameterData;                                              // 0x0020   (0x0010)  
	TArray<class UNiagaraDataInterface*>               DataInterfaces;                                             // 0x0030   (0x0010)  
	TArray<class UObject*>                             UObjects;                                                   // 0x0040   (0x0010)  
	TArray<FNiagaraPositionSource>                     OriginalPositionData;                                       // 0x0050   (0x0010)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0060   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x00D8 (216 bytes) (0x000088 - 0x0000D8) align 8 MaxSize: 0x00D8
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore
{ 
	TMap<FNiagaraVariable, FNiagaraVariable>           UserParameterRedirects;                                     // 0x0088   (0x0050)  
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x0810 (2064 bytes) (0x000568 - 0x000810) align 16 MaxSize: 0x0808
class UNiagaraComponent : public UFXSystemComponent
{ 
public:
	class UNiagaraSystem*                              Asset;                                                      // 0x0568   (0x0008)  
	ENiagaraTickBehavior                               TickBehavior;                                               // 0x0570   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0571   (0x0003)  MISSED
	int32_t                                            RandomSeedOffset;                                           // 0x0574   (0x0004)  
	FNiagaraUserRedirectionParameterStore              OverrideParameters;                                         // 0x0578   (0x00D8)  
	bool                                               bForceSolo : 1;                                             // 0x0650:0 (0x0001)  
	bool                                               bEnableGpuComputeDebug : 1;                                 // 0x0650:1 (0x0001)  
	bool                                               bOverrideWarmupSettings : 1;                                // 0x0650:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0651   (0x0003)  MISSED
	int32_t                                            WarmupTickCount;                                            // 0x0654   (0x0004)  
	float                                              WarmupTickDelta;                                            // 0x0658   (0x0004)  
	unsigned char                                      UnknownData02_6[0x34];                                      // 0x065C   (0x0034)  MISSED
	bool                                               bAutoDestroy : 1;                                           // 0x0690:0 (0x0001)  
	bool                                               bRenderingEnabled : 1;                                      // 0x0690:1 (0x0001)  
	bool                                               bAutoManageAttachment : 1;                                  // 0x0690:2 (0x0001)  
	bool                                               bAutoAttachWeldSimulatedBodies : 1;                         // 0x0690:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0691   (0x0003)  MISSED
	float                                              MaxTimeBeforeForceUpdateTransform;                          // 0x0694   (0x0004)  
	unsigned char                                      UnknownData04_6[0x8];                                       // 0x0698   (0x0008)  MISSED
	SDK_UNDEFINED(16,351) /* FMulticastInlineDelegate */ __um(OnSystemFinished);                                   // 0x06A0   (0x0010)  
	TWeakObjectPtr<class USceneComponent*>             AutoAttachParent;                                           // 0x06B0   (0x0008)  
	FName                                              AutoAttachSocketName;                                       // 0x06B8   (0x0008)  
	EAttachmentRule                                    AutoAttachLocationRule;                                     // 0x06C0   (0x0001)  
	EAttachmentRule                                    AutoAttachRotationRule;                                     // 0x06C1   (0x0001)  
	EAttachmentRule                                    AutoAttachScaleRule;                                        // 0x06C2   (0x0001)  
	unsigned char                                      UnknownData05_6[0x9];                                       // 0x06C3   (0x0009)  MISSED
	unsigned char                                      UnknownBit06 : 1;                                           // 0x06CC:0 (0x0001)  MISSED
	unsigned char                                      UnknownBit07 : 1;                                           // 0x06CC:1 (0x0001)  MISSED
	unsigned char                                      UnknownBit08 : 1;                                           // 0x06CC:2 (0x0001)  MISSED
	unsigned char                                      UnknownBit09 : 1;                                           // 0x06CC:3 (0x0001)  MISSED
	bool                                               bAllowScalability : 1;                                      // 0x06CC:4 (0x0001)  
	unsigned char                                      UnknownData10_5[0x12B];                                     // 0x06CD   (0x012B)  MISSED
	class UNiagaraSimCache*                            SimCache;                                                   // 0x07F8   (0x0008)  
	class UNiagaraCullProxyComponent*                  CullProxy;                                                  // 0x0800   (0x0008)  


	/// Functions
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec4
	// void SetVariableVec4(FName InVariableName, FVector4& InValue);                                                           // [0xe9d620] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec3
	// void SetVariableVec3(FName InVariableName, FVector InValue);                                                             // [0xe9d540] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec2
	// void SetVariableVec2(FName InVariableName, FVector2D InValue);                                                           // [0xe9d470] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	// void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);              // [0xe9d2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTexture
	// void SetVariableTexture(FName InVariableName, class UTexture* Texture);                                                  // [0xe9d170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableStaticMesh
	// void SetVariableStaticMesh(FName InVariableName, class UStaticMesh* InValue);                                            // [0xe9cff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableQuat
	// void SetVariableQuat(FName InVariableName, FQuat& InValue);                                                              // [0xe9cf10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariablePosition
	// void SetVariablePosition(FName InVariableName, FVector InValue);                                                         // [0xe9ce30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableObject
	// void SetVariableObject(FName InVariableName, class UObject* Object);                                                     // [0xe9c790] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMatrix
	// void SetVariableMatrix(FName InVariableName, FMatrix& InValue);                                                          // [0xe9cd30] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMaterial
	// void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);                                        // [0xe9cbb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor
	// void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);                                                // [0xe9cad0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableInt
	// void SetVariableInt(FName InVariableName, int32_t InValue);                                                              // [0xe9ca00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableFloat
	// void SetVariableFloat(FName InVariableName, float InValue);                                                              // [0xe9c930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableBool
	// void SetVariableBool(FName InVariableName, bool InValue);                                                                // [0xe9c860] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableActor
	// void SetVariableActor(FName InVariableName, class AActor* Actor);                                                        // [0xe9c790] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetTickBehavior
	// void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);                                                              // [0xe9c700] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSystemFixedBounds
	// void SetSystemFixedBounds(FBox LocalBounds);                                                                             // [0xe9c630] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSimCache
	// void SetSimCache(class UNiagaraSimCache* SimCache, bool bResetSystem);                                                   // [0xe9c530] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSeekDelta
	// void SetSeekDelta(float InSeekDelta);                                                                                    // [0xe9c4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled
	// void SetRenderingEnabled(bool bInRenderingEnabled);                                                                      // [0xe9c410] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRandomSeedOffset
	// void SetRandomSeedOffset(int32_t NewRandomSeedOffset);                                                                   // [0xe9c370] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance
	// void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);          // [0xe9c260] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPaused
	// void SetPaused(bool bInPaused);                                                                                          // [0xe9c1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4
	// void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);                                                  // [0xe9c080] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3
	// void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);                                                    // [0xe9bf40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2
	// void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);                                                  // [0xe9be20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat
	// void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);                                                     // [0xe9bd00] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariablePosition
	// void SetNiagaraVariablePosition(FString InVariableName, FVector InValue);                                                // [0xe9bbc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject
	// void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);                                            // [0xe9b510] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableMatrix
	// void SetNiagaraVariableMatrix(FString InVariableName, FMatrix& InValue);                                                 // [0xe9ba80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	// void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);                                       // [0xe9b960] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt
	// void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);                                                     // [0xe9b850] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat
	// void SetNiagaraVariableFloat(FString InVariableName, float InValue);                                                     // [0xe9b730] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool
	// void SetNiagaraVariableBool(FString InVariableName, bool InValue);                                                       // [0xe9b620] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor
	// void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);                                               // [0xe9b510] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetMaxSimTime
	// void SetMaxSimTime(float InMaxTime);                                                                                     // [0xe9b490] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
	// void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);                                                                  // [0xe9b400] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug
	// void SetGpuComputeDebug(bool bEnableDebug);                                                                              // [0xe9b340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceSolo
	// void SetForceSolo(bool bInForceSolo);                                                                                    // [0xe9b290] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceLocalPlayerEffect
	// void SetForceLocalPlayerEffect(bool bIsPlayerEffect);                                                                    // [0xe9b1f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetEmitterFixedBounds
	// void SetEmitterFixedBounds(FName EmitterName, FBox LocalBounds);                                                         // [0xe9b0a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetDesiredAge
	// void SetDesiredAge(float InDesiredAge);                                                                                  // [0xe9af70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCustomTimeDilation
	// void SetCustomTimeDilation(float Dilation);                                                                              // [0xe9aec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	// void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                                                            // [0xe9ae30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAutoDestroy
	// void SetAutoDestroy(bool bInAutoDestroy);                                                                                // [0xe9ad80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAsset
	// void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);                                     // [0xe9acb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAllowScalability
	// void SetAllowScalability(bool bAllow);                                                                                   // [0xe9abe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode
	// void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);                                                            // [0xe9ab60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge
	// void SeekToDesiredAge(float InDesiredAge);                                                                               // [0xe9aad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ResetSystem
	// void ResetSystem();                                                                                                      // [0xe9aaa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ReinitializeSystem
	// void ReinitializeSystem();                                                                                               // [0xe9aa80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0xe9a990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.InitForPerformanceBaseline
	// void InitForPerformanceBaseline();                                                                                       // [0xe9a910] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetTickBehavior
	// ENiagaraTickBehavior GetTickBehavior();                                                                                  // [0xe9a8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSystemFixedBounds
	// FBox GetSystemFixedBounds();                                                                                             // [0xe9a8a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSimCache
	// class UNiagaraSimCache* GetSimCache();                                                                                   // [0xe9a880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSeekDelta
	// float GetSeekDelta();                                                                                                    // [0xe9a860] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetRandomSeedOffset
	// int32_t GetRandomSeedOffset();                                                                                           // [0xe9a840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	// bool GetPreviewLODDistanceEnabled();                                                                                     // [0xe9a810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance
	// float GetPreviewLODDistance();                                                                                           // [0xe9a7d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	// TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);                       // [0xe9a3b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	// TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);                            // [0xe9a5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	// TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);                                            // [0xe9a1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetMaxSimTime
	// float GetMaxSimTime();                                                                                                   // [0xe9a1b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
	// bool GetLockDesiredAgeDeltaTimeToSeekDelta();                                                                            // [0xe9a190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceSolo
	// bool GetForceSolo();                                                                                                     // [0xe9a160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceLocalPlayerEffect
	// bool GetForceLocalPlayerEffect();                                                                                        // [0xe9a130] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetEmitterFixedBounds
	// FBox GetEmitterFixedBounds(FName EmitterName);                                                                           // [0xe99fb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDesiredAge
	// float GetDesiredAge();                                                                                                   // [0xe99f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDataInterface
	// class UNiagaraDataInterface* GetDataInterface(FString Name);                                                             // [0xe99eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetCustomTimeDilation
	// float GetCustomTimeDilation();                                                                                           // [0xe99e90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAsset
	// class UNiagaraSystem* GetAsset();                                                                                        // [0xe99e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAllowScalability
	// bool GetAllowScalability();                                                                                              // [0xe99e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode
	// ENiagaraAgeUpdateMode GetAgeUpdateMode();                                                                                // [0xe99e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.ClearSystemFixedBounds
	// void ClearSystemFixedBounds();                                                                                           // [0xe99d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ClearSimCache
	// void ClearSimCache(bool bResetSystem);                                                                                   // [0xe99c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ClearEmitterFixedBounds
	// void ClearEmitterFixedBounds(FName EmitterName);                                                                         // [0xe99b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime
	// void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                                                // [0xe99a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulation
	// void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);                                                       // [0xe999a0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNCPoolElement
{ 
	class UNiagaraComponent*                           Component;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0008   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNCPool
{ 
	TArray<FNCPoolElement>                             FreeElements;                                               // 0x0000   (0x0010)  
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UNiagaraComponentPool : public UObject
{ 
public:
	TMap<class UNiagaraSystem*, FNCPool>               WorldParticleSystemPools;                                   // 0x0028   (0x0050)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0078   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraDeviceProfileStateEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	uint32_t                                           QualityLevelMask;                                           // 0x0008   (0x0004)  
	uint32_t                                           SetQualityLevelMask;                                        // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraPlatformSet
{ 
	int32_t                                            QualityLevelMask;                                           // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FNiagaraDeviceProfileStateEntry>            DeviceProfileStates;                                        // 0x0008   (0x0010)  
	TArray<FNiagaraPlatformSetCVarCondition>           CVarConditions;                                             // 0x0018   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0028   (0x0008)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraVariableAttributeBinding
{ 
	FNiagaraVariableBase                               ParamMapVariable;                                           // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraVariable                                   DataSetVariable;                                            // 0x0010   (0x0020)  
	FNiagaraVariable                                   RootVariable;                                               // 0x0030   (0x0020)  
	TEnumAsByte<ENiagaraBindingSource>                 BindingSourceMode;                                          // 0x0050   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	bool                                               bBindingExistsOnSource : 1;                                 // 0x0054:0 (0x0001)  
	bool                                               bIsCachedParticleValue : 1;                                 // 0x0054:1 (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 8 MaxSize: 0x00E0
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0028   (0x0030)  
	int32_t                                            SortOrderHint;                                              // 0x0058   (0x0004)  
	ENiagaraRendererMotionVectorSetting                MotionVectorSetting;                                        // 0x005C   (0x0004)  
	FNiagaraVariableAttributeBinding                   RendererEnabledBinding;                                     // 0x0060   (0x0058)  
	bool                                               bIsEnabled;                                                 // 0x00B8   (0x0001)  
	bool                                               bAllowInCullProxies;                                        // 0x00B9   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00BA   (0x0002)  MISSED
	FGuid                                              OuterEmitterVersion;                                        // 0x00BC   (0x0010)  
	bool                                               bMotionBlurEnabled;                                         // 0x00CC   (0x0001)  
	unsigned char                                      UnknownData01_7[0x13];                                      // 0x00CD   (0x0013)  MISSED
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraTypeDefinition
{ 
	class UObject*                                     ClassStructOrEnum;                                          // 0x0000   (0x0008)  
	uint16_t                                           UnderlyingType;                                             // 0x0008   (0x0002)  
	char                                               Flags;                                                      // 0x000A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x000B   (0x0005)  MISSED
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FNiagaraComponentPropertyBinding
{ 
	FNiagaraVariableAttributeBinding                   AttributeBinding;                                           // 0x0000   (0x0058)  
	FName                                              PropertyName;                                               // 0x0058   (0x0008)  
	FNiagaraTypeDefinition                             PropertyType;                                               // 0x0060   (0x0010)  
	FName                                              MetadataSetterName;                                         // 0x0070   (0x0008)  
	TMap<FString, FString>                             PropertySetterParameterDefaults;                            // 0x0078   (0x0050)  
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x0230 (560 bytes) (0x0000E0 - 0x000230) align 8 MaxSize: 0x0230
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UClass*                                      ComponentType;                                              // 0x00E0   (0x0008)  
	uint32_t                                           ComponentCountLimit;                                        // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x00F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0148   (0x0058)  
	bool                                               bAssignComponentsOnParticleID;                              // 0x01A0   (0x0001)  
	bool                                               bCreateComponentFirstParticleFrame;                         // 0x01A1   (0x0001)  
	bool                                               bOnlyActivateNewlyAquiredComponents;                        // 0x01A2   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x01A3   (0x0001)  MISSED
	int32_t                                            RendererVisibility;                                         // 0x01A4   (0x0004)  
	class USceneComponent*                             TemplateComponent;                                          // 0x01A8   (0x0008)  
	TArray<FNiagaraComponentPropertyBinding>           PropertyBindings;                                           // 0x01B0   (0x0010)  
	unsigned char                                      UnknownData02_7[0x70];                                      // 0x01C0   (0x0070)  MISSED
};

/// Struct /Script/Niagara.NiagaraCulledComponentInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraCulledComponentInfo
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraCullProxyComponent
/// Size: 0x0820 (2080 bytes) (0x000808 - 0x000820) align 16 MaxSize: 0x0820
class UNiagaraCullProxyComponent : public UNiagaraComponent
{ 
public:
	TArray<FNiagaraCulledComponentInfo>                Instances;                                                  // 0x0808   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0818   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataChannelLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelLibrary.GetNiagaraDataChannel
	// class UNiagaraDataChannelHandler* GetNiagaraDataChannel(class UObject* WorldContextObject, FName Channel);               // [0xf382e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	ENiagaraGpuSyncMode                                GpuSyncMode;                                                // 0x0040   (0x0004)  
	int32_t                                            MaxElements;                                                // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<float>                                      FloatData;                                                  // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector2f>                                  InternalFloatData;                                          // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector3f>                                  InternalFloatData;                                          // 0x0048   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPosition
/// Size: 0x000C (12 bytes) (0x00000C - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraPosition : FVector3f
{ 
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayPosition
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FNiagaraPosition>                           PositionData;                                               // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FVector4f>                                  InternalFloatData;                                          // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FLinearColor>                               ColorData;                                                  // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FQuat4f>                                    InternalQuatData;                                           // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVectorValue
	// void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit); // [0xf3a8f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4Value
	// void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector4& Value, bool bSizeToFit); // [0xf3a590] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4
	// void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector4>& ArrayData);    // [0xf3a420] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2DValue
	// void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector2D& Value, bool bSizeToFit); // [0xf3a250] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D
	// void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector2D>& ArrayData);  // [0xf3a0e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector
	// void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);      // [0xf3a780] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8Value
	// void SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // [0xf39f20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayUInt8
	// void SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);       // [0xf39db0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuatValue
	// void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FQuat& Value, bool bSizeToFit); // [0xf39bd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat
	// void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FQuat>& ArrayData);          // [0xf39a60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPositionValue
	// void SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FVector& Value, bool bSizeToFit); // [0xf397d0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayPosition
	// void SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FVector>& ArrayData);    // [0xf39510] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32Value
	// void SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, int32_t Value, bool bSizeToFit); // [0xf39350] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32
	// void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<int32_t>& ArrayData);       // [0xf391e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloatValue
	// void SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, float Value, bool bSizeToFit); // [0xf39020] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat
	// void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<float>& ArrayData);         // [0xf38eb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColorValue
	// void SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, FLinearColor& Value, bool bSizeToFit); // [0xf38ce0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor
	// void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<FLinearColor>& ArrayData);  // [0xf38b70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBoolValue
	// void SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index, bool& Value, bool bSizeToFit); // [0xf389a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool
	// void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<bool>& ArrayData);           // [0xf38830] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVectorValue
	// FVector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);           // [0xf381a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4Value
	// FVector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);         // [0xf37f10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4
	// TArray<FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                     // [0xf37dd0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2DValue
	// FVector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);       // [0xf37ca0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D
	// TArray<FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0xf37b60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector
	// TArray<FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                       // [0xf38060] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8Value
	// int32_t GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);            // [0xf37a60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayUInt8
	// TArray<int32_t> GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                        // [0xf37920] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuatValue
	// FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);               // [0xf377e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat
	// TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                           // [0xf376a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPositionValue
	// FVector GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);         // [0xf374a0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayPosition
	// TArray<FVector> GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                     // [0xf371e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32Value
	// int32_t GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);            // [0xf370e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32
	// TArray<int32_t> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                        // [0xf36fa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloatValue
	// float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);              // [0xf36ea0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat
	// TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                          // [0xf36d60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColorValue
	// FLinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);       // [0xf36c50] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor
	// TArray<FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                   // [0xf36b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBoolValue
	// bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32_t Index);                // [0xf36a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool
	// TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName);                            // [0xf368d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<int32_t>                                    IntData;                                                    // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayUInt8
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<char>                                       InternalIntData;                                            // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<bool>                                       BoolData;                                                   // 0x0048   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraID
{ 
	int32_t                                            Index;                                                      // 0x0000   (0x0004)  
	int32_t                                            AcquireTag;                                                 // 0x0004   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayNiagaraID
/// Size: 0x0058 (88 bytes) (0x000048 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
{ 
public:
	TArray<FNiagaraID>                                 IntData;                                                    // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
public:
	class USoundSubmix*                                Submix;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
public:
	class USoundSubmix*                                Submix;                                                     // 0x0038   (0x0008)  
	int32_t                                            Resolution;                                                 // 0x0040   (0x0004)  
	float                                              ScopeInMilliseconds;                                        // 0x0044   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayerSettings
/// Size: 0x0408 (1032 bytes) (0x000028 - 0x000408) align 8 MaxSize: 0x0408
class UNiagaraDataInterfaceAudioPlayerSettings : public UObject
{ 
public:
	bool                                               bOverrideConcurrency;                                       // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	class USoundConcurrency*                           Concurrency;                                                // 0x0030   (0x0008)  
	bool                                               bOverrideAttenuationSettings;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FSoundAttenuationSettings                          AttenuationSettings;                                        // 0x0040   (0x03C8)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align 8 MaxSize: 0x0090
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
public:
	class USoundBase*                                  SoundToPlay;                                                // 0x0038   (0x0008)  
	class USoundAttenuation*                           Attenuation;                                                // 0x0040   (0x0008)  
	class USoundConcurrency*                           Concurrency;                                                // 0x0048   (0x0008)  
	TArray<FName>                                      ParameterNames;                                             // 0x0050   (0x0010)  
	FNiagaraUserParameterBinding                       ConfigurationUserParameter;                                 // 0x0060   (0x0020)  
	bool                                               bLimitPlaysPerTick;                                         // 0x0080   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	int32_t                                            MaxPlaysPerTick;                                            // 0x0084   (0x0004)  
	bool                                               bStopWhenComponentIsDestroyed;                              // 0x0088   (0x0001)  
	bool                                               bAllowLoopingOneShotSounds;                                 // 0x0089   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x008A   (0x0006)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
public:
	int32_t                                            Resolution;                                                 // 0x0040   (0x0004)  
	float                                              MinimumFrequency;                                           // 0x0044   (0x0004)  
	float                                              MaximumFrequency;                                           // 0x0048   (0x0004)  
	float                                              NoiseFloorDb;                                               // 0x004C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
public:
	int32_t                                            PlayerControllerIndex;                                      // 0x0038   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0038   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{ 
public:
	TArray<float>                                      ShaderLUT;                                                  // 0x0038   (0x0010)  
	float                                              LUTMinTime;                                                 // 0x0048   (0x0004)  
	float                                              LUTMaxTime;                                                 // 0x004C   (0x0004)  
	float                                              LUTInvTimeRange;                                            // 0x0050   (0x0004)  
	float                                              LUTNumSamplesMinusOne;                                      // 0x0054   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0058   (0x0004)  MISSED
	bool                                               bUseLUT : 1;                                                // 0x005C:0 (0x0001)  
	bool                                               bExposeCurve : 1;                                           // 0x005C:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x005D   (0x0003)  MISSED
	FName                                              ExposedName;                                                // 0x0060   (0x0008)  
	class UTexture2D*                                  ExposedTexture;                                             // 0x0068   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0270 (624 bytes) (0x000070 - 0x000270) align 8 MaxSize: 0x0270
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         RedCurve;                                                   // 0x0070   (0x0080)  
	FRichCurve                                         GreenCurve;                                                 // 0x00F0   (0x0080)  
	FRichCurve                                         BlueCurve;                                                  // 0x0170   (0x0080)  
	FRichCurve                                         AlphaCurve;                                                 // 0x01F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCubeTexture
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
public:
	uint32_t                                           Seed;                                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0xC];                                       // 0x003C   (0x000C)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x00F0 (240 bytes) (0x000070 - 0x0000F0) align 8 MaxSize: 0x00F0
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         Curve;                                                      // 0x0070   (0x0080)  
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraParticleCallbackHandler : public UInterface
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData
	// void ReceiveParticleData(TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, FVector& SimulationPositionOffset); // [0xf386e0] Native|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{ 
public:
	FNiagaraUserParameterBinding                       CallbackHandlerParameter;                                   // 0x0038   (0x0020)  
	ENDIExport_GPUAllocationMode                       GPUAllocationMode;                                          // 0x0058   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0059   (0x0003)  MISSED
	int32_t                                            GPUAllocationFixedSize;                                     // 0x005C   (0x0004)  
	float                                              GPUAllocationPerParticleSize;                               // 0x0060   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	bool                                               ClearBeforeNonIterationStage;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            NumCellsX;                                                  // 0x003C   (0x0004)  
	int32_t                                            NumCellsY;                                                  // 0x0040   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x0044   (0x0004)  
	int32_t                                            NumAttributes;                                              // 0x0048   (0x0004)  
	bool                                               SetGridFromMaxAxis;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	FVector2D                                          WorldBBoxSize;                                              // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x0128 (296 bytes) (0x000060 - 0x000128) align 8 MaxSize: 0x0128
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
public:
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0060   (0x0020)  
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0080   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0081:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x56];                                      // 0x0082   (0x0056)  MISSED
	TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                       // 0x00D8   (0x0050)  


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                 // [0xf385b0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                              // [0xf38480] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	// bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t AttributeIndex);      // [0xf367b0] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	// bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY); // [0xf36630] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0148 (328 bytes) (0x000128 - 0x000148) align 8 MaxSize: 0x0148
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
{ 
public:
	FString                                            EmitterName;                                                // 0x0128   (0x0010)  
	FString                                            DIName;                                                     // 0x0138   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0070 (112 bytes) (0x000038 - 0x000070) align 8 MaxSize: 0x0070
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
public:
	bool                                               ClearBeforeNonIterationStage;                               // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FIntVector                                         NumCells;                                                   // 0x003C   (0x000C)  
	float                                              CellSize;                                                   // 0x0048   (0x0004)  
	int32_t                                            NumCellsMaxAxis;                                            // 0x004C   (0x0004)  
	ESetResolutionMethod                               SetResolutionMethod;                                        // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FVector                                            WorldBBoxSize;                                              // 0x0058   (0x0018)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x00F0 (240 bytes) (0x000070 - 0x0000F0) align 8 MaxSize: 0x00F0
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
public:
	int32_t                                            NumAttributes;                                              // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0078   (0x0020)  
	ENiagaraGpuBufferFormat                            OverrideBufferFormat;                                       // 0x0098   (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0099:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x56];                                      // 0x009A   (0x0056)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	// void GetTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                 // [0xf7e3c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	// void GetRawTextureSize(class UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);              // [0xf7e230] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	// bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t AttributeIndex);          // [0xf367b0] Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	// bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // [0xf7e030] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollectionReader
/// Size: 0x0110 (272 bytes) (0x0000F0 - 0x000110) align 8 MaxSize: 0x0110
class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
{ 
public:
	FString                                            EmitterName;                                                // 0x00F0   (0x0010)  
	FString                                            DIName;                                                     // 0x0100   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D
/// Size: 0x00B0 (176 bytes) (0x000038 - 0x0000B0) align 8 MaxSize: 0x00B0
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntPoint                                          Size;                                                       // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0040   (0x0020)  
	TMap<uint64_t, class UTextureRenderTarget2D*>      ManagedRenderTargets;                                       // 0x0060   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
public:
	class AActor*                                      SourceLandscape;                                            // 0x0038   (0x0008)  
	ENDILandscape_SourceMode                           SourceMode;                                                 // 0x0040   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<class UPhysicalMaterial*>                   PhysicalMaterials;                                          // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{ 
public:
	class UNiagaraMeshRendererProperties*              MeshRenderer;                                               // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0078 (120 bytes) (0x000070 - 0x000078) align 8 MaxSize: 0x0078
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
public:
	uint32_t                                           MaxNeighborsPerCell;                                        // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0038 (56 bytes) (0x000038 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{ 
public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{ 
public:
	FString                                            EmitterName;                                                // 0x0038   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
public:
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0038   (0x0030)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRasterizationGrid3D
/// Size: 0x0080 (128 bytes) (0x000070 - 0x000080) align 8 MaxSize: 0x0080
class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
public:
	int32_t                                            NumAttributes;                                              // 0x0070   (0x0004)  
	float                                              Precision;                                                  // 0x0074   (0x0004)  
	int32_t                                            ResetValue;                                                 // 0x0078   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x0108 (264 bytes) (0x000038 - 0x000108) align 8 MaxSize: 0x0108
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntPoint                                          Size;                                                       // 0x0038   (0x0008)  
	ENiagaraMipMapGeneration                           MipMapGeneration;                                           // 0x0040   (0x0001)  
	ENiagaraMipMapGenerationType                       MipMapGenerationType;                                       // 0x0041   (0x0001)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x0042   (0x0001)  
	TEnumAsByte<TextureFilter>                         OverrideRenderTargetFilter;                                 // 0x0043   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x0044:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0044:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0048   (0x0020)  
	unsigned char                                      UnknownData01_6[0x50];                                      // 0x0068   (0x0050)  MISSED
	TMap<uint64_t, class UTextureRenderTarget2D*>      ManagedRenderTargets;                                       // 0x00B8   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x00B8 (184 bytes) (0x000038 - 0x0000B8) align 8 MaxSize: 0x00B8
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
public:
	FIntVector                                         Size;                                                       // 0x0038   (0x000C)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x0044   (0x0001)  
	TEnumAsByte<TextureFilter>                         OverrideRenderTargetFilter;                                 // 0x0045   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x0046:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x0046:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0047   (0x0001)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0048   (0x0020)  
	TMap<uint64_t, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                                       // 0x0068   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetCube
/// Size: 0x00B0 (176 bytes) (0x000038 - 0x0000B0) align 8 MaxSize: 0x00B0
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{ 
public:
	int32_t                                            Size;                                                       // 0x0038   (0x0004)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x003C   (0x0001)  
	TEnumAsByte<TextureFilter>                         OverrideRenderTargetFilter;                                 // 0x003D   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x003E:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x003E:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x003F   (0x0001)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0040   (0x0020)  
	TMap<uint64_t, class UTextureRenderTargetCube*>    ManagedRenderTargets;                                       // 0x0060   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x00C0 (192 bytes) (0x000038 - 0x0000C0) align 8 MaxSize: 0x00C0
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FIntVector                                         Size;                                                       // 0x0040   (0x000C)  
	TEnumAsByte<ETextureRenderTargetFormat>            OverrideRenderTargetFormat;                                 // 0x004C   (0x0001)  
	TEnumAsByte<TextureFilter>                         OverrideRenderTargetFilter;                                 // 0x004D   (0x0001)  
	bool                                               bInheritUserParameterSettings : 1;                          // 0x004E:0 (0x0001)  
	bool                                               bOverrideFormat : 1;                                        // 0x004E:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x004F   (0x0001)  MISSED
	FNiagaraUserParameterBinding                       RenderTargetUserParameter;                                  // 0x0050   (0x0020)  
	TMap<uint64_t, class UTextureRenderTargetVolume*>  ManagedRenderTargets;                                       // 0x0070   (0x0050)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{ 
public:
	TArray<FName>                                      ActorTags;                                                  // 0x0038   (0x0010)  
	TArray<FName>                                      ComponentTags;                                              // 0x0048   (0x0010)  
	SDK_UNDEFINED(16,352) /* TArray<TWeakObjectPtr<AActor*>> */ __um(SourceActors);                                // 0x0058   (0x0010)  
	bool                                               OnlyUseMoveable;                                            // 0x0068   (0x0001)  
	bool                                               UseComplexCollisions;                                       // 0x0069   (0x0001)  
	bool                                               GlobalSearchAllowed;                                        // 0x006A   (0x0001)  
	bool                                               GlobalSearchForced;                                         // 0x006B   (0x0001)  
	bool                                               GlobalSearchFallback_Unscripted;                            // 0x006C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x006D   (0x0003)  MISSED
	int32_t                                            MaxNumPrimitives;                                           // 0x0070   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0074   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary.SetSourceActors
	// void SetSourceActors(class UNiagaraComponent* NiagaraSystem, FName OverrideName, TArray<AActor*>& SourceActors);         // [0xfeebf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x0100 (256 bytes) (0x000038 - 0x000100) align 8 MaxSize: 0x0100
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{ 
public:
	ENDISkeletalMesh_SourceMode                        SourceMode;                                                 // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TWeakObjectPtr<class AActor*>                      SoftSourceActor;                                            // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_6[0x28];                                      // 0x0048   (0x0028)  MISSED
	TArray<FName>                                      ComponentTags;                                              // 0x0070   (0x0010)  
	class USkeletalMeshComponent*                      SourceComponent;                                            // 0x0080   (0x0008)  
	FNiagaraUserParameterBinding                       MeshUserParameter;                                          // 0x0088   (0x0020)  
	ENDISkeletalMesh_SkinningMode                      SkinningMode;                                               // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00A9   (0x0007)  MISSED
	TArray<FName>                                      SamplingRegions;                                            // 0x00B0   (0x0010)  
	int32_t                                            WholeMeshLOD;                                               // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x00C4   (0x0004)  MISSED
	TArray<FName>                                      FilteredBones;                                              // 0x00C8   (0x0010)  
	TArray<FName>                                      FilteredSockets;                                            // 0x00D8   (0x0010)  
	FName                                              ExcludeBoneName;                                            // 0x00E8   (0x0008)  
	bool                                               bExcludeBone : 1;                                           // 0x00F0:0 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x00F1   (0x0003)  MISSED
	int32_t                                            UvSetIndex;                                                 // 0x00F4   (0x0004)  
	bool                                               bRequireCurrentFrameData;                                   // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData05_7[0x7];                                       // 0x00F9   (0x0007)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
	// void OnSourceEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                        // [0xfeeb10] Final|Native|Protected 
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x00B8 (184 bytes) (0x000038 - 0x0000B8) align 8 MaxSize: 0x00B8
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
public:
	class AActor*                                      Source;                                                     // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       SplineUserParameter;                                        // 0x0040   (0x0020)  
	bool                                               bUseLUT;                                                    // 0x0060   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0061   (0x0003)  MISSED
	int32_t                                            NumLUTSteps;                                                // 0x0064   (0x0004)  
	unsigned char                                      UnknownData01_7[0x50];                                      // 0x0068   (0x0050)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpriteRendererInfo
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface
{ 
public:
	class UNiagaraSpriteRendererProperties*            SpriteRenderer;                                             // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0170 (368 bytes) (0x000070 - 0x000170) align 8 MaxSize: 0x0170
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0270 (624 bytes) (0x000070 - 0x000270) align 8 MaxSize: 0x0270
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)  
	FRichCurve                                         WCurve;                                                     // 0x01F0   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x01F0 (496 bytes) (0x000070 - 0x0001F0) align 8 MaxSize: 0x01F0
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
public:
	FRichCurve                                         XCurve;                                                     // 0x0070   (0x0080)  
	FRichCurve                                         YCurve;                                                     // 0x00F0   (0x0080)  
	FRichCurve                                         ZCurve;                                                     // 0x0170   (0x0080)  
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
public:
	class UVectorField*                                Field;                                                      // 0x0038   (0x0008)  
	bool                                               bTileX;                                                     // 0x0040   (0x0001)  
	bool                                               bTileY;                                                     // 0x0041   (0x0001)  
	bool                                               bTileZ;                                                     // 0x0042   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x0043   (0x0005)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeCache
/// Size: 0x0090 (144 bytes) (0x000038 - 0x000090) align 8 MaxSize: 0x0090
class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface
{ 
public:
	class UVolumeCache*                                VolumeCache;                                                // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0040   (0x0050)  MISSED
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0060 (96 bytes) (0x000038 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
public:
	class UTexture*                                    Texture;                                                    // 0x0038   (0x0008)  
	FNiagaraUserParameterBinding                       TextureUserParameter;                                       // 0x0040   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraDebugHUDVariable
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraDebugHUDVariable
{ 
	bool                                               bEnabled;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebugHudTextOptions
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraDebugHudTextOptions
{ 
	ENiagaraDebugHudFont                               Font;                                                       // 0x0000   (0x0004)  
	ENiagaraDebugHudHAlign                             HorizontalAlignment;                                        // 0x0004   (0x0001)  
	ENiagaraDebugHudVAlign                             VerticalAlignment;                                          // 0x0005   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0006   (0x0002)  MISSED
	FVector2D                                          ScreenOffset;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebugHUDSettingsData
/// Size: 0x0238 (568 bytes) (0x000000 - 0x000238) align 8 MaxSize: 0x0238
struct FNiagaraDebugHUDSettingsData
{ 
	bool                                               bHudEnabled;                                                // 0x0000   (0x0001)  
	bool                                               bHudRenderingEnabled;                                       // 0x0001   (0x0001)  
	bool                                               bValidateSystemSimulationDataBuffers;                       // 0x0002   (0x0001)  
	bool                                               bValidateParticleDataBuffers;                               // 0x0003   (0x0001)  
	bool                                               bOverviewEnabled;                                           // 0x0004   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0005   (0x0003)  MISSED
	ENiagaraDebugHUDOverviewMode                       OverviewMode;                                               // 0x0008   (0x0004)  
	ENiagaraDebugHudFont                               OverviewFont;                                               // 0x000C   (0x0004)  
	FVector2D                                          OverviewLocation;                                           // 0x0010   (0x0010)  
	bool                                               bShowRegisteredComponents;                                  // 0x0020   (0x0001)  
	bool                                               bOverviewShowFilteredSystemOnly;                            // 0x0021   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0022   (0x0006)  MISSED
	FString                                            ActorFilter;                                                // 0x0028   (0x0010)  
	bool                                               bComponentFilterEnabled;                                    // 0x0038   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	FString                                            ComponentFilter;                                            // 0x0040   (0x0010)  
	bool                                               bSystemFilterEnabled;                                       // 0x0050   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	FString                                            SystemFilter;                                               // 0x0058   (0x0010)  
	bool                                               bEmitterFilterEnabled;                                      // 0x0068   (0x0001)  
	unsigned char                                      UnknownData04_6[0x7];                                       // 0x0069   (0x0007)  MISSED
	FString                                            EmitterFilter;                                              // 0x0070   (0x0010)  
	bool                                               bActorFilterEnabled;                                        // 0x0080   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0081   (0x0003)  MISSED
	ENiagaraDebugHudVerbosity                          SystemDebugVerbosity;                                       // 0x0084   (0x0004)  
	ENiagaraDebugHudVerbosity                          SystemEmitterVerbosity;                                     // 0x0088   (0x0004)  
	ENiagaraDebugHudVerbosity                          DataInterfaceVerbosity;                                     // 0x008C   (0x0004)  
	bool                                               bSystemShowBounds;                                          // 0x0090   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              SystemBoundsSolidBoxAlpha;                                  // 0x0094   (0x0004)  
	bool                                               bSystemShowActiveOnlyInWorld;                               // 0x0098   (0x0001)  
	bool                                               bShowSystemVariables;                                       // 0x0099   (0x0001)  
	unsigned char                                      UnknownData07_6[0x6];                                       // 0x009A   (0x0006)  MISSED
	TArray<FNiagaraDebugHUDVariable>                   SystemVariables;                                            // 0x00A0   (0x0010)  
	FNiagaraDebugHudTextOptions                        SystemTextOptions;                                          // 0x00B0   (0x0018)  
	bool                                               bShowParticleVariables;                                     // 0x00C8   (0x0001)  
	bool                                               bEnableGpuParticleReadback;                                 // 0x00C9   (0x0001)  
	bool                                               bShowParticleIndex;                                         // 0x00CA   (0x0001)  
	unsigned char                                      UnknownData08_6[0x5];                                       // 0x00CB   (0x0005)  MISSED
	TArray<FNiagaraDebugHUDVariable>                   ParticlesVariables;                                         // 0x00D0   (0x0010)  
	FNiagaraDebugHudTextOptions                        ParticleTextOptions;                                        // 0x00E0   (0x0018)  
	bool                                               bShowParticlesVariablesWithSystem;                          // 0x00F8   (0x0001)  
	bool                                               bShowParticleVariablesVertical;                             // 0x00F9   (0x0001)  
	bool                                               bUseMaxParticlesToDisplay;                                  // 0x00FA   (0x0001)  
	bool                                               bUseParticleDisplayClip;                                    // 0x00FB   (0x0001)  
	unsigned char                                      UnknownData09_6[0x4];                                       // 0x00FC   (0x0004)  MISSED
	FVector2D                                          ParticleDisplayClip;                                        // 0x0100   (0x0010)  
	bool                                               bUseParticleDisplayCenterRadius;                            // 0x0110   (0x0001)  
	unsigned char                                      UnknownData10_6[0x3];                                       // 0x0111   (0x0003)  MISSED
	float                                              ParticleDisplayCenterRadius;                                // 0x0114   (0x0004)  
	int32_t                                            MaxParticlesToDisplay;                                      // 0x0118   (0x0004)  
	int32_t                                            PerfReportFrames;                                           // 0x011C   (0x0004)  
	ENiagaraDebugHUDPerfSampleMode                     PerfSampleMode;                                             // 0x0120   (0x0004)  
	ENiagaraDebugHUDPerfGraphMode                      PerfGraphMode;                                              // 0x0124   (0x0004)  
	int32_t                                            PerfHistoryFrames;                                          // 0x0128   (0x0004)  
	float                                              PerfGraphTimeRange;                                         // 0x012C   (0x0004)  
	FVector2D                                          PerfGraphSize;                                              // 0x0130   (0x0010)  
	FLinearColor                                       PerfGraphAxisColor;                                         // 0x0140   (0x0010)  
	bool                                               bEnableSmoothing;                                           // 0x0150   (0x0001)  
	unsigned char                                      UnknownData11_6[0x3];                                       // 0x0151   (0x0003)  MISSED
	int32_t                                            SmoothingWidth;                                             // 0x0154   (0x0004)  
	FLinearColor                                       DefaultBackgroundColor;                                     // 0x0158   (0x0010)  
	FLinearColor                                       OverviewHeadingColor;                                       // 0x0168   (0x0010)  
	FLinearColor                                       OverviewDetailColor;                                        // 0x0178   (0x0010)  
	FLinearColor                                       OverviewDetailHighlightColor;                               // 0x0188   (0x0010)  
	FLinearColor                                       InWorldErrorTextColor;                                      // 0x0198   (0x0010)  
	FLinearColor                                       InWorldTextColor;                                           // 0x01A8   (0x0010)  
	FLinearColor                                       MessageInfoTextColor;                                       // 0x01B8   (0x0010)  
	FLinearColor                                       MessageWarningTextColor;                                    // 0x01C8   (0x0010)  
	FLinearColor                                       MessageErrorTextColor;                                      // 0x01D8   (0x0010)  
	float                                              SystemColorTableOpacity;                                    // 0x01E8   (0x0004)  
	uint32_t                                           SystemColorSeed;                                            // 0x01EC   (0x0004)  
	FVector                                            SystemColorHSVMin;                                          // 0x01F0   (0x0018)  
	FVector                                            SystemColorHSVMax;                                          // 0x0208   (0x0018)  
	ENiagaraDebugPlaybackMode                          PlaybackMode;                                               // 0x0220   (0x0001)  
	bool                                               bPlaybackRateEnabled;                                       // 0x0221   (0x0001)  
	unsigned char                                      UnknownData12_6[0x2];                                       // 0x0222   (0x0002)  MISSED
	float                                              PlaybackRate;                                               // 0x0224   (0x0004)  
	bool                                               bLoopTimeEnabled;                                           // 0x0228   (0x0001)  
	unsigned char                                      UnknownData13_6[0x3];                                       // 0x0229   (0x0003)  MISSED
	float                                              LoopTime;                                                   // 0x022C   (0x0004)  
	bool                                               bShowGlobalBudgetInfo;                                      // 0x0230   (0x0001)  
	unsigned char                                      UnknownData14_7[0x7];                                       // 0x0231   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraDebugHUDSettings
/// Size: 0x0280 (640 bytes) (0x000028 - 0x000280) align 8 MaxSize: 0x0280
class UNiagaraDebugHUDSettings : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0028   (0x0020)  MISSED
	FNiagaraDebugHUDSettingsData                       Data;                                                       // 0x0048   (0x0238)  
};

/// Struct /Script/Niagara.NiagaraParameterBinding
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraParameterBinding
{ 
	FNiagaraVariableBase                               Parameter;                                                  // 0x0000   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x002C (44 bytes) (0x000000 - 0x00002C) align 4 MaxSize: 0x002C
struct FNiagaraMaterialAttributeBinding
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	FNiagaraVariableBase                               NiagaraVariable;                                            // 0x0008   (0x000C)  
	FNiagaraVariableBase                               ResolvedNiagaraVariable;                                    // 0x0014   (0x000C)  
	FNiagaraVariableBase                               NiagaraChildVariable;                                       // 0x0020   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialScalarParameter
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraRendererMaterialScalarParameter
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	float                                              Value;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialVectorParameter
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FNiagaraRendererMaterialVectorParameter
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	FLinearColor                                       Value;                                                      // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialTextureParameter
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraRendererMaterialTextureParameter
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	class UTexture*                                    Texture;                                                    // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialStaticBoolParameter
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraRendererMaterialStaticBoolParameter
{ 
	FName                                              MaterialParameterName;                                      // 0x0000   (0x0008)  
	FName                                              StaticVariableName;                                         // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraRendererMaterialParameters
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraRendererMaterialParameters
{ 
	TArray<FNiagaraMaterialAttributeBinding>           AttributeBindings;                                          // 0x0000   (0x0010)  
	TArray<FNiagaraRendererMaterialScalarParameter>    ScalarParameters;                                           // 0x0010   (0x0010)  
	TArray<FNiagaraRendererMaterialVectorParameter>    VectorParameters;                                           // 0x0020   (0x0010)  
	TArray<FNiagaraRendererMaterialTextureParameter>   TextureParameters;                                          // 0x0030   (0x0010)  
	TArray<FNiagaraRendererMaterialStaticBoolParameter> StaticBoolParameters;                                      // 0x0040   (0x0010)  
};

/// Class /Script/Niagara.NiagaraDecalRendererProperties
/// Size: 0x0448 (1096 bytes) (0x0000E0 - 0x000448) align 8 MaxSize: 0x0448
class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x00E0   (0x0008)  
	FNiagaraParameterBinding                           MaterialParameterBinding;                                   // 0x00E8   (0x000C)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00F4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00F5   (0x0003)  MISSED
	int32_t                                            RendererVisibility;                                         // 0x00F8   (0x0004)  
	float                                              DecalScreenSizeFade;                                        // 0x00FC   (0x0004)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0100   (0x0058)  
	FNiagaraVariableAttributeBinding                   DecalOrientationBinding;                                    // 0x0158   (0x0058)  
	FNiagaraVariableAttributeBinding                   DecalSizeBinding;                                           // 0x01B0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DecalFadeBinding;                                           // 0x0208   (0x0058)  
	FNiagaraVariableAttributeBinding                   DecalSortOrderBinding;                                      // 0x0260   (0x0058)  
	FNiagaraVariableAttributeBinding                   DecalColorBinding;                                          // 0x02B8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DecalVisibleBinding;                                        // 0x0310   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0368   (0x0058)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x03C0   (0x0050)  
	unsigned char                                      UnknownData01_7[0x38];                                      // 0x0410   (0x0038)  MISSED
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraEditorDataBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEditorParametersAdapterBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraEditorParametersAdapterBase : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSignificanceHandler : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{ 
public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{ 
public:
};

/// Struct /Script/Niagara.NiagaraSystemVisibilityCullingSettings
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraSystemVisibilityCullingSettings
{ 
	bool                                               bCullWhenNotRendered : 1;                                   // 0x0000:0 (0x0001)  
	bool                                               bCullByViewFrustum : 1;                                     // 0x0000:1 (0x0001)  
	bool                                               bAllowPreCullingByViewFrustum : 1;                          // 0x0000:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaxTimeOutsideViewFrustum;                                  // 0x0004   (0x0004)  
	float                                              MaxTimeWithoutRender;                                       // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraLinearRamp
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraLinearRamp
{ 
	float                                              StartX;                                                     // 0x0000   (0x0004)  
	float                                              StartY;                                                     // 0x0004   (0x0004)  
	float                                              EndX;                                                       // 0x0008   (0x0004)  
	float                                              EndY;                                                       // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraGlobalBudgetScaling
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 4 MaxSize: 0x0038
struct FNiagaraGlobalBudgetScaling
{ 
	bool                                               bCullByGlobalBudget : 1;                                    // 0x0000:0 (0x0001)  
	bool                                               bScaleMaxDistanceByGlobalBudgetUse : 1;                     // 0x0000:1 (0x0001)  
	bool                                               bScaleMaxInstanceCountByGlobalBudgetUse : 1;                // 0x0000:2 (0x0001)  
	bool                                               bScaleSystemInstanceCountByGlobalBudgetUse : 1;             // 0x0000:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0001   (0x0003)  MISSED
	float                                              MaxGlobalBudgetUsage;                                       // 0x0004   (0x0004)  
	FNiagaraLinearRamp                                 MaxDistanceScaleByGlobalBudgetUse;                          // 0x0008   (0x0010)  
	FNiagaraLinearRamp                                 MaxInstanceCountScaleByGlobalBudgetUse;                     // 0x0018   (0x0010)  
	FNiagaraLinearRamp                                 MaxSystemInstanceCountScaleByGlobalBudgetUse;               // 0x0028   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FNiagaraSystemScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bCullByDistance : 1;                                        // 0x0030:0 (0x0001)  
	bool                                               bCullMaxInstanceCount : 1;                                  // 0x0030:1 (0x0001)  
	bool                                               bCullPerSystemMaxInstanceCount : 1;                         // 0x0030:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              MaxDistance;                                                // 0x0034   (0x0004)  
	bool                                               bCullByMaxTimeWithoutRender : 1;                            // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	int32_t                                            MaxInstances;                                               // 0x003C   (0x0004)  
	int32_t                                            MaxSystemInstances;                                         // 0x0040   (0x0004)  
	float                                              MaxTimeWithoutRender;                                       // 0x0044   (0x0004)  
	ENiagaraCullProxyMode                              CullProxyMode;                                              // 0x0048   (0x0004)  
	int32_t                                            MaxSystemProxies;                                           // 0x004C   (0x0004)  
	FNiagaraSystemVisibilityCullingSettings            VisibilityCulling;                                          // 0x0050   (0x000C)  
	FNiagaraGlobalBudgetScaling                        BudgetScaling;                                              // 0x005C   (0x0038)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraSystemScalabilitySettingsArray
{ 
	TArray<FNiagaraSystemScalabilitySettings>          Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraEmitterScalabilitySettings
{ 
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0000   (0x0030)  
	bool                                               bScaleSpawnCount : 1;                                       // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0031   (0x0003)  MISSED
	float                                              SpawnCountScale;                                            // 0x0034   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraEmitterScalabilitySettingsArray
{ 
	TArray<FNiagaraEmitterScalabilitySettings>         Settings;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPerfBaselineStats
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraPerfBaselineStats
{ 
	float                                              PerInstanceAvg_GT;                                          // 0x0000   (0x0004)  
	float                                              PerInstanceAvg_RT;                                          // 0x0004   (0x0004)  
	float                                              PerInstanceMax_GT;                                          // 0x0008   (0x0004)  
	float                                              PerInstanceMax_RT;                                          // 0x000C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UNiagaraEffectType : public UObject
{ 
public:
	bool                                               bAllowCullingForLocalPlayers;                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	ENiagaraScalabilityUpdateFrequency                 UpdateFrequency;                                            // 0x002C   (0x0004)  
	ENiagaraCullReaction                               CullReaction;                                               // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	class UNiagaraSignificanceHandler*                 SignificanceHandler;                                        // 0x0038   (0x0008)  
	TArray<FNiagaraSystemScalabilitySettings>          DetailLevelScalabilitySettings;                             // 0x0040   (0x0010)  
	FNiagaraSystemScalabilitySettingsArray             SystemScalabilitySettings;                                  // 0x0050   (0x0010)  
	FNiagaraEmitterScalabilitySettingsArray            EmitterScalabilitySettings;                                 // 0x0060   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0070   (0x0008)  MISSED
	class UNiagaraBaselineController*                  PerformanceBaselineController;                              // 0x0078   (0x0008)  
	FNiagaraPerfBaselineStats                          PerfBaselineStats;                                          // 0x0080   (0x0010)  
	FGuid                                              PerfBaselineVersion;                                        // 0x0090   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraAssetVersion
/// Size: 0x001C (28 bytes) (0x000000 - 0x00001C) align 4 MaxSize: 0x001C
struct FNiagaraAssetVersion
{ 
	int32_t                                            MajorVersion;                                               // 0x0000   (0x0004)  
	int32_t                                            MinorVersion;                                               // 0x0004   (0x0004)  
	FGuid                                              VersionGuid;                                                // 0x0008   (0x0010)  
	bool                                               bIsVisibleInVersionSelector;                                // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0019   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FNiagaraEventReceiverProperties
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              SourceEventGenerator;                                       // 0x0008   (0x0008)  
	FName                                              SourceEmitter;                                              // 0x0010   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraEventGeneratorProperties
{ 
	int32_t                                            MaxEventsPerFrame;                                          // 0x0000   (0x0004)  
	FName                                              ID;                                                         // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0010   (0x0048)  
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraEmitterScriptProperties
{ 
	class UNiagaraScript*                              Script;                                                     // 0x0000   (0x0008)  
	TArray<FNiagaraEventReceiverProperties>            EventReceivers;                                             // 0x0008   (0x0010)  
	TArray<FNiagaraEventGeneratorProperties>           EventGenerators;                                            // 0x0018   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties
{ 
	EScriptExecutionMode                               ExecutionMode;                                              // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	uint32_t                                           SpawnNumber;                                                // 0x002C   (0x0004)  
	uint32_t                                           MaxEventsPerFrame;                                          // 0x0030   (0x0004)  
	FGuid                                              SourceEmitterID;                                            // 0x0034   (0x0010)  
	FName                                              SourceEventName;                                            // 0x0044   (0x0008)  
	bool                                               bRandomSpawnNumber;                                         // 0x004C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x004D   (0x0003)  MISSED
	uint32_t                                           MinSpawnNumber;                                             // 0x0050   (0x0004)  
	bool                                               UpdateAttributeInitialValues;                               // 0x0054   (0x0001)  
	unsigned char                                      UnknownData02_7[0x3];                                       // 0x0055   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings
{ 
	bool                                               bOverrideSpawnCountScale : 1;                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraEmitterScalabilityOverrides
{ 
	TArray<FNiagaraEmitterScalabilityOverride>         Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.VersionedNiagaraEmitterData
/// Size: 0x02E8 (744 bytes) (0x000000 - 0x0002E8) align 8 MaxSize: 0x02E8
struct FVersionedNiagaraEmitterData
{ 
	FNiagaraAssetVersion                               Version;                                                    // 0x0000   (0x001C)  
	bool                                               bDeprecated;                                                // 0x001C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	FText                                              DeprecationMessage;                                         // 0x0020   (0x0018)  
	bool                                               bLocalSpace;                                                // 0x0038   (0x0001)  
	bool                                               bDeterminism;                                               // 0x0039   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x003A   (0x0002)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x003C   (0x0004)  
	bool                                               bInterpolatedSpawning : 1;                                  // 0x0040:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0044   (0x0001)  
	ENiagaraEmitterCalculateBoundMode                  CalculateBoundsMode;                                        // 0x0045   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x0046   (0x0002)  MISSED
	FBox                                               FixedBounds;                                                // 0x0048   (0x0038)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0080:0 (0x0001)  
	bool                                               bCombineEventSpawn : 1;                                     // 0x0080:1 (0x0001)  
	unsigned char                                      UnknownData04_5[0x7];                                       // 0x0081   (0x0007)  MISSED
	TArray<FNiagaraEventScriptProperties>              EventHandlerScriptProps;                                    // 0x0088   (0x0010)  
	FNiagaraPlatformSet                                Platforms;                                                  // 0x0098   (0x0030)  
	FNiagaraEmitterScalabilityOverrides                ScalabilityOverrides;                                       // 0x00C8   (0x0010)  
	bool                                               bLimitDeltaTime : 1;                                        // 0x00D8:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x00D9   (0x0003)  MISSED
	int32_t                                            MaxGPUParticlesSpawnPerFrame;                               // 0x00DC   (0x0004)  
	float                                              MaxDeltaTimePerTick;                                        // 0x00E0   (0x0004)  
	EParticleAllocationMode                            AllocationMode;                                             // 0x00E4   (0x0001)  
	unsigned char                                      UnknownData06_6[0x3];                                       // 0x00E5   (0x0003)  MISSED
	int32_t                                            PreAllocationCount;                                         // 0x00E8   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x00EC   (0x0004)  MISSED
	FNiagaraEmitterScriptProperties                    UpdateScriptProps;                                          // 0x00F0   (0x0028)  
	FNiagaraEmitterScriptProperties                    SpawnScriptProps;                                           // 0x0118   (0x0028)  
	FNiagaraParameterStore                             RendererBindings;                                           // 0x0140   (0x0088)  
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                         // 0x01C8   (0x0010)  
	TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                           // 0x01D8   (0x0010)  
	class UNiagaraScript*                              GPUComputeScript;                                           // 0x01E8   (0x0008)  
	TArray<FName>                                      SharedEventGeneratorIds;                                    // 0x01F0   (0x0010)  
	FNiagaraEmitterScalabilitySettings                 CurrentScalabilitySettings;                                 // 0x0200   (0x0038)  
	unsigned char                                      UnknownData08_7[0xB0];                                      // 0x0238   (0x00B0)  MISSED
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000B8) align 8 MaxSize: 0x00B8
class UNiagaraEmitter : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FGuid                                              ExposedVersion;                                             // 0x0030   (0x0010)  
	bool                                               bVersioningEnabled;                                         // 0x0040   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0041   (0x0007)  MISSED
	TArray<FVersionedNiagaraEmitterData>               VersionData;                                                // 0x0048   (0x0010)  
	unsigned char                                      UnknownData02_6[0x8];                                       // 0x0058   (0x0008)  MISSED
	FString                                            UniqueEmitterName;                                          // 0x0060   (0x0010)  
	TArray<class UNiagaraRendererProperties*>          RendererProperties;                                         // 0x0070   (0x0010)  
	TArray<FNiagaraEventScriptProperties>              EventHandlerScriptProps;                                    // 0x0080   (0x0010)  
	TArray<class UNiagaraSimulationStageBase*>         SimulationStages;                                           // 0x0090   (0x0010)  
	class UNiagaraScript*                              GPUComputeScript;                                           // 0x00A0   (0x0008)  
	TArray<FName>                                      SharedEventGeneratorIds;                                    // 0x00A8   (0x0010)  
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraEventReceiverEmitterAction : public UObject
{ 
public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{ 
public:
	uint32_t                                           NumParticles;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttachedWithParams
	// class UNiagaraComponent* SpawnSystemAttachedWithParams(FFXSystemSpawnParameters& SpawnParams);                           // [0x107cc70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAttached
	// class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0x107c770] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocationWithParams
	// class UNiagaraComponent* SpawnSystemAtLocationWithParams(FFXSystemSpawnParameters& SpawnParams);                         // [0x107c660] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation
	// class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck); // [0x107c240] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject
	// void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture); // [0x107c120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTextureObject
	// void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);            // [0x107c120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetTexture2DArrayObject
	// void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture2DArray* Texture); // [0x107c120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions
	// void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& SamplingRegions); // [0x107be40] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredSockets
	// void SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& FilteredSockets); // [0x107bb60] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceFilteredBones
	// void SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem, FString OverrideName, TArray<FName>& FilteredBones); // [0x107b880] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetComponentNiagaraGPURayTracedCollisionGroup
	// void SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int32_t CollisionGroup); // [0x107b720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.SetActorNiagaraGPURayTracedCollisionGroup
	// void SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int32_t CollisionGroup); // [0x107b530] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.ReleaseNiagaraGPURayTracedCollisionGroup
	// void ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int32_t CollisionGroup);                // [0x107b410] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent
	// void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent); // [0x107b000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh
	// void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh); // [0x107abf0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent
	// void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent); // [0x107a7f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection
	// class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection); // [0x107a6f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraFunctionLibrary.AcquireNiagaraGPURayTracedCollisionGroup
	// int32_t AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject);                                     // [0x107a5f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraLensEffectBase
/// Size: 0x0330 (816 bytes) (0x0002A0 - 0x000330) align 16 MaxSize: 0x0330
class ANiagaraLensEffectBase : public ANiagaraActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x02A0   (0x0010)  MISSED
	FTransform                                         DesiredRelativeTransform;                                   // 0x02B0   (0x0060)  
	float                                              BaseAuthoredFOV;                                            // 0x0310   (0x0004)  
	bool                                               bAllowMultipleInstances : 1;                                // 0x0314:0 (0x0001)  
	bool                                               bResetWhenRetriggered : 1;                                  // 0x0314:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0315   (0x0003)  MISSED
	TArray<class UClass*>                              EmittersToTreatAsSame;                                      // 0x0318   (0x0010)  
	class APlayerCameraManager*                        OwningCameraManager;                                        // 0x0328   (0x0008)  
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x03A0 (928 bytes) (0x0000E0 - 0x0003A0) align 8 MaxSize: 0x03A0
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
public:
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00E0   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x00E1   (0x0003)  MISSED
	bool                                               bUseInverseSquaredFalloff : 1;                              // 0x00E4:0 (0x0001)  
	bool                                               bAffectsTranslucency : 1;                                   // 0x00E4:1 (0x0001)  
	bool                                               bAlphaScalesBrightness : 1;                                 // 0x00E4:2 (0x0001)  
	bool                                               bOverrideInverseExposureBlend : 1;                          // 0x00E4:3 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00E5   (0x0003)  MISSED
	float                                              RadiusScale;                                                // 0x00E8   (0x0004)  
	float                                              DefaultExponent;                                            // 0x00EC   (0x0004)  
	FVector3f                                          ColorAdd;                                                   // 0x00F0   (0x000C)  
	float                                              InverseExposureBlend;                                       // 0x00FC   (0x0004)  
	int32_t                                            RendererVisibility;                                         // 0x0100   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0104   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   LightRenderingEnabledBinding;                               // 0x0108   (0x0058)  
	FNiagaraVariableAttributeBinding                   LightExponentBinding;                                       // 0x0160   (0x0058)  
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x01B8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0210   (0x0058)  
	FNiagaraVariableAttributeBinding                   RadiusBinding;                                              // 0x0268   (0x0058)  
	FNiagaraVariableAttributeBinding                   VolumetricScatteringBinding;                                // 0x02C0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0318   (0x0058)  
	unsigned char                                      UnknownData03_7[0x30];                                      // 0x0370   (0x0030)  MISSED
};

/// Struct /Script/Niagara.NiagaraMeshRendererMeshProperties
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FNiagaraMeshRendererMeshProperties
{ 
	class UStaticMesh*                                 Mesh;                                                       // 0x0000   (0x0008)  
	FNiagaraParameterBinding                           MeshParameterBinding;                                       // 0x0008   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FVector                                            Scale;                                                      // 0x0018   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0030   (0x0018)  
	FVector                                            PivotOffset;                                                // 0x0048   (0x0018)  
	ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                           // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraMeshMaterialOverride
{ 
	class UMaterialInterface*                          ExplicitMat;                                                // 0x0000   (0x0008)  
	FNiagaraUserParameterBinding                       UserParamBinding;                                           // 0x0008   (0x0020)  
};

/// Struct /Script/Niagara.NiagaraMeshMICOverride
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraMeshMICOverride
{ 
	class UMaterialInterface*                          OriginalMaterial;                                           // 0x0000   (0x0008)  
	class UMaterialInstanceConstant*                   ReplacementMaterial;                                        // 0x0008   (0x0008)  
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x0998 (2456 bytes) (0x0000E0 - 0x000998) align 8 MaxSize: 0x0998
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
public:
	TArray<FNiagaraMeshRendererMeshProperties>         Meshes;                                                     // 0x00E0   (0x0010)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00F0   (0x0001)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x00F1   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x00F2   (0x0002)  MISSED
	bool                                               bOverrideMaterials : 1;                                     // 0x00F4:0 (0x0001)  
	bool                                               bUseHeterogeneousVolumes : 1;                               // 0x00F4:1 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x00F4:2 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x00F5   (0x0003)  MISSED
	ENiagaraRendererSortPrecision                      SortPrecision;                                              // 0x00F8   (0x0001)  
	ENiagaraRendererGpuTranslucentLatency              GpuTranslucentLatency;                                      // 0x00F9   (0x0001)  
	unsigned char                                      UnknownData02_6[0x2];                                       // 0x00FA   (0x0002)  MISSED
	bool                                               bSubImageBlend : 1;                                         // 0x00FC:0 (0x0001)  
	bool                                               bEnableFrustumCulling : 1;                                  // 0x00FC:1 (0x0001)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x00FC:2 (0x0001)  
	bool                                               bEnableMeshFlipbook : 1;                                    // 0x00FC:3 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	TArray<FNiagaraMeshMaterialOverride>               OverrideMaterials;                                          // 0x0100   (0x0010)  
	TArray<FNiagaraMeshMICOverride>                    MICOverrideMaterials;                                       // 0x0110   (0x0010)  
	FVector2D                                          SubImageSize;                                               // 0x0120   (0x0010)  
	ENiagaraMeshFacingMode                             FacingMode;                                                 // 0x0130   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0131   (0x0003)  MISSED
	bool                                               bLockedAxisEnable : 1;                                      // 0x0134:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0135   (0x0003)  MISSED
	FVector                                            LockedAxis;                                                 // 0x0138   (0x0018)  
	ENiagaraMeshLockedAxisSpace                        LockedAxisSpace;                                            // 0x0150   (0x0001)  
	unsigned char                                      UnknownData06_6[0x7];                                       // 0x0151   (0x0007)  MISSED
	FVector                                            MeshBoundsScale;                                            // 0x0158   (0x0018)  
	float                                              MinCameraDistance;                                          // 0x0170   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x0174   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x0178   (0x0004)  
	unsigned char                                      UnknownData07_6[0x4];                                       // 0x017C   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0180   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x01D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0230   (0x0058)  
	FNiagaraVariableAttributeBinding                   MeshOrientationBinding;                                     // 0x0288   (0x0058)  
	FNiagaraVariableAttributeBinding                   ScaleBinding;                                               // 0x02E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x0338   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x0390   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x03E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x0440   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0498   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x04F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x0548   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x05A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x05F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0650   (0x0058)  
	FNiagaraVariableAttributeBinding                   MeshIndexBinding;                                           // 0x06A8   (0x0058)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x0700   (0x0050)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x0750   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevScaleBinding;                                           // 0x07A8   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevMeshOrientationBinding;                                 // 0x0800   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevCameraOffsetBinding;                                    // 0x0858   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevVelocityBinding;                                        // 0x08B0   (0x0058)  
	unsigned char                                      UnknownData08_6[0x68];                                      // 0x0908   (0x0068)  MISSED
	class UStaticMesh*                                 ParticleMesh;                                               // 0x0970   (0x0008)  
	FVector                                            PivotOffset;                                                // 0x0978   (0x0018)  
	ENiagaraMeshPivotOffsetSpace                       PivotOffsetSpace;                                           // 0x0990   (0x0001)  
	unsigned char                                      UnknownData09_7[0x7];                                       // 0x0991   (0x0007)  MISSED
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x00F0 (240 bytes) (0x000028 - 0x0000F0) align 8 MaxSize: 0x00F0
class UNiagaraParameterCollectionInstance : public UObject
{ 
public:
	class UNiagaraParameterCollection*                 Collection;                                                 // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           OverridenParameters;                                        // 0x0030   (0x0010)  
	FNiagaraParameterStore                             ParameterStorage;                                           // 0x0040   (0x0088)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x00C8   (0x0028)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	// void SetVectorParameter(FString InVariableName, FVector InValue);                                                        // [0x10d4480] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	// void SetVector4Parameter(FString InVariableName, FVector4& InValue);                                                     // [0x10d4370] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	// void SetVector2DParameter(FString InVariableName, FVector2D InValue);                                                    // [0x10d4280] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	// void SetQuatParameter(FString InVariableName, FQuat& InValue);                                                           // [0x10d4180] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	// void SetIntParameter(FString InVariableName, int32_t InValue);                                                           // [0x10d4000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	// void SetFloatParameter(FString InVariableName, float InValue);                                                           // [0x10d3f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	// void SetColorParameter(FString InVariableName, FLinearColor InValue);                                                    // [0x10d3e20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	// void SetBoolParameter(FString InVariableName, bool InValue);                                                             // [0x10d3d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	// FVector GetVectorParameter(FString InVariableName);                                                                      // [0x10d39f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	// FVector4 GetVector4Parameter(FString InVariableName);                                                                    // [0x10d3810] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	// FVector2D GetVector2DParameter(FString InVariableName);                                                                  // [0x10d3680] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	// FQuat GetQuatParameter(FString InVariableName);                                                                          // [0x10d34b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	// int32_t GetIntParameter(FString InVariableName);                                                                         // [0x10d3290] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	// float GetFloatParameter(FString InVariableName);                                                                         // [0x10d3120] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	// FLinearColor GetColorParameter(FString InVariableName);                                                                  // [0x10d2fb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	// bool GetBoolParameter(FString InVariableName);                                                                           // [0x10d2e50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UNiagaraParameterCollection : public UObject
{ 
public:
	FName                                              Namespace;                                                  // 0x0028   (0x0008)  
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0030   (0x0010)  
	class UMaterialParameterCollection*                SourceMaterialCollection;                                   // 0x0040   (0x0008)  
	class UNiagaraParameterCollectionInstance*         DefaultInstance;                                            // 0x0048   (0x0008)  
	FGuid                                              CompileId;                                                  // 0x0050   (0x0010)  
};

/// Class /Script/Niagara.NiagaraBaselineController
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UNiagaraBaselineController : public UObject
{ 
public:
	float                                              TestDuration;                                               // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0030   (0x0008)  
	class ANiagaraPerfBaselineActor*                   Owner;                                                      // 0x0038   (0x0008)  
	TWeakObjectPtr<class UNiagaraSystem*>              System;                                                     // 0x0040   (0x0008)  
	unsigned char                                      UnknownData01_7[0x28];                                      // 0x0048   (0x0028)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraBaselineController.OnTickTest
	// bool OnTickTest();                                                                                                       // [0x10d3d00] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnOwnerTick
	// void OnOwnerTick(float DeltaTime);                                                                                       // [0x10d3c70] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnEndTest
	// void OnEndTest(FNiagaraPerfBaselineStats Stats);                                                                         // [0x10d3be0] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnBeginTest
	// void OnBeginTest();                                                                                                      // [0x10d3bc0] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.GetSystem
	// class UNiagaraSystem* GetSystem();                                                                                       // [0x10d3660] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraBaselineController_Basic
/// Size: 0x0088 (136 bytes) (0x000070 - 0x000088) align 8 MaxSize: 0x0088
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{ 
public:
	int32_t                                            NumInstances;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	TArray<class UNiagaraComponent*>                   SpawnedComponents;                                          // 0x0078   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPerfBaselineActor
/// Size: 0x02A0 (672 bytes) (0x000290 - 0x0002A0) align 8 MaxSize: 0x02A0
class ANiagaraPerfBaselineActor : public AActor
{ 
public:
	class UNiagaraBaselineController*                  Controller;                                                 // 0x0290   (0x0008)  
	class UTextRenderComponent*                        Label;                                                      // 0x0298   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraPrecompileContainer : public UObject
{ 
public:
	TArray<class UNiagaraScript*>                      Scripts;                                                    // 0x0028   (0x0010)  
	class UNiagaraSystem*                              System;                                                     // 0x0038   (0x0008)  
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x0290 (656 bytes) (0x000290 - 0x000290) align 8 MaxSize: 0x0290
class ANiagaraPreviewBase : public AActor
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewBase.SetSystem
	// void SetSystem(class UNiagaraSystem* InSystem);                                                                          // [0x2c97800] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewBase.SetLabelText
	// void SetLabelText(FText& InXAxisText, FText& InYAxisText);                                                               // [0x2c97800] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraPreviewAxis : public UObject
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewAxis.Num
	// int32_t Num();                                                                                                           // [0x10d3b90] Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraPreviewAxis.ApplyToPreview
	// void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, FString& OutLabelText); // [0x10d2ca0] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{ 
public:
	FName                                              Param;                                                      // 0x0028   (0x0008)  
	int32_t                                            Count;                                                      // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	int32_t                                            Min;                                                        // 0x0038   (0x0004)  
	int32_t                                            Max;                                                        // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0040 (64 bytes) (0x000038 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	float                                              Min;                                                        // 0x0038   (0x0004)  
	float                                              Max;                                                        // 0x003C   (0x0004)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector2D                                          Min;                                                        // 0x0038   (0x0010)  
	FVector2D                                          Max;                                                        // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0068 (104 bytes) (0x000038 - 0x000068) align 8 MaxSize: 0x0068
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FVector                                            Min;                                                        // 0x0038   (0x0018)  
	FVector                                            Max;                                                        // 0x0050   (0x0018)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0080 (128 bytes) (0x000038 - 0x000080) align 16 MaxSize: 0x0080
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FVector4                                           Min;                                                        // 0x0040   (0x0020)  
	FVector4                                           Max;                                                        // 0x0060   (0x0020)  
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0058 (88 bytes) (0x000038 - 0x000058) align 8 MaxSize: 0x0058
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
public:
	FLinearColor                                       Min;                                                        // 0x0038   (0x0010)  
	FLinearColor                                       Max;                                                        // 0x0048   (0x0010)  
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x02E0 (736 bytes) (0x000290 - 0x0002E0) align 8 MaxSize: 0x02E0
class ANiagaraPreviewGrid : public AActor
{ 
public:
	class UNiagaraSystem*                              System;                                                     // 0x0290   (0x0008)  
	ENiagaraPreviewGridResetMode                       ResetMode;                                                  // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0299   (0x0007)  MISSED
	class UNiagaraPreviewAxis*                         PreviewAxisX;                                               // 0x02A0   (0x0008)  
	class UNiagaraPreviewAxis*                         PreviewAxisY;                                               // 0x02A8   (0x0008)  
	class UClass*                                      PreviewClass;                                               // 0x02B0   (0x0008)  
	float                                              SpacingX;                                                   // 0x02B8   (0x0004)  
	float                                              SpacingY;                                                   // 0x02BC   (0x0004)  
	int32_t                                            NumX;                                                       // 0x02C0   (0x0004)  
	int32_t                                            NumY;                                                       // 0x02C4   (0x0004)  
	TArray<class UChildActorComponent*>                PreviewComponents;                                          // 0x02C8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x02D8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewGrid.SetPaused
	// void SetPaused(bool bPaused);                                                                                            // [0x10d40f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews
	// void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);                                                               // [0x10d3400] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews
	// void DeactivatePreviews();                                                                                               // [0x10d2e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews
	// void ActivatePreviews(bool bReset);                                                                                      // [0x10d2c10] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraRibbonUVSettings
{ 
	ENiagaraRibbonUVDistributionMode                   DistributionMode;                                           // 0x0000   (0x0004)  
	ENiagaraRibbonUVEdgeMode                           LeadingEdgeMode;                                            // 0x0004   (0x0004)  
	ENiagaraRibbonUVEdgeMode                           TrailingEdgeMode;                                           // 0x0008   (0x0004)  
	float                                              TilingLength;                                               // 0x000C   (0x0004)  
	FVector2D                                          Offset;                                                     // 0x0010   (0x0010)  
	FVector2D                                          Scale;                                                      // 0x0020   (0x0010)  
	bool                                               bEnablePerParticleUOverride;                                // 0x0030   (0x0001)  
	bool                                               bEnablePerParticleVRangeOverride;                           // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_7[0x6];                                       // 0x0032   (0x0006)  MISSED
};

/// Struct /Script/Niagara.NiagaraRibbonShapeCustomVertex
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FNiagaraRibbonShapeCustomVertex
{ 
	FVector2f                                          position;                                                   // 0x0000   (0x0008)  
	FVector2f                                          Normal;                                                     // 0x0008   (0x0008)  
	float                                              TextureV;                                                   // 0x0010   (0x0004)  
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x0AA0 (2720 bytes) (0x0000E0 - 0x000AA0) align 8 MaxSize: 0x0AA0
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x00E0   (0x0008)  
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x00E8   (0x0020)  
	ENiagaraRibbonFacingMode                           FacingMode;                                                 // 0x0108   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0109   (0x0007)  MISSED
	FNiagaraRibbonUVSettings                           UV0Settings;                                                // 0x0110   (0x0038)  
	FNiagaraRibbonUVSettings                           UV1Settings;                                                // 0x0148   (0x0038)  
	int32_t                                            MaxNumRibbons;                                              // 0x0180   (0x0004)  
	bool                                               bUseGPUInit;                                                // 0x0184   (0x0001)  
	ENiagaraRibbonDrawDirection                        DrawDirection;                                              // 0x0185   (0x0001)  
	ENiagaraRibbonShapeMode                            Shape;                                                      // 0x0186   (0x0001)  
	bool                                               bEnableAccurateGeometry;                                    // 0x0187   (0x0001)  
	int32_t                                            WidthSegmentationCount;                                     // 0x0188   (0x0004)  
	int32_t                                            MultiPlaneCount;                                            // 0x018C   (0x0004)  
	int32_t                                            TubeSubdivisions;                                           // 0x0190   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0194   (0x0004)  MISSED
	TArray<FNiagaraRibbonShapeCustomVertex>            CustomVertices;                                             // 0x0198   (0x0010)  
	ENiagaraRibbonTessellationMode                     TessellationMode;                                           // 0x01A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x01A9   (0x0003)  MISSED
	float                                              CurveTension;                                               // 0x01AC   (0x0004)  
	int32_t                                            TessellationFactor;                                         // 0x01B0   (0x0004)  
	bool                                               bUseConstantFactor;                                         // 0x01B4   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x01B5   (0x0003)  MISSED
	float                                              TessellationAngle;                                          // 0x01B8   (0x0004)  
	bool                                               bScreenSpaceTessellation;                                   // 0x01BC   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x01BD   (0x0003)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x01C0   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x0218   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0270   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x02C8   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonTwistBinding;                                         // 0x0320   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonWidthBinding;                                         // 0x0378   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonFacingBinding;                                        // 0x03D0   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonIdBinding;                                            // 0x0428   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonLinkOrderBinding;                                     // 0x0480   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x04D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x0530   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0588   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x05E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0638   (0x0058)  
	FNiagaraVariableAttributeBinding                   RibbonUVDistance;                                           // 0x0690   (0x0058)  
	FNiagaraVariableAttributeBinding                   U0OverrideBinding;                                          // 0x06E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   V0RangeOverrideBinding;                                     // 0x0740   (0x0058)  
	FNiagaraVariableAttributeBinding                   U1OverrideBinding;                                          // 0x0798   (0x0058)  
	FNiagaraVariableAttributeBinding                   V1RangeOverrideBinding;                                     // 0x07F0   (0x0058)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x0848   (0x0050)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x0898   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevRibbonWidthBinding;                                     // 0x08F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevRibbonFacingBinding;                                    // 0x0948   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevRibbonTwistBinding;                                     // 0x09A0   (0x0058)  
	unsigned char                                      UnknownData05_7[0xA8];                                      // 0x09F8   (0x00A8)  MISSED
};

/// Class /Script/Niagara.NiagaraScratchPadContainer
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraScratchPadContainer : public UObject
{ 
public:
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 MaxSize: 0x0008
struct FNiagaraScriptExecutionPaddingInfo
{ 
	uint16_t                                           SrcOffset;                                                  // 0x0000   (0x0002)  
	uint16_t                                           DestOffset;                                                 // 0x0002   (0x0002)  
	uint16_t                                           SrcSize;                                                    // 0x0004   (0x0002)  
	uint16_t                                           DestSize;                                                   // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x00A8 (168 bytes) (0x000088 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore
{ 
	int32_t                                            ParameterSize;                                              // 0x0088   (0x0004)  
	uint32_t                                           PaddedParameterSize;                                        // 0x008C   (0x0004)  
	TArray<FNiagaraScriptExecutionPaddingInfo>         PaddingInfo;                                                // 0x0090   (0x0010)  
	bool                                               bInitialized : 1;                                           // 0x00A0:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x00A1   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraBoundParameter
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0000   (0x0020)  
	int32_t                                            SrcOffset;                                                  // 0x0020   (0x0004)  
	int32_t                                            DestOffset;                                                 // 0x0024   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraVMExecutableDataId
{ 
	FGuid                                              CompilerVersionID;                                          // 0x0000   (0x0010)  
	ENiagaraScriptUsage                                ScriptUsageType;                                            // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FGuid                                              ScriptUsageTypeID;                                          // 0x0014   (0x0010)  
	bool                                               bUsesRapidIterationParams : 1;                              // 0x0024:0 (0x0001)  
	bool                                               bDisableDebugSwitches : 1;                                  // 0x0024:1 (0x0001)  
	bool                                               bInterpolatedSpawn : 1;                                     // 0x0024:2 (0x0001)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x0024:3 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0025   (0x0003)  MISSED
	FGuid                                              BaseScriptID;                                               // 0x0028   (0x0010)  
	FNiagaraCompileHash                                BaseScriptCompileHash;                                      // 0x0038   (0x0010)  
	FGuid                                              ScriptVersionID;                                            // 0x0048   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableByteCode
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraVMExecutableByteCode
{ 
	TArray<char>                                       Data;                                                       // 0x0000   (0x0010)  
	int32_t                                            UncompressedSize;                                           // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraCompilerTag
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraCompilerTag
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	FString                                            StringValue;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraScriptDataUsageInfo
{ 
	bool                                               bReadsAttributeData;                                        // 0x0000   (0x0001)  
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraScriptDataInterfaceCompileInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	FNiagaraTypeDefinition                             Type;                                                       // 0x0010   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0020   (0x0008)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0028   (0x0008)  
	bool                                               bIsPlaceholder;                                             // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FVMFunctionSpecifier
{ 
	FName                                              Key;                                                        // 0x0000   (0x0008)  
	FName                                              Value;                                                      // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FVMExternalFunctionBindingInfo
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              OwnerName;                                                  // 0x0008   (0x0008)  
	TArray<bool>                                       InputParamLocations;                                        // 0x0010   (0x0010)  
	int32_t                                            NumOutputs;                                                 // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FVMFunctionSpecifier>                       FunctionSpecifiers;                                         // 0x0028   (0x0010)  
	TArray<FNiagaraVariableBase>                       VariadicInputs;                                             // 0x0038   (0x0010)  
	TArray<FNiagaraVariableBase>                       VariadicOutputs;                                            // 0x0048   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraDataSetProperties
{ 
	FNiagaraDataSetID                                  ID;                                                         // 0x0000   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	TArray<FNiagaraVariable>                           Variables;                                                  // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraStatScope
{ 
	FName                                              FullName;                                                   // 0x0000   (0x0008)  
	FName                                              FriendlyName;                                               // 0x0008   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x0190 (400 bytes) (0x000000 - 0x000190) align 8 MaxSize: 0x0190
struct FNiagaraVMExecutableData
{ 
	FNiagaraVMExecutableByteCode                       ByteCode;                                                   // 0x0000   (0x0018)  
	FNiagaraVMExecutableByteCode                       OptimizedByteCode;                                          // 0x0018   (0x0018)  
	unsigned char                                      UnknownData00_6[0x38];                                      // 0x0030   (0x0038)  MISSED
	int32_t                                            NumTempRegisters;                                           // 0x0068   (0x0004)  
	int32_t                                            NumUserPtrs;                                                // 0x006C   (0x0004)  
	TArray<FNiagaraCompilerTag>                        CompileTags;                                                // 0x0070   (0x0010)  
	TArray<char>                                       ScriptLiterals;                                             // 0x0080   (0x0010)  
	TArray<FNiagaraVariable>                           Attributes;                                                 // 0x0090   (0x0010)  
	FNiagaraScriptDataUsageInfo                        DataUsage;                                                  // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00A1   (0x0007)  MISSED
	TArray<FNiagaraScriptDataInterfaceCompileInfo>     DataInterfaceInfo;                                          // 0x00A8   (0x0010)  
	TArray<FVMExternalFunctionBindingInfo>             CalledVMExternalFunctions;                                  // 0x00B8   (0x0010)  
	unsigned char                                      UnknownData02_6[0x10];                                      // 0x00C8   (0x0010)  MISSED
	TArray<FNiagaraDataSetID>                          ReadDataSets;                                               // 0x00D8   (0x0010)  
	TArray<FNiagaraDataSetProperties>                  WriteDataSets;                                              // 0x00E8   (0x0010)  
	TArray<FNiagaraStatScope>                          StatScopes;                                                 // 0x00F8   (0x0010)  
	FNiagaraShaderScriptParametersMetadata             ShaderScriptParametersMetadata;                             // 0x0108   (0x0058)  
	ENiagaraScriptCompileStatus                        LastCompileStatus;                                          // 0x0160   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0161   (0x0007)  MISSED
	TArray<FSimulationStageMetaData>                   SimulationStageMetaData;                                    // 0x0168   (0x0010)  
	TArray<char>                                       ExperimentalContextData;                                    // 0x0178   (0x0010)  
	bool                                               bReadsSignificanceIndex : 1;                                // 0x0188:0 (0x0001)  
	bool                                               bNeedsGPUContextInit : 1;                                   // 0x0188:1 (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x0189   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraScriptDataInterfaceInfo
{ 
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	int32_t                                            UserPtrIdx;                                                 // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	FNiagaraTypeDefinition                             Type;                                                       // 0x0018   (0x0010)  
	FName                                              RegisteredParameterMapRead;                                 // 0x0028   (0x0008)  
	FName                                              RegisteredParameterMapWrite;                                // 0x0030   (0x0008)  
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x03A8 (936 bytes) (0x000028 - 0x0003A8) align 8 MaxSize: 0x03A8
class UNiagaraScript : public UNiagaraScriptBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	ENiagaraScriptUsage                                Usage;                                                      // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0031   (0x0003)  MISSED
	FGuid                                              UsageId;                                                    // 0x0034   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FNiagaraParameterStore                             RapidIterationParameters;                                   // 0x0048   (0x0088)  
	FNiagaraScriptExecutionParameterStore              ScriptExecutionParamStore;                                  // 0x00D0   (0x00A8)  
	TArray<FNiagaraBoundParameter>                     ScriptExecutionBoundParameters;                             // 0x0178   (0x0010)  
	FNiagaraVMExecutableDataId                         CachedScriptVMId;                                           // 0x0188   (0x0058)  
	unsigned char                                      UnknownData03_6[0x10];                                      // 0x01E0   (0x0010)  MISSED
	FNiagaraVMExecutableData                           CachedScriptVM;                                             // 0x01F0   (0x0190)  
	TArray<class UNiagaraParameterCollection*>         CachedParameterCollectionReferences;                        // 0x0380   (0x0010)  
	TArray<FNiagaraScriptDataInterfaceInfo>            CachedDefaultDataInterfaces;                                // 0x0390   (0x0010)  
	unsigned char                                      UnknownData04_7[0x8];                                       // 0x03A0   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	// void RaiseOnGPUCompilationComplete();                                                                                    // [0xd63f10] Final|Native|Public  
};

/// Struct /Script/Niagara.NiagaraSimCacheVariable
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FNiagaraSimCacheVariable
{ 
	FNiagaraVariableBase                               Variable;                                                   // 0x0000   (0x000C)  
	uint16_t                                           FloatOffset;                                                // 0x000C   (0x0002)  
	uint16_t                                           FloatCount;                                                 // 0x000E   (0x0002)  
	uint16_t                                           HalfOffset;                                                 // 0x0010   (0x0002)  
	uint16_t                                           HalfCount;                                                  // 0x0012   (0x0002)  
	uint16_t                                           Int32Offset;                                                // 0x0014   (0x0002)  
	uint16_t                                           Int32Count;                                                 // 0x0016   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraSimCacheDataBuffersLayout
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FNiagaraSimCacheDataBuffersLayout
{ 
	FName                                              LayoutName;                                                 // 0x0000   (0x0008)  
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0009   (0x0007)  MISSED
	TArray<FNiagaraSimCacheVariable>                   Variables;                                                  // 0x0010   (0x0010)  
	uint16_t                                           FloatCount;                                                 // 0x0020   (0x0002)  
	uint16_t                                           HalfCount;                                                  // 0x0022   (0x0002)  
	uint16_t                                           Int32Count;                                                 // 0x0024   (0x0002)  
	bool                                               bLocalSpace;                                                // 0x0026   (0x0001)  
	bool                                               bAllowInterpolation;                                        // 0x0027   (0x0001)  
	bool                                               bAllowVelocityExtrapolation;                                // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FName>                                      RebaseVariableNames;                                        // 0x0030   (0x0010)  
	TArray<FName>                                      InterpVariableNames;                                        // 0x0040   (0x0010)  
	uint16_t                                           ComponentVelocity;                                          // 0x0050   (0x0002)  
	unsigned char                                      UnknownData02_7[0x66];                                      // 0x0052   (0x0066)  MISSED
};

/// Struct /Script/Niagara.NiagaraSimCacheLayout
/// Size: 0x00C8 (200 bytes) (0x000000 - 0x0000C8) align 8 MaxSize: 0x00C8
struct FNiagaraSimCacheLayout
{ 
	FNiagaraSimCacheDataBuffersLayout                  SystemLayout;                                               // 0x0000   (0x00B8)  
	TArray<FNiagaraSimCacheDataBuffersLayout>          EmitterLayouts;                                             // 0x00B8   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSimCacheDataBuffers
/// Size: 0x0060 (96 bytes) (0x000000 - 0x000060) align 8 MaxSize: 0x0060
struct FNiagaraSimCacheDataBuffers
{ 
	uint32_t                                           NumInstances;                                               // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<char>                                       FloatData;                                                  // 0x0008   (0x0010)  
	TArray<char>                                       HalfData;                                                   // 0x0018   (0x0010)  
	TArray<char>                                       Int32Data;                                                  // 0x0028   (0x0010)  
	TArray<int32_t>                                    IDToIndexTable;                                             // 0x0038   (0x0010)  
	uint32_t                                           IDAcquireTag;                                               // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<uint32_t>                                   InterpMapping;                                              // 0x0050   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSimCacheSystemFrame
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FNiagaraSimCacheSystemFrame
{ 
	FBox                                               LocalBounds;                                                // 0x0000   (0x0038)  
	FNiagaraSimCacheDataBuffers                        SystemDataBuffers;                                          // 0x0038   (0x0060)  
};

/// Struct /Script/Niagara.NiagaraSimCacheEmitterFrame
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FNiagaraSimCacheEmitterFrame
{ 
	FBox                                               LocalBounds;                                                // 0x0000   (0x0038)  
	int32_t                                            TotalSpawnedParticles;                                      // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x003C   (0x0004)  MISSED
	FNiagaraSimCacheDataBuffers                        ParticleDataBuffers;                                        // 0x0040   (0x0060)  
};

/// Struct /Script/Niagara.NiagaraSimCacheFrame
/// Size: 0x0120 (288 bytes) (0x000000 - 0x000120) align 16 MaxSize: 0x0120
struct FNiagaraSimCacheFrame
{ 
	FTransform                                         LocalToWorld;                                               // 0x0000   (0x0060)  
	FVector3f                                          LWCTile;                                                    // 0x0060   (0x000C)  
	float                                              SimulationAge;                                              // 0x006C   (0x0004)  
	FNiagaraSimCacheSystemFrame                        SystemData;                                                 // 0x0070   (0x0098)  
	TArray<FNiagaraSimCacheEmitterFrame>               EmitterData;                                                // 0x0108   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0118   (0x0008)  MISSED
};

/// Class /Script/Niagara.NiagaraSimCache
/// Size: 0x0200 (512 bytes) (0x000028 - 0x000200) align 8 MaxSize: 0x0200
class UNiagaraSimCache : public UObject
{ 
public:
	FGuid                                              CacheGuid;                                                  // 0x0028   (0x0010)  
	TWeakObjectPtr<class UNiagaraSystem*>              SoftNiagaraSystem;                                          // 0x0038   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0040   (0x0028)  MISSED
	float                                              StartSeconds;                                               // 0x0068   (0x0004)  
	float                                              DurationSeconds;                                            // 0x006C   (0x0004)  
	FNiagaraSimCacheCreateParameters                   CreateParameters;                                           // 0x0070   (0x0058)  
	bool                                               bNeedsReadComponentMappingRecache;                          // 0x00C8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x00C9   (0x0007)  MISSED
	FNiagaraSimCacheLayout                             CacheLayout;                                                // 0x00D0   (0x00C8)  
	TArray<FNiagaraSimCacheFrame>                      CacheFrames;                                                // 0x0198   (0x0010)  
	TMap<FNiagaraVariableBase, class UObject*>         DataInterfaceStorage;                                       // 0x01A8   (0x0050)  
	unsigned char                                      UnknownData02_7[0x8];                                       // 0x01F8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Niagara.NiagaraSimCache.ReadVectorAttribute
	// void ReadVectorAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);        // [0x1110070] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadVector4Attribute
	// void ReadVector4Attribute(TArray<FVector4>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);      // [0x110fee0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadVector2Attribute
	// void ReadVector2Attribute(TArray<FVector2D>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);     // [0x110fb70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
	// void ReadQuatAttributeWithRebase(TArray<FQuat>& OutValues, FQuat Quat, FName AttributeName, FName EmitterName, int32_t FrameIndex); // [0x110f9a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadQuatAttribute
	// void ReadQuatAttribute(TArray<FQuat>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // [0x110f7e0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
	// void ReadPositionAttributeWithRebase(TArray<FVector>& OutValues, FTransform Transform, FName AttributeName, FName EmitterName, int32_t FrameIndex); // [0x110f570] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadPositionAttribute
	// void ReadPositionAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // [0x110f3b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadIntAttribute
	// void ReadIntAttribute(TArray<int32_t>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);           // [0x110f080] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadFloatAttribute
	// void ReadFloatAttribute(TArray<float>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);           // [0x110ed40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadColorAttribute
	// void ReadColorAttribute(TArray<FLinearColor>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);    // [0x110e990] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.IsEmpty
	// bool IsEmpty();                                                                                                          // [0x110e960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.IsCacheValid
	// bool IsCacheValid();                                                                                                     // [0x110e930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetStartSeconds
	// float GetStartSeconds();                                                                                                 // [0xd62df0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetNumFrames
	// int32_t GetNumFrames();                                                                                                  // [0x110e910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetNumEmitters
	// int32_t GetNumEmitters();                                                                                                // [0x110e8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetEmitterNames
	// TArray<FName> GetEmitterNames();                                                                                         // [0x110e7b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetEmitterName
	// FName GetEmitterName(int32_t EmitterIndex);                                                                              // [0x110e6e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetAttributeCaptureMode
	// ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode();                                                          // [0x110e6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Niagara.AsyncNiagaraCaptureSimCache
/// Size: 0x0108 (264 bytes) (0x000030 - 0x000108) align 8 MaxSize: 0x0108
class UAsyncNiagaraCaptureSimCache : public UBlueprintAsyncActionBase
{ 
public:
	class UNiagaraSimCache*                            CaptureSimCache;                                            // 0x0030   (0x0008)  
	class UNiagaraComponent*                           CaptureComponent;                                           // 0x0038   (0x0008)  
	SDK_UNDEFINED(16,353) /* FMulticastInlineDelegate */ __um(CaptureComplete);                                    // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0xB8];                                      // 0x0050   (0x00B8)  MISSED


	/// Functions
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
	// void OnCaptureComplete__DelegateSignature(bool bSuccess);                                                                // [0x2c97800] MulticastDelegate|Public|Delegate 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
	// class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x110e060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
	// class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, int32_t NumFrames, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x110daf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraSimCacheFunctionLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache
	// class UNiagaraSimCache* CreateNiagaraSimCache(class UObject* WorldContextObject);                                        // [0x110e590] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate
	// bool CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x110d6c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{ 
public:
	class UNiagaraScript*                              Script;                                                     // 0x0028   (0x0008)  
	FName                                              SimulationStageName;                                        // 0x0030   (0x0008)  
	bool                                               bEnabled : 1;                                               // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0039   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraVariableDataInterfaceBinding
{ 
	FNiagaraVariable                                   BoundVariable;                                              // 0x0000   (0x0020)  
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x02A8 (680 bytes) (0x000040 - 0x0002A8) align 8 MaxSize: 0x02A8
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
public:
	FNiagaraVariableAttributeBinding                   EnabledBinding;                                             // 0x0040   (0x0058)  
	ENiagaraIterationSource                            IterationSource;                                            // 0x0098   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0099   (0x0003)  MISSED
	int32_t                                            Iterations;                                                 // 0x009C   (0x0004)  
	FNiagaraVariableAttributeBinding                   NumIterationsBinding;                                       // 0x00A0   (0x0058)  
	ENiagaraSimStageExecuteBehavior                    ExecuteBehavior;                                            // 0x00F8   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x00F9   (0x0003)  MISSED
	bool                                               bDisablePartialParticleUpdate : 1;                          // 0x00FC:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x00FD   (0x0003)  MISSED
	FNiagaraVariableDataInterfaceBinding               DataInterface;                                              // 0x0100   (0x0020)  
	bool                                               bParticleIterationStateEnabled : 1;                         // 0x0120:0 (0x0001)  
	unsigned char                                      UnknownData03_5[0x7];                                       // 0x0121   (0x0007)  MISSED
	FNiagaraVariableAttributeBinding                   ParticleIterationStateBinding;                              // 0x0128   (0x0058)  
	FIntPoint                                          ParticleIterationStateRange;                                // 0x0180   (0x0008)  
	bool                                               bGpuDispatchForceLinear : 1;                                // 0x0188:0 (0x0001)  
	bool                                               bOverrideGpuDispatchNumThreads : 1;                         // 0x0188:1 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0189   (0x0003)  MISSED
	FIntVector                                         OverrideGpuDispatchNumThreads;                              // 0x018C   (0x000C)  
	ENiagaraGpuDispatchType                            DirectDispatchType;                                         // 0x0198   (0x0001)  
	ENiagaraDirectDispatchElementType                  DirectDispatchElementType;                                  // 0x0199   (0x0001)  
	unsigned char                                      UnknownData05_6[0x6];                                       // 0x019A   (0x0006)  MISSED
	FNiagaraVariableAttributeBinding                   ElementCountXBinding;                                       // 0x01A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   ElementCountYBinding;                                       // 0x01F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   ElementCountZBinding;                                       // 0x0250   (0x0058)  
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x0B78 (2936 bytes) (0x0000E0 - 0x000B78) align 8 MaxSize: 0x0B78
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
public:
	class UMaterialInterface*                          Material;                                                   // 0x00E0   (0x0008)  
	ENiagaraRendererSourceDataMode                     SourceMode;                                                 // 0x00E8   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x00E9   (0x0007)  MISSED
	FNiagaraUserParameterBinding                       MaterialUserParamBinding;                                   // 0x00F0   (0x0020)  
	ENiagaraSpriteAlignment                            Alignment;                                                  // 0x0110   (0x0001)  
	ENiagaraSpriteFacingMode                           FacingMode;                                                 // 0x0111   (0x0001)  
	unsigned char                                      UnknownData01_6[0x6];                                       // 0x0112   (0x0006)  MISSED
	FVector2D                                          PivotInUVSpace;                                             // 0x0118   (0x0010)  
	float                                              MacroUVRadius;                                              // 0x0128   (0x0004)  
	ENiagaraSortMode                                   SortMode;                                                   // 0x012C   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x012D   (0x0003)  MISSED
	FVector2D                                          SubImageSize;                                               // 0x0130   (0x0010)  
	bool                                               bSubImageBlend : 1;                                         // 0x0140:0 (0x0001)  
	bool                                               bRemoveHMDRollInVR : 1;                                     // 0x0140:1 (0x0001)  
	bool                                               bSortOnlyWhenTranslucent : 1;                               // 0x0140:2 (0x0001)  
	unsigned char                                      UnknownData03_5[0x3];                                       // 0x0141   (0x0003)  MISSED
	ENiagaraRendererSortPrecision                      SortPrecision;                                              // 0x0144   (0x0001)  
	ENiagaraRendererGpuTranslucentLatency              GpuTranslucentLatency;                                      // 0x0145   (0x0001)  
	ENiagaraRendererPixelCoverageMode                  PixelCoverageMode;                                          // 0x0146   (0x0001)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x0147   (0x0001)  MISSED
	float                                              PixelCoverageBlend;                                         // 0x0148   (0x0004)  
	float                                              MinFacingCameraBlendDistance;                               // 0x014C   (0x0004)  
	float                                              MaxFacingCameraBlendDistance;                               // 0x0150   (0x0004)  
	bool                                               bEnableCameraDistanceCulling : 1;                           // 0x0154:0 (0x0001)  
	unsigned char                                      UnknownData05_5[0x3];                                       // 0x0155   (0x0003)  MISSED
	float                                              MinCameraDistance;                                          // 0x0158   (0x0004)  
	float                                              MaxCameraDistance;                                          // 0x015C   (0x0004)  
	uint32_t                                           RendererVisibility;                                         // 0x0160   (0x0004)  
	unsigned char                                      UnknownData06_6[0x4];                                       // 0x0164   (0x0004)  MISSED
	FNiagaraVariableAttributeBinding                   PositionBinding;                                            // 0x0168   (0x0058)  
	FNiagaraVariableAttributeBinding                   ColorBinding;                                               // 0x01C0   (0x0058)  
	FNiagaraVariableAttributeBinding                   VelocityBinding;                                            // 0x0218   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteRotationBinding;                                      // 0x0270   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteSizeBinding;                                          // 0x02C8   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteFacingBinding;                                        // 0x0320   (0x0058)  
	FNiagaraVariableAttributeBinding                   SpriteAlignmentBinding;                                     // 0x0378   (0x0058)  
	FNiagaraVariableAttributeBinding                   SubImageIndexBinding;                                       // 0x03D0   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterialBinding;                                     // 0x0428   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial1Binding;                                    // 0x0480   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial2Binding;                                    // 0x04D8   (0x0058)  
	FNiagaraVariableAttributeBinding                   DynamicMaterial3Binding;                                    // 0x0530   (0x0058)  
	FNiagaraVariableAttributeBinding                   CameraOffsetBinding;                                        // 0x0588   (0x0058)  
	FNiagaraVariableAttributeBinding                   UVScaleBinding;                                             // 0x05E0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PivotOffsetBinding;                                         // 0x0638   (0x0058)  
	FNiagaraVariableAttributeBinding                   MaterialRandomBinding;                                      // 0x0690   (0x0058)  
	FNiagaraVariableAttributeBinding                   CustomSortingBinding;                                       // 0x06E8   (0x0058)  
	FNiagaraVariableAttributeBinding                   NormalizedAgeBinding;                                       // 0x0740   (0x0058)  
	FNiagaraVariableAttributeBinding                   RendererVisibilityTagBinding;                               // 0x0798   (0x0058)  
	FNiagaraRendererMaterialParameters                 MaterialParameters;                                         // 0x07F0   (0x0050)  
	FNiagaraVariableAttributeBinding                   PrevPositionBinding;                                        // 0x0840   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevVelocityBinding;                                        // 0x0898   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteRotationBinding;                                  // 0x08F0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteSizeBinding;                                      // 0x0948   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteFacingBinding;                                    // 0x09A0   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevSpriteAlignmentBinding;                                 // 0x09F8   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevCameraOffsetBinding;                                    // 0x0A50   (0x0058)  
	FNiagaraVariableAttributeBinding                   PrevPivotOffsetBinding;                                     // 0x0AA8   (0x0058)  
	unsigned char                                      UnknownData07_7[0x78];                                      // 0x0B00   (0x0078)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x00A0 (160 bytes) (0x000098 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{ 
	bool                                               bOverrideDistanceSettings : 1;                              // 0x0098:0 (0x0001)  
	bool                                               bOverrideInstanceCountSettings : 1;                         // 0x0098:1 (0x0001)  
	bool                                               bOverridePerSystemInstanceCountSettings : 1;                // 0x0098:2 (0x0001)  
	bool                                               bOverrideVisibilitySettings : 1;                            // 0x0098:3 (0x0001)  
	bool                                               bOverrideGlobalBudgetScalingSettings : 1;                   // 0x0098:4 (0x0001)  
	bool                                               bOverrideCullProxySettings : 1;                             // 0x0098:5 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0099   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraSystemScalabilityOverrides
{ 
	TArray<FNiagaraSystemScalabilityOverride>          Overrides;                                                  // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.VersionedNiagaraEmitter
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FVersionedNiagaraEmitter
{ 
	class UNiagaraEmitter*                             Emitter;                                                    // 0x0000   (0x0008)  
	FGuid                                              Version;                                                    // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNiagaraEmitterHandle
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FName                                              IdName;                                                     // 0x0010   (0x0008)  
	bool                                               bIsEnabled;                                                 // 0x0018   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0019   (0x0003)  MISSED
	FName                                              Name;                                                       // 0x001C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	class UNiagaraEmitter*                             Instance;                                                   // 0x0028   (0x0008)  
	FVersionedNiagaraEmitter                           VersionedInstance;                                          // 0x0030   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraParameterDataSetBinding
{ 
	int32_t                                            ParameterOffset;                                            // 0x0000   (0x0004)  
	int32_t                                            DataSetComponentOffset;                                     // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraParameterDataSetBindingCollection
{ 
	TArray<FNiagaraParameterDataSetBinding>            FloatOffsets;                                               // 0x0000   (0x0010)  
	TArray<FNiagaraParameterDataSetBinding>            Int32Offsets;                                               // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0240 (576 bytes) (0x000000 - 0x000240) align 8 MaxSize: 0x0240
struct FNiagaraSystemCompiledData
{ 
	FNiagaraParameterStore                             InstanceParamStore;                                         // 0x0000   (0x0088)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x0088   (0x0048)  
	FNiagaraDataSetCompiledData                        SpawnInstanceParamsDataSetCompiledData;                     // 0x00D0   (0x0048)  
	FNiagaraDataSetCompiledData                        UpdateInstanceParamsDataSetCompiledData;                    // 0x0118   (0x0048)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceGlobalBinding;                                 // 0x0160   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceSystemBinding;                                 // 0x0180   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          SpawnInstanceOwnerBinding;                                  // 0x01A0   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  SpawnInstanceEmitterBindings;                               // 0x01C0   (0x0010)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceGlobalBinding;                                // 0x01D0   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceSystemBinding;                                // 0x01F0   (0x0020)  
	FNiagaraParameterDataSetBindingCollection          UpdateInstanceOwnerBinding;                                 // 0x0210   (0x0020)  
	TArray<FNiagaraParameterDataSetBindingCollection>  UpdateInstanceEmitterBindings;                              // 0x0230   (0x0010)  
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x0538 (1336 bytes) (0x000070 - 0x000538) align 8 MaxSize: 0x0538
class UNiagaraSystem : public UFXSystemAsset
{ 
public:
	bool                                               bSupportLargeWorldCoordinates : 1;                          // 0x0070:0 (0x0001)  
	bool                                               bOverrideCastShadow : 1;                                    // 0x0070:1 (0x0001)  
	bool                                               bOverrideReceivesDecals : 1;                                // 0x0070:2 (0x0001)  
	bool                                               bOverrideRenderCustomDepth : 1;                             // 0x0070:3 (0x0001)  
	bool                                               bOverrideCustomDepthStencilValue : 1;                       // 0x0070:4 (0x0001)  
	bool                                               bOverrideCustomDepthStencilWriteMask : 1;                   // 0x0070:5 (0x0001)  
	bool                                               bOverrideTranslucencySortPriority : 1;                      // 0x0070:6 (0x0001)  
	bool                                               bOverrideTranslucencySortDistanceOffset : 1;                // 0x0070:7 (0x0001)  
	bool                                               bCastShadow : 1;                                            // 0x0071:0 (0x0001)  
	bool                                               bReceivesDecals : 1;                                        // 0x0071:1 (0x0001)  
	bool                                               bRenderCustomDepth : 1;                                     // 0x0071:2 (0x0001)  
	bool                                               bDisableExperimentalVM : 1;                                 // 0x0071:3 (0x0001)  
	ERendererStencilMask                               CustomDepthStencilWriteMask;                                // 0x0072   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0073   (0x0001)  MISSED
	int32_t                                            CustomDepthStencilValue;                                    // 0x0074   (0x0004)  
	int32_t                                            TranslucencySortPriority;                                   // 0x0078   (0x0004)  
	float                                              TranslucencySortDistanceOffset;                             // 0x007C   (0x0004)  
	bool                                               bDumpDebugSystemInfo;                                       // 0x0080   (0x0001)  
	bool                                               bDumpDebugEmitterInfo;                                      // 0x0081   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0082   (0x0001)  MISSED
	bool                                               bRequireCurrentFrameData;                                   // 0x0083   (0x0001)  
	bool                                               bFixedBounds : 1;                                           // 0x0084:0 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0085   (0x0003)  MISSED
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0088   (0x0008)  
	bool                                               bOverrideScalabilitySettings;                               // 0x0090   (0x0001)  
	unsigned char                                      UnknownData03_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	bool                                               bOverrideAllowCullingForLocalPlayers : 1;                   // 0x0094:0 (0x0001)  
	bool                                               bAllowCullingForLocalPlayersOverride : 1;                   // 0x0094:1 (0x0001)  
	unsigned char                                      UnknownData04_5[0x3];                                       // 0x0095   (0x0003)  MISSED
	TArray<FNiagaraSystemScalabilityOverride>          ScalabilityOverrides;                                       // 0x0098   (0x0010)  
	FNiagaraSystemScalabilityOverrides                 SystemScalabilityOverrides;                                 // 0x00A8   (0x0010)  
	TArray<FNiagaraEmitterHandle>                      EmitterHandles;                                             // 0x00B8   (0x0010)  
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                               // 0x00C8   (0x0010)  
	class UNiagaraScript*                              SystemSpawnScript;                                          // 0x00D8   (0x0008)  
	class UNiagaraScript*                              SystemUpdateScript;                                         // 0x00E0   (0x0008)  
	unsigned char                                      UnknownData05_6[0x10];                                      // 0x00E8   (0x0010)  MISSED
	FNiagaraSystemCompiledData                         SystemCompiledData;                                         // 0x00F8   (0x0240)  
	FNiagaraUserRedirectionParameterStore              ExposedParameters;                                          // 0x0338   (0x00D8)  
	FBox                                               FixedBounds;                                                // 0x0410   (0x0038)  
	bool                                               bAutoDeactivate;                                            // 0x0448   (0x0001)  
	bool                                               bDeterminism;                                               // 0x0449   (0x0001)  
	unsigned char                                      UnknownData06_6[0x2];                                       // 0x044A   (0x0002)  MISSED
	int32_t                                            RandomSeed;                                                 // 0x044C   (0x0004)  
	float                                              WarmupTime;                                                 // 0x0450   (0x0004)  
	int32_t                                            WarmupTickCount;                                            // 0x0454   (0x0004)  
	float                                              WarmupTickDelta;                                            // 0x0458   (0x0004)  
	bool                                               bFixedTickDelta;                                            // 0x045C   (0x0001)  
	unsigned char                                      UnknownData07_6[0x3];                                       // 0x045D   (0x0003)  MISSED
	float                                              FixedTickDeltaTime;                                         // 0x0460   (0x0004)  
	bool                                               bHasSystemScriptDIsWithPerInstanceData;                     // 0x0464   (0x0001)  
	bool                                               bNeedsGPUContextInitForDataInterfaces;                      // 0x0465   (0x0001)  
	unsigned char                                      UnknownData08_6[0x2];                                       // 0x0466   (0x0002)  MISSED
	TArray<FName>                                      UserDINamesReadInSystemScripts;                             // 0x0468   (0x0010)  
	TArray<class UNiagaraDataChannelDefinitions*>      ReferencedDataChannelDefinitions;                           // 0x0478   (0x0010)  
	unsigned char                                      UnknownData09_7[0xB0];                                      // 0x0488   (0x00B0)  MISSED
};

/// Class /Script/Niagara.NiagaraValidationRule
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraValidationRule : public UObject
{ 
public:
};

/// Class /Script/Niagara.VolumeCache
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class UVolumeCache : public UObject
{ 
public:
	FString                                            FilePath;                                                   // 0x0028   (0x0010)  
	EVolumeCacheType                                   CacheType;                                                  // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FIntVector                                         Resolution;                                                 // 0x003C   (0x000C)  
	int32_t                                            FrameRangeStart;                                            // 0x0048   (0x0004)  
	int32_t                                            FrameRangeEnd;                                              // 0x004C   (0x0004)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FNiagaraFunctionSignature
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	TArray<FNiagaraVariable>                           Inputs;                                                     // 0x0008   (0x0010)  
	TArray<FNiagaraVariable>                           Outputs;                                                    // 0x0018   (0x0010)  
	FName                                              OwnerName;                                                  // 0x0028   (0x0008)  
	bool                                               bRequiresContext : 1;                                       // 0x0030:0 (0x0001)  
	bool                                               bRequiresExecPin : 1;                                       // 0x0030:1 (0x0001)  
	bool                                               bMemberFunction : 1;                                        // 0x0030:2 (0x0001)  
	bool                                               bExperimental : 1;                                          // 0x0030:3 (0x0001)  
	bool                                               bSupportsCPU : 1;                                           // 0x0030:4 (0x0001)  
	bool                                               bSupportsGPU : 1;                                           // 0x0030:5 (0x0001)  
	bool                                               bWriteFunction : 1;                                         // 0x0030:6 (0x0001)  
	bool                                               bReadFunction : 1;                                          // 0x0030:7 (0x0001)  
	bool                                               bSoftDeprecatedFunction : 1;                                // 0x0031:0 (0x0001)  
	bool                                               bIsCompileTagGenerator : 1;                                 // 0x0031:1 (0x0001)  
	bool                                               bHidden : 1;                                                // 0x0031:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            ModuleUsageBitmask;                                         // 0x0034   (0x0004)  
	int32_t                                            ContextStageIndex;                                          // 0x0038   (0x0004)  
	int16_t                                            RequiredInputs;                                             // 0x003C   (0x0002)  
	int16_t                                            RequiredOutputs;                                            // 0x003E   (0x0002)  
	TMap<FName, FName>                                 FunctionSpecifiers;                                         // 0x0040   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0078 (120 bytes) (0x000000 - 0x000078) align 8 MaxSize: 0x0078
struct FNiagaraSystemUpdateContext
{ 
	TArray<class UNiagaraComponent*>                   ComponentsToReset;                                          // 0x0000   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToReInit;                                         // 0x0010   (0x0010)  
	TArray<class UNiagaraComponent*>                   ComponentsToNotifySimDestroy;                               // 0x0020   (0x0010)  
	TArray<class UNiagaraSystem*>                      SystemSimsToDestroy;                                        // 0x0030   (0x0010)  
	TArray<class UNiagaraSystem*>                      SystemSimsToRecache;                                        // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraVariableInfo
{ 
	FNiagaraVariable                                   Variable;                                                   // 0x0000   (0x0020)  
	FText                                              Definition;                                                 // 0x0020   (0x0018)  
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0038   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraScriptVariableBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraCompileDependency
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraCompileDependency
{ 
	FString                                            LinkerErrorMessage;                                         // 0x0000   (0x0010)  
	FGuid                                              NodeGuid;                                                   // 0x0010   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x0020   (0x0010)  
	TArray<FGuid>                                      StackGuids;                                                 // 0x0030   (0x0010)  
	FNiagaraVariableBase                               DependentVariable;                                          // 0x0040   (0x000C)  
	bool                                               bDependentVariableFromCustomIterationNamespace;             // 0x004C   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x004D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraCompileHashVisitorDebugInfo
{ 
	FString                                            Object;                                                     // 0x0000   (0x0010)  
	TArray<FString>                                    PropertyKeys;                                               // 0x0010   (0x0010)  
	TArray<FString>                                    PropertyValues;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScalabilityState
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraScalabilityState
{ 
	float                                              Significance;                                               // 0x0000   (0x0004)  
	float                                              LastVisibleTime;                                            // 0x0004   (0x0004)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0008   (0x0002)  MISSED
	bool                                               bCulled : 1;                                                // 0x000A:0 (0x0001)  
	bool                                               bPreviousCulled : 1;                                        // 0x000A:1 (0x0001)  
	bool                                               bCulledByDistance : 1;                                      // 0x000A:2 (0x0001)  
	bool                                               bCulledByInstanceCount : 1;                                 // 0x000A:3 (0x0001)  
	bool                                               bCulledByVisibility : 1;                                    // 0x000A:4 (0x0001)  
	bool                                               bCulledByGlobalBudget : 1;                                  // 0x000A:5 (0x0001)  
	unsigned char                                      UnknownData01_7[0x1];                                       // 0x000B   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraSimCacheCaptureParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraSimCacheCaptureParameters
{ 
	int32_t                                            NumFrames;                                                  // 0x0000   (0x0004)  
	int32_t                                            CaptureRate;                                                // 0x0004   (0x0004)  
	bool                                               bManuallyAdvanceSimulation;                                 // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	float                                              AdvanceDeltaTime;                                           // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraStackSection
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraStackSection
{ 
	FName                                              SectionIdentifier;                                          // 0x0000   (0x0008)  
	FText                                              SectionDisplayName;                                         // 0x0008   (0x0018)  
	TArray<FText>                                      Categories;                                                 // 0x0020   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0020 (32 bytes) (0x000020 - 0x000020) align 8 MaxSize: 0x0020
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate
{ 
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0028 (40 bytes) (0x000010 - 0x000028) align 8 MaxSize: 0x0028
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{ 
	FFrameNumber                                       SpawnSectionStartFrame;                                     // 0x0010   (0x0004)  
	FFrameNumber                                       SpawnSectionEndFrame;                                       // 0x0014   (0x0004)  
	ENiagaraSystemSpawnSectionStartBehavior            SpawnSectionStartBehavior;                                  // 0x0018   (0x0004)  
	ENiagaraSystemSpawnSectionEvaluateBehavior         SpawnSectionEvaluateBehavior;                               // 0x001C   (0x0004)  
	ENiagaraSystemSpawnSectionEndBehavior              SpawnSectionEndBehavior;                                    // 0x0020   (0x0004)  
	ENiagaraAgeUpdateMode                              AgeUpdateMode;                                              // 0x0024   (0x0001)  
	bool                                               bAllowScalability;                                          // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0026   (0x0002)  MISSED
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0040 (64 bytes) (0x000020 - 0x000040) align 8 MaxSize: 0x0040
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate
{ 
	FNiagaraVariable                                   Parameter;                                                  // 0x0020   (0x0020)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x0140 (320 bytes) (0x000040 - 0x000140) align 8 MaxSize: 0x0140
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneBoolChannel                             BoolChannel;                                                // 0x0040   (0x0100)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x0480 (1152 bytes) (0x000040 - 0x000480) align 8 MaxSize: 0x0480
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            RedChannel;                                                 // 0x0040   (0x0110)  
	FMovieSceneFloatChannel                            GreenChannel;                                               // 0x0150   (0x0110)  
	FMovieSceneFloatChannel                            BlueChannel;                                                // 0x0260   (0x0110)  
	FMovieSceneFloatChannel                            AlphaChannel;                                               // 0x0370   (0x0110)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x0150 (336 bytes) (0x000040 - 0x000150) align 8 MaxSize: 0x0150
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            FloatChannel;                                               // 0x0040   (0x0110)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x0140 (320 bytes) (0x000040 - 0x000140) align 8 MaxSize: 0x0140
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneIntegerChannel                          IntegerChannel;                                             // 0x0040   (0x0100)  
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x0488 (1160 bytes) (0x000040 - 0x000488) align 8 MaxSize: 0x0488
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate
{ 
	FMovieSceneFloatChannel                            VectorChannels[4];                                          // 0x0040   (0x0440)  
	int32_t                                            ChannelsUsed;                                               // 0x0480   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0484   (0x0004)  MISSED
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x00A0 (160 bytes) (0x000000 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FEmitterCompiledScriptPair
{ 
	unsigned char                                      UnknownData00_2[0xA0];                                      // 0x0000   (0x00A0)  MISSED
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FBasicParticleData
{ 
	FVector                                            position;                                                   // 0x0000   (0x0018)  
	float                                              Size;                                                       // 0x0018   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FVector                                            Velocity;                                                   // 0x0020   (0x0018)  
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMeshTriCoordinate
{ 
	int32_t                                            Tri;                                                        // 0x0000   (0x0004)  
	FVector3f                                          BaryCoord;                                                  // 0x0004   (0x000C)  
};

/// Struct /Script/Niagara.NiagaraDataInterfaceSplineLUT
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraDataInterfaceSplineLUT
{ 
	TArray<FVector>                                    Positions;                                                  // 0x0000   (0x0010)  
	TArray<FVector>                                    Scales;                                                     // 0x0010   (0x0010)  
	TArray<FQuat>                                      Rotations;                                                  // 0x0020   (0x0010)  
	float                                              SplineLength;                                               // 0x0030   (0x0004)  
	float                                              SplineDistanceStep;                                         // 0x0034   (0x0004)  
	float                                              InvSplineDistanceStep;                                      // 0x0038   (0x0004)  
	int32_t                                            MaxIndex;                                                   // 0x003C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraOutlinerTimingData
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FNiagaraOutlinerTimingData
{ 
	float                                              GameThread;                                                 // 0x0000   (0x0004)  
	float                                              RenderThread;                                               // 0x0004   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraOutlinerEmitterInstanceData
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FNiagaraOutlinerEmitterInstanceData
{ 
	FString                                            EmitterName;                                                // 0x0000   (0x0010)  
	ENiagaraSimTarget                                  SimTarget;                                                  // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	ENiagaraExecutionState                             ExecState;                                                  // 0x0014   (0x0004)  
	int32_t                                            NumParticles;                                               // 0x0018   (0x0004)  
	bool                                               bRequiresPersistentIDs : 1;                                 // 0x001C:0 (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x001D   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemInstanceData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FNiagaraOutlinerSystemInstanceData
{ 
	FString                                            ComponentName;                                              // 0x0000   (0x0010)  
	FVector3f                                          LWCTile;                                                    // 0x0010   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<FNiagaraOutlinerEmitterInstanceData>        Emitters;                                                   // 0x0020   (0x0010)  
	ENiagaraExecutionState                             ActualExecutionState;                                       // 0x0030   (0x0004)  
	ENiagaraExecutionState                             RequestedExecutionState;                                    // 0x0034   (0x0004)  
	FNiagaraScalabilityState                           ScalabilityState;                                           // 0x0038   (0x000C)  
	bool                                               bPendingKill : 1;                                           // 0x0044:0 (0x0001)  
	bool                                               bUsingCullProxy : 1;                                        // 0x0044:1 (0x0001)  
	unsigned char                                      UnknownData01_5[0x3];                                       // 0x0045   (0x0003)  MISSED
	ENCPoolMethod                                      PoolMethod;                                                 // 0x0048   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x0049   (0x0003)  MISSED
	FNiagaraOutlinerTimingData                         AverageTime;                                                // 0x004C   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxTime;                                                    // 0x0054   (0x0008)  
	TEnumAsByte<ETickingGroup>                         TickGroup;                                                  // 0x005C   (0x0001)  
	TEnumAsByte<ENiagaraGpuComputeTickStage>           GpuTickStage;                                               // 0x005D   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x005E   (0x0002)  MISSED
	bool                                               bIsSolo : 1;                                                // 0x0060:0 (0x0001)  
	bool                                               bRequiresDistanceFieldData : 1;                             // 0x0060:1 (0x0001)  
	bool                                               bRequiresDepthBuffer : 1;                                   // 0x0060:2 (0x0001)  
	bool                                               bRequiresEarlyViewData : 1;                                 // 0x0060:3 (0x0001)  
	bool                                               bRequiresViewUniformBuffer : 1;                             // 0x0060:4 (0x0001)  
	bool                                               bRequiresRayTracingScene : 1;                               // 0x0060:5 (0x0001)  
	unsigned char                                      UnknownData04_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemData
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraOutlinerSystemData
{ 
	TArray<FNiagaraOutlinerSystemInstanceData>         SystemInstances;                                            // 0x0000   (0x0010)  
	FNiagaraOutlinerTimingData                         AveragePerFrameTime;                                        // 0x0010   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerFrameTime;                                            // 0x0018   (0x0008)  
	FNiagaraOutlinerTimingData                         AveragePerInstanceTime;                                     // 0x0020   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerInstanceTime;                                         // 0x0028   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraOutlinerWorldData
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FNiagaraOutlinerWorldData
{ 
	TMap<FString, FNiagaraOutlinerSystemData>          Systems;                                                    // 0x0000   (0x0050)  
	bool                                               bHasBegunPlay;                                              // 0x0050   (0x0001)  
	char                                               WorldType;                                                  // 0x0051   (0x0001)  
	char                                               NetMode;                                                    // 0x0052   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0053   (0x0001)  MISSED
	FNiagaraOutlinerTimingData                         AveragePerFrameTime;                                        // 0x0054   (0x0008)  
	FNiagaraOutlinerTimingData                         MaxPerFrameTime;                                            // 0x005C   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0064   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerData
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraOutlinerData
{ 
	TMap<FString, FNiagaraOutlinerWorldData>           WorldData;                                                  // 0x0000   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraDebuggerRequestConnection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FNiagaraDebuggerRequestConnection
{ 
	FGuid                                              SessionId;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerAcceptConnection
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FNiagaraDebuggerAcceptConnection
{ 
	FGuid                                              SessionId;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerConnectionClosed
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FNiagaraDebuggerConnectionClosed
{ 
	FGuid                                              SessionId;                                                  // 0x0000   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraDebuggerExecuteConsoleCommand
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraDebuggerExecuteConsoleCommand
{ 
	FString                                            Command;                                                    // 0x0000   (0x0010)  
	bool                                               bRequiresWorld;                                             // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/Niagara.NiagaraDebuggerOutlinerUpdate
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraDebuggerOutlinerUpdate
{ 
	FNiagaraOutlinerData                               OutlinerData;                                               // 0x0000   (0x0050)  
};

/// Struct /Script/Niagara.NiagaraRequestSimpleClientInfoMessage
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraRequestSimpleClientInfoMessage
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraOutlinerCaptureSettings
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraOutlinerCaptureSettings
{ 
	bool                                               bTriggerCapture;                                            // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	uint32_t                                           CaptureDelayFrames;                                         // 0x0004   (0x0004)  
	bool                                               bGatherPerfData;                                            // 0x0008   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0009   (0x0003)  MISSED
	uint32_t                                           SimCacheCaptureFrames;                                      // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSimpleClientInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FNiagaraSimpleClientInfo
{ 
	TArray<FString>                                    Systems;                                                    // 0x0000   (0x0010)  
	TArray<FString>                                    Actors;                                                     // 0x0010   (0x0010)  
	TArray<FString>                                    Components;                                                 // 0x0020   (0x0010)  
	TArray<FString>                                    Emitters;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSystemSimCacheCaptureRequest
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraSystemSimCacheCaptureRequest
{ 
	FName                                              ComponentName;                                              // 0x0000   (0x0008)  
	uint32_t                                           CaptureDelayFrames;                                         // 0x0008   (0x0004)  
	uint32_t                                           CaptureFrames;                                              // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraSystemSimCacheCaptureReply
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraSystemSimCacheCaptureReply
{ 
	FName                                              ComponentName;                                              // 0x0000   (0x0008)  
	TArray<char>                                       SimCacheData;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraGraphViewSettings
{ 
	FVector2D                                          Location;                                                   // 0x0000   (0x0010)  
	float                                              Zoom;                                                       // 0x0010   (0x0004)  
	bool                                               bIsValid;                                                   // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0015   (0x0003)  MISSED
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FNiagaraDetailsLevelScaleOverrides
{ 
	float                                              Low;                                                        // 0x0000   (0x0004)  
	float                                              Medium;                                                     // 0x0004   (0x0004)  
	float                                              High;                                                       // 0x0008   (0x0004)  
	float                                              Epic;                                                       // 0x000C   (0x0004)  
	float                                              Cine;                                                       // 0x0010   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FNiagaraCollisionEventPayload
{ 
	FVector                                            CollisionPos;                                               // 0x0000   (0x0018)  
	FVector                                            CollisionNormal;                                            // 0x0018   (0x0018)  
	FVector                                            CollisionVelocity;                                          // 0x0030   (0x0018)  
	int32_t                                            ParticleIndex;                                              // 0x0048   (0x0004)  
	int32_t                                            PhysicalMaterialIndex;                                      // 0x004C   (0x0004)  
};

/// Struct /Script/Niagara.ParameterDefinitionsSubscription
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FParameterDefinitionsSubscription
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FNiagaraParameters
{ 
	TArray<FNiagaraVariable>                           Parameters;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraPlatformSetConflictEntry
{ 
	FName                                              ProfileName;                                                // 0x0000   (0x0008)  
	int32_t                                            QualityLevelMask;                                           // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraPlatformSetConflictInfo
{ 
	int32_t                                            SetAIndex;                                                  // 0x0000   (0x0004)  
	int32_t                                            SetBIndex;                                                  // 0x0004   (0x0004)  
	TArray<FNiagaraPlatformSetConflictEntry>           Conflicts;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x00E0 (224 bytes) (0x000000 - 0x0000E0) align 8 MaxSize: 0x00E0
struct FNiagaraScalabilityManager
{ 
	class UNiagaraEffectType*                          EffectType;                                                 // 0x0000   (0x0008)  
	TArray<class UNiagaraComponent*>                   ManagedComponents;                                          // 0x0008   (0x0010)  
	unsigned char                                      UnknownData00_7[0xC8];                                      // 0x0018   (0x00C8)  MISSED
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FNiagaraModuleDependency
{ 
	FName                                              ID;                                                         // 0x0000   (0x0008)  
	ENiagaraModuleDependencyType                       Type;                                                       // 0x0008   (0x0001)  
	ENiagaraModuleDependencyScriptConstraint           ScriptConstraint;                                           // 0x0009   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x000A   (0x0006)  MISSED
	FString                                            RequiredVersion;                                            // 0x0010   (0x0010)  
	int32_t                                            OnlyEvaluateInScriptUsage;                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FText                                              Description;                                                // 0x0028   (0x0018)  
	unsigned char                                      UnknownData02_7[0x28];                                      // 0x0040   (0x0028)  MISSED
};

/// Struct /Script/Niagara.VersionedNiagaraScriptData
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FVersionedNiagaraScriptData
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0098 (152 bytes) (0x000088 - 0x000098) align 8 MaxSize: 0x0098
struct FNiagaraScriptInstanceParameterStore : FNiagaraParameterStore
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0088   (0x0010)  MISSED
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraScriptHighlight
{ 
	FLinearColor                                       Color;                                                      // 0x0000   (0x0010)  
	FText                                              DisplayName;                                                // 0x0010   (0x0018)  
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x0138 (312 bytes) (0x000000 - 0x000138) align 8 MaxSize: 0x0138
struct FNiagaraEmitterCompiledData
{ 
	TArray<FName>                                      SpawnAttributes;                                            // 0x0000   (0x0010)  
	FNiagaraVariable                                   EmitterSpawnIntervalVar;                                    // 0x0010   (0x0020)  
	FNiagaraVariable                                   EmitterInterpSpawnStartDTVar;                               // 0x0030   (0x0020)  
	FNiagaraVariable                                   EmitterSpawnGroupVar;                                       // 0x0050   (0x0020)  
	FNiagaraVariable                                   EmitterAgeVar;                                              // 0x0070   (0x0020)  
	FNiagaraVariable                                   EmitterRandomSeedVar;                                       // 0x0090   (0x0020)  
	FNiagaraVariable                                   EmitterInstanceSeedVar;                                     // 0x00B0   (0x0020)  
	FNiagaraVariable                                   EmitterTotalSpawnedParticlesVar;                            // 0x00D0   (0x0020)  
	FNiagaraDataSetCompiledData                        DataSetCompiledData;                                        // 0x00F0   (0x0048)  
};

/// Struct /Script/Niagara.NiagaraSystemCompileRequest
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraSystemCompileRequest
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	TArray<class UObject*>                             RootObjects;                                                // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraWildcard
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraWildcard
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraFloat
{ 
	float                                              Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraInt32
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 4 MaxSize: 0x0004
struct FNiagaraBool
{ 
	int32_t                                            Value;                                                      // 0x0000   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (2 bytes) (0x000000 - 0x000002) align 2 MaxSize: 0x0002
struct FNiagaraHalf
{ 
	uint16_t                                           Value;                                                      // 0x0000   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (4 bytes) (0x000000 - 0x000004) align 2 MaxSize: 0x0004
struct FNiagaraHalfVector2
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (6 bytes) (0x000000 - 0x000006) align 2 MaxSize: 0x0006
struct FNiagaraHalfVector3
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 2 MaxSize: 0x0008
struct FNiagaraHalfVector4
{ 
	uint16_t                                           X;                                                          // 0x0000   (0x0002)  
	uint16_t                                           Y;                                                          // 0x0002   (0x0002)  
	uint16_t                                           Z;                                                          // 0x0004   (0x0002)  
	uint16_t                                           W;                                                          // 0x0006   (0x0002)  
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraNumeric
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FNiagaraParameterMap
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/Niagara.NiagaraDouble
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FNiagaraDouble
{ 
	double                                             Value;                                                      // 0x0000   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 16 MaxSize: 0x0040
struct FNiagaraMatrix
{ 
	FVector4f                                          Row0;                                                       // 0x0000   (0x0010)  
	FVector4f                                          Row1;                                                       // 0x0010   (0x0010)  
	FVector4f                                          Row2;                                                       // 0x0020   (0x0010)  
	FVector4f                                          Row3;                                                       // 0x0030   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FNiagaraSpawnInfo
{ 
	int32_t                                            Count;                                                      // 0x0000   (0x0004)  
	float                                              InterpStartDt;                                              // 0x0004   (0x0004)  
	float                                              IntervalDt;                                                 // 0x0008   (0x0004)  
	int32_t                                            SpawnGroup;                                                 // 0x000C   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNiagaraRandInfo
{ 
	int32_t                                            Seed1;                                                      // 0x0000   (0x0004)  
	int32_t                                            Seed2;                                                      // 0x0004   (0x0004)  
	int32_t                                            Seed3;                                                      // 0x0008   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraInputConditionMetadata
{ 
	FName                                              InputName;                                                  // 0x0000   (0x0008)  
	TArray<FString>                                    TargetValues;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/Niagara.NiagaraEnumParameterMetaData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraEnumParameterMetaData
{ 
	FName                                              OverrideName;                                               // 0x0000   (0x0008)  
	class UTexture2D*                                  IconOverride;                                               // 0x0008   (0x0008)  
	bool                                               bUseColorOverride;                                          // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	FLinearColor                                       ColorOverride;                                              // 0x0014   (0x0010)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraBoolParameterMetaData
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraBoolParameterMetaData
{ 
	ENiagaraBoolDisplayMode                            DisplayMode;                                                // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	FName                                              OverrideNameTrue;                                           // 0x0004   (0x0008)  
	FName                                              OverrideNameFalse;                                          // 0x000C   (0x0008)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0014   (0x0004)  MISSED
	class UTexture2D*                                  IconOverrideTrue;                                           // 0x0018   (0x0008)  
	class UTexture2D*                                  IconOverrideFalse;                                          // 0x0020   (0x0008)  
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x0148 (328 bytes) (0x000000 - 0x000148) align 8 MaxSize: 0x0148
struct FNiagaraVariableMetaData
{ 
	FText                                              Description;                                                // 0x0000   (0x0018)  
	FText                                              CategoryName;                                               // 0x0018   (0x0018)  
	bool                                               bAdvancedDisplay;                                           // 0x0030   (0x0001)  
	bool                                               bDisplayInOverviewStack;                                    // 0x0031   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0032   (0x0002)  MISSED
	int32_t                                            InlineParameterSortPriority;                                // 0x0034   (0x0004)  
	bool                                               bOverrideColor;                                             // 0x0038   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0039   (0x0003)  MISSED
	FLinearColor                                       InlineParameterColorOverride;                               // 0x003C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FNiagaraEnumParameterMetaData>              InlineParameterEnumOverrides;                               // 0x0050   (0x0010)  
	bool                                               bEnableBoolOverride;                                        // 0x0060   (0x0001)  
	unsigned char                                      UnknownData03_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	FNiagaraBoolParameterMetaData                      InlineParameterBoolOverride;                                // 0x0068   (0x0028)  
	int32_t                                            EditorSortPriority;                                         // 0x0090   (0x0004)  
	bool                                               bInlineEditConditionToggle;                                 // 0x0094   (0x0001)  
	unsigned char                                      UnknownData04_6[0x3];                                       // 0x0095   (0x0003)  MISSED
	FNiagaraInputConditionMetadata                     EditCondition;                                              // 0x0098   (0x0018)  
	FNiagaraInputConditionMetadata                     VisibleCondition;                                           // 0x00B0   (0x0018)  
	TMap<FName, FString>                               PropertyMetaData;                                           // 0x00C8   (0x0050)  
	FName                                              ParentAttribute;                                            // 0x0118   (0x0008)  
	TArray<FName>                                      AlternateAliases;                                           // 0x0120   (0x0010)  
	FGuid                                              VariableGuid;                                               // 0x0130   (0x0010)  
	bool                                               bIsStaticSwitch;                                            // 0x0140   (0x0001)  
	unsigned char                                      UnknownData05_6[0x3];                                       // 0x0141   (0x0003)  MISSED
	int32_t                                            StaticSwitchDefaultValue;                                   // 0x0144   (0x0004)  
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FNiagaraVariant
{ 
	class UObject*                                     Object;                                                     // 0x0000   (0x0008)  
	class UNiagaraDataInterface*                       DataInterface;                                              // 0x0008   (0x0008)  
	TArray<char>                                       Bytes;                                                      // 0x0010   (0x0010)  
	ENiagaraVariantMode                                CurrentMode;                                                // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0024   (0x0004)  MISSED
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
struct FNiagaraWorldManagerTickFunction : FTickFunction
{ 
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0028   (0x0008)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FNDIRenderTargetVolumeSimCacheFrame) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UNDIRenderTargetVolumeSimCacheData) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UNiagaraConvertInPlaceUtilityBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataChannelReader) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UNiagaraDataChannelWriter) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UNiagaraDataChannelDefinitions) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNiagaraDataChannelHandler) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FNiagaraTypeDefinitionHandle) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraVariableBase) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraVariable) == 0x0020); // 32 bytes (0x00000C - 0x000020)
static_assert(sizeof(FNiagaraTypeLayoutInfo) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FNiagaraVariableLayoutInfo) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(FNiagaraDataSetID) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraDataSetCompiledData) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraStructConversionStep) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FNiagaraLwcStructConverter) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraDataChannelGameDataLayout) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(UNiagaraDataChannel) == 0x0138); // 312 bytes (0x000028 - 0x000138)
static_assert(sizeof(UNiagaraDataChannel_Global) == 0x0138); // 312 bytes (0x000138 - 0x000138)
static_assert(sizeof(UNiagaraDataChannelHandler_Global) == 0x00A0); // 160 bytes (0x000068 - 0x0000A0)
static_assert(sizeof(UNiagaraDataInterface) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FNiagaraDataChannelReference) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNDIDataChannelFunctionInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNDIDataChannel_GPUScriptParameterAccessInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNDIDataChannelCompiledData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceDataChannelRead) == 0x00B0); // 176 bytes (0x000038 - 0x0000B0)
static_assert(sizeof(FNiagaraDataInterfaceEmitterBinding) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UNiagaraDataInterfaceDataChannelSpawn) == 0x00C0); // 192 bytes (0x0000B0 - 0x0000C0)
static_assert(sizeof(FNDIDataChannelWriteCompiledData) == 0x00B0); // 176 bytes (0x000068 - 0x0000B0)
static_assert(sizeof(UNiagaraDataInterfaceDataChannelWrite) == 0x0100); // 256 bytes (0x000038 - 0x000100)
static_assert(sizeof(UNiagaraMessageDataBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraParameterDefinitionsBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraRenderableMeshInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraScriptSourceBase) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FNiagaraPlatformSetCVarCondition) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraPlatformSetRedirect) == 0x0080); // 128 bytes (0x000000 - 0x000080)
static_assert(sizeof(UNiagaraSettings) == 0x0120); // 288 bytes (0x000038 - 0x000120)
static_assert(sizeof(UNiagaraSimCacheCustomStorageInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraValidationRuleSet) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FNiagaraUserParameterBinding) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNiagaraDataInterfaceActorComponent) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(UNiagaraDataInterfaceAsyncGpuTrace) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceDebugDraw) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FNiagaraDynamicMeshSection) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraDynamicMeshMaterial) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceDynamicMesh) == 0x00A8); // 168 bytes (0x000038 - 0x0000A8)
static_assert(sizeof(UNiagaraDataInterfaceEmitterProperties) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceGBuffer) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfacePhysicsAsset) == 0x00B0); // 176 bytes (0x000038 - 0x0000B0)
static_assert(sizeof(UNiagaraPhysicsAssetDICollectorInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceSimCacheReader) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceSimpleCounter) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FNDIStaticMeshSectionFilter) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraDataInterfaceStaticMesh) == 0x00D0); // 208 bytes (0x000038 - 0x0000D0)
static_assert(sizeof(FNiagaraUObjectPropertyReaderRemap) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraDataInterfaceUObjectPropertyReader) == 0x00A8); // 168 bytes (0x000038 - 0x0000A8)
static_assert(sizeof(UNiagaraDataInterfaceVirtualTexture) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UMovieSceneNiagaraSystemSpawnSection) == 0x0100); // 256 bytes (0x0000F0 - 0x000100)
static_assert(sizeof(UMovieSceneNiagaraTrack) == 0x00A8); // 168 bytes (0x000098 - 0x0000A8)
static_assert(sizeof(UMovieSceneNiagaraSystemTrack) == 0x00B0); // 176 bytes (0x0000A8 - 0x0000B0)
static_assert(sizeof(UMovieSceneNiagaraParameterTrack) == 0x00C8); // 200 bytes (0x0000A8 - 0x0000C8)
static_assert(sizeof(UMovieSceneNiagaraBoolParameterTrack) == 0x00D0); // 208 bytes (0x0000C8 - 0x0000D0)
static_assert(sizeof(UMovieSceneNiagaraColorParameterTrack) == 0x00D0); // 208 bytes (0x0000C8 - 0x0000D0)
static_assert(sizeof(UMovieSceneNiagaraFloatParameterTrack) == 0x00D0); // 208 bytes (0x0000C8 - 0x0000D0)
static_assert(sizeof(UMovieSceneNiagaraIntegerParameterTrack) == 0x00D0); // 208 bytes (0x0000C8 - 0x0000D0)
static_assert(sizeof(UMovieSceneNiagaraVectorParameterTrack) == 0x00D8); // 216 bytes (0x0000C8 - 0x0000D8)
static_assert(sizeof(ANiagaraActor) == 0x02A0); // 672 bytes (0x000290 - 0x0002A0)
static_assert(sizeof(UNiagaraBakerOutput) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FNiagaraSimCacheCreateParameters) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UNiagaraBakerOutputSimCache) == 0x00A0); // 160 bytes (0x000038 - 0x0000A0)
static_assert(sizeof(FNiagaraBakerTextureSource) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UNiagaraBakerOutputTexture2D) == 0x00A0); // 160 bytes (0x000038 - 0x0000A0)
static_assert(sizeof(UNiagaraBakerOutputVolumeTexture) == 0x0088); // 136 bytes (0x000038 - 0x000088)
static_assert(sizeof(FNiagaraBakerCameraSettings) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraBakerTextureSettings) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UNiagaraBakerSettings) == 0x01F0); // 496 bytes (0x000028 - 0x0001F0)
static_assert(sizeof(FNiagaraVariableWithOffset) == 0x0028); // 40 bytes (0x00000C - 0x000028)
static_assert(sizeof(FNiagaraPositionSource) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraParameterStore) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(FNiagaraUserRedirectionParameterStore) == 0x00D8); // 216 bytes (0x000088 - 0x0000D8)
static_assert(sizeof(UNiagaraComponent) == 0x0808); // 2056 bytes (0x000568 - 0x000808)
static_assert(sizeof(FNCPoolElement) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNCPool) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraComponentPool) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(FNiagaraDeviceProfileStateEntry) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPlatformSet) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraVariableAttributeBinding) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UNiagaraRendererProperties) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(FNiagaraTypeDefinition) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraComponentPropertyBinding) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(UNiagaraComponentRendererProperties) == 0x0230); // 560 bytes (0x0000E0 - 0x000230)
static_assert(sizeof(FNiagaraCulledComponentInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UNiagaraCullProxyComponent) == 0x0820); // 2080 bytes (0x000808 - 0x000820)
static_assert(sizeof(UNiagaraDataChannelLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterface2DArrayTexture) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceRWBase) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceArray) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat2) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat3) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FNiagaraPosition) == 0x000C); // 12 bytes (0x00000C - 0x00000C)
static_assert(sizeof(UNiagaraDataInterfaceArrayPosition) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceArrayFloat4) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceArrayColor) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceArrayQuat) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceArrayFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceArrayInt32) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceArrayUInt8) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceArrayBool) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(FNiagaraID) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(UNiagaraDataInterfaceArrayNiagaraID) == 0x0058); // 88 bytes (0x000048 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceAudioSubmix) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceAudioOscilloscope) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceAudioPlayerSettings) == 0x0408); // 1032 bytes (0x000028 - 0x000408)
static_assert(sizeof(UNiagaraDataInterfaceAudioPlayer) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(UNiagaraDataInterfaceAudioSpectrum) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceCamera) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceCollisionQuery) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceCurveBase) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UNiagaraDataInterfaceColorCurve) == 0x0270); // 624 bytes (0x000070 - 0x000270)
static_assert(sizeof(UNiagaraDataInterfaceCubeTexture) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceCurlNoise) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceCurve) == 0x00F0); // 240 bytes (0x000070 - 0x0000F0)
static_assert(sizeof(UNiagaraParticleCallbackHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceExport) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceGrid2D) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceGrid2DCollection) == 0x0128); // 296 bytes (0x000060 - 0x000128)
static_assert(sizeof(UNiagaraDataInterfaceGrid2DCollectionReader) == 0x0148); // 328 bytes (0x000128 - 0x000148)
static_assert(sizeof(UNiagaraDataInterfaceGrid3D) == 0x0070); // 112 bytes (0x000038 - 0x000070)
static_assert(sizeof(UNiagaraDataInterfaceGrid3DCollection) == 0x00F0); // 240 bytes (0x000070 - 0x0000F0)
static_assert(sizeof(UNiagaraDataInterfaceGrid3DCollectionReader) == 0x0110); // 272 bytes (0x0000F0 - 0x000110)
static_assert(sizeof(UNiagaraDataInterfaceIntRenderTarget2D) == 0x00B0); // 176 bytes (0x000038 - 0x0000B0)
static_assert(sizeof(UNiagaraDataInterfaceLandscape) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UNiagaraDataInterfaceMeshRendererInfo) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UNiagaraDataInterfaceNeighborGrid3D) == 0x0078); // 120 bytes (0x000070 - 0x000078)
static_assert(sizeof(UNiagaraDataInterfaceOcclusion) == 0x0038); // 56 bytes (0x000038 - 0x000038)
static_assert(sizeof(UNiagaraDataInterfaceParticleRead) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfacePlatformSet) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraDataInterfaceRasterizationGrid3D) == 0x0080); // 128 bytes (0x000070 - 0x000080)
static_assert(sizeof(UNiagaraDataInterfaceRenderTarget2D) == 0x0108); // 264 bytes (0x000038 - 0x000108)
static_assert(sizeof(UNiagaraDataInterfaceRenderTarget2DArray) == 0x00B8); // 184 bytes (0x000038 - 0x0000B8)
static_assert(sizeof(UNiagaraDataInterfaceRenderTargetCube) == 0x00B0); // 176 bytes (0x000038 - 0x0000B0)
static_assert(sizeof(UNiagaraDataInterfaceRenderTargetVolume) == 0x00C0); // 192 bytes (0x000038 - 0x0000C0)
static_assert(sizeof(UNiagaraDataInterfaceRigidMeshCollisionQuery) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(UNiagaraDIRigidMeshCollisionFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraDataInterfaceSkeletalMesh) == 0x0100); // 256 bytes (0x000038 - 0x000100)
static_assert(sizeof(UNiagaraDataInterfaceSpline) == 0x00B8); // 184 bytes (0x000038 - 0x0000B8)
static_assert(sizeof(UNiagaraDataInterfaceSpriteRendererInfo) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraDataInterfaceTexture) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(UNiagaraDataInterfaceVector2DCurve) == 0x0170); // 368 bytes (0x000070 - 0x000170)
static_assert(sizeof(UNiagaraDataInterfaceVector4Curve) == 0x0270); // 624 bytes (0x000070 - 0x000270)
static_assert(sizeof(UNiagaraDataInterfaceVectorCurve) == 0x01F0); // 496 bytes (0x000070 - 0x0001F0)
static_assert(sizeof(UNiagaraDataInterfaceVectorField) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(UNiagaraDataInterfaceVolumeCache) == 0x0090); // 144 bytes (0x000038 - 0x000090)
static_assert(sizeof(UNiagaraDataInterfaceVolumeTexture) == 0x0060); // 96 bytes (0x000038 - 0x000060)
static_assert(sizeof(FNiagaraDebugHUDVariable) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraDebugHudTextOptions) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraDebugHUDSettingsData) == 0x0238); // 568 bytes (0x000000 - 0x000238)
static_assert(sizeof(UNiagaraDebugHUDSettings) == 0x0280); // 640 bytes (0x000028 - 0x000280)
static_assert(sizeof(FNiagaraParameterBinding) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraMaterialAttributeBinding) == 0x002C); // 44 bytes (0x000000 - 0x00002C)
static_assert(sizeof(FNiagaraRendererMaterialScalarParameter) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraRendererMaterialVectorParameter) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraRendererMaterialTextureParameter) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraRendererMaterialStaticBoolParameter) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraRendererMaterialParameters) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(UNiagaraDecalRendererProperties) == 0x0448); // 1096 bytes (0x0000E0 - 0x000448)
static_assert(sizeof(UNiagaraEditorDataBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraEditorParametersAdapterBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandler) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandlerDistance) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSignificanceHandlerAge) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraSystemVisibilityCullingSettings) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraLinearRamp) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraGlobalBudgetScaling) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNiagaraSystemScalabilitySettings) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FNiagaraSystemScalabilitySettingsArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraEmitterScalabilitySettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNiagaraEmitterScalabilitySettingsArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPerfBaselineStats) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraEffectType) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(FNiagaraAssetVersion) == 0x001C); // 28 bytes (0x000000 - 0x00001C)
static_assert(sizeof(FNiagaraEventReceiverProperties) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraEventGeneratorProperties) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNiagaraEmitterScriptProperties) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraEventScriptProperties) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(FNiagaraEmitterScalabilityOverride) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(FNiagaraEmitterScalabilityOverrides) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVersionedNiagaraEmitterData) == 0x02E8); // 744 bytes (0x000000 - 0x0002E8)
static_assert(sizeof(UNiagaraEmitter) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(UNiagaraEventReceiverEmitterAction) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraEventReceiverEmitterAction_SpawnParticles) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UNiagaraFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ANiagaraLensEffectBase) == 0x0330); // 816 bytes (0x0002A0 - 0x000330)
static_assert(sizeof(UNiagaraLightRendererProperties) == 0x03A0); // 928 bytes (0x0000E0 - 0x0003A0)
static_assert(sizeof(FNiagaraMeshRendererMeshProperties) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FNiagaraMeshMaterialOverride) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraMeshMICOverride) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UNiagaraMeshRendererProperties) == 0x0998); // 2456 bytes (0x0000E0 - 0x000998)
static_assert(sizeof(UNiagaraParameterCollectionInstance) == 0x00F0); // 240 bytes (0x000028 - 0x0000F0)
static_assert(sizeof(UNiagaraParameterCollection) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(UNiagaraBaselineController) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(UNiagaraBaselineController_Basic) == 0x0088); // 136 bytes (0x000070 - 0x000088)
static_assert(sizeof(ANiagaraPerfBaselineActor) == 0x02A0); // 672 bytes (0x000290 - 0x0002A0)
static_assert(sizeof(UNiagaraPrecompileContainer) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(ANiagaraPreviewBase) == 0x0290); // 656 bytes (0x000290 - 0x000290)
static_assert(sizeof(UNiagaraPreviewAxis) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamBase) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamInt32) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamFloat) == 0x0040); // 64 bytes (0x000038 - 0x000040)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector2D) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector) == 0x0068); // 104 bytes (0x000038 - 0x000068)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamVector4) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(UNiagaraPreviewAxis_InterpParamLinearColor) == 0x0058); // 88 bytes (0x000038 - 0x000058)
static_assert(sizeof(ANiagaraPreviewGrid) == 0x02E0); // 736 bytes (0x000290 - 0x0002E0)
static_assert(sizeof(FNiagaraRibbonUVSettings) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNiagaraRibbonShapeCustomVertex) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UNiagaraRibbonRendererProperties) == 0x0AA0); // 2720 bytes (0x0000E0 - 0x000AA0)
static_assert(sizeof(UNiagaraScratchPadContainer) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FNiagaraScriptExecutionPaddingInfo) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraScriptExecutionParameterStore) == 0x00A8); // 168 bytes (0x000088 - 0x0000A8)
static_assert(sizeof(FNiagaraBoundParameter) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraVMExecutableDataId) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNiagaraVMExecutableByteCode) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraCompilerTag) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraScriptDataUsageInfo) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraScriptDataInterfaceCompileInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FVMFunctionSpecifier) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVMExternalFunctionBindingInfo) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNiagaraDataSetProperties) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraStatScope) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraVMExecutableData) == 0x0190); // 400 bytes (0x000000 - 0x000190)
static_assert(sizeof(FNiagaraScriptDataInterfaceInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UNiagaraScript) == 0x03A8); // 936 bytes (0x000028 - 0x0003A8)
static_assert(sizeof(FNiagaraSimCacheVariable) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraSimCacheDataBuffersLayout) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FNiagaraSimCacheLayout) == 0x00C8); // 200 bytes (0x000000 - 0x0000C8)
static_assert(sizeof(FNiagaraSimCacheDataBuffers) == 0x0060); // 96 bytes (0x000000 - 0x000060)
static_assert(sizeof(FNiagaraSimCacheSystemFrame) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FNiagaraSimCacheEmitterFrame) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FNiagaraSimCacheFrame) == 0x0120); // 288 bytes (0x000000 - 0x000120)
static_assert(sizeof(UNiagaraSimCache) == 0x0200); // 512 bytes (0x000028 - 0x000200)
static_assert(sizeof(UAsyncNiagaraCaptureSimCache) == 0x0108); // 264 bytes (0x000030 - 0x000108)
static_assert(sizeof(UNiagaraSimCacheFunctionLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UNiagaraSimulationStageBase) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FNiagaraVariableDataInterfaceBinding) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UNiagaraSimulationStageGeneric) == 0x02A8); // 680 bytes (0x000040 - 0x0002A8)
static_assert(sizeof(UNiagaraSpriteRendererProperties) == 0x0B78); // 2936 bytes (0x0000E0 - 0x000B78)
static_assert(sizeof(FNiagaraSystemScalabilityOverride) == 0x00A0); // 160 bytes (0x000098 - 0x0000A0)
static_assert(sizeof(FNiagaraSystemScalabilityOverrides) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FVersionedNiagaraEmitter) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraEmitterHandle) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraParameterDataSetBinding) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraParameterDataSetBindingCollection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraSystemCompiledData) == 0x0240); // 576 bytes (0x000000 - 0x000240)
static_assert(sizeof(UNiagaraSystem) == 0x0538); // 1336 bytes (0x000070 - 0x000538)
static_assert(sizeof(UNiagaraValidationRule) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVolumeCache) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(FNiagaraFunctionSignature) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FNiagaraSystemUpdateContext) == 0x0078); // 120 bytes (0x000000 - 0x000078)
static_assert(sizeof(FNiagaraVariableInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraScriptVariableBinding) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraCompileDependency) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraCompileHashVisitorDebugInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraScalabilityState) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraSimCacheCaptureParameters) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraStackSection) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMovieSceneNiagaraSystemTrackTemplate) == 0x0020); // 32 bytes (0x000020 - 0x000020)
static_assert(sizeof(FMovieSceneNiagaraSystemTrackImplementation) == 0x0028); // 40 bytes (0x000010 - 0x000028)
static_assert(sizeof(FMovieSceneNiagaraParameterSectionTemplate) == 0x0040); // 64 bytes (0x000020 - 0x000040)
static_assert(sizeof(FMovieSceneNiagaraBoolParameterSectionTemplate) == 0x0140); // 320 bytes (0x000040 - 0x000140)
static_assert(sizeof(FMovieSceneNiagaraColorParameterSectionTemplate) == 0x0480); // 1152 bytes (0x000040 - 0x000480)
static_assert(sizeof(FMovieSceneNiagaraFloatParameterSectionTemplate) == 0x0150); // 336 bytes (0x000040 - 0x000150)
static_assert(sizeof(FMovieSceneNiagaraIntegerParameterSectionTemplate) == 0x0140); // 320 bytes (0x000040 - 0x000140)
static_assert(sizeof(FMovieSceneNiagaraVectorParameterSectionTemplate) == 0x0488); // 1160 bytes (0x000040 - 0x000488)
static_assert(sizeof(FEmitterCompiledScriptPair) == 0x00A0); // 160 bytes (0x000000 - 0x0000A0)
static_assert(sizeof(FBasicParticleData) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FMeshTriCoordinate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraDataInterfaceSplineLUT) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraOutlinerTimingData) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraOutlinerEmitterInstanceData) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraOutlinerSystemInstanceData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FNiagaraOutlinerSystemData) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FNiagaraOutlinerWorldData) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FNiagaraOutlinerData) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraDebuggerRequestConnection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraDebuggerAcceptConnection) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraDebuggerConnectionClosed) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FNiagaraDebuggerExecuteConsoleCommand) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraDebuggerOutlinerUpdate) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FNiagaraRequestSimpleClientInfoMessage) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraOutlinerCaptureSettings) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraSimpleClientInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraSystemSimCacheCaptureRequest) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraSystemSimCacheCaptureReply) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraGraphViewSettings) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraDetailsLevelScaleOverrides) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FNiagaraCollisionEventPayload) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FParameterDefinitionsSubscription) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraParameters) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraPlatformSetConflictEntry) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraPlatformSetConflictInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraScalabilityManager) == 0x00E0); // 224 bytes (0x000000 - 0x0000E0)
static_assert(sizeof(FNiagaraModuleDependency) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FVersionedNiagaraScriptData) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraScriptInstanceParameterStore) == 0x0098); // 152 bytes (0x000088 - 0x000098)
static_assert(sizeof(FNiagaraScriptHighlight) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraEmitterCompiledData) == 0x0138); // 312 bytes (0x000000 - 0x000138)
static_assert(sizeof(FNiagaraSystemCompileRequest) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraWildcard) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraFloat) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraInt32) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraBool) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraHalf) == 0x0002); // 2 bytes (0x000000 - 0x000002)
static_assert(sizeof(FNiagaraHalfVector2) == 0x0004); // 4 bytes (0x000000 - 0x000004)
static_assert(sizeof(FNiagaraHalfVector3) == 0x0006); // 6 bytes (0x000000 - 0x000006)
static_assert(sizeof(FNiagaraHalfVector4) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraNumeric) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraParameterMap) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FNiagaraDouble) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FNiagaraMatrix) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FNiagaraSpawnInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FNiagaraRandInfo) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FNiagaraInputConditionMetadata) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraEnumParameterMetaData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraBoolParameterMetaData) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraVariableMetaData) == 0x0148); // 328 bytes (0x000000 - 0x000148)
static_assert(sizeof(FNiagaraVariant) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FNiagaraWorldManagerTickFunction) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(offsetof(FNDIRenderTargetVolumeSimCacheFrame, Size) == 0x0000);
static_assert(offsetof(FNDIRenderTargetVolumeSimCacheFrame, Format) == 0x000C);
static_assert(offsetof(UNDIRenderTargetVolumeSimCacheData, CompressionType) == 0x0028);
static_assert(offsetof(UNDIRenderTargetVolumeSimCacheData, Frames) == 0x0030);
static_assert(offsetof(UNiagaraDataChannelReader, Owner) == 0x0038);
static_assert(offsetof(UNiagaraDataChannelWriter, Owner) == 0x0038);
static_assert(offsetof(UNiagaraDataChannelDefinitions, DataChannels) == 0x0028);
static_assert(offsetof(UNiagaraDataChannelHandler, DataChannel) == 0x0028);
static_assert(offsetof(UNiagaraDataChannelHandler, Writer) == 0x0058);
static_assert(offsetof(UNiagaraDataChannelHandler, Reader) == 0x0060);
static_assert(offsetof(FNiagaraVariableBase, Name) == 0x0000);
static_assert(offsetof(FNiagaraVariableBase, TypeDefHandle) == 0x0008);
static_assert(offsetof(FNiagaraVariable, VarData) == 0x0010);
static_assert(offsetof(FNiagaraTypeLayoutInfo, FloatComponentByteOffsets) == 0x0000);
static_assert(offsetof(FNiagaraTypeLayoutInfo, FloatComponentRegisterOffsets) == 0x0010);
static_assert(offsetof(FNiagaraTypeLayoutInfo, Int32ComponentByteOffsets) == 0x0020);
static_assert(offsetof(FNiagaraTypeLayoutInfo, Int32ComponentRegisterOffsets) == 0x0030);
static_assert(offsetof(FNiagaraTypeLayoutInfo, HalfComponentByteOffsets) == 0x0040);
static_assert(offsetof(FNiagaraTypeLayoutInfo, HalfComponentRegisterOffsets) == 0x0050);
static_assert(offsetof(FNiagaraVariableLayoutInfo, LayoutInfo) == 0x0010);
static_assert(offsetof(FNiagaraDataSetID, Name) == 0x0000);
static_assert(offsetof(FNiagaraDataSetID, Type) == 0x0008);
static_assert(offsetof(FNiagaraDataSetCompiledData, Variables) == 0x0000);
static_assert(offsetof(FNiagaraDataSetCompiledData, VariableLayouts) == 0x0010);
static_assert(offsetof(FNiagaraDataSetCompiledData, ID) == 0x0020);
static_assert(offsetof(FNiagaraDataSetCompiledData, SimTarget) == 0x003C);
static_assert(offsetof(FNiagaraStructConversionStep, ConversionType) == 0x0010);
static_assert(offsetof(FNiagaraLwcStructConverter, ConversionSteps) == 0x0008);
static_assert(offsetof(FNiagaraDataChannelGameDataLayout, VariableIndices) == 0x0000);
static_assert(offsetof(FNiagaraDataChannelGameDataLayout, LwcConverters) == 0x0050);
static_assert(offsetof(UNiagaraDataChannel, ChannelName) == 0x0028);
static_assert(offsetof(UNiagaraDataChannel, Variables) == 0x0030);
static_assert(offsetof(UNiagaraDataChannel, CompiledData) == 0x0048);
static_assert(offsetof(UNiagaraDataChannel, CompiledDataGPU) == 0x0090);
static_assert(offsetof(UNiagaraDataChannel, GameDataLayout) == 0x00D8);
static_assert(offsetof(FNiagaraDataChannelReference, ChannelName) == 0x0000);
static_assert(offsetof(FNDIDataChannelFunctionInfo, FunctionName) == 0x0000);
static_assert(offsetof(FNDIDataChannelFunctionInfo, Inputs) == 0x0008);
static_assert(offsetof(FNDIDataChannelFunctionInfo, Outputs) == 0x0018);
static_assert(offsetof(FNDIDataChannel_GPUScriptParameterAccessInfo, SortedParameters) == 0x0000);
static_assert(offsetof(FNDIDataChannelCompiledData, FunctionInfo) == 0x0000);
static_assert(offsetof(FNDIDataChannelCompiledData, GPUScriptParameterInfos) == 0x0010);
static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, Channel) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceDataChannelRead, CompiledData) == 0x0048);
static_assert(offsetof(FNiagaraDataInterfaceEmitterBinding, BindingMode) == 0x0000);
static_assert(offsetof(FNiagaraDataInterfaceEmitterBinding, EmitterName) == 0x0004);
static_assert(offsetof(UNiagaraDataInterfaceDataChannelSpawn, EmitterBinding) == 0x00B0);
static_assert(offsetof(FNDIDataChannelWriteCompiledData, DataLayout) == 0x0068);
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, AllocationMode) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, Channel) == 0x0044);
static_assert(offsetof(UNiagaraDataInterfaceDataChannelWrite, CompiledData) == 0x0050);
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, CVarName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, PassResponse) == 0x0008);
static_assert(offsetof(FNiagaraPlatformSetCVarCondition, FailResponse) == 0x0009);
static_assert(offsetof(FNiagaraPlatformSetRedirect, ProfileNames) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetRedirect, Mode) == 0x0010);
static_assert(offsetof(FNiagaraPlatformSetRedirect, RedirectProfileName) == 0x0014);
static_assert(offsetof(FNiagaraPlatformSetRedirect, CVarConditionEnabled) == 0x0020);
static_assert(offsetof(FNiagaraPlatformSetRedirect, CVarConditionDisabled) == 0x0050);
static_assert(offsetof(UNiagaraSettings, DefaultEffectType) == 0x0040);
static_assert(offsetof(UNiagaraSettings, PositionPinTypeColor) == 0x0060);
static_assert(offsetof(UNiagaraSettings, QualityLevels) == 0x0070);
static_assert(offsetof(UNiagaraSettings, ComponentRendererWarningsPerClass) == 0x0080);
static_assert(offsetof(UNiagaraSettings, DefaultRenderTargetFormat) == 0x00D0);
static_assert(offsetof(UNiagaraSettings, DefaultGridFormat) == 0x00D1);
static_assert(offsetof(UNiagaraSettings, DefaultRendererMotionVectorSetting) == 0x00D4);
static_assert(offsetof(UNiagaraSettings, DefaultPixelCoverageMode) == 0x00D8);
static_assert(offsetof(UNiagaraSettings, DefaultSortPrecision) == 0x00D9);
static_assert(offsetof(UNiagaraSettings, DefaultGpuTranslucentLatency) == 0x00DA);
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_GpuMaxInfluences) == 0x00E0);
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_GpuUniformSamplingFormat) == 0x00E1);
static_assert(offsetof(UNiagaraSettings, NDISkelMesh_AdjacencyTriangleIndexFormat) == 0x00E2);
static_assert(offsetof(UNiagaraSettings, SimCacheAuxiliaryFileBasePath) == 0x00F8);
static_assert(offsetof(UNiagaraSettings, PlatformSetRedirects) == 0x0110);
static_assert(offsetof(UNiagaraValidationRuleSet, ValidationRules) == 0x0028);
static_assert(offsetof(FNiagaraUserParameterBinding, Parameter) == 0x0000);
static_assert(offsetof(UNiagaraDataInterfaceActorComponent, SourceMode) == 0x0039);
static_assert(offsetof(UNiagaraDataInterfaceActorComponent, SourceActor) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceActorComponent, ActorOrComponentParameter) == 0x0060);
static_assert(offsetof(UNiagaraDataInterfaceAsyncGpuTrace, TraceProvider) == 0x0040);
static_assert(offsetof(FNiagaraDynamicMeshMaterial, Material) == 0x0000);
static_assert(offsetof(FNiagaraDynamicMeshMaterial, MaterialUserParamBinding) == 0x0008);
static_assert(offsetof(UNiagaraDataInterfaceDynamicMesh, Sections) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceDynamicMesh, Materials) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceDynamicMesh, DefaultBounds) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceEmitterProperties, EmitterBinding) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, DefaultSource) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, SoftSourceActor) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfacePhysicsAsset, MeshUserParameter) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceSimCacheReader, SimCacheBinding) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceSimCacheReader, SimCache) == 0x0058);
static_assert(offsetof(UNiagaraDataInterfaceSimCacheReader, EmitterBinding) == 0x0060);
static_assert(offsetof(UNiagaraDataInterfaceSimpleCounter, GpuSyncMode) == 0x0038);
static_assert(offsetof(FNDIStaticMeshSectionFilter, AllowedMaterialSlots) == 0x0000);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceMode) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, DefaultMesh) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SoftSourceActor) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SourceComponent) == 0x0078);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, SectionFilter) == 0x0080);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, LODIndexUserParameter) == 0x0098);
static_assert(offsetof(UNiagaraDataInterfaceStaticMesh, FilteredSockets) == 0x00B8);
static_assert(offsetof(FNiagaraUObjectPropertyReaderRemap, GraphName) == 0x0000);
static_assert(offsetof(FNiagaraUObjectPropertyReaderRemap, RemapName) == 0x0008);
static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, UObjectParameterBinding) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, PropertyRemap) == 0x0058);
static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, SourceActor) == 0x0068);
static_assert(offsetof(UNiagaraDataInterfaceUObjectPropertyReader, SourceActorComponentClass) == 0x0098);
static_assert(offsetof(UNiagaraDataInterfaceVirtualTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceVirtualTexture, TextureUserParameter) == 0x0040);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionStartBehavior) == 0x00F0);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionEvaluateBehavior) == 0x00F4);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, SectionEndBehavior) == 0x00F8);
static_assert(offsetof(UMovieSceneNiagaraSystemSpawnSection, AgeUpdateMode) == 0x00FC);
static_assert(offsetof(UMovieSceneNiagaraTrack, Sections) == 0x0098);
static_assert(offsetof(UMovieSceneNiagaraParameterTrack, Parameter) == 0x00A8);
static_assert(offsetof(ANiagaraActor, NiagaraComponent) == 0x0290);
static_assert(offsetof(UNiagaraBakerOutput, OutputName) == 0x0028);
static_assert(offsetof(FNiagaraSimCacheCreateParameters, AttributeCaptureMode) == 0x0000);
static_assert(offsetof(FNiagaraSimCacheCreateParameters, RebaseIncludeAttributes) == 0x0008);
static_assert(offsetof(FNiagaraSimCacheCreateParameters, RebaseExcludeAttributes) == 0x0018);
static_assert(offsetof(FNiagaraSimCacheCreateParameters, InterpolationIncludeAttributes) == 0x0028);
static_assert(offsetof(FNiagaraSimCacheCreateParameters, InterpolationExcludeAttributes) == 0x0038);
static_assert(offsetof(FNiagaraSimCacheCreateParameters, ExplicitCaptureAttributes) == 0x0048);
static_assert(offsetof(UNiagaraBakerOutputSimCache, SimCacheAssetPathFormat) == 0x0038);
static_assert(offsetof(UNiagaraBakerOutputSimCache, CreateParameters) == 0x0048);
static_assert(offsetof(FNiagaraBakerTextureSource, DisplayString) == 0x0000);
static_assert(offsetof(FNiagaraBakerTextureSource, SourceName) == 0x0010);
static_assert(offsetof(UNiagaraBakerOutputTexture2D, SourceBinding) == 0x0038);
static_assert(offsetof(UNiagaraBakerOutputTexture2D, FrameSize) == 0x0054);
static_assert(offsetof(UNiagaraBakerOutputTexture2D, AtlasTextureSize) == 0x005C);
static_assert(offsetof(UNiagaraBakerOutputTexture2D, TextureAddressX) == 0x006C);
static_assert(offsetof(UNiagaraBakerOutputTexture2D, TextureAddressY) == 0x006D);
static_assert(offsetof(UNiagaraBakerOutputTexture2D, AtlasAssetPathFormat) == 0x0070);
static_assert(offsetof(UNiagaraBakerOutputTexture2D, FramesAssetPathFormat) == 0x0080);
static_assert(offsetof(UNiagaraBakerOutputTexture2D, FramesExportPathFormat) == 0x0090);
static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, SourceBinding) == 0x0038);
static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, AtlasAssetPathFormat) == 0x0058);
static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, FramesAssetPathFormat) == 0x0068);
static_assert(offsetof(UNiagaraBakerOutputVolumeTexture, FramesExportPathFormat) == 0x0078);
static_assert(offsetof(FNiagaraBakerCameraSettings, ViewMode) == 0x0000);
static_assert(offsetof(FNiagaraBakerCameraSettings, ViewportLocation) == 0x0008);
static_assert(offsetof(FNiagaraBakerCameraSettings, ViewportRotation) == 0x0020);
static_assert(offsetof(FNiagaraBakerTextureSettings, OutputName) == 0x0000);
static_assert(offsetof(FNiagaraBakerTextureSettings, SourceBinding) == 0x0008);
static_assert(offsetof(FNiagaraBakerTextureSettings, FrameSize) == 0x0024);
static_assert(offsetof(FNiagaraBakerTextureSettings, TextureSize) == 0x002C);
static_assert(offsetof(FNiagaraBakerTextureSettings, GeneratedTexture) == 0x0038);
static_assert(offsetof(UNiagaraBakerSettings, FramesPerDimension) == 0x0038);
static_assert(offsetof(UNiagaraBakerSettings, Outputs) == 0x0040);
static_assert(offsetof(UNiagaraBakerSettings, CameraSettings) == 0x0050);
static_assert(offsetof(UNiagaraBakerSettings, BakeQualityLevel) == 0x0064);
static_assert(offsetof(UNiagaraBakerSettings, OutputTextures) == 0x0070);
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportMode) == 0x0080);
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportLocation) == 0x0088);
static_assert(offsetof(UNiagaraBakerSettings, CameraViewportRotation) == 0x0130);
static_assert(offsetof(FNiagaraVariableWithOffset, StructConverter) == 0x0010);
static_assert(offsetof(FNiagaraPositionSource, Name) == 0x0000);
static_assert(offsetof(FNiagaraPositionSource, Value) == 0x0008);
static_assert(offsetof(FNiagaraParameterStore, Owner) == 0x0008);
static_assert(offsetof(FNiagaraParameterStore, SortedParameterOffsets) == 0x0010);
static_assert(offsetof(FNiagaraParameterStore, ParameterData) == 0x0020);
static_assert(offsetof(FNiagaraParameterStore, DataInterfaces) == 0x0030);
static_assert(offsetof(FNiagaraParameterStore, UObjects) == 0x0040);
static_assert(offsetof(FNiagaraParameterStore, OriginalPositionData) == 0x0050);
static_assert(offsetof(FNiagaraUserRedirectionParameterStore, UserParameterRedirects) == 0x0088);
static_assert(offsetof(UNiagaraComponent, Asset) == 0x0568);
static_assert(offsetof(UNiagaraComponent, TickBehavior) == 0x0570);
static_assert(offsetof(UNiagaraComponent, OverrideParameters) == 0x0578);
static_assert(offsetof(UNiagaraComponent, AutoAttachParent) == 0x06B0);
static_assert(offsetof(UNiagaraComponent, AutoAttachSocketName) == 0x06B8);
static_assert(offsetof(UNiagaraComponent, AutoAttachLocationRule) == 0x06C0);
static_assert(offsetof(UNiagaraComponent, AutoAttachRotationRule) == 0x06C1);
static_assert(offsetof(UNiagaraComponent, AutoAttachScaleRule) == 0x06C2);
static_assert(offsetof(UNiagaraComponent, SimCache) == 0x07F8);
static_assert(offsetof(UNiagaraComponent, CullProxy) == 0x0800);
static_assert(offsetof(FNCPoolElement, Component) == 0x0000);
static_assert(offsetof(FNCPool, FreeElements) == 0x0000);
static_assert(offsetof(UNiagaraComponentPool, WorldParticleSystemPools) == 0x0028);
static_assert(offsetof(FNiagaraDeviceProfileStateEntry, ProfileName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSet, DeviceProfileStates) == 0x0008);
static_assert(offsetof(FNiagaraPlatformSet, CVarConditions) == 0x0018);
static_assert(offsetof(FNiagaraVariableAttributeBinding, ParamMapVariable) == 0x0000);
static_assert(offsetof(FNiagaraVariableAttributeBinding, DataSetVariable) == 0x0010);
static_assert(offsetof(FNiagaraVariableAttributeBinding, RootVariable) == 0x0030);
static_assert(offsetof(FNiagaraVariableAttributeBinding, BindingSourceMode) == 0x0050);
static_assert(offsetof(UNiagaraRendererProperties, Platforms) == 0x0028);
static_assert(offsetof(UNiagaraRendererProperties, MotionVectorSetting) == 0x005C);
static_assert(offsetof(UNiagaraRendererProperties, RendererEnabledBinding) == 0x0060);
static_assert(offsetof(UNiagaraRendererProperties, OuterEmitterVersion) == 0x00BC);
static_assert(offsetof(FNiagaraTypeDefinition, ClassStructOrEnum) == 0x0000);
static_assert(offsetof(FNiagaraComponentPropertyBinding, AttributeBinding) == 0x0000);
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyName) == 0x0058);
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertyType) == 0x0060);
static_assert(offsetof(FNiagaraComponentPropertyBinding, MetadataSetterName) == 0x0070);
static_assert(offsetof(FNiagaraComponentPropertyBinding, PropertySetterParameterDefaults) == 0x0078);
static_assert(offsetof(UNiagaraComponentRendererProperties, ComponentType) == 0x00E0);
static_assert(offsetof(UNiagaraComponentRendererProperties, EnabledBinding) == 0x00F0);
static_assert(offsetof(UNiagaraComponentRendererProperties, RendererVisibilityTagBinding) == 0x0148);
static_assert(offsetof(UNiagaraComponentRendererProperties, TemplateComponent) == 0x01A8);
static_assert(offsetof(UNiagaraComponentRendererProperties, PropertyBindings) == 0x01B0);
static_assert(offsetof(UNiagaraCullProxyComponent, Instances) == 0x0808);
static_assert(offsetof(UNiagaraDataInterface2DArrayTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterface2DArrayTexture, TextureUserParameter) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceArray, GpuSyncMode) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat, FloatData) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat2, InternalFloatData) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat3, InternalFloatData) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceArrayPosition, PositionData) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceArrayFloat4, InternalFloatData) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceArrayColor, ColorData) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceArrayQuat, InternalQuatData) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceArrayInt32, IntData) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceArrayUInt8, InternalIntData) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceArrayBool, BoolData) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceArrayNiagaraID, IntData) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceAudioSubmix, Submix) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioOscilloscope, Submix) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayerSettings, Concurrency) == 0x0030);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayerSettings, AttenuationSettings) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, SoundToPlay) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Attenuation) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, Concurrency) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, ParameterNames) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceAudioPlayer, ConfigurationUserParameter) == 0x0060);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ShaderLUT) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedName) == 0x0060);
static_assert(offsetof(UNiagaraDataInterfaceCurveBase, ExposedTexture) == 0x0068);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, RedCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, GreenCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, BlueCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceColorCurve, AlphaCurve) == 0x01F0);
static_assert(offsetof(UNiagaraDataInterfaceCubeTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceCubeTexture, TextureUserParameter) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceCurve, Curve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceExport, CallbackHandlerParameter) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceExport, GPUAllocationMode) == 0x0058);
static_assert(offsetof(UNiagaraDataInterfaceGrid2D, WorldBBoxSize) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, RenderTargetUserParameter) == 0x0060);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, OverrideBufferFormat) == 0x0080);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollection, ManagedRenderTargets) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, EmitterName) == 0x0128);
static_assert(offsetof(UNiagaraDataInterfaceGrid2DCollectionReader, DIName) == 0x0138);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, NumCells) == 0x003C);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, SetResolutionMethod) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceGrid3D, WorldBBoxSize) == 0x0058);
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, RenderTargetUserParameter) == 0x0078);
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollection, OverrideBufferFormat) == 0x0098);
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollectionReader, EmitterName) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceGrid3DCollectionReader, DIName) == 0x0100);
static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, Size) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, RenderTargetUserParameter) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceIntRenderTarget2D, ManagedRenderTargets) == 0x0060);
static_assert(offsetof(UNiagaraDataInterfaceLandscape, SourceLandscape) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceLandscape, SourceMode) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceLandscape, PhysicalMaterials) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceMeshRendererInfo, MeshRenderer) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceParticleRead, EmitterName) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfacePlatformSet, Platforms) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, Size) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, MipMapGeneration) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, MipMapGenerationType) == 0x0041);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, OverrideRenderTargetFormat) == 0x0042);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, OverrideRenderTargetFilter) == 0x0043);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, RenderTargetUserParameter) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2D, ManagedRenderTargets) == 0x00B8);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, Size) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, OverrideRenderTargetFormat) == 0x0044);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, OverrideRenderTargetFilter) == 0x0045);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, RenderTargetUserParameter) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceRenderTarget2DArray, ManagedRenderTargets) == 0x0068);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, OverrideRenderTargetFormat) == 0x003C);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, OverrideRenderTargetFilter) == 0x003D);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, RenderTargetUserParameter) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetCube, ManagedRenderTargets) == 0x0060);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, Size) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, OverrideRenderTargetFormat) == 0x004C);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, OverrideRenderTargetFilter) == 0x004D);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, RenderTargetUserParameter) == 0x0050);
static_assert(offsetof(UNiagaraDataInterfaceRenderTargetVolume, ManagedRenderTargets) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, ActorTags) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceRigidMeshCollisionQuery, ComponentTags) == 0x0048);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceMode) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SoftSourceActor) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, ComponentTags) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SourceComponent) == 0x0080);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, MeshUserParameter) == 0x0088);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SkinningMode) == 0x00A8);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, SamplingRegions) == 0x00B0);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredBones) == 0x00C8);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, FilteredSockets) == 0x00D8);
static_assert(offsetof(UNiagaraDataInterfaceSkeletalMesh, ExcludeBoneName) == 0x00E8);
static_assert(offsetof(UNiagaraDataInterfaceSpline, Source) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceSpline, SplineUserParameter) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceSpriteRendererInfo, SpriteRenderer) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceTexture, TextureUserParameter) == 0x0040);
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVector2DCurve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, ZCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceVector4Curve, WCurve) == 0x01F0);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, XCurve) == 0x0070);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, YCurve) == 0x00F0);
static_assert(offsetof(UNiagaraDataInterfaceVectorCurve, ZCurve) == 0x0170);
static_assert(offsetof(UNiagaraDataInterfaceVectorField, Field) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceVolumeCache, VolumeCache) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceVolumeTexture, Texture) == 0x0038);
static_assert(offsetof(UNiagaraDataInterfaceVolumeTexture, TextureUserParameter) == 0x0040);
static_assert(offsetof(FNiagaraDebugHUDVariable, Name) == 0x0008);
static_assert(offsetof(FNiagaraDebugHudTextOptions, Font) == 0x0000);
static_assert(offsetof(FNiagaraDebugHudTextOptions, HorizontalAlignment) == 0x0004);
static_assert(offsetof(FNiagaraDebugHudTextOptions, VerticalAlignment) == 0x0005);
static_assert(offsetof(FNiagaraDebugHudTextOptions, ScreenOffset) == 0x0008);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewMode) == 0x0008);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewFont) == 0x000C);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewLocation) == 0x0010);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ActorFilter) == 0x0028);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ComponentFilter) == 0x0040);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemFilter) == 0x0058);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, EmitterFilter) == 0x0070);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemDebugVerbosity) == 0x0084);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemEmitterVerbosity) == 0x0088);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, DataInterfaceVerbosity) == 0x008C);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemVariables) == 0x00A0);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemTextOptions) == 0x00B0);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticlesVariables) == 0x00D0);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticleTextOptions) == 0x00E0);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, ParticleDisplayClip) == 0x0100);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfSampleMode) == 0x0120);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfGraphMode) == 0x0124);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfGraphSize) == 0x0130);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PerfGraphAxisColor) == 0x0140);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, DefaultBackgroundColor) == 0x0158);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewHeadingColor) == 0x0168);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewDetailColor) == 0x0178);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, OverviewDetailHighlightColor) == 0x0188);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, InWorldErrorTextColor) == 0x0198);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, InWorldTextColor) == 0x01A8);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, MessageInfoTextColor) == 0x01B8);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, MessageWarningTextColor) == 0x01C8);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, MessageErrorTextColor) == 0x01D8);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemColorHSVMin) == 0x01F0);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, SystemColorHSVMax) == 0x0208);
static_assert(offsetof(FNiagaraDebugHUDSettingsData, PlaybackMode) == 0x0220);
static_assert(offsetof(UNiagaraDebugHUDSettings, Data) == 0x0048);
static_assert(offsetof(FNiagaraParameterBinding, Parameter) == 0x0000);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, MaterialParameterName) == 0x0000);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraVariable) == 0x0008);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, ResolvedNiagaraVariable) == 0x0014);
static_assert(offsetof(FNiagaraMaterialAttributeBinding, NiagaraChildVariable) == 0x0020);
static_assert(offsetof(FNiagaraRendererMaterialScalarParameter, MaterialParameterName) == 0x0000);
static_assert(offsetof(FNiagaraRendererMaterialVectorParameter, MaterialParameterName) == 0x0000);
static_assert(offsetof(FNiagaraRendererMaterialVectorParameter, Value) == 0x0008);
static_assert(offsetof(FNiagaraRendererMaterialTextureParameter, MaterialParameterName) == 0x0000);
static_assert(offsetof(FNiagaraRendererMaterialTextureParameter, Texture) == 0x0008);
static_assert(offsetof(FNiagaraRendererMaterialStaticBoolParameter, MaterialParameterName) == 0x0000);
static_assert(offsetof(FNiagaraRendererMaterialStaticBoolParameter, StaticVariableName) == 0x0008);
static_assert(offsetof(FNiagaraRendererMaterialParameters, AttributeBindings) == 0x0000);
static_assert(offsetof(FNiagaraRendererMaterialParameters, ScalarParameters) == 0x0010);
static_assert(offsetof(FNiagaraRendererMaterialParameters, VectorParameters) == 0x0020);
static_assert(offsetof(FNiagaraRendererMaterialParameters, TextureParameters) == 0x0030);
static_assert(offsetof(FNiagaraRendererMaterialParameters, StaticBoolParameters) == 0x0040);
static_assert(offsetof(UNiagaraDecalRendererProperties, Material) == 0x00E0);
static_assert(offsetof(UNiagaraDecalRendererProperties, MaterialParameterBinding) == 0x00E8);
static_assert(offsetof(UNiagaraDecalRendererProperties, SourceMode) == 0x00F4);
static_assert(offsetof(UNiagaraDecalRendererProperties, PositionBinding) == 0x0100);
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalOrientationBinding) == 0x0158);
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalSizeBinding) == 0x01B0);
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalFadeBinding) == 0x0208);
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalSortOrderBinding) == 0x0260);
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalColorBinding) == 0x02B8);
static_assert(offsetof(UNiagaraDecalRendererProperties, DecalVisibleBinding) == 0x0310);
static_assert(offsetof(UNiagaraDecalRendererProperties, RendererVisibilityTagBinding) == 0x0368);
static_assert(offsetof(UNiagaraDecalRendererProperties, MaterialParameters) == 0x03C0);
static_assert(offsetof(FNiagaraGlobalBudgetScaling, MaxDistanceScaleByGlobalBudgetUse) == 0x0008);
static_assert(offsetof(FNiagaraGlobalBudgetScaling, MaxInstanceCountScaleByGlobalBudgetUse) == 0x0018);
static_assert(offsetof(FNiagaraGlobalBudgetScaling, MaxSystemInstanceCountScaleByGlobalBudgetUse) == 0x0028);
static_assert(offsetof(FNiagaraSystemScalabilitySettings, Platforms) == 0x0000);
static_assert(offsetof(FNiagaraSystemScalabilitySettings, CullProxyMode) == 0x0048);
static_assert(offsetof(FNiagaraSystemScalabilitySettings, VisibilityCulling) == 0x0050);
static_assert(offsetof(FNiagaraSystemScalabilitySettings, BudgetScaling) == 0x005C);
static_assert(offsetof(FNiagaraSystemScalabilitySettingsArray, Settings) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScalabilitySettings, Platforms) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScalabilitySettingsArray, Settings) == 0x0000);
static_assert(offsetof(UNiagaraEffectType, UpdateFrequency) == 0x002C);
static_assert(offsetof(UNiagaraEffectType, CullReaction) == 0x0030);
static_assert(offsetof(UNiagaraEffectType, SignificanceHandler) == 0x0038);
static_assert(offsetof(UNiagaraEffectType, DetailLevelScalabilitySettings) == 0x0040);
static_assert(offsetof(UNiagaraEffectType, SystemScalabilitySettings) == 0x0050);
static_assert(offsetof(UNiagaraEffectType, EmitterScalabilitySettings) == 0x0060);
static_assert(offsetof(UNiagaraEffectType, PerformanceBaselineController) == 0x0078);
static_assert(offsetof(UNiagaraEffectType, PerfBaselineStats) == 0x0080);
static_assert(offsetof(UNiagaraEffectType, PerfBaselineVersion) == 0x0090);
static_assert(offsetof(FNiagaraAssetVersion, VersionGuid) == 0x0008);
static_assert(offsetof(FNiagaraEventReceiverProperties, Name) == 0x0000);
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEventGenerator) == 0x0008);
static_assert(offsetof(FNiagaraEventReceiverProperties, SourceEmitter) == 0x0010);
static_assert(offsetof(FNiagaraEventGeneratorProperties, ID) == 0x0004);
static_assert(offsetof(FNiagaraEventGeneratorProperties, DataSetCompiledData) == 0x0010);
static_assert(offsetof(FNiagaraEmitterScriptProperties, Script) == 0x0000);
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventReceivers) == 0x0008);
static_assert(offsetof(FNiagaraEmitterScriptProperties, EventGenerators) == 0x0018);
static_assert(offsetof(FNiagaraEventScriptProperties, ExecutionMode) == 0x0028);
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEmitterID) == 0x0034);
static_assert(offsetof(FNiagaraEventScriptProperties, SourceEventName) == 0x0044);
static_assert(offsetof(FNiagaraEmitterScalabilityOverrides, Overrides) == 0x0000);
static_assert(offsetof(FVersionedNiagaraEmitterData, Version) == 0x0000);
static_assert(offsetof(FVersionedNiagaraEmitterData, DeprecationMessage) == 0x0020);
static_assert(offsetof(FVersionedNiagaraEmitterData, SimTarget) == 0x0044);
static_assert(offsetof(FVersionedNiagaraEmitterData, CalculateBoundsMode) == 0x0045);
static_assert(offsetof(FVersionedNiagaraEmitterData, FixedBounds) == 0x0048);
static_assert(offsetof(FVersionedNiagaraEmitterData, EventHandlerScriptProps) == 0x0088);
static_assert(offsetof(FVersionedNiagaraEmitterData, Platforms) == 0x0098);
static_assert(offsetof(FVersionedNiagaraEmitterData, ScalabilityOverrides) == 0x00C8);
static_assert(offsetof(FVersionedNiagaraEmitterData, AllocationMode) == 0x00E4);
static_assert(offsetof(FVersionedNiagaraEmitterData, UpdateScriptProps) == 0x00F0);
static_assert(offsetof(FVersionedNiagaraEmitterData, SpawnScriptProps) == 0x0118);
static_assert(offsetof(FVersionedNiagaraEmitterData, RendererBindings) == 0x0140);
static_assert(offsetof(FVersionedNiagaraEmitterData, RendererProperties) == 0x01C8);
static_assert(offsetof(FVersionedNiagaraEmitterData, SimulationStages) == 0x01D8);
static_assert(offsetof(FVersionedNiagaraEmitterData, GPUComputeScript) == 0x01E8);
static_assert(offsetof(FVersionedNiagaraEmitterData, SharedEventGeneratorIds) == 0x01F0);
static_assert(offsetof(FVersionedNiagaraEmitterData, CurrentScalabilitySettings) == 0x0200);
static_assert(offsetof(UNiagaraEmitter, ExposedVersion) == 0x0030);
static_assert(offsetof(UNiagaraEmitter, VersionData) == 0x0048);
static_assert(offsetof(UNiagaraEmitter, UniqueEmitterName) == 0x0060);
static_assert(offsetof(UNiagaraEmitter, RendererProperties) == 0x0070);
static_assert(offsetof(UNiagaraEmitter, EventHandlerScriptProps) == 0x0080);
static_assert(offsetof(UNiagaraEmitter, SimulationStages) == 0x0090);
static_assert(offsetof(UNiagaraEmitter, GPUComputeScript) == 0x00A0);
static_assert(offsetof(UNiagaraEmitter, SharedEventGeneratorIds) == 0x00A8);
static_assert(offsetof(ANiagaraLensEffectBase, DesiredRelativeTransform) == 0x02B0);
static_assert(offsetof(ANiagaraLensEffectBase, EmittersToTreatAsSame) == 0x0318);
static_assert(offsetof(ANiagaraLensEffectBase, OwningCameraManager) == 0x0328);
static_assert(offsetof(UNiagaraLightRendererProperties, SourceMode) == 0x00E0);
static_assert(offsetof(UNiagaraLightRendererProperties, ColorAdd) == 0x00F0);
static_assert(offsetof(UNiagaraLightRendererProperties, LightRenderingEnabledBinding) == 0x0108);
static_assert(offsetof(UNiagaraLightRendererProperties, LightExponentBinding) == 0x0160);
static_assert(offsetof(UNiagaraLightRendererProperties, PositionBinding) == 0x01B8);
static_assert(offsetof(UNiagaraLightRendererProperties, ColorBinding) == 0x0210);
static_assert(offsetof(UNiagaraLightRendererProperties, RadiusBinding) == 0x0268);
static_assert(offsetof(UNiagaraLightRendererProperties, VolumetricScatteringBinding) == 0x02C0);
static_assert(offsetof(UNiagaraLightRendererProperties, RendererVisibilityTagBinding) == 0x0318);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, Mesh) == 0x0000);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, MeshParameterBinding) == 0x0008);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, Scale) == 0x0018);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, Rotation) == 0x0030);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, PivotOffset) == 0x0048);
static_assert(offsetof(FNiagaraMeshRendererMeshProperties, PivotOffsetSpace) == 0x0060);
static_assert(offsetof(FNiagaraMeshMaterialOverride, ExplicitMat) == 0x0000);
static_assert(offsetof(FNiagaraMeshMaterialOverride, UserParamBinding) == 0x0008);
static_assert(offsetof(FNiagaraMeshMICOverride, OriginalMaterial) == 0x0000);
static_assert(offsetof(FNiagaraMeshMICOverride, ReplacementMaterial) == 0x0008);
static_assert(offsetof(UNiagaraMeshRendererProperties, Meshes) == 0x00E0);
static_assert(offsetof(UNiagaraMeshRendererProperties, SourceMode) == 0x00F0);
static_assert(offsetof(UNiagaraMeshRendererProperties, SortMode) == 0x00F1);
static_assert(offsetof(UNiagaraMeshRendererProperties, SortPrecision) == 0x00F8);
static_assert(offsetof(UNiagaraMeshRendererProperties, GpuTranslucentLatency) == 0x00F9);
static_assert(offsetof(UNiagaraMeshRendererProperties, OverrideMaterials) == 0x0100);
static_assert(offsetof(UNiagaraMeshRendererProperties, MICOverrideMaterials) == 0x0110);
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageSize) == 0x0120);
static_assert(offsetof(UNiagaraMeshRendererProperties, FacingMode) == 0x0130);
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxis) == 0x0138);
static_assert(offsetof(UNiagaraMeshRendererProperties, LockedAxisSpace) == 0x0150);
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshBoundsScale) == 0x0158);
static_assert(offsetof(UNiagaraMeshRendererProperties, PositionBinding) == 0x0180);
static_assert(offsetof(UNiagaraMeshRendererProperties, ColorBinding) == 0x01D8);
static_assert(offsetof(UNiagaraMeshRendererProperties, VelocityBinding) == 0x0230);
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshOrientationBinding) == 0x0288);
static_assert(offsetof(UNiagaraMeshRendererProperties, ScaleBinding) == 0x02E0);
static_assert(offsetof(UNiagaraMeshRendererProperties, SubImageIndexBinding) == 0x0338);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterialBinding) == 0x0390);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial1Binding) == 0x03E8);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial2Binding) == 0x0440);
static_assert(offsetof(UNiagaraMeshRendererProperties, DynamicMaterial3Binding) == 0x0498);
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialRandomBinding) == 0x04F0);
static_assert(offsetof(UNiagaraMeshRendererProperties, CustomSortingBinding) == 0x0548);
static_assert(offsetof(UNiagaraMeshRendererProperties, NormalizedAgeBinding) == 0x05A0);
static_assert(offsetof(UNiagaraMeshRendererProperties, CameraOffsetBinding) == 0x05F8);
static_assert(offsetof(UNiagaraMeshRendererProperties, RendererVisibilityTagBinding) == 0x0650);
static_assert(offsetof(UNiagaraMeshRendererProperties, MeshIndexBinding) == 0x06A8);
static_assert(offsetof(UNiagaraMeshRendererProperties, MaterialParameters) == 0x0700);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevPositionBinding) == 0x0750);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevScaleBinding) == 0x07A8);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevMeshOrientationBinding) == 0x0800);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevCameraOffsetBinding) == 0x0858);
static_assert(offsetof(UNiagaraMeshRendererProperties, PrevVelocityBinding) == 0x08B0);
static_assert(offsetof(UNiagaraMeshRendererProperties, ParticleMesh) == 0x0970);
static_assert(offsetof(UNiagaraMeshRendererProperties, PivotOffset) == 0x0978);
static_assert(offsetof(UNiagaraMeshRendererProperties, PivotOffsetSpace) == 0x0990);
static_assert(offsetof(UNiagaraParameterCollectionInstance, Collection) == 0x0028);
static_assert(offsetof(UNiagaraParameterCollectionInstance, OverridenParameters) == 0x0030);
static_assert(offsetof(UNiagaraParameterCollectionInstance, ParameterStorage) == 0x0040);
static_assert(offsetof(UNiagaraParameterCollection, Namespace) == 0x0028);
static_assert(offsetof(UNiagaraParameterCollection, Parameters) == 0x0030);
static_assert(offsetof(UNiagaraParameterCollection, SourceMaterialCollection) == 0x0040);
static_assert(offsetof(UNiagaraParameterCollection, DefaultInstance) == 0x0048);
static_assert(offsetof(UNiagaraParameterCollection, CompileId) == 0x0050);
static_assert(offsetof(UNiagaraBaselineController, EffectType) == 0x0030);
static_assert(offsetof(UNiagaraBaselineController, Owner) == 0x0038);
static_assert(offsetof(UNiagaraBaselineController, System) == 0x0040);
static_assert(offsetof(UNiagaraBaselineController_Basic, SpawnedComponents) == 0x0078);
static_assert(offsetof(ANiagaraPerfBaselineActor, Controller) == 0x0290);
static_assert(offsetof(ANiagaraPerfBaselineActor, Label) == 0x0298);
static_assert(offsetof(UNiagaraPrecompileContainer, Scripts) == 0x0028);
static_assert(offsetof(UNiagaraPrecompileContainer, System) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamBase, Param) == 0x0028);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector2D, Max) == 0x0048);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector, Max) == 0x0050);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, Min) == 0x0040);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamVector4, Max) == 0x0060);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, Min) == 0x0038);
static_assert(offsetof(UNiagaraPreviewAxis_InterpParamLinearColor, Max) == 0x0048);
static_assert(offsetof(ANiagaraPreviewGrid, System) == 0x0290);
static_assert(offsetof(ANiagaraPreviewGrid, ResetMode) == 0x0298);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewAxisX) == 0x02A0);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewAxisY) == 0x02A8);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewClass) == 0x02B0);
static_assert(offsetof(ANiagaraPreviewGrid, PreviewComponents) == 0x02C8);
static_assert(offsetof(FNiagaraRibbonUVSettings, DistributionMode) == 0x0000);
static_assert(offsetof(FNiagaraRibbonUVSettings, LeadingEdgeMode) == 0x0004);
static_assert(offsetof(FNiagaraRibbonUVSettings, TrailingEdgeMode) == 0x0008);
static_assert(offsetof(FNiagaraRibbonUVSettings, Offset) == 0x0010);
static_assert(offsetof(FNiagaraRibbonUVSettings, Scale) == 0x0020);
static_assert(offsetof(FNiagaraRibbonShapeCustomVertex, position) == 0x0000);
static_assert(offsetof(FNiagaraRibbonShapeCustomVertex, Normal) == 0x0008);
static_assert(offsetof(UNiagaraRibbonRendererProperties, Material) == 0x00E0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialUserParamBinding) == 0x00E8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, FacingMode) == 0x0108);
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV0Settings) == 0x0110);
static_assert(offsetof(UNiagaraRibbonRendererProperties, UV1Settings) == 0x0148);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DrawDirection) == 0x0185);
static_assert(offsetof(UNiagaraRibbonRendererProperties, Shape) == 0x0186);
static_assert(offsetof(UNiagaraRibbonRendererProperties, CustomVertices) == 0x0198);
static_assert(offsetof(UNiagaraRibbonRendererProperties, TessellationMode) == 0x01A8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, PositionBinding) == 0x01C0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, ColorBinding) == 0x0218);
static_assert(offsetof(UNiagaraRibbonRendererProperties, VelocityBinding) == 0x0270);
static_assert(offsetof(UNiagaraRibbonRendererProperties, NormalizedAgeBinding) == 0x02C8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonTwistBinding) == 0x0320);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonWidthBinding) == 0x0378);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonFacingBinding) == 0x03D0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonIdBinding) == 0x0428);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonLinkOrderBinding) == 0x0480);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialRandomBinding) == 0x04D8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterialBinding) == 0x0530);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial1Binding) == 0x0588);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial2Binding) == 0x05E0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, DynamicMaterial3Binding) == 0x0638);
static_assert(offsetof(UNiagaraRibbonRendererProperties, RibbonUVDistance) == 0x0690);
static_assert(offsetof(UNiagaraRibbonRendererProperties, U0OverrideBinding) == 0x06E8);
static_assert(offsetof(UNiagaraRibbonRendererProperties, V0RangeOverrideBinding) == 0x0740);
static_assert(offsetof(UNiagaraRibbonRendererProperties, U1OverrideBinding) == 0x0798);
static_assert(offsetof(UNiagaraRibbonRendererProperties, V1RangeOverrideBinding) == 0x07F0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, MaterialParameters) == 0x0848);
static_assert(offsetof(UNiagaraRibbonRendererProperties, PrevPositionBinding) == 0x0898);
static_assert(offsetof(UNiagaraRibbonRendererProperties, PrevRibbonWidthBinding) == 0x08F0);
static_assert(offsetof(UNiagaraRibbonRendererProperties, PrevRibbonFacingBinding) == 0x0948);
static_assert(offsetof(UNiagaraRibbonRendererProperties, PrevRibbonTwistBinding) == 0x09A0);
static_assert(offsetof(FNiagaraScriptExecutionParameterStore, PaddingInfo) == 0x0090);
static_assert(offsetof(FNiagaraBoundParameter, Parameter) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableDataId, CompilerVersionID) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptUsageType) == 0x0010);
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptUsageTypeID) == 0x0014);
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptID) == 0x0028);
static_assert(offsetof(FNiagaraVMExecutableDataId, BaseScriptCompileHash) == 0x0038);
static_assert(offsetof(FNiagaraVMExecutableDataId, ScriptVersionID) == 0x0048);
static_assert(offsetof(FNiagaraVMExecutableByteCode, Data) == 0x0000);
static_assert(offsetof(FNiagaraCompilerTag, Variable) == 0x0000);
static_assert(offsetof(FNiagaraCompilerTag, StringValue) == 0x0020);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Name) == 0x0000);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, Type) == 0x0010);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapRead) == 0x0020);
static_assert(offsetof(FNiagaraScriptDataInterfaceCompileInfo, RegisteredParameterMapWrite) == 0x0028);
static_assert(offsetof(FVMFunctionSpecifier, Key) == 0x0000);
static_assert(offsetof(FVMFunctionSpecifier, Value) == 0x0008);
static_assert(offsetof(FVMExternalFunctionBindingInfo, Name) == 0x0000);
static_assert(offsetof(FVMExternalFunctionBindingInfo, OwnerName) == 0x0008);
static_assert(offsetof(FVMExternalFunctionBindingInfo, InputParamLocations) == 0x0010);
static_assert(offsetof(FVMExternalFunctionBindingInfo, FunctionSpecifiers) == 0x0028);
static_assert(offsetof(FVMExternalFunctionBindingInfo, VariadicInputs) == 0x0038);
static_assert(offsetof(FVMExternalFunctionBindingInfo, VariadicOutputs) == 0x0048);
static_assert(offsetof(FNiagaraDataSetProperties, ID) == 0x0000);
static_assert(offsetof(FNiagaraDataSetProperties, Variables) == 0x0010);
static_assert(offsetof(FNiagaraStatScope, FullName) == 0x0000);
static_assert(offsetof(FNiagaraStatScope, FriendlyName) == 0x0008);
static_assert(offsetof(FNiagaraVMExecutableData, ByteCode) == 0x0000);
static_assert(offsetof(FNiagaraVMExecutableData, OptimizedByteCode) == 0x0018);
static_assert(offsetof(FNiagaraVMExecutableData, CompileTags) == 0x0070);
static_assert(offsetof(FNiagaraVMExecutableData, ScriptLiterals) == 0x0080);
static_assert(offsetof(FNiagaraVMExecutableData, Attributes) == 0x0090);
static_assert(offsetof(FNiagaraVMExecutableData, DataUsage) == 0x00A0);
static_assert(offsetof(FNiagaraVMExecutableData, DataInterfaceInfo) == 0x00A8);
static_assert(offsetof(FNiagaraVMExecutableData, CalledVMExternalFunctions) == 0x00B8);
static_assert(offsetof(FNiagaraVMExecutableData, ReadDataSets) == 0x00D8);
static_assert(offsetof(FNiagaraVMExecutableData, WriteDataSets) == 0x00E8);
static_assert(offsetof(FNiagaraVMExecutableData, StatScopes) == 0x00F8);
static_assert(offsetof(FNiagaraVMExecutableData, ShaderScriptParametersMetadata) == 0x0108);
static_assert(offsetof(FNiagaraVMExecutableData, LastCompileStatus) == 0x0160);
static_assert(offsetof(FNiagaraVMExecutableData, SimulationStageMetaData) == 0x0168);
static_assert(offsetof(FNiagaraVMExecutableData, ExperimentalContextData) == 0x0178);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, DataInterface) == 0x0000);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Name) == 0x0008);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, Type) == 0x0018);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapRead) == 0x0028);
static_assert(offsetof(FNiagaraScriptDataInterfaceInfo, RegisteredParameterMapWrite) == 0x0030);
static_assert(offsetof(UNiagaraScript, Usage) == 0x0030);
static_assert(offsetof(UNiagaraScript, UsageId) == 0x0034);
static_assert(offsetof(UNiagaraScript, RapidIterationParameters) == 0x0048);
static_assert(offsetof(UNiagaraScript, ScriptExecutionParamStore) == 0x00D0);
static_assert(offsetof(UNiagaraScript, ScriptExecutionBoundParameters) == 0x0178);
static_assert(offsetof(UNiagaraScript, CachedScriptVMId) == 0x0188);
static_assert(offsetof(UNiagaraScript, CachedScriptVM) == 0x01F0);
static_assert(offsetof(UNiagaraScript, CachedParameterCollectionReferences) == 0x0380);
static_assert(offsetof(UNiagaraScript, CachedDefaultDataInterfaces) == 0x0390);
static_assert(offsetof(FNiagaraSimCacheVariable, Variable) == 0x0000);
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, LayoutName) == 0x0000);
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, SimTarget) == 0x0008);
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, Variables) == 0x0010);
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, RebaseVariableNames) == 0x0030);
static_assert(offsetof(FNiagaraSimCacheDataBuffersLayout, InterpVariableNames) == 0x0040);
static_assert(offsetof(FNiagaraSimCacheLayout, SystemLayout) == 0x0000);
static_assert(offsetof(FNiagaraSimCacheLayout, EmitterLayouts) == 0x00B8);
static_assert(offsetof(FNiagaraSimCacheDataBuffers, FloatData) == 0x0008);
static_assert(offsetof(FNiagaraSimCacheDataBuffers, HalfData) == 0x0018);
static_assert(offsetof(FNiagaraSimCacheDataBuffers, Int32Data) == 0x0028);
static_assert(offsetof(FNiagaraSimCacheDataBuffers, IDToIndexTable) == 0x0038);
static_assert(offsetof(FNiagaraSimCacheDataBuffers, InterpMapping) == 0x0050);
static_assert(offsetof(FNiagaraSimCacheSystemFrame, LocalBounds) == 0x0000);
static_assert(offsetof(FNiagaraSimCacheSystemFrame, SystemDataBuffers) == 0x0038);
static_assert(offsetof(FNiagaraSimCacheEmitterFrame, LocalBounds) == 0x0000);
static_assert(offsetof(FNiagaraSimCacheEmitterFrame, ParticleDataBuffers) == 0x0040);
static_assert(offsetof(FNiagaraSimCacheFrame, LocalToWorld) == 0x0000);
static_assert(offsetof(FNiagaraSimCacheFrame, LWCTile) == 0x0060);
static_assert(offsetof(FNiagaraSimCacheFrame, SystemData) == 0x0070);
static_assert(offsetof(FNiagaraSimCacheFrame, EmitterData) == 0x0108);
static_assert(offsetof(UNiagaraSimCache, CacheGuid) == 0x0028);
static_assert(offsetof(UNiagaraSimCache, SoftNiagaraSystem) == 0x0038);
static_assert(offsetof(UNiagaraSimCache, CreateParameters) == 0x0070);
static_assert(offsetof(UNiagaraSimCache, CacheLayout) == 0x00D0);
static_assert(offsetof(UNiagaraSimCache, CacheFrames) == 0x0198);
static_assert(offsetof(UNiagaraSimCache, DataInterfaceStorage) == 0x01A8);
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, CaptureSimCache) == 0x0030);
static_assert(offsetof(UAsyncNiagaraCaptureSimCache, CaptureComponent) == 0x0038);
static_assert(offsetof(UNiagaraSimulationStageBase, Script) == 0x0028);
static_assert(offsetof(UNiagaraSimulationStageBase, SimulationStageName) == 0x0030);
static_assert(offsetof(FNiagaraVariableDataInterfaceBinding, BoundVariable) == 0x0000);
static_assert(offsetof(UNiagaraSimulationStageGeneric, EnabledBinding) == 0x0040);
static_assert(offsetof(UNiagaraSimulationStageGeneric, IterationSource) == 0x0098);
static_assert(offsetof(UNiagaraSimulationStageGeneric, NumIterationsBinding) == 0x00A0);
static_assert(offsetof(UNiagaraSimulationStageGeneric, ExecuteBehavior) == 0x00F8);
static_assert(offsetof(UNiagaraSimulationStageGeneric, DataInterface) == 0x0100);
static_assert(offsetof(UNiagaraSimulationStageGeneric, ParticleIterationStateBinding) == 0x0128);
static_assert(offsetof(UNiagaraSimulationStageGeneric, ParticleIterationStateRange) == 0x0180);
static_assert(offsetof(UNiagaraSimulationStageGeneric, OverrideGpuDispatchNumThreads) == 0x018C);
static_assert(offsetof(UNiagaraSimulationStageGeneric, DirectDispatchType) == 0x0198);
static_assert(offsetof(UNiagaraSimulationStageGeneric, DirectDispatchElementType) == 0x0199);
static_assert(offsetof(UNiagaraSimulationStageGeneric, ElementCountXBinding) == 0x01A0);
static_assert(offsetof(UNiagaraSimulationStageGeneric, ElementCountYBinding) == 0x01F8);
static_assert(offsetof(UNiagaraSimulationStageGeneric, ElementCountZBinding) == 0x0250);
static_assert(offsetof(UNiagaraSpriteRendererProperties, Material) == 0x00E0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SourceMode) == 0x00E8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialUserParamBinding) == 0x00F0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, Alignment) == 0x0110);
static_assert(offsetof(UNiagaraSpriteRendererProperties, FacingMode) == 0x0111);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PivotInUVSpace) == 0x0118);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SortMode) == 0x012C);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageSize) == 0x0130);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SortPrecision) == 0x0144);
static_assert(offsetof(UNiagaraSpriteRendererProperties, GpuTranslucentLatency) == 0x0145);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PixelCoverageMode) == 0x0146);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PositionBinding) == 0x0168);
static_assert(offsetof(UNiagaraSpriteRendererProperties, ColorBinding) == 0x01C0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, VelocityBinding) == 0x0218);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteRotationBinding) == 0x0270);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteSizeBinding) == 0x02C8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteFacingBinding) == 0x0320);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SpriteAlignmentBinding) == 0x0378);
static_assert(offsetof(UNiagaraSpriteRendererProperties, SubImageIndexBinding) == 0x03D0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterialBinding) == 0x0428);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial1Binding) == 0x0480);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial2Binding) == 0x04D8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, DynamicMaterial3Binding) == 0x0530);
static_assert(offsetof(UNiagaraSpriteRendererProperties, CameraOffsetBinding) == 0x0588);
static_assert(offsetof(UNiagaraSpriteRendererProperties, UVScaleBinding) == 0x05E0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PivotOffsetBinding) == 0x0638);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialRandomBinding) == 0x0690);
static_assert(offsetof(UNiagaraSpriteRendererProperties, CustomSortingBinding) == 0x06E8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, NormalizedAgeBinding) == 0x0740);
static_assert(offsetof(UNiagaraSpriteRendererProperties, RendererVisibilityTagBinding) == 0x0798);
static_assert(offsetof(UNiagaraSpriteRendererProperties, MaterialParameters) == 0x07F0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevPositionBinding) == 0x0840);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevVelocityBinding) == 0x0898);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteRotationBinding) == 0x08F0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteSizeBinding) == 0x0948);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteFacingBinding) == 0x09A0);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevSpriteAlignmentBinding) == 0x09F8);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevCameraOffsetBinding) == 0x0A50);
static_assert(offsetof(UNiagaraSpriteRendererProperties, PrevPivotOffsetBinding) == 0x0AA8);
static_assert(offsetof(FNiagaraSystemScalabilityOverrides, Overrides) == 0x0000);
static_assert(offsetof(FVersionedNiagaraEmitter, Emitter) == 0x0000);
static_assert(offsetof(FVersionedNiagaraEmitter, Version) == 0x0008);
static_assert(offsetof(FNiagaraEmitterHandle, ID) == 0x0000);
static_assert(offsetof(FNiagaraEmitterHandle, IdName) == 0x0010);
static_assert(offsetof(FNiagaraEmitterHandle, Name) == 0x001C);
static_assert(offsetof(FNiagaraEmitterHandle, Instance) == 0x0028);
static_assert(offsetof(FNiagaraEmitterHandle, VersionedInstance) == 0x0030);
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, FloatOffsets) == 0x0000);
static_assert(offsetof(FNiagaraParameterDataSetBindingCollection, Int32Offsets) == 0x0010);
static_assert(offsetof(FNiagaraSystemCompiledData, InstanceParamStore) == 0x0000);
static_assert(offsetof(FNiagaraSystemCompiledData, DataSetCompiledData) == 0x0088);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceParamsDataSetCompiledData) == 0x00D0);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceParamsDataSetCompiledData) == 0x0118);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceGlobalBinding) == 0x0160);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceSystemBinding) == 0x0180);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceOwnerBinding) == 0x01A0);
static_assert(offsetof(FNiagaraSystemCompiledData, SpawnInstanceEmitterBindings) == 0x01C0);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceGlobalBinding) == 0x01D0);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceSystemBinding) == 0x01F0);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceOwnerBinding) == 0x0210);
static_assert(offsetof(FNiagaraSystemCompiledData, UpdateInstanceEmitterBindings) == 0x0230);
static_assert(offsetof(UNiagaraSystem, CustomDepthStencilWriteMask) == 0x0072);
static_assert(offsetof(UNiagaraSystem, EffectType) == 0x0088);
static_assert(offsetof(UNiagaraSystem, ScalabilityOverrides) == 0x0098);
static_assert(offsetof(UNiagaraSystem, SystemScalabilityOverrides) == 0x00A8);
static_assert(offsetof(UNiagaraSystem, EmitterHandles) == 0x00B8);
static_assert(offsetof(UNiagaraSystem, ParameterCollectionOverrides) == 0x00C8);
static_assert(offsetof(UNiagaraSystem, SystemSpawnScript) == 0x00D8);
static_assert(offsetof(UNiagaraSystem, SystemUpdateScript) == 0x00E0);
static_assert(offsetof(UNiagaraSystem, SystemCompiledData) == 0x00F8);
static_assert(offsetof(UNiagaraSystem, ExposedParameters) == 0x0338);
static_assert(offsetof(UNiagaraSystem, FixedBounds) == 0x0410);
static_assert(offsetof(UNiagaraSystem, UserDINamesReadInSystemScripts) == 0x0468);
static_assert(offsetof(UNiagaraSystem, ReferencedDataChannelDefinitions) == 0x0478);
static_assert(offsetof(UVolumeCache, FilePath) == 0x0028);
static_assert(offsetof(UVolumeCache, CacheType) == 0x0038);
static_assert(offsetof(UVolumeCache, Resolution) == 0x003C);
static_assert(offsetof(FNiagaraFunctionSignature, Name) == 0x0000);
static_assert(offsetof(FNiagaraFunctionSignature, Inputs) == 0x0008);
static_assert(offsetof(FNiagaraFunctionSignature, Outputs) == 0x0018);
static_assert(offsetof(FNiagaraFunctionSignature, OwnerName) == 0x0028);
static_assert(offsetof(FNiagaraFunctionSignature, FunctionSpecifiers) == 0x0040);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReset) == 0x0000);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToReInit) == 0x0010);
static_assert(offsetof(FNiagaraSystemUpdateContext, ComponentsToNotifySimDestroy) == 0x0020);
static_assert(offsetof(FNiagaraSystemUpdateContext, SystemSimsToDestroy) == 0x0030);
static_assert(offsetof(FNiagaraSystemUpdateContext, SystemSimsToRecache) == 0x0040);
static_assert(offsetof(FNiagaraVariableInfo, Variable) == 0x0000);
static_assert(offsetof(FNiagaraVariableInfo, Definition) == 0x0020);
static_assert(offsetof(FNiagaraVariableInfo, DataInterface) == 0x0038);
static_assert(offsetof(FNiagaraScriptVariableBinding, Name) == 0x0000);
static_assert(offsetof(FNiagaraCompileDependency, LinkerErrorMessage) == 0x0000);
static_assert(offsetof(FNiagaraCompileDependency, NodeGuid) == 0x0010);
static_assert(offsetof(FNiagaraCompileDependency, PinGuid) == 0x0020);
static_assert(offsetof(FNiagaraCompileDependency, StackGuids) == 0x0030);
static_assert(offsetof(FNiagaraCompileDependency, DependentVariable) == 0x0040);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, Object) == 0x0000);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyKeys) == 0x0010);
static_assert(offsetof(FNiagaraCompileHashVisitorDebugInfo, PropertyValues) == 0x0020);
static_assert(offsetof(FNiagaraStackSection, SectionIdentifier) == 0x0000);
static_assert(offsetof(FNiagaraStackSection, SectionDisplayName) == 0x0008);
static_assert(offsetof(FNiagaraStackSection, Categories) == 0x0020);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartFrame) == 0x0010);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndFrame) == 0x0014);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionStartBehavior) == 0x0018);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEvaluateBehavior) == 0x001C);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, SpawnSectionEndBehavior) == 0x0020);
static_assert(offsetof(FMovieSceneNiagaraSystemTrackImplementation, AgeUpdateMode) == 0x0024);
static_assert(offsetof(FMovieSceneNiagaraParameterSectionTemplate, Parameter) == 0x0020);
static_assert(offsetof(FMovieSceneNiagaraBoolParameterSectionTemplate, BoolChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, RedChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, GreenChannel) == 0x0150);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, BlueChannel) == 0x0260);
static_assert(offsetof(FMovieSceneNiagaraColorParameterSectionTemplate, AlphaChannel) == 0x0370);
static_assert(offsetof(FMovieSceneNiagaraFloatParameterSectionTemplate, FloatChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraIntegerParameterSectionTemplate, IntegerChannel) == 0x0040);
static_assert(offsetof(FMovieSceneNiagaraVectorParameterSectionTemplate, VectorChannels) == 0x0040);
static_assert(offsetof(FBasicParticleData, position) == 0x0000);
static_assert(offsetof(FBasicParticleData, Velocity) == 0x0020);
static_assert(offsetof(FMeshTriCoordinate, BaryCoord) == 0x0004);
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, Positions) == 0x0000);
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, Scales) == 0x0010);
static_assert(offsetof(FNiagaraDataInterfaceSplineLUT, Rotations) == 0x0020);
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, EmitterName) == 0x0000);
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, SimTarget) == 0x0010);
static_assert(offsetof(FNiagaraOutlinerEmitterInstanceData, ExecState) == 0x0014);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ComponentName) == 0x0000);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, LWCTile) == 0x0010);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, Emitters) == 0x0020);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ActualExecutionState) == 0x0030);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, RequestedExecutionState) == 0x0034);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, ScalabilityState) == 0x0038);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, PoolMethod) == 0x0048);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, AverageTime) == 0x004C);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, MaxTime) == 0x0054);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, TickGroup) == 0x005C);
static_assert(offsetof(FNiagaraOutlinerSystemInstanceData, GpuTickStage) == 0x005D);
static_assert(offsetof(FNiagaraOutlinerSystemData, SystemInstances) == 0x0000);
static_assert(offsetof(FNiagaraOutlinerSystemData, AveragePerFrameTime) == 0x0010);
static_assert(offsetof(FNiagaraOutlinerSystemData, MaxPerFrameTime) == 0x0018);
static_assert(offsetof(FNiagaraOutlinerSystemData, AveragePerInstanceTime) == 0x0020);
static_assert(offsetof(FNiagaraOutlinerSystemData, MaxPerInstanceTime) == 0x0028);
static_assert(offsetof(FNiagaraOutlinerWorldData, Systems) == 0x0000);
static_assert(offsetof(FNiagaraOutlinerWorldData, AveragePerFrameTime) == 0x0054);
static_assert(offsetof(FNiagaraOutlinerWorldData, MaxPerFrameTime) == 0x005C);
static_assert(offsetof(FNiagaraOutlinerData, WorldData) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerRequestConnection, SessionId) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerRequestConnection, InstanceId) == 0x0010);
static_assert(offsetof(FNiagaraDebuggerAcceptConnection, SessionId) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerAcceptConnection, InstanceId) == 0x0010);
static_assert(offsetof(FNiagaraDebuggerConnectionClosed, SessionId) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerConnectionClosed, InstanceId) == 0x0010);
static_assert(offsetof(FNiagaraDebuggerExecuteConsoleCommand, Command) == 0x0000);
static_assert(offsetof(FNiagaraDebuggerOutlinerUpdate, OutlinerData) == 0x0000);
static_assert(offsetof(FNiagaraSimpleClientInfo, Systems) == 0x0000);
static_assert(offsetof(FNiagaraSimpleClientInfo, Actors) == 0x0010);
static_assert(offsetof(FNiagaraSimpleClientInfo, Components) == 0x0020);
static_assert(offsetof(FNiagaraSimpleClientInfo, Emitters) == 0x0030);
static_assert(offsetof(FNiagaraSystemSimCacheCaptureRequest, ComponentName) == 0x0000);
static_assert(offsetof(FNiagaraSystemSimCacheCaptureReply, ComponentName) == 0x0000);
static_assert(offsetof(FNiagaraSystemSimCacheCaptureReply, SimCacheData) == 0x0008);
static_assert(offsetof(FNiagaraGraphViewSettings, Location) == 0x0000);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionPos) == 0x0000);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionNormal) == 0x0018);
static_assert(offsetof(FNiagaraCollisionEventPayload, CollisionVelocity) == 0x0030);
static_assert(offsetof(FNiagaraParameters, Parameters) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetConflictEntry, ProfileName) == 0x0000);
static_assert(offsetof(FNiagaraPlatformSetConflictInfo, Conflicts) == 0x0008);
static_assert(offsetof(FNiagaraScalabilityManager, EffectType) == 0x0000);
static_assert(offsetof(FNiagaraScalabilityManager, ManagedComponents) == 0x0008);
static_assert(offsetof(FNiagaraModuleDependency, ID) == 0x0000);
static_assert(offsetof(FNiagaraModuleDependency, Type) == 0x0008);
static_assert(offsetof(FNiagaraModuleDependency, ScriptConstraint) == 0x0009);
static_assert(offsetof(FNiagaraModuleDependency, RequiredVersion) == 0x0010);
static_assert(offsetof(FNiagaraModuleDependency, Description) == 0x0028);
static_assert(offsetof(FNiagaraScriptHighlight, Color) == 0x0000);
static_assert(offsetof(FNiagaraScriptHighlight, DisplayName) == 0x0010);
static_assert(offsetof(FNiagaraEmitterCompiledData, SpawnAttributes) == 0x0000);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnIntervalVar) == 0x0010);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInterpSpawnStartDTVar) == 0x0030);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterSpawnGroupVar) == 0x0050);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterAgeVar) == 0x0070);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterRandomSeedVar) == 0x0090);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterInstanceSeedVar) == 0x00B0);
static_assert(offsetof(FNiagaraEmitterCompiledData, EmitterTotalSpawnedParticlesVar) == 0x00D0);
static_assert(offsetof(FNiagaraEmitterCompiledData, DataSetCompiledData) == 0x00F0);
static_assert(offsetof(FNiagaraSystemCompileRequest, RootObjects) == 0x0008);
static_assert(offsetof(FNiagaraMatrix, Row0) == 0x0000);
static_assert(offsetof(FNiagaraMatrix, Row1) == 0x0010);
static_assert(offsetof(FNiagaraMatrix, Row2) == 0x0020);
static_assert(offsetof(FNiagaraMatrix, Row3) == 0x0030);
static_assert(offsetof(FNiagaraInputConditionMetadata, InputName) == 0x0000);
static_assert(offsetof(FNiagaraInputConditionMetadata, TargetValues) == 0x0008);
static_assert(offsetof(FNiagaraEnumParameterMetaData, OverrideName) == 0x0000);
static_assert(offsetof(FNiagaraEnumParameterMetaData, IconOverride) == 0x0008);
static_assert(offsetof(FNiagaraEnumParameterMetaData, ColorOverride) == 0x0014);
static_assert(offsetof(FNiagaraBoolParameterMetaData, DisplayMode) == 0x0000);
static_assert(offsetof(FNiagaraBoolParameterMetaData, OverrideNameTrue) == 0x0004);
static_assert(offsetof(FNiagaraBoolParameterMetaData, OverrideNameFalse) == 0x000C);
static_assert(offsetof(FNiagaraBoolParameterMetaData, IconOverrideTrue) == 0x0018);
static_assert(offsetof(FNiagaraBoolParameterMetaData, IconOverrideFalse) == 0x0020);
static_assert(offsetof(FNiagaraVariableMetaData, Description) == 0x0000);
static_assert(offsetof(FNiagaraVariableMetaData, CategoryName) == 0x0018);
static_assert(offsetof(FNiagaraVariableMetaData, InlineParameterColorOverride) == 0x003C);
static_assert(offsetof(FNiagaraVariableMetaData, InlineParameterEnumOverrides) == 0x0050);
static_assert(offsetof(FNiagaraVariableMetaData, InlineParameterBoolOverride) == 0x0068);
static_assert(offsetof(FNiagaraVariableMetaData, EditCondition) == 0x0098);
static_assert(offsetof(FNiagaraVariableMetaData, VisibleCondition) == 0x00B0);
static_assert(offsetof(FNiagaraVariableMetaData, PropertyMetaData) == 0x00C8);
static_assert(offsetof(FNiagaraVariableMetaData, ParentAttribute) == 0x0118);
static_assert(offsetof(FNiagaraVariableMetaData, AlternateAliases) == 0x0120);
static_assert(offsetof(FNiagaraVariableMetaData, VariableGuid) == 0x0130);
static_assert(offsetof(FNiagaraVariant, Object) == 0x0000);
static_assert(offsetof(FNiagaraVariant, DataInterface) == 0x0008);
static_assert(offsetof(FNiagaraVariant, Bytes) == 0x0010);
static_assert(offsetof(FNiagaraVariant, CurrentMode) == 0x0020);
