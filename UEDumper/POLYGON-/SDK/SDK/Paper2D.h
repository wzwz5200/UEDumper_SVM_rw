
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore

#pragma pack(push, 0x1)

/// Enum /Script/Paper2D.ESpriteCollisionMode
/// Size: 0x01 (1 bytes)
enum class ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None                                                       = 0,
	ESpriteCollisionMode__Use2DPhysics                                               = 1,
	ESpriteCollisionMode__Use3DPhysics                                               = 2
};

/// Enum /Script/Paper2D.ESpriteShapeType
/// Size: 0x01 (1 bytes)
enum class ESpriteShapeType : uint8_t
{
	ESpriteShapeType__Box                                                            = 0,
	ESpriteShapeType__Circle                                                         = 1,
	ESpriteShapeType__Polygon                                                        = 2
};

/// Enum /Script/Paper2D.ESpritePolygonMode
/// Size: 0x01 (1 bytes)
enum class ESpritePolygonMode : uint8_t
{
	ESpritePolygonMode__SourceBoundingBox                                            = 0,
	ESpritePolygonMode__TightBoundingBox                                             = 1,
	ESpritePolygonMode__ShrinkWrapped                                                = 2,
	ESpritePolygonMode__FullyCustom                                                  = 3,
	ESpritePolygonMode__Diced                                                        = 4
};

/// Enum /Script/Paper2D.ESpritePivotMode
/// Size: 0x01 (1 bytes)
enum class ESpritePivotMode : uint8_t
{
	ESpritePivotMode__Top_Left                                                       = 0,
	ESpritePivotMode__Top_Center                                                     = 1,
	ESpritePivotMode__Top_Right                                                      = 2,
	ESpritePivotMode__Center_Left                                                    = 3,
	ESpritePivotMode__Center_Center                                                  = 4,
	ESpritePivotMode__Center_Right                                                   = 5,
	ESpritePivotMode__Bottom_Left                                                    = 6,
	ESpritePivotMode__Bottom_Center                                                  = 7,
	ESpritePivotMode__Bottom_Right                                                   = 8,
	ESpritePivotMode__Custom                                                         = 9
};

/// Enum /Script/Paper2D.EFlipbookCollisionMode
/// Size: 0x01 (1 bytes)
enum class EFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode__NoCollision                                              = 0,
	EFlipbookCollisionMode__FirstFrameCollision                                      = 1,
	EFlipbookCollisionMode__EachFrameCollision                                       = 2
};

/// Enum /Script/Paper2D.EPaperSpriteAtlasPadding
/// Size: 0x01 (1 bytes)
enum class EPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding__DilateBorder                                           = 0,
	EPaperSpriteAtlasPadding__PadWithZero                                            = 1
};

/// Enum /Script/Paper2D.ETileMapProjectionMode
/// Size: 0x01 (1 bytes)
enum class ETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode__Orthogonal                                               = 0,
	ETileMapProjectionMode__IsometricDiamond                                         = 1,
	ETileMapProjectionMode__IsometricStaggered                                       = 2,
	ETileMapProjectionMode__HexagonalStaggered                                       = 3
};

/// Class /Script/Paper2D.PaperCharacter
/// Size: 0x0630 (1584 bytes) (0x000628 - 0x000630) align 16 MaxSize: 0x0630
class APaperCharacter : public ACharacter
{ 
public:
	class UPaperFlipbookComponent*                     Sprite;                                                     // 0x0628   (0x0008)  
};

