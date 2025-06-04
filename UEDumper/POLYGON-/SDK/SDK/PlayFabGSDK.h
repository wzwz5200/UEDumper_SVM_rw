
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

/// Class /Script/PlayFabGSDK.GSDKUtils
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UGSDKUtils : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/PlayFabGSDK.GSDKUtils.UpdateConnectedPlayers
	// void UpdateConnectedPlayers(TArray<FConnectedPlayer>& CurrentlyConnectedPlayers);                                        // [0xa9bbc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.SetDefaultServerHostPort
	// bool SetDefaultServerHostPort();                                                                                         // [0xa9bb10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.RegisterGSDKShutdownDelegate
	// void RegisterGSDKShutdownDelegate(FDelegateProperty& OnGSDKShutdownDelegate);                                            // [0xa9b960] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.RegisterGSDKServerActiveDelegate
	// void RegisterGSDKServerActiveDelegate(FDelegateProperty& OnGSDKServerActiveDelegate);                                    // [0xa9b7b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.RegisterGSDKReadyForPlayers
	// void RegisterGSDKReadyForPlayers(FDelegateProperty& OnGSDKReadyForPlayersDelegate);                                      // [0xa9b600] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.RegisterGSDKMaintenanceDelegate
	// void RegisterGSDKMaintenanceDelegate(FDelegateProperty& OnGSDKMaintenanceDelegate);                                      // [0xa9b450] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.RegisterGSDKHealthCheckDelegate
	// void RegisterGSDKHealthCheckDelegate(FDelegateProperty& OnGSDKHealthCheckDelegate);                                      // [0xa9b2a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.ReadyForPlayers
	// void ReadyForPlayers();                                                                                                  // [0xa9b250] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetVMId
	// FString GetVMId();                                                                                                       // [0xa9b190] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetTitleId
	// FString GetTitleId();                                                                                                    // [0xa9b0d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetSharedContentDirectory
	// FString GetSharedContentDirectory();                                                                                     // [0xa9ac30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetServerId
	// FString GetServerId();                                                                                                   // [0xa9b010] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetRegionName
	// FString GetRegionName();                                                                                                 // [0xa9af50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetMetaDataValue
	// FString GetMetaDataValue(FString MetaDataName);                                                                          // [0xa9ae50] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetMatchSessionCookie
	// FString GetMatchSessionCookie();                                                                                         // [0xa9ad90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetMatchId
	// FString GetMatchId();                                                                                                    // [0xa9acd0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetLogsDirectory
	// FString GetLogsDirectory();                                                                                              // [0xa9ac30] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetInitialPlayers
	// TArray<FString> GetInitialPlayers();                                                                                     // [0xa9ab90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetGameServerConnectionInfo
	// FGameServerConnectionInfo GetGameServerConnectionInfo();                                                                 // [0xa9aae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabGSDK.GSDKUtils.GetBuildId
	// FString GetBuildId();                                                                                                    // [0xa9aa20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/PlayFabGSDK.ConnectedPlayer
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FConnectedPlayer
{ 
	FString                                            PlayerId;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/PlayFabGSDK.GamePort
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FGamePort
{ 
	FString                                            Name;                                                       // 0x0000   (0x0010)  
	int32_t                                            ServerListeningPort;                                        // 0x0010   (0x0004)  
	int32_t                                            ClientConnectionPort;                                       // 0x0014   (0x0004)  
};

/// Struct /Script/PlayFabGSDK.GameServerConnectionInfo
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FGameServerConnectionInfo
{ 
	FString                                            PublicIpV4Address;                                          // 0x0000   (0x0010)  
	TArray<FGamePort>                                  GamePortsConfiguration;                                     // 0x0010   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UGSDKUtils) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(FConnectedPlayer) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FGamePort) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FGameServerConnectionInfo) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(offsetof(FConnectedPlayer, PlayerId) == 0x0000);
static_assert(offsetof(FGamePort, Name) == 0x0000);
static_assert(offsetof(FGameServerConnectionInfo, PublicIpV4Address) == 0x0000);
static_assert(offsetof(FGameServerConnectionInfo, GamePortsConfiguration) == 0x0010);
