
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: GeometryCache
/// dependency: MovieScene

#pragma pack(push, 0x1)

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheParams
/// Size: 0x0048 (72 bytes) (0x000000 - 0x000048) align 8 MaxSize: 0x0048
struct FMovieSceneGeometryCacheParams
{ 
	class UGeometryCache*                              GeometryCacheAsset;                                         // 0x0000   (0x0008)  
	FFrameNumber                                       FirstLoopStartFrameOffset;                                  // 0x0008   (0x0004)  
	FFrameNumber                                       StartFrameOffset;                                           // 0x000C   (0x0004)  
	FFrameNumber                                       EndFrameOffset;                                             // 0x0010   (0x0004)  
	float                                              PlayRate;                                                   // 0x0014   (0x0004)  
	bool                                               bReverse : 1;                                               // 0x0018:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0019   (0x0003)  MISSED
	float                                              StartOffset;                                                // 0x001C   (0x0004)  
	float                                              EndOffset;                                                  // 0x0020   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0024   (0x0004)  MISSED
	FSoftObjectPath                                    GeometryCache;                                              // 0x0028   (0x0020)  
};

/// Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheSection
/// Size: 0x0138 (312 bytes) (0x0000F0 - 0x000138) align 8 MaxSize: 0x0138
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{ 
public:
	FMovieSceneGeometryCacheParams                     Params;                                                     // 0x00F0   (0x0048)  
};

/// Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheTrack
/// Size: 0x00B0 (176 bytes) (0x000098 - 0x0000B0) align 8 MaxSize: 0x00B0
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0098   (0x0008)  MISSED
	TArray<class UMovieSceneSection*>                  AnimationSections;                                          // 0x00A0   (0x0010)  
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
/// Size: 0x0050 (80 bytes) (0x000048 - 0x000050) align 8 MaxSize: 0x0050
struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams
{ 
	FFrameNumber                                       SectionStartTime;                                           // 0x0048   (0x0004)  
	FFrameNumber                                       SectionEndTime;                                             // 0x004C   (0x0004)  
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
/// Size: 0x0070 (112 bytes) (0x000020 - 0x000070) align 8 MaxSize: 0x0070
struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate
{ 
	FMovieSceneGeometryCacheSectionTemplateParameters  Params;                                                     // 0x0020   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(FMovieSceneGeometryCacheParams) == 0x0048); // 72 bytes (0x000000 - 0x000048)
static_assert(sizeof(UMovieSceneGeometryCacheSection) == 0x0138); // 312 bytes (0x0000F0 - 0x000138)
static_assert(sizeof(UMovieSceneGeometryCacheTrack) == 0x00B0); // 176 bytes (0x000098 - 0x0000B0)
static_assert(sizeof(FMovieSceneGeometryCacheSectionTemplateParameters) == 0x0050); // 80 bytes (0x000048 - 0x000050)
static_assert(sizeof(FMovieSceneGeometryCacheSectionTemplate) == 0x0070); // 112 bytes (0x000020 - 0x000070)
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCacheAsset) == 0x0000);
static_assert(offsetof(FMovieSceneGeometryCacheParams, FirstLoopStartFrameOffset) == 0x0008);
static_assert(offsetof(FMovieSceneGeometryCacheParams, StartFrameOffset) == 0x000C);
static_assert(offsetof(FMovieSceneGeometryCacheParams, EndFrameOffset) == 0x0010);
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCache) == 0x0028);
static_assert(offsetof(UMovieSceneGeometryCacheSection, Params) == 0x00F0);
static_assert(offsetof(UMovieSceneGeometryCacheTrack, AnimationSections) == 0x00A0);
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionStartTime) == 0x0048);
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionEndTime) == 0x004C);
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplate, Params) == 0x0020);
