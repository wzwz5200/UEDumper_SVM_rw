
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/EngineSettings.ETwoPlayerSplitScreenType
/// Size: 0x01 (1 bytes)
enum class ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal                                            = 0,
	ETwoPlayerSplitScreenType__Vertical                                              = 1
};

/// Enum /Script/EngineSettings.EThreePlayerSplitScreenType
/// Size: 0x01 (1 bytes)
enum class EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop                                            = 0,
	EThreePlayerSplitScreenType__FavorBottom                                         = 1,
	EThreePlayerSplitScreenType__Vertical                                            = 2,
	EThreePlayerSplitScreenType__Horizontal                                          = 3
};

/// Enum /Script/EngineSettings.EFourPlayerSplitScreenType
/// Size: 0x01 (1 bytes)
enum class EFourPlayerSplitScreenType : uint8_t
{
	EFourPlayerSplitScreenType__Grid                                                 = 0,
	EFourPlayerSplitScreenType__Vertical                                             = 1,
	EFourPlayerSplitScreenType__Horizontal                                           = 2
};

/// Enum /Script/EngineSettings.ESubLevelStripMode
/// Size: 0x01 (1 bytes)
enum class ESubLevelStripMode : uint8_t
{
	ESubLevelStripMode__ExactClass                                                   = 0,
	ESubLevelStripMode__IsChildOf                                                    = 1
};

/// Struct /Script/EngineSettings.AutoCompleteCommand
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FAutoCompleteCommand
{ 
	FString                                            Command;                                                    // 0x0000   (0x0010)  
	FString                                            Desc;                                                       // 0x0010   (0x0010)  
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0020   (0x0008)  MISSED
};

/// Class /Script/EngineSettings.ConsoleSettings
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UConsoleSettings : public UObject
{ 
public:
	int32_t                                            MaxScrollbackSize;                                          // 0x0028   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x002C   (0x0004)  MISSED
	TArray<FAutoCompleteCommand>                       ManualAutoCompleteList;                                     // 0x0030   (0x0010)  
	TArray<FString>                                    AutoCompleteMapPaths;                                       // 0x0040   (0x0010)  
	float                                              BackgroundOpacityPercentage;                                // 0x0050   (0x0004)  
	bool                                               bOrderTopToBottom;                                          // 0x0054   (0x0001)  
	bool                                               bDisplayHelpInAutoComplete;                                 // 0x0055   (0x0001)  
	unsigned char                                      UnknownData01_6[0x2];                                       // 0x0056   (0x0002)  MISSED
	FColor                                             InputColor;                                                 // 0x0058   (0x0004)  
	FColor                                             HistoryColor;                                               // 0x005C   (0x0004)  
	FColor                                             AutoCompleteCommandColor;                                   // 0x0060   (0x0004)  
	FColor                                             AutoCompleteCVarColor;                                      // 0x0064   (0x0004)  
	FColor                                             AutoCompleteFadedColor;                                     // 0x0068   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x006C   (0x0004)  MISSED
};

/// Struct /Script/EngineSettings.GameModeName
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FGameModeName
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	FSoftClassPath                                     GameMode;                                                   // 0x0010   (0x0020)  
};

/// Class /Script/EngineSettings.GameMapsSettings
/// Size: 0x0120 (288 bytes) (0x000028 - 0x000120) align 8 MaxSize: 0x0120
class UGameMapsSettings : public UObject
{ 
public:
	FString                                            LocalMapOptions;                                            // 0x0028   (0x0010)  
	FSoftObjectPath                                    TransitionMap;                                              // 0x0038   (0x0020)  
	bool                                               bUseSplitscreen;                                            // 0x0058   (0x0001)  
	TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout;                                 // 0x0059   (0x0001)  
	TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout;                               // 0x005A   (0x0001)  
	EFourPlayerSplitScreenType                         FourPlayerSplitscreenLayout;                                // 0x005B   (0x0001)  
	bool                                               bOffsetPlayerGamepadIds;                                    // 0x005C   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x005D   (0x0003)  MISSED
	FSoftClassPath                                     GameInstanceClass;                                          // 0x0060   (0x0020)  
	FSoftObjectPath                                    GameDefaultMap;                                             // 0x0080   (0x0020)  
	FSoftObjectPath                                    ServerDefaultMap;                                           // 0x00A0   (0x0020)  
	FSoftClassPath                                     GlobalDefaultGameMode;                                      // 0x00C0   (0x0020)  
	FSoftClassPath                                     GlobalDefaultServerGameMode;                                // 0x00E0   (0x0020)  
	TArray<FGameModeName>                              GameModeMapPrefixes;                                        // 0x0100   (0x0010)  
	TArray<FGameModeName>                              GameModeClassAliases;                                       // 0x0110   (0x0010)  


