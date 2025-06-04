
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Struct /Script/SessionMessages.SessionServicePing
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FSessionServicePing
{ 
	FString                                            Username;                                                   // 0x0000   (0x0010)  
};

/// Struct /Script/SessionMessages.SessionServicePong
/// Size: 0x0090 (144 bytes) (0x000000 - 0x000090) align 8 MaxSize: 0x0090
struct FSessionServicePong
{ 
	bool                                               Authorized;                                                 // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0001   (0x0007)  MISSED
	FString                                            BuildDate;                                                  // 0x0008   (0x0010)  
	FString                                            DeviceName;                                                 // 0x0018   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0028   (0x0010)  
	FString                                            InstanceName;                                               // 0x0038   (0x0010)  
	FString                                            PlatformName;                                               // 0x0048   (0x0010)  
	FGuid                                              SessionId;                                                  // 0x0058   (0x0010)  
	FString                                            SessionName;                                                // 0x0068   (0x0010)  
	FString                                            SessionOwner;                                               // 0x0078   (0x0010)  
	bool                                               Standalone;                                                 // 0x0088   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0089   (0x0007)  MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLog
/// Size: 0x0038 (56 bytes) (0x000000 - 0x000038) align 8 MaxSize: 0x0038
struct FSessionServiceLog
{ 
	FName                                              Category;                                                   // 0x0000   (0x0008)  
	FString                                            Data;                                                       // 0x0008   (0x0010)  
	FGuid                                              InstanceId;                                                 // 0x0018   (0x0010)  
	double                                             TimeSeconds;                                                // 0x0028   (0x0008)  
	char                                               Verbosity;                                                  // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_7[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLogSubscribe
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FSessionServiceLogSubscribe
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

/// Struct /Script/SessionMessages.SessionServiceLogUnsubscribe
/// Size: 0x0001 (1 bytes) (0x000000 - 0x000001) align 1 MaxSize: 0x0001
struct FSessionServiceLogUnsubscribe
{ 
	unsigned char                                      UnknownData00_2[0x1];                                       // 0x0000   (0x0001)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FSessionServicePing) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(sizeof(FSessionServicePong) == 0x0090); // 144 bytes (0x000000 - 0x000090)
static_assert(sizeof(FSessionServiceLog) == 0x0038); // 56 bytes (0x000000 - 0x000038)
static_assert(sizeof(FSessionServiceLogSubscribe) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(sizeof(FSessionServiceLogUnsubscribe) == 0x0001); // 1 bytes (0x000000 - 0x000001)
static_assert(offsetof(FSessionServicePing, Username) == 0x0000);
static_assert(offsetof(FSessionServicePong, BuildDate) == 0x0008);
static_assert(offsetof(FSessionServicePong, DeviceName) == 0x0018);
static_assert(offsetof(FSessionServicePong, InstanceId) == 0x0028);
static_assert(offsetof(FSessionServicePong, InstanceName) == 0x0038);
static_assert(offsetof(FSessionServicePong, PlatformName) == 0x0048);
static_assert(offsetof(FSessionServicePong, SessionId) == 0x0058);
static_assert(offsetof(FSessionServicePong, SessionName) == 0x0068);
static_assert(offsetof(FSessionServicePong, SessionOwner) == 0x0078);
static_assert(offsetof(FSessionServiceLog, Category) == 0x0000);
static_assert(offsetof(FSessionServiceLog, Data) == 0x0008);
static_assert(offsetof(FSessionServiceLog, InstanceId) == 0x0018);
