
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

#pragma pack(push, 0x1)

/// Enum /Script/NetCore.ENetworkFailure
/// Size: 0x01 (1 bytes)
enum class ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists                                          = 0,
	ENetworkFailure__NetDriverCreateFailure                                          = 1,
	ENetworkFailure__NetDriverListenFailure                                          = 2,
	ENetworkFailure__ConnectionLost                                                  = 3,
	ENetworkFailure__ConnectionTimeout                                               = 4,
	ENetworkFailure__FailureReceived                                                 = 5,
	ENetworkFailure__OutdatedClient                                                  = 6,
	ENetworkFailure__OutdatedServer                                                  = 7,
	ENetworkFailure__PendingConnectionFailure                                        = 8,
	ENetworkFailure__NetGuidMismatch                                                 = 9,
	ENetworkFailure__NetChecksumMismatch                                             = 10
};

/// Enum /Script/NetCore.ENetCloseResult
/// Size: 0x01 (1 bytes)
enum class ENetCloseResult : uint8_t
{
	ENetCloseResult__NetDriverAlreadyExists                                          = 0,
	ENetCloseResult__NetDriverCreateFailure                                          = 1,
	ENetCloseResult__NetDriverListenFailure                                          = 2,
	ENetCloseResult__ConnectionLost                                                  = 3,
	ENetCloseResult__ConnectionTimeout                                               = 4,
	ENetCloseResult__FailureReceived                                                 = 5,
	ENetCloseResult__OutdatedClient                                                  = 6,
	ENetCloseResult__OutdatedServer                                                  = 7,
	ENetCloseResult__PendingConnectionFailure                                        = 8,
	ENetCloseResult__NetGuidMismatch                                                 = 9,
	ENetCloseResult__NetChecksumMismatch                                             = 10,
	ENetCloseResult__SecurityMalformedPacket                                         = 11,
	ENetCloseResult__SecurityInvalidData                                             = 12,
	ENetCloseResult__SecurityClosed                                                  = 13,
	ENetCloseResult__Unknown                                                         = 14,
	ENetCloseResult__Success                                                         = 15,
	ENetCloseResult__Extended                                                        = 16,
	ENetCloseResult__HostClosedConnection                                            = 17,
	ENetCloseResult__Disconnect                                                      = 18,
	ENetCloseResult__Upgrade                                                         = 19,
	ENetCloseResult__PreLoginFailure                                                 = 20,
	ENetCloseResult__JoinFailure                                                     = 21,
	ENetCloseResult__JoinSplitFailure                                                = 22,
	ENetCloseResult__AddressResolutionFailed                                         = 23,
	ENetCloseResult__RPCDoS                                                          = 24,
	ENetCloseResult__Cleanup                                                         = 25,
	ENetCloseResult__MissingLevelPackage                                             = 26,
	ENetCloseResult__PacketHandlerIncomingError                                      = 27,
	ENetCloseResult__ZeroLastByte                                                    = 28,
	ENetCloseResult__ZeroSize                                                        = 29,
	ENetCloseResult__ReadHeaderFail                                                  = 30,
	ENetCloseResult__ReadHeaderExtraFail                                             = 31,
	ENetCloseResult__AckSequenceMismatch                                             = 32,
	ENetCloseResult__BunchBadChannelIndex                                            = 33,
	ENetCloseResult__BunchChannelNameFail                                            = 34,
	ENetCloseResult__BunchWrongChannelType                                           = 35,
	ENetCloseResult__BunchHeaderOverflow                                             = 36,
	ENetCloseResult__BunchDataOverflow                                               = 37,
	ENetCloseResult__BunchServerPackageMapExports                                    = 38,
	ENetCloseResult__BunchPrematureControlChannel                                    = 39,
	ENetCloseResult__BunchPrematureChannel                                           = 40,
	ENetCloseResult__BunchPrematureControlClose                                      = 41,
	ENetCloseResult__UnknownChannelType                                              = 42,
	ENetCloseResult__PrematureSend                                                   = 43,
	ENetCloseResult__CorruptData                                                     = 44,
	ENetCloseResult__SocketSendFailure                                               = 45,
	ENetCloseResult__BadChildConnectionIndex                                         = 46,
	ENetCloseResult__LogLimitInstant                                                 = 47,
	ENetCloseResult__LogLimitSustained                                               = 48,
	ENetCloseResult__EncryptionFailure                                               = 49,
	ENetCloseResult__EncryptionTokenMissing                                          = 50,
	ENetCloseResult__ReceivedNetGUIDBunchFail                                        = 51,
	ENetCloseResult__MaxReliableExceeded                                             = 52,
	ENetCloseResult__ReceivedNextBunchFail                                           = 53,
	ENetCloseResult__ReceivedNextBunchQueueFail                                      = 54,
	ENetCloseResult__PartialInitialReliableDestroy                                   = 55,
	ENetCloseResult__PartialMergeReliableDestroy                                     = 56,
	ENetCloseResult__PartialInitialNonByteAligned                                    = 57,
	ENetCloseResult__PartialNonByteAligned                                           = 58,
	ENetCloseResult__PartialFinalPackageMapExports                                   = 59,
	ENetCloseResult__PartialTooLarge                                                 = 60,
	ENetCloseResult__AlreadyOpen                                                     = 61,
	ENetCloseResult__ReliableBeforeOpen                                              = 62,
	ENetCloseResult__ReliableBufferOverflow                                          = 63,
	ENetCloseResult__RPCReliableBufferOverflow                                       = 64,
	ENetCloseResult__ControlChannelClose                                             = 65,
	ENetCloseResult__ControlChannelEndianCheck                                       = 66,
	ENetCloseResult__ControlChannelPlayerChannelFail                                 = 67,
	ENetCloseResult__ControlChannelMessageUnknown                                    = 68,
	ENetCloseResult__ControlChannelMessageFail                                       = 69,
	ENetCloseResult__ControlChannelMessagePayloadFail                                = 70,
	ENetCloseResult__ControlChannelBunchOverflowed                                   = 71,
	ENetCloseResult__ControlChannelQueueBunchOverflowed                              = 72,
	ENetCloseResult__ClientHasMustBeMappedGUIDs                                      = 73,
	ENetCloseResult__ClientSentDestructionInfo                                       = 74,
	ENetCloseResult__UnregisteredMustBeMappedGUID                                    = 75,
	ENetCloseResult__ObjectReplicatorReceivedBunchFail                               = 76,
	ENetCloseResult__ContentBlockFail                                                = 77,
	ENetCloseResult__ContentBlockHeaderRepLayoutFail                                 = 78,
	ENetCloseResult__ContentBlockHeaderIsActorFail                                   = 79,
	ENetCloseResult__ContentBlockHeaderObjFail                                       = 80,
	ENetCloseResult__ContentBlockHeaderPrematureEnd                                  = 81,
	ENetCloseResult__ContentBlockHeaderSubObjectActor                                = 82,
	ENetCloseResult__ContentBlockHeaderBadParent                                     = 83,
	ENetCloseResult__ContentBlockHeaderInvalidCreate                                 = 84,
	ENetCloseResult__ContentBlockHeaderStablyNamedFail                               = 85,
	ENetCloseResult__ContentBlockHeaderNoSubObjectClass                              = 86,
	ENetCloseResult__ContentBlockHeaderUObjectSubObject                              = 87,
	ENetCloseResult__ContentBlockHeaderAActorSubObject                               = 88,
	ENetCloseResult__ContentBlockHeaderFail                                          = 89,
	ENetCloseResult__ContentBlockPayloadBitsFail                                     = 90,
	ENetCloseResult__FieldHeaderRepIndex                                             = 91,
	ENetCloseResult__FieldHeaderBadRepIndex                                          = 92,
	ENetCloseResult__FieldHeaderPayloadBitsFail                                      = 93,
	ENetCloseResult__FieldPayloadFail                                                = 94,
	ENetCloseResult__BeaconControlFlowError                                          = 95,
	ENetCloseResult__BeaconUnableToParsePacket                                       = 96,
	ENetCloseResult__BeaconAuthenticationFailure                                     = 97,
	ENetCloseResult__BeaconLoginInvalidIdError                                       = 98,
	ENetCloseResult__BeaconLoginInvalidAuthHandlerError                              = 99,
	ENetCloseResult__BeaconAuthError                                                 = 100,
	ENetCloseResult__BeaconSpawnClientWorldPackageNameError                          = 101,
	ENetCloseResult__BeaconSpawnExistingActorError                                   = 102,
	ENetCloseResult__BeaconSpawnFailureError                                         = 103,
	ENetCloseResult__BeaconSpawnNetGUIDAckNoActor                                    = 104,
	ENetCloseResult__BeaconSpawnNetGUIDAckNoHost                                     = 105,
	ENetCloseResult__BeaconSpawnUnexpectedError                                      = 106,
	ENetCloseResult__FaultDisconnect                                                 = 107,
	ENetCloseResult__NotRecoverable                                                  = 108
};

