
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreOnline
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NetCore
/// dependency: OnlineSubsystemUtils

#pragma pack(push, 0x1)

/// Enum /Script/Lobby.ELobbyBeaconJoinState
/// Size: 0x01 (1 bytes)
enum class ELobbyBeaconJoinState : uint8_t
{
	ELobbyBeaconJoinState__None                                                      = 0,
	ELobbyBeaconJoinState__SentJoinRequest                                           = 1,
	ELobbyBeaconJoinState__JoinRequestAcknowledged                                   = 2
};

/// Class /Script/Lobby.LobbyBeaconClient
/// Size: 0x03A8 (936 bytes) (0x000320 - 0x0003A8) align 8 MaxSize: 0x03A8
class ALobbyBeaconClient : public AOnlineBeaconClient
{ 
public:
	class ALobbyBeaconState*                           LobbyState;                                                 // 0x0320   (0x0008)  
	class ALobbyBeaconPlayerState*                     PlayerState;                                                // 0x0328   (0x0008)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0330   (0x0001)  MISSED
	ELobbyBeaconJoinState                              LobbyJoinServerState;                                       // 0x0331   (0x0001)  
	unsigned char                                      UnknownData01_7[0x76];                                      // 0x0332   (0x0076)  MISSED


	/// Functions
	// Function /Script/Lobby.LobbyBeaconClient.ServerSetPartyOwner
	// void ServerSetPartyOwner(FUniqueNetIdRepl InUniqueId, FUniqueNetIdRepl InPartyOwnerId);                                  // [0x123b750] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
	// void ServerNotifyJoiningServer();                                                                                        // [0x123b700] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerLoginPlayer
	// void ServerLoginPlayer(FString InSessionId, FUniqueNetIdRepl InUniqueId, FString UrlString);                             // [0x123b500] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerKickPlayer
	// void ServerKickPlayer(FUniqueNetIdRepl PlayerToKick, FText Reason);                                                      // [0x123b310] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
	// void ServerDisconnectFromLobby();                                                                                        // [0x123b2c0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerCheat
	// void ServerCheat(FString Msg);                                                                                           // [0x123b200] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ClientWasKicked
	// void ClientWasKicked(FText KickReason);                                                                                  // [0x123afc0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientSetInviteFlags
	// void ClientSetInviteFlags(FJoinabilitySettings Settings);                                                                // [0x123af20] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerLeft
	// void ClientPlayerLeft(FUniqueNetIdRepl InUniqueId);                                                                      // [0x123ade0] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerJoined
	// void ClientPlayerJoined(FText NewPlayerName, FUniqueNetIdRepl InUniqueId);                                               // [0x123ac20] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientLoginComplete
	// void ClientLoginComplete(FUniqueNetIdRepl InUniqueId, bool bWasSuccessful);                                              // [0x123aa90] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientJoinGame
	// void ClientJoinGame();                                                                                                   // [0x123aa70] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientAckJoiningServer
	// void ClientAckJoiningServer();                                                                                           // [0x123aa50] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/Lobby.LobbyBeaconHost
/// Size: 0x02F8 (760 bytes) (0x0002B8 - 0x0002F8) align 8 MaxSize: 0x02F8
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x02B8   (0x0008)  MISSED
	TSoftObjectPtr<class UClass*>                      LobbyStateClass;                                            // 0x02C0   (0x0030)  
	class ALobbyBeaconState*                           LobbyState;                                                 // 0x02F0   (0x0008)  
};

/// Class /Script/Lobby.LobbyBeaconPlayerState
/// Size: 0x0360 (864 bytes) (0x000290 - 0x000360) align 8 MaxSize: 0x0360
class ALobbyBeaconPlayerState : public AInfo
{ 
public:
	FText                                              DisplayName;                                                // 0x0290   (0x0018)  
	FUniqueNetIdRepl                                   UniqueId;                                                   // 0x02A8   (0x0030)  
	FUniqueNetIdRepl                                   PartyOwnerUniqueId;                                         // 0x02D8   (0x0030)  
	bool                                               bInLobby;                                                   // 0x0308   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0309   (0x0007)  MISSED
	class AOnlineBeaconClient*                         ClientActor;                                                // 0x0310   (0x0008)  
	unsigned char                                      UnknownData01_7[0x48];                                      // 0x0318   (0x0048)  MISSED


	/// Functions
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_UniqueId
	// void OnRep_UniqueId();                                                                                                   // [0x123b170] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
	// void OnRep_PartyOwner();                                                                                                 // [0x123b110] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_InLobby
	// void OnRep_InLobby();                                                                                                    // [0x123b080] Final|Native|Protected 
};

