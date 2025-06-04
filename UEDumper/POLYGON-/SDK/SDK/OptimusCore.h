
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: ComputeFramework
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/OptimusCore.EOptimusDiagnosticLevel
/// Size: 0x01 (1 bytes)
enum class EOptimusDiagnosticLevel : uint8_t
{
	EOptimusDiagnosticLevel__None                                                    = 0,
	EOptimusDiagnosticLevel__Info                                                    = 1,
	EOptimusDiagnosticLevel__Warning                                                 = 2,
	EOptimusDiagnosticLevel__Error                                                   = 3
};

/// Enum /Script/OptimusCore.EOptimusBufferWriteType
/// Size: 0x01 (1 bytes)
enum class EOptimusBufferWriteType : uint8_t
{
	EOptimusBufferWriteType__Write                                                   = 0,
	EOptimusBufferWriteType__WriteAtomicAdd                                          = 1,
	EOptimusBufferWriteType__WriteAtomicMin                                          = 2,
	EOptimusBufferWriteType__WriteAtomicMax                                          = 3,
	EOptimusBufferWriteType__Count                                                   = 4
};

/// Enum /Script/OptimusCore.EOptimusSkinnedMeshExecDomain
/// Size: 0x01 (1 bytes)
enum class EOptimusSkinnedMeshExecDomain : uint8_t
{
	EOptimusSkinnedMeshExecDomain__None                                              = 0,
	EOptimusSkinnedMeshExecDomain__Vertex                                            = 1,
	EOptimusSkinnedMeshExecDomain__Triangle                                          = 2
};

/// Enum /Script/OptimusCore.EOptimusTerminalType
/// Size: 0x04 (4 bytes)
enum class EOptimusTerminalType : uint32_t
{
	EOptimusTerminalType__Unknown                                                    = 0,
	EOptimusTerminalType__Entry                                                      = 1,
	EOptimusTerminalType__Return                                                     = 2
};

/// Enum /Script/OptimusCore.EOptimusDataDomainType
/// Size: 0x04 (4 bytes)
enum class EOptimusDataDomainType : uint32_t
{
	EOptimusDataDomainType__Dimensional                                              = 0,
	EOptimusDataDomainType__Expression                                               = 1
};

/// Enum /Script/OptimusCore.EOptimusDataTypeUsageFlags
/// Size: 0x01 (1 bytes)
enum class EOptimusDataTypeUsageFlags : uint8_t
{
	EOptimusDataTypeUsageFlags__None                                                 = 0,
	EOptimusDataTypeUsageFlags__Resource                                             = 1,
	EOptimusDataTypeUsageFlags__Variable                                             = 2,
	EOptimusDataTypeUsageFlags__AnimAttributes                                       = 4
};

/// Enum /Script/OptimusCore.EOptimusDataTypeFlags
/// Size: 0x01 (1 bytes)
enum class EOptimusDataTypeFlags : uint8_t
{
	EOptimusDataTypeFlags__None                                                      = 0,
	EOptimusDataTypeFlags__IsStructType                                              = 1,
	EOptimusDataTypeFlags__ShowElements                                              = 2
};

/// Enum /Script/OptimusCore.EOptimusNodeGraphType
/// Size: 0x04 (4 bytes)
enum class EOptimusNodeGraphType : uint32_t
{
	EOptimusNodeGraphType__Setup                                                     = 0,
	EOptimusNodeGraphType__Update                                                    = 1,
	EOptimusNodeGraphType__ExternalTrigger                                           = 2,
	EOptimusNodeGraphType__Function                                                  = 3,
	EOptimusNodeGraphType__SubGraph                                                  = 4,
	EOptimusNodeGraphType__Transient                                                 = 5
};

/// Enum /Script/OptimusCore.EOptimusNodePinStorageType
/// Size: 0x01 (1 bytes)
enum class EOptimusNodePinStorageType : uint8_t
{
	EOptimusNodePinStorageType__Value                                                = 0,
	EOptimusNodePinStorageType__Resource                                             = 1
};

/// Enum /Script/OptimusCore.EOptimusNodePinDirection
/// Size: 0x01 (1 bytes)
enum class EOptimusNodePinDirection : uint8_t
{
	EOptimusNodePinDirection__Unknown                                                = 0,
	EOptimusNodePinDirection__Input                                                  = 1,
	EOptimusNodePinDirection__Output                                                 = 2
};

/// Class /Script/OptimusCore.OptimusComputeDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusComputeDataInterface : public UComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusComponentSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusComponentSource : public UObject
{ 
public:
};

/// Class /Script/OptimusCore.OptimusComponentBindingProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusComponentBindingProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusComputeKernelProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusComputeKernelProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusDataInterfaceProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusDataInterfaceProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusExecutionDomainProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusExecutionDomainProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusGeneratedClassDefiner
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusGeneratedClassDefiner : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNodeAdderPinProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusNodeAdderPinProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNodeFunctionLibraryOwner
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusNodeFunctionLibraryOwner : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNodeGraphCollectionOwner
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusNodeGraphCollectionOwner : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNodePinRouter
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusNodePinRouter : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusParameterBindingProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusParameterBindingProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusPathResolver
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusPathResolver : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusShaderTextProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusShaderTextProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusValueProvider
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusValueProvider : public UInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusKernelSource
/// Size: 0x00A8 (168 bytes) (0x000098 - 0x0000A8) align 8 MaxSize: 0x00A8
class UOptimusKernelSource : public UComputeKernelSource
{ 
public:
	FString                                            Source;                                                     // 0x0098   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusSceneComponentSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusSceneComponentSource : public UOptimusComponentSource
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshComponentSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusSkinnedMeshComponentSource : public UOptimusComponentSource
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSkeletalMeshComponentSource
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusSkeletalMeshComponentSource : public UOptimusSkinnedMeshComponentSource
{ 
public:
};

/// Struct /Script/OptimusCore.OptimusDataTypeRef
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FOptimusDataTypeRef
{ 
	FName                                              TypeName;                                                   // 0x0000   (0x0008)  
	TWeakObjectPtr<class UObject*>                     TypeObject;                                                 // 0x0008   (0x0008)  
};

/// Struct /Script/OptimusCore.OptimusAnimAttributeDescription
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FOptimusAnimAttributeDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FName                                              BoneName;                                                   // 0x0010   (0x0008)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0018   (0x0010)  
	class UOptimusValueContainer*                      DefaultValue;                                               // 0x0028   (0x0008)  
	FString                                            HlslId;                                                     // 0x0030   (0x0010)  
	FName                                              PinName;                                                    // 0x0040   (0x0008)  
};

