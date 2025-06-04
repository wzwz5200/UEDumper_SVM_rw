
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PhysicsCore

#pragma pack(push, 0x1)

/// Enum /Script/GeometryFramework.EDynamicMeshComponentTangentsMode
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshComponentTangentsMode : uint8_t
{
	EDynamicMeshComponentTangentsMode__NoTangents                                    = 0,
	EDynamicMeshComponentTangentsMode__AutoCalculated                                = 1,
	EDynamicMeshComponentTangentsMode__ExternallyProvided                            = 2
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentColorOverrideMode
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshComponentColorOverrideMode : uint8_t
{
	EDynamicMeshComponentColorOverrideMode__None                                     = 0,
	EDynamicMeshComponentColorOverrideMode__VertexColors                             = 1,
	EDynamicMeshComponentColorOverrideMode__Polygroups                               = 2,
	EDynamicMeshComponentColorOverrideMode__Constant                                 = 3
};

/// Enum /Script/GeometryFramework.EDynamicMeshComponentRenderUpdateMode
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshComponentRenderUpdateMode : uint8_t
{
	EDynamicMeshComponentRenderUpdateMode__NoUpdate                                  = 0,
	EDynamicMeshComponentRenderUpdateMode__FullUpdate                                = 1,
	EDynamicMeshComponentRenderUpdateMode__FastUpdate                                = 2
};

/// Enum /Script/GeometryFramework.EDynamicMeshChangeType
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshChangeType : uint8_t
{
	EDynamicMeshChangeType__GeneralEdit                                              = 0,
	EDynamicMeshChangeType__MeshChange                                               = 1,
	EDynamicMeshChangeType__MeshReplacementChange                                    = 2,
	EDynamicMeshChangeType__MeshVertexChange                                         = 3,
	EDynamicMeshChangeType__DeformationEdit                                          = 4,
	EDynamicMeshChangeType__AttributeEdit                                            = 5
};

/// Enum /Script/GeometryFramework.EDynamicMeshAttributeChangeFlags
/// Size: 0x01 (1 bytes)
enum class EDynamicMeshAttributeChangeFlags : uint8_t
{
	EDynamicMeshAttributeChangeFlags__Unknown                                        = 0,
	EDynamicMeshAttributeChangeFlags__MeshTopology                                   = 1,
	EDynamicMeshAttributeChangeFlags__VertexPositions                                = 2,
	EDynamicMeshAttributeChangeFlags__NormalsTangents                                = 4,
	EDynamicMeshAttributeChangeFlags__VertexColors                                   = 8,
	EDynamicMeshAttributeChangeFlags__UVs                                            = 16,
	EDynamicMeshAttributeChangeFlags__TriangleGroups                                 = 32
};

/// Class /Script/GeometryFramework.BaseDynamicMeshComponent
/// Size: 0x0610 (1552 bytes) (0x0005A0 - 0x000610) align 16 MaxSize: 0x0610
class UBaseDynamicMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x20];                                      // 0x05A0   (0x0020)  MISSED
	bool                                               bExplicitShowWireframe;                                     // 0x05C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x05C1   (0x0003)  MISSED
	FLinearColor                                       WireframeColor;                                             // 0x05C4   (0x0010)  
	EDynamicMeshComponentColorOverrideMode             ColorMode;                                                  // 0x05D4   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x05D5   (0x0003)  MISSED
	FColor                                             ConstantColor;                                              // 0x05D8   (0x0004)  
	bool                                               bEnableFlatShading;                                         // 0x05DC   (0x0001)  
	bool                                               bEnableViewModeOverrides;                                   // 0x05DD   (0x0001)  
	unsigned char                                      UnknownData03_6[0x2];                                       // 0x05DE   (0x0002)  MISSED
	class UMaterialInterface*                          OverrideRenderMaterial;                                     // 0x05E0   (0x0008)  
	class UMaterialInterface*                          SecondaryRenderMaterial;                                    // 0x05E8   (0x0008)  
	unsigned char                                      UnknownData04_6[0x1];                                       // 0x05F0   (0x0001)  MISSED
	bool                                               bEnableRayTracing;                                          // 0x05F1   (0x0001)  
	unsigned char                                      UnknownData05_6[0x6];                                       // 0x05F2   (0x0006)  MISSED
	TArray<class UMaterialInterface*>                  BaseMaterials;                                              // 0x05F8   (0x0010)  
	unsigned char                                      UnknownData06_7[0x8];                                       // 0x0608   (0x0008)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetViewModeOverridesEnabled
	// void SetViewModeOverridesEnabled(bool bEnabled);                                                                         // [0x52ff9f0] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetShadowsEnabled
	// void SetShadowsEnabled(bool bEnabled);                                                                                   // [0x52ff8d0] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryRenderMaterial
	// void SetSecondaryRenderMaterial(class UMaterialInterface* Material);                                                     // [0x52ff840] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetSecondaryBuffersVisibility
	// void SetSecondaryBuffersVisibility(bool bSetVisible);                                                                    // [0x52ff7b0] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetOverrideRenderMaterial
	// void SetOverrideRenderMaterial(class UMaterialInterface* Material);                                                      // [0x52ff720] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableWireframeRenderPass
	// void SetEnableWireframeRenderPass(bool bEnable);                                                                         // [0x52ff690] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableRaytracing
	// void SetEnableRaytracing(bool bSetEnabled);                                                                              // [0x52ff600] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetEnableFlatShading
	// void SetEnableFlatShading(bool bEnable);                                                                                 // [0x52ff570] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetConstantOverrideColor
	// void SetConstantOverrideColor(FColor NewColor);                                                                          // [0x52ff200] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.SetColorOverrideMode
	// void SetColorOverrideMode(EDynamicMeshComponentColorOverrideMode NewMode);                                               // [0x52ff0b0] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.HasOverrideRenderMaterial
	// bool HasOverrideRenderMaterial(int32_t K);                                                                               // [0x52febc0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetViewModeOverridesEnabled
	// bool GetViewModeOverridesEnabled();                                                                                      // [0x52feb90] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetShadowsEnabled
	// bool GetShadowsEnabled();                                                                                                // [0x52feb10] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryRenderMaterial
	// class UMaterialInterface* GetSecondaryRenderMaterial();                                                                  // [0x52feae0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetSecondaryBuffersVisibility
	// bool GetSecondaryBuffersVisibility();                                                                                    // [0x52feab0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetOverrideRenderMaterial
	// class UMaterialInterface* GetOverrideRenderMaterial(int32_t MaterialIndex);                                              // [0x52fea10] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetFlatShadingEnabled
	// bool GetFlatShadingEnabled();                                                                                            // [0x52fe9e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableWireframeRenderPass
	// bool GetEnableWireframeRenderPass();                                                                                     // [0x52fe9b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetEnableRaytracing
	// bool GetEnableRaytracing();                                                                                              // [0x52fe980] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetDynamicMesh
	// class UDynamicMesh* GetDynamicMesh();                                                                                    // [0x52fe950] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetConstantOverrideColor
	// FColor GetConstantOverrideColor();                                                                                       // [0x52fe910] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.GetColorOverrideMode
	// EDynamicMeshComponentColorOverrideMode GetColorOverrideMode();                                                           // [0x52fe8b0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearSecondaryRenderMaterial
	// void ClearSecondaryRenderMaterial();                                                                                     // [0x4d94af0] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.BaseDynamicMeshComponent.ClearOverrideRenderMaterial
	// void ClearOverrideRenderMaterial();                                                                                      // [0x52fe670] Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.MeshCommandChangeTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.MeshReplacementCommandChangeTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshReplacementCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.MeshVertexCommandChangeTarget
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshVertexCommandChangeTarget : public UInterface
{ 
public:
};