/// Enum /Script/NetCore.EFastArraySerializerDeltaFlags
/// Size: 0x01 (1 bytes)
enum class EFastArraySerializerDeltaFlags : uint8_t
{
	EFastArraySerializerDeltaFlags__None                                             = 0,
	EFastArraySerializerDeltaFlags__HasBeenSerialized                                = 1,
	EFastArraySerializerDeltaFlags__HasDeltaBeenRequested                            = 2,
	EFastArraySerializerDeltaFlags__IsUsingDeltaSerialization                        = 4
};

/// Struct /Script/NetCore.NetAnalyticsDataConfig
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FNetAnalyticsDataConfig
{ 
	FName                                              DataName;                                                   // 0x0000   (0x0008)  
	bool                                               bEnabled;                                                   // 0x0008   (0x0001)  
	unsigned char                                      UnknownData00_7[0x3];                                       // 0x0009   (0x0003)  MISSED
};

/// Class /Script/NetCore.NetAnalyticsAggregatorConfig
/// Size: 0x0038 (56 bytes) (0x000028 - 0x000038) align 8 MaxSize: 0x0038
class UNetAnalyticsAggregatorConfig : public UObject
{ 
public:
	TArray<FNetAnalyticsDataConfig>                    NetAnalyticsData;                                           // 0x0028   (0x0010)  
};

