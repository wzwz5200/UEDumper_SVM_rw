
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/EngineMessages.EngineServicePing
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FEngineServicePing
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/EngineMessages.EngineServicePong
/// Size: 0x0050 (80 bytes) (0x000000 - 0x000050) align 8 MaxSize: 0x0050
struct FEngineServicePong
{ 
	FString                                            CurrentLevel;                                               // 0x0000   (0x0010)  
	int32_t                                            EngineVersion;                                              // 0x0010   (0x0004)  
	bool                                               HasBegunPlay;                                               // 0x0014   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0015   (0x0003)  MISSED
	FGuid                                              InstanceId;                                                 // 0x0018   (0x0010)  
	FString                                            InstanceType;                                               // 0x0028   (0x0010)  
	FGuid                                              SessionId;                                                  // 0x0038   (0x0010)  
	float                                              WorldTimeSeconds;                                           // 0x0048   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x004C   (0x0004)  MISSED
};

/// Struct /Script/EngineMessages.EngineServiceAuthDeny
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FEngineServiceAuthDeny
{ 
	FString                                            Username;                                                   // 0x0000   (0x0010)  
	FString                                            UserToDeny;                                                 // 0x0010   (0x0010)  
};

/// Struct /Script/EngineMessages.EngineServiceAuthGrant
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FEngineServiceAuthGrant
{ 
	FString                                            Username;                                                   // 0x0000   (0x0010)  
	FString                                            UserToGrant;                                                // 0x0010   (0x0010)  
};

/// Struct /Script/EngineMessages.EngineServiceExecuteCommand
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FEngineServiceExecuteCommand
{ 
	FString                                            Command;                                                    // 0x0000   (0x0010)  
	FString                                            Username;                                                   // 0x0010   (0x0010)  
};

/// Struct /Script/EngineMessages.EngineServiceTerminate
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FEngineServiceTerminate
{ 
	FString                                            Username;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/EngineMessages.EngineServiceNotification
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FEngineServiceNotification
{ 
	FString                                            Text;                                                       // 0x0000   (0x0010)  
	double                                             TimeSeconds;                                                // 0x0010   (0x0008)  
};

#pragma pack(pop)


static_assert(sizeof(FEngineServicePing) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FEngineServicePong) == 0x0050); // 80 bytes (0x000000 - 0x000050)
static_assert(sizeof(FEngineServiceAuthDeny) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEngineServiceAuthGrant) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEngineServiceExecuteCommand) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(FEngineServiceTerminate) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FEngineServiceNotification) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(offsetof(FEngineServicePong, CurrentLevel) == 0x0000);
static_assert(offsetof(FEngineServicePong, InstanceId) == 0x0018);
static_assert(offsetof(FEngineServicePong, InstanceType) == 0x0028);
static_assert(offsetof(FEngineServicePong, SessionId) == 0x0038);
static_assert(offsetof(FEngineServiceAuthDeny, Username) == 0x0000);
static_assert(offsetof(FEngineServiceAuthDeny, UserToDeny) == 0x0010);
static_assert(offsetof(FEngineServiceAuthGrant, Username) == 0x0000);
static_assert(offsetof(FEngineServiceAuthGrant, UserToGrant) == 0x0010);
static_assert(offsetof(FEngineServiceExecuteCommand, Command) == 0x0000);
static_assert(offsetof(FEngineServiceExecuteCommand, Username) == 0x0010);
static_assert(offsetof(FEngineServiceTerminate, Username) == 0x0000);
static_assert(offsetof(FEngineServiceNotification, Text) == 0x0000);
