
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/MetasoundFrontend.ESetParamResult
/// Size: 0x01 (1 bytes)
enum class ESetParamResult : uint8_t
{
	ESetParamResult__Succeeded                                                       = 0,
	ESetParamResult__Failed                                                          = 1
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendVertexAccessType
/// Size: 0x04 (4 bytes)
enum class EMetasoundFrontendVertexAccessType : uint32_t
{
	EMetasoundFrontendVertexAccessType__Reference                                    = 0,
	EMetasoundFrontendVertexAccessType__Value                                        = 1,
	EMetasoundFrontendVertexAccessType__Unset                                        = 2
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendClassType
/// Size: 0x01 (1 bytes)
enum class EMetasoundFrontendClassType : uint8_t
{
	EMetasoundFrontendClassType__External                                            = 0,
	EMetasoundFrontendClassType__Graph                                               = 1,
	EMetasoundFrontendClassType__Input                                               = 2,
	EMetasoundFrontendClassType__Output                                              = 3,
	EMetasoundFrontendClassType__Literal                                             = 4,
	EMetasoundFrontendClassType__Variable                                            = 5,
	EMetasoundFrontendClassType__VariableDeferredAccessor                            = 6,
	EMetasoundFrontendClassType__VariableAccessor                                    = 7,
	EMetasoundFrontendClassType__VariableMutator                                     = 8,
	EMetasoundFrontendClassType__Template                                            = 9,
	EMetasoundFrontendClassType__Invalid                                             = 10
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendNodeStyleDisplayVisibility
/// Size: 0x01 (1 bytes)
enum class EMetasoundFrontendNodeStyleDisplayVisibility : uint8_t
{
	EMetasoundFrontendNodeStyleDisplayVisibility__Visible                            = 0,
	EMetasoundFrontendNodeStyleDisplayVisibility__Hidden                             = 1
};

/// Enum /Script/MetasoundFrontend.EMetasoundFrontendLiteralType
/// Size: 0x01 (1 bytes)
enum class EMetasoundFrontendLiteralType : uint8_t
{
	EMetasoundFrontendLiteralType__None                                              = 0,
	EMetasoundFrontendLiteralType__Boolean                                           = 1,
	EMetasoundFrontendLiteralType__Integer                                           = 2,
	EMetasoundFrontendLiteralType__Float                                             = 3,
	EMetasoundFrontendLiteralType__String                                            = 4,
	EMetasoundFrontendLiteralType__UObject                                           = 5,
	EMetasoundFrontendLiteralType__NoneArray                                         = 6,
	EMetasoundFrontendLiteralType__BooleanArray                                      = 7,
	EMetasoundFrontendLiteralType__IntegerArray                                      = 8,
	EMetasoundFrontendLiteralType__FloatArray                                        = 9,
	EMetasoundFrontendLiteralType__StringArray                                       = 10,
	EMetasoundFrontendLiteralType__UObjectArray                                      = 11,
	EMetasoundFrontendLiteralType__Invalid                                           = 12
};

/// Class /Script/MetasoundFrontend.MetasoundParameterPack
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMetasoundParameterPack : public UObject
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0028   (0x0018)  MISSED


