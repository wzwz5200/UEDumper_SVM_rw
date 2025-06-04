
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

/// Struct /Script/PingQoS.PingQoSInfo
/// Size: 0x0040 (64 bytes) (0x000000 - 0x000040) align 8 MaxSize: 0x0040
struct FPingQoSInfo
{ 
	FString                                            URL;                                                        // 0x0000   (0x0010)  
	FString                                            IP;                                                         // 0x0010   (0x0010)  
	bool                                               bUseIP;                                                     // 0x0020   (0x0001)  
	unsigned char                                      UnknownData00_6[0x3];                                       // 0x0021   (0x0003)  MISSED
	int32_t                                            Port;                                                       // 0x0024   (0x0004)  
	FString                                            Region;                                                     // 0x0028   (0x0010)  
	int32_t                                            Ping;                                                       // 0x0038   (0x0004)  
	unsigned char                                      UnknownData01_7[0x4];                                       // 0x003C   (0x0004)  MISSED
};

/// Class /Script/PingQoS.PingQoSSubsystem
/// Size: 0x0060 (96 bytes) (0x000030 - 0x000060) align 8 MaxSize: 0x0060
class UPingQoSSubsystem : public UEngineSubsystem
{ 
public:
	SDK_UNDEFINED(16,1280) /* FMulticastInlineDelegate */ __um(OnPingCompleted);                                   // 0x0030   (0x0010)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0040   (0x0008)  MISSED
	TArray<FPingQoSInfo>                               Infos;                                                      // 0x0048   (0x0010)  
	unsigned char                                      UnknownData01_7[0x8];                                       // 0x0058   (0x0008)  MISSED


	/// Functions
	// Function /Script/PingQoS.PingQoSSubsystem.Update
	// bool Update();                                                                                                           // [0x1e95240] Native|Public|BlueprintCallable 
	// Function /Script/PingQoS.PingQoSSubsystem.Recv
	// void Recv(TArray<FPingQoSInfo>& ResultInfos);                                                                            // [0x1e95030] Final|Native|Private|HasOutParms 
	// Function /Script/PingQoS.PingQoSSubsystem.Init
	// void Init(TArray<FPingQoSInfo> SetInfo);                                                                                 // [0x1e94f20] Native|Public|BlueprintCallable 
};

#pragma pack(pop)


static_assert(sizeof(FPingQoSInfo) == 0x0040); // 64 bytes (0x000000 - 0x000040)
static_assert(sizeof(UPingQoSSubsystem) == 0x0060); // 96 bytes (0x000030 - 0x000060)
static_assert(offsetof(FPingQoSInfo, URL) == 0x0000);
static_assert(offsetof(FPingQoSInfo, IP) == 0x0010);
static_assert(offsetof(FPingQoSInfo, Region) == 0x0028);
static_assert(offsetof(UPingQoSSubsystem, Infos) == 0x0048);
