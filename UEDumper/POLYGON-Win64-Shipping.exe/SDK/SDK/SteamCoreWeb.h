
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/SteamCoreWeb.ESubsystemWeb
/// Size: 0x01 (1 bytes)
enum class ESubsystemWeb : uint8_t
{
	ESubsystemWeb__SteamCoreWeb                                                      = 0,
	ESubsystemWeb__Apps                                                              = 1,
	ESubsystemWeb__Broadcast                                                         = 2,
	ESubsystemWeb__CheatReporting                                                    = 3,
	ESubsystemWeb__Community                                                         = 4,
	ESubsystemWeb__Econ                                                              = 5,
	ESubsystemWeb__EconMarket                                                        = 6,
	ESubsystemWeb__Economy                                                           = 7,
	ESubsystemWeb__GameInventory                                                     = 8,
	ESubsystemWeb__GameNotifications                                                 = 9,
	ESubsystemWeb__GameServers                                                       = 10,
	ESubsystemWeb__GameServerStats                                                   = 11,
	ESubsystemWeb__Inventory                                                         = 12,
	ESubsystemWeb__LobbyMatchmaking                                                  = 13,
	ESubsystemWeb__Leaderboards                                                      = 14,
	ESubsystemWeb__MicroTxn                                                          = 15,
	ESubsystemWeb__News                                                              = 16,
	ESubsystemWeb__PlayerService                                                     = 17,
	ESubsystemWeb__PublishedFile                                                     = 18,
	ESubsystemWeb__PublishedItemSearch                                               = 19,
	ESubsystemWeb__PublishedItemVoting                                               = 20,
	ESubsystemWeb__RemoteStorage                                                     = 21,
	ESubsystemWeb__User                                                              = 22,
	ESubsystemWeb__UserAuth                                                          = 23,
	ESubsystemWeb__UserStats                                                         = 24,
	ESubsystemWeb__Workshop                                                          = 25
};

/// Enum /Script/SteamCoreWeb.ESteamValueType
/// Size: 0x01 (1 bytes)
enum class ESteamValueType : uint8_t
{
	ESteamValueType__STRING                                                          = 0,
	ESteamValueType__NUMBER                                                          = 1,
	ESteamValueType__BOOL                                                            = 2
};

/// Enum /Script/SteamCoreWeb.ESteamJsonResult
/// Size: 0x01 (1 bytes)
enum class ESteamJsonResult : uint8_t
{
	ESteamJsonResult__Found                                                          = 0,
	ESteamJsonResult__NotFound                                                       = 1
};

/// Enum /Script/SteamCoreWeb.ESteamCoreWebLobbyType
/// Size: 0x01 (1 bytes)
enum class ESteamCoreWebLobbyType : uint8_t
{
	ESteamCoreWebLobbyType__Private                                                  = 0,
	ESteamCoreWebLobbyType__FriendsOnly                                              = 1,
	ESteamCoreWebLobbyType__TypePublic                                               = 2,
	ESteamCoreWebLobbyType__TypeInvisible                                            = 3
};

/// Enum /Script/SteamCoreWeb.EVanityUrlType
/// Size: 0x01 (1 bytes)
enum class EVanityUrlType : uint8_t
{
	EVanityUrlType__Individual                                                       = 0,
	EVanityUrlType__Group                                                            = 1,
	EVanityUrlType__OfficialGameGroup                                                = 2
};

/// Class /Script/SteamCoreWeb.SteamCoreWeb
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USteamCoreWeb : public UObject
{ 
public:
};

/// Class /Script/SteamCoreWeb.SteamCoreWebSubsystem
/// Size: 0x0048 (72 bytes) (0x000030 - 0x000048) align 8 MaxSize: 0x0048
class USteamCoreWebSubsystem : public UGameInstanceSubsystem
{ 
public:
	unsigned char                                      UnknownData00_1[0x18];                                      // 0x0030   (0x0018)  MISSED
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncAction
/// Size: 0x0058 (88 bytes) (0x000030 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncAction : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1287) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0040   (0x0018)  MISSED


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncAction.HandleCallback
	// void HandleCallback(FString Data, bool bWasSuccessful);                                                                  // [0x13a4370] Native|Public        
};

/// Class /Script/SteamCoreWeb.SteamCoreWebSettings
/// Size: 0x0078 (120 bytes) (0x000038 - 0x000078) align 8 MaxSize: 0x0078
class USteamCoreWebSettings : public UDeveloperSettings
{ 
public:
	float                                              AsyncTaskTimeout;                                           // 0x0038   (0x0004)  
	int32_t                                            DisabledSubsystems;                                         // 0x003C   (0x0004)  
	bool                                               bDebugging;                                                 // 0x0040   (0x0001)  
	bool                                               bDevMode;                                                   // 0x0041   (0x0001)  
	unsigned char                                      UnknownData00_6[0x6];                                       // 0x0042   (0x0006)  MISSED
	FString                                            Key;                                                        // 0x0048   (0x0010)  
	int32_t                                            AppID;                                                      // 0x0058   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x005C   (0x0004)  MISSED
	FString                                            DevSteamID;                                                 // 0x0060   (0x0010)  
	bool                                               bSandboxMode;                                               // 0x0070   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0071   (0x0007)  MISSED
};