/// Struct /Script/Lobby.LobbyPlayerStateActorInfo
/// Size: 0x0018 (24 bytes) (0x00000C - 0x000018) align 8 MaxSize: 0x0018
struct FLobbyPlayerStateActorInfo : FFastArraySerializerItem
{ 
	unsigned char                                      UnknownData00_8[0x4];                                       // 0x000C   (0x0004)  MISSED
	class ALobbyBeaconPlayerState*                     LobbyPlayerState;                                           // 0x0010   (0x0008)  
};

/// Struct /Script/Lobby.LobbyPlayerStateInfoArray
/// Size: 0x0120 (288 bytes) (0x000108 - 0x000120) align 8 MaxSize: 0x0120
struct FLobbyPlayerStateInfoArray : FFastArraySerializer
{ 
	TArray<FLobbyPlayerStateActorInfo>                 Players;                                                    // 0x0108   (0x0010)  
	class ALobbyBeaconState*                           ParentState;                                                // 0x0118   (0x0008)  
};

/// Class /Script/Lobby.LobbyBeaconState
/// Size: 0x0438 (1080 bytes) (0x000290 - 0x000438) align 8 MaxSize: 0x0438
class ALobbyBeaconState : public AInfo
{ 
public:
	int32_t                                            MaxPlayers;                                                 // 0x0290   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0294   (0x0004)  MISSED
	class UClass*                                      LobbyBeaconPlayerStateClass;                                // 0x0298   (0x0008)  
	unsigned char                                      UnknownData01_6[0x8];                                       // 0x02A0   (0x0008)  MISSED
	bool                                               bLobbyStarted;                                              // 0x02A8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x3];                                       // 0x02A9   (0x0003)  MISSED
	float                                              WaitForPlayersTimeRemaining;                                // 0x02AC   (0x0004)  
	FLobbyPlayerStateInfoArray                         Players;                                                    // 0x02B0   (0x0120)  
	unsigned char                                      UnknownData03_7[0x68];                                      // 0x03D0   (0x0068)  MISSED


	/// Functions
	// Function /Script/Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
	// void OnRep_WaitForPlayersTimeRemaining();                                                                                // [0x123b1d0] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconState.OnRep_LobbyStarted
	// void OnRep_LobbyStarted();                                                                                               // [0x123b0e0] Final|Native|Protected 
};

#pragma pack(pop)


static_assert(sizeof(ALobbyBeaconClient) == 0x03A8); // 936 bytes (0x000320 - 0x0003A8)
static_assert(sizeof(ALobbyBeaconHost) == 0x02F8); // 760 bytes (0x0002B8 - 0x0002F8)
static_assert(sizeof(ALobbyBeaconPlayerState) == 0x0360); // 864 bytes (0x000290 - 0x000360)
static_assert(sizeof(FLobbyPlayerStateActorInfo) == 0x0018); // 24 bytes (0x00000C - 0x000018)
static_assert(sizeof(FLobbyPlayerStateInfoArray) == 0x0120); // 288 bytes (0x000108 - 0x000120)
static_assert(sizeof(ALobbyBeaconState) == 0x0438); // 1080 bytes (0x000290 - 0x000438)
static_assert(offsetof(ALobbyBeaconClient, LobbyState) == 0x0320);
static_assert(offsetof(ALobbyBeaconClient, PlayerState) == 0x0328);
static_assert(offsetof(ALobbyBeaconClient, LobbyJoinServerState) == 0x0331);
static_assert(offsetof(ALobbyBeaconHost, LobbyStateClass) == 0x02C0);
static_assert(offsetof(ALobbyBeaconHost, LobbyState) == 0x02F0);
static_assert(offsetof(ALobbyBeaconPlayerState, DisplayName) == 0x0290);
static_assert(offsetof(ALobbyBeaconPlayerState, UniqueId) == 0x02A8);
static_assert(offsetof(ALobbyBeaconPlayerState, PartyOwnerUniqueId) == 0x02D8);
static_assert(offsetof(ALobbyBeaconPlayerState, ClientActor) == 0x0310);
static_assert(offsetof(FLobbyPlayerStateActorInfo, LobbyPlayerState) == 0x0010);
static_assert(offsetof(FLobbyPlayerStateInfoArray, Players) == 0x0108);
static_assert(offsetof(FLobbyPlayerStateInfoArray, ParentState) == 0x0118);
static_assert(offsetof(ALobbyBeaconState, LobbyBeaconPlayerStateClass) == 0x0298);
static_assert(offsetof(ALobbyBeaconState, Players) == 0x02B0);
