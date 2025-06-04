
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

#pragma pack(push, 0x1)

/// Enum /Script/OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
/// Size: 0x01 (1 bytes)
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	EOnlineProxyStoreOfferDiscountType__NotOnSale                                    = 0,
	EOnlineProxyStoreOfferDiscountType__Percentage                                   = 1,
	EOnlineProxyStoreOfferDiscountType__DiscountAmount                               = 2,
	EOnlineProxyStoreOfferDiscountType__PayAmount                                    = 3
};

/// Enum /Script/OnlineSubsystemUtils.EInAppPurchaseStatus
/// Size: 0x01 (1 bytes)
enum class EInAppPurchaseStatus : uint8_t
{
	EInAppPurchaseStatus__Invalid                                                    = 0,
	EInAppPurchaseStatus__Failed                                                     = 1,
	EInAppPurchaseStatus__Deferred                                                   = 2,
	EInAppPurchaseStatus__Canceled                                                   = 3,
	EInAppPurchaseStatus__Purchased                                                  = 4,
	EInAppPurchaseStatus__Restored                                                   = 5
};

/// Enum /Script/OnlineSubsystemUtils.EBeaconConnectionState
/// Size: 0x01 (1 bytes)
enum class EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid                                                  = 0,
	EBeaconConnectionState__Closed                                                   = 1,
	EBeaconConnectionState__Pending                                                  = 2,
	EBeaconConnectionState__Open                                                     = 3
};

/// Enum /Script/OnlineSubsystemUtils.EClientRequestType
/// Size: 0x01 (1 bytes)
enum class EClientRequestType : uint8_t
{
	EClientRequestType__NonePending                                                  = 0,
	EClientRequestType__ExistingSessionReservation                                   = 1,
	EClientRequestType__ReservationUpdate                                            = 2,
	EClientRequestType__EmptyServerReservation                                       = 3,
	EClientRequestType__Reconnect                                                    = 4,
	EClientRequestType__Abandon                                                      = 5,
	EClientRequestType__ReservationRemoveMembers                                     = 6,
	EClientRequestType__AddOrUpdateReservation                                       = 7
};

/// Enum /Script/OnlineSubsystemUtils.EPartyReservationResult
/// Size: 0x01 (1 bytes)
enum class EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult                                                = 0,
	EPartyReservationResult__RequestPending                                          = 1,
	EPartyReservationResult__GeneralError                                            = 2,
	EPartyReservationResult__PartyLimitReached                                       = 3,
	EPartyReservationResult__IncorrectPlayerCount                                    = 4,
	EPartyReservationResult__RequestTimedOut                                         = 5,
	EPartyReservationResult__ReservationDuplicate                                    = 6,
	EPartyReservationResult__ReservationNotFound                                     = 7,
	EPartyReservationResult__ReservationAccepted                                     = 8,
	EPartyReservationResult__ReservationDenied                                       = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction                  = 10,
	EPartyReservationResult__ReservationDenied_Banned                                = 11,
	EPartyReservationResult__ReservationRequestCanceled                              = 12,
	EPartyReservationResult__ReservationInvalid                                      = 13,
	EPartyReservationResult__BadSessionId                                            = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers               = 15
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
/// Size: 0x01 (1 bytes)
enum class ESpectatorClientRequestType : uint8_t
{
	ESpectatorClientRequestType__NonePending                                         = 0,
	ESpectatorClientRequestType__ExistingSessionReservation                          = 1,
	ESpectatorClientRequestType__ReservationUpdate                                   = 2,
	ESpectatorClientRequestType__EmptyServerReservation                              = 3,
	ESpectatorClientRequestType__Reconnect                                           = 4,
	ESpectatorClientRequestType__Abandon                                             = 5
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorReservationResult
/// Size: 0x01 (1 bytes)
enum class ESpectatorReservationResult : uint8_t
{
	ESpectatorReservationResult__NoResult                                            = 0,
	ESpectatorReservationResult__RequestPending                                      = 1,
	ESpectatorReservationResult__GeneralError                                        = 2,
	ESpectatorReservationResult__SpectatorLimitReached                               = 3,
	ESpectatorReservationResult__IncorrectPlayerCount                                = 4,
	ESpectatorReservationResult__RequestTimedOut                                     = 5,
	ESpectatorReservationResult__ReservationDuplicate                                = 6,
	ESpectatorReservationResult__ReservationNotFound                                 = 7,
	ESpectatorReservationResult__ReservationAccepted                                 = 8,
	ESpectatorReservationResult__ReservationDenied                                   = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction              = 10,
	ESpectatorReservationResult__ReservationDenied_Banned                            = 11,
	ESpectatorReservationResult__ReservationRequestCanceled                          = 12,
	ESpectatorReservationResult__ReservationInvalid                                  = 13,
	ESpectatorReservationResult__BadSessionId                                        = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers           = 15
};

/// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	// void GetCachedAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementId, bool& bFoundID, float& Progress); // [0xd236c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	// void GetCachedAchievementDescription(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementId, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden); // [0xd23350] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,849) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,850) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	// class UAchievementQueryCallbackProxy* CacheAchievements(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0xd1fad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	// class UAchievementQueryCallbackProxy* CacheAchievementDescriptions(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0xd1f9e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,851) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,852) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	// class UAchievementWriteCallbackProxy* WriteAchievementProgress(class UObject* WorldContextObject, class APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag); // [0xd25a80] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,853) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,854) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	// class UConnectionCallbackProxy* ConnectToService(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0xd1ff60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,855) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,856) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	// class UCreateSessionCallbackProxy* CreateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // [0xd22580] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,857) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,858) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	// class UDestroySessionCallbackProxy* DestroySession(class UObject* WorldContextObject, class APlayerController* PlayerController); // [0xd22780] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
/// Size: 0x0080 (128 bytes) (0x000030 - 0x000080) align 8 MaxSize: 0x0080
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,859) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,860) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x30];                                      // 0x0050   (0x0030)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	// class UEndMatchCallbackProxy* EndMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<Class> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome); // [0xd228e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,861) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,862) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	// class UEndTurnCallbackProxy* EndTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TScriptInterface<Class> TurnBasedMatchInterface); // [0xd22bf0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
/// Size: 0x0090 (144 bytes) (0x000030 - 0x000090) align 8 MaxSize: 0x0090
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,863) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,864) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x40];                                      // 0x0050   (0x0040)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	// FString GetServerName(FBlueprintSessionResult& Result);                                                                  // [0xd24050] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	// int32_t GetPingInMs(FBlueprintSessionResult& Result);                                                                    // [0xd23d80] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	// int32_t GetMaxPlayers(FBlueprintSessionResult& Result);                                                                  // [0xd23b00] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	// int32_t GetCurrentPlayers(FBlueprintSessionResult& Result);                                                              // [0xd23880] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	// class UFindSessionsCallbackProxy* FindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // [0xd22e70] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
/// Size: 0x0088 (136 bytes) (0x000030 - 0x000088) align 8 MaxSize: 0x0088
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,865) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,866) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x38];                                      // 0x0050   (0x0038)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	// class UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, TScriptInterface<Class> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // [0xd23070] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
/// Size: 0x00A8 (168 bytes) (0x000028 - 0x0000A8) align 8 MaxSize: 0x00A8
class UInAppPurchaseCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,867) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,868) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x60];                                      // 0x0048   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(class APlayerController* PlayerController); // [0xd21a40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(class APlayerController* PlayerController); // [0xd20ff0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
	// class UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(class APlayerController* PlayerController, FInAppPurchaseProductRequest2& ProductRequest); // [0xd20460] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,869) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,870) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
	// class UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(class APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0xd20af0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