/// Struct /Script/Paper2D.PaperFlipbookKeyFrame
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPaperFlipbookKeyFrame
{ 
	class UPaperSprite*                                Sprite;                                                     // 0x0000   (0x0008)  
	int32_t                                            FrameRun;                                                   // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Class /Script/Paper2D.PaperFlipbook
/// Size: 0x0050 (80 bytes) (0x000028 - 0x000050) align 8 MaxSize: 0x0050
class UPaperFlipbook : public UObject
{ 
public:
	float                                              FramesPerSecond;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FPaperFlipbookKeyFrame>                     KeyFrames;                                                  // 0x0030   (0x0010)  
	class UMaterialInterface*                          DefaultMaterial;                                            // 0x0040   (0x0008)  
	TEnumAsByte<EFlipbookCollisionMode>                CollisionSource;                                            // 0x0048   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0049   (0x0007)  MISSED


	/// Functions
	// Function /Script/Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	// bool IsValidKeyFrameIndex(int32_t Index);                                                                                // [0xa95460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetTotalDuration
	// float GetTotalDuration();                                                                                                // [0xa95370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetSpriteAtTime
	// class UPaperSprite* GetSpriteAtTime(float time, bool bClampToEnds);                                                      // [0xa949f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetSpriteAtFrame
	// class UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex);                                                                // [0xa94930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetNumKeyFrames
	// int32_t GetNumKeyFrames();                                                                                               // [0xa94870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetNumFrames
	// int32_t GetNumFrames();                                                                                                  // [0xa94840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
	// int32_t GetKeyFrameIndexAtTime(float time, bool bClampToEnds);                                                           // [0xa94540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Paper2D.PaperFlipbookActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class APaperFlipbookActor : public AActor
{ 
public:
	class UPaperFlipbookComponent*                     RenderComponent;                                            // 0x0290   (0x0008)  
};

/// Class /Script/Paper2D.PaperFlipbookComponent
/// Size: 0x05F0 (1520 bytes) (0x0005A0 - 0x0005F0) align 16 MaxSize: 0x05F0
class UPaperFlipbookComponent : public UMeshComponent
{ 
public:
	class UPaperFlipbook*                              SourceFlipbook;                                             // 0x05A0   (0x0008)  
	class UMaterialInterface*                          Material;                                                   // 0x05A8   (0x0008)  
	float                                              PlayRate;                                                   // 0x05B0   (0x0004)  
	bool                                               bLooping : 1;                                               // 0x05B4:0 (0x0001)  
	bool                                               bReversePlayback : 1;                                       // 0x05B4:1 (0x0001)  
	bool                                               bPlaying : 1;                                               // 0x05B4:2 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x05B5   (0x0003)  MISSED
	float                                              AccumulatedTime;                                            // 0x05B8   (0x0004)  
	int32_t                                            CachedFrameIndex;                                           // 0x05BC   (0x0004)  
	FLinearColor                                       SpriteColor;                                                // 0x05C0   (0x0010)  
	class UBodySetup*                                  CachedBodySetup;                                            // 0x05D0   (0x0008)  
	SDK_UNDEFINED(16,428) /* FMulticastInlineDelegate */ __um(OnFinishedPlaying);                                  // 0x05D8   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x05E8   (0x0008)  MISSED


	/// Functions
	// Function /Script/Paper2D.PaperFlipbookComponent.Stop
	// void Stop();                                                                                                             // [0xa97060] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetSpriteColor
	// void SetSpriteColor(FLinearColor NewColor);                                                                              // [0xa968b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlayRate
	// void SetPlayRate(float NewRate);                                                                                         // [0xa96640] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	// void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents);                                            // [0xa967a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	// void SetPlaybackPosition(float NewPosition, bool bFireEvents);                                                           // [0xa966c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetNewTime
	// void SetNewTime(float NewTime);                                                                                          // [0xa965a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetLooping
	// void SetLooping(bool bNewLooping);                                                                                       // [0xa96500] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetFlipbook
	// bool SetFlipbook(class UPaperFlipbook* NewFlipbook);                                                                     // [0xa960b0] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.ReverseFromEnd
	// void ReverseFromEnd();                                                                                                   // [0xa95f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.Reverse
	// void Reverse();                                                                                                          // [0xa95ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.PlayFromStart
	// void PlayFromStart();                                                                                                    // [0xa95c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.Play
	// void Play();                                                                                                             // [0xa95c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	// void OnRep_SourceFlipbook(class UPaperFlipbook* OldFlipbook);                                                            // [0xa95b20] Final|Native|Protected 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsReversing
	// bool IsReversing();                                                                                                      // [0xa95430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0xa95400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsLooping
	// bool IsLooping();                                                                                                        // [0xa953d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetSpriteColor
	// FLinearColor GetSpriteColor();                                                                                           // [0xa94b00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlayRate
	// float GetPlayRate();                                                                                                     // [0xa94890] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	// int32_t GetPlaybackPositionInFrames();                                                                                   // [0xa948b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	// float GetPlaybackPosition();                                                                                             // [0xa94390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	// int32_t GetFlipbookLengthInFrames();                                                                                     // [0xa94340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLength
	// float GetFlipbookLength();                                                                                               // [0xa942d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	// float GetFlipbookFramerate();                                                                                            // [0xa94290] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbook
	// class UPaperFlipbook* GetFlipbook();                                                                                     // [0xa94260] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Paper2D.PaperGroupedSpriteActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class APaperGroupedSpriteActor : public AActor
{ 
public:
	class UPaperGroupedSpriteComponent*                RenderComponent;                                            // 0x0290   (0x0008)  
};

/// Struct /Script/Paper2D.SpriteInstanceData
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 16 MaxSize: 0x0090
struct FSpriteInstanceData
{ 
	FMatrix                                            Transform;                                                  // 0x0000   (0x0080)  
	class UPaperSprite*                                SourceSprite;                                               // 0x0080   (0x0008)  
	FColor                                             VertexColor;                                                // 0x0088   (0x0004)  
	int32_t                                            MaterialIndex;                                              // 0x008C   (0x0004)  
};

/// Class /Script/Paper2D.PaperGroupedSpriteComponent
/// Size: 0x05D0 (1488 bytes) (0x0005A0 - 0x0005D0) align 16 MaxSize: 0x05D0
class UPaperGroupedSpriteComponent : public UMeshComponent
{ 
public:
	TArray<class UMaterialInterface*>                  InstanceMaterials;                                          // 0x05A0   (0x0010)  
	TArray<FSpriteInstanceData>                        PerInstanceSpriteData;                                      // 0x05B0   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x05C0   (0x0010)  MISSED


	/// Functions
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	// bool UpdateInstanceTransform(int32_t InstanceIndex, FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // [0xa971a0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	// bool UpdateInstanceColor(int32_t InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);              // [0xa97080] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	// void SortInstancesAlongAxis(FVector WorldSpaceSortAxis);                                                                 // [0xa96fd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	// bool RemoveInstance(int32_t InstanceIndex);                                                                              // [0xa95d20] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	// bool GetInstanceTransform(int32_t InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace);                    // [0xa943b0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	// int32_t GetInstanceCount();                                                                                              // [0xa94390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.ClearInstances
	// void ClearInstances();                                                                                                   // [0xa94000] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.AddInstance
	// int32_t AddInstance(FTransform& Transform, class UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color);            // [0xa93b10] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Paper2D.PaperRuntimeSettings
/// Size: 0x0030 (48 bytes) (0x000028 - 0x000030) align 8 MaxSize: 0x0030
class UPaperRuntimeSettings : public UObject
{ 
public:
	bool                                               bEnableSpriteAtlasGroups;                                   // 0x0028   (0x0001)  
	bool                                               bEnableTerrainSplineEditing;                                // 0x0029   (0x0001)  
	bool                                               bResizeSpriteDataToMatchTextures;                           // 0x002A   (0x0001)  
	unsigned char                                      UnknownData00_7[0x5];                                       // 0x002B   (0x0005)  MISSED
};

/// Struct /Script/Paper2D.PaperSpriteSocket
/// Size: 0x0070 (112 bytes) (0x000000 - 0x000070) align 16 MaxSize: 0x0070
struct FPaperSpriteSocket
{ 
	FTransform                                         LocalTransform;                                             // 0x0000   (0x0060)  
	FName                                              SocketName;                                                 // 0x0060   (0x0008)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0068   (0x0008)  MISSED
};

/// Class /Script/Paper2D.PaperSprite
/// Size: 0x00B8 (184 bytes) (0x000028 - 0x0000B8) align 8 MaxSize: 0x00B8
class UPaperSprite : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x10];                                      // 0x0028   (0x0010)  MISSED
	TArray<class UTexture*>                            AdditionalSourceTextures;                                   // 0x0038   (0x0010)  
	FVector2D                                          BakedSourceUV;                                              // 0x0048   (0x0010)  
	FVector2D                                          BakedSourceDimension;                                       // 0x0058   (0x0010)  
	class UTexture2D*                                  BakedSourceTexture;                                         // 0x0068   (0x0008)  
	class UMaterialInterface*                          DefaultMaterial;                                            // 0x0070   (0x0008)  
	class UMaterialInterface*                          AlternateMaterial;                                          // 0x0078   (0x0008)  
	TArray<FPaperSpriteSocket>                         Sockets;                                                    // 0x0080   (0x0010)  
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                      // 0x0090   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0091   (0x0003)  MISSED
	float                                              PixelsPerUnrealUnit;                                        // 0x0094   (0x0004)  
	class UBodySetup*                                  BodySetup;                                                  // 0x0098   (0x0008)  
	int32_t                                            AlternateMaterialSplitIndex;                                // 0x00A0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x00A4   (0x0004)  MISSED
	TArray<FVector4>                                   BakedRenderData;                                            // 0x00A8   (0x0010)  
};

/// Class /Script/Paper2D.PaperSpriteActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class APaperSpriteActor : public AActor
{ 
public:
	class UPaperSpriteComponent*                       RenderComponent;                                            // 0x0290   (0x0008)  
};

/// Class /Script/Paper2D.PaperSpriteAtlas
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPaperSpriteAtlas : public UObject
{ 
public:
};

/// Class /Script/Paper2D.PaperSpriteBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
	// FSlateBrush MakeBrushFromSprite(class UPaperSprite* Sprite, int32_t Width, int32_t Height);                              // [0xa95500] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Paper2D.PaperSpriteComponent
/// Size: 0x05C0 (1472 bytes) (0x0005A0 - 0x0005C0) align 16 MaxSize: 0x05C0
class UPaperSpriteComponent : public UMeshComponent
{ 
public:
	class UPaperSprite*                                SourceSprite;                                               // 0x05A0   (0x0008)  
	class UMaterialInterface*                          MaterialOverride;                                           // 0x05A8   (0x0008)  
	FLinearColor                                       SpriteColor;                                                // 0x05B0   (0x0010)  


	/// Functions
	// Function /Script/Paper2D.PaperSpriteComponent.SetSpriteColor
	// void SetSpriteColor(FLinearColor NewColor);                                                                              // [0xa969e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperSpriteComponent.SetSprite
	// bool SetSprite(class UPaperSprite* NewSprite);                                                                           // [0xa960b0] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperSpriteComponent.GetSprite
	// class UPaperSprite* GetSprite();                                                                                         // [0xa94260] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/Paper2D.PaperTileInfo
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FPaperTileInfo
{ 
	class UPaperTileSet*                               TileSet;                                                    // 0x0000   (0x0008)  
	int32_t                                            PackedTileIndex;                                            // 0x0008   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x000C   (0x0004)  MISSED
};

/// Class /Script/Paper2D.PaperTileLayer
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class UPaperTileLayer : public UObject
{ 
public:
	FText                                              LayerName;                                                  // 0x0028   (0x0018)  
	int32_t                                            LayerWidth;                                                 // 0x0040   (0x0004)  
	int32_t                                            LayerHeight;                                                // 0x0044   (0x0004)  
	bool                                               bHiddenInGame : 1;                                          // 0x0048:0 (0x0001)  
	bool                                               bLayerCollides : 1;                                         // 0x0048:1 (0x0001)  
	bool                                               bOverrideCollisionThickness : 1;                            // 0x0048:2 (0x0001)  
	bool                                               bOverrideCollisionOffset : 1;                               // 0x0048:3 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0049   (0x0003)  MISSED
	float                                              CollisionThicknessOverride;                                 // 0x004C   (0x0004)  
	float                                              CollisionOffsetOverride;                                    // 0x0050   (0x0004)  
	FLinearColor                                       LayerColor;                                                 // 0x0054   (0x0010)  
	int32_t                                            AllocatedWidth;                                             // 0x0064   (0x0004)  
	int32_t                                            AllocatedHeight;                                            // 0x0068   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x006C   (0x0004)  MISSED
	TArray<FPaperTileInfo>                             AllocatedCells;                                             // 0x0070   (0x0010)  
	class UPaperTileSet*                               TileSet;                                                    // 0x0080   (0x0008)  
	TArray<int32_t>                                    AllocatedGrid;                                              // 0x0088   (0x0010)  
};

/// Class /Script/Paper2D.PaperTileMap
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 8 MaxSize: 0x00B0
class UPaperTileMap : public UObject
{ 
public:
	int32_t                                            MapWidth;                                                   // 0x0028   (0x0004)  
	int32_t                                            MapHeight;                                                  // 0x002C   (0x0004)  
	int32_t                                            TileWidth;                                                  // 0x0030   (0x0004)  
	int32_t                                            TileHeight;                                                 // 0x0034   (0x0004)  
	float                                              PixelsPerUnrealUnit;                                        // 0x0038   (0x0004)  
	float                                              SeparationPerTileX;                                         // 0x003C   (0x0004)  
	float                                              SeparationPerTileY;                                         // 0x0040   (0x0004)  
	float                                              SeparationPerLayer;                                         // 0x0044   (0x0004)  
	TWeakObjectPtr<class UPaperTileSet*>               SelectedTileSet;                                            // 0x0048   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0050   (0x0028)  MISSED
	class UMaterialInterface*                          Material;                                                   // 0x0078   (0x0008)  
	TArray<class UPaperTileLayer*>                     TileLayers;                                                 // 0x0080   (0x0010)  
	float                                              CollisionThickness;                                         // 0x0090   (0x0004)  
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                      // 0x0094   (0x0001)  
	TEnumAsByte<ETileMapProjectionMode>                ProjectionMode;                                             // 0x0095   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0096   (0x0002)  MISSED
	int32_t                                            HexSideLength;                                              // 0x0098   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x009C   (0x0004)  MISSED
	class UBodySetup*                                  BodySetup;                                                  // 0x00A0   (0x0008)  
	int32_t                                            LayerNameIndex;                                             // 0x00A8   (0x0004)  
	unsigned char                                      UnknownData03_7[0x4];                                       // 0x00AC   (0x0004)  MISSED
};

/// Class /Script/Paper2D.PaperTileMapActor
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class APaperTileMapActor : public AActor
{ 
public:
	class UPaperTileMapComponent*                      RenderComponent;                                            // 0x0290   (0x0008)  
};

/// Class /Script/Paper2D.PaperTileMapComponent
/// Size: 0x05F0 (1520 bytes) (0x0005A0 - 0x0005F0) align 16 MaxSize: 0x05F0
class UPaperTileMapComponent : public UMeshComponent
{ 
public:
	int32_t                                            MapWidth;                                                   // 0x05A0   (0x0004)  
	int32_t                                            MapHeight;                                                  // 0x05A4   (0x0004)  
	int32_t                                            TileWidth;                                                  // 0x05A8   (0x0004)  
	int32_t                                            TileHeight;                                                 // 0x05AC   (0x0004)  
	class UPaperTileSet*                               DefaultLayerTileSet;                                        // 0x05B0   (0x0008)  
	class UMaterialInterface*                          Material;                                                   // 0x05B8   (0x0008)  
	TArray<class UPaperTileLayer*>                     TileLayers;                                                 // 0x05C0   (0x0010)  
	FLinearColor                                       TileMapColor;                                               // 0x05D0   (0x0010)  
	int32_t                                            UseSingleLayerIndex;                                        // 0x05E0   (0x0004)  
	bool                                               bUseSingleLayer;                                            // 0x05E4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x05E5   (0x0003)  MISSED
	class UPaperTileMap*                               TileMap;                                                    // 0x05E8   (0x0008)  


	/// Functions
	// Function /Script/Paper2D.PaperTileMapComponent.SetTileMapColor
	// void SetTileMapColor(FLinearColor NewColor);                                                                             // [0xa96f50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetTileMap
	// bool SetTileMap(class UPaperTileMap* NewTileMap);                                                                        // [0xa960b0] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetTile
	// void SetTile(int32_t X, int32_t Y, int32_t Layer, FPaperTileInfo NewValue);                                              // [0xa96d50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetLayerColor
	// void SetLayerColor(FLinearColor NewColor, int32_t Layer);                                                                // [0xa96400] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetLayerCollision
	// void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // [0xa96150] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	// void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);                                              // [0xa95f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.ResizeMap
	// void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles);                                                       // [0xa95dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.RebuildCollision
	// void RebuildCollision();                                                                                                 // [0xa95cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.OwnsTileMap
	// bool OwnsTileMap();                                                                                                      // [0xa95bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.MakeTileMapEditable
	// void MakeTileMapEditable();                                                                                              // [0xa95aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTilePolygon
	// void GetTilePolygon(int32_t TileX, int32_t TileY, TArray<FVector>& Points, int32_t LayerIndex, bool bWorldSpace);        // [0xa94ff0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileMapColor
	// FLinearColor GetTileMapColor();                                                                                          // [0xa94fc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileCornerPosition
	// FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);                       // [0xa94e30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileCenterPosition
	// FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);                       // [0xa94ca0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTile
	// FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer);                                                             // [0xa94b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetMapSize
	// void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers);                                              // [0xa946d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.GetLayerColor
	// FLinearColor GetLayerColor(int32_t Layer);                                                                               // [0xa94610] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.CreateNewTileMap
	// void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // [0xa94020] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.AddNewLayer
	// class UPaperTileLayer* AddNewLayer();                                                                                    // [0xa93d10] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Paper2D.IntMargin
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 4 MaxSize: 0x0010
struct FIntMargin
{ 
	int32_t                                            Left;                                                       // 0x0000   (0x0004)  
	int32_t                                            Top;                                                        // 0x0004   (0x0004)  
	int32_t                                            Right;                                                      // 0x0008   (0x0004)  
	int32_t                                            Bottom;                                                     // 0x000C   (0x0004)  
};

/// Struct /Script/Paper2D.SpriteGeometryShape
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FSpriteGeometryShape
{ 
	ESpriteShapeType                                   ShapeType;                                                  // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	TArray<FVector2D>                                  Vertices;                                                   // 0x0008   (0x0010)  
	FVector2D                                          BoxSize;                                                    // 0x0018   (0x0010)  
	FVector2D                                          BoxPosition;                                                // 0x0028   (0x0010)  
	float                                              Rotation;                                                   // 0x0038   (0x0004)  
	bool                                               bNegativeWinding;                                           // 0x003C   (0x0001)  
	unsigned char                                      UnknownData01_7[0x3];                                       // 0x003D   (0x0003)  MISSED
};

/// Struct /Script/Paper2D.SpriteGeometryCollection
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FSpriteGeometryCollection
{ 
	TArray<FSpriteGeometryShape>                       Shapes;                                                     // 0x0000   (0x0010)  
	TEnumAsByte<ESpritePolygonMode>                    GeometryType;                                               // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0011   (0x0003)  MISSED
	int32_t                                            PixelsPerSubdivisionX;                                      // 0x0014   (0x0004)  
	int32_t                                            PixelsPerSubdivisionY;                                      // 0x0018   (0x0004)  
	bool                                               bAvoidVertexMerging;                                        // 0x001C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x001D   (0x0003)  MISSED
	float                                              AlphaThreshold;                                             // 0x0020   (0x0004)  
	float                                              DetailAmount;                                               // 0x0024   (0x0004)  
	float                                              SimplifyEpsilon;                                            // 0x0028   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x002C   (0x0004)  MISSED
};

/// Struct /Script/Paper2D.PaperTileMetadata
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FPaperTileMetadata
{ 
	FName                                              UserDataName;                                               // 0x0000   (0x0008)  
	FSpriteGeometryCollection                          CollisionData;                                              // 0x0008   (0x0030)  
	char                                               TerrainMembership[4];                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Struct /Script/Paper2D.PaperTileSetTerrain
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FPaperTileSetTerrain
{ 
	FString                                            TerrainName;                                                // 0x0000   (0x0010)  
	int32_t                                            CenterTileIndex;                                            // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_7[0x4];                                       // 0x0014   (0x0004)  MISSED
};

/// Class /Script/Paper2D.PaperTileSet
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UPaperTileSet : public UObject
{ 
public:
	FIntPoint                                          TileSize;                                                   // 0x0028   (0x0008)  
	class UTexture2D*                                  TileSheet;                                                  // 0x0030   (0x0008)  
	TArray<class UTexture*>                            AdditionalSourceTextures;                                   // 0x0038   (0x0010)  
	FIntMargin                                         BorderMargin;                                               // 0x0048   (0x0010)  
	FIntPoint                                          PerTileSpacing;                                             // 0x0058   (0x0008)  
	FIntPoint                                          DrawingOffset;                                              // 0x0060   (0x0008)  
	int32_t                                            WidthInTiles;                                               // 0x0068   (0x0004)  
	int32_t                                            HeightInTiles;                                              // 0x006C   (0x0004)  
	int32_t                                            AllocatedWidth;                                             // 0x0070   (0x0004)  
	int32_t                                            AllocatedHeight;                                            // 0x0074   (0x0004)  
	TArray<FPaperTileMetadata>                         PerTileData;                                                // 0x0078   (0x0010)  
	TArray<FPaperTileSetTerrain>                       Terrains;                                                   // 0x0088   (0x0010)  
	int32_t                                            TileWidth;                                                  // 0x0098   (0x0004)  
	int32_t                                            TileHeight;                                                 // 0x009C   (0x0004)  
	int32_t                                            Margin;                                                     // 0x00A0   (0x0004)  
	int32_t                                            Spacing;                                                    // 0x00A4   (0x0004)  
};

/// Class /Script/Paper2D.MaterialExpressionSpriteTextureSampler
/// Size: 0x0260 (608 bytes) (0x000240 - 0x000260) align 8 MaxSize: 0x0260
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{ 
public:
	bool                                               bSampleAdditionalTextures;                                  // 0x0240   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0241   (0x0003)  MISSED
	int32_t                                            AdditionalSlotIndex;                                        // 0x0244   (0x0004)  
	FText                                              SlotDisplayName;                                            // 0x0248   (0x0018)  
};

/// Class /Script/Paper2D.PaperTerrainActor
/// Size: 0x02A8 (680 bytes) (0x000290 - 0x0002A8) align 8 MaxSize: 0x02A8
class APaperTerrainActor : public AActor
{ 
public:
	class USceneComponent*                             DummyRoot;                                                  // 0x0290   (0x0008)  
	class UPaperTerrainSplineComponent*                SplineComponent;                                            // 0x0298   (0x0008)  
	class UPaperTerrainComponent*                      RenderComponent;                                            // 0x02A0   (0x0008)  
};

/// Class /Script/Paper2D.PaperTerrainComponent
/// Size: 0x05C0 (1472 bytes) (0x000568 - 0x0005C0) align 16 MaxSize: 0x05C0
class UPaperTerrainComponent : public UPrimitiveComponent
{ 
public:
	class UPaperTerrainMaterial*                       TerrainMaterial;                                            // 0x0568   (0x0008)  
	bool                                               bClosedSpline;                                              // 0x0570   (0x0001)  
	bool                                               bFilledSpline;                                              // 0x0571   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0572   (0x0006)  MISSED
	class UPaperTerrainSplineComponent*                AssociatedSpline;                                           // 0x0578   (0x0008)  
	int32_t                                            RandomSeed;                                                 // 0x0580   (0x0004)  
	float                                              SegmentOverlapAmount;                                       // 0x0584   (0x0004)  
	FLinearColor                                       TerrainColor;                                               // 0x0588   (0x0010)  
	int32_t                                            ReparamStepsPerSegment;                                     // 0x0598   (0x0004)  
	TEnumAsByte<ESpriteCollisionMode>                  SpriteCollisionDomain;                                      // 0x059C   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x059D   (0x0003)  MISSED
	float                                              CollisionThickness;                                         // 0x05A0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x05A4   (0x0004)  MISSED
	class UBodySetup*                                  CachedBodySetup;                                            // 0x05A8   (0x0008)  
	unsigned char                                      UnknownData03_7[0x10];                                      // 0x05B0   (0x0010)  MISSED


	/// Functions
	// Function /Script/Paper2D.PaperTerrainComponent.SetTerrainColor
	// void SetTerrainColor(FLinearColor NewColor);                                                                             // [0xa96b10] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/Paper2D.PaperTerrainMaterialRule
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FPaperTerrainMaterialRule
{ 
	class UPaperSprite*                                StartCap;                                                   // 0x0000   (0x0008)  
	TArray<class UPaperSprite*>                        Body;                                                       // 0x0008   (0x0010)  
	class UPaperSprite*                                EndCap;                                                     // 0x0018   (0x0008)  
	float                                              MinimumAngle;                                               // 0x0020   (0x0004)  
	float                                              MaximumAngle;                                               // 0x0024   (0x0004)  
	bool                                               bEnableCollision;                                           // 0x0028   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0029   (0x0003)  MISSED
	float                                              CollisionOffset;                                            // 0x002C   (0x0004)  
	int32_t                                            DrawOrder;                                                  // 0x0030   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Class /Script/Paper2D.PaperTerrainMaterial
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class UPaperTerrainMaterial : public UDataAsset
{ 
public:
	TArray<FPaperTerrainMaterialRule>                  Rules;                                                      // 0x0030   (0x0010)  
	class UPaperSprite*                                InteriorFill;                                               // 0x0040   (0x0008)  
};

/// Class /Script/Paper2D.PaperTerrainSplineComponent
/// Size: 0x0680 (1664 bytes) (0x000670 - 0x000680) align 16 MaxSize: 0x0680
class UPaperTerrainSplineComponent : public USplineComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x0670   (0x0010)  MISSED
};

/// Class /Script/Paper2D.TileMapBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/Paper2D.TileMapBlueprintLibrary.MakeTile
	// FPaperTileInfo MakeTile(int32_t TileIndex, class UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);         // [0xa958d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Paper2D.TileMapBlueprintLibrary.GetTileUserData
	// FName GetTileUserData(FPaperTileInfo Tile);                                                                              // [0xa952a0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Paper2D.TileMapBlueprintLibrary.GetTileTransform
	// FTransform GetTileTransform(FPaperTileInfo Tile);                                                                        // [0xa951c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Paper2D.TileMapBlueprintLibrary.BreakTile
	// void BreakTile(FPaperTileInfo Tile, int32_t& TileIndex, class UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // [0xa93da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/Paper2D.SpriteDrawCallRecord
/// Size: 0x0140 (320 bytes) (0x000000 - 0x000140) align 16 MaxSize: 0x0140
struct FSpriteDrawCallRecord
{ 
	FVector                                            Destination;                                                // 0x0000   (0x0018)  
	class UTexture*                                    BaseTexture;                                                // 0x0018   (0x0008)  
	unsigned char                                      UnknownData00_6[0x30];                                      // 0x0020   (0x0030)  MISSED
	FColor                                             Color;                                                      // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0xEC];                                      // 0x0054   (0x00EC)  MISSED
};

/// Struct /Script/Paper2D.SpriteAssetInitParameters
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FSpriteAssetInitParameters
{ 
	unsigned char                                      UnknownData00_2[0x40];                                      // 0x0000   (0x0040)  MISSED
};

/// Struct /Script/Paper2D.PaperSpriteAtlasSlot
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FPaperSpriteAtlasSlot
{ 
	TWeakObjectPtr<class UPaperSprite*>                SpriteRef;                                                  // 0x0000   (0x0008)  
	unsigned char                                      UnknownData00_6[0x28];                                      // 0x0008   (0x0028)  MISSED
	int32_t                                            AtlasIndex;                                                 // 0x0030   (0x0004)  
	int32_t                                            X;                                                          // 0x0034   (0x0004)  
	int32_t                                            Y;                                                          // 0x0038   (0x0004)  
	int32_t                                            Width;                                                      // 0x003C   (0x0004)  
	int32_t                                            Height;                                                     // 0x0040   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0044   (0x0004)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(APaperCharacter) == 0x0630); // 1584 bytes (0x000628 - 0x000630)
static_assert(sizeof(FPaperFlipbookKeyFrame) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPaperFlipbook) == 0x0050); // 80 bytes (0x000028 - 0x000050)
static_assert(sizeof(APaperFlipbookActor) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UPaperFlipbookComponent) == 0x05F0); // 1520 bytes (0x0005A0 - 0x0005F0)
static_assert(sizeof(APaperGroupedSpriteActor) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(FSpriteInstanceData) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(UPaperGroupedSpriteComponent) == 0x05D0); // 1488 bytes (0x0005A0 - 0x0005D0)
static_assert(sizeof(UPaperRuntimeSettings) == 0x0030); // 48 bytes (0x000028 - 0x000030)
static_assert(sizeof(FPaperSpriteSocket) == 0x0070); // 112 bytes (0x000000 - 0x000070)
static_assert(sizeof(UPaperSprite) == 0x00B8); // 184 bytes (0x000028 - 0x0000B8)
static_assert(sizeof(APaperSpriteActor) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UPaperSpriteAtlas) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPaperSpriteBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UPaperSpriteComponent) == 0x05C0); // 1472 bytes (0x0005A0 - 0x0005C0)
static_assert(sizeof(FPaperTileInfo) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(UPaperTileLayer) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(UPaperTileMap) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(APaperTileMapActor) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(sizeof(UPaperTileMapComponent) == 0x05F0); // 1520 bytes (0x0005A0 - 0x0005F0)
static_assert(sizeof(FIntMargin) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSpriteGeometryShape) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FSpriteGeometryCollection) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FPaperTileMetadata) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPaperTileSetTerrain) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(UPaperTileSet) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UMaterialExpressionSpriteTextureSampler) == 0x0260); // 608 bytes (0x000240 - 0x000260)
static_assert(sizeof(APaperTerrainActor) == 0x02A8); // 680 bytes (0x000290 - 0x0002A8)
static_assert(sizeof(UPaperTerrainComponent) == 0x05C0); // 1472 bytes (0x000568 - 0x0005C0)
static_assert(sizeof(FPaperTerrainMaterialRule) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(UPaperTerrainMaterial) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(UPaperTerrainSplineComponent) == 0x0680); // 1664 bytes (0x000670 - 0x000680)
static_assert(sizeof(UTileMapBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FSpriteDrawCallRecord) == 0x0140); // 320 bytes (0x000000 - 0x000140)
static_assert(sizeof(FSpriteAssetInitParameters) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(FPaperSpriteAtlasSlot) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(offsetof(APaperCharacter, Sprite) == 0x0628);
static_assert(offsetof(FPaperFlipbookKeyFrame, Sprite) == 0x0000);
static_assert(offsetof(UPaperFlipbook, KeyFrames) == 0x0030);
static_assert(offsetof(UPaperFlipbook, DefaultMaterial) == 0x0040);
static_assert(offsetof(UPaperFlipbook, CollisionSource) == 0x0048);
static_assert(offsetof(APaperFlipbookActor, RenderComponent) == 0x0290);
static_assert(offsetof(UPaperFlipbookComponent, SourceFlipbook) == 0x05A0);
static_assert(offsetof(UPaperFlipbookComponent, Material) == 0x05A8);
static_assert(offsetof(UPaperFlipbookComponent, SpriteColor) == 0x05C0);
static_assert(offsetof(UPaperFlipbookComponent, CachedBodySetup) == 0x05D0);
static_assert(offsetof(APaperGroupedSpriteActor, RenderComponent) == 0x0290);
static_assert(offsetof(FSpriteInstanceData, Transform) == 0x0000);
static_assert(offsetof(FSpriteInstanceData, SourceSprite) == 0x0080);
static_assert(offsetof(FSpriteInstanceData, VertexColor) == 0x0088);
static_assert(offsetof(UPaperGroupedSpriteComponent, InstanceMaterials) == 0x05A0);
static_assert(offsetof(UPaperGroupedSpriteComponent, PerInstanceSpriteData) == 0x05B0);
static_assert(offsetof(FPaperSpriteSocket, LocalTransform) == 0x0000);
static_assert(offsetof(FPaperSpriteSocket, SocketName) == 0x0060);
static_assert(offsetof(UPaperSprite, AdditionalSourceTextures) == 0x0038);
static_assert(offsetof(UPaperSprite, BakedSourceUV) == 0x0048);
static_assert(offsetof(UPaperSprite, BakedSourceDimension) == 0x0058);
static_assert(offsetof(UPaperSprite, BakedSourceTexture) == 0x0068);
static_assert(offsetof(UPaperSprite, DefaultMaterial) == 0x0070);
static_assert(offsetof(UPaperSprite, AlternateMaterial) == 0x0078);
static_assert(offsetof(UPaperSprite, Sockets) == 0x0080);
static_assert(offsetof(UPaperSprite, SpriteCollisionDomain) == 0x0090);
static_assert(offsetof(UPaperSprite, BodySetup) == 0x0098);
static_assert(offsetof(UPaperSprite, BakedRenderData) == 0x00A8);
static_assert(offsetof(APaperSpriteActor, RenderComponent) == 0x0290);
static_assert(offsetof(UPaperSpriteComponent, SourceSprite) == 0x05A0);
static_assert(offsetof(UPaperSpriteComponent, MaterialOverride) == 0x05A8);
static_assert(offsetof(UPaperSpriteComponent, SpriteColor) == 0x05B0);
static_assert(offsetof(FPaperTileInfo, TileSet) == 0x0000);
static_assert(offsetof(UPaperTileLayer, LayerName) == 0x0028);
static_assert(offsetof(UPaperTileLayer, LayerColor) == 0x0054);
static_assert(offsetof(UPaperTileLayer, AllocatedCells) == 0x0070);
static_assert(offsetof(UPaperTileLayer, TileSet) == 0x0080);
static_assert(offsetof(UPaperTileLayer, AllocatedGrid) == 0x0088);
static_assert(offsetof(UPaperTileMap, SelectedTileSet) == 0x0048);
static_assert(offsetof(UPaperTileMap, Material) == 0x0078);
static_assert(offsetof(UPaperTileMap, TileLayers) == 0x0080);
static_assert(offsetof(UPaperTileMap, SpriteCollisionDomain) == 0x0094);
static_assert(offsetof(UPaperTileMap, ProjectionMode) == 0x0095);
static_assert(offsetof(UPaperTileMap, BodySetup) == 0x00A0);
static_assert(offsetof(APaperTileMapActor, RenderComponent) == 0x0290);
static_assert(offsetof(UPaperTileMapComponent, DefaultLayerTileSet) == 0x05B0);
static_assert(offsetof(UPaperTileMapComponent, Material) == 0x05B8);
static_assert(offsetof(UPaperTileMapComponent, TileLayers) == 0x05C0);
static_assert(offsetof(UPaperTileMapComponent, TileMapColor) == 0x05D0);
static_assert(offsetof(UPaperTileMapComponent, TileMap) == 0x05E8);
static_assert(offsetof(FSpriteGeometryShape, ShapeType) == 0x0000);
static_assert(offsetof(FSpriteGeometryShape, Vertices) == 0x0008);
static_assert(offsetof(FSpriteGeometryShape, BoxSize) == 0x0018);
static_assert(offsetof(FSpriteGeometryShape, BoxPosition) == 0x0028);
static_assert(offsetof(FSpriteGeometryCollection, Shapes) == 0x0000);
static_assert(offsetof(FSpriteGeometryCollection, GeometryType) == 0x0010);
static_assert(offsetof(FPaperTileMetadata, UserDataName) == 0x0000);
static_assert(offsetof(FPaperTileMetadata, CollisionData) == 0x0008);
static_assert(offsetof(FPaperTileSetTerrain, TerrainName) == 0x0000);
static_assert(offsetof(UPaperTileSet, TileSize) == 0x0028);
static_assert(offsetof(UPaperTileSet, TileSheet) == 0x0030);
static_assert(offsetof(UPaperTileSet, AdditionalSourceTextures) == 0x0038);
static_assert(offsetof(UPaperTileSet, BorderMargin) == 0x0048);
static_assert(offsetof(UPaperTileSet, PerTileSpacing) == 0x0058);
static_assert(offsetof(UPaperTileSet, DrawingOffset) == 0x0060);
static_assert(offsetof(UPaperTileSet, PerTileData) == 0x0078);
static_assert(offsetof(UPaperTileSet, Terrains) == 0x0088);
static_assert(offsetof(UMaterialExpressionSpriteTextureSampler, SlotDisplayName) == 0x0248);
static_assert(offsetof(APaperTerrainActor, DummyRoot) == 0x0290);
static_assert(offsetof(APaperTerrainActor, SplineComponent) == 0x0298);
static_assert(offsetof(APaperTerrainActor, RenderComponent) == 0x02A0);
static_assert(offsetof(UPaperTerrainComponent, TerrainMaterial) == 0x0568);
static_assert(offsetof(UPaperTerrainComponent, AssociatedSpline) == 0x0578);
static_assert(offsetof(UPaperTerrainComponent, TerrainColor) == 0x0588);
static_assert(offsetof(UPaperTerrainComponent, SpriteCollisionDomain) == 0x059C);
static_assert(offsetof(UPaperTerrainComponent, CachedBodySetup) == 0x05A8);
static_assert(offsetof(FPaperTerrainMaterialRule, StartCap) == 0x0000);
static_assert(offsetof(FPaperTerrainMaterialRule, Body) == 0x0008);
static_assert(offsetof(FPaperTerrainMaterialRule, EndCap) == 0x0018);
static_assert(offsetof(UPaperTerrainMaterial, Rules) == 0x0030);
static_assert(offsetof(UPaperTerrainMaterial, InteriorFill) == 0x0040);
static_assert(offsetof(FSpriteDrawCallRecord, Destination) == 0x0000);
static_assert(offsetof(FSpriteDrawCallRecord, BaseTexture) == 0x0018);
static_assert(offsetof(FSpriteDrawCallRecord, Color) == 0x0050);
static_assert(offsetof(FPaperSpriteAtlasSlot, SpriteRef) == 0x0000);