/// Class /Script/SteamCoreWeb.SteamWebUtilities
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class USteamWebUtilities : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamWebUtilities.ParseJson
	// bool ParseJson(FString JsonString, TArray<FSteamCoreJson>& Data);                                                        // [0x13a4460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.GetProjectKey
	// FString GetProjectKey();                                                                                                 // [0x13a3b10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.GetProjectAppID
	// int32_t GetProjectAppID();                                                                                               // [0x13a3ae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.GetDevSteamID
	// FString GetDevSteamID();                                                                                                 // [0x13a3760] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonStrings
	// void FindJsonStrings(FString JsonString, FString Key, TArray<FString>& Values, ESteamJsonResult& Result);                // [0x13a2060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonString
	// void FindJsonString(FString JsonString, FString Key, FString& Value, ESteamJsonResult& Result);                          // [0x13a1e70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonNumbers
	// void FindJsonNumbers(FString JsonString, FString Key, TArray<int32_t>& Values, ESteamJsonResult& Result);                // [0x13a1c80] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonNumber
	// void FindJsonNumber(FString JsonString, FString Key, int32_t& Value, ESteamJsonResult& Result);                          // [0x13a1ab0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonBools
	// void FindJsonBools(FString JsonString, FString Key, TArray<bool>& bValues, ESteamJsonResult& Result);                    // [0x13a18c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.SteamWebUtilities.FindJsonBool
	// void FindJsonBool(FString JsonString, FString Key, bool& bValue, ESteamJsonResult& Result);                              // [0x13a16f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebApps
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebApps : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebApps.UpToDateCheck
	// void UpToDateCheck(FDelegateProperty& Callback, int32_t AppID, int32_t Version);                                         // [0x13a6950] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.SetAppBuildLive
	// void SetAppBuildLive(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t BuildId, FString BetaKey, FString Description); // [0x13a6180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetServersAtAddress
	// void GetServersAtAddress(FDelegateProperty& Callback, FString Addr);                                                     // [0x13a3fa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetServerList
	// void GetServerList(FDelegateProperty& Callback, FString Key, FString Filter, int32_t Limit);                             // [0x13a3b90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetPlayersBanned
	// void GetPlayersBanned(FDelegateProperty& Callback, FString Key, int32_t AppID);                                          // [0x13a37e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetCheatingReports
	// void GetCheatingReports(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin); // [0x13a2dd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetAppList
	// void GetAppList(FDelegateProperty& Callback, FString Key);                                                               // [0x13a2be0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetAppDepotVersions
	// void GetAppDepotVersions(FDelegateProperty& Callback, FString Key, int32_t AppID);                                       // [0x13a28e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetAppBuilds
	// void GetAppBuilds(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t Count);                               // [0x13a2570] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebApps.GetAppBetas
	// void GetAppBetas(FDelegateProperty& Callback, FString Key, int32_t AppID);                                               // [0x13a2270] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetAppBetas : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBetas.GetAppBetasAsync
	// class USteamCoreAppsAsyncActionGetAppBetas* GetAppBetasAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x13a2400] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetAppBuilds : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppBuilds.GetAppBuildsAsync
	// class USteamCoreAppsAsyncActionGetAppBuilds* GetAppBuildsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t Count); // [0x13a2740] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetAppDepotVersions : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppDepotVersions.GetAppDepotVersionsAsync
	// class USteamCoreAppsAsyncActionGetAppDepotVersions* GetAppDepotVersionsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x13a2a70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class USteamCoreAppsAsyncActionGetAppList : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,1288) /* FMulticastInlineDelegate */ __um(OnCallback);                                        // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0040   (0x0010)  MISSED


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.HandleCallback
	// void HandleCallback(TArray<FWebAppsGetAppList>& Data, bool bWasSuccessful);                                              // [0x13a4230] Native|Public|HasOutParms 
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetAppList.GetAppListAsync
	// class USteamCoreAppsAsyncActionGetAppList* GetAppListAsync(class UObject* WorldContextObject);                           // [0x13a2d40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetCheatingReports.GetCheatingReportsAsync
	// class USteamCoreAppsAsyncActionGetCheatingReports* GetCheatingReportsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t TimeBegin, int32_t TimeEnd, bool bIncludeReports, bool bIncludeBans, int32_t ReportidMin); // [0x13a3490] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetPlayersBanned : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetPlayersBanned.GetPlayersBannedAsync
	// class USteamCoreAppsAsyncActionGetPlayersBanned* GetPlayersBannedAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x13a3970] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetServerList : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetServerList.GetServerListAsync
	// class USteamCoreAppsAsyncActionGetServerList* GetServerListAsync(class UObject* WorldContextObject, FString Key, FString Filter, int32_t Limit); // [0x13a3db0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionGetServersAtAddress : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionGetServersAtAddress.GetServersAtAddressAsync
	// class USteamCoreAppsAsyncActionGetServersAtAddress* GetServersAtAddressAsync(class UObject* WorldContextObject, FString Addr); // [0x13a4100] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionSetAppBuildLive : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionSetAppBuildLive.SetAppBuildLiveAsync
	// class USteamCoreAppsAsyncActionSetAppBuildLive* SetAppBuildLiveAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t BuildId, FString BetaKey, FString Description); // [0x13a6470] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreAppsAsyncActionUpToDateCheck : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreAppsAsyncActionUpToDateCheck.UpToDateCheckAsync
	// class USteamCoreAppsAsyncActionUpToDateCheck* UpToDateCheckAsync(class UObject* WorldContextObject, int32_t AppID, int32_t Version); // [0x13a6a80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebBroadcastService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebBroadcastService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebBroadcastService.PostGameDataFrame
	// void PostGameDataFrame(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString BroadcastId, FString FrameData); // [0x13a45a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionPostGameDataFrame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionPostGameDataFrame.PostGameDataFrameAsync
	// class USteamCoreWebAsyncActionPostGameDataFrame* PostGameDataFrameAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString BroadcastId, FString FrameData); // [0x13a48e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebCheatReporting
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebCheatReporting : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebCheatReporting.StartSecureMultiplayerSession
	// void StartSecureMultiplayerSession(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);            // [0x13a6730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.RequestVacStatusForUser
	// void RequestVacStatusForUser(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString SessionId); // [0x13a5ed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.RequestPlayerGameBan
	// void RequestPlayerGameBan(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString ReportID, FString CheatDescription, int32_t Duration, bool bDelayBan); // [0x13a5b00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.ReportPlayerCheating
	// void ReportPlayerCheating(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity); // [0x13a55b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.ReportCheatData
	// void ReportCheatData(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32_t GameProcessId, int32_t CheatProcessId, FString CheatParam1, FString CheatParam2); // [0x13a4e10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.RemovePlayerGameBan
	// void RemovePlayerGameBan(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                      // [0x13a4bf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.GetCheatingReports
	// void GetCheatingReports(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, FString ReportidMin, bool bIncludeReports, bool bIncludeBans, FString SteamID); // [0x13a30c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebCheatReporting.EndSecureMultiplayerSession
	// void EndSecureMultiplayerSession(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString SessionId); // [0x13a1440] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionReportPlayerCheating : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportPlayerCheating.ReportPlayerCheatingAsync
	// class USteamCoreWebAsyncActionReportPlayerCheating* ReportPlayerCheatingAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString SteamIdReporter, FString AppData, bool bHeuristic, bool bDetection, bool bPlayerReport, bool bNoReportID, int32_t GameMode, int32_t SuspicionStartTime, int32_t Severity); // [0x13ad6f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRequestPlayerGameBan : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestPlayerGameBan.RequestPlayerGameBanAsync
	// class USteamCoreWebAsyncActionRequestPlayerGameBan* RequestPlayerGameBanAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString ReportID, FString CheatDescription, int32_t Duration, bool bDelayBan); // [0x13adc10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRemovePlayerGameBan : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRemovePlayerGameBan.RemovePlayerGameBanAsync
	// class USteamCoreWebAsyncActionRemovePlayerGameBan* RemovePlayerGameBanAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x13acd90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetCheatingReports : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCheatingReports.GetCheatingReportsAsync
	// class USteamCoreWebAsyncActionGetCheatingReports* GetCheatingReportsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t TimeEnd, int32_t TimeBegin, FString ReportidMin, bool bIncludeReports, bool bIncludeBans, FString SteamID); // [0x13aaa00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionReportCheatData : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportCheatData.ReportCheatDataAsync
	// class USteamCoreWebAsyncActionReportCheatData* ReportCheatDataAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString PathAndFileName, FString WebCheatURL, FString TimeNow, FString TimeStarted, FString TimeStopped, FString CheatName, int32_t GameProcessId, int32_t CheatProcessId, FString CheatParam1, FString CheatParam2); // [0x13acf80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRequestVacStatusForUser : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestVacStatusForUser.RequestVacStatusForUserAsync
	// class USteamCoreWebAsyncActionRequestVacStatusForUser* RequestVacStatusForUserAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString SessionId); // [0x13adfc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionStartSecureMultiplayerSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartSecureMultiplayerSession.StartSecureMultiplayerSessionAsync
	// class USteamCoreWebAsyncActionStartSecureMultiplayerSession* StartSecureMultiplayerSessionAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x13ae240] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionEndSecureMultiplayerSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionEndSecureMultiplayerSession.EndSecureMultiplayerSessionAsync
	// class USteamCoreWebAsyncActionEndSecureMultiplayerSession* EndSecureMultiplayerSessionAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString SessionId); // [0x13a9840] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebEconMarketService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebEconMarketService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebEconMarketService.GetPopular
	// void GetPopular(FDelegateProperty& Callback, FString Key, FString Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency); // [0x13ab130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconMarketService.GetMarketEligibility
	// void GetMarketEligibility(FDelegateProperty& Callback, FString Key, FString SteamID);                                    // [0x13aada0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconMarketService.GetAssetID
	// void GetAssetID(FDelegateProperty& Callback, FString Key, int32_t AppID, FString ListingId);                             // [0x13aa5f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconMarketService.CancelAppListingsForUser
	// void CancelAppListingsForUser(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, bool bSynchronous); // [0x13a8c90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetMarketEligibility : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketEligibility.GetMarketEligibilityAsync
	// class USteamCoreWebAsyncActionGetMarketEligibility* GetMarketEligibilityAsync(class UObject* WorldContextObject, FString Key, FString SteamID); // [0x13aaf80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionCancelAppListingsForUser : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAppListingsForUser.CancelAppListingsForUserAsync
	// class USteamCoreWebAsyncActionCancelAppListingsForUser* CancelAppListingsForUserAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, bool bSynchronous); // [0x13a8ef0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetAssetID : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetID.GetAssetIDAsync
	// class USteamCoreWebAsyncActionGetAssetID* GetAssetIDAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString ListingId); // [0x13aa810] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPopular
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPopular : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPopular.GetPopularAsync
	// class USteamCoreWebAsyncActionGetPopular* GetPopularAsync(class UObject* WorldContextObject, FString Key, FString Language, int32_t Rows, int32_t Start, int32_t FilterAppId, int32_t ECurrency); // [0x13ab420] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebEconService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebEconService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebEconService.GetTradeOffersSummary
	// void GetTradeOffersSummary(FDelegateProperty& Callback, FString Key, int32_t TimeLastVisit);                             // [0x13aca90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.GetTradeOffers
	// void GetTradeOffers(FDelegateProperty& Callback, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff); // [0x13ac390] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.GetTradeOffer
	// void GetTradeOffer(FDelegateProperty& Callback, FString Key, FString TradeOfferId, FString Language);                    // [0x13abee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.GetTradeHistory
	// void GetTradeHistory(FDelegateProperty& Callback, FString Key, int32_t MaxTrades, int32_t StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal); // [0x13ab6e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.FlushInventoryCache
	// void FlushInventoryCache(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString ContextID);   // [0x13aa0c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.FlushContextCache
	// void FlushContextCache(FDelegateProperty& Callback, FString Key, int32_t AppID);                                         // [0x13a9dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.FlushAssetAppearanceCache
	// void FlushAssetAppearanceCache(FDelegateProperty& Callback, FString Key, int32_t AppID);                                 // [0x13a9ac0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.DeclineTradeOffer
	// void DeclineTradeOffer(FDelegateProperty& Callback, FString Key, FString TradeOfferId);                                  // [0x13a94b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebEconService.CancelTradeOffer
	// void CancelTradeOffer(FDelegateProperty& Callback, FString Key, FString TradeOfferId);                                   // [0x13a9120] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetTradeHistory : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeHistory.GetTradeHistoryAsync
	// class USteamCoreWebAsyncActionGetTradeHistory* GetTradeHistoryAsync(class UObject* WorldContextObject, FString Key, int32_t MaxTrades, int32_t StartAfterTime, FString StartAfterTradeId, bool bNavigatingBack, bool bGetDescriptions, FString Language, bool bIncludeFailed, bool bIncludeTotal); // [0x13abaf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionFlushInventoryCache : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushInventoryCache.FlushInventoryCacheAsync
	// class USteamCoreWebAsyncActionFlushInventoryCache* FlushInventoryCacheAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString ContextID); // [0x13aa370] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionFlushAssetAppearanceCache : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushAssetAppearanceCache.FlushAssetAppearanceCacheAsync
	// class USteamCoreWebAsyncActionFlushAssetAppearanceCache* FlushAssetAppearanceCacheAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x13a9c50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionFlushContextCache : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFlushContextCache.FlushContextCacheAsync
	// class USteamCoreWebAsyncActionFlushContextCache* FlushContextCacheAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x13a9f50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetTradeOffers : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffers.GetTradeOffersAsync
	// class USteamCoreWebAsyncActionGetTradeOffers* GetTradeOffersAsync(class UObject* WorldContextObject, FString Key, bool bGetSentOffers, bool bGetReceivedOffers, bool bGetDescriptions, FString Language, bool bActiveOnly, bool bHistoricalOnly, int32_t TimeHistoricalCutoff); // [0x13ac720] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetTradeOffer : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffer.GetTradeOfferAsync
	// class USteamCoreWebAsyncActionGetTradeOffer* GetTradeOfferAsync(class UObject* WorldContextObject, FString Key, FString TradeOfferId, FString Language); // [0x13ac150] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetTradeOffersSummary : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetTradeOffersSummary.GetTradeOffersSummaryAsync
	// class USteamCoreWebAsyncActionGetTradeOffersSummary* GetTradeOffersSummaryAsync(class UObject* WorldContextObject, FString Key, int32_t TimeLastVisit); // [0x13acc20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionDeclineTradeOffer : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeclineTradeOffer.DeclineTradeOfferAsync
	// class USteamCoreWebAsyncActionDeclineTradeOffer* DeclineTradeOfferAsync(class UObject* WorldContextObject, FString Key, FString TradeOfferId); // [0x13a9690] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionCancelTradeOffer : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelTradeOffer.CancelTradeOfferAsync
	// class USteamCoreWebAsyncActionCancelTradeOffer* CancelTradeOfferAsync(class UObject* WorldContextObject, FString Key, FString TradeOfferId); // [0x13a9300] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebGameInventory
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebGameInventory : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebGameInventory.UpdateItemDefs
	// void UpdateItemDefs();                                                                                                   // [0x13b6180] Final|Native|Public|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameInventory.SupportGetAssetHistory
	// void SupportGetAssetHistory(FDelegateProperty& Callback, FString Key, int32_t AppID, FString AssetId, FString ContextID); // [0x13b5c50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameInventory.HistoryExecuteCommands
	// void HistoryExecuteCommands(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString ContextID, int32_t ActorId); // [0x13b4d00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameInventory.GetUserHistory
	// void GetUserHistory(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString ContextID, int32_t StartTime, int32_t EndTime); // [0x13b4400] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameInventory.GetHistoryCommandDetails
	// void GetHistoryCommandDetails(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString Command, FString ContextID, FString Arguments); // [0x13b2d20] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetHistoryCommandDetails : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetHistoryCommandDetails.GetHistoryCommandDetailsAsync
	// class USteamCoreWebAsyncActionGetHistoryCommandDetails* GetHistoryCommandDetailsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString Command, FString ContextID, FString Arguments); // [0x13b3100] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetUserHistory : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserHistory.GetUserHistoryAsync
	// class USteamCoreWebAsyncActionGetUserHistory* GetUserHistoryAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString ContextID, int32_t StartTime, int32_t EndTime); // [0x13b4730] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionHistoryExecuteCommand : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionHistoryExecuteCommand.HistoryExecuteCommandAsync
	// class USteamCoreWebAsyncActionHistoryExecuteCommand* HistoryExecuteCommandAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString ContextID, int32_t ActorId); // [0x13b4a40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionSupportGetAssetHistory : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSupportGetAssetHistory.SupportGetAssetHistoryAsync
	// class USteamCoreWebAsyncActionSupportGetAssetHistory* SupportGetAssetHistoryAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString AssetId, FString ContextID); // [0x13b5f00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebGameNotificationsService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebGameNotificationsService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.UpdateSession
	// void UpdateSession(FDelegateProperty& Callback, FString Key, FString SessionId, int32_t AppID, FString Title, FString Users, FString SteamID); // [0x13b61a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.RequestNotifications
	// void RequestNotifications(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                     // [0x13b5370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.GetSessionDetailsForApp
	// void GetSessionDetailsForApp(FDelegateProperty& Callback, FString Key, FString Sessions, int32_t AppID, FString Language); // [0x13b3ed0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.EnumerateSessionsForApp
	// void EnumerateSessionsForApp(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language); // [0x13b2180] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.DeleteSessionBatch
	// void DeleteSessionBatch(FDelegateProperty& Callback, FString Key, FString SessionId, int32_t AppID);                     // [0x13b1d70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.DeleteSession
	// void DeleteSession(FDelegateProperty& Callback, FString Key, FString SessionId, int32_t AppID, FString SteamID);         // [0x13b1840] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameNotificationsService.CreateSession
	// void CreateSession(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Context, FString Title, FString Users, FString SteamID); // [0x13b0ee0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCreateSession
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionCreateSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCreateSession.CreateSessionAsync
	// class USteamCoreWebAsyncActionCreateSession* CreateSessionAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Context, FString Title, FString Users, FString SteamID); // [0x13b12c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionUpdateSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionUpdateSession.UpdateSessionAsync
	// class USteamCoreWebAsyncActionUpdateSession* UpdateSessionAsync(class UObject* WorldContextObject, FString Key, FString SessionId, int32_t AppID, FString Title, FString Users, FString SteamID); // [0x13b6570] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionEnumerateSessionsForApp : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateSessionsForApp.EnumerateSessionsForAppAsync
	// class USteamCoreWebAsyncActionEnumerateSessionsForApp* EnumerateSessionsForAppAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, bool bIncludeAllUserMessages, bool bIncludeAuthUserMessage, FString Language); // [0x13b24c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetSessionDetailsForApp : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSessionDetailsForApp.GetSessionDetailsForAppAsync
	// class USteamCoreWebAsyncActionGetSessionDetailsForApp* GetSessionDetailsForAppAsync(class UObject* WorldContextObject, FString Key, FString Sessions, int32_t AppID, FString Language); // [0x13b4180] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRequestNotifications : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRequestNotifications.RequestNotificationsAsync
	// class USteamCoreWebAsyncActionRequestNotifications* RequestNotificationsAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x13b5590] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionDeleteSession : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSession.DeleteSessionAsync
	// class USteamCoreWebAsyncActionDeleteSession* DeleteSessionAsync(class UObject* WorldContextObject, FString Key, FString SessionId, int32_t AppID, FString SteamID); // [0x13b1af0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionDeleteSessionBatch : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteSessionBatch.DeleteSessionBatchAsync
	// class USteamCoreWebAsyncActionDeleteSessionBatch* DeleteSessionBatchAsync(class UObject* WorldContextObject, FString Key, FString SessionId, int32_t AppID); // [0x13b1f90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebGameServersService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebGameServersService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebGameServersService.SetMemo
	// void SetMemo(FDelegateProperty& Callback, FString Key, FString SteamID, FString Memo);                                   // [0x13b59e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.SetBanStatus
	// void SetBanStatus(FDelegateProperty& Callback, FString Key, FString SteamID, bool bBanned, int32_t banSeconds);          // [0x13b5780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.ResetLoginToken
	// void ResetLoginToken(FDelegateProperty& Callback, FString Key, FString SteamID);                                         // [0x13b1660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.QueryLoginToken
	// void QueryLoginToken(FDelegateProperty& Callback, FString Key, FString LoginToken);                                      // [0x13b1660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.GetServerSteamIDsByIP
	// void GetServerSteamIDsByIP(FDelegateProperty& Callback, FString Key, FString ServerIP);                                  // [0x13b1660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.GetServerIPsBySteamID
	// void GetServerIPsBySteamID(FDelegateProperty& Callback, FString Key, FString ServerSteamId);                             // [0x13b1660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.GetAccountPublicInfo
	// void GetAccountPublicInfo(FDelegateProperty& Callback, FString Key, FString SteamID);                                    // [0x13b1660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.GetAccountList
	// void GetAccountList(FDelegateProperty& Callback, FString Key);                                                           // [0x13b2bc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.DeleteAccount
	// void DeleteAccount(FDelegateProperty& Callback, FString Key, FString SteamID);                                           // [0x13b1660] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebGameServersService.CreateAccount
	// void CreateAccount(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Memo);                               // [0x13b0cc0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebInventoryService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebInventoryService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebInventoryService.ModifyItems
	// void ModifyItems(FDelegateProperty& Callback, FString Key, int32_t AppID, FString InputJson, FString SteamID, int32_t Timestamp, FString Updates); // [0x13b4ff0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.GetQuantity
	// void GetQuantity(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> ItemdefIDs, bool bForce); // [0x13b3bd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.GetPriceSheet
	// void GetPriceSheet(FDelegateProperty& Callback, FString Key, int32_t Currency);                                          // [0x13b3a40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.GetItemDefs
	// void GetItemDefs(FDelegateProperty& Callback, FString Key, int32_t AppID, FString ModifiedSince, TArray<int32_t> ItemdefIDs, TArray<int32_t> WorkshopIDs, int32_t CacheMaxAgeSeconds); // [0x13b36c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.GetInventory
	// void GetInventory(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID);                             // [0x13b34a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.ExchangeItem
	// void ExchangeItem(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> MaterialsItemID, TArray<int32_t> MaterialsQuantity, FString OutputItemdefId); // [0x13b27e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.ConsumeItem
	// void ConsumeItem(FDelegateProperty& Callback, FString Key, int32_t AppID, FString ItemId, FString Quantity, FString SteamID, FString RequestId); // [0x13b08e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.Consolidate
	// void Consolidate(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> ItemdefIDs, bool bForce); // [0x13b05e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.AddPromoItem
	// void AddPromoItem(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestId); // [0x13b0210] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebInventoryService.AddItem
	// void AddItem(FDelegateProperty& Callback, FString Key, int32_t AppID, TArray<int32_t> ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestId, bool bTradeRestriction); // [0x13afda0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddItem
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionAddItem : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddItem.AddItemAsync
	// class USteamCoreWebAsyncActionAddItem* AddItemAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, TArray<int32_t> ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestId, bool bTradeRestriction); // [0x13b85d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionAddPromoItem : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAddPromoItem.AddPromoItemAsync
	// class USteamCoreWebAsyncActionAddPromoItem* AddPromoItemAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t ItemdefId, FString ItemPropsJson, FString SteamID, bool bNotify, FString RequestId); // [0x13b8a20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionConsumeItem : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsumeItem.ConsumeItemAsync
	// class USteamCoreWebAsyncActionConsumeItem* ConsumeItemAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString ItemId, FString Quantity, FString SteamID, FString RequestId); // [0x13b9680] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionExchangeItem : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionExchangeItem.ExchangeItemAsync
	// class USteamCoreWebAsyncActionExchangeItem* ExchangeItemAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> MaterialsItemID, TArray<int32_t> MaterialsQuantity, FString OutputItemdefId); // [0x13ba2a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetInventory
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetInventory : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetInventory.GetInventoryAsync
	// class USteamCoreWebAsyncActionGetInventory* GetInventoryAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID); // [0x13bb070] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetItemDefs : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetItemDefs.GetItemDefsAsync
	// class USteamCoreWebAsyncActionGetItemDefs* GetItemDefsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString ModifiedSince, TArray<int32_t> ItemdefIDs, TArray<int32_t> WorkshopIDs, int32_t CacheMaxAgeSeconds); // [0x13bb260] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPriceSheet : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPriceSheet.GetPriceSheetAsync
	// class USteamCoreWebAsyncActionGetPriceSheet* GetPriceSheetAsync(class UObject* WorldContextObject, FString Key, int32_t Currency); // [0x13bbef0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsolidate
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionConsolidate : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionConsolidate.ConsolidateAsync
	// class USteamCoreWebAsyncActionConsolidate* ConsolidateAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> ItemdefIDs, bool bForce); // [0x13b93c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetQuantity : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetQuantity.GetQuantityAsync
	// class USteamCoreWebAsyncActionGetQuantity* GetQuantityAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, TArray<int32_t> ItemdefIDs, bool bForce); // [0x13bc060] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionModifyItems
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionModifyItems : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionModifyItems.ModifyItemsAsync
	// class USteamCoreWebAsyncActionModifyItems* ModifyItemsAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString InputJson, FString SteamID, int32_t Timestamp, FString Updates); // [0x13bdc10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebLeaderboards
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebLeaderboards : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebLeaderboards.SetLeaderboardScore
	// void SetLeaderboardScore(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t LeaderbordId, FString SteamID, int32_t Score, TArray<char> Details, FString ScoreMethod); // [0x13bef00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.ResetLeaderboard
	// void ResetLeaderboard(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t LeaderboardId);                   // [0x13beb90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.GetLeaderboardsForGame
	// void GetLeaderboardsForGame(FDelegateProperty& Callback, FString Key, int32_t AppID);                                    // [0x13bbbf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.GetLeaderboardEntries
	// void GetLeaderboardEntries(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, FString SteamID); // [0x13bb5b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.FindOrCreateLeaderboard
	// void FindOrCreateLeaderboard(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads); // [0x13ba860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLeaderboards.DeleteLeaderboard
	// void DeleteLeaderboard(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Name);                           // [0x13b9e90] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionDeleteLeaderboard : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionDeleteLeaderboard.DeleteLeaderboardAsync
	// class USteamCoreWebAsyncActionDeleteLeaderboard* DeleteLeaderboardAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Name); // [0x13ba0b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionFindOrCreateLeaderboard : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFindOrCreateLeaderboard.FindOrCreateLeaderboardAsync
	// class USteamCoreWebAsyncActionFindOrCreateLeaderboard* FindOrCreateLeaderboardAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Name, FString SortMethod, FString DisplayType, bool bCreateIfNotFound, bool bOnlyTrustedWrites, bool bOnlyFriendsReads); // [0x13bac80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetLeaderboardEntries : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardEntries.GetLeaderboardEntriesAsync
	// class USteamCoreWebAsyncActionGetLeaderboardEntries* GetLeaderboardEntriesAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t RangeStart, int32_t RangeEnd, int32_t LeaderboardId, int32_t DataRequest, FString SteamID); // [0x13bb8e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetLeaderboardsForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetLeaderboardsForGame.GetLeaderboardsForGameAsync
	// class USteamCoreWebAsyncActionGetLeaderboardsForGame* GetLeaderboardsForGameAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x13bbd80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionResetLeaderboard : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionResetLeaderboard.ResetLeaderboardAsync
	// class USteamCoreWebAsyncActionResetLeaderboard* ResetLeaderboardAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t LeaderboardId); // [0x13bed60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionSetLeaderboardScore : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetLeaderboardScore.SetLeaderboardScoreAsync
	// class USteamCoreWebAsyncActionSetLeaderboardScore* SetLeaderboardScoreAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t LeaderboardId, FString SteamID, int32_t Score, TArray<char> Details, FString ScoreMethod); // [0x13bf2d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebLobbyMatchmakingService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebLobbyMatchmakingService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebLobbyMatchmakingService.RemoveUserFromLobby
	// void RemoveUserFromLobby(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamIdToRemove, FString SteamIDLobby, FString InputJson); // [0x13be850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebLobbyMatchmakingService.CreateLobby
	// void CreateLobby(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t MaxMembers, ESteamCoreWebLobbyType LobbyType, FString LobbyName, FString InputJson, TArray<FString> SteamIdInvitedMembers, FString LobbyMetaData); // [0x13b9a20] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebMicroTxn
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebMicroTxn : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebMicroTxn.RefundTxn
	// void RefundTxn(FDelegateProperty& Callback, FString Key, FString OrderID, int32_t AppID);                                // [0x13be630] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.QueryTxn
	// void QueryTxn(FDelegateProperty& Callback, FString Key, int32_t AppID, FString OrderID, FString TransId);                // [0x13be380] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.ProcessAgreement
	// void ProcessAgreement(FDelegateProperty& Callback, FString Key, FString OrderID, FString SteamID, FString AgreementId, int32_t AppID, int32_t Amount, FString Currency); // [0x13bdf60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.MakeTransactionID
	// FString MakeTransactionID();                                                                                             // [0x13bdb90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.InitTxn
	// void InitTxn(FDelegateProperty& Callback, FString Key, FString OrderID, FString SteamID, int32_t AppID, FString Language, FString Currency, FString UserSession, FString Ipaddress, TArray<int32_t> ItemId, TArray<int32_t> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32_t> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32_t> Frequency, TArray<FString> RecurringAmt, TArray<int32_t> BundleCount, TArray<int32_t> BundleId, TArray<int32_t> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory); // [0x13bcaa0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.GetUserInfo
	// void GetUserInfo(FDelegateProperty& Callback, FString Key, FString SteamID, FString Ipaddress);                          // [0x13bc830] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.GetUserAgreementInfo
	// void GetUserAgreementInfo(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                     // [0x13bc610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.GetReport
	// void GetReport(FDelegateProperty& Callback, FString Key, int32_t AppID, FString time, FString Type, int32_t MaxResults); // [0x13bc320] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.FinalizeTxn
	// void FinalizeTxn(FDelegateProperty& Callback, FString Key, FString OrderID, int32_t AppID);                              // [0x13ba640] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.CancelAgreement
	// void CancelAgreement(FDelegateProperty& Callback, FString Key, FString SteamID, FString AgreementId, int32_t AppID);     // [0x13b9110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebMicroTxn.AdjustAgreement
	// void AdjustAgreement(FDelegateProperty& Callback, FString Key, FString SteamID, FString AgreementId, int32_t AppID, FString NextProcessDate); // [0x13b8dd0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionAdjustAgreement : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAdjustAgreement.AdjustAgreementAsync
	// class USteamCoreWebAsyncActionAdjustAgreement* AdjustAgreementAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString AgreementId, int32_t AppID, FString NextProcessDate); // [0x13c1270] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionCancelAgreement : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCancelAgreement.CancelAgreementAsync
	// class USteamCoreWebAsyncActionCancelAgreement* CancelAgreementAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString AgreementId, int32_t AppID); // [0x13c1580] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionFinalizeTxn : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeTxn.FinalizeTxnAsync
	// class USteamCoreWebAsyncActionFinalizeTxn* FinalizeTxnAsync(class UObject* WorldContextObject, FString Key, FString OrderID, int32_t AppID); // [0x13c1800] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetReport
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetReport : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetReport.GetReportAsync
	// class USteamCoreWebAsyncActionGetReport* GetReportAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString time, FString Type, int32_t MaxResults); // [0x13c2b70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetUserAgreementInfo : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserAgreementInfo.GetUserAgreementInfoAsync
	// class USteamCoreWebAsyncActionGetUserAgreementInfo* GetUserAgreementInfoAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x13c31c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetUserInfo : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserInfo.GetUserInfoAsync
	// class USteamCoreWebAsyncActionGetUserInfo* GetUserInfoAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString Ipaddress); // [0x13c33b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionInitTxn
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionInitTxn : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionInitTxn.InitTxnAsync
	// class USteamCoreWebAsyncActionInitTxn* InitTxnAsync(class UObject* WorldContextObject, FString Key, FString OrderID, FString SteamID, int32_t AppID, FString Language, FString Currency, FString UserSession, FString Ipaddress, TArray<int32_t> ItemId, TArray<int32_t> Quantity, TArray<FString> Amount, TArray<FString> Description, TArray<FString> Category, TArray<int32_t> AssociatedBundle, TArray<FString> BillingType, TArray<FString> StartDate, TArray<FString> EndDate, TArray<FString> Period, TArray<int32_t> Frequency, TArray<FString> RecurringAmt, TArray<int32_t> BundleCount, TArray<int32_t> BundleId, TArray<int32_t> BundleQty, TArray<FString> BundleDesc, TArray<FString> BundleCategory); // [0x13c35f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionProcessAgreement : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionProcessAgreement.ProcessAgreementAsync
	// class USteamCoreWebAsyncActionProcessAgreement* ProcessAgreementAsync(class UObject* WorldContextObject, FString Key, FString OrderID, FString SteamID, FString AgreementId, int32_t AppID, int32_t Amount, FString Currency); // [0x13c4ac0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionQueryTxn : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionQueryTxn.QueryTxnAsync
	// class USteamCoreWebAsyncActionQueryTxn* QueryTxnAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString OrderID, FString TransId); // [0x13c5ba0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRefundTxn : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRefundTxn.RefundTxnAsync
	// class USteamCoreWebAsyncActionRefundTxn* RefundTxnAsync(class UObject* WorldContextObject, FString Key, FString OrderID, int32_t AppID); // [0x13c6be0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebPlayerService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebPlayerService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebPlayerService.IsPlayingSharedGame
	// void IsPlayingSharedGame(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppIdPlaying);               // [0x13c46b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetSteamLevel
	// void GetSteamLevel(FDelegateProperty& Callback, FString Key, FString SteamID);                                           // [0x13c2e30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetRecentlyPlayedGames
	// void GetRecentlyPlayedGames(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t Count);                   // [0x13c2760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetOwnedGames
	// void GetOwnedGames(FDelegateProperty& Callback, FString Key, FString SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> Filter); // [0x13c2190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetCommunityBadgeProgress
	// void GetCommunityBadgeProgress(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t BadgeId);              // [0x13c1d80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPlayerService.GetBadges
	// void GetBadges(FDelegateProperty& Callback, FString Key, FString SteamID);                                               // [0x13c19f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetRecentlyPlayedGames : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetRecentlyPlayedGames.GetRecentlyPlayedGamesAsync
	// class USteamCoreWebAsyncActionGetRecentlyPlayedGames* GetRecentlyPlayedGamesAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t Count); // [0x13c2980] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetOwnedGames : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetOwnedGames.GetOwnedGamesAsync
	// class USteamCoreWebAsyncActionGetOwnedGames* GetOwnedGamesAsync(class UObject* WorldContextObject, FString Key, FString SteamID, bool bIncludeAppInfo, bool bIncludePlayedFreeGames, TArray<int32_t> Filter); // [0x13c2490] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetSteamLevel : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSteamLevel.GetSteamLevelAsync
	// class USteamCoreWebAsyncActionGetSteamLevel* GetSteamLevelAsync(class UObject* WorldContextObject, FString Key, FString SteamID); // [0x13c3010] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetBadges
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetBadges : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetBadges.GetBadgesAsync
	// class USteamCoreWebAsyncActionGetBadges* GetBadgesAsync(class UObject* WorldContextObject, FString Key, FString SteamID); // [0x13c1bd0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetCommunityBadgeProgress : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCommunityBadgeProgress.GetCommunityBadgeProgressAsync
	// class USteamCoreWebAsyncActionGetCommunityBadgeProgress* GetCommunityBadgeProgressAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t BadgeId); // [0x13c1fa0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionIsPlayingSharedGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionIsPlayingSharedGame.IsPlayingSharedGameAsync
	// class USteamCoreWebAsyncActionIsPlayingSharedGame* IsPlayingSharedGameAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppIdPlaying); // [0x13c48d0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebPublishedFileService
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebPublishedFileService : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebPublishedFileService.UpdateTags
	// void UpdateTags(FDelegateProperty& Callback, FString Key, FString PublishedFileID, int32_t AppID, FString AddTags, FString RemoveTags); // [0x13c7a00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedFileService.UpdateIncompatibleStatus
	// void UpdateIncompatibleStatus(FDelegateProperty& Callback, FString Key, FString PublishedFileID, int32_t AppID, bool bIncompatible); // [0x13c77a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedFileService.UpdateBanStatus
	// void UpdateBanStatus(FDelegateProperty& Callback, FString Key, FString PublishedFileID, int32_t AppID, bool bBanned, FString Reason); // [0x13c74b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedFileService.SetDeveloperMetadata
	// void SetDeveloperMetadata(FDelegateProperty& Callback, FString Key, FString PublishedFileID, int32_t AppID, FString MetaData); // [0x13c7200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedFileService.QueryFiles
	// void QueryFiles(FDelegateProperty& Callback, FString Key, int32_t QueryType, int32_t Page, FString Cursor, int32_t NumPerPage, int32_t CreatorAppID, int32_t AppID, FString RequiredTags, FString ExcludedTags, bool bMatchAllTags, FString RequiredFlags, FString OmittedFlags, FString SearchText, int32_t FileType, FString ChildPublishedFileId, int32_t Days, bool bIncludeRecentVotesOnly, int32_t CacheMaxAgeSeconds, int32_t Language, FString RequiredKvTags, bool bTotalOnly, bool bIDsOnly, bool bReturnVoteData, bool bReturnTags, bool bReturnKvTags, bool bReturnPreviews, bool bReturnChildren, bool bReturnShortDescription, bool bReturnForSaleData, bool bReturnMetadata, int32_t ReturnPlaytimeStats); // [0x13c4ea0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamPublishedItemSearch
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebSteamPublishedItemSearch : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamPublishedItemSearch.ResultSetSummary
	// void ResultSetSummary(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t StartId, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x13c6dd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamPublishedItemSearch.RankedByVote
	// void RankedByVote(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x13c6760] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamPublishedItemSearch.RankedByTrend
	// void RankedByTrend(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<FString> Tag, TArray<FString> UserTag); // [0x13c62a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamPublishedItemSearch.RankedByPublicationOrder
	// void RankedByPublicationOrder(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x13c5e20] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRankedByPublicationOrder : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByPublicationOrder.RankedByPublicationOrderAsync
	// class USteamCoreWebAsyncActionRankedByPublicationOrder* RankedByPublicationOrderAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x13cc1f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRankedByTrend : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByTrend.RankedByTrendAsync
	// class USteamCoreWebAsyncActionRankedByTrend* RankedByTrendAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, int32_t Days, TArray<FString> Tag, TArray<FString> UserTag); // [0x13cc630] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionRankedByVote : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionRankedByVote.RankedByVoteAsync
	// class USteamCoreWebAsyncActionRankedByVote* RankedByVoteAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t StartId, int32_t Count, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x13ccab0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionResultSetSummary : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionResultSetSummary.ResultSetSummaryAsync
	// class USteamCoreWebAsyncActionResultSetSummary* ResultSetSummaryAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t StartId, bool bHasAppAdminAccess, int32_t FileType, TArray<FString> Tag, TArray<FString> UserTag); // [0x13cd7a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebPublishedItemVoting
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebPublishedItemVoting : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebPublishedItemVoting.UserVoteSummary
	// void UserVoteSummary(FDelegateProperty& Callback, FString Key, FString SteamID, TArray<FString> PublishedFileIDs);       // [0x13cf3f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebPublishedItemVoting.ItemVoteSummary
	// void ItemVoteSummary(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, TArray<FString> PublishedFileIDs); // [0x13cbcc0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionItemVoteSummary : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionItemVoteSummary.ItemVoteSummaryAsync
	// class USteamCoreWebAsyncActionItemVoteSummary* ItemVoteSummaryAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, TArray<FString> PublishedFileIDs); // [0x13cbf70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionUserVoteSummary : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionUserVoteSummary.UserVoteSummaryAsync
	// class USteamCoreWebAsyncActionUserVoteSummary* UserVoteSummaryAsync(class UObject* WorldContextObject, FString Key, FString SteamID, TArray<FString> PublishedFileIDs); // [0x13cf660] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebRemoteStorage
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebRemoteStorage : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebRemoteStorage.UnsubscribePublishedFile
	// void UnsubscribePublishedFile(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString PublishedFileIDs); // [0x13ceec0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.SubscribePublishedFile
	// void SubscribePublishedFile(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString PublishedFileIDs); // [0x13ce990] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.SetUGCUsedByGC
	// void SetUGCUsedByGC(FDelegateProperty& Callback, FString Key, FString SteamID, FString UGCID, int32_t AppID, bool bUsed); // [0x13cdb90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.GetUGCFileDetails
	// void GetUGCFileDetails(FDelegateProperty& Callback, FString Key, FString SteamID, FString UGCID, int32_t AppID);         // [0x13cb790] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.GetPublishedFileDetails
	// void GetPublishedFileDetails(FDelegateProperty& Callback, FString PublishedFileIDs);                                     // [0x13cb500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.GetCollectionDetails
	// void GetCollectionDetails(FDelegateProperty& Callback, TArray<FString> PublishedFileIDs);                                // [0x13cae40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.EnumerateUserSubscribedFiles
	// void EnumerateUserSubscribedFiles(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, int32_t ListType); // [0x13ca040] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebRemoteStorage.EnumerateUserPublishedFiles
	// void EnumerateUserPublishedFiles(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);              // [0x13c9c30] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionEnumerateUserPublishedFiles : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserPublishedFiles.EnumerateUserPublishedFilesAsync
	// class USteamCoreWebAsyncActionEnumerateUserPublishedFiles* EnumerateUserPublishedFilesAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x13c9e50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionEnumerateUserSubscribedFiles.EnumerateUserSubscribedFilesAsync
	// class USteamCoreWebAsyncActionEnumerateUserSubscribedFiles* EnumerateUserSubscribedFilesAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, int32_t ListType); // [0x13ca2a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetCollectionDetails : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetCollectionDetails.GetCollectionDetailsAsync
	// class USteamCoreWebAsyncActionGetCollectionDetails* GetCollectionDetailsAsync(class UObject* WorldContextObject, TArray<FString> PublishedFileIDs); // [0x13caf90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPublishedFileDetails : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublishedFileDetails.GetPublishedFileDetailsAsync
	// class USteamCoreWebAsyncActionGetPublishedFileDetails* GetPublishedFileDetailsAsync(class UObject* WorldContextObject, FString PublishedFileIDs); // [0x13cb660] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetUGCFileDetails : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUGCFileDetails.GetUGCFileDetailsAsync
	// class USteamCoreWebAsyncActionGetUGCFileDetails* GetUGCFileDetailsAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString UGCID, int32_t AppID); // [0x13cba40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionSetUGCUsedByGC : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUGCUsedByGC.SetUGCUsedByGCAsync
	// class USteamCoreWebAsyncActionSetUGCUsedByGC* SetUGCUsedByGCAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString UGCID, int32_t AppID, bool bUsed); // [0x13cde80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionSubscribePublishedFile : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSubscribePublishedFile.SubscribePublishedFileAsync
	// class USteamCoreWebAsyncActionSubscribePublishedFile* SubscribePublishedFileAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString PublishedFileIDs); // [0x13cec40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionUnsubscribePublishedFile : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionUnsubscribePublishedFile.UnsubscribePublishedFileAsync
	// class USteamCoreWebAsyncActionUnsubscribePublishedFile* UnsubscribePublishedFileAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString PublishedFileIDs); // [0x13cf170] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamCommunity
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebSteamCommunity : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamCommunity.ReportAbuse
	// void ReportAbuse(FDelegateProperty& Callback, FString Key, FString SteamIdActor, FString SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, FString Description, FString Gid); // [0x13ccef0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionReportAbuse : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionReportAbuse.ReportAbuseAsync
	// class USteamCoreWebAsyncActionReportAbuse* ReportAbuseAsync(class UObject* WorldContextObject, FString Key, FString SteamIdActor, FString SteamIdTarget, int32_t AppID, int32_t AbuseType, int32_t ContentType, FString Description, FString Gid); // [0x13cd360] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamEconomy
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebSteamEconomy : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamEconomy.StartTrade
	// void StartTrade(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamIDd, FString SteamId2);            // [0x13ce6e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.StartAssetTransaction
	// void StartAssetTransaction(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString AssetId, int32_t AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth); // [0x13ce140] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.GetMarketPrices
	// void GetMarketPrices(FDelegateProperty& Callback, FString Key, int32_t AppID);                                           // [0x13cb370] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.GetExportedAssetsForUser
	// void GetExportedAssetsForUser(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString ContextID); // [0x13cb0c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.GetAssetPrices
	// void GetAssetPrices(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Currency, FString Language);        // [0x13cab90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.GetAssetClassInfo
	// void GetAssetClassInfo(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Language, int32_t ClassCount, FString ClassID, FString InstanceId); // [0x13ca810] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.FinalizeAssetTransaction
	// void FinalizeAssetTransaction(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString TxnId, FString Language); // [0x13ca4d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamEconomy.CanTrade
	// void CanTrade(FDelegateProperty& Callback, FString Key, int32_t AppID, FString SteamID, FString TargetId);               // [0x13c9980] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCanTrade
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionCanTrade : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCanTrade.CanTradeAsync
	// class USteamCoreWebAsyncActionCanTrade* CanTradeAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString TargetId); // [0x13d1f70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionFinalizeAssetTransaction : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionFinalizeAssetTransaction.FinalizeAssetTransactionAsync
	// class USteamCoreWebAsyncActionFinalizeAssetTransaction* FinalizeAssetTransactionAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString TxnId, FString Language); // [0x13d2600] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetAssetClassInfo : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetClassInfo.GetAssetClassInfoAsync
	// class USteamCoreWebAsyncActionGetAssetClassInfo* GetAssetClassInfoAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Language, int32_t ClassCount, FString ClassID, FString InstanceId); // [0x13d2dc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetAssetPrices : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAssetPrices.GetAssetPricesAsync
	// class USteamCoreWebAsyncActionGetAssetPrices* GetAssetPricesAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Currency, FString Language); // [0x13d3110] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetExportedAssetsForUser : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetExportedAssetsForUser.GetExportedAssetsForUserAsync
	// class USteamCoreWebAsyncActionGetExportedAssetsForUser* GetExportedAssetsForUserAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString ContextID); // [0x13d3390] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetMarketPrices : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetMarketPrices.GetMarketPricesAsync
	// class USteamCoreWebAsyncActionGetMarketPrices* GetMarketPricesAsync(class UObject* WorldContextObject, FString Key, int32_t AppID); // [0x13d3e40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionStartAssetTransaction : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartAssetTransaction.StartAssetTransactionAsync
	// class USteamCoreWebAsyncActionStartAssetTransaction* StartAssetTransactionAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamID, FString AssetId, int32_t AssetQuantity, FString Currency, FString Language, FString Ipaddress, FString Referer, bool bClientAuth); // [0x13d67b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartTrade
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionStartTrade : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionStartTrade.StartTradeAsync
	// class USteamCoreWebAsyncActionStartTrade* StartTradeAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString SteamId1, FString SteamId2); // [0x13d6d40] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamGameServerStats
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebSteamGameServerStats : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamGameServerStats.GetGameServerPlayerStatsForGame
	// void GetGameServerPlayerStatsForGame(FDelegateProperty& Callback, FString Key, FString GameID, int32_t AppID, FString RangeStart, FString RangeEnd, int32_t MaxResults); // [0x13d3ac0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamNews
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebSteamNews : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamNews.GetNewsForAppAuthed
	// void GetNewsForAppAuthed(FDelegateProperty& Callback, FString Key, int32_t AppID, int32_t MaxLength, TArray<FString> Feeds, int32_t EndDate, int32_t Count); // [0x13d4420] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamNews.GetNewsForApp
	// void GetNewsForApp(FDelegateProperty& Callback, int32_t AppID, int32_t MaxLength, TArray<FString> Feeds, int32_t EndDate, int32_t Count); // [0x13d3fb0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetNewsForApp : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForApp.GetNewsForAppAsync
	// class USteamCoreWebAsyncActionGetNewsForApp* GetNewsForAppAsync(class UObject* WorldContextObject, int32_t AppID, int32_t MaxLength, TArray<FString> Feeds, int32_t EndDate, int32_t Count); // [0x13d4200] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetNewsForAppAuthed : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNewsForAppAuthed.GetNewsForAppAuthedAsync
	// class USteamCoreWebAsyncActionGetNewsForAppAuthed* GetNewsForAppAuthedAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, int32_t MaxLength, TArray<FString> Feeds, int32_t EndDate, int32_t Count); // [0x13d4710] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebSteamUser
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebSteamUser : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebSteamUser.ResolveVanityURL
	// void ResolveVanityURL(FDelegateProperty& Callback, FString Key, FString VanityURL, EVanityUrlType URLType);              // [0x13d63a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GrantPackage
	// void GrantPackage(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t PackageId, FString Ipaddress, FString ThirdPartyKey, int32_t ThirdPartyAppId); // [0x13d5cd0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetUserGroupList
	// void GetUserGroupList(FDelegateProperty& Callback, FString Key, FString SteamID);                                        // [0x13d5940] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetPublisherAppOwnershipChanges
	// void GetPublisherAppOwnershipChanges(FDelegateProperty& Callback, FString Key, FString PackageRowVersion, FString CDKeyRowVersion); // [0x13d5490] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetPublisherAppOwnership
	// void GetPublisherAppOwnership(FDelegateProperty& Callback, FString Key, FString SteamID);                                // [0x13d5100] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetPlayerSummaries
	// void GetPlayerSummaries(FDelegateProperty& Callback, FString Key, TArray<FString> SteamIDs);                             // [0x13d4d70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetPlayerBans
	// void GetPlayerBans(FDelegateProperty& Callback, FString Key, TArray<FString> SteamIDs);                                  // [0x13d49e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetFriendList
	// void GetFriendList(FDelegateProperty& Callback, FString Key, FString SteamID, FString Relationship);                     // [0x13d3610] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.GetAppPriceInfo
	// void GetAppPriceInfo(FDelegateProperty& Callback, FString Key, FString SteamID, TArray<int32_t> AppIDs);                 // [0x13d2910] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebSteamUser.CheckAppOwnership
	// void CheckAppOwnership(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                        // [0x13d21f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionCheckAppOwnership : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionCheckAppOwnership.CheckAppOwnershipAsync
	// class USteamCoreWebAsyncActionCheckAppOwnership* CheckAppOwnershipAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x13d2410] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetAppPriceInfo : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetAppPriceInfo.GetAppPriceInfoAsync
	// class USteamCoreWebAsyncActionGetAppPriceInfo* GetAppPriceInfoAsync(class UObject* WorldContextObject, FString Key, FString SteamID, TArray<int32_t> AppIDs); // [0x13d2b80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetFriendList : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetFriendList.GetFriendListAsync
	// class USteamCoreWebAsyncActionGetFriendList* GetFriendListAsync(class UObject* WorldContextObject, FString Key, FString SteamID, FString Relationship); // [0x13d3880] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPlayerBans : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerBans.GetPlayerBansAsync
	// class USteamCoreWebAsyncActionGetPlayerBans* GetPlayerBansAsync(class UObject* WorldContextObject, FString Key, TArray<FString> SteamIDs); // [0x13d4bc0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPlayerSummaries : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerSummaries.GetPlayerSummariesAsync
	// class USteamCoreWebAsyncActionGetPlayerSummaries* GetPlayerSummariesAsync(class UObject* WorldContextObject, FString Key, TArray<FString> SteamIDs); // [0x13d4f50] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPublisherAppOwnership : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnership.GetPublisherAppOwnershipAsync
	// class USteamCoreWebAsyncActionGetPublisherAppOwnership* GetPublisherAppOwnershipAsync(class UObject* WorldContextObject, FString Key, FString SteamID); // [0x13d52e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPublisherAppOwnershipChanges.GetPublisherAppOwnershipChangesAsync
	// class USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges* GetPublisherAppOwnershipChangesAsync(class UObject* WorldContextObject, FString Key, FString PackageRowVersion, FString CDKeyRowVersion); // [0x13d5700] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetUserGroupList : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserGroupList.GetUserGroupListAsync
	// class USteamCoreWebAsyncActionGetUserGroupList* GetUserGroupListAsync(class UObject* WorldContextObject, FString Key, FString SteamID); // [0x13d5b20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGrantPackage : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGrantPackage.GrantPackageAsync
	// class USteamCoreWebAsyncActionGrantPackage* GrantPackageAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t PackageId, FString Ipaddress, FString ThirdPartyKey, int32_t ThirdPartyAppId); // [0x13d6050] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionResolveVanityURL : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionResolveVanityURL.ResolveVanityURLAsync
	// class USteamCoreWebAsyncActionResolveVanityURL* ResolveVanityURLAsync(class UObject* WorldContextObject, FString Key, FString VanityURL, EVanityUrlType URLType); // [0x13d65c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebUserAuth
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebUserAuth : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebUserAuth.AuthenticateUserTicket
	// void AuthenticateUserTicket(FDelegateProperty& Callback, FString Key, int32_t AppID, FString Ticket);                    // [0x13d1d50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserAuth.AuthenticateUser
	// void AuthenticateUser(FDelegateProperty& Callback, FString SteamID, TArray<char> SessionKey, TArray<char> EncryptedLoginKey); // [0x13d1af0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionAuthenticateUser : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUser.AuthenticateUserAsync
	// class USteamCoreWebAsyncActionAuthenticateUser* AuthenticateUserAsync(class UObject* WorldContextObject, FString SteamID, TArray<char> SessionKey, TArray<char> EncryptedLoginKey); // [0x1403880] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionAuthenticateUserTicket : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionAuthenticateUserTicket.AuthenticateUserTicketAsync
	// class USteamCoreWebAsyncActionAuthenticateUserTicket* AuthenticateUserTicketAsync(class UObject* WorldContextObject, FString Key, int32_t AppID, FString Ticket); // [0x1403ab0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.WebUserStats
