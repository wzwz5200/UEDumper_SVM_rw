
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: NiagaraCore

#pragma pack(push, 0x1)

/// Enum /Script/NiagaraShader.ENiagaraMipMapGenerationType
/// Size: 0x01 (1 bytes)
enum class ENiagaraMipMapGenerationType : uint8_t
{
	ENiagaraMipMapGenerationType__Unfiltered                                         = 0,
	ENiagaraMipMapGenerationType__Linear                                             = 1,
	ENiagaraMipMapGenerationType__Blur1                                              = 2,
	ENiagaraMipMapGenerationType__Blur2                                              = 3,
	ENiagaraMipMapGenerationType__Blur3                                              = 4,
	ENiagaraMipMapGenerationType__Blur4                                              = 5
};

/// Enum /Script/NiagaraShader.ENiagaraGpuDispatchType
/// Size: 0x01 (1 bytes)
enum class ENiagaraGpuDispatchType : uint8_t
{
	ENiagaraGpuDispatchType__OneD                                                    = 0,
	ENiagaraGpuDispatchType__TwoD                                                    = 1,
	ENiagaraGpuDispatchType__ThreeD                                                  = 2,
	ENiagaraGpuDispatchType__Custom                                                  = 3
};

/// Enum /Script/NiagaraShader.ENiagaraDirectDispatchElementType
/// Size: 0x01 (1 bytes)
enum class ENiagaraDirectDispatchElementType : uint8_t
{
	ENiagaraDirectDispatchElementType__NumThreads                                    = 0,
	ENiagaraDirectDispatchElementType__NumThreadsNoClipping                          = 1,
	ENiagaraDirectDispatchElementType__NumGroups                                     = 2
};