	/// Functions
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetTrigger
	// ESetParamResult SetTrigger(FName ParameterName, bool OnlyIfExists);                                                      // [0x25b3020] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetString
	// ESetParamResult SetString(FName ParameterName, FString InValue, bool OnlyIfExists);                                      // [0x25b2e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetInt
	// ESetParamResult SetInt(FName ParameterName, int32_t InValue, bool OnlyIfExists);                                         // [0x25b2c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetFloat
	// ESetParamResult SetFloat(FName ParameterName, float InValue, bool OnlyIfExists);                                         // [0x25b2ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.SetBool
	// ESetParamResult SetBool(FName ParameterName, bool InValue, bool OnlyIfExists);                                           // [0x25b2920] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.MakeMetasoundParameterPack
	// class UMetasoundParameterPack* MakeMetasoundParameterPack();                                                             // [0x25b2860] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasTrigger
	// bool HasTrigger(FName ParameterName);                                                                                    // [0x25b2770] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasString
	// bool HasString(FName ParameterName);                                                                                     // [0x25b2680] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasInt
	// bool HasInt(FName ParameterName);                                                                                        // [0x25b2590] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasFloat
	// bool HasFloat(FName ParameterName);                                                                                      // [0x25b24a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.HasBool
	// bool HasBool(FName ParameterName);                                                                                       // [0x25b23b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetTrigger
	// bool GetTrigger(FName ParameterName, ESetParamResult& Result);                                                           // [0x25b2260] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetString
	// FString GetString(FName ParameterName, ESetParamResult& Result);                                                         // [0x25b2090] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetInt
	// int32_t GetInt(FName ParameterName, ESetParamResult& Result);                                                            // [0x25b1f40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetFloat
	// float GetFloat(FName ParameterName, ESetParamResult& Result);                                                            // [0x25b1e00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundFrontend.MetasoundParameterPack.GetBool
	// bool GetBool(FName ParameterName, ESetParamResult& Result);                                                              // [0x25b1cb0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersionNumber
/// Size: 0x0008 (8 bytes) (0x000000 - 0x000008) align 4 MaxSize: 0x0008
struct FMetasoundFrontendVersionNumber
{ 
	int32_t                                            Major;                                                      // 0x0000   (0x0004)  
	int32_t                                            Minor;                                                      // 0x0004   (0x0004)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVersion
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMetasoundFrontendVersion
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FMetasoundFrontendVersionNumber                    Number;                                                     // 0x0008   (0x0008)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertex
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 4 MaxSize: 0x0020
struct FMetasoundFrontendVertex
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              TypeName;                                                   // 0x0008   (0x0008)  
	FGuid                                              VertexID;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendLiteral
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMetasoundFrontendLiteral
{ 
	EMetasoundFrontendLiteralType                      Type;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0001   (0x0003)  MISSED
	int32_t                                            AsNumDefault;                                               // 0x0004   (0x0004)  
	TArray<bool>                                       AsBoolean;                                                  // 0x0008   (0x0010)  
	TArray<int32_t>                                    AsInteger;                                                  // 0x0018   (0x0010)  
	TArray<float>                                      AsFloat;                                                    // 0x0028   (0x0010)  
	TArray<FString>                                    AsString;                                                   // 0x0038   (0x0010)  
	TArray<class UObject*>                             AsUObject;                                                  // 0x0048   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexLiteral
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMetasoundFrontendVertexLiteral
{ 
	FGuid                                              VertexID;                                                   // 0x0000   (0x0010)  
	FMetasoundFrontendLiteral                          Value;                                                      // 0x0010   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVariable
/// Size: 0x00B8 (184 bytes) (0x000000 - 0x0000B8) align 8 MaxSize: 0x00B8
struct FMetasoundFrontendVariable
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              TypeName;                                                   // 0x0008   (0x0008)  
	FMetasoundFrontendLiteral                          Literal;                                                    // 0x0010   (0x0058)  
	FGuid                                              ID;                                                         // 0x0068   (0x0010)  
	FGuid                                              VariableNodeID;                                             // 0x0078   (0x0010)  
	FGuid                                              MutatorNodeID;                                              // 0x0088   (0x0010)  
	TArray<FGuid>                                      AccessorNodeIDs;                                            // 0x0098   (0x0010)  
	TArray<FGuid>                                      DeferredAccessorNodeIDs;                                    // 0x00A8   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeInterface
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMetasoundFrontendNodeInterface
{ 
	TArray<FMetasoundFrontendVertex>                   Inputs;                                                     // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendVertex>                   Outputs;                                                    // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendVertex>                   Environment;                                                // 0x0020   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyleDisplay
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendNodeStyleDisplay
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNodeStyle
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendNodeStyle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendNode
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMetasoundFrontendNode
{ 
	FGuid                                              ID;                                                         // 0x0000   (0x0010)  
	FGuid                                              ClassID;                                                    // 0x0010   (0x0010)  
	FName                                              Name;                                                       // 0x0020   (0x0008)  
	FMetasoundFrontendNodeInterface                    Interface;                                                  // 0x0028   (0x0030)  
	TArray<FMetasoundFrontendVertexLiteral>            InputLiterals;                                              // 0x0058   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdge
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 4 MaxSize: 0x0040
struct FMetasoundFrontendEdge
{ 
	FGuid                                              FromNodeID;                                                 // 0x0000   (0x0010)  
	FGuid                                              FromVertexID;                                               // 0x0010   (0x0010)  
	FGuid                                              ToNodeID;                                                   // 0x0020   (0x0010)  
	FGuid                                              ToVertexID;                                                 // 0x0030   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyleLiteralColorPair
/// Size: 0x0068 (104 bytes) (0x000000 - 0x000068) align 8 MaxSize: 0x0068
struct FMetasoundFrontendEdgeStyleLiteralColorPair
{ 
	FMetasoundFrontendLiteral                          Value;                                                      // 0x0000   (0x0058)  
	FLinearColor                                       Color;                                                      // 0x0058   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendEdgeStyle
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FMetasoundFrontendEdgeStyle
{ 
	FGuid                                              NodeID;                                                     // 0x0000   (0x0010)  
	FName                                              OutputName;                                                 // 0x0010   (0x0008)  
	TArray<FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;                                         // 0x0018   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphStyle
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FMetasoundFrontendGraphStyle
{ 
	bool                                               bIsGraphEditable;                                           // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FMetasoundFrontendEdgeStyle>                EdgeStyles;                                                 // 0x0008   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraph
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMetasoundFrontendGraph
{ 
	TArray<FMetasoundFrontendNode>                     Nodes;                                                      // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendEdge>                     Edges;                                                      // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendVariable>                 Variables;                                                  // 0x0020   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendVertexMetadata
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendVertexMetadata
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVertex
/// Size: 0x0034 (52 bytes) (0x000020 - 0x000034) align 4 MaxSize: 0x0034
struct FMetasoundFrontendClassVertex : FMetasoundFrontendVertex
{ 
	FGuid                                              NodeID;                                                     // 0x0020   (0x0010)  
	EMetasoundFrontendVertexAccessType                 AccessType;                                                 // 0x0030   (0x0004)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyleDisplay
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendClassStyleDisplay
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInput
/// Size: 0x0090 (144 bytes) (0x000034 - 0x000090) align 8 MaxSize: 0x0090
struct FMetasoundFrontendClassInput : FMetasoundFrontendClassVertex
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x0034   (0x0004)  MISSED
	FMetasoundFrontendLiteral                          DefaultLiteral;                                             // 0x0038   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassVariable
/// Size: 0x0090 (144 bytes) (0x000034 - 0x000090) align 8 MaxSize: 0x0090
struct FMetasoundFrontendClassVariable : FMetasoundFrontendClassVertex
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x0034   (0x0004)  MISSED
	FMetasoundFrontendLiteral                          DefaultLiteral;                                             // 0x0038   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassOutput
/// Size: 0x0034 (52 bytes) (0x000034 - 0x000034) align 4 MaxSize: 0x0034
struct FMetasoundFrontendClassOutput : FMetasoundFrontendClassVertex
{ 
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassEnvironmentVariable
/// Size: 0x0014 (20 bytes) (0x000000 - 0x000014) align 4 MaxSize: 0x0014
struct FMetasoundFrontendClassEnvironmentVariable
{ 
	FName                                              Name;                                                       // 0x0000   (0x0008)  
	FName                                              TypeName;                                                   // 0x0008   (0x0008)  
	bool                                               bIsRequired;                                                // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0011   (0x0003)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterfaceStyle
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendInterfaceStyle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassInterface
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FMetasoundFrontendClassInterface
{ 
	TArray<FMetasoundFrontendClassInput>               Inputs;                                                     // 0x0000   (0x0010)  
	TArray<FMetasoundFrontendClassOutput>              Outputs;                                                    // 0x0010   (0x0010)  
	TArray<FMetasoundFrontendClassEnvironmentVariable> Environment;                                                // 0x0020   (0x0010)  
	FGuid                                              ChangeID;                                                   // 0x0030   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendInterface
/// Size: 0x0050 (80 bytes) (0x000040 - 0x000050) align 8 MaxSize: 0x0050
struct FMetasoundFrontendInterface : FMetasoundFrontendClassInterface
{ 
	FMetasoundFrontendVersion                          Version;                                                    // 0x0040   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassName
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 4 MaxSize: 0x0018
struct FMetasoundFrontendClassName
{ 
	FName                                              Namespace;                                                  // 0x0000   (0x0008)  
	FName                                              Name;                                                       // 0x0008   (0x0008)  
	FName                                              Variant;                                                    // 0x0010   (0x0008)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassMetadata
/// Size: 0x0034 (52 bytes) (0x000000 - 0x000034) align 4 MaxSize: 0x0034
struct FMetasoundFrontendClassMetadata
{ 
	FMetasoundFrontendClassName                        ClassName;                                                  // 0x0000   (0x0018)  
	FMetasoundFrontendVersionNumber                    Version;                                                    // 0x0018   (0x0008)  
	EMetasoundFrontendClassType                        Type;                                                       // 0x0020   (0x0001)  
	bool                                               bIsDeprecated;                                              // 0x0021   (0x0001)  
	bool                                               bAutoUpdateManagesInterface;                                // 0x0022   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0023   (0x0001)  MISSED
	FGuid                                              ChangeID;                                                   // 0x0024   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClassStyle
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMetasoundFrontendClassStyle
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendClass
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FMetasoundFrontendClass
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FGuid                                              ID;                                                         // 0x0008   (0x0010)  
	FMetasoundFrontendClassMetadata                    MetaData;                                                   // 0x0018   (0x0034)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x004C   (0x0004)  MISSED
	FMetasoundFrontendClassInterface                   Interface;                                                  // 0x0050   (0x0040)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClassPresetOptions
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FMetasoundFrontendGraphClassPresetOptions
{ 
	bool                                               bIsPreset;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	SDK_UNDEFINED(80,1259) /* TSet<FName> */           __um(InputsInheritingDefault);                              // 0x0008   (0x0050)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendGraphClass
/// Size: 0x0118 (280 bytes) (0x000090 - 0x000118) align 8 MaxSize: 0x0118
struct FMetasoundFrontendGraphClass : FMetasoundFrontendClass
{ 
	FMetasoundFrontendGraph                            Graph;                                                      // 0x0090   (0x0030)  
	FMetasoundFrontendGraphClassPresetOptions          PresetOptions;                                              // 0x00C0   (0x0058)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocumentMetadata
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FMetasoundFrontendDocumentMetadata
{ 
	FMetasoundFrontendVersion                          Version;                                                    // 0x0000   (0x0010)  
};

/// Struct /Script/MetasoundFrontend.MetasoundFrontendDocument
/// Size: 0x01C8 (456 bytes) (0x000000 - 0x0001C8) align 8 MaxSize: 0x01C8
struct FMetasoundFrontendDocument
{ 
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0000   (0x0010)  MISSED
	FMetasoundFrontendDocumentMetadata                 MetaData;                                                   // 0x0010   (0x0010)  
	SDK_UNDEFINED(80,1260) /* TSet<FMetasoundFrontendVersion> */ __um(Interfaces);                                 // 0x0020   (0x0050)  
	FMetasoundFrontendGraphClass                       RootGraph;                                                  // 0x0070   (0x0118)  
	TArray<FMetasoundFrontendGraphClass>               Subgraphs;                                                  // 0x0188   (0x0010)  
	TArray<FMetasoundFrontendClass>                    Dependencies;                                               // 0x0198   (0x0010)  
	FMetasoundFrontendVersion                          ArchetypeVersion;                                           // 0x01A8   (0x0010)  
	TArray<FMetasoundFrontendVersion>                  InterfaceVersions;                                          // 0x01B8   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UMetasoundParameterPack) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FMetasoundFrontendVersionNumber) == 0x0008); // 8 bytes (0x000000 - 0x000008)
static_assert(sizeof(FMetasoundFrontendVersion) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMetasoundFrontendVertex) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FMetasoundFrontendLiteral) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FMetasoundFrontendVertexLiteral) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FMetasoundFrontendVariable) == 0x00B8); // 184 bytes (0x000000 - 0x0000B8)
static_assert(sizeof(FMetasoundFrontendNodeInterface) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMetasoundFrontendNodeStyleDisplay) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMetasoundFrontendNodeStyle) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMetasoundFrontendNode) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FMetasoundFrontendEdge) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FMetasoundFrontendEdgeStyleLiteralColorPair) == 0x0068); // 104 bytes (0x000000 - 0x000068)
static_assert(sizeof(FMetasoundFrontendEdgeStyle) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(FMetasoundFrontendGraphStyle) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMetasoundFrontendGraph) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FMetasoundFrontendVertexMetadata) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMetasoundFrontendClassVertex) == 0x0034); // 52 bytes (0x000020 - 0x000034)
static_assert(sizeof(FMetasoundFrontendClassStyleDisplay) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMetasoundFrontendClassInput) == 0x0090); // 144 bytes (0x000034 - 0x000090)
static_assert(sizeof(FMetasoundFrontendClassVariable) == 0x0090); // 144 bytes (0x000034 - 0x000090)
static_assert(sizeof(FMetasoundFrontendClassOutput) == 0x0034); // 52 bytes (0x000034 - 0x000034)
static_assert(sizeof(FMetasoundFrontendClassEnvironmentVariable) == 0x0014); // 20 bytes (0x000000 - 0x000014)
static_assert(sizeof(FMetasoundFrontendInterfaceStyle) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMetasoundFrontendClassInterface) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FMetasoundFrontendInterface) == 0x0050); // 80 bytes (0x000040 - 0x000050)
static_assert(sizeof(FMetasoundFrontendClassName) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FMetasoundFrontendClassMetadata) == 0x0034); // 52 bytes (0x000000 - 0x000034)
static_assert(sizeof(FMetasoundFrontendClassStyle) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FMetasoundFrontendClass) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FMetasoundFrontendGraphClassPresetOptions) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FMetasoundFrontendGraphClass) == 0x0118); // 280 bytes (0x000090 - 0x000118)
static_assert(sizeof(FMetasoundFrontendDocumentMetadata) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FMetasoundFrontendDocument) == 0x01C8); // 456 bytes (0x000000 - 0x0001C8)
static_assert(offsetof(FMetasoundFrontendVersion, Name) == 0x0000);
static_assert(offsetof(FMetasoundFrontendVersion, Number) == 0x0008);
static_assert(offsetof(FMetasoundFrontendVertex, Name) == 0x0000);
static_assert(offsetof(FMetasoundFrontendVertex, TypeName) == 0x0008);
static_assert(offsetof(FMetasoundFrontendVertex, VertexID) == 0x0010);
static_assert(offsetof(FMetasoundFrontendLiteral, Type) == 0x0000);
static_assert(offsetof(FMetasoundFrontendLiteral, AsBoolean) == 0x0008);
static_assert(offsetof(FMetasoundFrontendLiteral, AsInteger) == 0x0018);
static_assert(offsetof(FMetasoundFrontendLiteral, AsFloat) == 0x0028);
static_assert(offsetof(FMetasoundFrontendLiteral, AsString) == 0x0038);
static_assert(offsetof(FMetasoundFrontendLiteral, AsUObject) == 0x0048);
static_assert(offsetof(FMetasoundFrontendVertexLiteral, VertexID) == 0x0000);
static_assert(offsetof(FMetasoundFrontendVertexLiteral, Value) == 0x0010);
static_assert(offsetof(FMetasoundFrontendVariable, Name) == 0x0000);
static_assert(offsetof(FMetasoundFrontendVariable, TypeName) == 0x0008);
static_assert(offsetof(FMetasoundFrontendVariable, Literal) == 0x0010);
static_assert(offsetof(FMetasoundFrontendVariable, ID) == 0x0068);
static_assert(offsetof(FMetasoundFrontendVariable, VariableNodeID) == 0x0078);
static_assert(offsetof(FMetasoundFrontendVariable, MutatorNodeID) == 0x0088);
static_assert(offsetof(FMetasoundFrontendVariable, AccessorNodeIDs) == 0x0098);
static_assert(offsetof(FMetasoundFrontendVariable, DeferredAccessorNodeIDs) == 0x00A8);
static_assert(offsetof(FMetasoundFrontendNodeInterface, Inputs) == 0x0000);
static_assert(offsetof(FMetasoundFrontendNodeInterface, Outputs) == 0x0010);
static_assert(offsetof(FMetasoundFrontendNodeInterface, Environment) == 0x0020);
static_assert(offsetof(FMetasoundFrontendNode, ID) == 0x0000);
static_assert(offsetof(FMetasoundFrontendNode, ClassID) == 0x0010);
static_assert(offsetof(FMetasoundFrontendNode, Name) == 0x0020);
static_assert(offsetof(FMetasoundFrontendNode, Interface) == 0x0028);
static_assert(offsetof(FMetasoundFrontendNode, InputLiterals) == 0x0058);
static_assert(offsetof(FMetasoundFrontendEdge, FromNodeID) == 0x0000);
static_assert(offsetof(FMetasoundFrontendEdge, FromVertexID) == 0x0010);
static_assert(offsetof(FMetasoundFrontendEdge, ToNodeID) == 0x0020);
static_assert(offsetof(FMetasoundFrontendEdge, ToVertexID) == 0x0030);
static_assert(offsetof(FMetasoundFrontendEdgeStyleLiteralColorPair, Value) == 0x0000);
static_assert(offsetof(FMetasoundFrontendEdgeStyleLiteralColorPair, Color) == 0x0058);
static_assert(offsetof(FMetasoundFrontendEdgeStyle, NodeID) == 0x0000);
static_assert(offsetof(FMetasoundFrontendEdgeStyle, OutputName) == 0x0010);
static_assert(offsetof(FMetasoundFrontendEdgeStyle, LiteralColorPairs) == 0x0018);
static_assert(offsetof(FMetasoundFrontendGraphStyle, EdgeStyles) == 0x0008);
static_assert(offsetof(FMetasoundFrontendGraph, Nodes) == 0x0000);
static_assert(offsetof(FMetasoundFrontendGraph, Edges) == 0x0010);
static_assert(offsetof(FMetasoundFrontendGraph, Variables) == 0x0020);
static_assert(offsetof(FMetasoundFrontendClassVertex, NodeID) == 0x0020);
static_assert(offsetof(FMetasoundFrontendClassVertex, AccessType) == 0x0030);
static_assert(offsetof(FMetasoundFrontendClassInput, DefaultLiteral) == 0x0038);
static_assert(offsetof(FMetasoundFrontendClassVariable, DefaultLiteral) == 0x0038);
static_assert(offsetof(FMetasoundFrontendClassEnvironmentVariable, Name) == 0x0000);
static_assert(offsetof(FMetasoundFrontendClassEnvironmentVariable, TypeName) == 0x0008);
static_assert(offsetof(FMetasoundFrontendClassInterface, Inputs) == 0x0000);
static_assert(offsetof(FMetasoundFrontendClassInterface, Outputs) == 0x0010);
static_assert(offsetof(FMetasoundFrontendClassInterface, Environment) == 0x0020);
static_assert(offsetof(FMetasoundFrontendClassInterface, ChangeID) == 0x0030);
static_assert(offsetof(FMetasoundFrontendInterface, Version) == 0x0040);
static_assert(offsetof(FMetasoundFrontendClassName, Namespace) == 0x0000);
static_assert(offsetof(FMetasoundFrontendClassName, Name) == 0x0008);
static_assert(offsetof(FMetasoundFrontendClassName, Variant) == 0x0010);
static_assert(offsetof(FMetasoundFrontendClassMetadata, ClassName) == 0x0000);
static_assert(offsetof(FMetasoundFrontendClassMetadata, Version) == 0x0018);
static_assert(offsetof(FMetasoundFrontendClassMetadata, Type) == 0x0020);
static_assert(offsetof(FMetasoundFrontendClassMetadata, ChangeID) == 0x0024);
static_assert(offsetof(FMetasoundFrontendClass, ID) == 0x0008);
static_assert(offsetof(FMetasoundFrontendClass, MetaData) == 0x0018);
static_assert(offsetof(FMetasoundFrontendClass, Interface) == 0x0050);
static_assert(offsetof(FMetasoundFrontendGraphClass, Graph) == 0x0090);
static_assert(offsetof(FMetasoundFrontendGraphClass, PresetOptions) == 0x00C0);
static_assert(offsetof(FMetasoundFrontendDocumentMetadata, Version) == 0x0000);
static_assert(offsetof(FMetasoundFrontendDocument, MetaData) == 0x0010);
static_assert(offsetof(FMetasoundFrontendDocument, RootGraph) == 0x0070);
static_assert(offsetof(FMetasoundFrontendDocument, Subgraphs) == 0x0188);
static_assert(offsetof(FMetasoundFrontendDocument, Dependencies) == 0x0198);
static_assert(offsetof(FMetasoundFrontendDocument, ArchetypeVersion) == 0x01A8);
static_assert(offsetof(FMetasoundFrontendDocument, InterfaceVersions) == 0x01B8);