	/// Functions
	// Function /Script/EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
	// void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);                                                            // [0x37d9990] Final|Native|Public|BlueprintCallable 
	// Function /Script/EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
	// bool GetSkipAssigningGamepadToPlayer1();                                                                                 // [0x37d9970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EngineSettings.GameMapsSettings.GetGameMapsSettings
	// class UGameMapsSettings* GetGameMapsSettings();                                                                          // [0x37d9900] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EngineSettings.GameNetworkManagerSettings
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UGameNetworkManagerSettings : public UObject
{ 
public:
	int32_t                                            MinDynamicBandwidth;                                        // 0x0028   (0x0004)  
	int32_t                                            MaxDynamicBandwidth;                                        // 0x002C   (0x0004)  
	int32_t                                            TotalNetBandwidth;                                          // 0x0030   (0x0004)  
	int32_t                                            BadPingThreshold;                                           // 0x0034   (0x0004)  
	bool                                               bIsStandbyCheckingEnabled : 1;                              // 0x0038:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x0039   (0x0003)  MISSED
	float                                              StandbyRxCheatTime;                                         // 0x003C   (0x0004)  
	float                                              StandbyTxCheatTime;                                         // 0x0040   (0x0004)  
	float                                              PercentMissingForRxStandby;                                 // 0x0044   (0x0004)  
	float                                              PercentMissingForTxStandby;                                 // 0x0048   (0x0004)  
	float                                              PercentForBadPing;                                          // 0x004C   (0x0004)  
	float                                              JoinInProgressStandbyWaitTime;                              // 0x0050   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x0054   (0x0004)  MISSED
};

/// Class /Script/EngineSettings.GameSessionSettings
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UGameSessionSettings : public UObject
{ 
public:
	int32_t                                            MaxSpectators;                                              // 0x0028   (0x0004)  
	int32_t                                            MaxPlayers;                                                 // 0x002C   (0x0004)  
	bool                                               bRequiresPushToTalk : 1;                                    // 0x0030:0 (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/EngineSettings.GeneralEngineSettings
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGeneralEngineSettings : public UObject
{ 
public:
};

/// Class /Script/EngineSettings.GeneralProjectSettings
/// Size: 0x0118 (280 bytes) (0x000028 - 0x000118) align 8 MaxSize: 0x0118
class UGeneralProjectSettings : public UObject
{ 
public:
	FString                                            CompanyName;                                                // 0x0028   (0x0010)  
	FString                                            CompanyDistinguishedName;                                   // 0x0038   (0x0010)  
	FString                                            CopyrightNotice;                                            // 0x0048   (0x0010)  
	FString                                            Description;                                                // 0x0058   (0x0010)  
	FString                                            Homepage;                                                   // 0x0068   (0x0010)  
	FString                                            LicensingTerms;                                             // 0x0078   (0x0010)  
	FString                                            PrivacyPolicy;                                              // 0x0088   (0x0010)  
	FGuid                                              ProjectID;                                                  // 0x0098   (0x0010)  
	FString                                            ProjectName;                                                // 0x00A8   (0x0010)  
	FString                                            ProjectVersion;                                             // 0x00B8   (0x0010)  
	FString                                            SupportContact;                                             // 0x00C8   (0x0010)  
	FText                                              ProjectDisplayedTitle;                                      // 0x00D8   (0x0018)  
	FText                                              ProjectDebugTitleInfo;                                      // 0x00F0   (0x0018)  
	bool                                               bShouldWindowPreserveAspectRatio;                           // 0x0108   (0x0001)  
	bool                                               bUseBorderlessWindow;                                       // 0x0109   (0x0001)  
	bool                                               bStartInVR;                                                 // 0x010A   (0x0001)  
	bool                                               bAllowWindowResize;                                         // 0x010B   (0x0001)  
	bool                                               bAllowClose;                                                // 0x010C   (0x0001)  
	bool                                               bAllowMaximize;                                             // 0x010D   (0x0001)  
	bool                                               bAllowMinimize;                                             // 0x010E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x010F   (0x0001)  MISSED
	float                                              EyeOffsetForFakeStereoRenderingDevice;                      // 0x0110   (0x0004)  
	float                                              FOVForFakeStereoRenderingDevice;                            // 0x0114   (0x0004)  
};

/// Class /Script/EngineSettings.HudSettings
/// Size: 0x0040 (64 bytes) (0x000028 - 0x000040) align 8 MaxSize: 0x0040
class UHudSettings : public UObject
{ 
public:
	bool                                               bShowHUD : 1;                                               // 0x0028:0 (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x0029   (0x0007)  MISSED
	TArray<FName>                                      DebugDisplay;                                               // 0x0030   (0x0010)  
};

/// Struct /Script/EngineSettings.TemplateMapInfoOverride
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FTemplateMapInfoOverride
{ 
	FSoftObjectPath                                    Thumbnail;                                                  // 0x0000   (0x0020)  
	FSoftObjectPath                                    Map;                                                        // 0x0020   (0x0020)  
	FText                                              DisplayName;                                                // 0x0040   (0x0018)  
};

#pragma pack(pop)


static_assert(sizeof(FAutoCompleteCommand) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(sizeof(UConsoleSettings) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(FGameModeName) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UGameMapsSettings) == 0x0120); // 288 bytes (0x000028 - 0x000120)
static_assert(sizeof(UGameNetworkManagerSettings) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(sizeof(UGameSessionSettings) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UGeneralEngineSettings) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UGeneralProjectSettings) == 0x0118); // 280 bytes (0x000028 - 0x000118)
static_assert(sizeof(UHudSettings) == 0x0040); // 64 bytes (0x000028 - 0x000040)
static_assert(sizeof(FTemplateMapInfoOverride) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(offsetof(FAutoCompleteCommand, Command) == 0x0000);
static_assert(offsetof(FAutoCompleteCommand, Desc) == 0x0010);
static_assert(offsetof(UConsoleSettings, ManualAutoCompleteList) == 0x0030);
static_assert(offsetof(UConsoleSettings, AutoCompleteMapPaths) == 0x0040);
static_assert(offsetof(UConsoleSettings, InputColor) == 0x0058);
static_assert(offsetof(UConsoleSettings, HistoryColor) == 0x005C);
static_assert(offsetof(UConsoleSettings, AutoCompleteCommandColor) == 0x0060);
static_assert(offsetof(UConsoleSettings, AutoCompleteCVarColor) == 0x0064);
static_assert(offsetof(UConsoleSettings, AutoCompleteFadedColor) == 0x0068);
static_assert(offsetof(FGameModeName, Name) == 0x0000);
static_assert(offsetof(FGameModeName, GameMode) == 0x0010);
static_assert(offsetof(UGameMapsSettings, LocalMapOptions) == 0x0028);
static_assert(offsetof(UGameMapsSettings, TransitionMap) == 0x0038);
static_assert(offsetof(UGameMapsSettings, TwoPlayerSplitscreenLayout) == 0x0059);
static_assert(offsetof(UGameMapsSettings, ThreePlayerSplitscreenLayout) == 0x005A);
static_assert(offsetof(UGameMapsSettings, FourPlayerSplitscreenLayout) == 0x005B);
static_assert(offsetof(UGameMapsSettings, GameInstanceClass) == 0x0060);
static_assert(offsetof(UGameMapsSettings, GameDefaultMap) == 0x0080);
static_assert(offsetof(UGameMapsSettings, ServerDefaultMap) == 0x00A0);
static_assert(offsetof(UGameMapsSettings, GlobalDefaultGameMode) == 0x00C0);
static_assert(offsetof(UGameMapsSettings, GlobalDefaultServerGameMode) == 0x00E0);
static_assert(offsetof(UGameMapsSettings, GameModeMapPrefixes) == 0x0100);
static_assert(offsetof(UGameMapsSettings, GameModeClassAliases) == 0x0110);
static_assert(offsetof(UGeneralProjectSettings, CompanyName) == 0x0028);
static_assert(offsetof(UGeneralProjectSettings, CompanyDistinguishedName) == 0x0038);
static_assert(offsetof(UGeneralProjectSettings, CopyrightNotice) == 0x0048);
static_assert(offsetof(UGeneralProjectSettings, Description) == 0x0058);
static_assert(offsetof(UGeneralProjectSettings, Homepage) == 0x0068);
static_assert(offsetof(UGeneralProjectSettings, LicensingTerms) == 0x0078);
static_assert(offsetof(UGeneralProjectSettings, PrivacyPolicy) == 0x0088);
static_assert(offsetof(UGeneralProjectSettings, ProjectID) == 0x0098);
static_assert(offsetof(UGeneralProjectSettings, ProjectName) == 0x00A8);
static_assert(offsetof(UGeneralProjectSettings, ProjectVersion) == 0x00B8);
static_assert(offsetof(UGeneralProjectSettings, SupportContact) == 0x00C8);
static_assert(offsetof(UGeneralProjectSettings, ProjectDisplayedTitle) == 0x00D8);
static_assert(offsetof(UGeneralProjectSettings, ProjectDebugTitleInfo) == 0x00F0);
static_assert(offsetof(UHudSettings, DebugDisplay) == 0x0030);
static_assert(offsetof(FTemplateMapInfoOverride, Thumbnail) == 0x0000);
static_assert(offsetof(FTemplateMapInfoOverride, Map) == 0x0020);
static_assert(offsetof(FTemplateMapInfoOverride, DisplayName) == 0x0040);