/// Size: 0x00B0 (176 bytes) (0x000028 - 0x0000B0) align 8 MaxSize: 0x00B0
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{ 
public:
	SDK_UNDEFINED(16,871) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,872) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x68];                                      // 0x0048   (0x0068)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
	// class UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, class APlayerController* PlayerController); // [0xd21490] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.IpConnection
/// Size: 0x1E48 (7752 bytes) (0x001DB8 - 0x001E48) align 8 MaxSize: 0x1E48
class UIpConnection : public UNetConnection
{ 
public:
	unsigned char                                      UnknownData00_8[0x74];                                      // 0x1DB8   (0x0074)  MISSED
	float                                              SocketErrorDisconnectDelay;                                 // 0x1E2C   (0x0004)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x1E30   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.IpNetDriver
/// Size: 0x0858 (2136 bytes) (0x0007A8 - 0x000858) align 8 MaxSize: 0x0858
class UIpNetDriver : public UNetDriver
{ 
public:
	bool                                               LogPortUnreach : 1;                                         // 0x07A8:0 (0x0001)  
	bool                                               AllowPlayerPortUnreach : 1;                                 // 0x07A8:1 (0x0001)  
	unsigned char                                      UnknownData00_5[0x3];                                       // 0x07A9   (0x0003)  MISSED
	uint32_t                                           MaxPortCountToTry;                                          // 0x07AC   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x07B0   (0x0004)  MISSED
	uint32_t                                           ServerDesiredSocketReceiveBufferBytes;                      // 0x07B4   (0x0004)  
	uint32_t                                           ServerDesiredSocketSendBufferBytes;                         // 0x07B8   (0x0004)  
	uint32_t                                           ClientDesiredSocketReceiveBufferBytes;                      // 0x07BC   (0x0004)  
	uint32_t                                           ClientDesiredSocketSendBufferBytes;                         // 0x07C0   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x07C4   (0x0004)  MISSED
	double                                             MaxSecondsInReceive;                                        // 0x07C8   (0x0008)  
	int32_t                                            NbPacketsBetweenReceiveTimeTest;                            // 0x07D0   (0x0004)  
	float                                              ResolutionConnectionTimeout;                                // 0x07D4   (0x0004)  
	unsigned char                                      UnknownData03_7[0x80];                                      // 0x07D8   (0x0080)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
/// Size: 0x0198 (408 bytes) (0x000030 - 0x000198) align 8 MaxSize: 0x0198
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,873) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,874) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x148];                                     // 0x0050   (0x0148)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	// class UJoinSessionCallbackProxy* JoinSession(class UObject* WorldContextObject, class APlayerController* PlayerController, FBlueprintSessionResult& SearchResult); // [0xd241d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	// bool WriteLeaderboardInteger(class APlayerController* PlayerController, FName StatName, int32_t StatValue);              // [0xd25c10] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class ULeaderboardFlushCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,875) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,876) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0048   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	// class ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(class APlayerController* PlayerController, FName SessionName); // [0xd200c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
/// Size: 0x0098 (152 bytes) (0x000028 - 0x000098) align 8 MaxSize: 0x0098
class ULeaderboardQueryCallbackProxy : public UObject
{ 
public:
	SDK_UNDEFINED(16,877) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0028   (0x0010)  
	SDK_UNDEFINED(16,878) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0038   (0x0010)  
	unsigned char                                      UnknownData00_7[0x50];                                      // 0x0048   (0x0050)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	// class ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(class APlayerController* PlayerController, FName StatName); // [0xd21ef0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
/// Size: 0x0068 (104 bytes) (0x000030 - 0x000068) align 8 MaxSize: 0x0068
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,879) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,880) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x18];                                      // 0x0050   (0x0018)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	// class ULogoutCallbackProxy* Logout(class UObject* WorldContextObject, class APlayerController* PlayerController);        // [0xd243c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeacon
/// Size: 0x02C0 (704 bytes) (0x000290 - 0x0002C0) align 8 MaxSize: 0x02C0
class AOnlineBeacon : public AActor
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0290   (0x0008)  MISSED
	float                                              BeaconConnectionInitialTimeout;                             // 0x0298   (0x0004)  
	float                                              BeaconConnectionTimeout;                                    // 0x029C   (0x0004)  
	class UNetDriver*                                  NetDriver;                                                  // 0x02A0   (0x0008)  
	unsigned char                                      UnknownData01_7[0x18];                                      // 0x02A8   (0x0018)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