/// Class /Script/NetCore.StatePerObjectConfig
/// Size: 0x0068 (104 bytes) (0x000028 - 0x000068) align 8 MaxSize: 0x0068
class UStatePerObjectConfig : public UObject
{ 
public:
	unsigned char                                      UnknownData00_8[0x28];                                      // 0x0028   (0x0028)  MISSED
	FString                                            PerObjectConfigSection;                                     // 0x0050   (0x0010)  
	bool                                               bEnabled;                                                   // 0x0060   (0x0001)  
	unsigned char                                      UnknownData01_7[0x7];                                       // 0x0061   (0x0007)  MISSED
};

/// Class /Script/NetCore.EscalationManagerConfig
/// Size: 0x0088 (136 bytes) (0x000068 - 0x000088) align 8 MaxSize: 0x0088
class UEscalationManagerConfig : public UStatePerObjectConfig
{ 
public:
	TArray<FString>                                    EscalationSeverity;                                         // 0x0068   (0x0010)  
	unsigned char                                      UnknownData00_7[0x10];                                      // 0x0078   (0x0010)  MISSED
};

/// Struct /Script/NetCore.FastArraySerializerItem
/// Size: 0x000C (12 bytes) (0x000000 - 0x00000C) align 4 MaxSize: 0x000C
struct FFastArraySerializerItem
{ 
	int32_t                                            ReplicationID;                                              // 0x0000   (0x0004)  
	int32_t                                            ReplicationKey;                                             // 0x0004   (0x0004)  
	int32_t                                            MostRecentArrayReplicationKey;                              // 0x0008   (0x0004)  
};

/// Struct /Script/NetCore.FastArraySerializer
/// Size: 0x0108 (264 bytes) (0x000000 - 0x000108) align 8 MaxSize: 0x0108
struct FFastArraySerializer
{ 
	unsigned char                                      UnknownData00_7[0x54];                                      // 0x0000   (0x0054)  MISSED
	int32_t                                            ArrayReplicationKey;                                        // 0x0054   (0x0004)  
	unsigned char                                      UnknownData01_6[0xA8];                                      // 0x0058   (0x00A8)  MISSED
	EFastArraySerializerDeltaFlags                     DeltaFlags;                                                 // 0x0100   (0x0001)  
	unsigned char                                      UnknownData02_7[0x7];                                       // 0x0101   (0x0007)  MISSED
};

