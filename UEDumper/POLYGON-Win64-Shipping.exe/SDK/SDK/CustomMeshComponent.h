
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

/// Class /Script/CustomMeshComponent.CustomMeshComponent
/// Size: 0x05B0 (1456 bytes) (0x0005A0 - 0x0005B0) align 16 MaxSize: 0x05B0
class UCustomMeshComponent : public UMeshComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x05A0   (0x0010)  MISSED


	/// Functions
	// Function /Script/CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
	// bool SetCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);                                                     // [0x2422360] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
	// void ClearCustomMeshTriangles();                                                                                         // [0x2422300] Final|Native|Public|BlueprintCallable 
	// Function /Script/CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
	// void AddCustomMeshTriangles(TArray<FCustomMeshTriangle>& Triangles);                                                     // [0x24221f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/CustomMeshComponent.CustomMeshTriangle
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FCustomMeshTriangle
{ 
	FVector                                            Vertex0;                                                    // 0x0000   (0x0018)  
	FVector                                            Vertex1;                                                    // 0x0018   (0x0018)  
	FVector                                            Vertex2;                                                    // 0x0030   (0x0018)  
};

#pragma pack(pop)


static_assert(sizeof(UCustomMeshComponent) == 0x05B0); // 1456 bytes (0x0005A0 - 0x0005B0)
static_assert(sizeof(FCustomMeshTriangle) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(offsetof(FCustomMeshTriangle, Vertex0) == 0x0000);
static_assert(offsetof(FCustomMeshTriangle, Vertex1) == 0x0018);
static_assert(offsetof(FCustomMeshTriangle, Vertex2) == 0x0030);
