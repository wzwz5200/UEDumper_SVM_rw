
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

#pragma pack(push, 0x1)

/// Class /Script/OnlineSubsystemOculus.OculusCreateSessionCallbackProxy
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOculusCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1267) /* FMulticastInlineDelegate */ __um(onSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1268) /* FMulticastInlineDelegate */ __um(onFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemOculus.OculusCreateSessionCallbackProxy.CreateSession
	// class UOculusCreateSessionCallbackProxy* CreateSession(int32_t PublicConnections, FString OculusMatchmakingPool);        // [0x1478340] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemOculus.OculusEntitlementCallbackProxy
/// Size: 0x0050 (80 bytes) (0x000030 - 0x000050) align 8 MaxSize: 0x0050
class UOculusEntitlementCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1269) /* FMulticastInlineDelegate */ __um(onSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1270) /* FMulticastInlineDelegate */ __um(onFailure);                                         // 0x0040   (0x0010)  


	/// Functions
	// Function /Script/OnlineSubsystemOculus.OculusEntitlementCallbackProxy.VerifyEntitlement
	// class UOculusEntitlementCallbackProxy* VerifyEntitlement();                                                              // [0x1478a00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemOculus.OculusFindSessionsCallbackProxy
/// Size: 0x0098 (152 bytes) (0x000030 - 0x000098) align 8 MaxSize: 0x0098
class UOculusFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1271) /* FMulticastInlineDelegate */ __um(onSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1272) /* FMulticastInlineDelegate */ __um(onFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x48];                                      // 0x0050   (0x0048)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindModeratedSessions
	// class UOculusFindSessionsCallbackProxy* FindModeratedSessions(int32_t MaxResults);                                       // [0x1478720] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemOculus.OculusFindSessionsCallbackProxy.FindMatchmakingSessions
	// class UOculusFindSessionsCallbackProxy* FindMatchmakingSessions(int32_t MaxResults, FString OculusMatchmakingPool);      // [0x1478580] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemOculus.OculusIdentityCallbackProxy
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UOculusIdentityCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1273) /* FMulticastInlineDelegate */ __um(onSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1274) /* FMulticastInlineDelegate */ __um(onFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0050   (0x0010)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemOculus.OculusIdentityCallbackProxy.GetOculusIdentity
	// class UOculusIdentityCallbackProxy* GetOculusIdentity(int32_t LocalUserNum);                                             // [0x14787c0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemOculus.OculusNetConnection
/// Size: 0x1E58 (7768 bytes) (0x001E48 - 0x001E58) align 8 MaxSize: 0x1E58
class UOculusNetConnection : public UIpConnection
{ 
public:
	unsigned char                                      UnknownData00_1[0x10];                                      // 0x1E48   (0x0010)  MISSED
};

/// Class /Script/OnlineSubsystemOculus.OculusNetDriver
/// Size: 0x0910 (2320 bytes) (0x000858 - 0x000910) align 8 MaxSize: 0x0910
class UOculusNetDriver : public UIpNetDriver
{ 
public:
	unsigned char                                      UnknownData00_1[0xB8];                                      // 0x0858   (0x00B8)  MISSED
};

/// Class /Script/OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy
/// Size: 0x0070 (112 bytes) (0x000030 - 0x000070) align 8 MaxSize: 0x0070
class UOculusUpdateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
public:
	SDK_UNDEFINED(16,1275) /* FMulticastInlineDelegate */ __um(onSuccess);                                         // 0x0030   (0x0010)  
	SDK_UNDEFINED(16,1276) /* FMulticastInlineDelegate */ __um(onFailure);                                         // 0x0040   (0x0010)  
	unsigned char                                      UnknownData00_7[0x20];                                      // 0x0050   (0x0020)  MISSED


	/// Functions
	// Function /Script/OnlineSubsystemOculus.OculusUpdateSessionCallbackProxy.SetSessionEnqueue
	// class UOculusUpdateSessionCallbackProxy* SetSessionEnqueue(bool bShouldEnqueueInMatchmakingPool);                        // [0x14788e0] Final|Native|Static|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(UOculusCreateSessionCallbackProxy) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOculusEntitlementCallbackProxy) == 0x0050); // 80 bytes (0x000030 - 0x000050)
static_assert(sizeof(UOculusFindSessionsCallbackProxy) == 0x0098); // 152 bytes (0x000030 - 0x000098)
static_assert(sizeof(UOculusIdentityCallbackProxy) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(sizeof(UOculusNetConnection) == 0x1E58); // 7768 bytes (0x001E48 - 0x001E58)
static_assert(sizeof(UOculusNetDriver) == 0x0910); // 2320 bytes (0x000858 - 0x000910)
static_assert(sizeof(UOculusUpdateSessionCallbackProxy) == 0x0070); // 112 bytes (0x000030 - 0x000070)
