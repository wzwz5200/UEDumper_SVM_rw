
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DataflowCore
/// dependency: Engine

#pragma pack(push, 0x1)

/// Struct /Script/DataflowNodes.FloatOverrideDataflowNode
/// Size: 0x0100 (256 bytes) (0x0000E8 - 0x000100) align 8 MaxSize: 0x0100
struct FFloatOverrideDataflowNode : FDataflowNode
{ 
	FName                                              PropertyName;                                               // 0x00E8   (0x0008)  
	FName                                              KeyName;                                                    // 0x00F0   (0x0008)  
	float                                              ValueOut;                                                   // 0x00F8   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x00FC   (0x0004)  MISSED
};

/// Struct /Script/DataflowNodes.SelectionSetDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FSelectionSetDataflowNode : FDataflowNode
{ 
	FString                                            Indices;                                                    // 0x00E8   (0x0010)  
	TArray<int32_t>                                    IndicesOut;                                                 // 0x00F8   (0x0010)  
};

/// Struct /Script/DataflowNodes.GetSkeletalMeshDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FGetSkeletalMeshDataflowNode : FDataflowNode
{ 
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x00E8   (0x0008)  
	FName                                              PropertyName;                                               // 0x00F0   (0x0008)  
};

/// Struct /Script/DataflowNodes.GetSkeletonDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FGetSkeletonDataflowNode : FDataflowNode
{ 
	class USkeleton*                                   Skeleton;                                                   // 0x00E8   (0x0008)  
	FName                                              PropertyName;                                               // 0x00F0   (0x0008)  
};

/// Struct /Script/DataflowNodes.SkeletalMeshBoneDataflowNode
/// Size: 0x0108 (264 bytes) (0x0000E8 - 0x000108) align 8 MaxSize: 0x0108
struct FSkeletalMeshBoneDataflowNode : FDataflowNode
{ 
	FName                                              BoneName;                                                   // 0x00E8   (0x0008)  
	class USkeletalMesh*                               SkeletalMesh;                                               // 0x00F0   (0x0008)  
	int32_t                                            BoneIndexOut;                                               // 0x00F8   (0x0004)  
	FName                                              PropertyName;                                               // 0x00FC   (0x0008)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0104   (0x0004)  MISSED
};

/// Struct /Script/DataflowNodes.SkeletalMeshReferenceTransformDataflowNode
/// Size: 0x0160 (352 bytes) (0x0000E8 - 0x000160) align 16 MaxSize: 0x0160
struct FSkeletalMeshReferenceTransformDataflowNode : FDataflowNode
{ 
	class USkeletalMesh*                               SkeletalMeshIn;                                             // 0x00E8   (0x0008)  
	int32_t                                            BoneIndexIn;                                                // 0x00F0   (0x0004)  
	unsigned char                                      UnknownData00_6[0xC];                                       // 0x00F4   (0x000C)  MISSED
	FTransform                                         TransformOut;                                               // 0x0100   (0x0060)  
};

/// Struct /Script/DataflowNodes.GetStaticMeshDataflowNode
/// Size: 0x00F8 (248 bytes) (0x0000E8 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FGetStaticMeshDataflowNode : FDataflowNode
{ 
	class UStaticMesh*                                 StaticMesh;                                                 // 0x00E8   (0x0008)  
	FName                                              PropertyName;                                               // 0x00F0   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(FFloatOverrideDataflowNode) == 0x0100); // 256 bytes (0x0000E8 - 0x000100)
static_assert(sizeof(FSelectionSetDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FGetSkeletalMeshDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FGetSkeletonDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(sizeof(FSkeletalMeshBoneDataflowNode) == 0x0108); // 264 bytes (0x0000E8 - 0x000108)
static_assert(sizeof(FSkeletalMeshReferenceTransformDataflowNode) == 0x0160); // 352 bytes (0x0000E8 - 0x000160)
static_assert(sizeof(FGetStaticMeshDataflowNode) == 0x00F8); // 248 bytes (0x0000E8 - 0x0000F8)
static_assert(offsetof(FFloatOverrideDataflowNode, PropertyName) == 0x00E8);
static_assert(offsetof(FFloatOverrideDataflowNode, KeyName) == 0x00F0);
static_assert(offsetof(FSelectionSetDataflowNode, Indices) == 0x00E8);
static_assert(offsetof(FSelectionSetDataflowNode, IndicesOut) == 0x00F8);
static_assert(offsetof(FGetSkeletalMeshDataflowNode, SkeletalMesh) == 0x00E8);
static_assert(offsetof(FGetSkeletalMeshDataflowNode, PropertyName) == 0x00F0);
static_assert(offsetof(FGetSkeletonDataflowNode, Skeleton) == 0x00E8);
static_assert(offsetof(FGetSkeletonDataflowNode, PropertyName) == 0x00F0);
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, BoneName) == 0x00E8);
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, SkeletalMesh) == 0x00F0);
static_assert(offsetof(FSkeletalMeshBoneDataflowNode, PropertyName) == 0x00FC);
static_assert(offsetof(FSkeletalMeshReferenceTransformDataflowNode, SkeletalMeshIn) == 0x00E8);
static_assert(offsetof(FSkeletalMeshReferenceTransformDataflowNode, TransformOut) == 0x0100);
static_assert(offsetof(FGetStaticMeshDataflowNode, StaticMesh) == 0x00E8);
static_assert(offsetof(FGetStaticMeshDataflowNode, PropertyName) == 0x00F0);
