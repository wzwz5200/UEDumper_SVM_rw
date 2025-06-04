
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
/// dependency: MetasoundFrontend

#pragma pack(push, 0x1)

/// Enum /Script/MetasoundEngine.EMetaSoundMessageLevel
/// Size: 0x01 (1 bytes)
enum class EMetaSoundMessageLevel : uint8_t
{
	EMetaSoundMessageLevel__Error                                                    = 0,
	EMetaSoundMessageLevel__Warning                                                  = 1,
	EMetaSoundMessageLevel__Info                                                     = 2
};

/// Enum /Script/MetasoundEngine.EMetasoundSourceAudioFormat
/// Size: 0x01 (1 bytes)
enum class EMetasoundSourceAudioFormat : uint8_t
{
	EMetasoundSourceAudioFormat__Mono                                                = 0,
	EMetasoundSourceAudioFormat__Stereo                                              = 1,
	EMetasoundSourceAudioFormat__Quad                                                = 2,
	EMetasoundSourceAudioFormat__FiveDotOne                                          = 3,
	EMetasoundSourceAudioFormat__SevenDotOne                                         = 4,
	EMetasoundSourceAudioFormat__COUNT                                               = 5
};

/// Class /Script/MetasoundEngine.MetasoundGeneratorHandle
/// Size: 0x0070 (112 bytes) (0x000028 - 0x000070) align 8 MaxSize: 0x0070
class UMetasoundGeneratorHandle : public UObject
{ 
public:
	class UAudioComponent*                             AudioComponent;                                             // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED
	class UMetaSoundSource*                            CachedMetasoundSource;                                      // 0x0038   (0x0008)  
	unsigned char                                      UnknownData01_7[0x30];                                      // 0x0040   (0x0030)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.CreateMetaSoundGeneratorHandle
	// class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);                     // [0x28b2440] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetasoundGeneratorHandle.ApplyParameterPack
	// bool ApplyParameterPack(class UMetasoundParameterPack* Pack);                                                            // [0x28b21a0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
/// Size: 0x0020 (32 bytes) (0x000000 - 0x000020) align 8 MaxSize: 0x0020
struct FDefaultMetaSoundAssetAutoUpdateSettings
{ 
	FSoftObjectPath                                    Metasound;                                                  // 0x0000   (0x0020)  
};

/// Class /Script/MetasoundEngine.MetaSoundSettings
/// Size: 0x0080 (128 bytes) (0x000038 - 0x000080) align 8 MaxSize: 0x0080
class UMetaSoundSettings : public UDeveloperSettings
{ 
public:
	bool                                               bAutoUpdateEnabled;                                         // 0x0038   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0039   (0x0007)  MISSED
	TArray<FMetasoundFrontendClassName>                AutoUpdateDenylist;                                         // 0x0040   (0x0010)  
	TArray<FDefaultMetaSoundAssetAutoUpdateSettings>   AutoUpdateAssetDenylist;                                    // 0x0050   (0x0010)  
	bool                                               bAutoUpdateLogWarningOnDroppedConnection;                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0061   (0x0007)  MISSED
	TArray<FDirectoryPath>                             DirectoriesToRegister;                                      // 0x0068   (0x0010)  
	int32_t                                            DenyListCacheChangeID;                                      // 0x0078   (0x0004)  
	unsigned char                                      UnknownData02_7[0x4];                                       // 0x007C   (0x0004)  MISSED
};

/// Class /Script/MetasoundEngine.MetasoundEditorGraphBase
/// Size: 0x0060 (96 bytes) (0x000060 - 0x000060) align 8 MaxSize: 0x0060
class UMetasoundEditorGraphBase : public UEdGraph
{ 
public:
};

/// Class /Script/MetasoundEngine.MetaSoundPatch
/// Size: 0x0358 (856 bytes) (0x000028 - 0x000358) align 8 MaxSize: 0x0358
class UMetaSoundPatch : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x68];                                      // 0x0028   (0x0068)  MISSED
	FMetasoundFrontendDocument                         RootMetaSoundDocument;                                      // 0x0090   (0x01C8)  
	SDK_UNDEFINED(80,1261) /* TSet<FString> */         __um(ReferencedAssetClassKeys);                             // 0x0258   (0x0050)  
	SDK_UNDEFINED(80,1262) /* TSet<UObject*> */        __um(ReferencedAssetClassObjects);                          // 0x02A8   (0x0050)  
	SDK_UNDEFINED(80,1263) /* TSet<FSoftObjectPath> */ __um(ReferenceAssetClassCache);                             // 0x02F8   (0x0050)  
	FGuid                                              AssetClassID;                                               // 0x0348   (0x0010)  
};

/// Struct /Script/MetasoundEngine.MetaSoundAsyncAssetDependencies
/// Size: 0x0030 (48 bytes) (0x000000 - 0x000030) align 8 MaxSize: 0x0030
struct FMetaSoundAsyncAssetDependencies
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	class UObject*                                     Metasound;                                                  // 0x0008   (0x0008)  
	unsigned char                                      UnknownData01_7[0x20];                                      // 0x0010   (0x0020)  MISSED
};

