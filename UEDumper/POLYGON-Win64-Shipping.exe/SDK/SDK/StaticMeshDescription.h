
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: MeshDescription

#pragma pack(push, 0x1)

/// Class /Script/StaticMeshDescription.StaticMeshDescription
/// Size: 0x02F0 (752 bytes) (0x0002F0 - 0x0002F0) align 8 MaxSize: 0x02F0
class UStaticMeshDescription : public UMeshDescriptionBase
{ 
public:


	/// Functions
	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
	// void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32_t UVIndex);                             // [0x3fd7310] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
	// void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, FName& SlotName);                                   // [0x3fd70c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
	// FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32_t UVIndex);                                      // [0x3fd6e60] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/StaticMeshDescription.StaticMeshDescription.CreateCube
	// void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ); // [0x3fd6b10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/StaticMeshDescription.UVMapSettings
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 8 MaxSize: 0x0070
struct FUVMapSettings
{ 
	FVector                                            Size;                                                       // 0x0000   (0x0018)  
	FVector2D                                          UVTile;                                                     // 0x0018   (0x0010)  
	FVector                                            position;                                                   // 0x0028   (0x0018)  
	FRotator                                           Rotation;                                                   // 0x0040   (0x0018)  
	FVector                                            Scale;                                                      // 0x0058   (0x0018)  
};

#pragma pack(pop)


static_assert(sizeof(UStaticMeshDescription) == 0x02F0); // 752 bytes (0x0002F0 - 0x0002F0)
static_assert(sizeof(FUVMapSettings) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(offsetof(FUVMapSettings, Size) == 0x0000);
static_assert(offsetof(FUVMapSettings, UVTile) == 0x0018);
static_assert(offsetof(FUVMapSettings, position) == 0x0028);
static_assert(offsetof(FUVMapSettings, Rotation) == 0x0040);
static_assert(offsetof(FUVMapSettings, Scale) == 0x0058);