/// Struct /Script/OptimusCore.OptimusAnimAttributeArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FOptimusAnimAttributeArray
{ 
	TArray<FOptimusAnimAttributeDescription>           InnerArray;                                                 // 0x0000   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusAnimAttributeDataInterface
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOptimusAnimAttributeDataInterface : public UOptimusComputeDataInterface
{ 
public:
	FOptimusAnimAttributeArray                         AttributeArray;                                             // 0x0028   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusAnimAttributeDataProvider
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UOptimusAnimAttributeDataProvider : public UComputeDataProvider
{ 
public:
	class USkeletalMeshComponent*                      SkeletalMesh;                                               // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/OptimusCore.OptimusClothDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusClothDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusClothDataProvider
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UOptimusClothDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusConnectivityDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusConnectivityDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusConnectivityDataProvider
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UOptimusConnectivityDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0030   (0x0010)  MISSED
};

/// Struct /Script/OptimusCore.OptimusDebugDrawParameters
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FOptimusDebugDrawParameters
{ 
	bool                                               bForceEnable;                                               // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            MaxLineCount;                                               // 0x0004   (0x0004)  
	int32_t                                            MaxTriangleCount;                                           // 0x0008   (0x0004)  
	int32_t                                            MaxCharacterCount;                                          // 0x000C   (0x0004)  
	int32_t                                            FontSize;                                                   // 0x0010   (0x0004)  
};

/// Class /Script/OptimusCore.OptimusDebugDrawDataInterface
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UOptimusDebugDrawDataInterface : public UOptimusComputeDataInterface
{ 
public:
	FOptimusDebugDrawParameters                        DebugDrawParameters;                                        // 0x0028   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusDebugDrawDataProvider
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UOptimusDebugDrawDataProvider : public UComputeDataProvider
{ 
public:
	class UPrimitiveComponent*                         PrimitiveComponent;                                         // 0x0028   (0x0008)  
	FOptimusDebugDrawParameters                        DebugDrawParameters;                                        // 0x0030   (0x0014)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusDuplicateVerticesDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusDuplicateVerticesDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusDuplicateVerticesDataProvider
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UOptimusDuplicateVerticesDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
};

/// Struct /Script/OptimusCore.OptimusGraphVariableDescription
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FOptimusGraphVariableDescription
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FShaderValueTypeHandle                             ValueType;                                                  // 0x0010   (0x0008)  
	TArray<char>                                       Value;                                                      // 0x0018   (0x0010)  
	int32_t                                            Offset;                                                     // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusGraphDataInterface
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UOptimusGraphDataInterface : public UComputeDataInterface
{ 
public:
	TArray<FOptimusGraphVariableDescription>           Variables;                                                  // 0x0028   (0x0010)  
	int32_t                                            ParameterBufferSize;                                        // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusGraphDataProvider
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UOptimusGraphDataProvider : public UComputeDataProvider
{ 
public:
	class UMeshComponent*                              MeshComponent;                                              // 0x0028   (0x0008)  
	class UOptimusDeformerInstance*                    DeformerInstance;                                           // 0x0030   (0x0008)  
	TArray<FOptimusGraphVariableDescription>           Variables;                                                  // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0048   (0x0008)  MISSED
};

/// Class /Script/OptimusCore.OptimusHalfEdgeDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusHalfEdgeDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusHalfEdgeDataProvider
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UOptimusHalfEdgeDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0030   (0x0020)  MISSED
};

/// Class /Script/OptimusCore.OptimusMorphTargetDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusMorphTargetDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusMorphTargetDataProvider
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UOptimusMorphTargetDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
};

/// Struct /Script/OptimusCore.OptimusDataDomain
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FOptimusDataDomain
{ 
	EOptimusDataDomainType                             Type;                                                       // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<FName>                                      DimensionNames;                                             // 0x0008   (0x0010)  
	int32_t                                            Multiplier;                                                 // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x001C   (0x0004)  MISSED
	FString                                            Expression;                                                 // 0x0020   (0x0010)  
	TArray<FName>                                      LevelNames;                                                 // 0x0030   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusRawBufferDataInterface
/// Size: 0x0078 (120 bytes) (0x000028 - 0x000078) align 8 MaxSize: 0x0078
class UOptimusRawBufferDataInterface : public UOptimusComputeDataInterface
{ 
public:
	FShaderValueTypeHandle                             ValueType;                                                  // 0x0028   (0x0008)  
	FOptimusDataDomain                                 DataDomain;                                                 // 0x0030   (0x0040)  
	TWeakObjectPtr<class UOptimusComponentSourceBinding*> ComponentSourceBinding;                                  // 0x0070   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusTransientBufferDataInterface
/// Size: 0x0078 (120 bytes) (0x000078 - 0x000078) align 8 MaxSize: 0x0078
class UOptimusTransientBufferDataInterface : public UOptimusRawBufferDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusPersistentBufferDataInterface
/// Size: 0x0080 (128 bytes) (0x000078 - 0x000080) align 8 MaxSize: 0x0080
class UOptimusPersistentBufferDataInterface : public UOptimusRawBufferDataInterface
{ 
public:
	FName                                              ResourceName;                                               // 0x0078   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusRawBufferDataProvider
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UOptimusRawBufferDataProvider : public UComputeDataProvider
{ 
public:
	TWeakObjectPtr<class UActorComponent*>             Component;                                                  // 0x0028   (0x0008)  
	TWeakObjectPtr<class UOptimusComponentSource*>     ComponentSource;                                            // 0x0030   (0x0008)  
	FOptimusDataDomain                                 DataDomain;                                                 // 0x0038   (0x0040)  
	int32_t                                            ElementStride;                                              // 0x0078   (0x0004)  
	int32_t                                            RawStride;                                                  // 0x007C   (0x0004)  
};

/// Class /Script/OptimusCore.OptimusTransientBufferDataProvider
/// Size: 0x0080 (128 bytes) (0x000080 - 0x000080) align 8 MaxSize: 0x0080
class UOptimusTransientBufferDataProvider : public UOptimusRawBufferDataProvider
{ 
public:
};

/// Class /Script/OptimusCore.OptimusPersistentBufferDataProvider
/// Size: 0x0098 (152 bytes) (0x000080 - 0x000098) align 8 MaxSize: 0x0098
class UOptimusPersistentBufferDataProvider : public UOptimusRawBufferDataProvider
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0080   (0x0018)  MISSED
};

/// Class /Script/OptimusCore.OptimusSceneDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusSceneDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSceneDataProvider
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UOptimusSceneDataProvider : public UComputeDataProvider
{ 
public:
	class USceneComponent*                             SceneComponent;                                             // 0x0028   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusSkeletonDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusSkeletonDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSkeletonDataProvider
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UOptimusSkeletonDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusSkinnedMeshDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshDataProvider
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UOptimusSkinnedMeshDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshExecDataInterface
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UOptimusSkinnedMeshExecDataInterface : public UOptimusComputeDataInterface
{ 
public:
	EOptimusSkinnedMeshExecDomain                      Domain;                                                     // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0029   (0x0007)  MISSED
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshExecDataProvider
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOptimusSkinnedMeshExecDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
	EOptimusSkinnedMeshExecDomain                      Domain;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshWriteDataInterface
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusSkinnedMeshWriteDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusSkinnedMeshWriteDataProvider
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOptimusSkinnedMeshWriteDataProvider : public UComputeDataProvider
{ 
public:
	class USkinnedMeshComponent*                       SkinnedMesh;                                                // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/OptimusCore.OptimusNode
/// Size: 0x0110 (272 bytes) (0x000028 - 0x000110) align 8 MaxSize: 0x0110
class UOptimusNode : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	FText                                              DisplayName;                                                // 0x0030   (0x0018)  
	FVector2D                                          GraphPosition;                                              // 0x0048   (0x0010)  
	TArray<class UOptimusNodePin*>                     Pins;                                                       // 0x0058   (0x0010)  
	SDK_UNDEFINED(80,1206) /* TSet<FName> */           __um(ExpandedPins);                                         // 0x0068   (0x0050)  
	EOptimusDiagnosticLevel                            DiagnosticLevel;                                            // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x57];                                      // 0x00B9   (0x0057)  MISSED


	/// Functions
	// Function /Script/OptimusCore.OptimusNode.SetGraphPosition
	// bool SetGraphPosition(FVector2D& InPosition);                                                                            // [0x15c3d80] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNode.GetNodeName
	// FName GetNodeName();                                                                                                     // [0x15c2e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNode.GetNodeCategory
	// FName GetNodeCategory();                                                                                                 // [0x15c2de0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNode.GetGraphPosition
	// FVector2D GetGraphPosition();                                                                                            // [0x15c2d30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNode.GetDisplayName
	// FText GetDisplayName();                                                                                                  // [0x15c2c00] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/OptimusCore.OptimusNode_DataInterface
/// Size: 0x0128 (296 bytes) (0x000110 - 0x000128) align 8 MaxSize: 0x0128
class UOptimusNode_DataInterface : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0110   (0x0008)  MISSED
	class UClass*                                      DataInterfaceClass;                                         // 0x0118   (0x0008)  
	class UOptimusComputeDataInterface*                DataInterfaceData;                                          // 0x0120   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusNode_AnimAttributeDataInterface
/// Size: 0x0128 (296 bytes) (0x000128 - 0x000128) align 8 MaxSize: 0x0128
class UOptimusNode_AnimAttributeDataInterface : public UOptimusNode_DataInterface
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNode_ComponentSource
/// Size: 0x0120 (288 bytes) (0x000110 - 0x000120) align 8 MaxSize: 0x0120
class UOptimusNode_ComponentSource : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0110   (0x0008)  MISSED
	class UOptimusComponentSourceBinding*              Binding;                                                    // 0x0118   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusNode_ComputeKernelBase
/// Size: 0x0118 (280 bytes) (0x000110 - 0x000118) align 8 MaxSize: 0x0118
class UOptimusNode_ComputeKernelBase : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x8];                                       // 0x0110   (0x0008)  MISSED
};

/// Struct /Script/OptimusCore.OptimusExecutionDomain
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FOptimusExecutionDomain
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/OptimusCore.OptimusValidatedName
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FOptimusValidatedName
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
};

/// Struct /Script/OptimusCore.OptimusParameterBinding
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FOptimusParameterBinding
{ 
	FOptimusValidatedName                              Name;                                                       // 0x0000   (0x0008)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0008   (0x0010)  
	FOptimusDataDomain                                 DataDomain;                                                 // 0x0018   (0x0040)  
};

/// Class /Script/OptimusCore.OptimusNode_ComputeKernelFunctionGeneratorClass
/// Size: 0x0280 (640 bytes) (0x000220 - 0x000280) align 16 MaxSize: 0x0280
class UOptimusNode_ComputeKernelFunctionGeneratorClass : public UClass
{ 
public:
	FName                                              Category;                                                   // 0x0220   (0x0008)  
	FName                                              KernelName;                                                 // 0x0228   (0x0008)  
	FOptimusExecutionDomain                            ExecutionDomain;                                            // 0x0230   (0x0008)  
	FIntVector                                         GroupSize;                                                  // 0x0238   (0x000C)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0244   (0x0004)  MISSED
	TArray<FOptimusParameterBinding>                   InputBindings;                                              // 0x0248   (0x0010)  
	TArray<FOptimusParameterBinding>                   OutputBindings;                                             // 0x0258   (0x0010)  
	FString                                            ShaderSource;                                               // 0x0268   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0278   (0x0008)  MISSED
};

/// Class /Script/OptimusCore.OptimusNode_ComputeKernelFunction
/// Size: 0x0118 (280 bytes) (0x000118 - 0x000118) align 8 MaxSize: 0x0118
class UOptimusNode_ComputeKernelFunction : public UOptimusNode_ComputeKernelBase
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNode_ConstantValueGeneratorClass
/// Size: 0x0230 (560 bytes) (0x000220 - 0x000230) align 16 MaxSize: 0x0230
class UOptimusNode_ConstantValueGeneratorClass : public UClass
{ 
public:
	FOptimusDataTypeRef                                DataType;                                                   // 0x0220   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusNode_ConstantValue
/// Size: 0x0120 (288 bytes) (0x000110 - 0x000120) align 8 MaxSize: 0x0120
class UOptimusNode_ConstantValue : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0110   (0x0010)  MISSED
};

/// Struct /Script/OptimusCore.Optimus_ShaderBinding
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FOptimus_ShaderBinding
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0008   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusParameterBindingArray
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FOptimusParameterBindingArray
{ 
	TArray<FOptimusParameterBinding>                   InnerArray;                                                 // 0x0000   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusSecondaryInputBindingsGroup
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FOptimusSecondaryInputBindingsGroup
{ 
	FOptimusValidatedName                              GroupName;                                                  // 0x0000   (0x0008)  
	FOptimusParameterBindingArray                      BindingArray;                                               // 0x0008   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusShaderText
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FOptimusShaderText
{ 
	FString                                            Declarations;                                               // 0x0000   (0x0010)  
	FString                                            ShaderText;                                                 // 0x0010   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusNode_CustomComputeKernel
/// Size: 0x01F0 (496 bytes) (0x000118 - 0x0001F0) align 8 MaxSize: 0x01F0
class UOptimusNode_CustomComputeKernel : public UOptimusNode_ComputeKernelBase
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0118   (0x0020)  MISSED
	FName                                              Category;                                                   // 0x0138   (0x0008)  
	FOptimusValidatedName                              KernelName;                                                 // 0x0140   (0x0008)  
	FOptimusExecutionDomain                            ExecutionDomain;                                            // 0x0148   (0x0008)  
	FIntVector                                         GroupSize;                                                  // 0x0150   (0x000C)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x015C   (0x0004)  MISSED
	TArray<FOptimus_ShaderBinding>                     Parameters;                                                 // 0x0160   (0x0010)  
	TArray<FOptimusParameterBinding>                   InputBindings;                                              // 0x0170   (0x0010)  
	TArray<FOptimusParameterBinding>                   OutputBindings;                                             // 0x0180   (0x0010)  
	FOptimusParameterBindingArray                      InputBindingArray;                                          // 0x0190   (0x0010)  
	FOptimusParameterBindingArray                      OutputBindingArray;                                         // 0x01A0   (0x0010)  
	TArray<FOptimusSecondaryInputBindingsGroup>        SecondaryInputBindingGroups;                                // 0x01B0   (0x0010)  
	TArray<class UComputeSource*>                      AdditionalSources;                                          // 0x01C0   (0x0010)  
	FOptimusShaderText                                 ShaderSource;                                               // 0x01D0   (0x0020)  
};

/// Class /Script/OptimusCore.OptimusNode_FunctionReference
/// Size: 0x0120 (288 bytes) (0x000110 - 0x000120) align 8 MaxSize: 0x0120
class UOptimusNode_FunctionReference : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0110   (0x0008)  MISSED
	class UOptimusFunctionNodeGraph*                   FunctionGraph;                                              // 0x0118   (0x0008)  
};

/// Struct /Script/OptimusCore.OptimusNode_ResourceAccessorBase_DuplicationInfo
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FOptimusNode_ResourceAccessorBase_DuplicationInfo
{ 
	FName                                              ResourceName;                                               // 0x0000   (0x0008)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0008   (0x0010)  
	FOptimusDataDomain                                 DataDomain;                                                 // 0x0018   (0x0040)  
};

/// Class /Script/OptimusCore.OptimusNode_ResourceAccessorBase
/// Size: 0x0188 (392 bytes) (0x000110 - 0x000188) align 8 MaxSize: 0x0188
class UOptimusNode_ResourceAccessorBase : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0110   (0x0010)  MISSED
	TWeakObjectPtr<class UOptimusResourceDescription*> ResourceDesc;                                               // 0x0120   (0x0008)  
	EOptimusBufferWriteType                            WriteType;                                                  // 0x0128   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0129   (0x0007)  MISSED
	FOptimusNode_ResourceAccessorBase_DuplicationInfo  DuplicationInfo;                                            // 0x0130   (0x0058)  
};

/// Class /Script/OptimusCore.OptimusNode_GetResource
/// Size: 0x0188 (392 bytes) (0x000188 - 0x000188) align 8 MaxSize: 0x0188
class UOptimusNode_GetResource : public UOptimusNode_ResourceAccessorBase
{ 
public:
};

/// Struct /Script/OptimusCore.OptimusNode_GetVariable_DuplicationInfo
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FOptimusNode_GetVariable_DuplicationInfo
{ 
	FName                                              VariableName;                                               // 0x0000   (0x0008)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0008   (0x0010)  
	FString                                            DefaultValue;                                               // 0x0018   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusNode_GetVariable
/// Size: 0x0148 (328 bytes) (0x000110 - 0x000148) align 8 MaxSize: 0x0148
class UOptimusNode_GetVariable : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0110   (0x0008)  MISSED
	TWeakObjectPtr<class UOptimusVariableDescription*> VariableDesc;                                               // 0x0118   (0x0008)  
	FOptimusNode_GetVariable_DuplicationInfo           DuplicationInfo;                                            // 0x0120   (0x0028)  
};

/// Class /Script/OptimusCore.OptimusNode_GraphTerminal
/// Size: 0x0128 (296 bytes) (0x000110 - 0x000128) align 8 MaxSize: 0x0128
class UOptimusNode_GraphTerminal : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0110   (0x0008)  MISSED
	EOptimusTerminalType                               TerminalType;                                               // 0x0118   (0x0004)  
	TWeakObjectPtr<class UOptimusNodeSubGraph*>        OwningGraph;                                                // 0x011C   (0x0008)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0124   (0x0004)  MISSED
};

/// Class /Script/OptimusCore.OptimusNode_Resource
/// Size: 0x0188 (392 bytes) (0x000188 - 0x000188) align 8 MaxSize: 0x0188
class UOptimusNode_Resource : public UOptimusNode_ResourceAccessorBase
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNode_SetResource
/// Size: 0x0188 (392 bytes) (0x000188 - 0x000188) align 8 MaxSize: 0x0188
class UOptimusNode_SetResource : public UOptimusNode_ResourceAccessorBase
{ 
public:
};

/// Class /Script/OptimusCore.OptimusNode_SubGraphReference
/// Size: 0x0120 (288 bytes) (0x000110 - 0x000120) align 8 MaxSize: 0x0120
class UOptimusNode_SubGraphReference : public UOptimusNode
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0110   (0x0008)  MISSED
	class UOptimusNodeSubGraph*                        SubGraph;                                                   // 0x0118   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusActionStack
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 16 MaxSize: 0x00E0
class UOptimusActionStack : public UObject
{ 
public:
	int32_t                                            TransactedActionIndex;                                      // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_7[0xB4];                                      // 0x002C   (0x00B4)  MISSED
};

/// Class /Script/OptimusCore.OptimusComponentSourceBinding
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UOptimusComponentSourceBinding : public UObject
{ 
public:
	FName                                              BindingName;                                                // 0x0028   (0x0008)  
	class UClass*                                      ComponentType;                                              // 0x0030   (0x0008)  
	TArray<FName>                                      ComponentTags;                                              // 0x0038   (0x0010)  
	bool                                               bIsPrimaryBinding;                                          // 0x0048   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0049   (0x0007)  MISSED
};

/// Class /Script/OptimusCore.OptimusComputeGraph
/// Size: 0x00A0 (160 bytes) (0x000090 - 0x0000A0) align 8 MaxSize: 0x00A0
class UOptimusComputeGraph : public UComputeGraph
{ 
public:
	SDK_UNDEFINED(16,1207) /* TArray<TWeakObjectPtr<UOptimusNode*>> */ __um(KernelToNode);                         // 0x0090   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusComponentSourceBindingContainer
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOptimusComponentSourceBindingContainer : public UObject
{ 
public:
	TArray<class UOptimusComponentSourceBinding*>      Bindings;                                                   // 0x0028   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusVariableContainer
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOptimusVariableContainer : public UObject
{ 
public:
	TArray<class UOptimusVariableDescription*>         Descriptions;                                               // 0x0028   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusResourceContainer
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOptimusResourceContainer : public UObject
{ 
public:
	TArray<class UOptimusResourceDescription*>         Descriptions;                                               // 0x0028   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusComputeGraphInfo
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FOptimusComputeGraphInfo
{ 
	EOptimusNodeGraphType                              GraphType;                                                  // 0x0000   (0x0004)  
	FName                                              GraphName;                                                  // 0x0004   (0x0008)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UOptimusComputeGraph*                        ComputeGraph;                                               // 0x0010   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusDeformer
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align 8 MaxSize: 0x0120
class UOptimusDeformer : public UMeshDeformer
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0028   (0x0020)  MISSED
	class USkeletalMesh*                               Mesh;                                                       // 0x0048   (0x0008)  
	TArray<FOptimusComputeGraphInfo>                   ComputeGraphs;                                              // 0x0050   (0x0010)  
	class UOptimusActionStack*                         ActionStack;                                                // 0x0060   (0x0008)  
	TArray<class UOptimusNodeGraph*>                   Graphs;                                                     // 0x0068   (0x0010)  
	class UOptimusComponentSourceBindingContainer*     Bindings;                                                   // 0x0078   (0x0008)  
	class UOptimusVariableContainer*                   Variables;                                                  // 0x0080   (0x0008)  
	class UOptimusResourceContainer*                   Resources;                                                  // 0x0088   (0x0008)  
	unsigned char                                      UnknownData01_7[0x90];                                      // 0x0090   (0x0090)  MISSED


	/// Functions
	// Function /Script/OptimusCore.OptimusDeformer.GetVariables
	// TArray<UOptimusVariableDescription*> GetVariables();                                                                     // [0x15c2ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusDeformer.GetResources
	// TArray<UOptimusResourceDescription*> GetResources();                                                                     // [0x15c2e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusDeformer.GetComponentBindings
	// TArray<UOptimusComponentSourceBinding*> GetComponentBindings();                                                          // [0x15c2b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/OptimusCore.OptimusDeformerInstanceComponentBinding
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FOptimusDeformerInstanceComponentBinding
{ 
	FName                                              ProviderName;                                               // 0x0000   (0x0008)  
	FName                                              ComponentName;                                              // 0x0008   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusDeformerInstanceSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UOptimusDeformerInstanceSettings : public UMeshDeformerInstanceSettings
{ 
public:
	TWeakObjectPtr<class UOptimusDeformer*>            Deformer;                                                   // 0x0028   (0x0008)  
	TArray<FOptimusDeformerInstanceComponentBinding>   Bindings;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusDeformerInstanceExecInfo
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FOptimusDeformerInstanceExecInfo
{ 
	FName                                              GraphName;                                                  // 0x0000   (0x0008)  
	EOptimusNodeGraphType                              GraphType;                                                  // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x000C   (0x0004)  MISSED
	class UComputeGraph*                               ComputeGraph;                                               // 0x0010   (0x0008)  
	FComputeGraphInstance                              ComputeGraphInstance;                                       // 0x0018   (0x0018)  
};

/// Class /Script/OptimusCore.OptimusDeformerInstance
/// Size: 0x00E0 (224 bytes) (0x000028 - 0x0000E0) align 8 MaxSize: 0x00E0
class UOptimusDeformerInstance : public UMeshDeformerInstance
{ 
public:
	TWeakObjectPtr<class UMeshComponent*>              MeshComponent;                                              // 0x0028   (0x0008)  
	TWeakObjectPtr<class UOptimusDeformerInstanceSettings*> InstanceSettings;                                      // 0x0030   (0x0008)  
	TArray<FOptimusDeformerInstanceExecInfo>           ComputeGraphExecInfos;                                      // 0x0038   (0x0010)  
	class UOptimusVariableContainer*                   Variables;                                                  // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_7[0x90];                                      // 0x0050   (0x0090)  MISSED


	/// Functions
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetVectorVariable
	// bool SetVectorVariable(FName InVariableName, FVector& InValue);                                                          // [0x15c4230] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetVector4Variable
	// bool SetVector4Variable(FName InVariableName, FVector4& InValue);                                                        // [0x15c4110] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetTransformVariable
	// bool SetTransformVariable(FName InVariableName, FTransform& InValue);                                                    // [0x15c3fa0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetIntVariable
	// bool SetIntVariable(FName InVariableName, int32_t InValue);                                                              // [0x15c3ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetFloatVariable
	// bool SetFloatVariable(FName InVariableName, double InValue);                                                             // [0x15c3c60] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusDeformerInstance.SetBoolVariable
	// bool SetBoolVariable(FName InVariableName, bool InValue);                                                                // [0x15c3b80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/OptimusCore.OptimusDeformerInstance.GetVariables
	// TArray<UOptimusVariableDescription*> GetVariables();                                                                     // [0x15c2f10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusDeformerInstance.EnqueueTriggerGraph
	// bool EnqueueTriggerGraph(FName InTriggerGraphName);                                                                      // [0x15c29d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OptimusCore.OptimusNodeGraph
/// Size: 0x0080 (128 bytes) (0x000028 - 0x000080) align 8 MaxSize: 0x0080
class UOptimusNodeGraph : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	EOptimusNodeGraphType                              GraphType;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0034   (0x0004)  MISSED
	TArray<class UOptimusNode*>                        Nodes;                                                      // 0x0038   (0x0010)  
	TArray<class UOptimusNodeLink*>                    Links;                                                      // 0x0048   (0x0010)  
	TArray<class UOptimusNodeGraph*>                   Subgraphs;                                                  // 0x0058   (0x0010)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x0068   (0x0018)  MISSED


	/// Functions
	// Function /Script/OptimusCore.OptimusNodeGraph.RenameGraph
	// bool RenameGraph(class UOptimusNodeGraph* InGraph, FString InNewName);                                                   // [0x15c3a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveNodes
	// bool RemoveNodes(TArray<UOptimusNode*>& InNodes);                                                                        // [0x15c39a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveNode
	// bool RemoveNode(class UOptimusNode* InNode);                                                                             // [0x15c3880] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveLink
	// bool RemoveLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin);                          // [0x15c3690] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.RemoveAllLinks
	// bool RemoveAllLinks(class UOptimusNodePin* InNodePin);                                                                   // [0x15c3310] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.MoveGraph
	// bool MoveGraph(class UOptimusNodeGraph* InGraph, int32_t InInsertBefore);                                                // [0x15c3240] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsSubGraphReference
	// bool IsSubGraphReference(class UOptimusNode* InNode);                                                                    // [0x15c3190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsKernelFunction
	// bool IsKernelFunction(class UOptimusNode* InNode);                                                                       // [0x15c30e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsFunctionReference
	// bool IsFunctionReference(class UOptimusNode* InNode);                                                                    // [0x15c3030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsFunctionGraph
	// bool IsFunctionGraph();                                                                                                  // [0x15c3010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsExecutionGraph
	// bool IsExecutionGraph();                                                                                                 // [0x15c2ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.IsCustomKernel
	// bool IsCustomKernel(class UOptimusNode* InNode);                                                                         // [0x15c2f40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.GetGraphType
	// EOptimusNodeGraphType GetGraphType();                                                                                    // [0xd62dd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.GetGraphs
	// TArray<UOptimusNodeGraph*> GetGraphs();                                                                                  // [0x15c2d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.GetGraphIndex
	// int32_t GetGraphIndex();                                                                                                 // [0x15c2ca0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/OptimusCore.OptimusNodeGraph.ExpandCollapsedNodes
	// TArray<UOptimusNode*> ExpandCollapsedNodes(class UOptimusNode* InFunctionNode);                                          // [0x15c2ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.DuplicateNodes
	// bool DuplicateNodes(TArray<UOptimusNode*>& InNodes, FVector2D& InPosition);                                              // [0x15c2890] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.DuplicateNode
	// class UOptimusNode* DuplicateNode(class UOptimusNode* InNode, FVector2D& InPosition);                                    // [0x15c2670] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.ConvertFunctionToCustomKernel
	// class UOptimusNode* ConvertFunctionToCustomKernel(class UOptimusNode* InKernelFunction);                                 // [0x15c25d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.ConvertCustomKernelToFunction
	// class UOptimusNode* ConvertCustomKernelToFunction(class UOptimusNode* InCustomKernel);                                   // [0x15c2530] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.CollapseNodesToSubGraph
	// class UOptimusNode* CollapseNodesToSubGraph(TArray<UOptimusNode*>& InNodes);                                             // [0x15c2470] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.CollapseNodesToFunction
	// class UOptimusNode* CollapseNodesToFunction(TArray<UOptimusNode*>& InNodes);                                             // [0x15c23d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddVariableGetNode
	// class UOptimusNode* AddVariableGetNode(class UOptimusVariableDescription* InVariableDesc, FVector2D& InPosition);        // [0x15c22a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddValueNode
	// class UOptimusNode* AddValueNode(FOptimusDataTypeRef InDataTypeRef, FVector2D& InPosition);                              // [0x15c2170] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddResourceSetNode
	// class UOptimusNode* AddResourceSetNode(class UOptimusResourceDescription* InResourceDesc, FVector2D& InPosition);        // [0x15c2040] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddResourceNode
	// class UOptimusNode* AddResourceNode(class UOptimusResourceDescription* InResourceDesc, FVector2D& InPosition);           // [0x15c1f10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddResourceGetNode
	// class UOptimusNode* AddResourceGetNode(class UOptimusResourceDescription* InResourceDesc, FVector2D& InPosition);        // [0x15c1de0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddNode
	// class UOptimusNode* AddNode(class UClass* InNodeClass, FVector2D& InPosition);                                           // [0x15c1ce0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddLink
	// bool AddLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin);                             // [0x15c1740] Final|Native|Public|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddDataInterfaceNode
	// class UOptimusNode* AddDataInterfaceNode(class UClass* InDataInterfaceClass, FVector2D& InPosition);                     // [0x15c15b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/OptimusCore.OptimusNodeGraph.AddComponentBindingGetNode
	// class UOptimusNode* AddComponentBindingGetNode(class UOptimusComponentSourceBinding* InComponentBinding, FVector2D& InPosition); // [0x15c1480] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/OptimusCore.OptimusNodeSubGraph
/// Size: 0x00B0 (176 bytes) (0x000080 - 0x0000B0) align 8 MaxSize: 0x00B0
class UOptimusNodeSubGraph : public UOptimusNodeGraph
{ 
public:
	TArray<FOptimusParameterBinding>                   InputBindings;                                              // 0x0080   (0x0010)  
	TArray<FOptimusParameterBinding>                   OutputBindings;                                             // 0x0090   (0x0010)  
	TWeakObjectPtr<class UOptimusNode_GraphTerminal*>  EntryNode;                                                  // 0x00A0   (0x0008)  
	TWeakObjectPtr<class UOptimusNode_GraphTerminal*>  ReturnNode;                                                 // 0x00A8   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusFunctionNodeGraph
/// Size: 0x00B8 (184 bytes) (0x0000B0 - 0x0000B8) align 8 MaxSize: 0x00B8
class UOptimusFunctionNodeGraph : public UOptimusNodeSubGraph
{ 
public:
	FName                                              Category;                                                   // 0x00B0   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusNodeLink
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UOptimusNodeLink : public UObject
{ 
public:
	class UOptimusNodePin*                             NodeOutputPin;                                              // 0x0028   (0x0008)  
	class UOptimusNodePin*                             NodeInputPin;                                               // 0x0030   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusNodePin
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UOptimusNodePin : public UObject
{ 
public:
	bool                                               bIsGroupingPin;                                             // 0x0028   (0x0001)  
	EOptimusNodePinDirection                           Direction;                                                  // 0x0029   (0x0001)  
	EOptimusNodePinStorageType                         StorageType;                                                // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_6[0x5];                                       // 0x002B   (0x0005)  MISSED
	FOptimusDataDomain                                 DataDomain;                                                 // 0x0030   (0x0040)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0070   (0x0010)  
	TArray<class UOptimusNodePin*>                     SubPins;                                                    // 0x0080   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusResourceDescription
/// Size: 0x0090 (144 bytes) (0x000028 - 0x000090) align 8 MaxSize: 0x0090
class UOptimusResourceDescription : public UObject
{ 
public:
	FName                                              ResourceName;                                               // 0x0028   (0x0008)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0030   (0x0010)  
	TWeakObjectPtr<class UOptimusComponentSourceBinding*> ComponentBinding;                                        // 0x0040   (0x0008)  
	FOptimusDataDomain                                 DataDomain;                                                 // 0x0048   (0x0040)  
	class UOptimusPersistentBufferDataInterface*       DataInterface;                                              // 0x0088   (0x0008)  
};

/// Class /Script/OptimusCore.OptimusSource
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UOptimusSource : public UComputeSource
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0038   (0x0008)  MISSED
	FString                                            SourceText;                                                 // 0x0040   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusValueContainerGeneratorClass
/// Size: 0x0230 (560 bytes) (0x000220 - 0x000230) align 16 MaxSize: 0x0230
class UOptimusValueContainerGeneratorClass : public UClass
{ 
public:
	FOptimusDataTypeRef                                DataType;                                                   // 0x0220   (0x0010)  
};

/// Class /Script/OptimusCore.OptimusValueContainer
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOptimusValueContainer : public UObject
{ 
public:
};

/// Class /Script/OptimusCore.OptimusVariableDescription
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UOptimusVariableDescription : public UObject
{ 
public:
	FGuid                                              Guid;                                                       // 0x0028   (0x0010)  
	FName                                              VariableName;                                               // 0x0038   (0x0008)  
	FOptimusDataTypeRef                                DataType;                                                   // 0x0040   (0x0010)  
	class UOptimusValueContainer*                      DefaultValue;                                               // 0x0050   (0x0008)  
	TArray<char>                                       ValueData;                                                  // 0x0058   (0x0010)  
};

/// Struct /Script/OptimusCore.OptimusAction
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FOptimusAction
{ 
	unsigned char                                      UnknownData00_2[0x18];                                      // 0x0000   (0x0018)  MISSED
};

/// Struct /Script/OptimusCore.OptimusCompoundAction
/// Size: 0x0028 (40 bytes) (0x000018 - 0x000028) align 8 MaxSize: 0x0028
struct FOptimusCompoundAction : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_AddBinding
/// Size: 0x0030 (48 bytes) (0x000018 - 0x000030) align 8 MaxSize: 0x0030
struct FOptimusComponentBindingAction_AddBinding : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_RemoveBinding
/// Size: 0x0040 (64 bytes) (0x000018 - 0x000040) align 8 MaxSize: 0x0040
struct FOptimusComponentBindingAction_RemoveBinding : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_RenameBinding
/// Size: 0x0028 (40 bytes) (0x000018 - 0x000028) align 8 MaxSize: 0x0028
struct FOptimusComponentBindingAction_RenameBinding : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/OptimusCore.OptimusComponentBindingAction_SetComponentSource
/// Size: 0x0040 (64 bytes) (0x000018 - 0x000040) align 8 MaxSize: 0x0040
struct FOptimusComponentBindingAction_SetComponentSource : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_RenameNode
/// Size: 0x0058 (88 bytes) (0x000018 - 0x000058) align 8 MaxSize: 0x0058
struct FOptimusNodeAction_RenameNode : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0018   (0x0040)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_MoveNode
/// Size: 0x0048 (72 bytes) (0x000018 - 0x000048) align 8 MaxSize: 0x0048
struct FOptimusNodeAction_MoveNode : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinValue
/// Size: 0x0048 (72 bytes) (0x000018 - 0x000048) align 8 MaxSize: 0x0048
struct FOptimusNodeAction_SetPinValue : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinName
/// Size: 0x0038 (56 bytes) (0x000018 - 0x000038) align 8 MaxSize: 0x0038
struct FOptimusNodeAction_SetPinName : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0018   (0x0020)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinType
/// Size: 0x0038 (56 bytes) (0x000018 - 0x000038) align 8 MaxSize: 0x0038
struct FOptimusNodeAction_SetPinType : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0018   (0x0020)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_SetPinDataDomain
/// Size: 0x00A8 (168 bytes) (0x000018 - 0x0000A8) align 8 MaxSize: 0x00A8
struct FOptimusNodeAction_SetPinDataDomain : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x90];                                      // 0x0018   (0x0090)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_ConnectAdderPin
/// Size: 0x0050 (80 bytes) (0x000018 - 0x000050) align 8 MaxSize: 0x0050
struct FOptimusNodeAction_ConnectAdderPin : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x38];                                      // 0x0018   (0x0038)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_AddRemovePin
/// Size: 0x00B8 (184 bytes) (0x000018 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FOptimusNodeAction_AddRemovePin : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0xA0];                                      // 0x0018   (0x00A0)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeAction_AddPin
/// Size: 0x00B8 (184 bytes) (0x0000B8 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FOptimusNodeAction_AddPin : FOptimusNodeAction_AddRemovePin
{ 
};

/// Struct /Script/OptimusCore.OptimusNodeAction_AddGroupingPin
/// Size: 0x00B8 (184 bytes) (0x0000B8 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FOptimusNodeAction_AddGroupingPin : FOptimusNodeAction_AddRemovePin
{ 
};

/// Struct /Script/OptimusCore.OptimusNodeAction_RemovePin
/// Size: 0x00B8 (184 bytes) (0x0000B8 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FOptimusNodeAction_RemovePin : FOptimusNodeAction_AddRemovePin
{ 
};

/// Struct /Script/OptimusCore.OptimusNodeAction_MovePin
/// Size: 0x0048 (72 bytes) (0x000018 - 0x000048) align 8 MaxSize: 0x0048
struct FOptimusNodeAction_MovePin : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x30];                                      // 0x0018   (0x0030)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddGraph
/// Size: 0x0090 (144 bytes) (0x000018 - 0x000090) align 16 MaxSize: 0x0090
struct FOptimusNodeGraphAction_AddGraph : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x78];                                      // 0x0018   (0x0078)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveGraph
/// Size: 0x0058 (88 bytes) (0x000018 - 0x000058) align 8 MaxSize: 0x0058
struct FOptimusNodeGraphAction_RemoveGraph : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x40];                                      // 0x0018   (0x0040)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RenameGraph
/// Size: 0x0038 (56 bytes) (0x000018 - 0x000038) align 8 MaxSize: 0x0038
struct FOptimusNodeGraphAction_RenameGraph : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x20];                                      // 0x0018   (0x0020)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddNode
/// Size: 0x00A0 (160 bytes) (0x000018 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FOptimusNodeGraphAction_AddNode : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0018   (0x0088)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_DuplicateNode
/// Size: 0x00A0 (160 bytes) (0x000018 - 0x0000A0) align 16 MaxSize: 0x00A0
struct FOptimusNodeGraphAction_DuplicateNode : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0018   (0x0088)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveNode
/// Size: 0x0060 (96 bytes) (0x000018 - 0x000060) align 8 MaxSize: 0x0060
struct FOptimusNodeGraphAction_RemoveNode : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0018   (0x0048)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddRemoveLink
/// Size: 0x0040 (64 bytes) (0x000018 - 0x000040) align 8 MaxSize: 0x0040
struct FOptimusNodeGraphAction_AddRemoveLink : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_AddLink
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
struct FOptimusNodeGraphAction_AddLink : FOptimusNodeGraphAction_AddRemoveLink
{ 
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_RemoveLink
/// Size: 0x0040 (64 bytes) (0x000040 - 0x000040) align 8 MaxSize: 0x0040
struct FOptimusNodeGraphAction_RemoveLink : FOptimusNodeGraphAction_AddRemoveLink
{ 
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_PackageKernelFunction
/// Size: 0x00B0 (176 bytes) (0x000018 - 0x0000B0) align 8 MaxSize: 0x00B0
struct FOptimusNodeGraphAction_PackageKernelFunction : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x98];                                      // 0x0018   (0x0098)  MISSED
};

/// Struct /Script/OptimusCore.OptimusNodeGraphAction_UnpackageKernelFunction
/// Size: 0x0060 (96 bytes) (0x000018 - 0x000060) align 8 MaxSize: 0x0060
struct FOptimusNodeGraphAction_UnpackageKernelFunction : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x48];                                      // 0x0018   (0x0048)  MISSED
};

/// Struct /Script/OptimusCore.OptimusResourceAction_AddResource
/// Size: 0x0070 (112 bytes) (0x000018 - 0x000070) align 8 MaxSize: 0x0070
struct FOptimusResourceAction_AddResource : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x58];                                      // 0x0018   (0x0058)  MISSED
};

/// Struct /Script/OptimusCore.OptimusResourceAction_RemoveResource
/// Size: 0x0040 (64 bytes) (0x000018 - 0x000040) align 8 MaxSize: 0x0040
struct FOptimusResourceAction_RemoveResource : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/OptimusCore.OptimusResourceAction_RenameResource
/// Size: 0x0028 (40 bytes) (0x000018 - 0x000028) align 8 MaxSize: 0x0028
struct FOptimusResourceAction_RenameResource : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/OptimusCore.OptimusResourceAction_SetDataType
/// Size: 0x0040 (64 bytes) (0x000018 - 0x000040) align 8 MaxSize: 0x0040
struct FOptimusResourceAction_SetDataType : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/OptimusCore.OptimusResourceAction_SetDataDomain
/// Size: 0x00A0 (160 bytes) (0x000018 - 0x0000A0) align 8 MaxSize: 0x00A0
struct FOptimusResourceAction_SetDataDomain : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x88];                                      // 0x0018   (0x0088)  MISSED
};

/// Struct /Script/OptimusCore.OptimusVariableAction_AddVariable
/// Size: 0x0030 (48 bytes) (0x000018 - 0x000030) align 8 MaxSize: 0x0030
struct FOptimusVariableAction_AddVariable : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0018   (0x0018)  MISSED
};

/// Struct /Script/OptimusCore.OptimusVariableAction_RemoveVariable
/// Size: 0x0040 (64 bytes) (0x000018 - 0x000040) align 8 MaxSize: 0x0040
struct FOptimusVariableAction_RemoveVariable : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/OptimusCore.OptimusVariableAction_RenameVariable
/// Size: 0x0028 (40 bytes) (0x000018 - 0x000028) align 8 MaxSize: 0x0028
struct FOptimusVariableAction_RenameVariable : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0018   (0x0010)  MISSED
};

/// Struct /Script/OptimusCore.OptimusVariableAction_SetDataType
/// Size: 0x0040 (64 bytes) (0x000018 - 0x000040) align 8 MaxSize: 0x0040
struct FOptimusVariableAction_SetDataType : FOptimusAction
{ 
	unsigned char                                      UnknownData00_1[0x28];                                      // 0x0018   (0x0028)  MISSED
};

/// Struct /Script/OptimusCore.OptimusDataType
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FOptimusDataType
{ 
	FName                                              TypeName;                                                   // 0x0000   (0x0008)  
	FText                                              DisplayName;                                                // 0x0008   (0x0018)  
	FShaderValueTypeHandle                             ShaderValueType;                                            // 0x0020   (0x0008)  
	int32_t                                            ShaderValueSize;                                            // 0x0028   (0x0004)  
	FName                                              TypeCategory;                                               // 0x002C   (0x0008)  
	TWeakObjectPtr<class UObject*>                     TypeObject;                                                 // 0x0034   (0x0008)  
	bool                                               bHasCustomPinColor;                                         // 0x003C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x003D   (0x0003)  MISSED
	FLinearColor                                       CustomPinColor;                                             // 0x0040   (0x0010)  
	EOptimusDataTypeUsageFlags                         UsageFlags;                                                 // 0x0050   (0x0001)  
	EOptimusDataTypeFlags                              TypeFlags;                                                  // 0x0051   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x0052   (0x0006)  MISSED
};

/// Struct /Script/OptimusCore.OptimusVariableMetaDataEntry
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FOptimusVariableMetaDataEntry
{ 
	FName                                              Key;                                                        // 0x0000   (0x0008)  
	FString                                            Value;                                                      // 0x0008   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UOptimusComputeDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusComponentSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusComponentBindingProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusComputeKernelProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusDataInterfaceProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusExecutionDomainProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusGeneratedClassDefiner) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusNodeAdderPinProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusNodeFunctionLibraryOwner) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusNodeGraphCollectionOwner) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusNodePinRouter) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusParameterBindingProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusPathResolver) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusShaderTextProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusValueProvider) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusKernelSource) == 0x00A8); // 168 bytes (0x000098 - 0x0000A8)
static_assert(sizeof(UOptimusSceneComponentSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusSkinnedMeshComponentSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusSkeletalMeshComponentSource) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FOptimusDataTypeRef) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FOptimusAnimAttributeDescription) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(FOptimusAnimAttributeArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UOptimusAnimAttributeDataInterface) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOptimusAnimAttributeDataProvider) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UOptimusClothDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusClothDataProvider) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UOptimusConnectivityDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusConnectivityDataProvider) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FOptimusDebugDrawParameters) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(UOptimusDebugDrawDataInterface) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UOptimusDebugDrawDataProvider) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(UOptimusDuplicateVerticesDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusDuplicateVerticesDataProvider) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FOptimusGraphVariableDescription) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UOptimusGraphDataInterface) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(UOptimusGraphDataProvider) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UOptimusHalfEdgeDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusHalfEdgeDataProvider) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UOptimusMorphTargetDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusMorphTargetDataProvider) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FOptimusDataDomain) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UOptimusRawBufferDataInterface) == 0x0078); // 120 bytes (0x000028 - 0x000078)
static_assert(sizeof(UOptimusTransientBufferDataInterface) == 0x0078); // 120 bytes (0x000078 - 0x000078)
static_assert(sizeof(UOptimusPersistentBufferDataInterface) == 0x0080); // 128 bytes (0x000078 - 0x000080)
static_assert(sizeof(UOptimusRawBufferDataProvider) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UOptimusTransientBufferDataProvider) == 0x0080); // 128 bytes (0x000080 - 0x000080)
static_assert(sizeof(UOptimusPersistentBufferDataProvider) == 0x0098); // 152 bytes (0x000080 - 0x000098)
static_assert(sizeof(UOptimusSceneDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusSceneDataProvider) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UOptimusSkeletonDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusSkeletonDataProvider) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UOptimusSkinnedMeshDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusSkinnedMeshDataProvider) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UOptimusSkinnedMeshExecDataInterface) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(UOptimusSkinnedMeshExecDataProvider) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOptimusSkinnedMeshWriteDataInterface) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusSkinnedMeshWriteDataProvider) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOptimusNode) == 0x0110); // 272 bytes (0x000028 - 0x000110)
static_assert(sizeof(UOptimusNode_DataInterface) == 0x0128); // 296 bytes (0x000110 - 0x000128)
static_assert(sizeof(UOptimusNode_AnimAttributeDataInterface) == 0x0128); // 296 bytes (0x000128 - 0x000128)
static_assert(sizeof(UOptimusNode_ComponentSource) == 0x0120); // 288 bytes (0x000110 - 0x000120)
static_assert(sizeof(UOptimusNode_ComputeKernelBase) == 0x0118); // 280 bytes (0x000110 - 0x000118)
static_assert(sizeof(FOptimusExecutionDomain) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FOptimusValidatedName) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FOptimusParameterBinding) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UOptimusNode_ComputeKernelFunctionGeneratorClass) == 0x0280); // 640 bytes (0x000220 - 0x000280)
static_assert(sizeof(UOptimusNode_ComputeKernelFunction) == 0x0118); // 280 bytes (0x000118 - 0x000118)
static_assert(sizeof(UOptimusNode_ConstantValueGeneratorClass) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UOptimusNode_ConstantValue) == 0x0120); // 288 bytes (0x000110 - 0x000120)
static_assert(sizeof(FOptimus_ShaderBinding) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FOptimusParameterBindingArray) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FOptimusSecondaryInputBindingsGroup) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FOptimusShaderText) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UOptimusNode_CustomComputeKernel) == 0x01F0); // 496 bytes (0x000118 - 0x0001F0)
static_assert(sizeof(UOptimusNode_FunctionReference) == 0x0120); // 288 bytes (0x000110 - 0x000120)
static_assert(sizeof(FOptimusNode_ResourceAccessorBase_DuplicationInfo) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(UOptimusNode_ResourceAccessorBase) == 0x0188); // 392 bytes (0x000110 - 0x000188)
static_assert(sizeof(UOptimusNode_GetResource) == 0x0188); // 392 bytes (0x000188 - 0x000188)
static_assert(sizeof(FOptimusNode_GetVariable_DuplicationInfo) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UOptimusNode_GetVariable) == 0x0148); // 328 bytes (0x000110 - 0x000148)
static_assert(sizeof(UOptimusNode_GraphTerminal) == 0x0128); // 296 bytes (0x000110 - 0x000128)
static_assert(sizeof(UOptimusNode_Resource) == 0x0188); // 392 bytes (0x000188 - 0x000188)
static_assert(sizeof(UOptimusNode_SetResource) == 0x0188); // 392 bytes (0x000188 - 0x000188)
static_assert(sizeof(UOptimusNode_SubGraphReference) == 0x0120); // 288 bytes (0x000110 - 0x000120)
static_assert(sizeof(UOptimusActionStack) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UOptimusComponentSourceBinding) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(UOptimusComputeGraph) == 0x00A0); // 160 bytes (0x000090 - 0x0000A0)
static_assert(sizeof(UOptimusComponentSourceBindingContainer) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOptimusVariableContainer) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOptimusResourceContainer) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(FOptimusComputeGraphInfo) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UOptimusDeformer) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(sizeof(FOptimusDeformerInstanceComponentBinding) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UOptimusDeformerInstanceSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FOptimusDeformerInstanceExecInfo) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UOptimusDeformerInstance) == 0x00E0); // 224 bytes (0x000028 - 0x0000E0)
static_assert(sizeof(UOptimusNodeGraph) == 0x0080); // 128 bytes (0x000028 - 0x000080)
static_assert(sizeof(UOptimusNodeSubGraph) == 0x00B0); // 176 bytes (0x000080 - 0x0000B0)
static_assert(sizeof(UOptimusFunctionNodeGraph) == 0x00B8); // 184 bytes (0x0000B0 - 0x0000B8)
static_assert(sizeof(UOptimusNodeLink) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UOptimusNodePin) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UOptimusResourceDescription) == 0x0090); // 144 bytes (0x000028 - 0x000090)
static_assert(sizeof(UOptimusSource) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UOptimusValueContainerGeneratorClass) == 0x0230); // 560 bytes (0x000220 - 0x000230)
static_assert(sizeof(UOptimusValueContainer) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOptimusVariableDescription) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(FOptimusAction) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FOptimusCompoundAction) == 0x0028); // 40 bytes (0x000018 - 0x000028)
static_assert(sizeof(FOptimusComponentBindingAction_AddBinding) == 0x0030); // 48 bytes (0x000018 - 0x000030)
static_assert(sizeof(FOptimusComponentBindingAction_RemoveBinding) == 0x0040); // 64 bytes (0x000018 - 0x000040)
static_assert(sizeof(FOptimusComponentBindingAction_RenameBinding) == 0x0028); // 40 bytes (0x000018 - 0x000028)
static_assert(sizeof(FOptimusComponentBindingAction_SetComponentSource) == 0x0040); // 64 bytes (0x000018 - 0x000040)
static_assert(sizeof(FOptimusNodeAction_RenameNode) == 0x0058); // 88 bytes (0x000018 - 0x000058)
static_assert(sizeof(FOptimusNodeAction_MoveNode) == 0x0048); // 72 bytes (0x000018 - 0x000048)
static_assert(sizeof(FOptimusNodeAction_SetPinValue) == 0x0048); // 72 bytes (0x000018 - 0x000048)
static_assert(sizeof(FOptimusNodeAction_SetPinName) == 0x0038); // 56 bytes (0x000018 - 0x000038)
static_assert(sizeof(FOptimusNodeAction_SetPinType) == 0x0038); // 56 bytes (0x000018 - 0x000038)
static_assert(sizeof(FOptimusNodeAction_SetPinDataDomain) == 0x00A8); // 168 bytes (0x000018 - 0x0000A8)
static_assert(sizeof(FOptimusNodeAction_ConnectAdderPin) == 0x0050); // 80 bytes (0x000018 - 0x000050)
static_assert(sizeof(FOptimusNodeAction_AddRemovePin) == 0x00B8); // 184 bytes (0x000018 - 0x0000B8)
static_assert(sizeof(FOptimusNodeAction_AddPin) == 0x00B8); // 184 bytes (0x0000B8 - 0x0000B8)
static_assert(sizeof(FOptimusNodeAction_AddGroupingPin) == 0x00B8); // 184 bytes (0x0000B8 - 0x0000B8)
static_assert(sizeof(FOptimusNodeAction_RemovePin) == 0x00B8); // 184 bytes (0x0000B8 - 0x0000B8)
static_assert(sizeof(FOptimusNodeAction_MovePin) == 0x0048); // 72 bytes (0x000018 - 0x000048)
static_assert(sizeof(FOptimusNodeGraphAction_AddGraph) == 0x0090); // 144 bytes (0x000018 - 0x000090)
static_assert(sizeof(FOptimusNodeGraphAction_RemoveGraph) == 0x0058); // 88 bytes (0x000018 - 0x000058)
static_assert(sizeof(FOptimusNodeGraphAction_RenameGraph) == 0x0038); // 56 bytes (0x000018 - 0x000038)
static_assert(sizeof(FOptimusNodeGraphAction_AddNode) == 0x00A0); // 160 bytes (0x000018 - 0x0000A0)
static_assert(sizeof(FOptimusNodeGraphAction_DuplicateNode) == 0x00A0); // 160 bytes (0x000018 - 0x0000A0)
static_assert(sizeof(FOptimusNodeGraphAction_RemoveNode) == 0x0060); // 96 bytes (0x000018 - 0x000060)
static_assert(sizeof(FOptimusNodeGraphAction_AddRemoveLink) == 0x0040); // 64 bytes (0x000018 - 0x000040)
static_assert(sizeof(FOptimusNodeGraphAction_AddLink) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(FOptimusNodeGraphAction_RemoveLink) == 0x0040); // 64 bytes (0x000040 - 0x000040)
static_assert(sizeof(FOptimusNodeGraphAction_PackageKernelFunction) == 0x00B0); // 176 bytes (0x000018 - 0x0000B0)
static_assert(sizeof(FOptimusNodeGraphAction_UnpackageKernelFunction) == 0x0060); // 96 bytes (0x000018 - 0x000060)
static_assert(sizeof(FOptimusResourceAction_AddResource) == 0x0070); // 112 bytes (0x000018 - 0x000070)
static_assert(sizeof(FOptimusResourceAction_RemoveResource) == 0x0040); // 64 bytes (0x000018 - 0x000040)
static_assert(sizeof(FOptimusResourceAction_RenameResource) == 0x0028); // 40 bytes (0x000018 - 0x000028)
static_assert(sizeof(FOptimusResourceAction_SetDataType) == 0x0040); // 64 bytes (0x000018 - 0x000040)
static_assert(sizeof(FOptimusResourceAction_SetDataDomain) == 0x00A0); // 160 bytes (0x000018 - 0x0000A0)
static_assert(sizeof(FOptimusVariableAction_AddVariable) == 0x0030); // 48 bytes (0x000018 - 0x000030)
static_assert(sizeof(FOptimusVariableAction_RemoveVariable) == 0x0040); // 64 bytes (0x000018 - 0x000040)
static_assert(sizeof(FOptimusVariableAction_RenameVariable) == 0x0028); // 40 bytes (0x000018 - 0x000028)
static_assert(sizeof(FOptimusVariableAction_SetDataType) == 0x0040); // 64 bytes (0x000018 - 0x000040)
static_assert(sizeof(FOptimusDataType) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FOptimusVariableMetaDataEntry) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(UOptimusKernelSource, Source) == 0x0098);
static_assert(offsetof(FOptimusDataTypeRef, TypeName) == 0x0000);
static_assert(offsetof(FOptimusDataTypeRef, TypeObject) == 0x0008);
static_assert(offsetof(FOptimusAnimAttributeDescription, Name) == 0x0000);
static_assert(offsetof(FOptimusAnimAttributeDescription, BoneName) == 0x0010);
static_assert(offsetof(FOptimusAnimAttributeDescription, DataType) == 0x0018);
static_assert(offsetof(FOptimusAnimAttributeDescription, DefaultValue) == 0x0028);
static_assert(offsetof(FOptimusAnimAttributeDescription, HlslId) == 0x0030);
static_assert(offsetof(FOptimusAnimAttributeDescription, PinName) == 0x0040);
static_assert(offsetof(FOptimusAnimAttributeArray, InnerArray) == 0x0000);
static_assert(offsetof(UOptimusAnimAttributeDataInterface, AttributeArray) == 0x0028);
static_assert(offsetof(UOptimusAnimAttributeDataProvider, SkeletalMesh) == 0x0028);
static_assert(offsetof(UOptimusClothDataProvider, SkinnedMesh) == 0x0028);
static_assert(offsetof(UOptimusConnectivityDataProvider, SkinnedMesh) == 0x0028);
static_assert(offsetof(UOptimusDebugDrawDataInterface, DebugDrawParameters) == 0x0028);
static_assert(offsetof(UOptimusDebugDrawDataProvider, PrimitiveComponent) == 0x0028);
static_assert(offsetof(UOptimusDebugDrawDataProvider, DebugDrawParameters) == 0x0030);
static_assert(offsetof(UOptimusDuplicateVerticesDataProvider, SkinnedMesh) == 0x0028);
static_assert(offsetof(FOptimusGraphVariableDescription, Name) == 0x0000);
static_assert(offsetof(FOptimusGraphVariableDescription, ValueType) == 0x0010);
static_assert(offsetof(FOptimusGraphVariableDescription, Value) == 0x0018);
static_assert(offsetof(UOptimusGraphDataInterface, Variables) == 0x0028);
static_assert(offsetof(UOptimusGraphDataProvider, MeshComponent) == 0x0028);
static_assert(offsetof(UOptimusGraphDataProvider, DeformerInstance) == 0x0030);
static_assert(offsetof(UOptimusGraphDataProvider, Variables) == 0x0038);
static_assert(offsetof(UOptimusHalfEdgeDataProvider, SkinnedMesh) == 0x0028);
static_assert(offsetof(UOptimusMorphTargetDataProvider, SkinnedMesh) == 0x0028);
static_assert(offsetof(FOptimusDataDomain, Type) == 0x0000);
static_assert(offsetof(FOptimusDataDomain, DimensionNames) == 0x0008);
static_assert(offsetof(FOptimusDataDomain, Expression) == 0x0020);
static_assert(offsetof(FOptimusDataDomain, LevelNames) == 0x0030);
static_assert(offsetof(UOptimusRawBufferDataInterface, ValueType) == 0x0028);
static_assert(offsetof(UOptimusRawBufferDataInterface, DataDomain) == 0x0030);
static_assert(offsetof(UOptimusRawBufferDataInterface, ComponentSourceBinding) == 0x0070);
static_assert(offsetof(UOptimusPersistentBufferDataInterface, ResourceName) == 0x0078);
static_assert(offsetof(UOptimusRawBufferDataProvider, Component) == 0x0028);
static_assert(offsetof(UOptimusRawBufferDataProvider, ComponentSource) == 0x0030);
static_assert(offsetof(UOptimusRawBufferDataProvider, DataDomain) == 0x0038);
static_assert(offsetof(UOptimusSceneDataProvider, SceneComponent) == 0x0028);
static_assert(offsetof(UOptimusSkeletonDataProvider, SkinnedMesh) == 0x0028);
static_assert(offsetof(UOptimusSkinnedMeshDataProvider, SkinnedMesh) == 0x0028);
static_assert(offsetof(UOptimusSkinnedMeshExecDataInterface, Domain) == 0x0028);
static_assert(offsetof(UOptimusSkinnedMeshExecDataProvider, SkinnedMesh) == 0x0028);
static_assert(offsetof(UOptimusSkinnedMeshExecDataProvider, Domain) == 0x0030);
static_assert(offsetof(UOptimusSkinnedMeshWriteDataProvider, SkinnedMesh) == 0x0028);
static_assert(offsetof(UOptimusNode, DisplayName) == 0x0030);
static_assert(offsetof(UOptimusNode, GraphPosition) == 0x0048);
static_assert(offsetof(UOptimusNode, Pins) == 0x0058);
static_assert(offsetof(UOptimusNode, DiagnosticLevel) == 0x00B8);
static_assert(offsetof(UOptimusNode_DataInterface, DataInterfaceClass) == 0x0118);
static_assert(offsetof(UOptimusNode_DataInterface, DataInterfaceData) == 0x0120);
static_assert(offsetof(UOptimusNode_ComponentSource, Binding) == 0x0118);
static_assert(offsetof(FOptimusExecutionDomain, Name) == 0x0000);
static_assert(offsetof(FOptimusValidatedName, Name) == 0x0000);
static_assert(offsetof(FOptimusParameterBinding, Name) == 0x0000);
static_assert(offsetof(FOptimusParameterBinding, DataType) == 0x0008);
static_assert(offsetof(FOptimusParameterBinding, DataDomain) == 0x0018);
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, Category) == 0x0220);
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, KernelName) == 0x0228);
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, ExecutionDomain) == 0x0230);
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, GroupSize) == 0x0238);
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, InputBindings) == 0x0248);
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, OutputBindings) == 0x0258);
static_assert(offsetof(UOptimusNode_ComputeKernelFunctionGeneratorClass, ShaderSource) == 0x0268);
static_assert(offsetof(UOptimusNode_ConstantValueGeneratorClass, DataType) == 0x0220);
static_assert(offsetof(FOptimus_ShaderBinding, Name) == 0x0000);
static_assert(offsetof(FOptimus_ShaderBinding, DataType) == 0x0008);
static_assert(offsetof(FOptimusParameterBindingArray, InnerArray) == 0x0000);
static_assert(offsetof(FOptimusSecondaryInputBindingsGroup, GroupName) == 0x0000);
static_assert(offsetof(FOptimusSecondaryInputBindingsGroup, BindingArray) == 0x0008);
static_assert(offsetof(FOptimusShaderText, Declarations) == 0x0000);
static_assert(offsetof(FOptimusShaderText, ShaderText) == 0x0010);
static_assert(offsetof(UOptimusNode_CustomComputeKernel, Category) == 0x0138);
static_assert(offsetof(UOptimusNode_CustomComputeKernel, KernelName) == 0x0140);
static_assert(offsetof(UOptimusNode_CustomComputeKernel, ExecutionDomain) == 0x0148);
static_assert(offsetof(UOptimusNode_CustomComputeKernel, GroupSize) == 0x0150);
static_assert(offsetof(UOptimusNode_CustomComputeKernel, Parameters) == 0x0160);
static_assert(offsetof(UOptimusNode_CustomComputeKernel, InputBindings) == 0x0170);
static_assert(offsetof(UOptimusNode_CustomComputeKernel, OutputBindings) == 0x0180);
static_assert(offsetof(UOptimusNode_CustomComputeKernel, InputBindingArray) == 0x0190);
static_assert(offsetof(UOptimusNode_CustomComputeKernel, OutputBindingArray) == 0x01A0);
static_assert(offsetof(UOptimusNode_CustomComputeKernel, SecondaryInputBindingGroups) == 0x01B0);
static_assert(offsetof(UOptimusNode_CustomComputeKernel, AdditionalSources) == 0x01C0);
static_assert(offsetof(UOptimusNode_CustomComputeKernel, ShaderSource) == 0x01D0);
static_assert(offsetof(UOptimusNode_FunctionReference, FunctionGraph) == 0x0118);
static_assert(offsetof(FOptimusNode_ResourceAccessorBase_DuplicationInfo, ResourceName) == 0x0000);
static_assert(offsetof(FOptimusNode_ResourceAccessorBase_DuplicationInfo, DataType) == 0x0008);
static_assert(offsetof(FOptimusNode_ResourceAccessorBase_DuplicationInfo, DataDomain) == 0x0018);
static_assert(offsetof(UOptimusNode_ResourceAccessorBase, ResourceDesc) == 0x0120);
static_assert(offsetof(UOptimusNode_ResourceAccessorBase, WriteType) == 0x0128);
static_assert(offsetof(UOptimusNode_ResourceAccessorBase, DuplicationInfo) == 0x0130);
static_assert(offsetof(FOptimusNode_GetVariable_DuplicationInfo, VariableName) == 0x0000);
static_assert(offsetof(FOptimusNode_GetVariable_DuplicationInfo, DataType) == 0x0008);
static_assert(offsetof(FOptimusNode_GetVariable_DuplicationInfo, DefaultValue) == 0x0018);
static_assert(offsetof(UOptimusNode_GetVariable, VariableDesc) == 0x0118);
static_assert(offsetof(UOptimusNode_GetVariable, DuplicationInfo) == 0x0120);
static_assert(offsetof(UOptimusNode_GraphTerminal, TerminalType) == 0x0118);
static_assert(offsetof(UOptimusNode_GraphTerminal, OwningGraph) == 0x011C);
static_assert(offsetof(UOptimusNode_SubGraphReference, SubGraph) == 0x0118);
static_assert(offsetof(UOptimusComponentSourceBinding, BindingName) == 0x0028);
static_assert(offsetof(UOptimusComponentSourceBinding, ComponentType) == 0x0030);
static_assert(offsetof(UOptimusComponentSourceBinding, ComponentTags) == 0x0038);
static_assert(offsetof(UOptimusComponentSourceBindingContainer, Bindings) == 0x0028);
static_assert(offsetof(UOptimusVariableContainer, Descriptions) == 0x0028);
static_assert(offsetof(UOptimusResourceContainer, Descriptions) == 0x0028);
static_assert(offsetof(FOptimusComputeGraphInfo, GraphType) == 0x0000);
static_assert(offsetof(FOptimusComputeGraphInfo, GraphName) == 0x0004);
static_assert(offsetof(FOptimusComputeGraphInfo, ComputeGraph) == 0x0010);
static_assert(offsetof(UOptimusDeformer, Mesh) == 0x0048);
static_assert(offsetof(UOptimusDeformer, ComputeGraphs) == 0x0050);
static_assert(offsetof(UOptimusDeformer, ActionStack) == 0x0060);
static_assert(offsetof(UOptimusDeformer, Graphs) == 0x0068);
static_assert(offsetof(UOptimusDeformer, Bindings) == 0x0078);
static_assert(offsetof(UOptimusDeformer, Variables) == 0x0080);
static_assert(offsetof(UOptimusDeformer, Resources) == 0x0088);
static_assert(offsetof(FOptimusDeformerInstanceComponentBinding, ProviderName) == 0x0000);
static_assert(offsetof(FOptimusDeformerInstanceComponentBinding, ComponentName) == 0x0008);
static_assert(offsetof(UOptimusDeformerInstanceSettings, Deformer) == 0x0028);
static_assert(offsetof(UOptimusDeformerInstanceSettings, Bindings) == 0x0030);
static_assert(offsetof(FOptimusDeformerInstanceExecInfo, GraphName) == 0x0000);
static_assert(offsetof(FOptimusDeformerInstanceExecInfo, GraphType) == 0x0008);
static_assert(offsetof(FOptimusDeformerInstanceExecInfo, ComputeGraph) == 0x0010);
static_assert(offsetof(FOptimusDeformerInstanceExecInfo, ComputeGraphInstance) == 0x0018);
static_assert(offsetof(UOptimusDeformerInstance, MeshComponent) == 0x0028);
static_assert(offsetof(UOptimusDeformerInstance, InstanceSettings) == 0x0030);
static_assert(offsetof(UOptimusDeformerInstance, ComputeGraphExecInfos) == 0x0038);
static_assert(offsetof(UOptimusDeformerInstance, Variables) == 0x0048);
static_assert(offsetof(UOptimusNodeGraph, GraphType) == 0x0030);
static_assert(offsetof(UOptimusNodeGraph, Nodes) == 0x0038);
static_assert(offsetof(UOptimusNodeGraph, Links) == 0x0048);
static_assert(offsetof(UOptimusNodeGraph, Subgraphs) == 0x0058);
static_assert(offsetof(UOptimusNodeSubGraph, InputBindings) == 0x0080);
static_assert(offsetof(UOptimusNodeSubGraph, OutputBindings) == 0x0090);
static_assert(offsetof(UOptimusNodeSubGraph, EntryNode) == 0x00A0);
static_assert(offsetof(UOptimusNodeSubGraph, ReturnNode) == 0x00A8);
static_assert(offsetof(UOptimusFunctionNodeGraph, Category) == 0x00B0);
static_assert(offsetof(UOptimusNodeLink, NodeOutputPin) == 0x0028);
static_assert(offsetof(UOptimusNodeLink, NodeInputPin) == 0x0030);
static_assert(offsetof(UOptimusNodePin, Direction) == 0x0029);
static_assert(offsetof(UOptimusNodePin, StorageType) == 0x002A);
static_assert(offsetof(UOptimusNodePin, DataDomain) == 0x0030);
static_assert(offsetof(UOptimusNodePin, DataType) == 0x0070);
static_assert(offsetof(UOptimusNodePin, SubPins) == 0x0080);
static_assert(offsetof(UOptimusResourceDescription, ResourceName) == 0x0028);
static_assert(offsetof(UOptimusResourceDescription, DataType) == 0x0030);
static_assert(offsetof(UOptimusResourceDescription, ComponentBinding) == 0x0040);
static_assert(offsetof(UOptimusResourceDescription, DataDomain) == 0x0048);
static_assert(offsetof(UOptimusResourceDescription, DataInterface) == 0x0088);
static_assert(offsetof(UOptimusSource, SourceText) == 0x0040);
static_assert(offsetof(UOptimusValueContainerGeneratorClass, DataType) == 0x0220);
static_assert(offsetof(UOptimusVariableDescription, Guid) == 0x0028);
static_assert(offsetof(UOptimusVariableDescription, VariableName) == 0x0038);
static_assert(offsetof(UOptimusVariableDescription, DataType) == 0x0040);
static_assert(offsetof(UOptimusVariableDescription, DefaultValue) == 0x0050);
static_assert(offsetof(UOptimusVariableDescription, ValueData) == 0x0058);
static_assert(offsetof(FOptimusDataType, TypeName) == 0x0000);
static_assert(offsetof(FOptimusDataType, DisplayName) == 0x0008);
static_assert(offsetof(FOptimusDataType, ShaderValueType) == 0x0020);
static_assert(offsetof(FOptimusDataType, TypeCategory) == 0x002C);
static_assert(offsetof(FOptimusDataType, TypeObject) == 0x0034);
static_assert(offsetof(FOptimusDataType, CustomPinColor) == 0x0040);
static_assert(offsetof(FOptimusDataType, UsageFlags) == 0x0050);
static_assert(offsetof(FOptimusDataType, TypeFlags) == 0x0051);
static_assert(offsetof(FOptimusVariableMetaDataEntry, Key) == 0x0000);
static_assert(offsetof(FOptimusVariableMetaDataEntry, Value) == 0x0008);