/// Class /Script/MetasoundEngine.MetaSoundAssetSubsystem
/// Size: 0x01E0 (480 bytes) (0x000030 - 0x0001E0) align 8 MaxSize: 0x01E0
class UMetaSoundAssetSubsystem : public UEngineSubsystem
{ 
public:
	unsigned char                                      UnknownData00_8[0x8];                                       // 0x0030   (0x0008)  MISSED
	TArray<FMetaSoundAsyncAssetDependencies>           LoadingDependencies;                                        // 0x0038   (0x0010)  
	unsigned char                                      UnknownData01_7[0x198];                                     // 0x0048   (0x0198)  MISSED


	/// Functions
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.UnregisterAssetClassesInDirectories
	// void UnregisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                 // [0x28b2830] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MetasoundEngine.MetaSoundAssetSubsystem.RegisterAssetClassesInDirectories
	// void RegisterAssetClassesInDirectories(TArray<FMetaSoundAssetDirectory>& Directories);                                   // [0x28b2670] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MetasoundEngine.MetaSoundSource
/// Size: 0x0840 (2112 bytes) (0x0004A0 - 0x000840) align 16 MaxSize: 0x0840
class UMetaSoundSource : public USoundWaveProcedural
{ 
public:
	unsigned char                                      UnknownData00_8[0x68];                                      // 0x04A0   (0x0068)  MISSED
	FMetasoundFrontendDocument                         RootMetaSoundDocument;                                      // 0x0508   (0x01C8)  
	SDK_UNDEFINED(80,1264) /* TSet<FString> */         __um(ReferencedAssetClassKeys);                             // 0x06D0   (0x0050)  
	SDK_UNDEFINED(80,1265) /* TSet<UObject*> */        __um(ReferencedAssetClassObjects);                          // 0x0720   (0x0050)  
	SDK_UNDEFINED(80,1266) /* TSet<FSoftObjectPath> */ __um(ReferenceAssetClassCache);                             // 0x0770   (0x0050)  
	EMetasoundSourceAudioFormat                        OutputFormat;                                               // 0x07C0   (0x0001)  
	unsigned char                                      UnknownData01_6[0x3];                                       // 0x07C1   (0x0003)  MISSED
	FGuid                                              AssetClassID;                                               // 0x07C4   (0x0010)  
	unsigned char                                      UnknownData02_7[0x6C];                                      // 0x07D4   (0x006C)  MISSED
};

/// Struct /Script/MetasoundEngine.MetaSoundAssetDirectory
/// Size: 0x0010 (16 bytes) (0x000000 - 0x000010) align 8 MaxSize: 0x0010
struct FMetaSoundAssetDirectory
{ 
	FDirectoryPath                                     Directory;                                                  // 0x0000   (0x0010)  
};

#pragma pack(pop)


static_assert(sizeof(UMetasoundGeneratorHandle) == 0x0070); // 112 bytes (0x000028 - 0x000070)
static_assert(sizeof(FDefaultMetaSoundAssetAutoUpdateSettings) == 0x0020); // 32 bytes (0x000000 - 0x000020)
static_assert(sizeof(UMetaSoundSettings) == 0x0080); // 128 bytes (0x000038 - 0x000080)
static_assert(sizeof(UMetasoundEditorGraphBase) == 0x0060); // 96 bytes (0x000060 - 0x000060)
static_assert(sizeof(UMetaSoundPatch) == 0x0358); // 856 bytes (0x000028 - 0x000358)
static_assert(sizeof(FMetaSoundAsyncAssetDependencies) == 0x0030); // 48 bytes (0x000000 - 0x000030)
static_assert(sizeof(UMetaSoundAssetSubsystem) == 0x01E0); // 480 bytes (0x000030 - 0x0001E0)
static_assert(sizeof(UMetaSoundSource) == 0x0840); // 2112 bytes (0x0004A0 - 0x000840)
static_assert(sizeof(FMetaSoundAssetDirectory) == 0x0010); // 16 bytes (0x000000 - 0x000010)
static_assert(offsetof(UMetasoundGeneratorHandle, AudioComponent) == 0x0028);
static_assert(offsetof(UMetasoundGeneratorHandle, CachedMetasoundSource) == 0x0038);
static_assert(offsetof(FDefaultMetaSoundAssetAutoUpdateSettings, Metasound) == 0x0000);
static_assert(offsetof(UMetaSoundSettings, AutoUpdateDenylist) == 0x0040);
static_assert(offsetof(UMetaSoundSettings, AutoUpdateAssetDenylist) == 0x0050);
static_assert(offsetof(UMetaSoundSettings, DirectoriesToRegister) == 0x0068);
static_assert(offsetof(UMetaSoundPatch, RootMetaSoundDocument) == 0x0090);
static_assert(offsetof(UMetaSoundPatch, AssetClassID) == 0x0348);
static_assert(offsetof(FMetaSoundAsyncAssetDependencies, Metasound) == 0x0008);
static_assert(offsetof(UMetaSoundAssetSubsystem, LoadingDependencies) == 0x0038);
static_assert(offsetof(UMetaSoundSource, RootMetaSoundDocument) == 0x0508);
static_assert(offsetof(UMetaSoundSource, OutputFormat) == 0x07C0);
static_assert(offsetof(UMetaSoundSource, AssetClassID) == 0x07C4);
static_assert(offsetof(FMetaSoundAssetDirectory, Directory) == 0x0000);