/// Enum /Script/NiagaraShader.ENiagaraSimStageExecuteBehavior
/// Size: 0x01 (1 bytes)
enum class ENiagaraSimStageExecuteBehavior : uint8_t
{
	ENiagaraSimStageExecuteBehavior__Always                                          = 0,
	ENiagaraSimStageExecuteBehavior__OnSimulationReset                               = 1,
	ENiagaraSimStageExecuteBehavior__NotOnSimulationReset                            = 2
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
/// Size: 0x01 (1 bytes)
enum class FNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log                                                = 0,
	FNiagaraCompileEventSeverity__Display                                            = 1,
	FNiagaraCompileEventSeverity__Warning                                            = 2,
	FNiagaraCompileEventSeverity__Error                                              = 3
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSource
/// Size: 0x01 (1 bytes)
enum class FNiagaraCompileEventSource : uint8_t
{
	FNiagaraCompileEventSource__Unset                                                = 0,
	FNiagaraCompileEventSource__ScriptDependency                                     = 1
};

/// Class /Script/NiagaraShader.NiagaraScriptBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UNiagaraScriptBase : public UObject
{ 
public:
};

/// Struct /Script/NiagaraShader.SimulationStageMetaData
/// Size: 0x0098 (152 bytes) (0x000000 - 0x000098) align 8 MaxSize: 0x0098
struct FSimulationStageMetaData
{ 
	FName                                              SimulationStageName;                                        // 0x0000   (0x0008)  
	FName                                              EnabledBinding;                                             // 0x0008   (0x0008)  
	FName                                              ElementCountXBinding;                                       // 0x0010   (0x0008)  
	FName                                              ElementCountYBinding;                                       // 0x0018   (0x0008)  
	FName                                              ElementCountZBinding;                                       // 0x0020   (0x0008)  
	ENiagaraIterationSource                            IterationSourceType;                                        // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FName                                              IterationDataInterface;                                     // 0x002C   (0x0008)  
	FName                                              IterationDirectBinding;                                     // 0x0034   (0x0008)  
	ENiagaraSimStageExecuteBehavior                    ExecuteBehavior;                                            // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	bool                                               bWritesParticles : 1;                                       // 0x0040:0 (0x0001)  
	bool                                               bPartialParticleUpdate : 1;                                 // 0x0040:1 (0x0001)  
	bool                                               bParticleIterationStateEnabled : 1;                         // 0x0040:2 (0x0001)  
	bool                                               bGpuIndirectDispatch : 1;                                   // 0x0040:3 (0x0001)  
	unsigned char                                      UnknownData02_5[0x3];                                       // 0x0041   (0x0003)  MISSED
	FName                                              ParticleIterationStateBinding;                              // 0x0044   (0x0008)  
	unsigned char                                      UnknownData03_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FIntPoint                                          ParticleIterationStateRange;                                // 0x0050   (0x0008)  
	TArray<FName>                                      OutputDestinations;                                         // 0x0058   (0x0010)  
	TArray<FName>                                      InputDataInterfaces;                                        // 0x0068   (0x0010)  
	int32_t                                            NumIterations;                                              // 0x0078   (0x0004)  
	FName                                              NumIterationsBinding;                                       // 0x007C   (0x0008)  
	ENiagaraGpuDispatchType                            GpuDispatchType;                                            // 0x0084   (0x0001)  
	ENiagaraDirectDispatchElementType                  GpuDirectDispatchElementType;                               // 0x0085   (0x0001)  
	unsigned char                                      UnknownData04_6[0x2];                                       // 0x0086   (0x0002)  MISSED
	FIntVector                                         GpuDispatchNumThreads;                                      // 0x0088   (0x000C)  
	unsigned char                                      UnknownData05_7[0x4];                                       // 0x0094   (0x0004)  MISSED
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FNiagaraDataInterfaceGeneratedFunction
{ 
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0000   (0x0028)  MISSED
	TArray<FNiagaraVariableCommonReference>            VariadicInputs;                                             // 0x0028   (0x0010)  
	TArray<FNiagaraVariableCommonReference>            VariadicOutputs;                                            // 0x0038   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FNiagaraDataInterfaceGPUParamInfo
{ 
	FString                                            DataInterfaceHLSLSymbol;                                    // 0x0000   (0x0010)  
	FString                                            DIClassName;                                                // 0x0010   (0x0010)  
	uint32_t                                           ShaderParametersOffset;                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	TArray<FNiagaraDataInterfaceGeneratedFunction>     GeneratedFunctions;                                         // 0x0028   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraShaderScriptExternalConstant
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FNiagaraShaderScriptExternalConstant
{ 
	FName                                              Type;                                                       // 0x0000   (0x0008)  
	FString                                            Name;                                                       // 0x0008   (0x0010)  
};

/// Struct /Script/NiagaraShader.NiagaraShaderScriptParametersMetadata
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FNiagaraShaderScriptParametersMetadata
{ 
	TArray<FNiagaraDataInterfaceGPUParamInfo>          DataInterfaceParamInfo;                                     // 0x0000   (0x0010)  
	TArray<FString>                                    LooseMetadataNames;                                         // 0x0010   (0x0010)  
	bool                                               bExternalConstantsInterpolated;                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0021   (0x0007)  MISSED
	TArray<FNiagaraShaderScriptExternalConstant>       ExternalConstants;                                          // 0x0028   (0x0010)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0038   (0x0020)  MISSED
};

/// Struct /Script/NiagaraShader.NiagaraCompileEvent
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FNiagaraCompileEvent
{ 
	FNiagaraCompileEventSeverity                       Severity;                                                   // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            Message;                                                    // 0x0008   (0x0010)  
	FString                                            ShortDescription;                                           // 0x0018   (0x0010)  
	bool                                               bDismissable;                                               // 0x0028   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	FGuid                                              NodeGuid;                                                   // 0x002C   (0x0010)  
	FGuid                                              PinGuid;                                                    // 0x003C   (0x0010)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	TArray<FGuid>                                      StackGuids;                                                 // 0x0050   (0x0010)  
	FNiagaraCompileEventSource                         Source;                                                     // 0x0060   (0x0001)  
	unsigned char                                      UnknownData03_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UNiagaraScriptBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSimulationStageMetaData) == 0x0098); // 152 bytes (0x000000 - 0x000098)
static_assert(sizeof(FNiagaraDataInterfaceGeneratedFunction) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FNiagaraDataInterfaceGPUParamInfo) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FNiagaraShaderScriptExternalConstant) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FNiagaraShaderScriptParametersMetadata) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FNiagaraCompileEvent) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(offsetof(FSimulationStageMetaData, SimulationStageName) == 0x0000);
static_assert(offsetof(FSimulationStageMetaData, EnabledBinding) == 0x0008);
static_assert(offsetof(FSimulationStageMetaData, ElementCountXBinding) == 0x0010);
static_assert(offsetof(FSimulationStageMetaData, ElementCountYBinding) == 0x0018);
static_assert(offsetof(FSimulationStageMetaData, ElementCountZBinding) == 0x0020);
static_assert(offsetof(FSimulationStageMetaData, IterationSourceType) == 0x0028);
static_assert(offsetof(FSimulationStageMetaData, IterationDataInterface) == 0x002C);
static_assert(offsetof(FSimulationStageMetaData, IterationDirectBinding) == 0x0034);
static_assert(offsetof(FSimulationStageMetaData, ExecuteBehavior) == 0x003C);
static_assert(offsetof(FSimulationStageMetaData, ParticleIterationStateBinding) == 0x0044);
static_assert(offsetof(FSimulationStageMetaData, ParticleIterationStateRange) == 0x0050);
static_assert(offsetof(FSimulationStageMetaData, OutputDestinations) == 0x0058);
static_assert(offsetof(FSimulationStageMetaData, InputDataInterfaces) == 0x0068);
static_assert(offsetof(FSimulationStageMetaData, NumIterationsBinding) == 0x007C);
static_assert(offsetof(FSimulationStageMetaData, GpuDispatchType) == 0x0084);
static_assert(offsetof(FSimulationStageMetaData, GpuDirectDispatchElementType) == 0x0085);
static_assert(offsetof(FSimulationStageMetaData, GpuDispatchNumThreads) == 0x0088);
static_assert(offsetof(FNiagaraDataInterfaceGeneratedFunction, VariadicInputs) == 0x0028);
static_assert(offsetof(FNiagaraDataInterfaceGeneratedFunction, VariadicOutputs) == 0x0038);
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DataInterfaceHLSLSymbol) == 0x0000);
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, DIClassName) == 0x0010);
static_assert(offsetof(FNiagaraDataInterfaceGPUParamInfo, GeneratedFunctions) == 0x0028);
static_assert(offsetof(FNiagaraShaderScriptExternalConstant, Type) == 0x0000);
static_assert(offsetof(FNiagaraShaderScriptExternalConstant, Name) == 0x0008);
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, DataInterfaceParamInfo) == 0x0000);
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, LooseMetadataNames) == 0x0010);
static_assert(offsetof(FNiagaraShaderScriptParametersMetadata, ExternalConstants) == 0x0028);
static_assert(offsetof(FNiagaraCompileEvent, Severity) == 0x0000);
static_assert(offsetof(FNiagaraCompileEvent, Message) == 0x0008);
static_assert(offsetof(FNiagaraCompileEvent, ShortDescription) == 0x0018);
static_assert(offsetof(FNiagaraCompileEvent, NodeGuid) == 0x002C);
static_assert(offsetof(FNiagaraCompileEvent, PinGuid) == 0x003C);
static_assert(offsetof(FNiagaraCompileEvent, StackGuids) == 0x0050);
static_assert(offsetof(FNiagaraCompileEvent, Source) == 0x0060);