/// Struct /Script/NetCore.StateStruct
/// Size: 0x0018 (24 bytes) (0x000000 - 0x000018) align 8 MaxSize: 0x0018
struct FStateStruct
{ 
	unsigned char                                      UnknownData00_7[0x8];                                       // 0x0000   (0x0008)  MISSED
	FString                                            StateName;                                                  // 0x0008   (0x0010)  
};

/// Struct /Script/NetCore.EscalationState
/// Size: 0x0030 (48 bytes) (0x000018 - 0x000030) align 8 MaxSize: 0x0030
struct FEscalationState : FStateStruct
{ 
	bool                                               bLogEscalate;                                               // 0x0018   (0x0001)  
	bool                                               bDormant;                                                   // 0x0019   (0x0001)  
	int16_t                                            CooloffTime;                                                // 0x001A   (0x0002)  
	int16_t                                            AutoEscalateTime;                                           // 0x001C   (0x0002)  
	int8_t                                             HighestTimePeriod;                                          // 0x001E   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x001F   (0x0001)  MISSED
	TArray<int8_t>                                     AllTimePeriods;                                             // 0x0020   (0x0010)  
};

/// Struct /Script/NetCore.NetFaultState
/// Size: 0x0040 (64 bytes) (0x000030 - 0x000040) align 8 MaxSize: 0x0040
struct FNetFaultState : FEscalationState
{ 
	bool                                               bCloseConnection;                                           // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x1];                                       // 0x0031   (0x0001)  MISSED
	int16_t                                            EscalateQuotaFaultsPerPeriod;                               // 0x0032   (0x0002)  
	int8_t                                             EscalateQuotaFaultPercentPerPeriod;                         // 0x0034   (0x0001)  
	unsigned char                                      UnknownData01_6[0x1];                                       // 0x0035   (0x0001)  MISSED
	int16_t                                            DescalateQuotaFaultsPerPeriod;                              // 0x0036   (0x0002)  
	int8_t                                             DescalateQuotaFaultPercentPerPeriod;                        // 0x0038   (0x0001)  
	int8_t                                             EscalateQuotaTimePeriod;                                    // 0x0039   (0x0001)  
	unsigned char                                      UnknownData02_7[0x6];                                       // 0x003A   (0x0006)  MISSED
};

#pragma pack(pop)


static_assert(sizeof(FNetAnalyticsDataConfig) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(UNetAnalyticsAggregatorConfig) == 0x0038); // 56 bytes (0x000028 - 0x000038)
static_assert(sizeof(UStatePerObjectConfig) == 0x0068); // 104 bytes (0x000028 - 0x000068)
static_assert(sizeof(UEscalationManagerConfig) == 0x0088); // 136 bytes (0x000068 - 0x000088)
static_assert(sizeof(FFastArraySerializerItem) == 0x000C); // 12 bytes (0x000000 - 0x00000C)
static_assert(sizeof(FFastArraySerializer) == 0x0108); // 264 bytes (0x000000 - 0x000108)
static_assert(sizeof(FStateStruct) == 0x0018); // 24 bytes (0x000000 - 0x000018)
static_assert(sizeof(FEscalationState) == 0x0030); // 48 bytes (0x000018 - 0x000030)
static_assert(sizeof(FNetFaultState) == 0x0040); // 64 bytes (0x000030 - 0x000040)
static_assert(offsetof(FNetAnalyticsDataConfig, DataName) == 0x0000);
static_assert(offsetof(UNetAnalyticsAggregatorConfig, NetAnalyticsData) == 0x0028);
static_assert(offsetof(UStatePerObjectConfig, PerObjectConfigSection) == 0x0050);
static_assert(offsetof(UEscalationManagerConfig, EscalationSeverity) == 0x0068);
static_assert(offsetof(FFastArraySerializer, DeltaFlags) == 0x0100);
static_assert(offsetof(FStateStruct, StateName) == 0x0008);
static_assert(offsetof(FEscalationState, AllTimePeriods) == 0x0020);