/// Size: 0x0048 (72 bytes) (0x000048 - 0x000048) align 8 MaxSize: 0x0048
class UWebUserStats : public USteamCoreWebSubsystem
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.WebUserStats.SetUserStatsForGame
	// void SetUserStatsForGame(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, TArray<FString> Names, TArray<int32_t> Values); // [0x1405e30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetUserStatsForGame
	// void GetUserStatsForGame(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID);                      // [0x1405840] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetSchemaForGame
	// void GetSchemaForGame(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString Language);       // [0x14050d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetPlayerAchievements
	// void GetPlayerAchievements(FDelegateProperty& Callback, FString Key, FString SteamID, int32_t AppID, FString Language);  // [0x1404960] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetNumberOfCurrentPlayers
	// void GetNumberOfCurrentPlayers(FDelegateProperty& Callback, int32_t AppID);                                              // [0x1404670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetGlobalStatsForGame
	// void GetGlobalStatsForGame(FDelegateProperty& Callback, int32_t AppID, TArray<FString> Names, int32_t StartDate, int32_t EndDate); // [0x1404200] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SteamCoreWeb.WebUserStats.GetGlobalAchievementPercentagesForApp
	// void GetGlobalAchievementPercentagesForApp(FDelegateProperty& Callback, FString GameID);                                 // [0x1403e10] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp.GetGlobalAchievementPercentagesForAppAsync
	// class USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp* GetGlobalAchievementPercentagesForAppAsync(class UObject* WorldContextObject, FString GameID); // [0x1403fb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetGlobalStatsForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetGlobalStatsForGame.GetGlobalStatsForGameAsync
	// class USteamCoreWebAsyncActionGetGlobalStatsForGame* GetGlobalStatsForGameAsync(class UObject* WorldContextObject, int32_t AppID, TArray<FString> Names, int32_t StartDate, int32_t EndDate); // [0x1404490] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetNumberOfCurrentPlayers.GetNumberOfCurrentPlayersAsync
	// class USteamCoreWebAsyncActionGetNumberOfCurrentPlayers* GetNumberOfCurrentPlayersAsync(class UObject* WorldContextObject, int32_t AppID); // [0x1404790] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetPlayerAchievements : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetPlayerAchievements.GetPlayerAchievementsAsync
	// class USteamCoreWebAsyncActionGetPlayerAchievements* GetPlayerAchievementsAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString Language); // [0x1404cb0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetSchemaForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetSchemaForGame.GetSchemaForGameAsync
	// class USteamCoreWebAsyncActionGetSchemaForGame* GetSchemaForGameAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, FString Language); // [0x1405420] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionGetUserStatsForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionGetUserStatsForGame.GetUserStatsForGameAsync
	// class USteamCoreWebAsyncActionGetUserStatsForGame* GetUserStatsForGameAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID); // [0x1405ad0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame
