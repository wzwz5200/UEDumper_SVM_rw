
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/MoviePlayer.EMoviePlaybackType
/// Size: 0x01 (1 bytes)
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                                                                        = 0,
	MT_Looped                                                                        = 1,
	MT_LoadingLoop                                                                   = 2
};

/// Class /Script/MoviePlayer.MoviePlayerSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UMoviePlayerSettings : public UObject
{ 
public:
	bool                                               bWaitForMoviesToComplete;                                   // 0x0028   (0x0001)  
	bool                                               bMoviesAreSkippable;                                        // 0x0029   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x002A   (0x0006)  MISSED
	TArray<FString>                                    StartupMovies;                                              // 0x0030   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UMoviePlayerSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(offsetof(UMoviePlayerSettings, StartupMovies) == 0x0030);