/// Size: 0x0320 (800 bytes) (0x0002C0 - 0x000320) align 8 MaxSize: 0x0320
class AOnlineBeaconClient : public AOnlineBeacon
{ 
public:
	class AOnlineBeaconHostObject*                     BeaconOwner;                                                // 0x02C0   (0x0008)  
	class UNetConnection*                              BeaconConnection;                                           // 0x02C8   (0x0008)  
	EBeaconConnectionState                             ConnectionState;                                            // 0x02D0   (0x0001)  
	unsigned char                                      UnknownData00_7[0x4F];                                      // 0x02D1   (0x004F)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	// void ClientOnConnected();                                                                                                // [0xd1fcc0] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
/// Size: 0x03D0 (976 bytes) (0x0002C0 - 0x0003D0) align 8 MaxSize: 0x03D0
class AOnlineBeaconHost : public AOnlineBeacon
{ 
public:
	int32_t                                            ListenPort;                                                 // 0x02C0   (0x0004)  
	bool                                               bAuthRequired;                                              // 0x02C4   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x02C5   (0x0003)  MISSED
	uint32_t                                           MaxAuthTokenSize;                                           // 0x02C8   (0x0004)  
	unsigned char                                      UnknownData01_6[0x54];                                      // 0x02CC   (0x0054)  MISSED
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x0320   (0x0010)  
	unsigned char                                      UnknownData02_7[0xA0];                                      // 0x0330   (0x00A0)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
/// Size: 0x02B8 (696 bytes) (0x000290 - 0x0002B8) align 8 MaxSize: 0x02B8
class AOnlineBeaconHostObject : public AActor
{ 
public:
	FString                                            BeaconTypeName;                                             // 0x0290   (0x0010)  
	class UClass*                                      ClientBeaconActorClass;                                     // 0x02A0   (0x0008)  
	TArray<class AOnlineBeaconClient*>                 ClientActors;                                               // 0x02A8   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0188 (392 bytes) (0x000028 - 0x000188) align 8 MaxSize: 0x0188
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{ 
public:
	TMap<FName, FName>                                 MappedUniqueNetIdTypes;                                     // 0x0028   (0x0050)  
	TArray<FName>                                      CompatibleUniqueNetIdTypes;                                 // 0x0078   (0x0010)  
	FName                                              VoiceSubsystemNameOverride;                                 // 0x0088   (0x0008)  
	unsigned char                                      UnknownData00_7[0xF8];                                      // 0x0090   (0x00F8)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FPIELoginSettingsInternal
{ 
	FString                                            ID;                                                         // 0x0000   (0x0010)  
	FString                                            Token;                                                      // 0x0010   (0x0010)  
	FString                                            Type;                                                       // 0x0020   (0x0010)  
	TArray<char>                                       TokenBytes;                                                 // 0x0030   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
/// Size: 0x0050 (80 bytes) (0x000038 - 0x000050) align 8 MaxSize: 0x0050
class UOnlinePIESettings : public UDeveloperSettings
{ 
public:
	bool                                               bOnlinePIEEnabled;                                          // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FPIELoginSettingsInternal>                  Logins;                                                     // 0x0040   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.OnlineSessionClient
/// Size: 0x01E0 (480 bytes) (0x000028 - 0x0001E0) align 8 MaxSize: 0x01E0
class UOnlineSessionClient : public UOnlineSession
{ 
public:
	unsigned char                                      UnknownData00_8[0x1B0];                                     // 0x0028   (0x01B0)  MISSED
	bool                                               bIsFromInvite;                                              // 0x01D8   (0x0001)  
	bool                                               bHandlingDisconnect;                                        // 0x01D9   (0x0001)  
	unsigned char                                      UnknownData01_7[0x6];                                       // 0x01DA   (0x0006)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PlayerReservation
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FPlayerReservation
{ 
	FUniqueNetIdRepl                                   UniqueId;                                                   // 0x0000   (0x0030)  
	FString                                            ValidationStr;                                              // 0x0030   (0x0010)  
	FString                                            Platform;                                                   // 0x0040   (0x0010)  
	bool                                               bAllowCrossplay;                                            // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0051   (0x0003)  MISSED
	float                                              ElapsedTime;                                                // 0x0054   (0x0004)  
};

/// Struct /Script/OnlineSubsystemUtils.PartyReservation
/// Size: 0x0058 (88 bytes) (0x000000 - 0x000058) align 8 MaxSize: 0x0058
struct FPartyReservation
{ 
	int32_t                                            TeamNum;                                                    // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0004   (0x0004)  MISSED
	FUniqueNetIdRepl                                   PartyLeader;                                                // 0x0008   (0x0030)  
	TArray<FPlayerReservation>                         PartyMembers;                                               // 0x0038   (0x0010)  
	TArray<FPlayerReservation>                         RemovedPartyMembers;                                        // 0x0048   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
/// Size: 0x03E8 (1000 bytes) (0x000320 - 0x0003E8) align 8 MaxSize: 0x03E8
class APartyBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0320   (0x0030)  MISSED
	FString                                            DestSessionId;                                              // 0x0350   (0x0010)  
	FPartyReservation                                  PendingReservation;                                         // 0x0360   (0x0058)  
	EClientRequestType                                 RequestType;                                                // 0x03B8   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x03B9   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x03BA   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2D];                                      // 0x03BB   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	// void ServerUpdateReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                             // [0xd25690] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SessionId, FPartyReservation Reservation);                                         // [0xd251a0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
	// void ServerRemoveMemberFromReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                   // [0xd24f10] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader);                                                       // [0xd24d60] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
	// void ServerAddOrUpdateReservationRequest(FString SessionId, FPartyReservation Reservation);                              // [0xd24ad0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0xd1fe40] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                        // [0xd1fe00] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                                // [0xd1fd00] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                          // [0xd1fbc0] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconHost
/// Size: 0x0330 (816 bytes) (0x0002B8 - 0x000330) align 8 MaxSize: 0x0330
class APartyBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	class UPartyBeaconState*                           State;                                                      // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x02C0   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0321   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x0324   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x0328   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x032C   (0x0004)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FPartyBeaconCrossplayPlatformMapping
{ 
	FString                                            PlatformName;                                               // 0x0000   (0x0010)  
	FString                                            PlatformType;                                               // 0x0010   (0x0010)  
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconState
/// Size: 0x00A0 (160 bytes) (0x000028 - 0x0000A0) align 8 MaxSize: 0x00A0
class UPartyBeaconState : public UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	int32_t                                            NumTeams;                                                   // 0x0038   (0x0004)  
	int32_t                                            NumPlayersPerTeam;                                          // 0x003C   (0x0004)  
	FName                                              TeamAssignmentMethod;                                       // 0x0040   (0x0008)  
	int32_t                                            ReservedHostTeamNum;                                        // 0x0048   (0x0004)  
	int32_t                                            ForceTeamNum;                                               // 0x004C   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0050   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0051   (0x0007)  MISSED
	TArray<FString>                                    PlatformCrossplayRestrictions;                              // 0x0058   (0x0010)  
	TArray<FPartyBeaconCrossplayPlatformMapping>       PlatformTypeMapping;                                        // 0x0068   (0x0010)  
	bool                                               bEnableRemovalRequests;                                     // 0x0078   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0079   (0x0007)  MISSED
	TArray<FPartyReservation>                          Reservations;                                               // 0x0080   (0x0010)  
	unsigned char                                      UnknownData02_7[0x10];                                      // 0x0090   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
/// Size: 0x0078 (120 bytes) (0x000030 - 0x000078) align 8 MaxSize: 0x0078
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,881) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,882) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x28];                                      // 0x0050   (0x0028)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	// class UQuitMatchCallbackProxy* QuitMatch(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int32_t TurnTimeoutInSeconds); // [0xd24520] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{ 
public:
	SDK_UNDEFINED(16,883) /* FMulticastInlineDelegate */ __um(onSuccess);                                          // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,884) /* FMulticastInlineDelegate */ __um(onFailure);                                          // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	// class UShowLoginUICallbackProxy* ShowExternalLoginUI(class UObject* WorldContextObject, class APlayerController* InPlayerController); // [0xd25920] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemUtils.SpectatorReservation
/// Size: 0x0088 (136 bytes) (0x000000 - 0x000088) align 8 MaxSize: 0x0088
struct FSpectatorReservation
{ 
	FUniqueNetIdRepl                                   SpectatorId;                                                // 0x0000   (0x0030)  
	FPlayerReservation                                 Spectator;                                                  // 0x0030   (0x0058)  
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient
/// Size: 0x0418 (1048 bytes) (0x000320 - 0x000418) align 8 MaxSize: 0x0418
class ASpectatorBeaconClient : public AOnlineBeaconClient
{ 
public:
	unsigned char                                      UnknownData00_8[0x30];                                      // 0x0320   (0x0030)  MISSED
	FString                                            DestSessionId;                                              // 0x0350   (0x0010)  
	FSpectatorReservation                              PendingReservation;                                         // 0x0360   (0x0088)  
	ESpectatorClientRequestType                        RequestType;                                                // 0x03E8   (0x0001)  
	bool                                               bPendingReservationSent;                                    // 0x03E9   (0x0001)  
	bool                                               bCancelReservation;                                         // 0x03EA   (0x0001)  
	unsigned char                                      UnknownData01_7[0x2D];                                      // 0x03EB   (0x002D)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SessionId, FSpectatorReservation Reservation);                                     // [0xd25430] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl Spectator);                                                         // [0xd24d60] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0xd1fed0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                        // [0xd1fe20] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                            // [0xd1fd80] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<ESpectatorReservationResult> ReservationResponse);                      // [0xd1fc40] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost
/// Size: 0x0330 (816 bytes) (0x0002B8 - 0x000330) align 8 MaxSize: 0x0330
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{ 
public:
	class USpectatorBeaconState*                       State;                                                      // 0x02B8   (0x0008)  
	unsigned char                                      UnknownData00_6[0x60];                                      // 0x02C0   (0x0060)  MISSED
	bool                                               bLogoutOnSessionTimeout;                                    // 0x0320   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x0321   (0x0003)  MISSED
	float                                              SessionTimeoutSecs;                                         // 0x0324   (0x0004)  
	float                                              TravelSessionTimeoutSecs;                                   // 0x0328   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x032C   (0x0004)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconState
/// Size: 0x0060 (96 bytes) (0x000028 - 0x000060) align 8 MaxSize: 0x0060
class USpectatorBeaconState : public UObject
{ 
public:
	FName                                              SessionName;                                                // 0x0028   (0x0008)  
	int32_t                                            NumConsumedReservations;                                    // 0x0030   (0x0004)  
	int32_t                                            MaxReservations;                                            // 0x0034   (0x0004)  
	bool                                               bRestrictCrossConsole;                                      // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FSpectatorReservation>                      Reservations;                                               // 0x0040   (0x0010)  
	unsigned char                                      UnknownData01_7[0x10];                                      // 0x0050   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconClient
/// Size: 0x0320 (800 bytes) (0x000320 - 0x000320) align 8 MaxSize: 0x0320
class ATestBeaconClient : public AOnlineBeaconClient
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ServerPong
	// void ServerPong();                                                                                                       // [0xd24ec0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ClientPing
	// void ClientPing();                                                                                                       // [0xd1fce0] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconHost
/// Size: 0x02B8 (696 bytes) (0x0002B8 - 0x0002B8) align 8 MaxSize: 0x02B8
class ATestBeaconHost : public AOnlineBeaconHostObject
{ 
public:
};

/// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
/// Size: 0x0028 (40 bytes) (0x000028 - 0x000028) align 8 MaxSize: 0x0028
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	// void RegisterTurnBasedMatchInterfaceObject(class UObject* WorldContextObject, class APlayerController* PlayerController, class UObject* Object); // [0xd247e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	// void GetPlayerDisplayName(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex, FString& PlayerDisplayName); // [0xd23e50] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	// void GetMyPlayerIndex(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, int32_t& PlayerIndex); // [0xd23bd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	// void GetIsMyTurn(class UObject* WorldContextObject, class APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn); // [0xd23950] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
/// Size: 0x07F0 (2032 bytes) (0x000790 - 0x0007F0) align 16 MaxSize: 0x07F0
class UVoipListenerSynthComponent : public USynthComponent
{ 
public:
	unsigned char                                      UnknownData00_1[0x60];                                      // 0x0790   (0x0060)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	// bool IsIdling();                                                                                                         // [0xd24190] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0180 (384 bytes) (0x000028 - 0x000180) align 8 MaxSize: 0x0180
class UOnlineEngineInterfaceImpldup_163 : public UOnlineEngineInterface
{ 
public:
	unsigned char                                      UnknownData00_1[0x158];                                     // 0x0028   (0x0158)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.BlueprintSessionResult
/// Size: 0x0120 (288 bytes) (0x000000 - 0x000120) align 8 MaxSize: 0x0120
struct FBlueprintSessionResult
{ 
	unsigned char                                      UnknownData00_2[0x120];                                     // 0x0000   (0x0120)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
/// Size: 0x0110 (272 bytes) (0x000000 - 0x000110) align 8 MaxSize: 0x0110
struct FOnlineProxyStoreOffer
{ 
	FString                                            OfferId;                                                    // 0x0000   (0x0010)  
	FText                                              Title;                                                      // 0x0010   (0x0018)  
	FText                                              Description;                                                // 0x0028   (0x0018)  
	FText                                              LongDescription;                                            // 0x0040   (0x0018)  
	FText                                              RegularPriceText;                                           // 0x0058   (0x0018)  
	int32_t                                            RegularPrice;                                               // 0x0070   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0074   (0x0004)  MISSED
	FText                                              PriceText;                                                  // 0x0078   (0x0018)  
	int32_t                                            NumericPrice;                                               // 0x0090   (0x0004)  
	unsigned char                                      UnknownData01_6[0x4];                                       // 0x0094   (0x0004)  MISSED
	FString                                            CurrencyCode;                                               // 0x0098   (0x0010)  
	FDateTime                                          ReleaseDate;                                                // 0x00A8   (0x0008)  
	FDateTime                                          ExpirationDate;                                             // 0x00B0   (0x0008)  
	EOnlineProxyStoreOfferDiscountType                 DiscountType;                                               // 0x00B8   (0x0001)  
	unsigned char                                      UnknownData02_6[0x7];                                       // 0x00B9   (0x0007)  MISSED
	TMap<FString, FString>                             DynamicFields;                                              // 0x00C0   (0x0050)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseRestoreInfo2
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FInAppPurchaseReceiptInfo2
{ 
	FString                                            ItemName;                                                   // 0x0000   (0x0010)  
	FString                                            ItemId;                                                     // 0x0010   (0x0010)  
	FString                                            ValidationInfo;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductRequest2
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FInAppPurchaseProductRequest2
{ 
	FString                                            ProductIdentifier;                                          // 0x0000   (0x0010)  
	bool                                               bIsConsumable;                                              // 0x0010   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0011   (0x0007)  MISSED
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
/// Size: 0x00F8 (248 bytes) (0x000000 - 0x0000F8) align 8 MaxSize: 0x00F8
struct FInAppPurchaseProductInfo2
{ 
	FString                                            Identifier;                                                 // 0x0000   (0x0010)  
	FString                                            TransactionIdentifier;                                      // 0x0010   (0x0010)  
	FString                                            DisplayName;                                                // 0x0020   (0x0010)  
	FString                                            DisplayDescription;                                         // 0x0030   (0x0010)  
	FString                                            DisplayPrice;                                               // 0x0040   (0x0010)  
	float                                              RawPrice;                                                   // 0x0050   (0x0004)  
	unsigned char                                      UnknownData00_6[0x4];                                       // 0x0054   (0x0004)  MISSED
	FString                                            CurrencyCode;                                               // 0x0058   (0x0010)  
	FString                                            CurrencySymbol;                                             // 0x0068   (0x0010)  
	FString                                            DecimalSeparator;                                           // 0x0078   (0x0010)  
	FString                                            GroupingSeparator;                                          // 0x0088   (0x0010)  
	FString                                            ReceiptData;                                                // 0x0098   (0x0010)  
	TMap<FString, FString>                             DynamicFields;                                              // 0x00A8   (0x0050)  
};

#pragma pack(pop)


static_assert(sizeof(UAchievementBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UAchievementQueryCallbackProxy) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(UAchievementWriteCallbackProxy) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UConnectionCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UCreateSessionCallbackProxy) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UDestroySessionCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UEndMatchCallbackProxy) == 0x0080); // 128 bytes (0x000030 - 0x000080)
static_assert(sizeof(UEndTurnCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UFindSessionsCallbackProxy) == 0x0090); // 144 bytes (0x000030 - 0x000090)
static_assert(sizeof(UFindTurnBasedMatchCallbackProxy) == 0x0088); // 136 bytes (0x000030 - 0x000088)
static_assert(sizeof(UInAppPurchaseCallbackProxy2) == 0x00A8); // 168 bytes (0x000028 - 0x0000A8)
static_assert(sizeof(UInAppPurchaseQueryCallbackProxy2) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UInAppPurchaseRestoreCallbackProxy2) == 0x00B0); // 176 bytes (0x000028 - 0x0000B0)
static_assert(sizeof(UIpConnection) == 0x1E48); // 7752 bytes (0x001DB8 - 0x001E48)
static_assert(sizeof(UIpNetDriver) == 0x0858); // 2136 bytes (0x0007A8 - 0x000858)
static_assert(sizeof(UJoinSessionCallbackProxy) == 0x0198); // 408 bytes (0x000030 - 0x000198)
static_assert(sizeof(ULeaderboardBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(ULeaderboardFlushCallbackProxy) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(ULeaderboardQueryCallbackProxy) == 0x0098); // 152 bytes (0x000028 - 0x000098)
static_assert(sizeof(ULogoutCallbackProxy) == 0x0068); // 104 bytes (0x000030 - 0x000068)
static_assert(sizeof(AOnlineBeacon) == 0x02C0); // 704 bytes (0x000290 - 0x0002C0)
static_assert(sizeof(AOnlineBeaconClient) == 0x0320); // 800 bytes (0x0002C0 - 0x000320)
static_assert(sizeof(AOnlineBeaconHost) == 0x03D0); // 976 bytes (0x0002C0 - 0x0003D0)
static_assert(sizeof(AOnlineBeaconHostObject) == 0x02B8); // 696 bytes (0x000290 - 0x0002B8)
static_assert(sizeof(UOnlineEngineInterfaceImpl) == 0x0188); // 392 bytes (0x000028 - 0x000188)
static_assert(sizeof(FPIELoginSettingsInternal) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UOnlinePIESettings) == 0x0050); // 80 bytes (0x000038 - 0x000050)
static_assert(sizeof(UOnlineServicesEngineInterfaceImpl) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UOnlineSessionClient) == 0x01E0); // 480 bytes (0x000028 - 0x0001E0)
static_assert(sizeof(FPlayerReservation) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(FPartyReservation) == 0x0058); // 88 bytes (0x000000 - 0x000058)
static_assert(sizeof(APartyBeaconClient) == 0x03E8); // 1000 bytes (0x000320 - 0x0003E8)
static_assert(sizeof(APartyBeaconHost) == 0x0330); // 816 bytes (0x0002B8 - 0x000330)
static_assert(sizeof(FPartyBeaconCrossplayPlatformMapping) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UPartyBeaconState) == 0x00A0); // 160 bytes (0x000028 - 0x0000A0)
static_assert(sizeof(UQuitMatchCallbackProxy) == 0x0078); // 120 bytes (0x000030 - 0x000078)
static_assert(sizeof(UShowLoginUICallbackProxy) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(FSpectatorReservation) == 0x0088); // 136 bytes (0x000000 - 0x000088)
static_assert(sizeof(ASpectatorBeaconClient) == 0x0418); // 1048 bytes (0x000320 - 0x000418)
static_assert(sizeof(ASpectatorBeaconHost) == 0x0330); // 816 bytes (0x0002B8 - 0x000330)
static_assert(sizeof(USpectatorBeaconState) == 0x0060); // 96 bytes (0x000028 - 0x000060)
static_assert(sizeof(ATestBeaconClient) == 0x0320); // 800 bytes (0x000320 - 0x000320)
static_assert(sizeof(ATestBeaconHost) == 0x02B8); // 696 bytes (0x0002B8 - 0x0002B8)
static_assert(sizeof(UTurnBasedBlueprintLibrary) == 0x0028); // 40 bytes (0x000028 - 0x000028)
static_assert(sizeof(UVoipListenerSynthComponent) == 0x07F0); // 2032 bytes (0x000790 - 0x0007F0)
static_assert(sizeof(UOnlineEngineInterfaceImpldup_163) == 0x0180); // 384 bytes (0x000028 - 0x000180)
static_assert(sizeof(FBlueprintSessionResult) == 0x0120); // 288 bytes (0x000000 - 0x000120)
static_assert(sizeof(FOnlineProxyStoreOffer) == 0x0110); // 272 bytes (0x000000 - 0x000110)
static_assert(sizeof(FInAppPurchaseRestoreInfo2) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInAppPurchaseReceiptInfo2) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(FInAppPurchaseProductRequest2) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FInAppPurchaseProductInfo2) == 0x00F8); // 248 bytes (0x000000 - 0x0000F8)
static_assert(offsetof(AOnlineBeacon, NetDriver) == 0x02A0);
static_assert(offsetof(AOnlineBeaconClient, BeaconOwner) == 0x02C0);
static_assert(offsetof(AOnlineBeaconClient, BeaconConnection) == 0x02C8);
static_assert(offsetof(AOnlineBeaconClient, ConnectionState) == 0x02D0);
static_assert(offsetof(AOnlineBeaconHost, ClientActors) == 0x0320);
static_assert(offsetof(AOnlineBeaconHostObject, BeaconTypeName) == 0x0290);
static_assert(offsetof(AOnlineBeaconHostObject, ClientBeaconActorClass) == 0x02A0);
static_assert(offsetof(AOnlineBeaconHostObject, ClientActors) == 0x02A8);
static_assert(offsetof(UOnlineEngineInterfaceImpl, MappedUniqueNetIdTypes) == 0x0028);
static_assert(offsetof(UOnlineEngineInterfaceImpl, CompatibleUniqueNetIdTypes) == 0x0078);
static_assert(offsetof(UOnlineEngineInterfaceImpl, VoiceSubsystemNameOverride) == 0x0088);
static_assert(offsetof(FPIELoginSettingsInternal, ID) == 0x0000);
static_assert(offsetof(FPIELoginSettingsInternal, Token) == 0x0010);
static_assert(offsetof(FPIELoginSettingsInternal, Type) == 0x0020);
static_assert(offsetof(FPIELoginSettingsInternal, TokenBytes) == 0x0030);
static_assert(offsetof(UOnlinePIESettings, Logins) == 0x0040);
static_assert(offsetof(FPlayerReservation, UniqueId) == 0x0000);
static_assert(offsetof(FPlayerReservation, ValidationStr) == 0x0030);
static_assert(offsetof(FPlayerReservation, Platform) == 0x0040);
static_assert(offsetof(FPartyReservation, PartyLeader) == 0x0008);
static_assert(offsetof(FPartyReservation, PartyMembers) == 0x0038);
static_assert(offsetof(FPartyReservation, RemovedPartyMembers) == 0x0048);
static_assert(offsetof(APartyBeaconClient, DestSessionId) == 0x0350);
static_assert(offsetof(APartyBeaconClient, PendingReservation) == 0x0360);
static_assert(offsetof(APartyBeaconClient, RequestType) == 0x03B8);
static_assert(offsetof(APartyBeaconHost, State) == 0x02B8);
static_assert(offsetof(FPartyBeaconCrossplayPlatformMapping, PlatformName) == 0x0000);
static_assert(offsetof(FPartyBeaconCrossplayPlatformMapping, PlatformType) == 0x0010);
static_assert(offsetof(UPartyBeaconState, SessionName) == 0x0028);
static_assert(offsetof(UPartyBeaconState, TeamAssignmentMethod) == 0x0040);
static_assert(offsetof(UPartyBeaconState, PlatformCrossplayRestrictions) == 0x0058);
static_assert(offsetof(UPartyBeaconState, PlatformTypeMapping) == 0x0068);
static_assert(offsetof(UPartyBeaconState, Reservations) == 0x0080);
static_assert(offsetof(FSpectatorReservation, SpectatorId) == 0x0000);
static_assert(offsetof(FSpectatorReservation, Spectator) == 0x0030);
static_assert(offsetof(ASpectatorBeaconClient, DestSessionId) == 0x0350);
static_assert(offsetof(ASpectatorBeaconClient, PendingReservation) == 0x0360);
static_assert(offsetof(ASpectatorBeaconClient, RequestType) == 0x03E8);
static_assert(offsetof(ASpectatorBeaconHost, State) == 0x02B8);
static_assert(offsetof(USpectatorBeaconState, SessionName) == 0x0028);
static_assert(offsetof(USpectatorBeaconState, Reservations) == 0x0040);
static_assert(offsetof(FOnlineProxyStoreOffer, OfferId) == 0x0000);
static_assert(offsetof(FOnlineProxyStoreOffer, Title) == 0x0010);
static_assert(offsetof(FOnlineProxyStoreOffer, Description) == 0x0028);
static_assert(offsetof(FOnlineProxyStoreOffer, LongDescription) == 0x0040);
static_assert(offsetof(FOnlineProxyStoreOffer, RegularPriceText) == 0x0058);
static_assert(offsetof(FOnlineProxyStoreOffer, PriceText) == 0x0078);
static_assert(offsetof(FOnlineProxyStoreOffer, CurrencyCode) == 0x0098);
static_assert(offsetof(FOnlineProxyStoreOffer, ReleaseDate) == 0x00A8);
static_assert(offsetof(FOnlineProxyStoreOffer, ExpirationDate) == 0x00B0);
static_assert(offsetof(FOnlineProxyStoreOffer, DiscountType) == 0x00B8);
static_assert(offsetof(FOnlineProxyStoreOffer, DynamicFields) == 0x00C0);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseRestoreInfo2, ValidationInfo) == 0x0020);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemName) == 0x0000);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ItemId) == 0x0010);
static_assert(offsetof(FInAppPurchaseReceiptInfo2, ValidationInfo) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductRequest2, ProductIdentifier) == 0x0000);
static_assert(offsetof(FInAppPurchaseProductInfo2, Identifier) == 0x0000);
static_assert(offsetof(FInAppPurchaseProductInfo2, TransactionIdentifier) == 0x0010);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayName) == 0x0020);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayDescription) == 0x0030);
static_assert(offsetof(FInAppPurchaseProductInfo2, DisplayPrice) == 0x0040);
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencyCode) == 0x0058);
static_assert(offsetof(FInAppPurchaseProductInfo2, CurrencySymbol) == 0x0068);
static_assert(offsetof(FInAppPurchaseProductInfo2, DecimalSeparator) == 0x0078);
static_assert(offsetof(FInAppPurchaseProductInfo2, GroupingSeparator) == 0x0088);
static_assert(offsetof(FInAppPurchaseProductInfo2, ReceiptData) == 0x0098);
static_assert(offsetof(FInAppPurchaseProductInfo2, DynamicFields) == 0x00A8);
