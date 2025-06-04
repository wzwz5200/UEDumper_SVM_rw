
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

/// Enum /Script/ComputeFramework.EComputeKernelFlags
/// Size: 0x01 (1 bytes)
enum class EComputeKernelFlags : uint8_t
{
	EComputeKernelFlags__IsDefaultKernel                                             = 1,
	EComputeKernelFlags__IsolatedMemoryWrites                                        = 2
};

/// Enum /Script/ComputeFramework.EShaderFundamentalType
/// Size: 0x01 (1 bytes)
enum class EShaderFundamentalType : uint8_t
{
	EShaderFundamentalType__Bool                                                     = 0,
	EShaderFundamentalType__Int                                                      = 1,
	EShaderFundamentalType__Uint                                                     = 2,
	EShaderFundamentalType__Float                                                    = 3,
	EShaderFundamentalType__Struct                                                   = 4,
	EShaderFundamentalType__None                                                     = 255
};

/// Enum /Script/ComputeFramework.EShaderFundamentalDimensionType
/// Size: 0x01 (1 bytes)
enum class EShaderFundamentalDimensionType : uint8_t
{
	EShaderFundamentalDimensionType__Scalar                                          = 0,
	EShaderFundamentalDimensionType__Vector                                          = 1,
	EShaderFundamentalDimensionType__Matrix                                          = 2
};

/// Enum /Script/ComputeFramework.EShaderParamBindingType
/// Size: 0x01 (1 bytes)
enum class EShaderParamBindingType : uint8_t
{
	EShaderParamBindingType__None                                                    = 0,
	EShaderParamBindingType__ConstantParameter                                       = 1,
	EShaderParamBindingType__ReadOnlyResource                                        = 2,
	EShaderParamBindingType__ReadWriteResource                                       = 3
};

/// Enum /Script/ComputeFramework.EShaderResourceType
/// Size: 0x01 (1 bytes)
enum class EShaderResourceType : uint8_t
{
	EShaderResourceType__None                                                        = 0,
	EShaderResourceType__Texture1D                                                   = 1,
	EShaderResourceType__Texture2D                                                   = 2,
	EShaderResourceType__Texture3D                                                   = 3,
	EShaderResourceType__TextureCube                                                 = 4,
	EShaderResourceType__Buffer                                                      = 5,
	EShaderResourceType__StructuredBuffer                                            = 6,
	EShaderResourceType__ByteAddressBuffer                                           = 7
};

/// Class /Script/ComputeFramework.ComputeDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UComputeDataInterface : public UObject
{ 
public:
};

/// Class /Script/ComputeFramework.ComputeDataProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UComputeDataProvider : public UObject
{ 
public:
};

/// Struct /Script/ComputeFramework.ComputeKernelPermutationBool
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FComputeKernelPermutationBool
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	bool                                               Value;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/ComputeFramework.ComputeKernelPermutationSet
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FComputeKernelPermutationSet
{ 
	TArray<FComputeKernelPermutationBool>              BooleanOptions;                                             // 0x0000   (0x0010)  
};

/// Struct /Script/ComputeFramework.ComputeKernelDefinition
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FComputeKernelDefinition
{ 
	FString                                            Symbol;                                                     // 0x0000   (0x0010)  
	FString                                            Define;                                                     // 0x0010   (0x0010)  
};

