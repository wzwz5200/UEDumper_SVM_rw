
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

/// Enum /Script/MRMesh.EMeshTrackerVertexColorMode
/// Size: 0x01 (1 bytes)
enum class EMeshTrackerVertexColorMode : uint8_t
{
	EMeshTrackerVertexColorMode__None                                                = 0,
	EMeshTrackerVertexColorMode__Confidence                                          = 1,
	EMeshTrackerVertexColorMode__Block                                               = 2
};

/// Class /Script/MRMesh.MockDataMeshTrackerComponent
/// Size: 0x0310 (784 bytes) (0x0002A0 - 0x000310) align 16 MaxSize: 0x0310
class UMockDataMeshTrackerComponent : public USceneComponent
{ 
public:
	SDK_UNDEFINED(16,382) /* FMulticastInlineDelegate */ __um(OnMeshTrackerUpdated);                               // 0x02A0   (0x0010)  
	bool                                               ScanWorld;                                                  // 0x02B0   (0x0001)  
	bool                                               RequestNormals;                                             // 0x02B1   (0x0001)  
	bool                                               RequestVertexConfidence;                                    // 0x02B2   (0x0001)  
	EMeshTrackerVertexColorMode                        VertexColorMode;                                            // 0x02B3   (0x0001)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x02B4   (0x0004)  MISSED
	TArray<FColor>                                     BlockVertexColors;                                          // 0x02B8   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceZero;                              // 0x02C8   (0x0010)  
	FLinearColor                                       VertexColorFromConfidenceOne;                               // 0x02D8   (0x0010)  
	float                                              UpdateInterval;                                             // 0x02E8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x02EC   (0x0004)  MISSED
	class UMRMeshComponent*                            MRMesh;                                                     // 0x02F0   (0x0008)  
	unsigned char                                      UnknownData02_7[0x18];                                      // 0x02F8   (0x0018)  MISSED


	/// Functions
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	// void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector>& Normals, TArray<float>& Confidence); // [0x2c97800] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	// void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                              // [0x3beb210] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);                                                                 // [0x3beb0a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MRMeshBodyHolder
/// Size: 0x0230 (560 bytes) (0x000028 - 0x000230) align 8 MaxSize: 0x0230
class UMRMeshBodyHolder : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0028   (0x0008)  MISSED
	class UBodySetup*                                  BodySetup;                                                  // 0x0030   (0x0008)  
	FBodyInstance                                      BodyInstance;                                               // 0x0038   (0x0190)  
	unsigned char                                      UnknownData01_7[0x68];                                      // 0x01C8   (0x0068)  MISSED
};

/// Class /Script/MRMesh.MRMeshComponent
/// Size: 0x05F0 (1520 bytes) (0x000568 - 0x0005F0) align 16 MaxSize: 0x05F0
class UMRMeshComponent : public UPrimitiveComponent
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0568   (0x0008)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0570   (0x0008)  
	class UMaterialInterface*                          WireframeMaterial;                                          // 0x0578   (0x0008)  
	bool                                               bCreateMeshProxySections;                                   // 0x0580   (0x0001)  
	bool                                               bUpdateNavMeshOnMeshUpdate;                                 // 0x0581   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0582   (0x0001)  MISSED
	bool                                               bNeverCreateCollisionMesh;                                  // 0x0583   (0x0001)  
	unsigned char                                      UnknownData02_6[0x44];                                      // 0x0584   (0x0044)  MISSED
	TArray<class UMRMeshBodyHolder*>                   BodyHolders;                                                // 0x05C8   (0x0010)  
	unsigned char                                      UnknownData03_7[0x18];                                      // 0x05D8   (0x0018)  MISSED


	/// Functions
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeMaterial
	// void SetWireframeMaterial(class UMaterialInterface* InMaterial);                                                         // [0x21ce470] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetWireframeColor
	// void SetWireframeColor(FLinearColor& InColor);                                                                           // [0x3beb5e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetUseWireframe
	// void SetUseWireframe(bool bUseWireframe);                                                                                // [0x3beb550] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	// void SetEnableMeshOcclusion(bool bEnable);                                                                               // [0x3beb3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.RequestNavMeshUpdate
	// void RequestNavMeshUpdate();                                                                                             // [0x3beb3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.IsConnected
	// bool IsConnected();                                                                                                      // [0x3beb360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetWireframeColor
	// FLinearColor GetWireframeColor();                                                                                        // [0x3beb330] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetUseWireframe
	// bool GetUseWireframe();                                                                                                  // [0x3beb310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	// bool GetEnableMeshOcclusion();                                                                                           // [0x3beb2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MRMeshComponent.ForceNavMeshUpdate
	// void ForceNavMeshUpdate();                                                                                               // [0x3beb2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MRMeshComponent.Clear
	// void Clear();                                                                                                            // [0x3beb070] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MRMesh.MeshReconstructorBase
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UMeshReconstructorBase : public UObject
{ 
public:


	/// Functions
	// Function /Script/MRMesh.MeshReconstructorBase.StopReconstruction
	// void StopReconstruction();                                                                                               // [0x3beb670] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.StartReconstruction
	// void StartReconstruction();                                                                                              // [0x1e03d40] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.PauseReconstruction
	// void PauseReconstruction();                                                                                              // [0xa3db00] Native|Public|BlueprintCallable 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionStarted
	// bool IsReconstructionStarted();                                                                                          // [0x1366d80] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.IsReconstructionPaused
	// bool IsReconstructionPaused();                                                                                           // [0x1e95240] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MRMesh.MeshReconstructorBase.DisconnectMRMesh
	// void DisconnectMRMesh();                                                                                                 // [0x3beb1f0] Native|Public        
	// Function /Script/MRMesh.MeshReconstructorBase.ConnectMRMesh
	// void ConnectMRMesh(class UMRMeshComponent* Mesh);                                                                        // [0x12ec180] Native|Public        
};

/// Struct /Script/MRMesh.MRMeshConfiguration
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FMRMeshConfiguration
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(UMockDataMeshTrackerComponent) == 0x0310); // 784 bytes (0x0002A0 - 0x000310)
static_assert(sizeof(UMRMeshBodyHolder) == 0x0230); // 560 bytes (0x000028 - 0x000230)
static_assert(sizeof(UMRMeshComponent) == 0x05F0); // 1520 bytes (0x000568 - 0x0005F0)
static_assert(sizeof(UMeshReconstructorBase) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FMRMeshConfiguration) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorMode) == 0x02B3);
static_assert(offsetof(UMockDataMeshTrackerComponent, BlockVertexColors) == 0x02B8);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceZero) == 0x02C8);
static_assert(offsetof(UMockDataMeshTrackerComponent, VertexColorFromConfidenceOne) == 0x02D8);
static_assert(offsetof(UMockDataMeshTrackerComponent, MRMesh) == 0x02F0);
static_assert(offsetof(UMRMeshBodyHolder, BodySetup) == 0x0030);
static_assert(offsetof(UMRMeshBodyHolder, BodyInstance) == 0x0038);
static_assert(offsetof(UMRMeshComponent, Material) == 0x0570);
static_assert(offsetof(UMRMeshComponent, WireframeMaterial) == 0x0578);
static_assert(offsetof(UMRMeshComponent, BodyHolders) == 0x05C8);
