
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: Engine

#pragma pack(push, 0x1)

/// Class /Script/Renderer.SparseVolumeTextureViewerComponent
/// Size: 0x0590 (1424 bytes) (0x000568 - 0x000590) align 16 MaxSize: 0x0590
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{ 
public:
	class USparseVolumeTexture*                        SparseVolumeTexturePreview;                                 // 0x0568   (0x0008)  
	bool                                               bAnimate : 1;                                               // 0x0570:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0571   (0x0003)  MISSED
	float                                              AnimationFrame;                                             // 0x0574   (0x0004)  
	float                                              FrameRate;                                                  // 0x0578   (0x0004)  
	float                                              AnimationTime;                                              // 0x057C   (0x0004)  
	int32_t                                            ComponentToVisualize;                                       // 0x0580   (0x0004)  
	unsigned char                                      UnknownData01_7[0xC];                                       // 0x0584   (0x000C)  MISSED
};

/// Class /Script/Renderer.SparseVolumeTextureViewer
/// Size: 0x0298 (664 bytes) (0x000290 - 0x000298) align 8 MaxSize: 0x0298
class ASparseVolumeTextureViewer : public AInfo
{ 
public:
	class USparseVolumeTextureViewerComponent*         SparseVolumeTextureViewerComponent;                         // 0x0290   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(USparseVolumeTextureViewerComponent) == 0x0590); // 1424 bytes (0x000568 - 0x000590)
static_assert(sizeof(ASparseVolumeTextureViewer) == 0x0298); // 664 bytes (0x000290 - 0x000298)
static_assert(offsetof(USparseVolumeTextureViewerComponent, SparseVolumeTexturePreview) == 0x0568);
static_assert(offsetof(ASparseVolumeTextureViewer, SparseVolumeTextureViewerComponent) == 0x0290);