/// Struct /Script/ComputeFramework.ComputeKernelDefinitionSet
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FComputeKernelDefinitionSet
{ 
	TArray<FComputeKernelDefinition>                   Defines;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/ComputeFramework.ShaderValueTypeHandle
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 8 MaxSize: 0x0008
struct FShaderValueTypeHandle
{ 
	unsigned char                                      UnknownData00_2[0x8];                                       // 0x0000   (0x0008)  MISSED
};

/// Struct /Script/ComputeFramework.ShaderParamTypeDefinition
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FShaderParamTypeDefinition
{ 
	FString                                            TypeDeclaration;                                            // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
	FShaderValueTypeHandle                             ValueType;                                                  // 0x0020   (0x0008)  
	uint16_t                                           ArrayElementCount;                                          // 0x0028   (0x0002)  
	EShaderParamBindingType                            BindingType;                                                // 0x002A   (0x0001)  
	EShaderResourceType                                ResourceType;                                               // 0x002B   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/ComputeFramework.ShaderFunctionDefinition
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FShaderFunctionDefinition
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	TArray<FShaderParamTypeDefinition>                 ParamTypes;                                                 // 0x0010   (0x0010)  
	bool                                               bHasReturnType;                                             // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0021   (0x0007)  MISSED
};

/// Class /Script/ComputeFramework.ComputeKernelSource
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UComputeKernelSource : public UObject
{ 
public:
	FString                                            EntryPoint;                                                 // 0x0028   (0x0010)  
	FIntVector                                         GroupSize;                                                  // 0x0038   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0044   (0x0004)  MISSED
	FComputeKernelPermutationSet                       PermutationSet;                                             // 0x0048   (0x0010)  
	FComputeKernelDefinitionSet                        DefinitionsSet;                                             // 0x0058   (0x0010)  
	TArray<class UComputeSource*>                      AdditionalSources;                                          // 0x0068   (0x0010)  
	TArray<FShaderFunctionDefinition>                  ExternalInputs;                                             // 0x0078   (0x0010)  
	TArray<FShaderFunctionDefinition>                  ExternalOutputs;                                            // 0x0088   (0x0010)  
};

/// Struct /Script/ComputeFramework.ComputeGraphEdge
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FComputeGraphEdge
{ 
	int32_t                                            KernelIndex;                                                // 0x0000   (0x0004)  
	int32_t                                            KernelBindingIndex;                                         // 0x0004   (0x0004)  
	int32_t                                            DataInterfaceIndex;                                         // 0x0008   (0x0004)  
	int32_t                                            DataInterfaceBindingIndex;                                  // 0x000C   (0x0004)  
	bool                                               bKernelInput;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0011   (0x0007)  MISSED
	FString                                            BindingFunctionNameOverride;                                // 0x0018   (0x0010)  
	FString                                            BindingFunctionNamespace;                                   // 0x0028   (0x0010)  
};

/// Class /Script/ComputeFramework.ComputeGraph
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UComputeGraph : public UObject
{ 
public:
	TArray<class UComputeKernel*>                      KernelInvocations;                                          // 0x0028   (0x0010)  
	TArray<class UComputeDataInterface*>               DataInterfaces;                                             // 0x0038   (0x0010)  
	TArray<FComputeGraphEdge>                          GraphEdges;                                                 // 0x0048   (0x0010)  
	TArray<class UClass*>                              Bindings;                                                   // 0x0058   (0x0010)  
	TArray<int32_t>                                    DataInterfaceToBinding;                                     // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0078   (0x0018)  MISSED
};

/// Class /Script/ComputeFramework.ComputeSource
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UComputeSource : public UObject
{ 
public:
	TArray<class UComputeSource*>                      AdditionalSources;                                          // 0x0028   (0x0010)  
};

/// Struct /Script/ComputeFramework.ComputeGraphInstance
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FComputeGraphInstance
{ 
	TArray<class UComputeDataProvider*>                DataProviders;                                              // 0x0000   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0010   (0x0008)  MISSED
};

/// Class /Script/ComputeFramework.ComputeGraphComponent
/// Size: 0x00C0 (192 bytes) (0x0000A0 - 0x0000C0) align 8 MaxSize: 0x00C0
class UComputeGraphComponent : public UActorComponent
{ 
public:
	class UComputeGraph*                               ComputeGraph;                                               // 0x00A0   (0x0008)  
	FComputeGraphInstance                              ComputeGraphInstance;                                       // 0x00A8   (0x0018)  


	/// Functions
	// Function /Script/ComputeFramework.ComputeGraphComponent.QueueExecute
	// void QueueExecute();                                                                                                     // [0x15d6420] Final|Native|Public|BlueprintCallable 
	// Function /Script/ComputeFramework.ComputeGraphComponent.DestroyDataProviders
	// void DestroyDataProviders();                                                                                             // [0x15d63f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ComputeFramework.ComputeGraphComponent.CreateDataProviders
	// void CreateDataProviders(int32_t InBindingIndex, class UObject* InBindingObject);                                        // [0x15d6310] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ComputeFramework.ComputeKernel
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UComputeKernel : public UObject
{ 
public:
	class UComputeKernelSource*                        KernelSource;                                               // 0x0028   (0x0008)  
	int32_t                                            KernelFlags;                                                // 0x0030   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/ComputeFramework.ComputeKernelFromText
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UComputeKernelFromText : public UComputeKernelSource
{ 
public:
	FFilePath                                          SourceFile;                                                 // 0x0098   (0x0010)  
};

/// Class /Script/ComputeFramework.ComputeSourceFromText
/// Size: 0x0048 (72 bytes) (0x000038 - 0x000048) align 8 MaxSize: 0x0048
class UComputeSourceFromText : public UComputeSource
{ 
public:
	FFilePath                                          SourceFile;                                                 // 0x0038   (0x0010)  
};

/// Struct /Script/ComputeFramework.ComputeKernelPermutationVector
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FComputeKernelPermutationVector
{ 
	TMap<FString, uint32_t>                            Permutations;                                               // 0x0000   (0x0050)  
	uint32_t                                           BitCount;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Struct /Script/ComputeFramework.ShaderValueType
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FShaderValueType
{ 
	EShaderFundamentalType                             Type;                                                       // 0x0000   (0x0001)  
	EShaderFundamentalDimensionType                    DimensionType;                                              // 0x0001   (0x0001)  
	unsigned char                                      UnknownData00_6[0x2];                                       // 0x0002   (0x0002)  MISSED
	FName                                              Name;                                                       // 0x0004   (0x0008)  
	bool                                               bIsDynamicArray;                                            // 0x000C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x13];                                      // 0x000D   (0x0013)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UComputeDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UComputeDataProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FComputeKernelPermutationBool) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FComputeKernelPermutationSet) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FComputeKernelDefinition) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FComputeKernelDefinitionSet) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FShaderValueTypeHandle) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FShaderParamTypeDefinition) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FShaderFunctionDefinition) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UComputeKernelSource) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(FComputeGraphEdge) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UComputeGraph) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UComputeSource) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FComputeGraphInstance) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UComputeGraphComponent) == 0x00C0); // 192 bytes (0x0000A0 - 0x0000C0)
static_assert(sizeof(UComputeKernel) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UComputeKernelFromText) == 0x00A8); // 168 bytes (0x000098 - 0x0000A8)
static_assert(sizeof(UComputeSourceFromText) == 0x0048); // 72 bytes (0x000038 - 0x000048)
static_assert(sizeof(FComputeKernelPermutationVector) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FShaderValueType) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FComputeKernelPermutationBool, Name) == 0x0000);
static_assert(offsetof(FComputeKernelPermutationSet, BooleanOptions) == 0x0000);
static_assert(offsetof(FComputeKernelDefinition, Symbol) == 0x0000);
static_assert(offsetof(FComputeKernelDefinition, Define) == 0x0010);
static_assert(offsetof(FComputeKernelDefinitionSet, Defines) == 0x0000);
static_assert(offsetof(FShaderParamTypeDefinition, TypeDeclaration) == 0x0000);
static_assert(offsetof(FShaderParamTypeDefinition, Name) == 0x0010);
static_assert(offsetof(FShaderParamTypeDefinition, ValueType) == 0x0020);
static_assert(offsetof(FShaderParamTypeDefinition, BindingType) == 0x002A);
static_assert(offsetof(FShaderParamTypeDefinition, ResourceType) == 0x002B);
static_assert(offsetof(FShaderFunctionDefinition, Name) == 0x0000);
static_assert(offsetof(FShaderFunctionDefinition, ParamTypes) == 0x0010);
static_assert(offsetof(UComputeKernelSource, EntryPoint) == 0x0028);
static_assert(offsetof(UComputeKernelSource, GroupSize) == 0x0038);
static_assert(offsetof(UComputeKernelSource, PermutationSet) == 0x0048);
static_assert(offsetof(UComputeKernelSource, DefinitionsSet) == 0x0058);
static_assert(offsetof(UComputeKernelSource, AdditionalSources) == 0x0068);
static_assert(offsetof(UComputeKernelSource, ExternalInputs) == 0x0078);
static_assert(offsetof(UComputeKernelSource, ExternalOutputs) == 0x0088);
static_assert(offsetof(FComputeGraphEdge, BindingFunctionNameOverride) == 0x0018);
static_assert(offsetof(FComputeGraphEdge, BindingFunctionNamespace) == 0x0028);
static_assert(offsetof(UComputeGraph, KernelInvocations) == 0x0028);
static_assert(offsetof(UComputeGraph, DataInterfaces) == 0x0038);
static_assert(offsetof(UComputeGraph, GraphEdges) == 0x0048);
static_assert(offsetof(UComputeGraph, Bindings) == 0x0058);
static_assert(offsetof(UComputeGraph, DataInterfaceToBinding) == 0x0068);
static_assert(offsetof(UComputeSource, AdditionalSources) == 0x0028);
static_assert(offsetof(FComputeGraphInstance, DataProviders) == 0x0000);
static_assert(offsetof(UComputeGraphComponent, ComputeGraph) == 0x00A0);
static_assert(offsetof(UComputeGraphComponent, ComputeGraphInstance) == 0x00A8);
static_assert(offsetof(UComputeKernel, KernelSource) == 0x0028);
static_assert(offsetof(UComputeKernelFromText, SourceFile) == 0x0098);
static_assert(offsetof(UComputeSourceFromText, SourceFile) == 0x0038);
static_assert(offsetof(FComputeKernelPermutationVector, Permutations) == 0x0000);
static_assert(offsetof(FShaderValueType, Type) == 0x0000);
static_assert(offsetof(FShaderValueType, DimensionType) == 0x0001);
static_assert(offsetof(FShaderValueType, Name) == 0x0004);