/// Class /Script/GeometryFramework.DynamicMeshComponent
/// Size: 0x0820 (2080 bytes) (0x000610 - 0x000820) align 16 MaxSize: 0x0820
class UDynamicMeshComponent : public UBaseDynamicMeshComponent
{ 
public:
	class UDynamicMesh*                                MeshObject;                                                 // 0x0610   (0x0008)  
	unsigned char                                      UnknownData00_6[0xF8];                                      // 0x0618   (0x00F8)  MISSED
	EDynamicMeshComponentTangentsMode                  TangentsType;                                               // 0x0710   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3F];                                      // 0x0711   (0x003F)  MISSED
	TEnumAsByte<ECollisionTraceFlag>                   CollisionType;                                              // 0x0750   (0x0001)  
	bool                                               bUseAsyncCooking;                                           // 0x0751   (0x0001)  
	bool                                               bEnableComplexCollision;                                    // 0x0752   (0x0001)  
	bool                                               bDeferCollisionUpdates;                                     // 0x0753   (0x0001)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0754   (0x0004)  MISSED
	class UBodySetup*                                  MeshBodySetup;                                              // 0x0758   (0x0008)  
	unsigned char                                      UnknownData03_6[0x38];                                      // 0x0760   (0x0038)  MISSED
	FKAggregateGeom                                    AggGeom;                                                    // 0x0798   (0x0068)  
	TArray<class UBodySetup*>                          AsyncBodySetupQueue;                                        // 0x0800   (0x0010)  
	unsigned char                                      UnknownData04_7[0x10];                                      // 0x0810   (0x0010)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshComponent.ValidateMaterialSlots
	// bool ValidateMaterialSlots(bool bCreateIfMissing, bool bDeleteExtraSlots);                                               // [0x52ffb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.UpdateCollision
	// void UpdateCollision(bool bOnlyIfPending);                                                                               // [0x52ffa80] Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetTangentsType
	// void SetTangentsType(EDynamicMeshComponentTangentsMode NewTangentsType);                                                 // [0x52ff960] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDynamicMesh
	// void SetDynamicMesh(class UDynamicMesh* NewMesh);                                                                        // [0x52ff370] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetDeferredCollisionUpdatesEnabled
	// void SetDeferredCollisionUpdatesEnabled(bool bEnabled, bool bImmediateUpdate);                                           // [0x52ff280] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.SetComplexAsSimpleCollisionEnabled
	// void SetComplexAsSimpleCollisionEnabled(bool bEnabled, bool bImmediateUpdate);                                           // [0x52ff130] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.GetTangentsType
	// EDynamicMeshComponentTangentsMode GetTangentsType();                                                                     // [0x52feb40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshComponent.EnableComplexAsSimpleCollision
	// void EnableComplexAsSimpleCollision();                                                                                   // [0x52fe770] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshComponent.ConfigureMaterialSet
	// void ConfigureMaterialSet(TArray<UMaterialInterface*>& NewMaterialSet);                                                  // [0x52fe690] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshActor
/// Size: 0x02A8 (680 bytes) (0x000290 - 0x0002A8) align 8 MaxSize: 0x02A8
class ADynamicMeshActor : public AActor
{ 
public:
	class UDynamicMeshComponent*                       DynamicMeshComponent;                                       // 0x0290   (0x0008)  
	bool                                               bEnableComputeMeshPool;                                     // 0x0298   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0299   (0x0007)  MISSED
	class UDynamicMeshPool*                            DynamicMeshPool;                                            // 0x02A0   (0x0008)  


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseComputeMesh
	// bool ReleaseComputeMesh(class UDynamicMesh* Mesh);                                                                       // [0x52fecd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.ReleaseAllComputeMeshes
	// void ReleaseAllComputeMeshes();                                                                                          // [0x52fec90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetDynamicMeshComponent
	// class UDynamicMeshComponent* GetDynamicMeshComponent();                                                                  // [0x155a580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMeshActor.GetComputeMeshPool
	// class UDynamicMeshPool* GetComputeMeshPool();                                                                            // [0x52fe8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.FreeAllComputeMeshes
	// void FreeAllComputeMeshes();                                                                                             // [0x52fe7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshActor.AllocateComputeMesh
	// class UDynamicMesh* AllocateComputeMesh();                                                                               // [0x52fe600] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryFramework.DynamicMeshGenerator
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UDynamicMeshGenerator : public UObject
{ 
public:
};

/// Class /Script/GeometryFramework.DynamicMesh
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 8 MaxSize: 0x00B0
class UDynamicMesh : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x48];                                      // 0x0028   (0x0048)  MISSED
	SDK_UNDEFINED(16,1205) /* FMulticastInlineDelegate */ __um(MeshModifiedBPEvent);                               // 0x0070   (0x0010)  
	unsigned char                                      UnknownData01_6[0x20];                                      // 0x0080   (0x0020)  MISSED
	class UDynamicMeshGenerator*                       MeshGenerator;                                              // 0x00A0   (0x0008)  
	bool                                               bEnableMeshGenerator;                                       // 0x00A8   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x00A9   (0x0007)  MISSED


