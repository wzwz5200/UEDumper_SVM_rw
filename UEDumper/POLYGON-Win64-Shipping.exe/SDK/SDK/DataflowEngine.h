
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

/// Class /Script/DataflowEngine.DataflowBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDataflowBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/DataflowEngine.DataflowBlueprintLibrary.EvaluateTerminalNodeByName
	// void EvaluateTerminalNodeByName(class UDataflow* Dataflow, FName TerminalNodeName, class UObject* ResultAsset);          // [0x4008ad0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/DataflowEngine.DataflowEdNode
/// Size: 0x00C0 (192 bytes) (0x000098 - 0x0000C0) align 8 MaxSize: 0x00C0
class UDataflowEdNode : public UEdGraphNode
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x0098   (0x0020)  MISSED
	bool                                               bRenderInAssetEditor;                                       // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x00B9   (0x0007)  MISSED
};

/// Class /Script/DataflowEngine.Dataflow
/// Size: 0x00A8 (168 bytes) (0x000060 - 0x0000A8) align 8 MaxSize: 0x00A8
class UDataflow : public UEdGraph
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0060   (0x0028)  MISSED
	bool                                               bActive;                                                    // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0089   (0x0007)  MISSED
	TArray<class UObject*>                             Targets;                                                    // 0x0090   (0x0010)  
	class UMaterial*                                   Material;                                                   // 0x00A0   (0x0008)  
};

/// Struct /Script/DataflowEngine.StringValuePair
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FStringValuePair
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FString                                            Value;                                                      // 0x0010   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UDataflowBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDataflowEdNode) == 0x00C0); // 192 bytes (0x000098 - 0x0000C0)
static_assert(sizeof(UDataflow) == 0x00A8); // 168 bytes (0x000060 - 0x0000A8)
static_assert(sizeof(FStringValuePair) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(UDataflow, Targets) == 0x0090);
static_assert(offsetof(UDataflow, Material) == 0x00A0);
static_assert(offsetof(FStringValuePair, Key) == 0x0000);
static_assert(offsetof(FStringValuePair, Value) == 0x0010);
