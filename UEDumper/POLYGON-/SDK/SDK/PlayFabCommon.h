
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Class /Script/PlayFabCommon.PlayFabAuthenticationContext
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UPlayFabAuthenticationContext : public UObject
{ 
public:
	FString                                            ClientSessionTicket;                                        // 0x0028   (0x0010)  
	FString                                            EntityToken;                                                // 0x0038   (0x0010)  
	FString                                            DeveloperSecretKey;                                         // 0x0048   (0x0010)  
	FString                                            PlayFabId;                                                  // 0x0058   (0x0010)  


	/// Functions
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.SetPlayFabId
	// void SetPlayFabId(FString InKey);                                                                                        // [0x21408d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.SetEntityToken
	// void SetEntityToken(FString InToken);                                                                                    // [0x21407d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.SetDeveloperSecretKey
	// void SetDeveloperSecretKey(FString InKey);                                                                               // [0x21406d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.SetClientSessionTicket
	// void SetClientSessionTicket(FString InTicket);                                                                           // [0x21405d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.GetPlayFabId
	// FString GetPlayFabId();                                                                                                  // [0x2140590] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.GetEntityToken
	// FString GetEntityToken();                                                                                                // [0x2140550] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.GetDeveloperSecretKey
	// FString GetDeveloperSecretKey();                                                                                         // [0x2140510] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.GetClientSessionTicket
	// FString GetClientSessionTicket();                                                                                        // [0x21404d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.ForgetAllCredentials
	// void ForgetAllCredentials();                                                                                             // [0x2140480] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayFabCommon.PlayFabAuthenticationContext.ClientAdminSecurityCheck
	// void ClientAdminSecurityCheck();                                                                                         // [0xd63f10] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/PlayFabCommon.PlayFabRuntimeSettings
/// Size: 0x0058 (88 bytes) (0x000028 - 0x000058) align 8 MaxSize: 0x0058
class UPlayFabRuntimeSettings : public UObject
{ 
public:
	FString                                            ProductionEnvironmentURL;                                   // 0x0028   (0x0010)  
	FString                                            TitleId;                                                    // 0x0038   (0x0010)  
	FString                                            DeveloperSecretKey;                                         // 0x0048   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UPlayFabAuthenticationContext) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UPlayFabRuntimeSettings) == 0x0058); // 88 bytes (0x000028 - 0x000058)
static_assert(offsetof(UPlayFabAuthenticationContext, ClientSessionTicket) == 0x0028);
static_assert(offsetof(UPlayFabAuthenticationContext, EntityToken) == 0x0038);
static_assert(offsetof(UPlayFabAuthenticationContext, DeveloperSecretKey) == 0x0048);
static_assert(offsetof(UPlayFabAuthenticationContext, PlayFabId) == 0x0058);
static_assert(offsetof(UPlayFabRuntimeSettings, ProductionEnvironmentURL) == 0x0028);
static_assert(offsetof(UPlayFabRuntimeSettings, TitleId) == 0x0038);
static_assert(offsetof(UPlayFabRuntimeSettings, DeveloperSecretKey) == 0x0048);