/// Size: 0x0058 (88 bytes) (0x000058 - 0x000058) align 8 MaxSize: 0x0058
class USteamCoreWebAsyncActionSetUserStatsForGame : public USteamCoreWebAsyncAction
{ 
public:


	/// Functions
	// Function /Script/SteamCoreWeb.SteamCoreWebAsyncActionSetUserStatsForGame.SetUserStatsForGameAsync
	// class USteamCoreWebAsyncActionSetUserStatsForGame* SetUserStatsForGameAsync(class UObject* WorldContextObject, FString Key, FString SteamID, int32_t AppID, TArray<FString> Names, TArray<int32_t> Values); // [0x14062b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/SteamCoreWeb.WebAppsGetAppList
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FWebAppsGetAppList
{ 
	FString                                            AppID;                                                      // 0x0000   (0x0010)  
	FString                                            Name;                                                       // 0x0010   (0x0010)  
};

/// Struct /Script/SteamCoreWeb.SteamCoreJson
/// Size: 0x0028 (40 bytes) (0x000000 - 0x000028) align 8 MaxSize: 0x0028
struct FSteamCoreJson
{ 
	FString                                            Key;                                                        // 0x0000   (0x0010)  
	FString                                            String;                                                     // 0x0010   (0x0010)  
	int32_t                                            Number;                                                     // 0x0020   (0x0004)  
	bool                                               bool0;                                                      // 0x0024   (0x0001)  
	ESteamValueType                                    Type;                                                       // 0x0025   (0x0001)  
	unsigned char                                      UnknownData00_7[0x2];                                       // 0x0026   (0x0002)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(USteamCoreWeb) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(USteamCoreWebSubsystem) == 0x0048); // 72 bytes (0x000030 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncAction) == 0x0058); // 88 bytes (0x000030 - 0x000058)
static_assert(sizeof(USteamCoreWebSettings) == 0x0078); // 120 bytes (0x000038 - 0x000078)
static_assert(sizeof(USteamWebUtilities) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UWebApps) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreAppsAsyncActionGetAppBetas) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetAppBuilds) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetAppDepotVersions) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetAppList) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(USteamCoreAppsAsyncActionGetCheatingReports) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetPlayersBanned) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetServerList) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionGetServersAtAddress) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionSetAppBuildLive) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreAppsAsyncActionUpToDateCheck) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebBroadcastService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionPostGameDataFrame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebCheatReporting) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionReportPlayerCheating) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRequestPlayerGameBan) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRemovePlayerGameBan) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetCheatingReports) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionReportCheatData) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRequestVacStatusForUser) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionStartSecureMultiplayerSession) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionEndSecureMultiplayerSession) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebEconMarketService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionGetMarketEligibility) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionCancelAppListingsForUser) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetAssetID) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPopular) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebEconService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionGetTradeHistory) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionFlushInventoryCache) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionFlushAssetAppearanceCache) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionFlushContextCache) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetTradeOffers) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetTradeOffer) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetTradeOffersSummary) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionDeclineTradeOffer) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionCancelTradeOffer) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebGameInventory) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionGetHistoryCommandDetails) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetUserHistory) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionHistoryExecuteCommand) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionSupportGetAssetHistory) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebGameNotificationsService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionCreateSession) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionUpdateSession) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionEnumerateSessionsForApp) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetSessionDetailsForApp) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRequestNotifications) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionDeleteSession) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionDeleteSessionBatch) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebGameServersService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UWebInventoryService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionAddItem) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionAddPromoItem) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionConsumeItem) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionExchangeItem) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetInventory) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetItemDefs) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPriceSheet) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionConsolidate) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetQuantity) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionModifyItems) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebLeaderboards) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionDeleteLeaderboard) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionFindOrCreateLeaderboard) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetLeaderboardEntries) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetLeaderboardsForGame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionResetLeaderboard) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionSetLeaderboardScore) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebLobbyMatchmakingService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UWebMicroTxn) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionAdjustAgreement) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionCancelAgreement) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionFinalizeTxn) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetReport) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetUserAgreementInfo) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetUserInfo) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionInitTxn) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionProcessAgreement) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionQueryTxn) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRefundTxn) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebPlayerService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionGetRecentlyPlayedGames) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetOwnedGames) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetSteamLevel) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetBadges) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetCommunityBadgeProgress) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionIsPlayingSharedGame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebPublishedFileService) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UWebSteamPublishedItemSearch) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionRankedByPublicationOrder) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRankedByTrend) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionRankedByVote) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionResultSetSummary) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebPublishedItemVoting) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionItemVoteSummary) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionUserVoteSummary) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebRemoteStorage) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionEnumerateUserPublishedFiles) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionEnumerateUserSubscribedFiles) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetCollectionDetails) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPublishedFileDetails) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetUGCFileDetails) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionSetUGCUsedByGC) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionSubscribePublishedFile) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionUnsubscribePublishedFile) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebSteamCommunity) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionReportAbuse) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebSteamEconomy) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionCanTrade) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionFinalizeAssetTransaction) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetAssetClassInfo) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetAssetPrices) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetExportedAssetsForUser) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetMarketPrices) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionStartAssetTransaction) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionStartTrade) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebSteamGameServerStats) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(UWebSteamNews) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionGetNewsForApp) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetNewsForAppAuthed) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebSteamUser) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionCheckAppOwnership) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetAppPriceInfo) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetFriendList) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPlayerBans) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPlayerSummaries) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPublisherAppOwnership) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPublisherAppOwnershipChanges) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetUserGroupList) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGrantPackage) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionResolveVanityURL) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebUserAuth) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionAuthenticateUser) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionAuthenticateUserTicket) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(UWebUserStats) == 0x0048); // 72 bytes (0x000048 - 0x000048)
static_assert(sizeof(USteamCoreWebAsyncActionGetGlobalAchievementPercentagesForApp) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetGlobalStatsForGame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetNumberOfCurrentPlayers) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetPlayerAchievements) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetSchemaForGame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionGetUserStatsForGame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(USteamCoreWebAsyncActionSetUserStatsForGame) == 0x0058); // 88 bytes (0x000058 - 0x000058)
static_assert(sizeof(FWebAppsGetAppList) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FSteamCoreJson) == 0x0028); // 40 bytes (0x000000 - 0x000028)
static_assert(offsetof(USteamCoreWebSettings, Key) == 0x0048);
static_assert(offsetof(USteamCoreWebSettings, DevSteamID) == 0x0060);
static_assert(offsetof(FWebAppsGetAppList, AppID) == 0x0000);
static_assert(offsetof(FWebAppsGetAppList, Name) == 0x0010);
static_assert(offsetof(FSteamCoreJson, Key) == 0x0000);
static_assert(offsetof(FSteamCoreJson, String) == 0x0010);
static_assert(offsetof(FSteamCoreJson, Type) == 0x0025);
