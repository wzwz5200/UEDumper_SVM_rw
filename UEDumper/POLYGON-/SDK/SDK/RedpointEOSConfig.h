
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once

#pragma pack(push, 0x1)

/// Enum /Script/RedpointEOSConfig.EDedicatedServersDistributionMode
/// Size: 0x01 (1 bytes)
enum class EDedicatedServersDistributionMode : uint8_t
{
	EDedicatedServersDistributionMode__DevelopersOnly                                = 0,
	EDedicatedServersDistributionMode__DevelopersAndPlayers                          = 1,
	EDedicatedServersDistributionMode__PlayersOnly                                   = 2
};

/// Enum /Script/RedpointEOSConfig.EEOSApiVersion
/// Size: 0x01 (1 bytes)
enum class EEOSApiVersion : uint8_t
{
	EEOSApiVersion__v2023_10                                                         = 0,
	EEOSApiVersion__v2022_10                                                         = 1,
	EEOSApiVersion__v2022_05                                                         = 2,
	EEOSApiVersion__v2022_02                                                         = 3
};

/// Enum /Script/RedpointEOSConfig.ENetworkAuthenticationMode
/// Size: 0x01 (1 bytes)
enum class ENetworkAuthenticationMode : uint8_t
{
	ENetworkAuthenticationMode__Default                                              = 0,
	ENetworkAuthenticationMode__IDToken                                              = 1,
	ENetworkAuthenticationMode__Off                                                  = 2
};

/// Enum /Script/RedpointEOSConfig.EPartyJoinabilityConstraint
/// Size: 0x01 (1 bytes)
enum class EPartyJoinabilityConstraint : uint8_t
{
	EPartyJoinabilityConstraint__AllowPlayersInMultipleParties                       = 0,
	EPartyJoinabilityConstraint__IgnoreInvitesIfAlreadyInParty                       = 1
};

/// Enum /Script/RedpointEOSConfig.EPresenceAdvertisementType
/// Size: 0x01 (1 bytes)
enum class EPresenceAdvertisementType : uint8_t
{
	EPresenceAdvertisementType__None                                                 = 0,
	EPresenceAdvertisementType__Party                                                = 1,
	EPresenceAdvertisementType__Session                                              = 2
};

/// Enum /Script/RedpointEOSConfig.EStatTypingRule
/// Size: 0x01 (1 bytes)
enum class EStatTypingRule : uint8_t
{
	EStatTypingRule__Int32                                                           = 0,
	EStatTypingRule__Bool                                                            = 1,
	EStatTypingRule__FloatTruncated                                                  = 2,
	EStatTypingRule__FloatEncoded                                                    = 3,
	EStatTypingRule__DoubleEncoded                                                   = 4
};

#pragma pack(pop)