	/// Functions
	// Function /Script/GeometryFramework.DynamicMesh.ResetToCube
	// class UDynamicMesh* ResetToCube();                                                                                       // [0x52fee60] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.Reset
	// class UDynamicMesh* Reset();                                                                                             // [0x52fee30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMesh.IsEmpty
	// bool IsEmpty();                                                                                                          // [0x52fec60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryFramework.DynamicMesh.GetTriangleCount
	// int32_t GetTriangleCount();                                                                                              // [0x52feb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryFramework.DynamicMeshPool
/// Size: 0x0048 (72 bytes) (0x000028 - 0x000048) align 8 MaxSize: 0x0048
class UDynamicMeshPool : public UObject
{ 
public:
	TArray<class UDynamicMesh*>                        CachedMeshes;                                               // 0x0028   (0x0010)  
	TArray<class UDynamicMesh*>                        AllCreatedMeshes;                                           // 0x0038   (0x0010)  


	/// Functions
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnMesh
	// void ReturnMesh(class UDynamicMesh* Mesh);                                                                               // [0x52fefb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.ReturnAllMeshes
	// void ReturnAllMeshes();                                                                                                  // [0x52fef90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.RequestMesh
	// class UDynamicMesh* RequestMesh();                                                                                       // [0x52fee00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryFramework.DynamicMeshPool.FreeAllMeshes
	// void FreeAllMeshes();                                                                                                    // [0x52fe850] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/GeometryFramework.DynamicMeshChangeInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FDynamicMeshChangeInfo
{ 
	EDynamicMeshChangeType                             Type;                                                       // 0x0000   (0x0001)  
	EDynamicMeshAttributeChangeFlags                   Flags;                                                      // 0x0001   (0x0001)  
	bool                                               bIsRevertChange;                                            // 0x0002   (0x0001)  
	unsigned char                                      UnknownData00_7[0x1D];                                      // 0x0003   (0x001D)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UBaseDynamicMeshComponent) == 0x0610); // 1552 bytes (0x0005A0 - 0x000610)
static_assert(sizeof(UMeshCommandChangeTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshReplacementCommandChangeTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UMeshVertexCommandChangeTarget) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDynamicMeshComponent) == 0x0820); // 2080 bytes (0x000610 - 0x000820)
static_assert(sizeof(ADynamicMeshActor) == 0x02A8); // 680 bytes (0x000290 - 0x0002A8)
static_assert(sizeof(UDynamicMeshGenerator) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UDynamicMesh) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UDynamicMeshPool) == 0x0048); // 72 bytes (0x000028 - 0x000048)
static_assert(sizeof(FDynamicMeshChangeInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(UBaseDynamicMeshComponent, WireframeColor) == 0x05C4);
static_assert(offsetof(UBaseDynamicMeshComponent, ColorMode) == 0x05D4);
static_assert(offsetof(UBaseDynamicMeshComponent, ConstantColor) == 0x05D8);
static_assert(offsetof(UBaseDynamicMeshComponent, OverrideRenderMaterial) == 0x05E0);
static_assert(offsetof(UBaseDynamicMeshComponent, SecondaryRenderMaterial) == 0x05E8);
static_assert(offsetof(UBaseDynamicMeshComponent, BaseMaterials) == 0x05F8);
static_assert(offsetof(UDynamicMeshComponent, MeshObject) == 0x0610);
static_assert(offsetof(UDynamicMeshComponent, TangentsType) == 0x0710);
static_assert(offsetof(UDynamicMeshComponent, CollisionType) == 0x0750);
static_assert(offsetof(UDynamicMeshComponent, MeshBodySetup) == 0x0758);
static_assert(offsetof(UDynamicMeshComponent, AggGeom) == 0x0798);
static_assert(offsetof(UDynamicMeshComponent, AsyncBodySetupQueue) == 0x0800);
static_assert(offsetof(ADynamicMeshActor, DynamicMeshComponent) == 0x0290);
static_assert(offsetof(ADynamicMeshActor, DynamicMeshPool) == 0x02A0);
static_assert(offsetof(UDynamicMesh, MeshGenerator) == 0x00A0);
static_assert(offsetof(UDynamicMeshPool, CachedMeshes) == 0x0028);
static_assert(offsetof(UDynamicMeshPool, AllCreatedMeshes) == 0x0038);
static_assert(offsetof(FDynamicMeshChangeInfo, Type) == 0x0000);
static_assert(offsetof(FDynamicMeshChangeInfo, Flags) == 0x0001);
